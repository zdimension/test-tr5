# test-tr5
> *it's a tr5 test©®™*

**edit** at steffen's request all occurences of `shit` have been replaced by the more formal `holy shit`

basically some time ago some folks on the forums leaked a tr4-5 psx (playstation 1) sdk containing, amongst other things, alpha/beta levels, internal files, beta (psx) builds and the most interesting and useful : symbol files.

### what is a symbol file

a symbol file is a file containing symbols

### what is a symbol

it's something with letters n holy shit

### could you be more precise

yes

### yes

a symbol file contains addresses in an executable file, and the name of the **thing** that lives at that address.

a **thing** can be:

 - a global variable
 - a function

### why is it useful

because when you want to understand the inner workings of a program you need to decompile/reverse-engineer it using a software like IDA which is awesome btw

but the problem is that when you open it you get this

![](https://i.imgur.com/n7PBInh.png)

because when you compile something to machine code, it's compiled to machine code, and machine code doesn't give a damn about functions or stuff like that

> except if your program has exported functions but no one cares

so as I was saying the symbol file contains a list of functions in the executable, so that you can run the program and debug it, see in what function holy shit is happening, etc

this is very useful, because apart from making mods and things like that, you can also understand how the program works, and then in the case of tomb raider you can try understanding how the level files, etc, work and make your own engine, like [opentomb](https://github.com/opentomb/OpenTomb), [openlara](https://github.com/XProger/OpenLara/) or [edisonengine](https://github.com/stohrendorf/EdisonEngine). they are all awesome. but not enough awesomest because we haven't yet understood all of the files used by the tr games.

## so what did you do

well one day some smart guy named steffen ohrendorf (that makes edisonengine) took the MAIN.SYM symbol file, which was encoded in some weird psx format, and converted it to a readable text file using [a program he made](https://github.com/stohrendorf/symdump).

this file is available here :
 - `dump (1) - Copie.txt` is the original file by steffen
 - `dump (1).txt` is the same file except the initial list of addresses has been removed to allow easier scrolling through the file

so as I was bored I did something :
- I took the file, listed all the listed files (the file contains function definitions and the name of the file they were defined in) and created them (that's the `GAME` and `SPEC_PSX` folders)
- I created the `.C` files named in the dump
- I put all the functions in their respective files
- then I created header files with the same names as the `.C` files and copied the func defs in there (no idea why I did that, but it seemed a great idea back then)
- then as I was still bored I put all the structs from the dump in a file called `structs.h`
- then as my boredom was converging towards nine thousand, I tried putting the structs from `strucs.h` into the files where it was the most probable they were defined in

after doing that, we can say that we have a source tree that is very similar to the one original core design devs had on their computers, the only missing thing should be the code of the functions themselves, and of course the preprocessor macros

## but what are all those weird files

- `MAIN.map` and `MAIN.idc` are copies of my IDA database of `MAIN.EXE` (the leaked tr5 psx exe). those aren't the real idb file, but you can import the `idc` file into IDA to get all the function names.

##### important note when importing the existing .map file in ida i noticed that there were duplicates. so i made a script that added digits. example if there is three `memset` the first will be `memset`, the second `memset_D2` and the third `memset_D3`

## yes

also the folder `SPEC_PC` is completely extrapolated as we don't have any info about the pc version of the game

##### other node in the map files I will provide here I am using the following function naming conventions :
- `newsub_12345` = the function **wasn't** present in the leaked psx exe and we have no info (we will need to guess)
- `unksub_12345` = the function **was** present in the leaked psx exe but not in the symbol file, so it was already un named and we have no info
in that case, the address (`12345`) is the address of the corresponding **existing** function in the leaked psx exe, not in the retail one
- `sub_12345` (default name) = we haven't searched yet

#### hidden category
*this is for me because i'm too lazy to create a file for that*
```python
import idautils
# returns default name for function at address
genfn=lambda addr:"sub_%05X" % addr

# returns a list of functions in format (addr, name)
funcs=lambda:[(fea,GetFunctionName(fea)) for fea in Functions(SegStart(BeginEA()),SegEnd(BeginEA()))]

# returns number of unnamed functions
sum(1 for f in funcs() if f[1] == genfn(f[0]))

# get array
def gar(pos, len, size):  return [(idc.Byte if size == 1 else (idc.Word if size == 2 else idc.Dword))(pos+size*x) for x in range(len)]

# get array in form { item, item, item}
def garc(pos,len,size): return "{\n\t" + ", ".join([("0x%0" + str(size * 2) + "X") % y for y in gar(pos,len,size)]) + " \n};"

# read ascii null terminated string, returns tuple (string, next pos)
def readascii(pos):
 ret=""
 while len(ret) < 1024:
  curc = idc.Byte(pos)
  pos += 1
  if curc == 0: break
  ret += chr(curc)
 return (ret, pos)

# read ascii strings sequentially
def garslist(pos, len):
 sts=[]
 for i in range(len):
  s, pos = readascii(pos)
  sts.append(s)
 return sts

# read an array of pointers to strings and read the strings
def gars(pos, len):
 sts=[]
 for i in range(len):
  addr = idc.Dword(pos)
  pos += 4
  sts.append(readascii(addr)[0])
 return sts

# gars, in C code
def garsc(pos, len):return "{\n\t" + ", ".join(["\"" + x + "\"" for x in gars(pos, len)]) + "\n};"

def garc2d(pos, len1, len2, size): return "{\n\t" + ",\n".join([("{ " + ", ".join([("0x%0" + str(size * 2) + "X") % y for y in gar(pos+i*len2*size,len2,size)]) + " }") for i in range(len1)]) + "\n};"

def garc2dch(pos, len1, len2, size): return "{\n\t" + ",\n".join([("{ " + ", ".join([("'" + chr(y) + "'") for y in gar(pos+i*len2*size,len2,size)]) + " }") for i in range(len1)]) + "\n};"

# get name
def gn(ea):return [x for x in idautils.Names() if x[0]==ea][0][1]

# get name (+ gp)
def gngp(ea):
 a=[x for x in idautils.Names() if x[0]==ea+0xa05b4]
 if a:return a[0][1]
 else: return gngp(0x80000000+ea) if ea<0x80000000 else "nope "+ggp(ea)

def ggp(x):return "%x"%(0xa05b4+x)

def getjmp(ea):
 y=list(XrefsFrom(ea))
 if y: return y[0].to
 else: return 0
def x(a):return "%x"%a

def bestunimpl(unimpl):
	exclude = lambda f: "special" in f or f in ["ClearSpidersPatch", "lara_as_climbroped"]
	u = funcs()
	res = []
	for f in unimpl:
		if not exclude(f) and any(y for y in u if y[1] == f):
			c = list(Chunks([x[0] for x in u if x[1] == f][0]))[0]
			if len(c) < 2: print(f + "\n" + repr(c))
			res.append((f, c[1] - c[0]))
	return sorted(res, key=lambda x: x[1])[::-1]

def tosign(x, size):return x if x < (2**size/2) else x-(2**size)

def getmac(fcs):
	uniq=set(fcs)
	u = funcs()
	res=[]
	for f in u:
		n = f[1]
		if "__" in n:n=n[0:n.index("__")]
		if n not in uniq and f[1][0] != "." and "sub_" not in f[1]:
			c = list(Chunks([x[0] for x in u if x[1] == f[1]][0]))[0]
			if len(c) < 2: print(f + "\n" + repr(c))
			res.append((f[1], c[1] - c[0]))
	return sorted(res, key=lambda x: x[1])[::-1]
		
```
--> [::-27]


also regex

```
(.*) (.*)\((.*)\);

$1 $2($3)\n{\n\tS_Warn("[$2] - Unimplemented!\\n");\n}\n
```


convert struct to typedef struct

```
(?s)struct ([A-Za-z0-9_]+)(?:(?:\s*)(\/\/(?:[^\n]+)*)*)(?:\n?){([^}]+)};

typedef struct\n{$3} $1; $2
```
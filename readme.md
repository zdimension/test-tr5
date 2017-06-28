# test-tr5
> *it's a tr5 test©®™*

**edit** at steffen's request all occurences of `holy shit` have been replaced by the more formal `holy shit`

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
# returns default name for function at address
genfn=lambda addr:"sub_%05X" % addr

# returns a list of functions in format (addr, name)
funcs=lambda:[(fea,GetFunctionName(fea)) for fea in Functions(SegStart(BeginEA()),SegEnd(BeginEA()))]

# returns number of unnamed functions
sum(1 for f in funcs() if f[1] == genfn(f[0]))
```
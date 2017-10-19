import shutil
import os

files = [
	"UNKNOWN0",
	"UNKNOWN1",
	"UNKNOWN2",
	"UNKNOWN3",
	"UNKNOWN4",
	"UNKNOWN5",
	"UNKNOWN6",
	"LEVELLOAD",
]

fn = input("Filename: [SETUP.MOD] ") or "SETUP.MOD"

entries = []

def readInt(fp):
	return int.from_bytes(fp.read(4), byteorder="little")

with open(fn, "rb") as f:
	for i in files:
		entries.append([i, readInt(f), 0])

	entries.append(["NULL", os.path.getsize(fn), 0])

	entries = sorted(entries, key=lambda x:x[1])

	print(repr(entries))

	for i in range(len(entries) - 1):
		entries[i][2] = entries[i + 1][1] - entries[i][1]

	print(repr(entries))

	del entries[-1]

	fol = input("Folder: [SetupmodExtr] ") or "SetupmodExtr"
	
	if os.path.exists(fol):
		shutil.rmtree(fol)
	
	os.makedirs(fol)
	
	for a in entries:
		with open(os.path.join(fol, a[0]) + ".BIN", "wb") as of:
			f.seek(a[1])
			of.write(f.read(a[2]))
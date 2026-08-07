# Ghidra Headless 反编译脚本：按清单导出指定函数的伪 C 代码
# 用法：analyzeHeadless <proj> <projname> -process df_community_r -readOnly \
#       -postScript ghidra_decompile_targets.py <targets_file> <out_file> -scriptPath <dir>
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor
import sys

args = sys.argv[1:]  # Ghidra 会把脚本名后的参数传进来
targets_file = args[0] if len(args) > 0 else "/tmp/ghidra_targets.txt"
out_file = args[1] if len(args) > 1 else "/tmp/ghidra_decompiled.c"

with open(targets_file, "r") as f:
    targets = set(line.strip() for line in f if line.strip())

decomp = DecompInterface()
decomp.openProgram(currentProgram)
monitor = ConsoleTaskMonitor()

fm = currentProgram.getFunctionManager()
out = open(out_file, "w")
count = 0
for f in fm.getFunctions(True):
    name = f.getName()
    if name not in targets:
        continue
    out.write("==== %s @ %s ====\n" % (name, f.getEntryPoint()))
    res = decomp.decompileFunction(f, 120, monitor)
    if res.decompileCompleted():
        out.write(res.getDecompiledFunction().getC())
    else:
        out.write("/* DECOMPILE FAILED */\n")
    out.write("\n\n")
    count += 1
out.close()
decomp.dispose()
print("DECOMPILED %d functions -> %s" % (count, out_file))

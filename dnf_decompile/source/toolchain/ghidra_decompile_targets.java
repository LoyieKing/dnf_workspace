// Ghidra Headless 反编译脚本（Java，兼容 Ghidra 12，无 Jython）
// 用法：analyzeHeadless <proj> <projname> -process df_community_r -readOnly \
//       -postScript ghidra_decompile_targets.java <targets_file> <out_file> -scriptPath <dir>
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.util.HashSet;
import java.util.Set;

public class ghidra_decompile_targets extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String targetsFile = args[0];
        String outFile = args[1];

        Set<String> nameTargets = new HashSet<String>();
        Set<String> addrTargets = new HashSet<String>();
        BufferedReader br = new BufferedReader(new FileReader(targetsFile));
        String line;
        while ((line = br.readLine()) != null) {
            line = line.trim();
            if (!line.isEmpty()) {
                if (line.matches("^[0-9a-fA-F]{8}$") || line.matches("^0x[0-9a-fA-F]+$")) {
                    addrTargets.add(line.replace("0x", ""));
                } else {
                    nameTargets.add(line);
                }
            }
        }
        br.close();

        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);
        BufferedWriter w = new BufferedWriter(new FileWriter(outFile));
        int count = 0;

        // 1) 按地址查找（主路径）
        for (String a : addrTargets) {
            long addr = Long.parseLong(a, 16);
            Function f = currentProgram.getFunctionManager().getFunctionAt(
                    currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(addr));
            if (f == null) {
                continue;
            }
            count = writeDecompiled(w, decomp, f, count);
        }

        // 2) 按名称查找（兜底）
        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        while (it.hasNext()) {
            Function f = it.next();
            String name = f.getName();
            if (!nameTargets.contains(name)) {
                continue;
            }
            count = writeDecompiled(w, decomp, f, count);
        }
        w.close();
        decomp.dispose();
        println("DECOMPILED " + count + " functions -> " + outFile);
    }

    private int writeDecompiled(BufferedWriter w, DecompInterface decomp, Function f, int count)
            throws Exception {
        w.write("==== " + f.getName() + " @ " + f.getEntryPoint() + " ====\n");
        DecompileResults res = decomp.decompileFunction(f, 120, monitor);
        if (res != null && res.decompileCompleted()) {
            w.write(res.getDecompiledFunction().getC());
        } else {
            w.write("/* DECOMPILE FAILED */\n");
        }
        w.write("\n\n");
        return count + 1;
    }
}

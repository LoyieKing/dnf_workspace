// Ghidra Headless Java 反编译脚本：导出全部函数伪 C 代码
// 用法：analyzeHeadless <proj> <projname> -process <bin> -noanalysis \
//       -scriptPath <dir> -postScript ghidra_decompile_all.java <out_file>
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.util.task.ConsoleTaskMonitor;

import java.io.FileWriter;
import java.io.PrintWriter;

public class ghidra_decompile_all extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outFile = args.length > 0 ? args[0] : "/tmp/decompiled.c";
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);
        ConsoleTaskMonitor monitor = new ConsoleTaskMonitor();
        FunctionManager fm = currentProgram.getFunctionManager();
        PrintWriter out = new PrintWriter(new FileWriter(outFile));
        int count = 0;
        for (Function f : fm.getFunctions(true)) {
            DecompileResults res = decomp.decompileFunction(f, 120, monitor);
            out.println("// ==== " + f.getName() + " @ " + f.getEntryPoint() + " ====");
            if (res.decompileCompleted()) {
                out.println(res.getDecompiledFunction().getC());
            } else {
                out.println("/* DECOMPILE FAILED */");
            }
            out.println();
            count++;
            if (count % 500 == 0) {
                println("decompiled " + count);
            }
        }
        out.close();
        decomp.dispose();
        println("DECOMPILED " + count + " functions -> " + outFile);
    }
}

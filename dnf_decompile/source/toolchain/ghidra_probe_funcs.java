// Ghidra Headless 探针：导出当前程序的函数统计
// 用法：analyzeHeadless <proj> <projname> -process <program> -readOnly \
//       -postScript ghidra_probe_funcs.java -scriptPath <dir>
import ghidra.app.script.GhidraScript;
import ghidra.framework.model.DomainFile;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;

public class ghidra_probe_funcs extends GhidraScript {

    @Override
    public void run() throws Exception {
        int total = 0;
        int named = 0;
        int internal = 0;
        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        while (it.hasNext()) {
            Function f = it.next();
            total++;
            String n = f.getName();
            if (n.startsWith("FUN_") || n.startsWith("thunk_") || n.startsWith("LAB_") || n.startsWith("_")) {
                internal++;
            } else if (n.startsWith("_")) {
                internal++;
            } else {
                named++;
            }
        }
        println("PROGRAM=" + currentProgram.getName());
        DomainFile df = currentProgram.getDomainFile();
        if (df != null) {
            println("DOMAIN_PATH=" + df.getPathname());
        }
        println("TOTAL_FUNCTIONS=" + total);
        println("NAMED_FUNCTIONS=" + named);
        println("INTERNAL_FUNCTIONS=" + internal);
    }
}

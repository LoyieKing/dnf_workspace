// Ghidra Headless 探针：导出名称含指定子串的函数（实际 Ghidra 命名）
// 用法：analyzeHeadless <proj> <projname> -process <program> -readOnly \
//       -postScript ghidra_probe_names.java <substring> [-scriptPath <dir>]
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolTable;

public class ghidra_probe_names extends GhidraScript {

    @Override
    public void run() throws Exception {
        String sub = getScriptArgs().length > 0 ? getScriptArgs()[0] : "PacketTranslater";
        int count = 0;
        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        while (it.hasNext()) {
            Function f = it.next();
            String n = f.getName();
            if (n.indexOf(sub) >= 0) {
                println("FN " + f.getEntryPoint() + " " + n);
                count++;
            }
        }
        if (count == 0) {
            // 兜底：从符号表找
            SymbolTable st = currentProgram.getSymbolTable();
            for (Symbol s : st.getAllSymbols(true)) {
                String sn = s.getName();
                if (sn.indexOf(sub) >= 0) {
                    println("SYM " + s.getAddress() + " " + sn + "  (fn=" +
                            (currentProgram.getFunctionManager().getFunctionAt(s.getAddress()) != null) + ")");
                    count++;
                }
            }
        }
        println("PROBE_MATCHES=" + count);
    }
}

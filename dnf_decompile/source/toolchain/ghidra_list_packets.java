// Ghidra Headless：枚举 df_game_r 中所有 Packet 类的构造函数
// 用法：analyzeHeadless <proj_root> <proj_name> -process <bin> -readOnly -noanalysis \
//       -scriptPath <dir> -postScript ghidra_list_packets.java <out_file>
// 输出每行：mangled \t addr \t size \t demangled
import ghidra.app.script.GhidraScript;
import ghidra.app.util.demangler.DemangledObject;
import ghidra.app.util.demangler.DemanglerUtil;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Symbol;

import java.io.FileWriter;
import java.io.PrintWriter;

public class ghidra_list_packets extends GhidraScript {

    @Override
    public void run() throws Exception {
        String outFile = getScriptArgs()[0];
        PrintWriter w = new PrintWriter(new FileWriter(outFile));
        int count = 0;
        for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
            String mangled = null;
            String primary = f.getName();
            // 主符号可能是反混淆短名；遍历函数全部符号找 mangled 原名
            Symbol[] syms = currentProgram.getSymbolTable().getSymbols(f.getEntryPoint());
            for (Symbol s : syms) {
                String n = s.getName();
                if (n != null && n.startsWith("_ZN") && n.indexOf("C1E") > 0 || n != null && n.startsWith("_ZN") && n.indexOf("C2E") > 0) {
                    mangled = n;
                    break;
                }
                if (mangled == null && n != null && n.startsWith("_ZN")) {
                    mangled = n;
                }
            }
            String ctorName = mangled != null ? mangled : primary;
            if (!ctorName.contains("Packet")) {
                continue;
            }
            boolean isCtor = (mangled != null && (mangled.contains("C1E") || mangled.contains("C2E")))
                    || (mangled == null && primary.matches("Packet[A-Za-z0-9_]*"));
            if (!isCtor) {
                continue;
            }
            String dem = null;
            try {
                DemangledObject d = DemanglerUtil.demangle(currentProgram, ctorName);
                dem = d == null ? null : d.toString();
            } catch (Exception e) {
                dem = null;
            }
            w.println((mangled == null ? "" : mangled) + "\t" + f.getEntryPoint()
                    + "\t" + f.getBody().getNumAddresses() + "\t"
                    + (dem == null ? primary : dem.replace('\t', ' ')));
            count++;
        }
        w.println("TOTAL\t" + count);
        w.close();
        println("DONE " + count);
    }
}

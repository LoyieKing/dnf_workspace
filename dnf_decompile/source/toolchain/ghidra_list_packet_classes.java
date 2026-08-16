// Ghidra Headless：枚举程序中所有含 "Packet" 的类（按函数符号去重），输出类名清单
// 用法：analyzeHeadless <proj_root> <proj_name> -process <bin> -readOnly -noanalysis \
//       -scriptPath <dir> -postScript ghidra_list_packet_classes.java <out_file>
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Symbol;

import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.TreeSet;

public class ghidra_list_packet_classes extends GhidraScript {

    @Override
    public void run() throws Exception {
        String outFile = getScriptArgs()[0];
        TreeSet<String> classes = new TreeSet<String>();
        for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
            String mangled = null;
            for (Symbol s : currentProgram.getSymbolTable().getSymbols(f.getEntryPoint())) {
                String n = s.getName();
                if (n != null && n.startsWith("_ZN")) {
                    mangled = n;
                    break;
                }
            }
            if (mangled == null) {
                continue;
            }
            String cls = null;
            {
                // mangled 提取类名
                String primary = mangled;
                int i = 3; // "_ZN"
                try {
                    while (i < primary.length() && Character.isDigit(primary.charAt(i))) {
                        i++;
                    }
                    if (i > 1) {
                        int len = Integer.parseInt(primary.substring(3, i));
                        cls = primary.substring(i, Math.min(i + len, primary.length()));
                    }
                } catch (Exception e) {
                    cls = null;
                }
            }
            if (cls != null && cls.contains("Packet")) {
                classes.add(cls);
            }
        }
        PrintWriter w = new PrintWriter(new FileWriter(outFile));
        for (String c : classes) {
            w.println(c);
        }
        w.println("TOTAL\t" + classes.size());
        w.close();
        println("DONE " + classes.size());
    }
}

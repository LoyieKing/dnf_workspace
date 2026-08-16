// Ghidra Headless：收集所有引用指定构造函数地址的函数（发送/填充点）
// 用法：analyzeHeadless <proj> <name> -process <bin> -readOnly -noanalysis \
//       -scriptPath <dir> -postScript ghidra_packet_xrefs.java <ctors_file> <out_file>
// ctors_file 每行：<addr_hex 无0x>\t<class_name>
// 输出：<class>\t<ctor_addr>\t<ref_func_addr>\t<ref_func_name>\t<is_call>
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.symbol.ReferenceManager;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.TreeSet;

public class ghidra_packet_xrefs extends GhidraScript {

    @Override
    public void run() throws Exception {
        String ctorsFile = getScriptArgs()[0];
        String outFile = getScriptArgs()[1];
        PrintWriter w = new PrintWriter(new FileWriter(outFile));
        FunctionManager fm = currentProgram.getFunctionManager();
        ReferenceManager rm = currentProgram.getReferenceManager();
        BufferedReader br = new BufferedReader(new FileReader(ctorsFile));
        String line;
        int totalRefs = 0;
        while ((line = br.readLine()) != null) {
            line = line.trim();
            if (line.isEmpty()) {
                continue;
            }
            String[] p = line.split("\\t");
            long addr = Long.parseLong(p[0], 16);
            String cls = p.length > 1 ? p[1] : Long.toHexString(addr);
            Address a = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(addr);
            ReferenceIterator it = rm.getReferencesTo(a);
            TreeSet<String> seen = new TreeSet<String>();
            while (it.hasNext()) {
                Reference r = it.next();
                Address from = r.getFromAddress();
                Function f = fm.getFunctionContaining(from);
                String fname = f == null ? from.toString() : f.getName();
                String key = fname;
                if (!seen.add(key)) {
                    continue;
                }
                boolean isCall = r.getReferenceType().isCall();
                Address entry = f == null ? from : f.getEntryPoint();
                w.println(cls + "\t" + Long.toHexString(addr) + "\t" + entry
                        + "\t" + fname + "\t" + (isCall ? "CALL" : "REF"));
                totalRefs++;
            }
        }
        w.println("TOTAL_REFS\t" + totalRefs);
        w.close();
        println("DONE refs=" + totalRefs);
    }
}

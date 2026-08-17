// 诊断反编译失败的函数：读 /tmp/df_cr/missing_addrs.txt（每行一个地址），
// 打印 getFunctionAt 是否存在、Function 名称/大小、decompile 结果与异常。
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.address.Address;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.PrintWriter;

public class diag_failed extends GhidraScript {
    @Override
    public void run() throws Exception {
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);
        PrintWriter out = new PrintWriter("/tmp/df_cr/diag_failed.txt", "UTF-8");
        BufferedReader br = new BufferedReader(new FileReader("/tmp/df_cr/missing_addrs.txt"));
        String line;
        while ((line = br.readLine()) != null) {
            line = line.trim();
            if (line.isEmpty()) continue;
            long addr = Long.parseLong(line, 16);
            Address a = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(addr);
            Function fn = currentProgram.getFunctionManager().getFunctionAt(a);
            out.println("== " + line + " ==");
            if (fn == null) {
                out.println("  getFunctionAt -> NULL");
                // 看看是否有更近的函数包含该地址
                Function containing = currentProgram.getFunctionManager().getFunctionContaining(a);
                out.println("  getFunctionContaining -> " + (containing == null ? "NULL" : containing.getName()));
                continue;
            }
            out.println("  fn name = " + fn.getName());
            out.println("  fn size = " + fn.getBody().getNumAddresses());
            try {
                DecompileResults res = decomp.decompileFunction(fn, 120, monitor);
                out.println("  decompileCompleted = " + (res != null && res.decompileCompleted()));
                if (res != null && !res.decompileCompleted()) {
                    out.println("  errorMsg = " + res.getErrorMessage());
                }
            } catch (Exception e) {
                out.println("  EXCEPTION: " + e);
            }
        }
        br.close();
        out.close();
        decomp.dispose();
        println("DIAG_FINISHED");
    }
}

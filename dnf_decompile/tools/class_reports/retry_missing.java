// 单线程重试补写缺失的反编译 C（避免多线程并发竞争）。
// 读 /tmp/df_cr/missing_addrs.txt；对 getFunctionAt 命中且能反编译的写文件，
// 文件名与 02/dump_all_decomp 相同规则（冲突带地址后缀）。
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.address.Address;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.PrintWriter;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.HashMap;
import java.util.Map;

public class retry_missing extends GhidraScript {
    static String esc(String s) {
        return s.replace("::", "__").replace("<", "_lt_").replace(">", "_gt_")
                .replace("/", "_s_").replaceAll("[ \"*,():]", "_");
    }
    @Override
    public void run() throws Exception {
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);
        String root = "/tmp/df_cr/decomp";
        // funcs.tsv: 地址 -> 类/方法（用于确定输出目录与文件名）
        Map<String,String[]> func = new HashMap<>();
        try (BufferedReader f = new BufferedReader(new FileReader("/tmp/df_cr/funcs.tsv"))) {
            String l;
            while ((l = f.readLine()) != null) {
                String[] p = l.split("\t");
                if (p.length >= 3) func.put(p[0], new String[]{p[1], p[2]});
            }
        }
        int ok = 0, nullFn = 0, fail = 0;
        BufferedReader br = new BufferedReader(new FileReader("/tmp/df_cr/missing_addrs.txt"));
        String line;
        while ((line = br.readLine()) != null) {
            line = line.trim();
            if (line.isEmpty()) continue;
            long addr = Long.parseLong(line, 16);
            Address a = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(addr);
            Function fn = currentProgram.getFunctionManager().getFunctionAt(a);
            if (fn == null) { nullFn++; continue; }
            DecompileResults res = decomp.decompileFunction(fn, 120, monitor);
            if (res != null && res.decompileCompleted()) {
                String[] fm = func.get(line);
                String cls = (fm != null) ? fm[0] : "<global>";
                String mth = (fm != null && fm[1].length() > 0) ? fm[1] : ("_" + line);
                String base = esc(mth);
                String dir = root + "/" + esc(cls);
                Files.createDirectories(Paths.get(dir));
                Path target = Paths.get(dir, base + ".c");
                if (Files.exists(target)) target = Paths.get(dir, base + "_" + Long.toHexString(addr) + ".c");
                String path = target.toString();
                try (PrintWriter w = new PrintWriter(path, "UTF-8")) {
                    w.println("// " + fn.getName() + " @ 0x" + Long.toHexString(addr));
                    w.print(res.getDecompiledFunction().getC());
                }
                ok++;
            } else {
                fail++;
            }
        }
        br.close();
        decomp.dispose();
        println("RETRY: ok=" + ok + " nullFn=" + nullFn + " fail=" + fail);
    }
}

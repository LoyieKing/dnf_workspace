// Ghidra headless script (Java): 多线程全量反编译 df_game_r 所有函数，按类输出 C 代码。
// 输入: /tmp/df_cr/funcs.tsv  每行 <地址> <类路径> <方法名>
// 输出: /tmp/df_cr/decomp/<类转义>/<方法转义>.c
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
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicInteger;

public class dump_all_decomp extends GhidraScript {

    static String esc(String s) {
        return s.replace("::", "__").replace("<", "_lt_").replace(">", "_gt_")
                .replace("/", "_s_").replaceAll("[ \"*,():]", "_");
    }

    static class Task {
        long addr;
        String cls, mth, outPath;
    }

    @Override
    public void run() throws Exception {
        final String tsv = "/tmp/df_cr/funcs.tsv";
        final String outRoot = "/tmp/df_cr/decomp";
        final int threads = Math.max(4, Runtime.getRuntime().availableProcessors() / 2);
        final java.util.Map<String,Boolean> seen = new java.util.HashMap<>();

        List<Task> tasks = new ArrayList<>();
        try (BufferedReader br = new BufferedReader(new FileReader(tsv))) {
            String line;
            while ((line = br.readLine()) != null) {
                String[] f = line.split("\t");
                if (f.length < 3) continue;
                Task t = new Task();
                t.addr = Long.parseLong(f[0], 16);
                t.cls = f[1];
                t.mth = f[2];
                if (t.mth.length() == 0) t.mth = "_" + f[0];  // 匿名命名空间/空名符号：用地址兜底，与 asm 命名一致
                Path dir = Paths.get(outRoot, esc(t.cls));
                Files.createDirectories(dir);
                String base = esc(t.mth);
                String key = dir + "/" + base;
                if (seen.containsKey(key)) base = base + "_" + f[0];
                seen.put(key, Boolean.TRUE);
                t.outPath = dir.resolve(base + ".c").toString();
                tasks.add(t);
            }
        }
        println("DUMP_ALL_DECOMP: total tasks = " + tasks.size() + ", threads = " + threads);

        final AtomicInteger done = new AtomicInteger();
        final AtomicInteger failed = new AtomicInteger();
        ExecutorService pool = Executors.newFixedThreadPool(threads);

        for (final Task t : tasks) {
            pool.submit(new Runnable() {
                public void run() {
                    DecompInterface decomp = new DecompInterface();
                    decomp.openProgram(currentProgram);
                    try {
                        Address a = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(t.addr);
                        Function fn = currentProgram.getFunctionManager().getFunctionAt(a);
                        if (fn == null) {
                            failed.incrementAndGet();
                            return;
                        }
                        DecompileResults res = decomp.decompileFunction(fn, 120, monitor);
                        if (res != null && res.decompileCompleted()) {
                            try (PrintWriter w = new PrintWriter(t.outPath, "UTF-8")) {
                                w.println("// " + t.cls + "::" + t.mth + " @ 0x" + Long.toHexString(t.addr));
                                w.print(res.getDecompiledFunction().getC());
                            }
                            int d = done.incrementAndGet();
                            if (d % 2000 == 0) println("  decompiled " + d + "/" + tasks.size());
                        } else {
                            failed.incrementAndGet();
                        }
                    } catch (Exception e) {
                        failed.incrementAndGet();
                    } finally {
                        decomp.dispose();
                    }
                }
            });
        }
        pool.shutdown();
        pool.awaitTermination(3600, TimeUnit.SECONDS);
        println("DUMP_ALL_DECOMP_OK: done=" + done.get() + " failed=" + failed.get());
    }
}

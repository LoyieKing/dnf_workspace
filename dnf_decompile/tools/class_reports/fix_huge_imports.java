// 专门反编译两个巨型 ImportScript 函数：
//   0x088e5faa ImportDungeonScript (42,278 B)  — 之前 process: timeout
//   0x08a12827 ImportMonsterScript (61,381 B)  — 之前 Response buffer size exceeded
// 手段：setMaxResultSize 调大输出缓冲 + decompileFunction timeout 增大到 3600s
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.address.Address;
import java.io.PrintWriter;
import java.nio.file.Files;
import java.nio.file.Paths;

public class fix_huge_imports extends GhidraScript {
    @Override
    public void run() throws Exception {
        long[][] targets = {
            {0x088e5faaL, 0},   // ImportDungeonScript
            {0x08a12827L, 0},   // ImportMonsterScript
        };
        String[] names = {"ImportDungeonScript", "ImportMonsterScript"};
        String root = "/tmp/df_cr/decomp/_lt_global_gt_";
        Files.createDirectories(Paths.get(root));

        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);
        DecompileOptions opts = new DecompileOptions();
        opts.setMaxPayloadMBytes(512);        // 输出缓冲 512MB
        opts.setMaxInstructions(1000000);     // 最大指令数 100 万
        opts.setMaxJumpTableEntries(100000);  // 跳转表条目 10 万
        decomp.setOptions(opts);

        int ok = 0;
        for (int i = 0; i < targets.length; i++) {
            Address a = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(targets[i][0]);
            Function fn = currentProgram.getFunctionManager().getFunctionAt(a);
            println("FIX_HUGE: " + names[i] + " @ 0x" + Long.toHexString(targets[i][0]) +
                    " size=" + (fn == null ? -1 : fn.getBody().getNumAddresses()) +
                    " 开始反编译（timeout=3600s）...");
            if (fn == null) { println("  getFunctionAt NULL"); continue; }
            long t0 = System.currentTimeMillis();
            DecompileResults res = decomp.decompileFunction(fn, 3600, monitor);
            long dt = (System.currentTimeMillis() - t0) / 1000;
            if (res != null && res.decompileCompleted()) {
                String path = root + "/" + names[i] + ".c";
                try (PrintWriter w = new PrintWriter(path, "UTF-8")) {
                    w.println("// " + names[i] + " @ 0x" + Long.toHexString(targets[i][0]) +
                              "  （反编译耗时 " + dt + "s）");
                    w.print(res.getDecompiledFunction().getC());
                }
                ok++;
                println("  OK 耗时 " + dt + "s -> " + path);
            } else {
                println("  FAIL 耗时 " + dt + "s  error=" + (res == null ? "null" : res.getErrorMessage()));
            }
        }
        decomp.dispose();
        println("FIX_HUGE_DONE ok=" + ok);
    }
}

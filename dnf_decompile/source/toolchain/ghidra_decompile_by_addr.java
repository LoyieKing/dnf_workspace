// Ghidra Headless 反编译脚本：按地址清单反编译指定函数
// 用法：analyzeHeadless <proj_loc> <proj_name> -process <bin> -readOnly \
//       -noanalysis -scriptPath <dir> -postScript ghidra_decompile_by_addr.java \
//       <targets_file> <out_file>
// targets_file 每行：<mangled_name>\t<addr_hex>\t<size_hex>（addr 无 0x 前缀）
// 优先 getFunctionAt(addr)；无函数时 createFunction + disassemble 后反编译。
// 输出：每个函数一段 "==== <name> @ <addr> ====" + 伪 C。
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.symbol.SourceType;
import ghidra.util.task.ConsoleTaskMonitor;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.util.ArrayList;
import java.util.List;

public class ghidra_decompile_by_addr extends GhidraScript {

    private static class Target {
        String name;
        long addr;
        long size;

        Target(String name, long addr, long size) {
            this.name = name;
            this.addr = addr;
            this.size = size;
        }
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String targetsFile = args[0];
        String outFile = args[1];

        List<Target> targets = new ArrayList<Target>();
        BufferedReader br = new BufferedReader(new FileReader(targetsFile));
        String line;
        while ((line = br.readLine()) != null) {
            line = line.trim();
            if (line.isEmpty()) {
                continue;
            }
            String[] p = line.split("\\t+");
            try {
                String name = p[0];
                long addr = Long.parseLong(p[1], 16);
                long size = p.length > 2 ? Long.parseLong(p[2], 16) : 0;
                targets.add(new Target(name, addr, size));
            } catch (NumberFormatException e) {
                println("BAD LINE: " + line);
            }
        }
        br.close();
        println("TARGETS=" + targets.size());

        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);
        ConsoleTaskMonitor monitor = new ConsoleTaskMonitor();
        FunctionManager fm = currentProgram.getFunctionManager();
        BufferedWriter w = new BufferedWriter(new FileWriter(outFile));
        int ok = 0;
        int fail = 0;
        int created = 0;

        for (Target t : targets) {
            Address a = currentProgram.getAddressFactory()
                    .getDefaultAddressSpace().getAddress(t.addr);
            Function f = fm.getFunctionAt(a);
            if (f == null) {
                try {
                    if (t.size > 0) {
                        disassemble(a);
                        // 尽量覆盖函数尾部（仅兜底路径，分析过的工程通常已有函数）
                        disassemble(a.add(Math.max(t.size - 2, 0)));
                    } else {
                        disassemble(a);
                    }
                    f = createFunction(a, t.name);
                    if (f != null) {
                        created++;
                    }
                } catch (Exception e) {
                    println("CREATE FAIL " + t.name + " " + e.getMessage());
                }
            }
            if (f != null && t.name != null && !t.name.isEmpty()) {
                try {
                    f.setName(t.name, SourceType.IMPORTED);
                } catch (Exception e) {
                    // 名称冲突等忽略
                }
            }
            w.write("==== " + t.name + " @ " + Long.toHexString(t.addr) + " ====\n");
            if (f == null) {
                w.write("/* NO FUNCTION AT ADDRESS */\n\n");
                fail++;
                continue;
            }
            try {
                DecompileResults res = decomp.decompileFunction(f, 120, monitor);
                if (res != null && res.decompileCompleted()) {
                    w.write(res.getDecompiledFunction().getC());
                    ok++;
                } else {
                    w.write("/* DECOMPILE FAILED */\n");
                    fail++;
                }
            } catch (Exception e) {
                w.write("/* DECOMPILE EXCEPTION: " + e.getMessage() + " */\n");
                fail++;
            }
            w.write("\n\n");
        }
        w.close();
        decomp.dispose();
        println("DECOMPILED_OK=" + ok + " FAIL=" + fail + " CREATED=" + created);
    }
}

# df_game_r 逆向验证指南（子代理必读）

## 环境
- 工作区根：`/home/wangyilei/dnf_workspace`
- ORIG 权威二进制：`/home/wangyilei/dnf_workspace/dnf_installer/build/dnf_data/home/template/init/df_game_r`
- 重建二进制：`/home/wangyilei/dnf_workspace/dnf_decompile/build/game/df_game_r`
- 源码：`/home/wangyilei/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/Game/`

## 核心要求（用户规则，硬性）

1. **验证就使用快速脚本 `game_func_report.py`**（推荐 `--no-compile`，<1.5s）。
   - **禁止**用慢的 `gen_function_md.py --function`（每次 ~16s）或逐函数反复 `objdump`/`nm`。
   - 用法：
     ```
     cd /home/wangyilei/dnf_workspace/dnf_decompile
     python3 source/toolchain/game_func_report.py <源.cpp> <mangled符号> --no-compile [--method 方法名 --class-override 类] [--out /tmp/r.md]
     ```
   - 输出合并报告（ORIG 汇编 + Ghidra C + 我们汇编 + diff + IDENTICAL/AE/DIFF 分类），并打印
     `verdict=... orig_insns=... our_insns=... report=...`。

2. **获取汇编 / Ghidra C 就用 `docs/class_func_reports/`**（权威逐函数报告）。
   - 路径：`docs/class_func_reports/<类>/<方法>.md`（命名空间类如 `WongWork__CGMAccounts`）。
   - 报告含 `## 汇编`（ORIG 反汇编）与 `## 反编译 C`（Ghidra C）。
   - 每个函数的 ORIG 证据一律先读这份报告；报告缺失才用 `objdump -d ORIG` 按地址区间（需从
     `nm -S --defined-only ORIG` 拿地址/大小）。

3. **不允许编造导出符号不存在的函数**。
   - 新增/实现的符号必须是 ORIG `nm` 真实存在的（`nm -S --defined-only ORIG | grep <mangled>`）。
   - 若引用的是"发明符号"（ORIG 无），必须按 ORIG 真名修正调用处（如 `CUserGlobalInfoHandleIns`→
     `CUserGlobalInfoHandleInstance()`、`DB_*` 的 const/参数差异），不得凭空定义。
   - 语义未还原时提供**签名匹配的可链接定义 + 标「推断」**，不得跳过导致 undefined。

4. **允许修改函数的参数/返回值类型**（当二进制无法推导出正确类型时）。
   - 以 ORIG mangled 为主线（`nm` 拿到 mangled 名即含参数类型编码），但若 C++ 声明无法表达（如
     未命名枚举、ABI 特殊），允许改用合理类型，保持符号 mangled 一致或按 ORIG 修正。

5. **padding/data 等无语义字段的偏移访问 → 按语义创建真实字段，并以 getter/setter 函数名作为权威**。
   - 禁止 `(char*)this + 0x..` / `(int*)(base+0x..)` 裸偏移访问普通成员。
   - 若某偏移对应一个尚为 `char m_pad[..]` 的字段，且可通过 ORIG 的 getter/setter（如
     `GetXxx()/SetXxx()`）识别其语义，就用**getter/setter 函数名命名**真实字段（如
     `m_xxx`），并声明正确类型；访问一律具名。
   - 只有确为无符号全局/数据区、或错拼 mangled 外部符号才允许保留地址形式并加注释。

## 验证判定口径（game_func_report.py 输出）
- IDENTICAL：归一化汇编逐条相等。
- IDENTICAL_AE：数据地址伪代码化后相等（视为相同）。
- NEAR：助记符序列相同但指令文本异（寄存器/栈槽分配）。
- DIFF：助记符序列不同。
- 目标：语义正确（可观察行为与 ORIG 一致）优先；byte-identical 为 plus。

## 改完必做
- 每个函数改完：`game_func_report.py --no-compile` 核验（<1.5s）。
- 涉及合并到最终二进制前：主 agent 集中 `make`（子代理勿自行全量 make，避免并行竞争损坏 df_game_r）。

## 反编译/逆向顺序建议
1. 对目标函数：`game_func_report.py <src> <mangled> --no-compile` → 得 ORIG 汇编 + Ghidra C + 我们 asm + diff。
2. 若 ORIG 汇编/Ghidra C 为空（报告未找到），读 `docs/class_func_reports/<类>/<方法>.md` 或
   `nm` 拿地址后 `objdump -d ORIG` 按地址区间。
3. 按报告还原语义/布局。
4. 改完 `game_func_report.py` 复验。

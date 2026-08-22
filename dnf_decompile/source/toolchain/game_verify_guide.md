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

## 硬约束（补充，2026-08-22）

6. **不允许使用 `extern "C"` 这种形式来获取链接符号**。
   - 必须通过 include 正确类型定义的 header（`#include "xxx.h"`）来获取符号；
   - 禁止 `extern "C" void f(...) asm("_ZN...")` 这类 asm 桥；
   - 正解：include 对应类的头文件，直接用真实类型/方法调用（签名与 ORIG mangled 一致）。

7. **重复类型定义时，应当合并，只留一个声明点**。
   - 若需要就创建 .h/.cpp（新建头/源文件承载唯一声明点）；
   - **不允许**因为"合并导致了大范围报错"就回滚改动；
   - 合并带来的问题（命名、identical、编译错、链接错等）必须**主动正向修复**：
     - 同一类型/枚举/结构只在一个头声明；
     - 各 .cpp 的局部重复声明/前向声明/最小声明一律删除，统一 include 权威头；
     - 修复后重新构建到 0 错误，并核对 identical/near/diff 无回归。

8. **测量 mangled 前缀/字符串真实长度，必须用 shell 命令，禁止 LLM 凭记忆/猜测**。
   - LLM 数长度会数错（如 `reset_uniqueid_flag`=19、`CGMAccounts`=11、`GetMileage`=11、`logCritical`=11）。
   - 权威测量方式（在 `dnf_decompile/` 下）：
     - 某标识符真实字符数：`printf '%s' 'GetMileage' | wc -c`（或 `echo -n ... | wc -c`）
     - 检查某 mangled 的长度前缀是否错：提取 `_ZN<len>...` 前缀，段真实长 vs 前缀长对照。
   - 一切涉及"真实长度/前缀是否匹配"的判断，先跑 shell 拿到数字再下结论。

## 9. 删除 extern "C" asm 桥：处理协议（约束12 落地）
目标：把源码里所有 `extern "C" ... sub_xxx(...) asm("_ZN...")` 桥删除，全部换为 include 真实类型定义 + 直接调用。

每处 asm 桥处理步骤：
1. 确定符号所归属的真实 C++ 类/自由函数（用 `c++filt <mangled>` 得 demangled 类名/方法名）。
2. include 该类的权威头（`#include "Xxx.h"`）；若头不存在或类未建模：
   - 该类有 `docs/class_func_reports/<类>/<方法>.md` → 按报告补类定义/方法声明（签名与 ORIG mangled 一致）。
   - 无报告 → 用 `nm -S --defined-only ORIG | grep <mangled>` 确认是真实符号后，按需补最小类声明（含该方法），标「推断」。
3. 删 asm 桥声明，把调用点 `sub_Xxx(obj, args...)` 改为真实调用：
   - `obj->Method(args...)`（成员方法）
   - `Type::StaticMethod(args...)`（静态）
   - `FreeFunc(args...)`（自由函数）
4. 若 asm 桥只是「无语用声明」（无调用点）→ 直接删除声明与空桩。
5. 改完：`game_func_report.py --no-compile` 复验符号定位；受影响 TU `check_tu_game_orig.sh` 编译通过。
6. 全量 relink（主 agent 集中）确认 0 undefined、0 重复定义。

禁止：保留 `extern "C"` asm 桥作为"以后再说"；不允许因报错回滚——报错就按本协议正向修复。

## 10. 改动范围 + hub 周知（硬性）
- subagent 完全允许修改「一开始指定的文件范围」之外的其它头文件/源文件，
  **前提是能提供权威的语义判断证据**（docs/class_func_reports/<类>/<方法>.md、
  objdump -d ORIG 按地址、nm --defined-only ORIG、shell wc -c 实测长度等）。
- 但**必须使用 hub 能力，周知所有其他 subagent 该更改**：
  - 用 `hub send to:"all"` 广播"我将修改哪几个头/文件/加了哪个方法/类声明"，
    让其它可能编辑同一文件的 subagent 知道并避让/协调。
  - 改共享头（CUser.h/CGameManager.h/GameWorld.h 等）尤其要先广播、确认无冲突，
    或说明已在处理避免重复定义。
  - 若已与某个 subagent 存在文件重叠，用 `hub send to:<对方> ` 定向协调。
- 禁止：未周知就修改会与其它 subagent 冲突的头文件；因担心"超范围"而不修（有证据就该修）。

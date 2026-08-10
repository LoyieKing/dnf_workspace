# agent 任务简报：gunnersvr commlib/framework 逆向（218 函数）

目标：把 `source/gunnersvr/src/commlib/framework/` 下 13 个 DWARF 桩 .cpp 的函数体全部补完，
语义与 gunnersvr 二进制一致；同步重建对应的 comm_*.h 头文件（当前是坏桩）。

验收标准（对**你负责的每个文件**）：
1. `python3 toolchain/check_file_coverage.py <BIN> /tmp/fw_gvr <你的文件>.cpp` 输出 **MISSING=0**；
2. 纯函数（配置解析、账单编码、时间换算、字节序处理等）用 `uni_call.py --bin` 对拍若干随机向量，
   输入/输出与原二进制一致；
3. 关键函数助记符重叠尽量高（`toolchain/mnemonic_overlap.py`）；
4. 重建的 comm_*.h 同步到 `source/gunnersvr/output/commlib/framework/release/include/`（不存在就创建）。

## 环境
- 二进制：`/mnt/d/Docs/my_sources/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/secsvr/gunnersvr/gunnersvr`
- 源码根：`/mnt/d/Docs/my_sources/dnf_workspace/dnf_secsvr/`
- 编译（GCC 4.1.2 32 位，-O2 -fPIC，只 `-c`）：
  `cd /mnt/d/Docs/my_sources/dnf_workspace/dnf_secsvr && toolchain/c5xx.sh -c -I source/gunnersvr -I source/gunnersvr/import -o /tmp/fw_gvr/<名>.o source/gunnersvr/src/commlib/framework/<名>.cpp`
  （`/tmp/fw_gvr` 已建好。obj 目录就是 `/tmp/fw_gvr`。）
- 符号清单：`python3 toolchain/file_symbols.py <BIN> src/commlib/framework/<名>.cpp`
- 反汇编：`objdump -d --start-address=0xADDR --stop-address=0xEND <BIN>`
- 行为对拍：`python3 toolchain/uni_call.py --bin <BIN> [--plain] [--ret] <mangled名> <参数>`
  - 命名空间函数/类静态方法必须 `--plain`；成员方法不自动传 this，用 `--plain` 手动传 this 指针
    （hex 串 = 分配 guest 内存写字节并传指针）。
  - mangled 名用 `nm -C <BIN> | grep <子串>` 查（注意 -C 是 demangled，uni_call 需要 mangled 名，
    用 `nm <BIN> | grep` 拿）。

## 每个文件的作业步骤
1. `file_symbols.py` 拿全部符号（地址、行号、demangled 名）。
2. **先修 .cpp 的 include 闭包**（见下节），保证当前空桩能编译通过（这是第一道关）。
3. 重建对应 comm_*.h：以现桩为基础（成员名/偏移/`// sizeof = N` 注释来自 DWARF），修复语法错误、
   补类型、按反汇编核对偏移。**每完成一个类立即落盘**。
4. 逐函数实现：反汇编该函数地址区间 → 还原语义 → **写完一个立即保存 .cpp**。
5. 编译 + `check_file_coverage.py` 循环到 MISSING=0。
6. 纯函数对拍（见验收 2）。
7. 把 comm_*.h 复制到 output 目录。

## include 闭包已知问题（重要，先读）
桩生成时把**所有系统头**从 .cpp 里删了，导致编译失败。处理方式：
- `comm_predefine.h`（第一个 include）已由协调者补好标准头（<string>/<sstream>/<iostream>/
  <cstring>/<cstdlib>/<vector>/<map>/...），不要再删。
- `output/commlib/zenlib/release/include/zen_os_adapt_predefine.h` 已恢复全局
  `typedef std::string string;`（原文件第 60 行）——不要改回。
- `output/commlib/zenlib/release/include/zen_string_util.h` 已修成可编译模板声明——不要改回。
- 如果闭包里还有别的 include 报错：优先**把该行从闭包删掉**（闭包只是 DWARF 记录的 include
  顺序，删掉不影响符号覆盖；.cpp 只要能用到的类型有定义即可）。必要时在闭包末尾补标准头。
- 若某个 zenlib/protocol 头报错但确实被你的函数用到，且错误是"缺 include"，可给对应
  output/ 头补 `#include <...>`（output 是构建产物，允许补），并在最终报告里说明。

## 头文件重建要点
- 桩里的匿名 union（如 `union ._205`）→ 改成真匿名 union（成员保留，如 frame_option_ 与位域重叠）；
  `/*anon struct*/ int` → 替换成真实类型（从反汇编/DWARF 确定，如
  `write_to_logsvr(const sec_proto::LogSvrCommBillRecord&)`）；
  柔性数组（`char log_comment_[];` 等）→ 用 DWARF 固定大小或常量（LEN_OF_*）补全，并用
  二进制 `mov disp(%reg)` 核对成员偏移。
- 类大小以 `// sizeof = N` 与二进制行为为准；成员顺序 = 桩里的声明顺序（来自 DWARF）。
- 静态常量成员：`nm -C <BIN> | grep '<类名>::'` 看是否有符号；有则在 .cpp 里给出定义
  （如 `const size_t Comm_App_Frame::LEN_OF_APPFRAME_HEAD = 0xXX;`），值从反汇编常量读。
- 虚函数：保持桩中声明顺序（= vtable 顺序）。析构函数多个版本（D0/D1/D2）在 DWARF 桩里
  会重复出现，实现一个即可（按需保留 -O2 生成的 D1 等；先看 .o 缺哪些符号）。
- 头文件 include 自己缺的东西（ostringstream 等）由 `comm_predefine.h` 兜底，但头文件
  自身也要尽量自包含。

## 共享头归属（避免写冲突）
- comm_service_info.h / comm_time_provider.h / comm_stat_monitor.h → Agent A
- comm_app_frame.h / comm_svrd_application.h / comm_svrd_app_non_ctrl.h → Agent B
- comm_sndrcv_base.h / comm_sndrcv_zulu.h / comm_zerg_mmappipe.h → Agent C
- comm_bill_record.h / comm_timer_handler.h → Agent D
- comm_cfgsvr_sdk.h / comm_svrd_config.h → Agent E
- 需要别人的头但磁盘上还是坏桩时：自己重建一个最小正确版本（内容由二进制决定，允许重复劳动），
  并在最终报告注明。

## 纪律
- 文件落盘即进度：每个函数/头文件改完立即写盘。
- 只动你自己的文件与 output/commlib/framework/release/include/；不动 protocol/common、
  zenlib 的 src 源文件；不做 `rm`、不提交 git。
- 完成时回最终报告：13 文件（或你的份）覆盖结果、头文件清单、对拍结果、遗留疑问。

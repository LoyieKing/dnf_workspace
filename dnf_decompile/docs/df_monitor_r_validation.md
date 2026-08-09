# df_monitor_r 验收报告（MISSING 归零后）

生成：compare_monitor.py 严格口径（CALIBER_VERSION=3）+

monitorlib 反汇编缓存；方法参照 compare_df_community_functions.py。


| 指标 | 数值 |
|---|---:|
| 应用函数（is_app 过滤后） | 1827 |
| EMPTY/MISSING | **0** |
| IDENTICAL（严格口径） | 551 |
| NEAR（助记符同、操作数异） | 245 |
| DIFF（助记符/结构异） | 1031 |
| 已匹配函数平均助记符重叠率 | 85.02% |
| 字符串交集（orig ∩ new，-n 4） | 10336 / 11926 |

## 分类构成说明

- DIFF 主体为既有大函数（CPacketTranslater handler 族、tinyxml、
  CApplication::Load/Free 等）：语义等价、日志行号/分支/常量一致，
  差异为 rodata 地址、-O0 块序与对齐 nop（见各批核验表）。
- 本批新增 DIFF：MemPool 池语义（operator new/delete 暂走 ::operator new）、
  工具链代码生成形态（setle vs jne、lea vs 位移寻址、静态 guard）、对齐 nop。
- 类结构/布局以 nm mangled 与 Ghidra 反编译为准，字段偏移逐字节核对。

## 冒烟核验（调用集多重集与原版一致）

- CApplication::Process、CTaskScheduler::ProcessTask、CTcpNetSystem::SendPacket、
  CPacketTranslater::OnLogin、EpollHandler::WaitForEvent、
  COnTimeEventManager::StartEvent：CALLSET-CLEAN。
- 构建：source/toolchain/build-monitor.sh 通过（GCC 4.4.7 / -m32 / -O0 / gnu++0x）。

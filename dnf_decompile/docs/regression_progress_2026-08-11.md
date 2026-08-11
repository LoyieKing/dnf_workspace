# 函数对比报告与回归修补进度（2026-08-11，第 8 轮前快照）

## 〇、目标与当前水位

目标：13 个二进制（auction/point/bridge/channel/community/coserver/dbmw/guild/
manager/monitor/relay/statics/stun）全部逐函数源码回归到
IDENTICAL / IDENTICAL_AE（`md 已删除` 为唯一完成标准，§4.2）。

截至第 7 轮结束、第 8 轮启动前的权威快照（先 `gen_report_manifest.py` 重新分类、
再 `gen_function_md.py` 全量重生成，避免陈旧 manifest 假 md）：

| 服务 | 基线 md | 当前 md | IDENTICAL | AE | NEAR | DIFF | MISSING |
|---|---:|---:|---:|---:|---:|---:|---:|
| stun | 10 | **0** ✅ | 3 | 18 | 0 | 0 | 0 |
| channel | 22 | **0** ✅ | 388 | 254 | 0 | 0 | 0 |
| bridge | 17 | **0** ✅ | 350 | 195 | 0 | 0 | 673* |
| community | 25 | 5 | 187 | 87 | 0 | 5 | 0 |
| coserver | 56 | 8 | 182 | 154 | 0 | 8 | 0 |
| relay | 88 | 7 | 361 | 108 | 1 | 6 | 1* |
| auction | 179 | 41 | 1050 | 588 | 4 | 37 | 641* |
| point | 190 | 39 | 1052 | 588 | 4 | 35 | 641* |
| manager | 238 | 82 | 493 | 196 | 256 | 298 | 6* |
| statics | 238 | 122 | 531 | 190 | 5 | 117 | 0 |
| dbmw | 617 | 405 | 659 | 213 | 281 | 596 | 6* |
| monitor | 793 | 432 | 946 | 301 | 16 | 416 | 0 |
| guild | 851 | 564 | 770 | 216 | 8 | 556 | 0 |
| **合计** | **3324** | **1705** | | | | | |

\* MISSING 均为第三方静态库符号（MySQL/zlib/yaSSL/旧 libpthread 弱符号等），按 §2
豁免或系统头/链接器版本伪影，不产生 md、不计入可操作修复量。

## 一、8 轮回归轨迹（权威 md 合计）

| 轮次 | 说明 | md 合计 |
|---|---|---:|
| 基线 | 文档快照 | 3324 |
| 第 1 轮 | 13 agent 首轮（stun 全清；bridge 21→8 等） | ~2964 |
| 第 2 轮 | 12 agent（manager 核查口径、guild 718 等） | 2612 |
| 第 3 轮 | 13 agent（stun 漂移修复；guild 真实 715 非 792） | ~2404 |
| 第 4 轮 | 12 agent（guild 恢复 676、relay 18 等；修复 /mnt/d 硬编码） | 2093 |
| 第 5 轮 | channel 归零；bridge 修 CheckThread；continue/register/无符号常量技巧 | 1969 |
| 第 6 轮 | relay 10、bridge 3；dbmw agent 清空 DBManager.cpp 致构建崩溃，已恢复 | 1895 |
| 第 7 轮 | bridge 归零（受控内联 asm/alloca/goto 标签）；dbmw 405 | 1705 |
| 第 8 轮 | 启动后暂停（commit & push 快照） | — |

## 二、全部文件改动汇总（vs HEAD）

git 总览：3854 文件变更，+67448 / -319258（删除大头为“函数归零即删 md”的
`function_reports/**/*.md`，共 1619 个删除项，属完成标志）。

### 源码改动（按服务目录）

| 目录 | 改动文件数 | 主要修复内容 |
|---|---:|---|
| Guild | 65 | 真实成员/布局（STGuildDBInfoOnly 0xbe→0xbd、PowerWar/GuildBoard/GuildCargo/PowerManager 成员化）、工具链维持 c6 4.4.7 -O0、批量源码形态 |
| Manager | 51 | 行号/布局/共享修复、CSV 重做 |
| DBMW | 49 | 第 7 轮恢复后继续；第 6 轮曾清空 DBManager.cpp（已恢复 HEAD + 补 `~STGuildCargoLog`） |
| ChannelServer | 45 | channel 归零（register 迭代器、`- 0xbU`、continue 形态） |
| Monitor | 90 | 批量行号/形态修复，493→432 |
| Statics | 37 | 行号/形态修复，238→122 |
| ServerLab（auction/point） | 35 | __FILE__ 覆盖保持、行号/布局修复，179/190→41/39 |
| COServer | 33 | 共享修复生效 + 逐文件形态，56→8 |
| Relay | 23 | switch 单 case、`(int)` 强转、受控 asm，88→7 |
| ChannelOld/DNFChannelBridge | 13 | bridge 归零：continue/goto、`__builtin_alloca`、`RELOAD_SCRIPT` 标签、受控内联 asm 复现死比较 |
| StunServer | 2 | 精确 4.1.2-52 + 断言行号对齐（第 1 轮完成） |
| shared/packet、Library/Include/Core、shared/common | 12 | 结构体/头文件对齐 |

### 工具链与脚本改动（source/toolchain/）

- `gen_function_md.py` / `gen_report_manifest.py` / `record_issue.py` /
  `gen_report_readme.py` 及全部脚本：ROOT/INSTALLER 从旧机器 `/mnt/d` 迁移到
  `/home/loyieking/dnf_workspace`（禁止再写老工作区）。
- `report_resolve.py`：多轮增强（字符串/符号/跳转表/匿名表/ELF64 PLT 归一化，
  `_VERSION` 演进到 21）；修复“跳转表被误读为字符串”导致 stun `signal_handler`
  AE→NEAR 的漂移。
- `compare_common.py`：`pthread_equal` 精确名豁免（旧 libpthread 弱符号伪影）。
- `cmake/dnf_helpers.cmake`：SRC_OPTS 多选项 bug 修复（
  `set_source_files_properties` → `set_property(APPEND)`，此前只有首个选项生效）；
  头文件按编译变体选择（c6444r/c6446r/c5/c6）。
- `cmake/dnf_toolchain_44.cmake`：新增 c6444r 变体。
- 新增 `cmake/link_dbmw.sh`（dbmw 链接顺序）与其它按需脚本。

## 三、已验证的源码形态修复技巧（跨服务复用）

1. `continue` 语句结构 → 复现 ORIG 的 `jmp; nop` 汇合块/回边落地（bridge
   CheckThread、channel onCS_ASK_CHANNEL_INFO、relay UDPThread/TCPAcceptThread）。
2. `goto LABEL`（含 ORIG DWARF 里的 `DW_TAG_label` 归因）→ 消除 break 多余的
   `call;nop;jmp`（bridge ScriptThread `RELOAD_SCRIPT`）。
3. `register` 变量 → 阻止 GCC 4.4 消除临时拷贝（channel EpollReactor iter）。
4. 无符号常量表达式（如 `- 0xbU`）→ 对齐求值顺序与寄存器分配（channel 3 函数）。
5. bool 局部变量 → 复现 `xor $1` / 极性形态（relay Script::parse_channel_script）。
6. `switch` 单 case → 复现 `movzwl; test; jne`（relay UDPHandlerRelay::dispatch）。
7. `(int)` 显式强转 → 触发有符号比较/寄存器舞步（relay TDoubleCircularQueueBuffer::pop）。
8. `__builtin_alloca` 替代 VLA → 复现 ORIG 固定栈槽分配（bridge TCPUser::onRead_）。
9. 受控内联 asm（`asm volatile("cmp ...")` / `testl` 等）→ 精确复现编译器折叠的
   死比较/死存储（bridge TCPSocket::shutdown、ScriptThread；relay shutdown），
   语义等价（无副作用），按“编译器尾音”口径以二进制证据落地。
10. 单 return 汇合、三元表达式、分支换向、真实成员/布局还原 → 对齐块序/栈槽。

## 四、关键事件与待决策

1. **dbmw 第 6 轮事故**：agent 把 `DBManager.cpp` 清空（-6516 行）致 195 个
   CDBManager 未定义；主 Agent 恢复 HEAD 版本并补 `~STGuildCargoLog` 空定义，
   第 7 轮恢复代理把 md 压回 405。约束已写入任务模板：禁止清空/删除整文件实现。
2. **陈旧 manifest 假 md**：`gen_function_md.py` 全量模式按旧 manifest 地址切当前
   二进制会产生假 md（guild 曾现 718→792 假回归）；权威测量必须先
   `gen_report_manifest.py` 重新分类再全量重生成。
3. **ARCHIVED 待审批**（§4.2，需主 Agent/用户批准）：
   - relay 7 个 REMAIN（getTickLog、UDPHandlerS2S::dispatch、TCPUser::onPacketParse、
     popCopy、peekCopy、get_server_section、get_aradauth_section）——自定义
     4.1.2-52 编译器 -O0 伪影，证据在 `function_reports/relay/caliber_issues.csv`。
   - 其它服务 CSV 中历史 codegen_diff 记录（多数已随源码修复转为 fixed，遗留
     记录视为过期/待复核）。
4. **工具链结论**：bridge/auction/point/channel/relay 用 c6446r（4.4.6-3）最优；
   guild/dbmw/manager/monitor/statics/coserver 用 c6（4.4.7）最优；stun 用精确
   4.1.2-52；community 默认宿主编译器可评估切 4.x。逐文件工具链切换按手册 §4.1
   授权执行。

## 五、复现

```bash
cd /home/loyieking/dnf_workspace/dnf_decompile
# 权威分类（全部服务）
python3 source/toolchain/gen_report_manifest.py
# 全量 md（先 manifest 后 md，避免陈旧假 md）
python3 source/toolchain/gen_function_md.py --services <svc>
# 单函数闭环（完成标准：“md 已删除”）
python3 source/toolchain/gen_function_md.py --services <svc> --function <mangled>
# 重建（c6446r/c6/c5 变体见 cmake_build_all.sh）
bash source/toolchain/cmake_build_all.sh <svc>
```

ORIG 二进制：`dnf_installer/build/dnf_data/home/template/neople/<svc>/df_<svc>_r`；
重建产物：`dnf_decompile/build/<svc>/df_<svc>_r`；报告：`function_reports/<svc>/`。

## 六、下一步

1. 第 8 轮及后续轮次继续逐服务回归至归零（当前大头 guild 564 / monitor 432 /
   dbmw 405）。
2. 审批 ARCHIVED 清单（relay 7 个等）。
3. 收尾：全量 manifest/README/基线对比更新并核验归零。

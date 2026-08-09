# df_manager_r 验收报告（MISSING 归零后）

生成：compare_manager.py 严格口径（CALIBER_VERSION=3）+

字符串交集与助记符重叠（与 validate_monitor.py 同法）


## 总体指标


| 指标 | 数值 |
|---|---:|
| 应用层函数（原版符号集） | 1879 |
| MISSING | 0 |
| IDENTICAL | 455 |
| NEAR（助记符一致） | 424 |
| DIFF（语义复核中） | 1000 |
| 平均助记符重叠 | 89.97% |
| 字符串交集 | 17660 / 19315（91.4%） |

## DIFF 语义复核说明


DIFF 分两类：

1. **编译器形态差异**（yassl/taocrypt -O3 调度、MySQL client -O2 调度、
   libstdc++ 4.4.7 vs 4.4.4 内联决策）：以核心 ALU 操作数直方图
   （add/adc/sub/and/or/xor/shl/shr/shld/shrd/rol/ror/imul/lea/mov/
   分支等逐项计数）核验语义等价，差异多为 ±1~8 条寄存器分配/调度。
2. **本会话快速实现**（CServerHandler/CPacketTranslater 各 handler、
   网络线程 dispatch、配置表解析等）：已按原版反汇编逐函数收紧语义，
   剩余差异为日志字符串、EH landing pad、循环形态等 -O0 形态差异。

代表性已核对（ALU 操作数完全一致）：TaoCrypt Transform512/Transform256/
SHA/RIPEMD160/MD2/MD4 Transform、AES::SetKey（1,251 vs 1,259 条）、
DES_EDE3::RawProcessBlock、PentiumOptimized::Multiply8、
yaSSL InitHandShakeFactory/PemToDer/makeMasterSecret 等。

## 构建与链接


- 脚本：build-manager.sh（应用 -O0 gnu++0x；yassl/taocrypt -O3 -fPIC -DNDEBUG
  -DYASSL_PURE_C；MySQL client -O2 -fPIC -DNDEBUG -DDBUG_OFF，
  libmysqlclient.a 静态归档；zlib trees.o 直接链接）
- 产物：source/build-manager/df_manager_r（可链接，缺失符号 0）
- 工具链：GCC 4.4.7 驱动 + 4.4.4 cc1（与原始 .comment 一致）

详见 docs/df_manager_r_progress.md（分批复核记录）。

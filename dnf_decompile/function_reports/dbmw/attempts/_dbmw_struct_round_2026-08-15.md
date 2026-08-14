# DBMW 结构体/字段轮修复记录（2026-08-15）

## 本次修改
- `source/DNFServer/GameServer/DBMW/DNFPacket.h`
  - `Packet_DB_Load_Request_Guild_Board_Write` 补齐 +0xa/+0xb/+0xf/+0x13/+0x17
    的完整布局，并新增局部 BoardInfo/Member 使 `OnWriteGuildBoard` 走具名字段访问。
  - `Packet_DB_Load_Request_Web_Guild_Board_Write` 补齐 +0x12 `m_no`。
- `source/DNFServer/GameServer/DBMW/DBManager.cpp`
  - `OnWriteGuildBoard` / `OnWriteWebGuildBoard` 去掉 `(char*)req + offset`
    裸偏移，改用 `req->m_id` / `req->m_no` / `req->m_info.*`。
  - `OnSavePowerWarStatueRanker` 去除与 ORIG 不一致的 `h->set_query` 返回值提前
    返回，exec 判断改为 ORIG 的 bool 局部变量形态。
  - `OnManagerEventTriggerAck` 局部变量声明顺序对齐 ORIG（eventId/kind/group
    先于 `CDBHandle* h`）。
- `source/DNFServer/GameServer/DBMW/QueryCounter.cpp`
  - `WriteDBLog` 循环变量由 `unsigned int` 改为 `int`，恢复 ORIG 的 `setle`
    （有符号）循环边界。

## 验证（scratch 单独重编 DBManager / QueryCounter）
以 `/tmp/sub_dbmw_verifydb/df_dbmw_r` 和 `/tmp/sub_dbmw_qc/df_dbmw_r` 实测：
- `CDBManager::OnWriteWebGuildBoard`：manifest DIFF -> NEAR。
- `CDBManager::OnManagerEventTriggerAck`：保持 NEAR，但栈槽/日志槽尾音仍差。
- `CDBManager::OnWriteGuildBoard`：仍 DIFF，但已消除裸偏移 `add $0x..`，剩余为
  寄存器分配/栈槽与错误块顺序。
- `CDBManager::SaveMemberDelete`：NEAR -> IDENTICAL_AE（同一 TU 重编后）。
- `CDBManager::OnSavePowerWarStatueRanker`：仍 DIFF，去掉额外 set_query 分支后
  剩余编译器 bool store/栈槽差异。
- `CQueryCounter::WriteDBLog`：循环 `setle` 已对齐，仍 DIFF，剩余寄存器分配。

## 尝试后放弃
- `DNFPacketTracer` 构造函数移除局部 `CUnixTimer* timer` 后 C1/C2 从 NEAR 变为
  DIFF（ORIG 需要 `mov %ebx,%eax; mov %eax,%edx` 两个 mov），已回退该改动。
- DBManager 其余大量 DIFF 经 diff 核对为 4.4.6 vs 4.1.2/4.4.x 编译器尾音：
  寄存器分配顺序、bool 局部变量 store 槽位、CMyFileLog 栈槽、分支偏移。

## 需要 /root 的工具链/共享头问题
- DNFMySql.cpp 仍按 4.4.6 编译，但 ORIG 的 `x->member = f()` 需要 4.1.2
  代码生成；已在 `function_reports/dbmw/attempts/_dbmw_misc_compiler_version_2026-08-15.md`
  记录，需 root 改 TU 映射/`-std=gnu++98`。
- DBManager.cpp 的剩余 NEAR/DIFF 为编译器尾音，当前 `-B/tmp/cc1plus446bin`
  不能稳定复现 ORIG；如需继续收敛需调整编译器版本映射。

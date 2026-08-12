# _ZN10CDBManager18OnUpgradeGuildAgitEP28Packet_DB_Upgrade_Guild_AgitR34Packet_DB_Upgrade_Guild_Agit_Reply

`CDBManager::OnUpgradeGuildAgit(Packet_DB_Upgrade_Guild_Agit*, Packet_DB_Upgrade_Guild_Agit_Reply&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x807fee2` | `0xbb` | `0x8058c8c` | `0xb6` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,50 +1,49 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
-mov    0xa(%eax),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
 mov    %eax,0xc(%esp)
 movl   $"UpDate guild_agit set upgrade = upgrade + 1 where guild_id = %d",0x8(%esp)
 movl   $0x4eb6,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4eb6,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager18OnUpgradeGuildAgitEP28Packet_DB_Upgrade_Guild_AgitR34Packet_DB_Upgrade_Guild_Agit_Reply+0xaa>
+je     <T> <_ZN10CDBManager18OnUpgradeGuildAgitEP28Packet_DB_Upgrade_Guild_AgitR34Packet_DB_Upgrade_Guild_Agit_Reply+0xa5>
 mov    0x10(%ebp),%eax
 movl   $0x2,0x12(%eax)
 movl   $0x19ea,0x8(%esp)
 movl   $&_ZZN10CDBManager18OnUpgradeGuildAgitEP28Packet_DB_Upgrade_Guild_AgitR34Packet_DB_Upgrade_Guild_Agit_ReplyE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"OnUpgradeGuildAgit Query Error\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18OnUpgradeGuildAgitEP28Packet_DB_Upgrade_Guild_AgitR34Packet_DB_Upgrade_Guild_Agit_Reply+0xb9>
+jmp    <T> <_ZN10CDBManager18OnUpgradeGuildAgitEP28Packet_DB_Upgrade_Guild_AgitR34Packet_DB_Upgrade_Guild_Agit_Reply+0xb4>
 mov    0x10(%ebp),%eax
 movl   $0x0,0x12(%eax)
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnUpgradeGuildAgit(Packet_DB_Upgrade_Guild_Agit*,
   Packet_DB_Upgrade_Guild_Agit_Reply&) */

bool __thiscall
CDBManager::
_ZN10CDBManager18OnUpgradeGuildAgitEP28Packet_DB_Upgrade_Guild_AgitR34Packet_DB_Upgrade_Guild_Agit_Reply
          (CDBManager *this,Packet_DB_Upgrade_Guild_Agit *param_1,
          Packet_DB_Upgrade_Guild_Agit_Reply *param_2)

{
  bool bVar1;
  CMyFileLog local_1c [11];
  char local_11;
  int *local_10;
  
  local_10 = *(int **)(this + 0x20);
  (**(code **)(*local_10 + 0x1c))
            (local_10,0x4eb6,"UpDate guild_agit set upgrade = upgrade + 1 where guild_id = %d",
             *(undefined4 *)(param_1 + 10));
  local_11 = (**(code **)(*local_10 + 0x20))(local_10,0x4eb6);
  bVar1 = local_11 == '\x01';
  if (bVar1) {
    *(undefined4 *)(param_2 + 0x12) = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0x12) = 2;
    CMyFileLog::CMyFileLog(local_1c,"OnUpgradeGuildAgit",0x19ea);
    CMyFileLog::operator()(local_1c,"./log/DBQueryErr","OnUpgradeGuildAgit Query Error\n");
  }
  return bVar1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*

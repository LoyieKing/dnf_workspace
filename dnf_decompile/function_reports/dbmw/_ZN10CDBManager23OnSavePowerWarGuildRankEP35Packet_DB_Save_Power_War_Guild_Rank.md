# _ZN10CDBManager23OnSavePowerWarGuildRankEP35Packet_DB_Save_Power_War_Guild_Rank

`CDBManager::OnSavePowerWarGuildRank(Packet_DB_Save_Power_War_Guild_Rank*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x807f5f8` | `0x1bc` | `0x804fb02` | `0x1cd` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,119 +1,125 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x58,%esp
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
 mov    %eax,-0x20(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0xa(%eax),%eax
 mov    %al,-0x19(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0xb(%eax),%eax
 cmp    $0x1,%al
-jne    <T> <_ZN10CDBManager23OnSavePowerWarGuildRankEP35Packet_DB_Save_Power_War_Guild_Rank+0xba>
+jne    <T> <_ZN10CDBManager23OnSavePowerWarGuildRankEP35Packet_DB_Save_Power_War_Guild_Rank+0xc4>
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 movzbl -0x19(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"deLete from power_war_guild_rank where server_id=%d",0x8(%esp)
 movl   $0x4ea9,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23OnSavePowerWarGuildRankEP35Packet_DB_Save_Power_War_Guild_Rank+0x99>
+movl   $0x18f4,0x8(%esp)
+movl   $&_ZZN10CDBManager23OnSavePowerWarGuildRankEP35Packet_DB_Save_Power_War_Guild_RankE12__FUNCTION__,0x4(%esp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"deLete_from_power_war_guild_rank Query Error\n",0x8(%esp)
+movl   $"./log/DBQueryErr",0x4(%esp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23OnSavePowerWarGuildRankEP35Packet_DB_Save_Power_War_Guild_Rank+0x1cb>
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4ea9,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x21(%ebp)
-movzbl -0x21(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager23OnSavePowerWarGuildRankEP35Packet_DB_Save_Power_War_Guild_Rank+0xba>
-movl   $0x18f4,0x8(%esp)
-movl   $&_ZZN10CDBManager23OnSavePowerWarGuildRankEP35Packet_DB_Save_Power_War_Guild_RankE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"deLete_from_power_war_guild_rank Query Error\n",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+je     <T> <_ZN10CDBManager23OnSavePowerWarGuildRankEP35Packet_DB_Save_Power_War_Guild_Rank+0xc4>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23OnSavePowerWarGuildRankEP35Packet_DB_Save_Power_War_Guild_Rank+0x1ba>
+jmp    <T> <_ZN10CDBManager23OnSavePowerWarGuildRankEP35Packet_DB_Save_Power_War_Guild_Rank+0x1cb>
 mov    0xc(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    %eax,-0x18(%ebp)
 movl   $0x0,-0x14(%ebp)
-jmp    <T> <_ZN10CDBManager23OnSavePowerWarGuildRankEP35Packet_DB_Save_Power_War_Guild_Rank+0x1a4>
+jmp    <T> <_ZN10CDBManager23OnSavePowerWarGuildRankEP35Packet_DB_Save_Power_War_Guild_Rank+0x1b5>
+mov    0xc(%ebp),%eax
 mov    -0x14(%ebp),%edx
-mov    0xc(%ebp),%eax
 add    $0x2,%edx
 mov    (%eax,%edx,8),%eax
 mov    %eax,-0x10(%ebp)
+mov    0xc(%ebp),%eax
 mov    -0x14(%ebp),%edx
-mov    0xc(%ebp),%eax
 add    $0x2,%edx
 mov    0x4(%eax,%edx,8),%eax
 mov    %eax,-0xc(%ebp)
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ecx
 mov    0xc(%ebp),%eax
 movzbl 0xb(%eax),%eax
 movzbl %al,%edx
 movzbl -0x19(%ebp),%eax
 mov    %edx,0x1c(%esp)
 mov    -0xc(%ebp),%edx
 mov    %edx,0x18(%esp)
 mov    -0x10(%ebp),%edx
 mov    %edx,0x14(%esp)
 mov    -0x14(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"inSert into power_war_guild_rank set server_id=%d, rank=%d, guild_id=%d, power_war_point=%d, power_side=%d",0x8(%esp)
 movl   $0x4eaa,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23OnSavePowerWarGuildRankEP35Packet_DB_Save_Power_War_Guild_Rank+0x189>
+movl   $0x190c,0x8(%esp)
+movl   $&_ZZN10CDBManager23OnSavePowerWarGuildRankEP35Packet_DB_Save_Power_War_Guild_RankE12__FUNCTION__,0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"inSert_into_power_war_guild_rank Query Error\n",0x8(%esp)
+movl   $"./log/DBQueryErr",0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23OnSavePowerWarGuildRankEP35Packet_DB_Save_Power_War_Guild_Rank+0x1cb>
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4eaa,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x21(%ebp)
-movzbl -0x21(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager23OnSavePowerWarGuildRankEP35Packet_DB_Save_Power_War_Guild_Rank+0x1a0>
-movl   $0x190c,0x8(%esp)
-movl   $&_ZZN10CDBManager23OnSavePowerWarGuildRankEP35Packet_DB_Save_Power_War_Guild_RankE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"inSert_into_power_war_guild_rank Query Error\n",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+je     <T> <_ZN10CDBManager23OnSavePowerWarGuildRankEP35Packet_DB_Save_Power_War_Guild_Rank+0x1b1>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23OnSavePowerWarGuildRankEP35Packet_DB_Save_Power_War_Guild_Rank+0x1ba>
+jmp    <T> <_ZN10CDBManager23OnSavePowerWarGuildRankEP35Packet_DB_Save_Power_War_Guild_Rank+0x1cb>
 addl   $0x1,-0x14(%ebp)
 mov    -0x14(%ebp),%eax
 cmp    -0x18(%ebp),%eax
 setl   %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager23OnSavePowerWarGuildRankEP35Packet_DB_Save_Power_War_Guild_Rank+0xcf>
+jne    <T> <_ZN10CDBManager23OnSavePowerWarGuildRankEP35Packet_DB_Save_Power_War_Guild_Rank+0xd9>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnSavePowerWarGuildRank(Packet_DB_Save_Power_War_Guild_Rank*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager23OnSavePowerWarGuildRankEP35Packet_DB_Save_Power_War_Guild_Rank
          (CDBManager *this,Packet_DB_Save_Power_War_Guild_Rank *param_1)

{
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [11];
  char local_25;
  int *local_24;
  Packet_DB_Save_Power_War_Guild_Rank local_1d;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_24 = *(int **)(this + 0x20);
  local_1d = param_1[10];
  if (param_1[0xb] == (Packet_DB_Save_Power_War_Guild_Rank)0x1) {
    (**(code **)(*local_24 + 0x1c))
              (local_24,0x4ea9,"deLete from power_war_guild_rank where server_id=%d",local_1d);
    local_25 = (**(code **)(*local_24 + 0x20))(local_24,0x4ea9);
    if (local_25 != '\x01') {
      CMyFileLog::CMyFileLog(local_38,"OnSavePowerWarGuildRank",0x18f4);
      CMyFileLog::operator()
                (local_38,"./log/DBQueryErr","deLete_from_power_war_guild_rank Query Error\n");
      return 0;
    }
  }
  local_1c = *(int *)(param_1 + 0xc);
  local_18 = 0;
  while( true ) {
    if (local_1c <= local_18) {
      return 1;
    }
    local_14 = *(undefined4 *)(param_1 + (local_18 + 2) * 8);
    local_10 = *(undefined4 *)(param_1 + (local_18 + 2) * 8 + 4);
    (**(code **)(*local_24 + 0x1c))
              (local_24,0x4eaa,
               "inSert into power_war_guild_rank set server_id=%d, rank=%d, guild_id=%d, power_war_point=%d, power_side=%d"
               ,local_1d,local_18,local_14,local_10,param_1[0xb]);
    local_25 = (**(code **)(*local_24 + 0x20))(local_24,0x4eaa);
    if (local_25 != '\x01') break;
    local_18 = local_18 + 1;
    local_25 = '\x01';
  }
  CMyFileLog::CMyFileLog(local_30,"OnSavePowerWarGuildRank",0x190c);
  CMyFileLog::operator()
            (local_30,"./log/DBQueryErr","inSert_into_power_war_guild_rank Query Error\n");
  return 0;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*

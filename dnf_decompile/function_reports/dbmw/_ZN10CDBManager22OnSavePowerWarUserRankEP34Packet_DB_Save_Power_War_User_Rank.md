# _ZN10CDBManager22OnSavePowerWarUserRankEP34Packet_DB_Save_Power_War_User_Rank

`CDBManager::OnSavePowerWarUserRank(Packet_DB_Save_Power_War_User_Rank*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x807f418` | `0x1df` | `0x804f966` | `0x204` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,131 +1,147 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x54,%esp
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
+mov    %eax,-0x28(%ebp)
+mov    0xc(%ebp),%eax
 mov    %eax,-0x24(%ebp)
-mov    0xc(%ebp),%eax
-movzbl 0xb(%eax),%eax
+mov    -0x24(%ebp),%eax
+add    $0xb,%eax
+movzbl (%eax),%eax
 mov    %al,-0x1d(%ebp)
-mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
+mov    -0x24(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager22OnSavePowerWarUserRankEP34Packet_DB_Save_Power_War_User_Rank+0xca>
-mov    0xc(%ebp),%eax
-movzbl 0xc(%eax),%eax
+je     <T> <_ZN10CDBManager22OnSavePowerWarUserRankEP34Packet_DB_Save_Power_War_User_Rank+0xe0>
+mov    -0x24(%ebp),%eax
+add    $0xc,%eax
+movzbl (%eax),%eax
 cmp    $0x1,%al
-jne    <T> <_ZN10CDBManager22OnSavePowerWarUserRankEP34Packet_DB_Save_Power_War_User_Rank+0xca>
-mov    -0x24(%ebp),%eax
+jne    <T> <_ZN10CDBManager22OnSavePowerWarUserRankEP34Packet_DB_Save_Power_War_User_Rank+0xe0>
+mov    -0x28(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 movzbl -0x1d(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"deLete from power_war_user_rank where server_id=%d",0x8(%esp)
 movl   $0x4ea7,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    -0x24(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager22OnSavePowerWarUserRankEP34Packet_DB_Save_Power_War_User_Rank+0xb5>
+movl   $0x18bf,0x8(%esp)
+movl   $&_ZZN10CDBManager22OnSavePowerWarUserRankEP34Packet_DB_Save_Power_War_User_RankE12__FUNCTION__,0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"deLete_from_power_war_user_rank Query Error\n",0x8(%esp)
+movl   $"./log/DBQueryErr",0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager22OnSavePowerWarUserRankEP34Packet_DB_Save_Power_War_User_Rank+0x1fe>
+mov    -0x28(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4ea7,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x25(%ebp)
-movzbl -0x25(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager22OnSavePowerWarUserRankEP34Packet_DB_Save_Power_War_User_Rank+0xca>
-movl   $0x18bf,0x8(%esp)
-movl   $&_ZZN10CDBManager22OnSavePowerWarUserRankEP34Packet_DB_Save_Power_War_User_RankE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"deLete_from_power_war_user_rank Query Error\n",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+je     <T> <_ZN10CDBManager22OnSavePowerWarUserRankEP34Packet_DB_Save_Power_War_User_Rank+0xe0>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager22OnSavePowerWarUserRankEP34Packet_DB_Save_Power_War_User_Rank+0x1d9>
-mov    0xc(%ebp),%eax
-mov    0x11(%eax),%eax
+jmp    <T> <_ZN10CDBManager22OnSavePowerWarUserRankEP34Packet_DB_Save_Power_War_User_Rank+0x1fe>
+mov    -0x24(%ebp),%eax
+add    $0x11,%eax
+mov    (%eax),%eax
 mov    %eax,-0x1c(%ebp)
-mov    0xc(%ebp),%eax
-mov    0xd(%eax),%eax
+mov    -0x24(%ebp),%eax
+add    $0xd,%eax
+mov    (%eax),%eax
 mov    %eax,-0x18(%ebp)
 movl   $0x0,-0x14(%ebp)
-jmp    <T> <_ZN10CDBManager22OnSavePowerWarUserRankEP34Packet_DB_Save_Power_War_User_Rank+0x1c3>
-mov    -0x14(%ebp),%edx
-mov    0xc(%ebp),%eax
-add    $0x2,%edx
-mov    0x5(%eax,%edx,8),%eax
+jmp    <T> <_ZN10CDBManager22OnSavePowerWarUserRankEP34Packet_DB_Save_Power_War_User_Rank+0x1e8>
+mov    -0x14(%ebp),%eax
+shl    $0x3,%eax
+add    $0x15,%eax
+add    -0x24(%ebp),%eax
+mov    (%eax),%eax
 mov    %eax,-0x10(%ebp)
-mov    -0x14(%ebp),%edx
-mov    0xc(%ebp),%eax
-add    $0x2,%edx
-mov    0x9(%eax,%edx,8),%eax
+mov    -0x14(%ebp),%eax
+shl    $0x3,%eax
+add    $0x19,%eax
+add    -0x24(%ebp),%eax
+mov    (%eax),%eax
 mov    %eax,-0xc(%ebp)
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ecx
-mov    0xc(%ebp),%eax
-movzbl 0xc(%eax),%eax
+mov    -0x24(%ebp),%eax
+add    $0xc,%eax
+movzbl (%eax),%eax
 movzbl %al,%edx
 mov    -0x14(%ebp),%eax
 mov    -0x18(%ebp),%ebx
 add    %eax,%ebx
 movzbl -0x1d(%ebp),%eax
 mov    %edx,0x1c(%esp)
 mov    -0xc(%ebp),%edx
 mov    %edx,0x18(%esp)
 mov    -0x10(%ebp),%edx
 mov    %edx,0x14(%esp)
 mov    %ebx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"inSert into power_war_user_rank set server_id=%d, rank=%d, charac_no=%d, power_war_point=%d, power_side=%d",0x8(%esp)
 movl   $0x4ea8,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
-mov    -0x24(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager22OnSavePowerWarUserRankEP34Packet_DB_Save_Power_War_User_Rank+0x1bc>
+movl   $0x18d8,0x8(%esp)
+movl   $&_ZZN10CDBManager22OnSavePowerWarUserRankEP34Packet_DB_Save_Power_War_User_RankE12__FUNCTION__,0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"inSert_into_power_war_user_rank Query Error\n",0x8(%esp)
+movl   $"./log/DBQueryErr",0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager22OnSavePowerWarUserRankEP34Packet_DB_Save_Power_War_User_Rank+0x1fe>
+mov    -0x28(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4ea8,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x25(%ebp)
-movzbl -0x25(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager22OnSavePowerWarUserRankEP34Packet_DB_Save_Power_War_User_Rank+0x1bf>
-movl   $0x18d8,0x8(%esp)
-movl   $&_ZZN10CDBManager22OnSavePowerWarUserRankEP34Packet_DB_Save_Power_War_User_RankE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"inSert_into_power_war_user_rank Query Error\n",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+je     <T> <_ZN10CDBManager22OnSavePowerWarUserRankEP34Packet_DB_Save_Power_War_User_Rank+0x1e4>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager22OnSavePowerWarUserRankEP34Packet_DB_Save_Power_War_User_Rank+0x1d9>
+jmp    <T> <_ZN10CDBManager22OnSavePowerWarUserRankEP34Packet_DB_Save_Power_War_User_Rank+0x1fe>
 addl   $0x1,-0x14(%ebp)
 mov    -0x14(%ebp),%eax
 cmp    -0x1c(%ebp),%eax
 setl   %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager22OnSavePowerWarUserRankEP34Packet_DB_Save_Power_War_User_Rank+0xe8>
+jne    <T> <_ZN10CDBManager22OnSavePowerWarUserRankEP34Packet_DB_Save_Power_War_User_Rank+0x102>
 mov    $0x1,%eax
 add    $0x54,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnSavePowerWarUserRank(Packet_DB_Save_Power_War_User_Rank*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager22OnSavePowerWarUserRankEP34Packet_DB_Save_Power_War_User_Rank
          (CDBManager *this,Packet_DB_Save_Power_War_User_Rank *param_1)

{
  CMyFileLog local_3c [8];
  CMyFileLog local_34 [11];
  char local_29;
  int *local_28;
  Packet_DB_Save_Power_War_User_Rank local_21;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_28 = *(int **)(this + 0x20);
  local_21 = param_1[0xb];
  if ((param_1[10] != (Packet_DB_Save_Power_War_User_Rank)0x0) &&
     (param_1[0xc] == (Packet_DB_Save_Power_War_User_Rank)0x1)) {
    (**(code **)(*local_28 + 0x1c))
              (local_28,0x4ea7,"deLete from power_war_user_rank where server_id=%d",local_21);
    local_29 = (**(code **)(*local_28 + 0x20))(local_28,0x4ea7);
    if (local_29 != '\x01') {
      CMyFileLog::CMyFileLog(local_3c,"OnSavePowerWarUserRank",0x18bf);
      CMyFileLog::operator()
                (local_3c,"./log/DBQueryErr","deLete_from_power_war_user_rank Query Error\n");
      return 0;
    }
  }
  local_20 = *(int *)(param_1 + 0x11);
  local_1c = *(int *)(param_1 + 0xd);
  local_18 = 0;
  while( true ) {
    if (local_20 <= local_18) {
      return 1;
    }
    local_14 = *(undefined4 *)(param_1 + (local_18 + 2) * 8 + 5);
    local_10 = *(undefined4 *)(param_1 + (local_18 + 2) * 8 + 9);
    (**(code **)(*local_28 + 0x1c))
              (local_28,0x4ea8,
               "inSert into power_war_user_rank set server_id=%d, rank=%d, charac_no=%d, power_war_point=%d, power_side=%d"
               ,local_21,local_1c + local_18,local_14,local_10,param_1[0xc]);
    local_29 = (**(code **)(*local_28 + 0x20))(local_28,0x4ea8);
    if (local_29 != '\x01') break;
    local_18 = local_18 + 1;
    local_29 = '\x01';
  }
  CMyFileLog::CMyFileLog(local_34,"OnSavePowerWarUserRank",0x18d8);
  CMyFileLog::operator()
            (local_34,"./log/DBQueryErr","inSert_into_power_war_user_rank Query Error\n");
  return 0;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*

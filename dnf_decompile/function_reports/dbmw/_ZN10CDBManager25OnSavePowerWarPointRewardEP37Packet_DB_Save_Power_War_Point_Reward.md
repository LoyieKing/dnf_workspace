# _ZN10CDBManager25OnSavePowerWarPointRewardEP37Packet_DB_Save_Power_War_Point_Reward

`CDBManager::OnSavePowerWarPointReward(Packet_DB_Save_Power_War_Point_Reward*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x807f7b4` | `0x101` | `0x804f1e8` | `0x101` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,71 +1,71 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x58,%esp
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
-mov    %eax,-0x20(%ebp)
+mov    %eax,-0x24(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0xa(%eax),%eax
-mov    %al,-0x19(%ebp)
+mov    %al,-0x1d(%ebp)
 mov    0xc(%ebp),%eax
 mov    0xb(%eax),%eax
-mov    %eax,-0x18(%ebp)
-movl   $0x0,-0x14(%ebp)
+mov    %eax,-0x1c(%ebp)
+movl   $0x0,-0x18(%ebp)
 jmp    <T> <_ZN10CDBManager25OnSavePowerWarPointRewardEP37Packet_DB_Save_Power_War_Point_Reward+0xe9>
-mov    -0x14(%ebp),%edx
 mov    0xc(%ebp),%eax
+mov    -0x18(%ebp),%edx
 mov    0xf(%eax,%edx,8),%eax
+mov    %eax,-0x14(%ebp)
+mov    0xc(%ebp),%eax
+mov    -0x18(%ebp),%edx
+mov    0x13(%eax,%edx,8),%eax
 mov    %eax,-0x10(%ebp)
-mov    -0x14(%ebp),%edx
-mov    0xc(%ebp),%eax
-mov    0x13(%eax,%edx,8),%eax
-mov    %eax,-0xc(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
-movzbl -0x19(%ebp),%eax
+movzbl -0x1d(%ebp),%eax
 mov    %eax,0x14(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0x10(%esp)
 mov    -0x10(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    -0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"upDate guild_info set power_war_point=power_war_point+%d where guild_id=%d and server_id=%d and expire_flag=0",0x8(%esp)
 movl   $0x4eab,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4eab,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x21(%ebp)
-movzbl -0x21(%ebp),%eax
+mov    %al,-0x9(%ebp)
+movzbl -0x9(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager25OnSavePowerWarPointRewardEP37Packet_DB_Save_Power_War_Point_Reward+0xe5>
 movl   $0x192b,0x8(%esp)
 movl   $&_ZZN10CDBManager25OnSavePowerWarPointRewardEP37Packet_DB_Save_Power_War_Point_RewardE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"upDate_into_guild_info_power_war_point Query Error\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager25OnSavePowerWarPointRewardEP37Packet_DB_Save_Power_War_Point_Reward+0xff>
-addl   $0x1,-0x14(%ebp)
-mov    -0x14(%ebp),%eax
-cmp    -0x18(%ebp),%eax
+addl   $0x1,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
+cmp    -0x1c(%ebp),%eax
 setl   %al
 test   %al,%al
 jne    <T> <_ZN10CDBManager25OnSavePowerWarPointRewardEP37Packet_DB_Save_Power_War_Point_Reward+0x2e>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnSavePowerWarPointReward(Packet_DB_Save_Power_War_Point_Reward*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager25OnSavePowerWarPointRewardEP37Packet_DB_Save_Power_War_Point_Reward
          (CDBManager *this,Packet_DB_Save_Power_War_Point_Reward *param_1)

{
  CMyFileLog local_30 [11];
  char local_25;
  int *local_24;
  Packet_DB_Save_Power_War_Point_Reward local_1d;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_24 = *(int **)(this + 0x20);
  local_1d = param_1[10];
  local_1c = *(int *)(param_1 + 0xb);
  local_18 = 0;
  while( true ) {
    if (local_1c <= local_18) {
      return 1;
    }
    local_14 = *(undefined4 *)(param_1 + local_18 * 8 + 0xf);
    local_10 = *(undefined4 *)(param_1 + local_18 * 8 + 0x13);
    (**(code **)(*local_24 + 0x1c))
              (local_24,0x4eab,
               "upDate guild_info set power_war_point=power_war_point+%d where guild_id=%d and server_id=%d and expire_flag=0"
               ,local_10,local_14,local_1d);
    local_25 = (**(code **)(*local_24 + 0x20))(local_24,0x4eab);
    if (local_25 != '\x01') break;
    local_18 = local_18 + 1;
    local_25 = 1;
  }
  CMyFileLog::CMyFileLog(local_30,"OnSavePowerWarPointReward",0x192b);
  CMyFileLog::operator()
            (local_30,"./log/DBQueryErr","upDate_into_guild_info_power_war_point Query Error\n");
  return 0;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*

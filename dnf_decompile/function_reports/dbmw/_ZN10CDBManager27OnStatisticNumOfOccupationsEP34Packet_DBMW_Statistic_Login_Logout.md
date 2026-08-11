# _ZN10CDBManager27OnStatisticNumOfOccupationsEP34Packet_DBMW_Statistic_Login_Logout

`CDBManager::OnStatisticNumOfOccupations(Packet_DBMW_Statistic_Login_Logout*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x8083704` | `0xd1` | `0x805ca86` | `0xd1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,58 +1,58 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%esi
-mov    0xc(%ebp),%eax
-mov    0x614(%eax),%ebx
-mov    0xc(%ebp),%eax
-mov    0x610(%eax),%ecx
-mov    0xc(%ebp),%eax
-mov    0x60c(%eax),%edx
-mov    0xc(%ebp),%eax
-mov    0x608(%eax),%eax
-mov    %ebx,0x18(%esp)
-mov    %ecx,0x14(%esp)
-mov    %edx,0x10(%esp)
-mov    %eax,0xc(%esp)
+mov    (%eax),%eax
+mov    0xc(%ebp),%edx
+mov    0x614(%edx),%esi
+mov    0xc(%ebp),%edx
+mov    0x610(%edx),%ebx
+mov    0xc(%ebp),%edx
+mov    0x60c(%edx),%ecx
+mov    0xc(%ebp),%edx
+mov    0x608(%edx),%edx
+mov    %esi,0x18(%esp)
+mov    %ebx,0x14(%esp)
+mov    %ecx,0x10(%esp)
+mov    %edx,0xc(%esp)
 movl   $"inSert into log_num_occupations(occ_time,num_occupations_charscreen,num_occupations_seriaroom,num_login_per_min,num_logout_per_min) values (now(),%d,%d,%d,%d)",0x8(%esp)
 movl   $0x4eec,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%esi
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $0x4eeb,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
+mov    -0x10(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %al,-0x9(%ebp)
+movzbl -0x9(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager27OnStatisticNumOfOccupationsEP34Packet_DBMW_Statistic_Login_Logout+0xc5>
 movl   $0x20b6,0x8(%esp)
 movl   $"OnStatisticNumOfOccupations",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"OnStatisticNumOfOccupations db insert error",0x8(%esp)
 movl   $"./log/Statistics",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x1,%eax
 add    $0x30,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnStatisticNumOfOccupations(Packet_DBMW_Statistic_Login_Logout*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager27OnStatisticNumOfOccupationsEP34Packet_DBMW_Statistic_Login_Logout
          (CDBManager *this,Packet_DBMW_Statistic_Login_Logout *param_1)

{
  CMyFileLog local_1c [11];
  char local_11;
  int *local_10;
  
  local_10 = *(int **)(this + 8);
  (**(code **)(*local_10 + 0x1c))
            (local_10,0x4eec,
             "inSert into log_num_occupations(occ_time,num_occupations_charscreen,num_occupations_seriaroom,num_login_per_min,num_logout_per_min) values (now(),%d,%d,%d,%d)"
             ,*(undefined4 *)(param_1 + 0x608),*(undefined4 *)(param_1 + 0x60c),
             *(undefined4 *)(param_1 + 0x610),*(undefined4 *)(param_1 + 0x614));
  local_11 = (**(code **)(*local_10 + 0x20))(local_10,0x4eeb);
  if (local_11 != '\x01') {
    CMyFileLog::CMyFileLog(local_1c,"OnStatisticNumOfOccupations",0x20b6);
    CMyFileLog::operator()
              (local_1c,"./log/Statistics","OnStatisticNumOfOccupations db insert error");
  }
  return 1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/Manager/DBManager.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h 等 625 个文件*

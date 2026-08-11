# _ZN10CDBManager22OnStatisticLoginLogoutEP34Packet_DBMW_Statistic_Login_Logout

`CDBManager::OnStatisticLoginLogout(Packet_DBMW_Statistic_Login_Logout*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80835d6` | `0x12e` | `0x805cb8c` | `0x12a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,93 +1,93 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
+mov    %eax,-0x24(%ebp)
+movl   $0x0,(%esp)
+call   <T> <time>
 mov    %eax,-0x20(%ebp)
-movl   $0x0,-0x30(%ebp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <time>
 movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN10CDBManager22OnStatisticLoginLogoutEP34Packet_DBMW_Statistic_Login_Logout+0x10d>
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN10CDBManager22OnStatisticLoginLogoutEP34Packet_DBMW_Statistic_Login_Logout+0x107>
+mov    -0x24(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%esi
+mov    (%eax),%ecx
+mov    0xc(%ebp),%ebx
 mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 add    %eax,%eax
-mov    0x10(%eax,%ecx,1),%ebx
+add    $0x10,%eax
+lea    (%ebx,%eax,1),%eax
+mov    (%eax),%esi
+mov    0xc(%ebp),%ebx
 mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 add    %eax,%eax
-lea    (%ecx,%eax,1),%eax
 add    $0xf,%eax
+lea    (%ebx,%eax,1),%eax
 movzbl (%eax),%eax
-movzbl %al,%ecx
+movzbl %al,%ebx
+mov    0xc(%ebp),%edi
 mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%edi
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 add    %eax,%eax
+add    $0xe,%eax
 lea    (%edi,%eax,1),%eax
-add    $0xe,%eax
 movzbl (%eax),%eax
-movzbl %al,%edx
-mov    -0x30(%ebp),%eax
-mov    %ebx,0x18(%esp)
-mov    %ecx,0x14(%esp)
-mov    %edx,0x10(%esp)
+movzbl %al,%eax
+mov    %esi,0x18(%esp)
+mov    %ebx,0x14(%esp)
+mov    %eax,0x10(%esp)
+mov    -0x20(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"inSert into log_login_logout(occ_time,channel_no,event_type,count) values (from_unixtime(%d),%d,%d,%d)",0x8(%esp)
 movl   $0x4eeb,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
-call   *%esi
-mov    -0x20(%ebp),%eax
+call   *%ecx
+mov    -0x24(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $0x4eeb,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x21(%ebp)
-movzbl -0x21(%ebp),%eax
+mov    -0x24(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager22OnStatisticLoginLogoutEP34Packet_DBMW_Statistic_Login_Logout+0x109>
+je     <T> <_ZN10CDBManager22OnStatisticLoginLogoutEP34Packet_DBMW_Statistic_Login_Logout+0x103>
 movl   $0x2099,0x8(%esp)
 movl   $"OnStatisticLoginLogout",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"OnStatisticLoginLogout db insert error",0x8(%esp)
 movl   $"./log/Statistics",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 addl   $0x1,-0x1c(%ebp)
 mov    0xc(%ebp),%eax
-mov    0xa(%eax),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
 cmp    -0x1c(%ebp),%eax
 setg   %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager22OnStatisticLoginLogoutEP34Packet_DBMW_Statistic_Login_Logout+0x30>
+jne    <T> <_ZN10CDBManager22OnStatisticLoginLogoutEP34Packet_DBMW_Statistic_Login_Logout+0x2d>
 mov    $0x1,%eax
 add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnStatisticLoginLogout(Packet_DBMW_Statistic_Login_Logout*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager22OnStatisticLoginLogoutEP34Packet_DBMW_Statistic_Login_Logout
          (CDBManager *this,Packet_DBMW_Statistic_Login_Logout *param_1)

{
  time_t local_34;
  CMyFileLog local_30 [11];
  char local_25;
  int *local_24;
  int local_20;
  
  local_24 = *(int **)(this + 0x10);
  local_34 = 0;
  time(&local_34);
  for (local_20 = 0; local_20 < *(int *)(param_1 + 10); local_20 = local_20 + 1) {
    (**(code **)(*local_24 + 0x1c))
              (local_24,0x4eeb,
               "inSert into log_login_logout(occ_time,channel_no,event_type,count) values (from_unixtime(%d),%d,%d,%d)"
               ,local_34,param_1[local_20 * 6 + 0xe],param_1[local_20 * 6 + 0xf],
               *(undefined4 *)(param_1 + local_20 * 6 + 0x10));
    local_25 = (**(code **)(*local_24 + 0x20))(local_24,0x4eeb);
    if (local_25 != '\x01') {
      CMyFileLog::CMyFileLog(local_30,"OnStatisticLoginLogout",0x2099);
      CMyFileLog::operator()(local_30,"./log/Statistics","OnStatisticLoginLogout db insert error");
    }
  }
  return 1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/Manager/DBManager.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h 等 625 个文件*

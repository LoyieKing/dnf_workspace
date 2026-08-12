# _ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message

`CDBManager::OnLoadPeriodicMessage(Packet_Load_Periodic_Message*, Packet_Result_Loading_Periodic_Message*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80844f6` | `0x296` | `0x804f500` | `0x298` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,165 +1,167 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x48,%esp
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 movl   $"seLect message, start_h, end_h from dnf_game_message where occ_date=cast(now() as date) and display_type=1",0x8(%esp)
 movl   $0x4f04,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f04,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x92>
 movl   $0x2247,0x8(%esp)
 movl   $&_ZZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_MessageE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CDBManager::OnLoadPeriodicMessage() seLect Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x294>
+jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x296>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0xef>
+je     <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0xf1>
 mov    0x10(%ebp),%eax
 add    $0xa,%eax
 movl   $0x200,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x10(%ebp),%eax
-movl   $0x0,0x20a(%eax)
+add    $0x20a,%eax
+movl   $0x0,(%eax)
 mov    0x10(%ebp),%eax
-movl   $0x0,0x20e(%eax)
+add    $0x20e,%eax
+movl   $0x0,(%eax)
 mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x294>
+jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x296>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x148>
+je     <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x14a>
 movl   $0x2256,0x8(%esp)
 movl   $&_ZZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_MessageE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CDBManager::OnLoadPeriodicMessage() fetch Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x294>
+jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x296>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x2c,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 add    $0xa,%eax
 movl   $0x200,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x1bb>
+je     <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x1bd>
 movl   $0x226c,0x8(%esp)
 movl   $&_ZZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_MessageE12__FUNCTION__,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CDBManager::OnLoadPeriodicMessage() get_str Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x294>
+jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x296>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x34,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 add    $0x20a,%eax
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x225>
+je     <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x227>
 movl   $0x2273,0x8(%esp)
 movl   $&_ZZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_MessageE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CDBManager::OnLoadPeriodicMessage() get_int for start_h Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x294>
+jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x296>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x34,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 add    $0x20e,%eax
 mov    %eax,0x8(%esp)
 movl   $0x2,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x28f>
+je     <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x291>
 movl   $0x2279,0x8(%esp)
 movl   $&_ZZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_MessageE12__FUNCTION__,0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CDBManager::OnLoadPeriodicMessage() get_int for end_h Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x294>
+jmp    <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message+0x296>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnLoadPeriodicMessage(Packet_Load_Periodic_Message*,
   Packet_Result_Loading_Periodic_Message*) */

undefined4 __thiscall
CDBManager::
_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message
          (CDBManager *this,Packet_Load_Periodic_Message *param_1,
          Packet_Result_Loading_Periodic_Message *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [8];
  CMyFileLog local_28 [8];
  CMyFileLog local_20 [8];
  CMyFileLog local_18 [8];
  int *local_10;
  
  local_10 = *(int **)(this + 4);
  (**(code **)(*local_10 + 0x1c))
            (local_10,0x4f04,
             "seLect message, start_h, end_h from dnf_game_message where occ_date=cast(now() as date) and display_type=1"
            );
  cVar1 = (**(code **)(*local_10 + 0x20))(local_10,0x4f04);
  if (cVar1 == '\x01') {
    iVar3 = (**(code **)(*local_10 + 0x6c))(local_10);
    if (iVar3 == 0) {
      memset(param_2 + 10,0,0x200);
      *(undefined4 *)(param_2 + 0x20a) = 0;
      *(undefined4 *)(param_2 + 0x20e) = 0;
      uVar2 = 1;
    }
    else {
      cVar1 = (**(code **)(*local_10 + 0x24))(local_10);
      if (cVar1 == '\x01') {
        cVar1 = (**(code **)(*local_10 + 0x2c))(local_10,0,param_2 + 10,0x200);
        if (cVar1 == '\x01') {
          cVar1 = (**(code **)(*local_10 + 0x34))(local_10,1,param_2 + 0x20a);
          if (cVar1 == '\x01') {
            cVar1 = (**(code **)(*local_10 + 0x34))(local_10,2,param_2 + 0x20e);
            if (cVar1 == '\x01') {
              uVar2 = 1;
            }
            else {
              CMyFileLog::CMyFileLog(local_18,"OnLoadPeriodicMessage",0x2279);
              CMyFileLog::operator()
                        (local_18,"./log/DBQueryErr",
                         "CDBManager::OnLoadPeriodicMessage() get_int for end_h Error");
              uVar2 = 0;
            }
          }
          else {
            CMyFileLog::CMyFileLog(local_20,"OnLoadPeriodicMessage",0x2273);
            CMyFileLog::operator()
                      (local_20,"./log/DBQueryErr",
                       "CDBManager::OnLoadPeriodicMessage() get_int for start_h Error");
            uVar2 = 0;
          }
        }
        else {
          CMyFileLog::CMyFileLog(local_28,"OnLoadPeriodicMessage",0x226c);
          CMyFileLog::operator()
                    (local_28,"./log/DBQueryErr","CDBManager::OnLoadPeriodicMessage() get_str Error"
                    );
          uVar2 = 0;
        }
      }
      else {
        CMyFileLog::CMyFileLog(local_30,"OnLoadPeriodicMessage",0x2256);
        CMyFileLog::operator()
                  (local_30,"./log/DBQueryErr","CDBManager::OnLoadPeriodicMessage() fetch Error");
        uVar2 = 0;
      }
    }
  }
  else {
    CMyFileLog::CMyFileLog(local_38,"OnLoadPeriodicMessage",0x2247);
    CMyFileLog::operator()
              (local_38,"./log/DBQueryErr","CDBManager::OnLoadPeriodicMessage() seLect Error");
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*

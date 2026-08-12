# _ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_

`CDBManager::SendGuildCoinByMail(int, unsigned int, unsigned int, unsigned int, int, char*, char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8074cb2` | `0x2e1` | `0x8062334` | `0x2dd` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,195 +1,192 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x78,%esp
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
 mov    %eax,-0x20(%ebp)
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    %eax,-0x1c(%ebp)
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
+mov    0x10(%ebp),%eax
+mov    %eax,0x10(%esp)
 mov    0xc(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect charac_no from guild_member where guild_id = %d and server_id = %d and member_flag = 1",0x8(%esp)
 movl   $0x4e39,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x9d>
 movl   $0x897,0x8(%esp)
 movl   $&_ZZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_E12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::SendGuildCoinByMail() select charac_no from guild_member where server_id = %d and guild_id = %d and member_flag = 1\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2df>
+jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2db>
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e39,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x21(%ebp)
-movzbl -0x21(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0xcf>
+je     <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0xc8>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2df>
+jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2db>
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
 mov    (%eax),%edx
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,-0x18(%ebp)
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0x40(%ebp)
-lea    -0x40(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
 mov    %eax,-0x14(%ebp)
 mov    -0x14(%ebp),%eax
-mov    0x8(%eax),%eax
+mov    0xc(%eax),%eax
 lea    0x1(%eax),%edx
 mov    -0x14(%ebp),%eax
-mov    %edx,0x8(%eax)
+mov    %edx,0xc(%eax)
+mov    -0x14(%ebp),%eax
+movl   $0x0,0x8(%eax)
 mov    -0x14(%ebp),%eax
 movl   $0x0,0x4(%eax)
-mov    -0x14(%ebp),%eax
-movl   $0x0,(%eax)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <mktime>
 mov    %eax,-0x10(%ebp)
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2c9>
+jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2c5>
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x21(%ebp)
-movzbl -0x21(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x167>
+je     <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x15a>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2df>
+jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2db>
+movl   $0x0,-0x30(%ebp)
 mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
-lea    -0x44(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x21(%ebp)
-movzbl -0x21(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x1a0>
+je     <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x193>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2df>
-mov    -0x44(%ebp),%eax
+jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2db>
+movl   $0x0,-0x34(%ebp)
+mov    -0x30(%ebp),%eax
 mov    -0x10(%ebp),%edx
 mov    %edx,0x18(%esp)
-lea    -0x48(%ebp),%edx
+lea    -0x34(%ebp),%edx
 mov    %edx,0x14(%esp)
 mov    0x24(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    0x20(%ebp),%edx
 mov    %edx,0xc(%esp)
 movl   $0x0,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CDBManager12InsertLetterEjjPKcS1_Ril>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x226>
+je     <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x220>
 movl   $0x8c0,0x8(%esp)
 movl   $&_ZZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_E12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x24(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0x20(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"InsertLetter Err, %s(%s)",0x8(%esp)
 movl   $"./log/Postal",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2c5>
-mov    -0x48(%ebp),%edx
-mov    -0x44(%ebp),%eax
+jmp    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2c1>
+mov    -0x34(%ebp),%edx
+mov    -0x30(%ebp),%eax
 mov    %edx,0x28(%esp)
 mov    -0x10(%ebp),%edx
 mov    %edx,0x24(%esp)
 mov    0x20(%ebp),%edx
 mov    %edx,0x20(%esp)
 movl   $0x0,0x1c(%esp)
 mov    0x18(%ebp),%edx
 mov    %edx,0x18(%esp)
 mov    0x1c(%ebp),%edx
 mov    %edx,0x14(%esp)
 mov    0x14(%ebp),%edx
 mov    %edx,0x10(%esp)
 movl   $0x0,0xc(%esp)
 movl   $0x0,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CDBManager12InsertPostalEjjijijiPcli>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2c5>
+sete   %al
+test   %al,%al
+je     <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x2c1>
 movl   $0x8c6,0x8(%esp)
 movl   $&_ZZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_E12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x24(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0x20(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"InsertPostal Err, %s(%s)",0x8(%esp)
 movl   $"./log/Postal",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 addl   $0x1,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 cmp    -0x18(%ebp),%eax
 setl   %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x13d>
+jne    <T> <_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_+0x137>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::SendGuildCoinByMail(int, unsigned int, unsigned int, unsigned int, int, char*, char*)
    */

undefined4 __thiscall
CDBManager::_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_
          (CDBManager *this,int param_1,uint param_2,uint param_3,uint param_4,int param_5,
          char *param_6,char *param_7)

{
  char cVar1;
  undefined4 uVar2;
  int local_4c;
  uint local_48;
  time_t local_44;
  CMyFileLog local_40 [8];
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [11];
  char local_25;
  int *local_24;
  undefined4 local_20;
  int local_1c;
  tm *local_18;
  long local_14;
  int local_10;
  
  local_24 = *(int **)(this + 0x20);
  local_20 = *(undefined4 *)(this + 0xc);
  cVar1 = (**(code **)(*local_24 + 0x1c))
                    (local_24,0x4e39,
                     "seLect charac_no from guild_member where guild_id = %d and server_id = %d and member_flag = 1"
                     ,param_2,param_1);
  if (cVar1 == '\x01') {
    local_25 = (**(code **)(*local_24 + 0x20))(local_24,0x4e39);
    if (local_25 == '\x01') {
      local_1c = (**(code **)(*local_24 + 0x6c))(local_24);
      local_44 = time((time_t *)0x0);
      local_18 = localtime(&local_44);
      local_18->tm_hour = local_18->tm_hour + 1;
      local_18->tm_min = 0;
      local_18->tm_sec = 0;
      local_14 = mktime(local_18);
      for (local_10 = 0; local_10 < local_1c; local_10 = local_10 + 1) {
        local_25 = (**(code **)(*local_24 + 0x24))(local_24);
        if (local_25 != '\x01') {
          return 0;
        }
        local_25 = (**(code **)(*local_24 + 0x38))(local_24,0,&local_48);
        if (local_25 != '\x01') {
          return 0;
        }
        cVar1 = _ZN10CDBManager12InsertLetterEjjPKcS1_Ril
                          (this,local_48,0,param_6,param_7,&local_4c,local_14);
        if (cVar1 == '\x01') {
          cVar1 = _ZN10CDBManager12InsertPostalEjjijijiPcli
                            (this,local_48,0,0,param_3,param_5,param_4,0,param_6,local_14,local_4c);
          if (cVar1 != '\x01') {
            CMyFileLog::CMyFileLog(local_30,"SendGuildCoinByMail",0x8c6);
            CMyFileLog::operator()
                      (local_30,"./log/Postal","InsertPostal Err, %s(%s)",param_6,param_7);
          }
        }
        else {
          CMyFileLog::CMyFileLog(local_38,"SendGuildCoinByMail",0x8c0);
          CMyFileLog::operator()(local_38,"./log/Postal","InsertLetter Err, %s(%s)",param_6,param_7)
          ;
        }
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    CMyFileLog::CMyFileLog(local_40,"SendGuildCoinByMail",0x897);
    CMyFileLog::operator()
              (local_40,"./log/DBQueryErr",
               "CDBManager::SendGuildCoinByMail() select charac_no from guild_member where server_id = %d and guild_id = %d and member_flag = 1\n"
               ,param_1,param_2);
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*

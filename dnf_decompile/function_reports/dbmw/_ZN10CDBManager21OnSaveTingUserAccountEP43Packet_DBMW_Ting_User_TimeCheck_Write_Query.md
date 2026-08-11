# _ZN10CDBManager21OnSaveTingUserAccountEP43Packet_DBMW_Ting_User_TimeCheck_Write_Query

`CDBManager::OnSaveTingUserAccount(Packet_DBMW_Ting_User_TimeCheck_Write_Query*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x80807c8` | `0x109` | `0x80585d6` | `0x109` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,67 +1,67 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x434,%esp
 mov    0x8(%ebp),%eax
 mov    0x3c(%eax),%eax
 mov    %eax,-0x14(%ebp)
 cmpl   $0x0,-0x14(%ebp)
 jne    <T> <_ZN10CDBManager21OnSaveTingUserAccountEP43Packet_DBMW_Ting_User_TimeCheck_Write_Query+0x23>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager21OnSaveTingUserAccountEP43Packet_DBMW_Ting_User_TimeCheck_Write_Query+0x100>
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,-0x10(%ebp)
 movl   $0x0,-0xc(%ebp)
 jmp    <T> <_ZN10CDBManager21OnSaveTingUserAccountEP43Packet_DBMW_Ting_User_TimeCheck_Write_Query+0xea>
 movl   $0x400,0x8(%esp)
 movl   $0x0,0x4(%esp)
 lea    -0x414(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    -0xc(%ebp),%edx
 mov    0xc(%ebp),%eax
 mov    0x12(%eax,%edx,8),%ebx
 mov    -0xc(%ebp),%edx
 mov    0xc(%ebp),%eax
 mov    0xe(%eax,%edx,8),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
 mov    %ebx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"inSert into ting_user_account (occ_time, m_id, minute) values (now(), %s, %d)",0x8(%esp)
 movl   $0x400,0x4(%esp)
 lea    -0x414(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%edx
-lea    -0x414(%ebp),%eax
-mov    %eax,0xc(%esp)
+mov    (%eax),%eax
+lea    -0x414(%ebp),%edx
+mov    %edx,0xc(%esp)
 movl   $"%s",0x8(%esp)
 movl   $0x4ebf,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    -0x14(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $0x4ebf,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    -0x14(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 addl   $0x1,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 cmp    -0x10(%ebp),%eax
 setl   %al
 test   %al,%al
 jne    <T> <_ZN10CDBManager21OnSaveTingUserAccountEP43Packet_DBMW_Ting_User_TimeCheck_Write_Query+0x38>
 mov    $0x1,%eax
 add    $0x434,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnSaveTingUserAccount(Packet_DBMW_Ting_User_TimeCheck_Write_Query*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager21OnSaveTingUserAccountEP43Packet_DBMW_Ting_User_TimeCheck_Write_Query
          (CDBManager *this,Packet_DBMW_Ting_User_TimeCheck_Write_Query *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char local_418 [1024];
  int *local_18;
  int local_14;
  int local_10;
  
  local_18 = *(int **)(this + 0x3c);
  if (local_18 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    local_14 = *(int *)(param_1 + 10);
    for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
      memset(local_418,0,0x400);
      uVar1 = *(undefined4 *)(param_1 + local_10 * 8 + 0x12);
      uVar2 = NumberToString(*(uint *)(param_1 + local_10 * 8 + 0xe),0);
      snprintf(local_418,0x400,
               "inSert into ting_user_account (occ_time, m_id, minute) values (now(), %s, %d)",uVar2
               ,uVar1);
      (**(code **)(*local_18 + 0x1c))(local_18,0x4ebf,&DAT_081ad540,local_418);
      (**(code **)(*local_18 + 0x20))(local_18,0x4ebf);
    }
    uVar1 = 1;
  }
  return uVar1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/Manager/DBManager.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h 等 625 个文件*

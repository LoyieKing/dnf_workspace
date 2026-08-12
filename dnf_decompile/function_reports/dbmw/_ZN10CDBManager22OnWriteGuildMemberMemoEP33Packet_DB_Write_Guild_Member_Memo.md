# _ZN10CDBManager22OnWriteGuildMemberMemoEP33Packet_DB_Write_Guild_Member_Memo

`CDBManager::OnWriteGuildMemberMemo(Packet_DB_Write_Guild_Member_Memo*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8080570` | `0x16b` | `0x80524d0` | `0x16b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,94 +1,95 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x6058,%esp
+sub    $0x6048,%esp
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
-mov    %eax,-0x14(%ebp)
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%eax
 mov    %eax,-0x10(%ebp)
 mov    0xc(%ebp),%eax
-mov    0xe(%eax),%eax
 mov    %eax,-0xc(%ebp)
-lea    -0x602a(%ebp),%eax
-mov    $0x6002,%edx
-mov    %edx,0x8(%esp)
+movl   $0x6002,0x8(%esp)
 movl   $0x0,0x4(%esp)
+lea    -0x6022(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x78,%eax
 mov    (%eax),%edx
-mov    0xc(%ebp),%eax
+mov    -0xc(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,0x8(%esp)
-lea    -0x602a(%ebp),%eax
+lea    -0x6022(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
+mov    (%eax),%ecx
+mov    -0xc(%ebp),%eax
+add    $0xe,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
-mov    %eax,0x14(%esp)
-mov    -0x10(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %edx,0x14(%esp)
 mov    %eax,0x10(%esp)
-lea    -0x602a(%ebp),%eax
+lea    -0x6022(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"upDate guild_member set memo='%s' where guild_id = %d and charac_no = %d",0x8(%esp)
 movl   $0x4ebb,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
-call   *%edx
+call   *%ecx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager22OnWriteGuildMemberMemoEP33Packet_DB_Write_Guild_Member_Memo+0xff>
+je     <T> <_ZN10CDBManager22OnWriteGuildMemberMemoEP33Packet_DB_Write_Guild_Member_Memo+0x106>
 movl   $0x1a8e,0x8(%esp)
 movl   $&_ZZN10CDBManager22OnWriteGuildMemberMemoEP33Packet_DB_Write_Guild_Member_MemoE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
-mov    %eax,0x14(%esp)
-mov    -0x10(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%edx
+mov    -0xc(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %edx,0x14(%esp)
 mov    %eax,0x10(%esp)
-lea    -0x602a(%ebp),%eax
+lea    -0x6022(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::OnWriteGuildMemo() upDate guild_member set memo='%s' where guild_id = %d and charac_no = %d",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager22OnWriteGuildMemberMemoEP33Packet_DB_Write_Guild_Member_Memo+0x169>
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4ebb,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager22OnWriteGuildMemberMemoEP33Packet_DB_Write_Guild_Member_Memo+0x164>
 movl   $0x1a96,0x8(%esp)
 movl   $&_ZZN10CDBManager22OnWriteGuildMemberMemoEP33Packet_DB_Write_Guild_Member_MemoE12__FUNCTION__,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"upDate_into_guild_member_memo Query Error\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager22OnWriteGuildMemberMemoEP33Packet_DB_Write_Guild_Member_Memo+0x169>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnWriteGuildMemberMemo(Packet_DB_Write_Guild_Member_Memo*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager22OnWriteGuildMemberMemoEP33Packet_DB_Write_Guild_Member_Memo
          (CDBManager *this,Packet_DB_Write_Guild_Member_Memo *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_602e [24578];
  CMyFileLog local_2c [8];
  CMyFileLog local_24 [11];
  char local_19;
  int *local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_18 = *(int **)(this + 0x20);
  local_14 = *(undefined4 *)(param_1 + 10);
  local_10 = *(undefined4 *)(param_1 + 0xe);
  memset(local_602e,0,0x6002);
  (**(code **)(*local_18 + 0x78))(local_18,local_602e,param_1 + 0x12);
  cVar1 = (**(code **)(*local_18 + 0x1c))
                    (local_18,0x4ebb,
                     "upDate guild_member set memo=\'%s\' where guild_id = %d and charac_no = %d",
                     local_602e,local_14,local_10);
  if (cVar1 == '\x01') {
    local_19 = (**(code **)(*local_18 + 0x20))(local_18,0x4ebb);
    if (local_19 == '\x01') {
      uVar2 = 1;
    }
    else {
      CMyFileLog::CMyFileLog(local_24,"OnWriteGuildMemberMemo",0x1a96);
      CMyFileLog::operator()
                (local_24,"./log/DBQueryErr","upDate_into_guild_member_memo Query Error\n");
      uVar2 = 0;
    }
  }
  else {
    CMyFileLog::CMyFileLog(local_2c,"OnWriteGuildMemberMemo",0x1a8e);
    CMyFileLog::operator()
              (local_2c,"./log/DBQueryErr",
               "CDBManager::OnWriteGuildMemo() upDate guild_member set memo=\'%s\' where guild_id = %d and charac_no = %d"
               ,local_602e,local_14,local_10);
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*

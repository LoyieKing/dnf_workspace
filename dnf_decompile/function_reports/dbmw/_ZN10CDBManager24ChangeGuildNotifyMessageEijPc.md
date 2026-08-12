# _ZN10CDBManager24ChangeGuildNotifyMessageEijPc

`CDBManager::ChangeGuildNotifyMessage(int, unsigned int, char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8077350` | `0x1dd` | `0x80643d8` | `0x1ce` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,129 +1,124 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x6048,%esp
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
 mov    %eax,-0xc(%ebp)
-lea    -0x6022(%ebp),%eax
-mov    $0x6002,%edx
-mov    %edx,0x8(%esp)
+movl   $0x6002,0x8(%esp)
 movl   $0x0,0x4(%esp)
+lea    -0x601e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x78,%eax
 mov    (%eax),%edx
 mov    0x14(%ebp),%eax
 mov    %eax,0x8(%esp)
-lea    -0x6022(%ebp),%eax
+lea    -0x601e(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
-mov    0x10(%ebp),%eax
+mov    0xc(%ebp),%eax
 mov    %eax,0x10(%esp)
-lea    -0x6022(%ebp),%eax
+lea    -0x601e(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"upDate guild_notice set notice='%s' where guild_id = %d",0x8(%esp)
 movl   $0x4e62,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0xdc>
+je     <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0xdb>
 movl   $0xd3b,0x8(%esp)
 movl   $&_ZZN10CDBManager24ChangeGuildNotifyMessageEijPcE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    0x10(%ebp),%eax
+mov    0xc(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::ChangeGuildNotifyMessage() upDate guild_notice set notice='%s' where guild_id = %d",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1db>
+jmp    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1cc>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e62,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x11c>
+jne    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x114>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x74,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 or     %edx,%eax
 test   %eax,%eax
-jne    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x123>
+jne    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x11b>
 mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x128>
+jmp    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x120>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1d6>
+je     <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1c7>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
-lea    -0x6022(%ebp),%eax
+lea    -0x601e(%ebp),%eax
 mov    %eax,0x10(%esp)
-mov    0x10(%ebp),%eax
+mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"inSert into guild_notice set guild_id=%d,notice='%s',acc_date=unix_timestamp(now())",0x8(%esp)
 movl   $0x4e63,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1a7>
+je     <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x19f>
 movl   $0xd4b,0x8(%esp)
 movl   $&_ZZN10CDBManager24ChangeGuildNotifyMessageEijPcE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CDBManager::ChangeGuildNotifyMessage() Exception Break\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1db>
+jmp    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1cc>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e63,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1d6>
+je     <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1c7>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1db>
+jmp    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1cc>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::ChangeGuildNotifyMessage(int, unsigned int, char*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager24ChangeGuildNotifyMessageEijPc
          (CDBManager *this,int param_1,uint param_2,char *param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_6026 [24578];
  CMyFileLog local_24 [8];
  CMyFileLog local_1c [11];
  char local_11;
  int *local_10;
  
  local_10 = *(int **)(this + 0x20);
  memset(local_6026,0,0x6002);
  (**(code **)(*local_10 + 0x78))(local_10,local_6026,param_3);
  cVar2 = (**(code **)(*local_10 + 0x1c))
                    (local_10,0x4e62,"upDate guild_notice set notice=\'%s\' where guild_id = %d",
                     local_6026,param_2);
  if (cVar2 != '\x01') {
    CMyFileLog::CMyFileLog(local_24,"ChangeGuildNotifyMessage",0xd3b);
    CMyFileLog::operator()
              (local_24,"./log/DBQueryErr",
               "CDBManager::ChangeGuildNotifyMessage() upDate guild_notice set notice=\'%s\' where guild_id = %d"
               ,param_3,param_2);
    return 0;
  }
  local_11 = (**(code **)(*local_10 + 0x20))(local_10,0x4e62);
  if ((local_11 == '\x01') && (lVar3 = (**(code **)(*local_10 + 0x74))(local_10), lVar3 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    cVar2 = (**(code **)(*local_10 + 0x1c))
                      (local_10,0x4e63,
                       "inSert into guild_notice set guild_id=%d,notice=\'%s\',acc_date=unix_timestamp(now())"
                       ,param_2,local_6026);
    if (cVar2 != '\x01') {
      CMyFileLog::CMyFileLog(local_1c,"ChangeGuildNotifyMessage",0xd4b);
      CMyFileLog::operator()
                (local_1c,"./log/DBQueryErr",
                 "CDBManager::ChangeGuildNotifyMessage() Exception Break\n");
      return 0;
    }
    cVar2 = (**(code **)(*local_10 + 0x20))(local_10,0x4e63);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  return 1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*

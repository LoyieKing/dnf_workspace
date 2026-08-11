# _ZN10CDBManager22DeleteJoinListByInviteEjj

`CDBManager::DeleteJoinListByInvite(unsigned int, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x8077bfa` | `0xe8` | `0x805c7e4` | `0xe8` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,60 +1,60 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x48,%esp
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%edx
-mov    0x10(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,0xc(%esp)
+mov    (%eax),%eax
+mov    0x10(%ebp),%edx
+mov    %edx,0x10(%esp)
+mov    0xc(%ebp),%edx
+mov    %edx,0xc(%esp)
 movl   $"deLete from guild_join_list where guild_id=%d and charac_no=%d",0x8(%esp)
 movl   $0x4f0c,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager22DeleteJoinListByInviteEjj+0x83>
 movl   $0xe54,0x8(%esp)
 movl   $"DeleteJoinListByInvite",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"set_query(deLete_from_guild_join_list) Query Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager22DeleteJoinListByInviteEjj+0xe6>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $0x4f0c,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager22DeleteJoinListByInviteEjj+0xe1>
 movl   $0xe5a,0x8(%esp)
 movl   $"DeleteJoinListByInvite",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"guild_db->exec(deLete_from_guild_join_list) Query Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager22DeleteJoinListByInviteEjj+0xe6>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::DeleteJoinListByInvite(unsigned int, unsigned int) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager22DeleteJoinListByInviteEjj(CDBManager *this,uint param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  CMyFileLog local_20 [8];
  CMyFileLog local_18 [8];
  int *local_10;
  
  local_10 = *(int **)(this + 0x20);
  cVar1 = (**(code **)(*local_10 + 0x1c))
                    (local_10,0x4f0c,
                     "deLete from guild_join_list where guild_id=%d and charac_no=%d",param_1,
                     param_2);
  if (cVar1 == '\x01') {
    cVar1 = (**(code **)(*local_10 + 0x20))(local_10,0x4f0c);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      CMyFileLog::CMyFileLog(local_18,"DeleteJoinListByInvite",0xe5a);
      CMyFileLog::operator()
                (local_18,"./log/DBQueryErr",
                 "guild_db->exec(deLete_from_guild_join_list) Query Error");
      uVar2 = 0;
    }
  }
  else {
    CMyFileLog::CMyFileLog(local_20,"DeleteJoinListByInvite",0xe54);
    CMyFileLog::operator()
              (local_20,"./log/DBQueryErr","set_query(deLete_from_guild_join_list) Query Error");
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/Manager/DBManager.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h 等 625 个文件*

# _ZN10CDBManager17OnDeleteGuildAgitEP27Packet_DB_Delete_Guild_AgitR33Packet_DB_Delete_Guild_Agit_Reply

`CDBManager::OnDeleteGuildAgit(Packet_DB_Delete_Guild_Agit*, Packet_DB_Delete_Guild_Agit_Reply&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x807fc12` | `0x159` | `0x8058a24` | `0x159` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,89 +1,89 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,0xc(%esp)
 movl   $"deLete from guild_agit where guild_id=%d",0x8(%esp)
 movl   $0x4eaf,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4eaf,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
+mov    %al,-0x9(%ebp)
+movzbl -0x9(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager17OnDeleteGuildAgitEP27Packet_DB_Delete_Guild_AgitR33Packet_DB_Delete_Guild_Agit_Reply+0xad>
 mov    0x10(%ebp),%eax
 movl   $0x2,0x12(%eax)
 movl   $0x199d,0x8(%esp)
 movl   $&_ZZN10CDBManager17OnDeleteGuildAgitEP27Packet_DB_Delete_Guild_AgitR33Packet_DB_Delete_Guild_Agit_ReplyE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"deLete_from_guild_Agit Query Error\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager17OnDeleteGuildAgitEP27Packet_DB_Delete_Guild_AgitR33Packet_DB_Delete_Guild_Agit_Reply+0x157>
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,0xc(%esp)
 movl   $"upDate guild_info set guild_agit_flag=0 where guild_id=%d",0x8(%esp)
 movl   $0x4eb4,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4eb4,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
+mov    %al,-0x9(%ebp)
+movzbl -0x9(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager17OnDeleteGuildAgitEP27Packet_DB_Delete_Guild_AgitR33Packet_DB_Delete_Guild_Agit_Reply+0x148>
 mov    0x10(%ebp),%eax
 movl   $0x2,0x12(%eax)
 movl   $0x19ac,0x8(%esp)
 movl   $&_ZZN10CDBManager17OnDeleteGuildAgitEP27Packet_DB_Delete_Guild_AgitR33Packet_DB_Delete_Guild_Agit_ReplyE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"upDate_into_guild_info_guild_agit_flag Query Error\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager17OnDeleteGuildAgitEP27Packet_DB_Delete_Guild_AgitR33Packet_DB_Delete_Guild_Agit_Reply+0x157>
 mov    0x10(%ebp),%eax
 movl   $0x0,0x12(%eax)
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnDeleteGuildAgit(Packet_DB_Delete_Guild_Agit*, Packet_DB_Delete_Guild_Agit_Reply&)
    */

undefined4 __thiscall
CDBManager::
_ZN10CDBManager17OnDeleteGuildAgitEP27Packet_DB_Delete_Guild_AgitR33Packet_DB_Delete_Guild_Agit_Reply
          (CDBManager *this,Packet_DB_Delete_Guild_Agit *param_1,
          Packet_DB_Delete_Guild_Agit_Reply *param_2)

{
  undefined4 uVar1;
  CMyFileLog local_24 [8];
  CMyFileLog local_1c [11];
  char local_11;
  int *local_10;
  
  local_10 = *(int **)(this + 0x20);
  (**(code **)(*local_10 + 0x1c))
            (local_10,0x4eaf,"deLete from guild_agit where guild_id=%d",
             *(undefined4 *)(param_1 + 10));
  local_11 = (**(code **)(*local_10 + 0x20))(local_10,0x4eaf);
  if (local_11 == '\x01') {
    (**(code **)(*local_10 + 0x1c))
              (local_10,0x4eb4,"upDate guild_info set guild_agit_flag=0 where guild_id=%d",
               *(undefined4 *)(param_1 + 10));
    local_11 = (**(code **)(*local_10 + 0x20))(local_10,0x4eb4);
    if (local_11 == '\x01') {
      *(undefined4 *)(param_2 + 0x12) = 0;
      uVar1 = 1;
    }
    else {
      *(undefined4 *)(param_2 + 0x12) = 2;
      CMyFileLog::CMyFileLog(local_1c,"OnDeleteGuildAgit",0x19ac);
      CMyFileLog::operator()
                (local_1c,"./log/DBQueryErr","upDate_into_guild_info_guild_agit_flag Query Error\n")
      ;
      uVar1 = 0;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x12) = 2;
    CMyFileLog::CMyFileLog(local_24,"OnDeleteGuildAgit",0x199d);
    CMyFileLog::operator()(local_24,"./log/DBQueryErr","deLete_from_guild_Agit Query Error\n");
    uVar1 = 0;
  }
  return uVar1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*

# _ZN11CGuildCargo17SendHistoryToDBMWEP14CServerHandler25ENUM_GUILD_CARGO_BEHAVIORiPKciiR11DnfItemInfo

`CGuildCargo::SendHistoryToDBMW(CServerHandler*, ENUM_GUILD_CARGO_BEHAVIOR, int, char const*, int, int, DnfItemInfo&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a0300` | `0x94` | `0x8092644` | `0xce` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,42 +1,64 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x88,%esp
 lea    -0x6e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN36Packet_DB_Insert_Guild_Cargo_HistoryC1Ev>
 mov    0x8(%ebp),%eax
 mov    0x18e0(%eax),%eax
 mov    %eax,-0x63(%ebp)
 mov    0x14(%ebp),%eax
 mov    %eax,-0x5f(%ebp)
 mov    0x10(%ebp),%eax
 mov    %al,-0x46(%ebp)
 mov    0x1c(%ebp),%eax
 mov    %eax,-0x45(%ebp)
 mov    0x20(%ebp),%eax
 mov    %eax,-0x41(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetServerGroupNoEv>
 mov    %al,-0x64(%ebp)
 movl   $0x14,0x8(%esp)
 mov    0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x6e(%ebp),%eax
 add    $0x13,%eax
 mov    %eax,(%esp)
 call   <T> <strncpy>
-movl   $0x35,0x8(%esp)
 mov    0x24(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x6e(%ebp),%eax
-add    $0x31,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
+mov    (%eax),%edx
+mov    %edx,-0x3d(%ebp)
+mov    0x4(%eax),%edx
+mov    %edx,-0x39(%ebp)
+mov    0x8(%eax),%edx
+mov    %edx,-0x35(%ebp)
+mov    0xc(%eax),%edx
+mov    %edx,-0x31(%ebp)
+mov    0x10(%eax),%edx
+mov    %edx,-0x2d(%ebp)
+mov    0x14(%eax),%edx
+mov    %edx,-0x29(%ebp)
+mov    0x18(%eax),%edx
+mov    %edx,-0x25(%ebp)
+mov    0x1c(%eax),%edx
+mov    %edx,-0x21(%ebp)
+mov    0x20(%eax),%edx
+mov    %edx,-0x1d(%ebp)
+mov    0x24(%eax),%edx
+mov    %edx,-0x19(%ebp)
+mov    0x28(%eax),%edx
+mov    %edx,-0x15(%ebp)
+mov    0x2c(%eax),%edx
+mov    %edx,-0x11(%ebp)
+mov    0x30(%eax),%edx
+mov    %edx,-0xd(%ebp)
+movzbl 0x34(%eax),%eax
+mov    %al,-0x9(%ebp)
 lea    -0x6e(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildCargo::SendHistoryToDBMW(CServerHandler*, ENUM_GUILD_CARGO_BEHAVIOR, int, char const*, int,
   int, DnfItemInfo&) */

void __thiscall
CGuildCargo::
_ZN11CGuildCargo17SendHistoryToDBMWEP14CServerHandler25ENUM_GUILD_CARGO_BEHAVIORiPKciiR11DnfItemInfo
          (CGuildCargo *this,CServerHandler *param_1,undefined1 param_3,undefined4 param_4,
          char *param_5,undefined4 param_6,undefined4 param_7,void *param_8)

{
  Packet_DB_Insert_Guild_Cargo_History local_72 [10];
  undefined1 local_68;
  undefined4 local_67;
  undefined4 local_63;
  char acStack_5f [21];
  undefined1 local_4a;
  undefined4 local_49;
  undefined4 local_45;
  undefined1 auStack_41 [61];
  
  Packet_DB_Insert_Guild_Cargo_History::Packet_DB_Insert_Guild_Cargo_History(local_72);
  local_67 = *(undefined4 *)(this + 0x18e0);
  local_63 = param_4;
  local_4a = param_3;
  local_49 = param_6;
  local_45 = param_7;
  local_68 = CServerHandler::GetServerGroupNo(param_1);
  strncpy(acStack_5f,param_5,0x14);
  memcpy(auStack_41,param_8,0x35);
  CServerHandler::SendToDB(param_1,(PacketHeader *)local_72);
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Guild/GuildCargo.cpp, source/DNFServer/GameServer/Guild/BlackUser.h, source/DNFServer/GameServer/Guild/CashObject.h, source/DNFServer/GameServer/Guild/DNFAppConfig.h, source/DNFServer/GameServer/Guild/DNFAppStartInit.h, source/DNFServer/GameServer/Guild/DNFAppStopInit.h, source/DNFServer/GameServer/Guild/DNFApplication.h, source/DNFServer/GameServer/Guild/DNFDBServer.h 等 289 个文件*

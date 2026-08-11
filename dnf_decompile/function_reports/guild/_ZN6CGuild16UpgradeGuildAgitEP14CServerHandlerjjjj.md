# _ZN6CGuild16UpgradeGuildAgitEP14CServerHandlerjjjj

`CGuild::UpgradeGuildAgit(CServerHandler*, unsigned int, unsigned int, unsigned int, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809201e` | `0x79` | `0x8057e10` | `0x83` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,37 +1,41 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild16UpgradeGuildAgitEP14CServerHandlerjjjj+0x77>
+je     <T> <_ZN6CGuild16UpgradeGuildAgitEP14CServerHandlerjjjj+0x81>
 mov    0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild12SubGuildFundEj>
 mov    0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16SubPowerWarPointEj>
 movl   $0x0,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
 lea    -0x1a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28Packet_DB_Upgrade_Guild_AgitC1Ev>
+lea    -0x1a(%ebp),%eax
+lea    0xa(%eax),%edx
 mov    0x10(%ebp),%eax
-mov    %eax,-0x10(%ebp)
+mov    %eax,(%edx)
+lea    -0x1a(%ebp),%eax
+lea    0xe(%eax),%edx
 mov    0x14(%ebp),%eax
-mov    %eax,-0xc(%ebp)
+mov    %eax,(%edx)
 lea    -0x1a(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::UpgradeGuildAgit(CServerHandler*, unsigned int, unsigned int, unsigned int, unsigned int)
    */

void __thiscall
CGuild::_ZN6CGuild16UpgradeGuildAgitEP14CServerHandlerjjjj
          (CGuild *this,CServerHandler *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  Packet_DB_Upgrade_Guild_Agit local_1e [10];
  uint local_14;
  uint local_10;
  
  if ((*(ushort *)(this + 0x1c) & 4) != 0) {
    _ZN6CGuild12SubGuildFundEj(this,param_5);
    _ZN6CGuild16SubPowerWarPointEj(this,param_4);
    SendGuildInfoToMembers(this,false);
    Packet_DB_Upgrade_Guild_Agit::_ZN28Packet_DB_Upgrade_Guild_AgitC2Ev(local_1e);
    local_14 = param_2;
    local_10 = param_3;
    CServerHandler::_ZN14CServerHandler8SendToDBEP12PacketHeader(param_1,(PacketHeader *)local_1e);
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Guild/DNFGuild.cpp, source/DNFServer/GameServer/Guild/BlackUser.h, source/DNFServer/GameServer/Guild/CashObject.h, source/DNFServer/GameServer/Guild/DNFAppConfig.h, source/DNFServer/GameServer/Guild/DNFAppStartInit.h, source/DNFServer/GameServer/Guild/DNFAppStopInit.h, source/DNFServer/GameServer/Guild/DNFApplication.h, source/DNFServer/GameServer/Guild/DNFDBServer.h 等 289 个文件*

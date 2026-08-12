# _ZN11CGuildCargo14SendGuildCargoEP5CUser

`CGuildCargo::SendGuildCargo(CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809fe24` | `0x79` | `0x809246c` | `0x79` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,32 +1,32 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x1908,%esp
 cmpl   $0x0,0xc(%ebp)
 je     <T> <_ZN11CGuildCargo14SendGuildCargoEP5CUser+0x76>
 lea    -0x18f6(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN25Packet_Notice_Guild_CargoC1Ev>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
 mov    %eax,-0x18ec(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,-0x18e8(%ebp)
+movl   $0x18dc,0x8(%esp)
 mov    0x8(%ebp),%eax
-movl   $0x18dc,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x18f6(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 lea    -0x18f6(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
 jmp    <T> <_ZN11CGuildCargo14SendGuildCargoEP5CUser+0x77>
 nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildCargo::SendGuildCargo(CUser*) */

void __thiscall
CGuildCargo::_ZN11CGuildCargo14SendGuildCargoEP5CUser(CGuildCargo *this,CUser *param_1)

{
  Packet_Notice_Guild_Cargo local_18fa [10];
  undefined4 local_18f0;
  undefined4 local_18ec;
  undefined1 auStack_18e8 [6372];
  
  if (param_1 != (CUser *)0x0) {
    Packet_Notice_Guild_Cargo::Packet_Notice_Guild_Cargo(local_18fa);
    local_18f0 = CUser::GetIdByChannel(param_1);
    local_18ec = CUser::GetUniqCharNo(param_1);
    memcpy(auStack_18e8,this,0x18dc);
    CUser::SendTcpGameserver(param_1,(PacketHeader *)local_18fa);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildCargo.cpp](source/DNFServer/GameServer/Guild/GuildCargo.cpp)（约第 370 行）：

```cpp
void CGuildCargo::SendGuildCargo(CUser* user)
{
    if (user == 0)
    {
        return;
    }
    Packet_Notice_Guild_Cargo pkt;
    pkt.m_a = user->GetIdByChannel();
    pkt.m_b = user->GetUniqCharNo();
    memcpy(&pkt.m_cargo, this, 0x18dc);
    user->SendTcpGameserver(&pkt);
}
```

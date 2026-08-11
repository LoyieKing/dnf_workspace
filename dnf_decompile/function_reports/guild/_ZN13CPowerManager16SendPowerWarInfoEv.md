# _ZN13CPowerManager16SendPowerWarInfoEv

`CPowerManager::SendPowerWarInfo()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a3910` | `0x61` | `0x8099b76` | `0x78` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,29 +1,40 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x38,%esp
+push   %ebx
+sub    $0x34,%esp
 lea    -0x1b(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28Packet_Notice_Power_War_InfoC1Ev>
+lea    -0x1b(%ebp),%eax
+lea    0x12(%eax),%edx
 mov    0x8(%ebp),%eax
-movzbl 0x184(%eax),%eax
-mov    %al,-0x9(%ebp)
+add    $0x184,%eax
+movzbl (%eax),%eax
+mov    %al,(%edx)
+lea    -0x1b(%ebp),%eax
+lea    0xa(%eax),%ebx
 mov    0x8(%ebp),%eax
 add    $0x74,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CPower8GetScoreEv>
-mov    %eax,-0x11(%ebp)
+mov    %eax,(%ebx)
+lea    -0x1b(%ebp),%eax
+lea    0xe(%eax),%ebx
 mov    0x8(%ebp),%eax
 add    $0xe0,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CPower8GetScoreEv>
-mov    %eax,-0xd(%ebp)
+mov    %eax,(%ebx)
 mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
+add    $0x4,%eax
+mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 lea    -0x1b(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
-leave
+add    $0x34,%esp
+pop    %ebx
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerManager::SendPowerWarInfo() */

void __thiscall CPowerManager::_ZN13CPowerManager16SendPowerWarInfoEv(CPowerManager *this)

{
  CServerHandler *this_00;
  Packet_Notice_Power_War_Info local_1f [10];
  undefined4 local_15;
  undefined4 local_11;
  CPowerManager local_d;
  
  Packet_Notice_Power_War_Info::Packet_Notice_Power_War_Info(local_1f);
  local_d = this[0x184];
  local_15 = CPower::GetScore((CPower *)(this + 0x74));
  local_11 = CPower::GetScore((CPower *)(this + 0xe0));
  this_00 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)(this + 4));
  CServerHandler::SendAllTcpGameServer(this_00,(PacketHeader *)local_1f);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 134 行）：

```cpp
void CPowerManager::SendPowerWarInfo()
{
    Packet_Notice_Power_War_Info pkt;
    *(unsigned char*)((char*)&pkt + 0x12) = *(unsigned char*)((char*)this + 0x184);
    *(int*)((char*)&pkt + 0xa) = ((CPower*)((char*)this + 0x74))->GetScore();
    *(int*)((char*)&pkt + 0xe) = ((CPower*)((char*)this + 0xe0))->GetScore();
    (*(CApplication**)((char*)this + 4))->Get_ServerHandler()->SendAllTcpGameServer(&pkt);
}
```

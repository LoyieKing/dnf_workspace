# _ZN19COnTimeEventManager20SendContinueTimeToGSEv

`COnTimeEventManager::SendContinueTimeToGS()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x80a4d68` | `0x6a` | `0x809997e` | `0x6a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,38 +1,38 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN19COnTimeEventManager20SendContinueTimeToGSEv+0x68>
 lea    -0x22(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN34Packet_MTG_OntimeEvent_RewardStartC1Ev>
 mov    0x8(%ebp),%eax
 mov    0x30(%eax),%eax
 mov    %eax,-0x18(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x38(%eax),%eax
-mov    %eax,-0x10(%ebp)
+mov    %eax,-0x14(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x3c(%eax),%eax
-mov    %eax,-0xc(%ebp)
+mov    %eax,-0x10(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x28(%eax),%eax
 shl    $0x2,%eax
 mov    %eax,%edx
 shl    $0x4,%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
-mov    %eax,-0x14(%ebp)
+mov    %eax,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 lea    -0x22(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* COnTimeEventManager::SendContinueTimeToGS() */

void __thiscall
COnTimeEventManager::_ZN19COnTimeEventManager20SendContinueTimeToGSEv(COnTimeEventManager *this)

{
  CServerHandler *this_00;
  Packet_MTG_OntimeEvent_RewardStart local_26 [10];
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(int *)this != 0) {
    Packet_MTG_OntimeEvent_RewardStart::Packet_MTG_OntimeEvent_RewardStart(local_26);
    local_1c = *(undefined4 *)(this + 0x30);
    local_14 = *(undefined4 *)(this + 0x38);
    local_10 = *(undefined4 *)(this + 0x3c);
    local_18 = *(int *)(this + 0x28) * 0x3c;
    this_00 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)this);
    CServerHandler::_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader
              (this_00,(PacketHeader *)local_26);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/OnTimeEventManager.cpp](source/DNFServer/GameServer/Monitor/OnTimeEventManager.cpp)（约第 73 行）：

```cpp
void COnTimeEventManager::SendContinueTimeToGS()
{
    if (m_app != 0)
    {
        Packet_MTG_OntimeEvent_RewardStart pkt;
        pkt.m_eventIdx = (unsigned int)m_field30;
        pkt.m_fieldE = m_field38;
        pkt.m_field12 = m_field3c;
        pkt.m_field16 = m_field28 * 0x3c;
        m_app->Get_ServerHandler()->SendAllTcpGameServer(&pkt);
    }
}
```

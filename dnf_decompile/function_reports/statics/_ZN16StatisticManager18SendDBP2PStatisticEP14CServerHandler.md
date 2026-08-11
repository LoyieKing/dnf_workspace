# _ZN16StatisticManager18SendDBP2PStatisticEP14CServerHandler

`StatisticManager::SendDBP2PStatistic(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x80751c8` | `0x190` | `0x807521e` | `0x243` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,100 +1,180 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x58,%esp
 lea    -0x47(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN21Packet_P2P_StatisticsC1Ev>
+lea    -0x47(%ebp),%eax
+lea    0xa(%eax),%edx
 mov    0x8(%ebp),%eax
-movzbl 0xb38(%eax),%eax
-mov    %al,-0x35(%ebp)
+add    $0xb30,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x47(%ebp),%eax
+lea    0xe(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    0xb30(%eax),%eax
-mov    %eax,-0x3d(%ebp)
+add    $0xb38,%eax
+movzbl (%eax),%eax
+mov    %al,(%edx)
 mov    0x8(%ebp),%eax
-movzwl 0xb3a(%eax),%eax
+add    $0xb30,%eax
+add    $0xa,%eax
+movzwl (%eax),%eax
 cmp    $0x7fff,%ax
-jne    <T> <_ZN16StatisticManager18SendDBP2PStatisticEP14CServerHandler+0x42>
-movw   $0x0,-0x34(%ebp)
-jmp    <T> <_ZN16StatisticManager18SendDBP2PStatisticEP14CServerHandler+0x50>
+jne    <T> <_ZN16StatisticManager18SendDBP2PStatisticEP14CServerHandler+0x57>
+lea    -0x47(%ebp),%eax
+add    $0xf,%eax
+movw   $0x0,(%eax)
+jmp    <T> <_ZN16StatisticManager18SendDBP2PStatisticEP14CServerHandler+0x6e>
+lea    -0x47(%ebp),%eax
+lea    0xf(%eax),%edx
 mov    0x8(%ebp),%eax
-movzwl 0xb3a(%eax),%eax
-mov    %ax,-0x34(%ebp)
+add    $0xb30,%eax
+add    $0xa,%eax
+movzwl (%eax),%eax
+mov    %ax,(%edx)
 mov    0x8(%ebp),%eax
-lea    0xb3e(%eax),%ecx
+add    $0xb30,%eax
+lea    0xe(%eax),%ecx
 mov    0x8(%ebp),%eax
-lea    0xb44(%eax),%edx
+add    $0xb30,%eax
+lea    0x14(%eax),%edx
 mov    0x8(%ebp),%eax
-add    $0xb40,%eax
+add    $0xb30,%eax
+add    $0x10,%eax
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager7avgPingERiS0_Rs>
+lea    -0x47(%ebp),%eax
+lea    0x11(%eax),%edx
 mov    0x8(%ebp),%eax
-movzwl 0xb3c(%eax),%eax
-mov    %ax,-0x32(%ebp)
+add    $0xb30,%eax
+add    $0xc,%eax
+movzwl (%eax),%eax
+mov    %ax,(%edx)
+lea    -0x47(%ebp),%eax
+lea    0x13(%eax),%edx
 mov    0x8(%ebp),%eax
-movzwl 0xb3e(%eax),%eax
-mov    %ax,-0x30(%ebp)
+add    $0xb30,%eax
+add    $0xe,%eax
+movzwl (%eax),%eax
+mov    %ax,(%edx)
+lea    -0x47(%ebp),%eax
+lea    0x15(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    0xb48(%eax),%eax
-mov    %eax,-0x2e(%ebp)
+add    $0xb30,%eax
+add    $0x18,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x47(%ebp),%eax
+lea    0x19(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    0xb4c(%eax),%eax
-mov    %eax,-0x2a(%ebp)
+add    $0xb30,%eax
+add    $0x1c,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x47(%ebp),%eax
+lea    0x1d(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    0xb50(%eax),%eax
-mov    %eax,-0x26(%ebp)
+add    $0xb30,%eax
+add    $0x20,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x47(%ebp),%eax
+lea    0x21(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    0xb54(%eax),%eax
-mov    %eax,-0x22(%ebp)
+add    $0xb30,%eax
+add    $0x24,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x47(%ebp),%eax
+lea    0x25(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    0xb34(%eax),%eax
-mov    %eax,-0x39(%ebp)
+add    $0xb30,%eax
+add    $0x4,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
 mov    0x8(%ebp),%eax
-movzwl 0xb58(%eax),%eax
+add    $0xb30,%eax
+add    $0x28,%eax
+movzwl (%eax),%eax
 cmp    $0x7fff,%ax
-jne    <T> <_ZN16StatisticManager18SendDBP2PStatisticEP14CServerHandler+0xf1>
-movw   $0x0,-0x1e(%ebp)
-jmp    <T> <_ZN16StatisticManager18SendDBP2PStatisticEP14CServerHandler+0xff>
+jne    <T> <_ZN16StatisticManager18SendDBP2PStatisticEP14CServerHandler+0x15e>
+lea    -0x47(%ebp),%eax
+add    $0x29,%eax
+movw   $0x0,(%eax)
+jmp    <T> <_ZN16StatisticManager18SendDBP2PStatisticEP14CServerHandler+0x175>
+lea    -0x47(%ebp),%eax
+lea    0x29(%eax),%edx
 mov    0x8(%ebp),%eax
-movzwl 0xb58(%eax),%eax
-mov    %ax,-0x1e(%ebp)
+add    $0xb30,%eax
+add    $0x28,%eax
+movzwl (%eax),%eax
+mov    %ax,(%edx)
 mov    0x8(%ebp),%eax
-lea    0xb5c(%eax),%ecx
+add    $0xb30,%eax
+lea    0x2e(%eax),%ecx
 mov    0x8(%ebp),%eax
-lea    0xb64(%eax),%edx
+add    $0xb30,%eax
+lea    0x34(%eax),%edx
 mov    0x8(%ebp),%eax
-add    $0xb60,%eax
+add    $0xb30,%eax
+add    $0x30,%eax
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager7avgPingERiS0_Rs>
+lea    -0x47(%ebp),%eax
+lea    0x2b(%eax),%edx
 mov    0x8(%ebp),%eax
-movzwl 0xb5a(%eax),%eax
-mov    %ax,-0x1c(%ebp)
+add    $0xb30,%eax
+add    $0x2a,%eax
+movzwl (%eax),%eax
+mov    %ax,(%edx)
+lea    -0x47(%ebp),%eax
+lea    0x2d(%eax),%edx
 mov    0x8(%ebp),%eax
-movzwl 0xb5c(%eax),%eax
-mov    %ax,-0x1a(%ebp)
+add    $0xb30,%eax
+add    $0x2e,%eax
+movzwl (%eax),%eax
+mov    %ax,(%edx)
+lea    -0x47(%ebp),%eax
+lea    0x2f(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    0xb68(%eax),%eax
-mov    %eax,-0x18(%ebp)
+add    $0xb30,%eax
+add    $0x38,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x47(%ebp),%eax
+lea    0x33(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    0xb6c(%eax),%eax
-mov    %eax,-0x14(%ebp)
+add    $0xb30,%eax
+add    $0x3c,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x47(%ebp),%eax
+lea    0x37(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    0xb70(%eax),%eax
-mov    %eax,-0x10(%ebp)
+add    $0xb30,%eax
+add    $0x40,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x47(%ebp),%eax
+lea    0x3b(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    0xb74(%eax),%eax
-mov    %eax,-0xc(%ebp)
+add    $0xb30,%eax
+add    $0x44,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
 lea    -0x47(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::SendDBP2PStatistic(CServerHandler*) */

void __thiscall
StatisticManager::_ZN16StatisticManager18SendDBP2PStatisticEP14CServerHandler
          (StatisticManager *this,CServerHandler *param_1)

{
  Packet_P2P_Statistics local_4b [10];
  undefined4 local_41;
  undefined4 local_3d;
  StatisticManager local_39;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined4 local_32;
  undefined4 local_2e;
  undefined4 local_2a;
  undefined4 local_26;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  Packet_P2P_Statistics::Packet_P2P_Statistics(local_4b);
  local_39 = this[0xb38];
  local_41 = *(undefined4 *)(this + 0xb30);
  if (*(short *)(this + 0xb3a) == 0x7fff) {
    local_38 = 0;
  }
  else {
    local_38 = *(undefined2 *)(this + 0xb3a);
  }
  avgPing(this,(int *)(this + 0xb40),(int *)(this + 0xb44),(short *)(this + 0xb3e));
  local_36 = *(undefined2 *)(this + 0xb3c);
  local_34 = *(undefined2 *)(this + 0xb3e);
  local_32 = *(undefined4 *)(this + 0xb48);
  local_2e = *(undefined4 *)(this + 0xb4c);
  local_2a = *(undefined4 *)(this + 0xb50);
  local_26 = *(undefined4 *)(this + 0xb54);
  local_3d = *(undefined4 *)(this + 0xb34);
  if (*(short *)(this + 0xb58) == 0x7fff) {
    local_22 = 0;
  }
  else {
    local_22 = *(undefined2 *)(this + 0xb58);
  }
  avgPing(this,(int *)(this + 0xb60),(int *)(this + 0xb64),(short *)(this + 0xb5c));
  local_20 = *(undefined2 *)(this + 0xb5a);
  local_1e = *(undefined2 *)(this + 0xb5c);
  local_1c = *(undefined4 *)(this + 0xb68);
  local_18 = *(undefined4 *)(this + 0xb6c);
  local_14 = *(undefined4 *)(this + 0xb70);
  local_10 = *(undefined4 *)(this + 0xb74);
  CServerHandler::SendToDB(param_1,(PacketHeader *)local_4b);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 1833 行）：

```cpp
void StatisticManager::SendDBP2PStatistic(CServerHandler* handler)
{
    Packet_P2P_Statistics pkt;
    *(unsigned int*)((char*)&pkt + 0xa) = *(unsigned int*)((char*)&m_p2p + 0);
    *(char*)((char*)&pkt + 0xe) = *(char*)((char*)&m_p2p + 8);
    if (*(short*)((char*)&m_p2p + 0xa) == 0x7fff)
    {
        *(short*)((char*)&pkt + 0xf) = 0;
    }
    else
    {
        *(short*)((char*)&pkt + 0xf) = *(short*)((char*)&m_p2p + 0xa);
    }
    avgPing(*(int*)((char*)&m_p2p + 0x10), *(int*)((char*)&m_p2p + 0x14),
            *(short*)((char*)&m_p2p + 0xe));
    *(short*)((char*)&pkt + 0x11) = *(short*)((char*)&m_p2p + 0xc);
    *(short*)((char*)&pkt + 0x13) = *(short*)((char*)&m_p2p + 0xe);
    *(int*)((char*)&pkt + 0x15) = *(int*)((char*)&m_p2p + 0x18);
    *(int*)((char*)&pkt + 0x19) = *(int*)((char*)&m_p2p + 0x1c);
    *(int*)((char*)&pkt + 0x1d) = *(int*)((char*)&m_p2p + 0x20);
    *(int*)((char*)&pkt + 0x21) = *(int*)((char*)&m_p2p + 0x24);
    *(int*)((char*)&pkt + 0x25) = *(int*)((char*)&m_p2p + 4);
    if (*(short*)((char*)&m_p2p + 0x28) == 0x7fff)
    {
        *(short*)((char*)&pkt + 0x29) = 0;
    }
    else
    {
        *(short*)((char*)&pkt + 0x29) = *(short*)((char*)&m_p2p + 0x28);
    }
    avgPing(*(int*)((char*)&m_p2p + 0x30), *(int*)((char*)&m_p2p + 0x34),
            *(short*)((char*)&m_p2p + 0x2e));
    *(short*)((char*)&pkt + 0x2b) = *(short*)((char*)&m_p2p + 0x2a);
    *(short*)((char*)&pkt + 0x2d) = *(short*)((char*)&m_p2p + 0x2e);
    *(int*)((char*)&pkt + 0x2f) = *(int*)((char*)&m_p2p + 0x38);
    *(int*)((char*)&pkt + 0x33) = *(int*)((char*)&m_p2p + 0x3c);
    *(int*)((char*)&pkt + 0x37) = *(int*)((char*)&m_p2p + 0x40);
    *(int*)((char*)&pkt + 0x3b) = *(int*)((char*)&m_p2p + 0x44);
    handler->SendToDB((PacketHeader*)&pkt);
}
```

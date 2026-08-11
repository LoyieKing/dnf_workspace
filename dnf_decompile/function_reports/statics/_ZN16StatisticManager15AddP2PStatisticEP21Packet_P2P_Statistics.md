# _ZN16StatisticManager15AddP2PStatisticEP21Packet_P2P_Statistics

`StatisticManager::AddP2PStatistic(Packet_P2P_Statistics*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8074fcc` | `0x1fc` | `0x8074f42` | `0x288` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,139 +1,197 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
-mov    0xb30(%eax),%edx
+add    $0xb30,%eax
+mov    0x8(%ebp),%edx
+add    $0xb30,%edx
+mov    (%edx),%ecx
+mov    0xc(%ebp),%edx
+add    $0xa,%edx
+mov    (%edx),%edx
+lea    (%ecx,%edx,1),%edx
+mov    %edx,(%eax)
+mov    0x8(%ebp),%eax
+add    $0xb30,%eax
+add    $0x4,%eax
+mov    0x8(%ebp),%edx
+add    $0xb30,%edx
+add    $0x4,%edx
+mov    (%edx),%ecx
+mov    0xc(%ebp),%edx
+add    $0xe,%edx
+mov    (%edx),%edx
+lea    (%ecx,%edx,1),%edx
+mov    %edx,(%eax)
+mov    0x8(%ebp),%eax
+lea    0xb38(%eax),%edx
 mov    0xc(%ebp),%eax
-mov    0xa(%eax),%eax
-add    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0xb30(%eax)
-mov    0x8(%ebp),%eax
-mov    0xb34(%eax),%edx
-mov    0xc(%ebp),%eax
-mov    0xe(%eax),%eax
-add    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0xb34(%eax)
-mov    0xc(%ebp),%eax
-movzbl 0x12(%eax),%edx
-mov    0x8(%ebp),%eax
-mov    %dl,0xb38(%eax)
+add    $0x12,%eax
+movzbl (%eax),%eax
+mov    %al,(%edx)
 mov    0xc(%ebp),%eax
 lea    0x13(%eax),%edx
 mov    0x8(%ebp),%eax
-add    $0xb3a,%eax
+add    $0xb30,%eax
+add    $0xa,%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager7minPingERsS0_>
 mov    0xc(%ebp),%eax
 lea    0x15(%eax),%edx
 mov    0x8(%ebp),%eax
-add    $0xb3c,%eax
+add    $0xb30,%eax
+add    $0xc,%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager7maxPingERsS0_>
 mov    0x8(%ebp),%eax
-lea    0xb44(%eax),%ecx
+add    $0xb30,%eax
+lea    0x14(%eax),%ecx
 mov    0xc(%ebp),%eax
 lea    0x17(%eax),%edx
 mov    0x8(%ebp),%eax
-add    $0xb40,%eax
+add    $0xb30,%eax
+add    $0x10,%eax
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager7sumPingERiRsS0_>
 mov    0x8(%ebp),%eax
-mov    0xb48(%eax),%edx
-mov    0xc(%ebp),%eax
-mov    0x19(%eax),%eax
-add    %eax,%edx
+add    $0xb30,%eax
+add    $0x18,%eax
+mov    0x8(%ebp),%edx
+add    $0xb30,%edx
+add    $0x18,%edx
+mov    (%edx),%ecx
+mov    0xc(%ebp),%edx
+add    $0x19,%edx
+mov    (%edx),%edx
+lea    (%ecx,%edx,1),%edx
+mov    %edx,(%eax)
 mov    0x8(%ebp),%eax
-mov    %edx,0xb48(%eax)
+add    $0xb30,%eax
+add    $0x1c,%eax
+mov    0x8(%ebp),%edx
+add    $0xb30,%edx
+add    $0x1c,%edx
+mov    (%edx),%ecx
+mov    0xc(%ebp),%edx
+add    $0x1d,%edx
+mov    (%edx),%edx
+lea    (%ecx,%edx,1),%edx
+mov    %edx,(%eax)
 mov    0x8(%ebp),%eax
-mov    0xb4c(%eax),%edx
-mov    0xc(%ebp),%eax
-mov    0x1d(%eax),%eax
-add    %eax,%edx
+add    $0xb30,%eax
+add    $0x20,%eax
+mov    0x8(%ebp),%edx
+add    $0xb30,%edx
+add    $0x20,%edx
+mov    (%edx),%ecx
+mov    0xc(%ebp),%edx
+add    $0x21,%edx
+mov    (%edx),%edx
+lea    (%ecx,%edx,1),%edx
+mov    %edx,(%eax)
 mov    0x8(%ebp),%eax
-mov    %edx,0xb4c(%eax)
-mov    0x8(%ebp),%eax
-mov    0xb50(%eax),%edx
-mov    0xc(%ebp),%eax
-mov    0x21(%eax),%eax
-add    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0xb50(%eax)
-mov    0x8(%ebp),%eax
-mov    0xb54(%eax),%edx
-mov    0xc(%ebp),%eax
-mov    0x25(%eax),%eax
-add    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0xb54(%eax)
+add    $0xb30,%eax
+add    $0x24,%eax
+mov    0x8(%ebp),%edx
+add    $0xb30,%edx
+add    $0x24,%edx
+mov    (%edx),%ecx
+mov    0xc(%ebp),%edx
+add    $0x25,%edx
+mov    (%edx),%edx
+lea    (%ecx,%edx,1),%edx
+mov    %edx,(%eax)
 mov    0xc(%ebp),%eax
 lea    0x29(%eax),%edx
 mov    0x8(%ebp),%eax
-add    $0xb58,%eax
+add    $0xb30,%eax
+add    $0x28,%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager7minPingERsS0_>
 mov    0xc(%ebp),%eax
 lea    0x2b(%eax),%edx
 mov    0x8(%ebp),%eax
-add    $0xb5a,%eax
+add    $0xb30,%eax
+add    $0x2a,%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager7maxPingERsS0_>
 mov    0x8(%ebp),%eax
-lea    0xb64(%eax),%ecx
+add    $0xb30,%eax
+lea    0x34(%eax),%ecx
 mov    0xc(%ebp),%eax
 lea    0x2d(%eax),%edx
 mov    0x8(%ebp),%eax
-add    $0xb60,%eax
+add    $0xb30,%eax
+add    $0x30,%eax
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager7sumPingERiRsS0_>
 mov    0x8(%ebp),%eax
-mov    0xb68(%eax),%edx
-mov    0xc(%ebp),%eax
-mov    0x2f(%eax),%eax
-add    %eax,%edx
+add    $0xb30,%eax
+add    $0x38,%eax
+mov    0x8(%ebp),%edx
+add    $0xb30,%edx
+add    $0x38,%edx
+mov    (%edx),%ecx
+mov    0xc(%ebp),%edx
+add    $0x2f,%edx
+mov    (%edx),%edx
+lea    (%ecx,%edx,1),%edx
+mov    %edx,(%eax)
 mov    0x8(%ebp),%eax
-mov    %edx,0xb68(%eax)
+add    $0xb30,%eax
+add    $0x3c,%eax
+mov    0x8(%ebp),%edx
+add    $0xb30,%edx
+add    $0x3c,%edx
+mov    (%edx),%ecx
+mov    0xc(%ebp),%edx
+add    $0x33,%edx
+mov    (%edx),%edx
+lea    (%ecx,%edx,1),%edx
+mov    %edx,(%eax)
 mov    0x8(%ebp),%eax
-mov    0xb6c(%eax),%edx
-mov    0xc(%ebp),%eax
-mov    0x33(%eax),%eax
-add    %eax,%edx
+add    $0xb30,%eax
+add    $0x40,%eax
+mov    0x8(%ebp),%edx
+add    $0xb30,%edx
+add    $0x40,%edx
+mov    (%edx),%ecx
+mov    0xc(%ebp),%edx
+add    $0x37,%edx
+mov    (%edx),%edx
+lea    (%ecx,%edx,1),%edx
+mov    %edx,(%eax)
 mov    0x8(%ebp),%eax
-mov    %edx,0xb6c(%eax)
-mov    0x8(%ebp),%eax
-mov    0xb70(%eax),%edx
-mov    0xc(%ebp),%eax
-mov    0x37(%eax),%eax
-add    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0xb70(%eax)
-mov    0x8(%ebp),%eax
-mov    0xb74(%eax),%edx
-mov    0xc(%ebp),%eax
-mov    0x3b(%eax),%eax
-add    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0xb74(%eax)
+add    $0xb30,%eax
+add    $0x44,%eax
+mov    0x8(%ebp),%edx
+add    $0xb30,%edx
+add    $0x44,%edx
+mov    (%edx),%ecx
+mov    0xc(%ebp),%edx
+add    $0x3b,%edx
+mov    (%edx),%edx
+lea    (%ecx,%edx,1),%edx
+mov    %edx,(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::AddP2PStatistic(Packet_P2P_Statistics*) */

void __thiscall
StatisticManager::_ZN16StatisticManager15AddP2PStatisticEP21Packet_P2P_Statistics
          (StatisticManager *this,Packet_P2P_Statistics *param_1)

{
  *(int *)(this + 0xb30) = *(int *)(this + 0xb30) + *(int *)(param_1 + 10);
  *(int *)(this + 0xb34) = *(int *)(this + 0xb34) + *(int *)(param_1 + 0xe);
  this[0xb38] = *(StatisticManager *)(param_1 + 0x12);
  minPing(this,(short *)(this + 0xb3a),(short *)(param_1 + 0x13));
  maxPing(this,(short *)(this + 0xb3c),(short *)(param_1 + 0x15));
  sumPing(this,(int *)(this + 0xb40),(short *)(param_1 + 0x17),(int *)(this + 0xb44));
  *(int *)(this + 0xb48) = *(int *)(this + 0xb48) + *(int *)(param_1 + 0x19);
  *(int *)(this + 0xb4c) = *(int *)(this + 0xb4c) + *(int *)(param_1 + 0x1d);
  *(int *)(this + 0xb50) = *(int *)(this + 0xb50) + *(int *)(param_1 + 0x21);
  *(int *)(this + 0xb54) = *(int *)(this + 0xb54) + *(int *)(param_1 + 0x25);
  minPing(this,(short *)(this + 0xb58),(short *)(param_1 + 0x29));
  maxPing(this,(short *)(this + 0xb5a),(short *)(param_1 + 0x2b));
  sumPing(this,(int *)(this + 0xb60),(short *)(param_1 + 0x2d),(int *)(this + 0xb64));
  *(int *)(this + 0xb68) = *(int *)(this + 0xb68) + *(int *)(param_1 + 0x2f);
  *(int *)(this + 0xb6c) = *(int *)(this + 0xb6c) + *(int *)(param_1 + 0x33);
  *(int *)(this + 0xb70) = *(int *)(this + 0xb70) + *(int *)(param_1 + 0x37);
  *(int *)(this + 0xb74) = *(int *)(this + 0xb74) + *(int *)(param_1 + 0x3b);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 1601 行）：

```cpp
void StatisticManager::AddP2PStatistic(Packet_P2P_Statistics* pkt)
{
    *(int*)((char*)&m_p2p + 0) += *(int*)((char*)pkt + 10);
    *(int*)((char*)&m_p2p + 4) += *(int*)((char*)pkt + 0xe);
    *(char*)((char*)&m_p2p + 8) = *(char*)((char*)pkt + 0x12);
    minPing(*(short*)((char*)&m_p2p + 0xa), *(short*)((char*)pkt + 0x13));
    maxPing(*(short*)((char*)&m_p2p + 0xc), *(short*)((char*)pkt + 0x15));
    sumPing(*(int*)((char*)&m_p2p + 0x10), *(short*)((char*)pkt + 0x17),
            *(int*)((char*)&m_p2p + 0x14));
    *(int*)((char*)&m_p2p + 0x18) += *(int*)((char*)pkt + 0x19);
    *(int*)((char*)&m_p2p + 0x1c) += *(int*)((char*)pkt + 0x1d);
    *(int*)((char*)&m_p2p + 0x20) += *(int*)((char*)pkt + 0x21);
    *(int*)((char*)&m_p2p + 0x24) += *(int*)((char*)pkt + 0x25);
    minPing(*(short*)((char*)&m_p2p + 0x28), *(short*)((char*)pkt + 0x29));
    maxPing(*(short*)((char*)&m_p2p + 0x2a), *(short*)((char*)pkt + 0x2b));
    sumPing(*(int*)((char*)&m_p2p + 0x30), *(short*)((char*)pkt + 0x2d),
            *(int*)((char*)&m_p2p + 0x34));
    *(int*)((char*)&m_p2p + 0x38) += *(int*)((char*)pkt + 0x2f);
    *(int*)((char*)&m_p2p + 0x3c) += *(int*)((char*)pkt + 0x33);
    *(int*)((char*)&m_p2p + 0x40) += *(int*)((char*)pkt + 0x37);
    *(int*)((char*)&m_p2p + 0x44) += *(int*)((char*)pkt + 0x3b);
}
```

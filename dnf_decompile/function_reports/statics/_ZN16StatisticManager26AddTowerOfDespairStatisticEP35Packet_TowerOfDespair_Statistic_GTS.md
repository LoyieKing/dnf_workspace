# _ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS

`StatisticManager::AddTowerOfDespairStatistic(Packet_TowerOfDespair_Statistic_GTS*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8074aac` | `0x9d` | `0x8074c86` | `0xd2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,51 +1,71 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 cmpl   $0x0,0xc(%ebp)
-je     <T> <_ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS+0x9b>
+je     <T> <_ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS+0xc9>
 mov    0xc(%ebp),%eax
 mov    0xe(%eax),%eax
 test   %eax,%eax
-jle    <T> <_ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS+0x97>
+jle    <T> <_ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS+0xcc>
 mov    0xc(%ebp),%eax
 mov    0xe(%eax),%eax
 cmp    $0x64,%eax
-jg     <T> <_ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS+0x9a>
+jg     <T> <_ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS+0xcf>
 mov    0xc(%ebp),%eax
 movzbl 0x12(%eax),%eax
 test   %al,%al
-je     <T> <_ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS+0x73>
+jne    <T> <_ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS+0x6e>
+mov    0x8(%ebp),%edx
 mov    0xc(%ebp),%eax
 mov    0xe(%eax),%eax
+add    $0x100,%eax
+shl    $0x3,%eax
+add    $0x7,%eax
+add    %eax,%edx
+mov    0x8(%ebp),%ecx
+mov    0xc(%ebp),%eax
+mov    0xe(%eax),%eax
+add    $0x100,%eax
+shl    $0x3,%eax
+add    $0x7,%eax
+lea    (%ecx,%eax,1),%eax
+mov    (%eax),%eax
+add    $0x1,%eax
+mov    %eax,(%edx)
+jmp    <T> <_ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS+0xd0>
 mov    0x8(%ebp),%edx
-lea    0x100(%eax),%ecx
-mov    0xb(%edx,%ecx,8),%edx
-lea    0x1(%edx),%ecx
+mov    0xc(%ebp),%eax
+mov    0xe(%eax),%eax
+add    $0x100,%eax
+shl    $0x3,%eax
+add    $0xb,%eax
+add    %eax,%edx
+mov    0x8(%ebp),%ecx
+mov    0xc(%ebp),%eax
+mov    0xe(%eax),%eax
+add    $0x100,%eax
+shl    $0x3,%eax
+add    $0xb,%eax
+lea    (%ecx,%eax,1),%eax
+mov    (%eax),%eax
+add    $0x1,%eax
+mov    %eax,(%edx)
+mov    0xc(%ebp),%eax
+mov    0x13(%eax),%eax
+mov    %eax,-0xc(%ebp)
 mov    0x8(%ebp),%edx
-add    $0x100,%eax
-mov    %ecx,0xb(%edx,%eax,8)
-mov    0xc(%ebp),%eax
-lea    0x13(%eax),%ecx
-mov    0x8(%ebp),%edx
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
+lea    -0xc(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3setIjSt4lessIjESaIjEE6insertERKj>
 sub    $0x4,%esp
-jmp    <T> <_ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS+0x9b>
-mov    0xc(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    0x8(%ebp),%edx
-lea    0x100(%eax),%ecx
-mov    0x7(%edx,%ecx,8),%edx
-lea    0x1(%edx),%ecx
-mov    0x8(%ebp),%edx
-add    $0x100,%eax
-mov    %ecx,0x7(%edx,%eax,8)
-jmp    <T> <_ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS+0x9b>
+jmp    <T> <_ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS+0xd0>
 nop
-jmp    <T> <_ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS+0x9b>
+jmp    <T> <_ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS+0xd0>
+nop
+jmp    <T> <_ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS+0xd0>
 nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::AddTowerOfDespairStatistic(Packet_TowerOfDespair_Statistic_GTS*) */

void __thiscall
StatisticManager::
_ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS
          (StatisticManager *this,Packet_TowerOfDespair_Statistic_GTS *param_1)

{
  uint local_14 [4];
  
  if (((param_1 != (Packet_TowerOfDespair_Statistic_GTS *)0x0) && (0 < *(int *)(param_1 + 0xe))) &&
     (*(int *)(param_1 + 0xe) < 0x65)) {
    if (param_1[0x12] == (Packet_TowerOfDespair_Statistic_GTS)0x0) {
      *(int *)(this + (*(int *)(param_1 + 0xe) + 0x100) * 8 + 7) =
           *(int *)(this + (*(int *)(param_1 + 0xe) + 0x100) * 8 + 7) + 1;
    }
    else {
      *(int *)(this + (*(int *)(param_1 + 0xe) + 0x100) * 8 + 0xb) =
           *(int *)(this + (*(int *)(param_1 + 0xe) + 0x100) * 8 + 0xb) + 1;
      std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::insert(local_14);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 1721 行）：

```cpp
void StatisticManager::AddTowerOfDespairStatistic(Packet_TowerOfDespair_Statistic_GTS* pkt)
{
    struct __attribute__((packed)) Wire
    {
        char m_hdr[0xe];
        int m_f0e;
        char m_f12;
        unsigned int m_f13;
    };
    if (pkt == 0)
    {
        return;
    }
    if (((Wire*)pkt)->m_f0e <= 0)
    {
        return;
    }
    if (0x64 < ((Wire*)pkt)->m_f0e)
    {
        return;
    }
    if (((Wire*)pkt)->m_f12 == 0)
    {
        *(int*)((char*)this + (((Wire*)pkt)->m_f0e + 0x100) * 8 + 7) += 1;
    }
    else
    {
        *(int*)((char*)this + (((Wire*)pkt)->m_f0e + 0x100) * 8 + 0xb) += 1;
        m_serverList.insert(((Wire*)pkt)->m_f13);
    }
}
```

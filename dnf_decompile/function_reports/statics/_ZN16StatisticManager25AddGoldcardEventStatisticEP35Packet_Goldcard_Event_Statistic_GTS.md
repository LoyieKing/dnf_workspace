# _ZN16StatisticManager25AddGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_GTS

`StatisticManager::AddGoldcardEventStatistic(Packet_Goldcard_Event_Statistic_GTS*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x807499a` | `0x96` | `0x8074a34` | `0x8c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,54 +1,52 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x10,%esp
 mov    0xc(%ebp),%eax
 movzbl 0xa(%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0x8(%ebp)
-cmpl   $0x0,-0x8(%ebp)
-js     <T> <_ZN16StatisticManager25AddGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_GTS+0x90>
 cmpl   $0x63,-0x8(%ebp)
-jg     <T> <_ZN16StatisticManager25AddGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_GTS+0x90>
+ja     <T> <_ZN16StatisticManager25AddGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_GTS+0x86>
+mov    0x8(%ebp),%ecx
 mov    -0x8(%ebp),%edx
-mov    -0x8(%ebp),%ecx
-mov    0x8(%ebp),%ebx
-mov    %ecx,%eax
-shl    $0x3,%eax
-add    %ecx,%eax
-lea    (%ebx,%eax,1),%eax
-add    $0x480,%eax
-mov    0xd(%eax),%ecx
-mov    0xc(%ebp),%eax
-mov    0xb(%eax),%eax
-add    %eax,%ecx
-mov    0x8(%ebp),%ebx
 mov    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
-lea    (%ebx,%eax,1),%eax
-add    $0x480,%eax
-mov    %ecx,0xd(%eax)
-mov    -0x8(%ebp),%edx
-mov    -0x8(%ebp),%ecx
-mov    0x8(%ebp),%ebx
-mov    %ecx,%eax
-shl    $0x3,%eax
-add    %ecx,%eax
-lea    (%ebx,%eax,1),%eax
-add    $0x480,%eax
-mov    0x11(%eax),%ecx
-mov    0xc(%ebp),%eax
-mov    0xf(%eax),%eax
+add    $0x48d,%eax
 add    %eax,%ecx
 mov    0x8(%ebp),%ebx
+mov    -0x8(%ebp),%edx
 mov    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
+add    $0x48d,%eax
 lea    (%ebx,%eax,1),%eax
-add    $0x480,%eax
-mov    %ecx,0x11(%eax)
+mov    (%eax),%edx
+mov    0xc(%ebp),%eax
+mov    0xb(%eax),%eax
+lea    (%edx,%eax,1),%eax
+mov    %eax,(%ecx)
+mov    0x8(%ebp),%ecx
+mov    -0x8(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+add    %edx,%eax
+add    $0x491,%eax
+add    %eax,%ecx
+mov    0x8(%ebp),%ebx
+mov    -0x8(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+add    %edx,%eax
+add    $0x491,%eax
+lea    (%ebx,%eax,1),%eax
+mov    (%eax),%edx
+mov    0xc(%ebp),%eax
+mov    0xf(%eax),%eax
+lea    (%edx,%eax,1),%eax
+mov    %eax,(%ecx)
 add    $0x10,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::AddGoldcardEventStatistic(Packet_Goldcard_Event_Statistic_GTS*) */

void __thiscall
StatisticManager::
_ZN16StatisticManager25AddGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_GTS
          (StatisticManager *this,Packet_Goldcard_Event_Statistic_GTS *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)param_1[10];
  if (uVar1 < 100) {
    *(int *)(this + uVar1 * 9 + 0x48d) =
         *(int *)(this + uVar1 * 9 + 0x48d) + *(int *)(param_1 + 0xb);
    *(int *)(this + uVar1 * 9 + 0x491) =
         *(int *)(this + uVar1 * 9 + 0x491) + *(int *)(param_1 + 0xf);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 1617 行）：

```cpp
void StatisticManager::AddGoldcardEventStatistic(Packet_Goldcard_Event_Statistic_GTS* pkt)
{
    struct __attribute__((packed)) Wire
    {
        char m_hdr[0xa];
        char m_f0a;
        int m_f0b;
        int m_f0f;
    };
    unsigned int idx = (unsigned int)(unsigned char)((Wire*)pkt)->m_f0a;
    if (idx < 100)
    {
        *(int*)((char*)this + idx * 9 + 0x48d) += ((Wire*)pkt)->m_f0b;
        *(int*)((char*)this + idx * 9 + 0x491) += ((Wire*)pkt)->m_f0f;
    }
}
```

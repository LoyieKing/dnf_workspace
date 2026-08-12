# _ZN16StatisticManager21AddRandomboxStatisticEP26Packet_Randombox_statistic

`StatisticManager::AddRandomboxStatistic(Packet_Randombox_statistic*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8072cee` | `0x85` | `0x8072e0e` | `0x9b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,45 +1,49 @@
 push   %ebp
 mov    %esp,%ebp
+push   %ebx
 mov    0xc(%ebp),%eax
 movzbl 0xa(%eax),%eax
 cmp    $0x4,%al
-jg     <T> <_ZN16StatisticManager21AddRandomboxStatisticEP26Packet_Randombox_statistic+0x7f>
+jg     <T> <_ZN16StatisticManager21AddRandomboxStatisticEP26Packet_Randombox_statistic+0x98>
 mov    0xc(%ebp),%eax
 movzbl 0xa(%eax),%eax
 test   %al,%al
-js     <T> <_ZN16StatisticManager21AddRandomboxStatisticEP26Packet_Randombox_statistic+0x82>
+js     <T> <_ZN16StatisticManager21AddRandomboxStatisticEP26Packet_Randombox_statistic+0x98>
 mov    0xc(%ebp),%eax
 movzbl 0xb(%eax),%eax
 test   %al,%al
-jne    <T> <_ZN16StatisticManager21AddRandomboxStatisticEP26Packet_Randombox_statistic+0x4c>
-mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movsbl %al,%eax
+jne    <T> <_ZN16StatisticManager21AddRandomboxStatisticEP26Packet_Randombox_statistic+0x5c>
+mov    0x8(%ebp),%eax
+mov    0xc(%ebp),%edx
+movzbl 0xa(%edx),%edx
+movsbl %dl,%edx
+lea    0xd0(%edx),%ebx
 mov    0x8(%ebp),%edx
-lea    0xd0(%eax),%ecx
+mov    0xc(%ebp),%ecx
+movzbl 0xa(%ecx),%ecx
+movsbl %cl,%ecx
+add    $0xd0,%ecx
 mov    0x8(%edx,%ecx,4),%edx
-lea    0x1(%edx),%ecx
-mov    0x8(%ebp),%edx
-add    $0xd0,%eax
-mov    %ecx,0x8(%edx,%eax,4)
-jmp    <T> <_ZN16StatisticManager21AddRandomboxStatisticEP26Packet_Randombox_statistic+0x83>
+add    $0x1,%edx
+mov    %edx,0x8(%eax,%ebx,4)
+jmp    <T> <_ZN16StatisticManager21AddRandomboxStatisticEP26Packet_Randombox_statistic+0x98>
 mov    0xc(%ebp),%eax
 movzbl 0xb(%eax),%eax
 cmp    $0x1,%al
-jne    <T> <_ZN16StatisticManager21AddRandomboxStatisticEP26Packet_Randombox_statistic+0x83>
-mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movsbl %al,%eax
+jne    <T> <_ZN16StatisticManager21AddRandomboxStatisticEP26Packet_Randombox_statistic+0x98>
+mov    0x8(%ebp),%eax
+mov    0xc(%ebp),%edx
+movzbl 0xa(%edx),%edx
+movsbl %dl,%edx
+lea    0xd4(%edx),%ebx
 mov    0x8(%ebp),%edx
-lea    0xd4(%eax),%ecx
+mov    0xc(%ebp),%ecx
+movzbl 0xa(%ecx),%ecx
+movsbl %cl,%ecx
+add    $0xd4,%ecx
 mov    0xc(%edx,%ecx,4),%edx
-lea    0x1(%edx),%ecx
-mov    0x8(%ebp),%edx
-add    $0xd4,%eax
-mov    %ecx,0xc(%edx,%eax,4)
-jmp    <T> <_ZN16StatisticManager21AddRandomboxStatisticEP26Packet_Randombox_statistic+0x83>
-nop
-jmp    <T> <_ZN16StatisticManager21AddRandomboxStatisticEP26Packet_Randombox_statistic+0x83>
-nop
+add    $0x1,%edx
+mov    %edx,0xc(%eax,%ebx,4)
+pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::AddRandomboxStatistic(Packet_Randombox_statistic*) */

void __thiscall
StatisticManager::_ZN16StatisticManager21AddRandomboxStatisticEP26Packet_Randombox_statistic
          (StatisticManager *this,Packet_Randombox_statistic *param_1)

{
  if (((char)param_1[10] < '\x05') && (-1 < (char)param_1[10])) {
    if (param_1[0xb] == (Packet_Randombox_statistic)0x0) {
      *(int *)(this + ((char)param_1[10] + 0xd0) * 4 + 8) =
           *(int *)(this + ((char)param_1[10] + 0xd0) * 4 + 8) + 1;
    }
    else if (param_1[0xb] == (Packet_Randombox_statistic)0x1) {
      *(int *)(this + ((char)param_1[10] + 0xd4) * 4 + 0xc) =
           *(int *)(this + ((char)param_1[10] + 0xd4) * 4 + 0xc) + 1;
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 1328 行）：

```cpp
void StatisticManager::AddRandomboxStatistic(Packet_Randombox_statistic* pkt)
{
    struct __attribute__((packed)) Wire
    {
        char m_hdr[0xa];
        char m_f0a;
        char m_f0b;
    };
    struct RBoxView1 { int m_pad[2]; int m_b[0xd8]; };
    struct RBoxView2 { int m_pad[3]; int m_b[0xd8]; };
    if ((char)((Wire*)pkt)->m_f0a < 5 && -1 < (char)((Wire*)pkt)->m_f0a)
    {
        if (((Wire*)pkt)->m_f0b == 0)
        {
            ((RBoxView1*)this)->m_b[0xd0 + (char)((Wire*)pkt)->m_f0a] += 1;
        }
        else if (((Wire*)pkt)->m_f0b == 1)
        {
            ((RBoxView2*)this)->m_b[0xd4 + (char)((Wire*)pkt)->m_f0a] += 1;
        }
    }
}
```

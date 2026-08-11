# _ZN17FrameLagCollector20CollectIntervalCheckEP39Packet_Frame_Lag_Collect_Interval_Check

`FrameLagCollector::CollectIntervalCheck(Packet_Frame_Lag_Collect_Interval_Check*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x806757e` | `0x54` | `0x806098c` | `0x58` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,23 +1,25 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0xc(%ebp),%eax
-movzwl 0xa(%eax),%eax
+add    $0xa,%eax
+movzwl (%eax),%eax
 test   %ax,%ax
-je     <T> <_ZN17FrameLagCollector20CollectIntervalCheckEP39Packet_Frame_Lag_Collect_Interval_Check+0x27>
+jne    <T> <_ZN17FrameLagCollector20CollectIntervalCheckEP39Packet_Frame_Lag_Collect_Interval_Check+0x23>
+mov    0x8(%ebp),%eax
+movl   $0x1e,0x88(%eax)
+jmp    <T> <_ZN17FrameLagCollector20CollectIntervalCheckEP39Packet_Frame_Lag_Collect_Interval_Check+0x38>
 mov    0xc(%ebp),%eax
-movzwl 0xa(%eax),%eax
+add    $0xa,%eax
+movzwl (%eax),%eax
 movswl %ax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x88(%eax)
-jmp    <T> <_ZN17FrameLagCollector20CollectIntervalCheckEP39Packet_Frame_Lag_Collect_Interval_Check+0x34>
-mov    0x8(%ebp),%eax
-movl   $0x1e,0x88(%eax)
 mov    0x8(%ebp),%eax
 mov    0x88(%eax),%eax
 mov    %eax,0x4(%esp)
 movl   $"FrameLagCollector::CollectIntervalCheck(), Interval check : %d",(%esp)
 call   <T> <printf>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* FrameLagCollector::CollectIntervalCheck(Packet_Frame_Lag_Collect_Interval_Check*) */

undefined4 __thiscall
FrameLagCollector::
_ZN17FrameLagCollector20CollectIntervalCheckEP39Packet_Frame_Lag_Collect_Interval_Check
          (FrameLagCollector *this,Packet_Frame_Lag_Collect_Interval_Check *param_1)

{
  if (*(short *)(param_1 + 10) == 0) {
    *(undefined4 *)(this + 0x88) = 0x1e;
  }
  else {
    *(int *)(this + 0x88) = (int)*(short *)(param_1 + 10);
  }
  printf("FrameLagCollector::CollectIntervalCheck(), Interval check : %d",
         *(undefined4 *)(this + 0x88));
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/FrameLagCollector.cpp](source/DNFServer/GameServer/Statics/FrameLagCollector.cpp)（约第 340 行）：

```cpp
int FrameLagCollector::CollectIntervalCheck(Packet_Frame_Lag_Collect_Interval_Check* pkt)
{
    if (*(short*)((char*)pkt + 10) == 0)
    {
        m_collectInterval = 0x1e;
    }
    else
    {
        m_collectInterval = (int)*(short*)((char*)pkt + 10);
    }
    printf("FrameLagCollector::CollectIntervalCheck(), Interval check : %d", m_collectInterval);
    return 0;
}
```

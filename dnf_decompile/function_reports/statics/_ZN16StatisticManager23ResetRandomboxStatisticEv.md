# _ZN16StatisticManager23ResetRandomboxStatisticEv

`StatisticManager::ResetRandomboxStatistic()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8072de2` | `0x48` | `0x8072f4e` | `0x4e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,20 +1,24 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x10,%esp
 movl   $0x0,-0x4(%ebp)
-jmp    <T> <_ZN16StatisticManager23ResetRandomboxStatisticEv+0x3b>
+jmp    <T> <_ZN16StatisticManager23ResetRandomboxStatisticEv+0x41>
+mov    0x8(%ebp),%eax
 mov    -0x4(%ebp),%edx
+add    $0xd2,%edx
+shl    $0x2,%edx
+add    %edx,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-add    $0xd0,%edx
-movl   $0x0,0x8(%eax,%edx,4)
 mov    -0x4(%ebp),%edx
-mov    0x8(%ebp),%eax
-add    $0xd4,%edx
-movl   $0x0,0xc(%eax,%edx,4)
+add    $0xd7,%edx
+shl    $0x2,%edx
+add    %edx,%eax
+movl   $0x0,(%eax)
 addl   $0x1,-0x4(%ebp)
 cmpl   $0x4,-0x4(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN16StatisticManager23ResetRandomboxStatisticEv+0xf>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::ResetRandomboxStatistic() */

void __thiscall
StatisticManager::_ZN16StatisticManager23ResetRandomboxStatisticEv(StatisticManager *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    *(undefined4 *)(this + (local_8 + 0xd0) * 4 + 8) = 0;
    *(undefined4 *)(this + (local_8 + 0xd4) * 4 + 0xc) = 0;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 1336 行）：

```cpp
void StatisticManager::ResetRandomboxStatistic()
{
    for (int i = 0; i < 5; i++)
    {
        *(unsigned int*)((char*)this + (i + 0xd0) * 4 + 8) = 0;
        *(unsigned int*)((char*)this + (i + 0xd4) * 4 + 0xc) = 0;
    }
}
```

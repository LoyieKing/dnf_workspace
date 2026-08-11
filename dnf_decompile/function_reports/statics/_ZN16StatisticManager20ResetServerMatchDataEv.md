# _ZN16StatisticManager20ResetServerMatchDataEv

`StatisticManager::ResetServerMatchData()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8074552` | `0x2c` | `0x80743ca` | `0x2f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,10 +1,13 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-movl   $0x0,0x438(%eax)
+add    $0x438,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x43c(%eax)
+add    $0x43c,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x440(%eax)
+add    $0x440,%eax
+movl   $0x0,(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::ResetServerMatchData() */

void __thiscall
StatisticManager::_ZN16StatisticManager20ResetServerMatchDataEv(StatisticManager *this)

{
  *(undefined4 *)(this + 0x438) = 0;
  *(undefined4 *)(this + 0x43c) = 0;
  *(undefined4 *)(this + 0x440) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 1392 行）：

```cpp
void StatisticManager::ResetServerMatchData()
{
    *(unsigned int*)((char*)this + 0x438) = 0;
    *(unsigned int*)((char*)this + 0x43c) = 0;
    *(unsigned int*)((char*)this + 0x440) = 0;
}
```

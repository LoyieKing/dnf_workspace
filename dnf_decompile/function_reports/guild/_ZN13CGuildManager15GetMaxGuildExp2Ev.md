# _ZN13CGuildManager15GetMaxGuildExp2Ev

`CGuildManager::GetMaxGuildExp2()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x808ad00` | `0xa` | `0x805b4d6` | `0xa` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,5 +1,5 @@
 push   %ebp
 mov    %esp,%ebp
-mov    &_ZN13CGuildManager15m_uGuildExpMax2E,%eax
+mov    $0x4e20,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildManager::GetMaxGuildExp2() */

undefined4 CGuildManager::_ZN13CGuildManager15GetMaxGuildExp2Ev(void)

{
  return m_uGuildExpMax2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildManager.cpp](source/DNFServer/GameServer/Guild/DNFGuildManager.cpp)（约第 126 行）：

```cpp
unsigned int CGuildManager::GetMaxGuildExp2()
{
    return 20000;
}
```

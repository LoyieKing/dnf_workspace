# _ZN13CPowerManager13GetPowerScoreE20ENUM_POWER_SIDE_TYPE

`CPowerManager::GetPowerScore(ENUM_POWER_SIDE_TYPE)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a3cbe` | `0x1c` | `0x8099f86` | `0x1e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,11 +1,12 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
-mov    0xc(%ebp),%eax
-imul   $0x6c,%eax,%eax
-add    0x8(%ebp),%eax
-add    $0x8,%eax
+mov    0x8(%ebp),%eax
+mov    0xc(%ebp),%edx
+imul   $0x6c,%edx,%edx
+add    $0x8,%edx
+add    %edx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CPower8GetScoreEv>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerManager::GetPowerScore(ENUM_POWER_SIDE_TYPE) */

void __thiscall
CPowerManager::_ZN13CPowerManager13GetPowerScoreE20ENUM_POWER_SIDE_TYPE
          (CPowerManager *this,int param_2)

{
  CPower::GetScore((CPower *)(this + param_2 * 0x6c + 8));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 186 行）：

```cpp
int CPowerManager::GetPowerScore(ENUM_POWER_SIDE_TYPE side)
{
    return ((CPower*)((char*)this + 8 + side * 0x6c))->GetScore();
}
```

# _ZN19COnTimeEventManager10IsCurStateE23ENUM_ONTIME_EVENT_STATE

`COnTimeEventManager::IsCurState(ENUM_ONTIME_EVENT_STATE)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a4822` | `0x11` | `0x80997f2` | `0x13` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,8 +1,9 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-mov    0x2c(%eax),%eax
-cmp    0xc(%ebp),%eax
+mov    0x2c(%eax),%edx
+mov    0xc(%ebp),%eax
+cmp    %eax,%edx
 sete   %al
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* COnTimeEventManager::IsCurState(ENUM_ONTIME_EVENT_STATE) */

undefined4 __thiscall
COnTimeEventManager::_ZN19COnTimeEventManager10IsCurStateE23ENUM_ONTIME_EVENT_STATE
          (COnTimeEventManager *this,int param_2)

{
  return CONCAT31((int3)((uint)*(int *)(this + 0x2c) >> 8),*(int *)(this + 0x2c) == param_2);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/OnTimeEventManager.cpp](source/DNFServer/GameServer/Monitor/OnTimeEventManager.cpp)（约第 55 行）：

```cpp
bool COnTimeEventManager::IsCurState(ENUM_ONTIME_EVENT_STATE state)
{
    return (char)(m_state2c == state);
}
```

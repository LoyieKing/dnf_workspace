# _ZN16CBaseEventActionC1Ev

`CBaseEventAction::CBaseEventAction()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a4336` | `0xe` | `0x80929a8` | `0x18` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,6 +1,8 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
 movl   $&_ZTV16CBaseEventAction+0x8,(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x4(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CBaseEventAction::CBaseEventAction() */

void __thiscall CBaseEventAction::_ZN16CBaseEventActionC1Ev(CBaseEventAction *this)

{
  *(undefined ***)this = &PTR__CBaseEventAction_08136bf8;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/EventActionManager.cpp](source/DNFServer/GameServer/Monitor/EventActionManager.cpp)（约第 34 行）：

```cpp
CBaseEventAction::CBaseEventAction() : m_eventId(0) {}
```

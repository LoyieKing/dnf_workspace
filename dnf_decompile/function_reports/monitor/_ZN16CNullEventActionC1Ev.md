# _ZN16CNullEventActionC1Ev

`CNullEventAction::CNullEventAction()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x80a43b4` | `0x1c` | `0x8092adc` | `0x1c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,10 +1,10 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CBaseEventActionC1Ev>
 mov    0x8(%ebp),%eax
 movl   $&_ZTV16CNullEventAction+0x8,(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CNullEventAction::CNullEventAction() */

void __thiscall CNullEventAction::_ZN16CNullEventActionC1Ev(CNullEventAction *this)

{
  CBaseEventAction::_ZN16CBaseEventActionC2Ev((CBaseEventAction *)this);
  *(undefined ***)this = &PTR__CNullEventAction_08136be0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/EventActionManager.cpp](source/DNFServer/GameServer/Monitor/EventActionManager.cpp)（约第 70 行）：

```cpp
CNullEventAction::CNullEventAction() {}
```

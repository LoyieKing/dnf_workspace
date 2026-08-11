# _ZN6CEventC1Ev

`CEvent::CEvent()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80adc80` | `0x15` | `0x80acfee` | `0x1a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,8 +1,9 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
 movl   $&_ZTV6CEvent+0x8,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0x0,0x4(%eax)
+add    $0x4,%eax
+movl   $0x0,(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CEvent::CEvent() */

void __thiscall CEvent::_ZN6CEventC1Ev(CEvent *this)

{
  *(undefined ***)this = &PTR__CEvent_081389c0;
  this[4] = (CEvent)0x0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/WebEvent.cpp](source/DNFServer/GameServer/Guild/WebEvent.cpp)（约第 83 行）：

```cpp
CEvent::CEvent()
{
    *(int*)((char*)this + 4) = 0;
}
```

# _ZN6CEventD2Ev

`CEvent::~CEvent()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80adc96` | `0x2c` | `0x80ad008` | `0x25` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,15 +1,13 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $&_ZTV6CEvent+0x8,(%eax)
-mov    0x8(%ebp),%eax
-movb   $0x0,0x4(%eax)
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN6CEventD1Ev+0x2a>
+je     <T> <_ZN6CEventD1Ev+0x23>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZdlPv>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Removing unreachable block (ram,0x080adcb5) */
/* CEvent::~CEvent() */

void __thiscall CEvent::_ZN6CEventD2Ev(CEvent *this)

{
  *(undefined ***)this = &PTR__ZN6CEventD2Ev_081389c0;
  this[4] = (CEvent)0x0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/WebEvent.cpp](source/DNFServer/GameServer/Guild/WebEvent.cpp)（约第 88 行）：

```cpp
CEvent::~CEvent()
{
}
```

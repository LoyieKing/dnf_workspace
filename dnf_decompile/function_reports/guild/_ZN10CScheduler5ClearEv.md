# _ZN10CScheduler5ClearEv

`CScheduler::Clear()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x805d262` | `0x7e` | `0x80a3c7c` | `0x96` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,38 +1,50 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 movb   $0xff,(%eax)
 mov    0x8(%ebp),%eax
 movb   $0xff,0x1(%eax)
 mov    0x8(%ebp),%eax
 movb   $0xff,0x2(%eax)
 mov    0x8(%ebp),%eax
 movb   $0xff,0x3(%eax)
 mov    0x8(%ebp),%eax
 movw   $0xffff,0x4(%eax)
 mov    0x8(%ebp),%eax
 movb   $0xff,0x6(%eax)
 mov    0x8(%ebp),%eax
 movb   $0xff,0x7(%eax)
 movl   $0x0,-0x4(%ebp)
-jmp    <T> <_ZN10CScheduler5ClearEv+0x71>
+jmp    <T> <_ZN10CScheduler5ClearEv+0x89>
+mov    0x8(%ebp),%eax
 mov    -0x4(%ebp),%edx
+add    $0x2,%edx
+shl    $0x2,%edx
+add    %edx,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0x0,0x8(%eax,%edx,4)
 mov    -0x4(%ebp),%edx
+shl    $0x2,%edx
+add    $0x9,%edx
+add    %edx,%eax
+movb   $0xff,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0xff,0x9(%eax,%edx,4)
 mov    -0x4(%ebp),%edx
+shl    $0x2,%edx
+add    $0xa,%edx
+add    %edx,%eax
+movb   $0xff,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0xff,0xa(%eax,%edx,4)
 mov    -0x4(%ebp),%edx
-mov    0x8(%ebp),%eax
-movb   $0xff,0xb(%eax,%edx,4)
+shl    $0x2,%edx
+add    $0xb,%edx
+add    %edx,%eax
+movb   $0xff,(%eax)
 addl   $0x1,-0x4(%ebp)
 cmpl   $0x6,-0x4(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN10CScheduler5ClearEv+0x41>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CScheduler::Clear() */

void __thiscall CScheduler::_ZN10CScheduler5ClearEv(CScheduler *this)

{
  int local_8;
  
  *this = (CScheduler)0xff;
  this[1] = (CScheduler)0xff;
  this[2] = (CScheduler)0xff;
  this[3] = (CScheduler)0xff;
  *(undefined2 *)(this + 4) = 0xffff;
  this[6] = (CScheduler)0xff;
  this[7] = (CScheduler)0xff;
  for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
    this[local_8 * 4 + 8] = (CScheduler)0x0;
    this[local_8 * 4 + 9] = (CScheduler)0xff;
    this[local_8 * 4 + 10] = (CScheduler)0xff;
    this[local_8 * 4 + 0xb] = (CScheduler)0xff;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/Scheduler.cpp](source/DNFServer/GameServer/Guild/Scheduler.cpp)（约第 101 行）：

```cpp
void CScheduler::Clear()
{
    m_day = 0xff;
    m_min = 0xff;
    m_hour = 0xff;
    m_sec = 0xff;
    m_week = 0xffff;
    m_flag1 = 0xff;
    m_flag2 = 0xff;
    for (int i = 0; i < 7; i++)
    {
        *(char*)((char*)this + i * 4 + 8) = 0;
        *(char*)((char*)this + i * 4 + 9) = 0xff;
        *(char*)((char*)this + i * 4 + 10) = 0xff;
        *(char*)((char*)this + i * 4 + 0xb) = 0xff;
    }
}
```

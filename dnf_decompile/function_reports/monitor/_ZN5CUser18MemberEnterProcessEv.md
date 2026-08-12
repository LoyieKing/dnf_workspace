# _ZN5CUser18MemberEnterProcessEv

`CUser::MemberEnterProcess()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806d608` | `0x43` | `0x8088d8c` | `0x4e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,25 +1,29 @@
 push   %ebp
 mov    %esp,%ebp
+sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN5CUser18MemberEnterProcessEv+0x40>
+je     <T> <_ZN5CUser18MemberEnterProcessEv+0x48>
 mov    0x8(%ebp),%eax
-movzbl 0x1a(%eax),%eax
-lea    -0x1(%eax),%edx
-mov    0x8(%ebp),%eax
+mov    0x8(%ebp),%edx
+movzbl 0x1a(%edx),%edx
+sub    $0x1,%edx
 mov    %dl,0x1a(%eax)
 mov    0x8(%ebp),%eax
 movzbl 0x1a(%eax),%eax
 test   %al,%al
 setle  %al
-test   %al,%al
-je     <T> <_ZN5CUser18MemberEnterProcessEv+0x41>
+mov    %al,-0x1(%ebp)
+cmpb   $0x0,-0x1(%ebp)
+je     <T> <_ZN5CUser18MemberEnterProcessEv+0x4b>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x1c(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x0,0x1a(%eax)
-jmp    <T> <_ZN5CUser18MemberEnterProcessEv+0x41>
+jmp    <T> <_ZN5CUser18MemberEnterProcessEv+0x4c>
 nop
-pop    %ebp
+jmp    <T> <_ZN5CUser18MemberEnterProcessEv+0x4c>
+nop
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::MemberEnterProcess() */

void __thiscall CUser::_ZN5CUser18MemberEnterProcessEv(CUser *this)

{
  if ((*(int *)(this + 0x1c) != 0) &&
     (this[0x1a] = (CUser)((char)this[0x1a] + -1), (char)this[0x1a] < '\x01')) {
    *(undefined4 *)(this + 0x1c) = 0;
    this[0x1a] = (CUser)0x0;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUser.cpp](source/DNFServer/GameServer/Monitor/DNFUser.cpp)（约第 196 行）：

```cpp
void CUser::MemberEnterProcess()
{
    if (((RA_INT<28>*)this)->v != 0)
    {
        ((RA_S8<26>*)this)->v = ((RA_S8<26>*)this)->v - 1;
        bool done = (signed char)((RA_S8<26>*)this)->v <= 0;
        if (done)
        {
            ((RA_INT<28>*)this)->v = 0;
            ((RA_S8<26>*)this)->v = 0;
        }
    }
    return;
}
```

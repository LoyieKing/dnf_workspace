# _ZN5CUser24CheckPrevCallMemberEnterEv

`CUser::CheckPrevCallMemberEnter()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806d64c` | `0x2d` | `0x8089b92` | `0x31` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,17 +1,19 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-movzbl 0x1a(%eax),%eax
+add    $0x1a,%eax
+movzbl (%eax),%eax
 test   %al,%al
-jg     <T> <_ZN5CUser24CheckPrevCallMemberEnterEv+0x15>
+jg     <T> <_ZN5CUser24CheckPrevCallMemberEnterEv+0x17>
 mov    $0x0,%eax
-jmp    <T> <_ZN5CUser24CheckPrevCallMemberEnterEv+0x2b>
+jmp    <T> <_ZN5CUser24CheckPrevCallMemberEnterEv+0x2f>
 mov    0x8(%ebp),%eax
-mov    0x1c(%eax),%eax
+add    $0x1c,%eax
+mov    (%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN5CUser24CheckPrevCallMemberEnterEv+0x26>
+jne    <T> <_ZN5CUser24CheckPrevCallMemberEnterEv+0x2a>
 mov    $0x0,%eax
-jmp    <T> <_ZN5CUser24CheckPrevCallMemberEnterEv+0x2b>
+jmp    <T> <_ZN5CUser24CheckPrevCallMemberEnterEv+0x2f>
 mov    $0x1,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::CheckPrevCallMemberEnter() */

undefined4 __thiscall CUser::_ZN5CUser24CheckPrevCallMemberEnterEv(CUser *this)

{
  undefined4 uVar1;
  
  if ((char)this[0x1a] < '\x01') {
    uVar1 = 0;
  }
  else if (*(int *)(this + 0x1c) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUser.cpp](source/DNFServer/GameServer/Monitor/DNFUser.cpp)（约第 533 行）：

```cpp
char CUser::CheckPrevCallMemberEnter()
{
    if (*(char*)((char*)this + 0x1a) < 1)
    {
        return 0;
    }
    if (*(int*)((char*)this + 0x1c) == 0)
    {
        return 0;
    }
    return 1;
}
```

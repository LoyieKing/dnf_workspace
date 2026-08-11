# _ZN5CUser9GetMemberEv

`CUser::GetMember()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809324c` | `0x1c` | `0x8089bc0` | `0xd` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,12 +1,7 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-mov    0x14(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN5CUser9GetMemberEv+0x15>
-mov    0x8(%ebp),%eax
-mov    0x14(%eax),%eax
-jmp    <T> <_ZN5CUser9GetMemberEv+0x1a>
-mov    $0x0,%eax
+add    $0x14,%eax
+mov    (%eax),%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::GetMember() */

undefined4 __thiscall CUser::_ZN5CUser9GetMemberEv(CUser *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x14) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(this + 0x14);
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUser.cpp](source/DNFServer/GameServer/Monitor/DNFUser.cpp)（约第 552 行）：

```cpp
unsigned int CUser::GetMemberEnterCallerId()
{
    return m_memberEnterCallerId;
}
```

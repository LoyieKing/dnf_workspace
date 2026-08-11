# _ZN5CUser22GetMemberEnterCallerIdEv

`CUser::GetMemberEnterCallerId()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809321c` | `0xb` | `0x8089b84` | `0xd` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,6 +1,7 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-mov    0x1c(%eax),%eax
+add    $0x1c,%eax
+mov    (%eax),%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::GetMemberEnterCallerId() */

undefined4 __thiscall CUser::_ZN5CUser22GetMemberEnterCallerIdEv(CUser *this)

{
  return *(undefined4 *)(this + 0x1c);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUser.cpp](source/DNFServer/GameServer/Monitor/DNFUser.cpp)（约第 528 行）：

```cpp
unsigned int CUser::GetMemberEnterCallerId()
{
    return *(unsigned int*)((char*)this + 0x1c);
}
```

# _ZN5CUser12GetMemberKeyEv

`CUser::GetMemberKey()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806d58e` | `0x27` | `0x8089d22` | `0x2b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,15 +1,17 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
-mov    0x14(%eax),%eax
+add    $0x14,%eax
+mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN5CUser12GetMemberKeyEv+0x20>
+jne    <T> <_ZN5CUser12GetMemberKeyEv+0x19>
+mov    $0x0,%eax
+jmp    <T> <_ZN5CUser12GetMemberKeyEv+0x29>
 mov    0x8(%ebp),%eax
-mov    0x14(%eax),%eax
+add    $0x14,%eax
+mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember12GetMemberKeyEv>
-jmp    <T> <_ZN5CUser12GetMemberKeyEv+0x25>
-mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::GetMemberKey() */

undefined4 __thiscall CUser::_ZN5CUser12GetMemberKeyEv(CUser *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x14) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CMember::GetMemberKey(*(CMember **)(this + 0x14));
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUser.cpp](source/DNFServer/GameServer/Monitor/DNFUser.cpp)（约第 608 行）：

```cpp
unsigned int CUser::GetMemberKey()
{
    if (*(int*)((char*)this + 0x14) == 0)
    {
        return 0;
    }
    return ((CMember*)*(int*)((char*)this + 0x14))->GetMemberKey();
}
```

# _ZN5CUser15ResetMemberInfoEv

`CUser::ResetMemberInfo()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806d6a4` | `0x29` | `0x8089366` | `0x31` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,12 +1,16 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-movl   $0x0,0x14(%eax)
+add    $0x14,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movw   $0x0,0x18(%eax)
+add    $0x18,%eax
+movw   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0x0,0x1a(%eax)
+add    $0x1a,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x1c(%eax)
+add    $0x1c,%eax
+movl   $0x0,(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::ResetMemberInfo() */

void __thiscall CUser::_ZN5CUser15ResetMemberInfoEv(CUser *this)

{
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined2 *)(this + 0x18) = 0;
  this[0x1a] = (CUser)0x0;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUser.cpp](source/DNFServer/GameServer/Monitor/DNFUser.cpp)（约第 338 行）：

```cpp
void CUser::ResetMemberInfo()
{
    *(unsigned int*)((char*)this + 0x14) = 0;
    *(unsigned short*)((char*)this + 0x18) = 0;
    *(char*)((char*)this + 0x1a) = 0;
    *(unsigned int*)((char*)this + 0x1c) = 0;
}
```

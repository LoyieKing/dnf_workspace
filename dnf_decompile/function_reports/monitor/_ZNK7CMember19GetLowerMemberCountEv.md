# _ZNK7CMember19GetLowerMemberCountEv

`CMember::GetLowerMemberCount() const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8093378` | `0xf` | `0x8060494` | `0x11` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,7 +1,8 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-movzbl 0x2d(%eax),%eax
+add    $0x2d,%eax
+movzbl (%eax),%eax
 movzbl %al,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMember::GetLowerMemberCount() const */

CMember __thiscall CMember::_ZNK7CMember19GetLowerMemberCountEv(CMember *this)

{
  return this[0x2d];
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMember.cpp](source/DNFServer/GameServer/Monitor/DNFMember.cpp)（约第 326 行）：

```cpp
unsigned int CMember::GetLowerMemberCount() const
{
    return (unsigned int)*(unsigned char*)((char*)this + 0x2d);
}
```

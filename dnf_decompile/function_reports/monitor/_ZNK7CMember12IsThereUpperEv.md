# _ZNK7CMember12IsThereUpperEv

`CMember::IsThereUpper() const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8099594` | `0x10` | `0x80603ea` | `0x15` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,8 +1,10 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-mov    0x6(%eax),%eax
+add    $0x6,%eax
+mov    (%eax),%eax
 test   %eax,%eax
 setne  %al
+movzbl %al,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMember::IsThereUpper() const */

undefined4 __thiscall CMember::_ZNK7CMember12IsThereUpperEv(CMember *this)

{
  return CONCAT31((int3)((uint)*(int *)(this + 6) >> 8),*(int *)(this + 6) != 0);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMember.cpp](source/DNFServer/GameServer/Monitor/DNFMember.cpp)（约第 190 行）：

```cpp
    if (!IsThereUpper() && m_dbInfo.m_count27 == 0)
    {
        return 1;
    }
```

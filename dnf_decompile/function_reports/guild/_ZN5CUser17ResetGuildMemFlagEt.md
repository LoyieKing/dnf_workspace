# _ZN5CUser17ResetGuildMemFlagEt

`CUser::ResetGuildMemFlag(unsigned short)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8067786` | `0x27` | `0x8089d62` | `0x25` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,15 +1,14 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x4,%esp
 mov    0xc(%ebp),%eax
 mov    %ax,-0x4(%ebp)
 mov    0x8(%ebp),%eax
 movzwl 0x48(%eax),%eax
 movzwl -0x4(%ebp),%edx
 not    %edx
-and    %edx,%eax
-mov    %eax,%edx
+and    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %dx,0x48(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::ResetGuildMemFlag(unsigned short) */

void __thiscall CUser::_ZN5CUser17ResetGuildMemFlagEt(CUser *this,ushort param_1)

{
  *(ushort *)(this + 0x48) = *(ushort *)(this + 0x48) & ~param_1;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUser.cpp](source/DNFServer/GameServer/Guild/DNFUser.cpp)（约第 503 行）：

```cpp
void CUser::ResetGuildMemFlag(unsigned short flag)
{
    m_field48 &= (unsigned short)~flag;
}
```

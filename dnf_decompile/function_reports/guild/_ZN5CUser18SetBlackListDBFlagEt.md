# _ZN5CUser18SetBlackListDBFlagEt

`CUser::SetBlackListDBFlag(unsigned short)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808add0` | `0x23` | `0x808a024` | `0x1a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,13 +1,10 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x4,%esp
 mov    0xc(%ebp),%eax
 mov    %ax,-0x4(%ebp)
 mov    0x8(%ebp),%eax
-movzwl 0x7c(%eax),%eax
-mov    %eax,%edx
-or     -0x4(%ebp),%dx
-mov    0x8(%ebp),%eax
+movzwl -0x4(%ebp),%edx
 mov    %dx,0x7c(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::SetBlackListDBFlag(unsigned short) */

void __thiscall CUser::_ZN5CUser18SetBlackListDBFlagEt(CUser *this,ushort param_1)

{
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | param_1;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUser.cpp](source/DNFServer/GameServer/Guild/DNFUser.cpp)（约第 629 行）：

```cpp
void CUser::SetBlackListDBFlag(unsigned short flag)
{
    m_field7c = flag;
}
```

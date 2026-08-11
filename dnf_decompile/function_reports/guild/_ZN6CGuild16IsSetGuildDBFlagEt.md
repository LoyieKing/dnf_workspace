# _ZN6CGuild16IsSetGuildDBFlagEt

`CGuild::IsSetGuildDBFlag(unsigned short)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808aeb8` | `0x21` | `0x8052adc` | `0x20` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,12 +1,12 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x4,%esp
 mov    0xc(%ebp),%eax
 mov    %ax,-0x4(%ebp)
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 and    -0x4(%ebp),%ax
-cmp    -0x4(%ebp),%ax
-sete   %al
+test   %ax,%ax
+setne  %al
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::IsSetGuildDBFlag(unsigned short) */

undefined2 __thiscall CGuild::_ZN6CGuild16IsSetGuildDBFlagEt(CGuild *this,ushort param_1)

{
  return CONCAT11((char)((*(ushort *)(this + 0x1c) & param_1) >> 8),
                  (*(ushort *)(this + 0x1c) & param_1) == param_1);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 237 行）：

```cpp
bool CGuild::IsSetGuildDBFlag(unsigned short flag)
{
    return (m_field1c & flag) != 0;
}
```

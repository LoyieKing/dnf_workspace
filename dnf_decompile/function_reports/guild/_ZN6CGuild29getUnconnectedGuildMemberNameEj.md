# _ZN6CGuild29getUnconnectedGuildMemberNameEj

`CGuild::getUnconnectedGuildMemberName(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809106c` | `0x84` | `0x8056df2` | `0x82` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,46 +1,44 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild29getUnconnectedGuildMemberNameEj+0x7d>
+je     <T> <_ZN6CGuild29getUnconnectedGuildMemberNameEj+0x28>
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x10,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild29getUnconnectedGuildMemberNameEj+0x7d>
+jne    <T> <_ZN6CGuild29getUnconnectedGuildMemberNameEj+0x2f>
+mov    $0x0,%eax
+jmp    <T> <_ZN6CGuild29getUnconnectedGuildMemberNameEj+0x80>
 movl   $0x0,-0x4(%ebp)
-jmp    <T> <_ZN6CGuild29getUnconnectedGuildMemberNameEj+0x69>
+jmp    <T> <_ZN6CGuild29getUnconnectedGuildMemberNameEj+0x67>
+mov    0x8(%ebp),%eax
 mov    -0x4(%ebp),%edx
-mov    0x8(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x6,%eax
+shl    $0x6,%edx
+add    $0xdd,%edx
 add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0xd0,%eax
-mov    0xd(%eax),%eax
+mov    (%eax),%eax
 cmp    0xc(%ebp),%eax
-jne    <T> <_ZN6CGuild29getUnconnectedGuildMemberNameEj+0x65>
+jne    <T> <_ZN6CGuild29getUnconnectedGuildMemberNameEj+0x63>
+mov    0x8(%ebp),%eax
 mov    -0x4(%ebp),%edx
-mov    %edx,%eax
-shl    $0x6,%eax
+shl    $0x6,%edx
+add    $0xe1,%edx
 add    %edx,%eax
-add    $0xd0,%eax
-add    0x8(%ebp),%eax
-add    $0x11,%eax
-jmp    <T> <_ZN6CGuild29getUnconnectedGuildMemberNameEj+0x82>
+jmp    <T> <_ZN6CGuild29getUnconnectedGuildMemberNameEj+0x80>
 addl   $0x1,-0x4(%ebp)
 mov    0x8(%ebp),%eax
 movzwl 0x1e(%eax),%eax
 movzwl %ax,%eax
 cmp    -0x4(%ebp),%eax
 setg   %al
 test   %al,%al
-jne    <T> <_ZN6CGuild29getUnconnectedGuildMemberNameEj+0x31>
+jne    <T> <_ZN6CGuild29getUnconnectedGuildMemberNameEj+0x38>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::getUnconnectedGuildMemberName(unsigned int) */

CGuild * __thiscall CGuild::_ZN6CGuild29getUnconnectedGuildMemberNameEj(CGuild *this,uint param_1)

{
  int local_8;
  
  if (((*(ushort *)(this + 0x1c) & 4) != 0) && ((*(ushort *)(this + 0x1c) & 0x10) != 0)) {
    for (local_8 = 0; local_8 < (int)(uint)*(ushort *)(this + 0x1e); local_8 = local_8 + 1) {
      if (*(uint *)(this + local_8 * 0x41 + 0xdd) == param_1) {
        return this + local_8 * 0x41 + 0xe1;
      }
    }
  }
  return (CGuild *)0x0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 1685 行）：

```cpp
char* CGuild::getUnconnectedGuildMemberName(unsigned int charNo)
{
    if ((m_field1c & 4) == 0 || (m_field1c & 0x10) == 0)
    {
        return 0;
    }
    for (int i = 0; i < m_field1e; i++)
    {
        if (*(unsigned int*)((char*)this + i * 0x40 + 0xdd) == charNo)
        {
            return (char*)this + i * 0x40 + 0xe1;
        }
    }
    return 0;
}
```

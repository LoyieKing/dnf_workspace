# _ZN6CGuild29getUnconnectedGuildMemberNameEj

`CGuild::getUnconnectedGuildMemberName(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809106c` | `0x84` | `0x8056b94` | `0x84` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,46 +1,46 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
 je     <T> <_ZN6CGuild29getUnconnectedGuildMemberNameEj+0x7d>
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x10,%eax
 test   %eax,%eax
 je     <T> <_ZN6CGuild29getUnconnectedGuildMemberNameEj+0x7d>
 movl   $0x0,-0x4(%ebp)
 jmp    <T> <_ZN6CGuild29getUnconnectedGuildMemberNameEj+0x69>
+mov    0x8(%ebp),%ecx
 mov    -0x4(%ebp),%edx
-mov    0x8(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
 lea    (%ecx,%eax,1),%eax
 add    $0xd0,%eax
 mov    0xd(%eax),%eax
 cmp    0xc(%ebp),%eax
 jne    <T> <_ZN6CGuild29getUnconnectedGuildMemberNameEj+0x65>
+mov    0x8(%ebp),%ecx
 mov    -0x4(%ebp),%edx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
-add    $0xd0,%eax
-add    0x8(%ebp),%eax
-add    $0x11,%eax
+add    $0xe1,%eax
+lea    (%ecx,%eax,1),%eax
 jmp    <T> <_ZN6CGuild29getUnconnectedGuildMemberNameEj+0x82>
 addl   $0x1,-0x4(%ebp)
 mov    0x8(%ebp),%eax
 movzwl 0x1e(%eax),%eax
 movzwl %ax,%eax
 cmp    -0x4(%ebp),%eax
 setg   %al
 test   %al,%al
 jne    <T> <_ZN6CGuild29getUnconnectedGuildMemberNameEj+0x31>
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

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 1795 行）：

```cpp
char* CGuild::getUnconnectedGuildMemberName(unsigned int charNo)
{
    if ((m_guildDBFlag & 4) != 0)
    {
        if ((m_guildDBFlag & 0x10) != 0)
        {
            for (int i = 0; i < m_totalCnt; i++)
            {
                if (((CGuildMemberMainArray*)this)->m_members[i].m_charNo == charNo)
                {
                    return (char*)(i * 0x41 + 0xd0 + (char*)this + 0x11);
                }
            }
        }
    }
    return 0;
}
```

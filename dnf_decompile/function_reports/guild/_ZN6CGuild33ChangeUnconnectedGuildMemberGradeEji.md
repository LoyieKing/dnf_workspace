# _ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji

`CGuild::ChangeUnconnectedGuildMemberGrade(unsigned int, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8090fe0` | `0x8c` | `0x8056b98` | `0x8a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,51 +1,49 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji+0x86>
+je     <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji+0x88>
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x10,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji+0x86>
-movl   $0x0,-0x8(%ebp)
-jmp    <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji+0x72>
-mov    -0x8(%ebp),%edx
+je     <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji+0x88>
+mov    0x8(%ebp),%eax
+add    $0x1e,%eax
+movzwl (%eax),%eax
+mov    %ax,-0x6(%ebp)
+movl   $0x0,-0x4(%ebp)
+jmp    <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji+0x7a>
 mov    0x8(%ebp),%ecx
+mov    -0x4(%ebp),%edx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
+add    $0xdd,%eax
 lea    (%ecx,%eax,1),%eax
-add    $0xd0,%eax
-mov    0xd(%eax),%eax
+mov    (%eax),%eax
 cmp    0xc(%ebp),%eax
-jne    <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji+0x6e>
-mov    -0x8(%ebp),%edx
-mov    0x10(%ebp),%eax
-mov    %eax,%ecx
-mov    0x8(%ebp),%ebx
+jne    <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji+0x76>
+mov    0x8(%ebp),%ecx
+mov    -0x4(%ebp),%edx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
-lea    (%ebx,%eax,1),%eax
-add    $0xf0,%eax
-mov    %cl,0x14(%eax)
-jmp    <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji+0x86>
-addl   $0x1,-0x8(%ebp)
-mov    0x8(%ebp),%eax
-movzwl 0x1e(%eax),%eax
-movzwl %ax,%eax
-cmp    -0x8(%ebp),%eax
+add    $0x104,%eax
+lea    (%ecx,%eax,1),%edx
+mov    0x10(%ebp),%eax
+mov    %al,(%edx)
+jmp    <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji+0x88>
+addl   $0x1,-0x4(%ebp)
+movzwl -0x6(%ebp),%eax
+cmp    -0x4(%ebp),%eax
 setg   %al
 test   %al,%al
-jne    <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji+0x32>
-add    $0x10,%esp
-pop    %ebx
-pop    %ebp
+jne    <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji+0x3e>
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::ChangeUnconnectedGuildMemberGrade(unsigned int, int) */

void __thiscall
CGuild::_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji(CGuild *this,uint param_1,int param_2)

{
  int local_c;
  
  if (((*(ushort *)(this + 0x1c) & 4) != 0) && ((*(ushort *)(this + 0x1c) & 0x10) != 0)) {
    for (local_c = 0; local_c < (int)(uint)*(ushort *)(this + 0x1e); local_c = local_c + 1) {
      if (*(uint *)(this + local_c * 0x41 + 0xdd) == param_1) {
        this[local_c * 0x41 + 0x104] = SUB41(param_2,0);
        return;
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 1695 行）：

```cpp
void CGuild::ChangeUnconnectedGuildMemberGrade(unsigned int charNo, int grade)
{
    if ((m_field1c & 4) != 0 && (m_field1c & 0x10) != 0)
    {
        unsigned short cnt = *(unsigned short*)((char*)this + 0x1e);
        for (int i = 0; i < (int)cnt; i++)
        {
            if (*(unsigned int*)((char*)this + i * 0x41 + 0xdd) == charNo)
            {
                *(unsigned char*)((char*)this + i * 0x41 + 0x104) = (unsigned char)grade;
                return;
            }
        }
    }
}
```

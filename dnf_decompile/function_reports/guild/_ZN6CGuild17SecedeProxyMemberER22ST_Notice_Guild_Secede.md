# _ZN6CGuild17SecedeProxyMemberER22ST_Notice_Guild_Secede

`CGuild::SecedeProxyMember(ST_Notice_Guild_Secede&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8090cd6` | `0x151` | `0x805680c` | `0x143` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,110 +1,103 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x20,%esp
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild17SecedeProxyMemberER22ST_Notice_Guild_Secede+0x14a>
+je     <T> <_ZN6CGuild17SecedeProxyMemberER22ST_Notice_Guild_Secede+0x43>
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x10,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild17SecedeProxyMemberER22ST_Notice_Guild_Secede+0x14a>
+je     <T> <_ZN6CGuild17SecedeProxyMemberER22ST_Notice_Guild_Secede+0x43>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
+xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN6CGuild17SecedeProxyMemberER22ST_Notice_Guild_Secede+0x146>
+je     <T> <_ZN6CGuild17SecedeProxyMemberER22ST_Notice_Guild_Secede+0x43>
+mov    $0x1,%eax
+jmp    <T> <_ZN6CGuild17SecedeProxyMemberER22ST_Notice_Guild_Secede+0x48>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN6CGuild17SecedeProxyMemberER22ST_Notice_Guild_Secede+0x13c>
 mov    0x8(%ebp),%eax
-add    $0x1e,%eax
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
-movzwl (%eax),%eax
-cmp    $0x12c,%ax
-ja     <T> <_ZN6CGuild17SecedeProxyMemberER22ST_Notice_Guild_Secede+0x149>
+movzwl 0x1e(%eax),%eax
+mov    %ax,-0xe(%ebp)
+cmpw   $0x12c,-0xe(%ebp)
+ja     <T> <_ZN6CGuild17SecedeProxyMemberER22ST_Notice_Guild_Secede+0x13c>
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN6CGuild17SecedeProxyMemberER22ST_Notice_Guild_Secede+0x12d>
+jmp    <T> <_ZN6CGuild17SecedeProxyMemberER22ST_Notice_Guild_Secede+0x12a>
+mov    0x8(%ebp),%ecx
 mov    -0xc(%ebp),%edx
-mov    0x8(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
+add    $0xdd,%eax
 lea    (%ecx,%eax,1),%eax
-add    $0xd0,%eax
-mov    0xd(%eax),%edx
+mov    (%eax),%eax
+mov    %eax,%edx
 mov    0xc(%ebp),%eax
 mov    0x8(%eax),%eax
 cmp    %eax,%edx
-jne    <T> <_ZN6CGuild17SecedeProxyMemberER22ST_Notice_Guild_Secede+0x129>
-mov    -0x10(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%eax
-sub    -0xc(%ebp),%eax
+jne    <T> <_ZN6CGuild17SecedeProxyMemberER22ST_Notice_Guild_Secede+0x126>
+movzwl -0xe(%ebp),%edx
+mov    -0xc(%ebp),%eax
+mov    %edx,%ecx
+sub    %eax,%ecx
+mov    %ecx,%eax
 cmp    $0x1,%eax
-je     <T> <_ZN6CGuild17SecedeProxyMemberER22ST_Notice_Guild_Secede+0xf7>
-mov    -0x10(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%eax
-sub    -0xc(%ebp),%eax
-lea    -0x1(%eax),%edx
+je     <T> <_ZN6CGuild17SecedeProxyMemberER22ST_Notice_Guild_Secede+0xfb>
+movzwl -0xe(%ebp),%edx
+mov    -0xc(%ebp),%eax
+sub    %eax,%edx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
-mov    %eax,%ecx
-mov    0x8(%ebp),%eax
-lea    0xdd(%eax),%ebx
+lea    -0x41(%eax),%ebx
 mov    -0xc(%ebp),%eax
 lea    0x1(%eax),%edx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
-add    %eax,%ebx
-mov    0x8(%ebp),%eax
-lea    0xdd(%eax),%esi
+add    $0xdd,%eax
+mov    %eax,%ecx
+add    0x8(%ebp),%ecx
+mov    0x8(%ebp),%esi
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
+add    $0xdd,%eax
 lea    (%esi,%eax,1),%eax
-mov    %ecx,0x8(%esp)
-mov    %ebx,0x4(%esp)
+mov    %ebx,0x8(%esp)
+mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memmove>
-mov    -0x10(%ebp),%eax
-movzwl (%eax),%eax
-lea    -0x1(%eax),%edx
-mov    -0x10(%ebp),%eax
-mov    %dx,(%eax)
-mov    -0x10(%ebp),%eax
-movzwl (%eax),%eax
-cmp    $0x12c,%ax
-jbe    <T> <_ZN6CGuild17SecedeProxyMemberER22ST_Notice_Guild_Secede+0x11a>
-mov    -0x10(%ebp),%eax
-movw   $0x0,(%eax)
-mov    -0x10(%ebp),%eax
-movzwl (%eax),%edx
+subw   $0x1,-0xe(%ebp)
+cmpw   $0x12c,-0xe(%ebp)
+jbe    <T> <_ZN6CGuild17SecedeProxyMemberER22ST_Notice_Guild_Secede+0x10e>
+movw   $0x0,-0xe(%ebp)
 mov    0x8(%ebp),%eax
+movzwl -0xe(%ebp),%edx
+mov    %dx,0x1e(%eax)
+mov    0x8(%ebp),%eax
+movzwl -0xe(%ebp),%edx
 mov    %dx,0x42(%eax)
-jmp    <T> <_ZN6CGuild17SecedeProxyMemberER22ST_Notice_Guild_Secede+0x14a>
+jmp    <T> <_ZN6CGuild17SecedeProxyMemberER22ST_Notice_Guild_Secede+0x13c>
 addl   $0x1,-0xc(%ebp)
-mov    -0x10(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%eax
+movzwl -0xe(%ebp),%eax
 cmp    -0xc(%ebp),%eax
 setg   %al
 test   %al,%al
-jne    <T> <_ZN6CGuild17SecedeProxyMemberER22ST_Notice_Guild_Secede+0x6a>
-jmp    <T> <_ZN6CGuild17SecedeProxyMemberER22ST_Notice_Guild_Secede+0x14a>
-nop
-jmp    <T> <_ZN6CGuild17SecedeProxyMemberER22ST_Notice_Guild_Secede+0x14a>
-nop
+jne    <T> <_ZN6CGuild17SecedeProxyMemberER22ST_Notice_Guild_Secede+0x73>
 add    $0x20,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::SecedeProxyMember(ST_Notice_Guild_Secede&) */

void __thiscall
CGuild::_ZN6CGuild17SecedeProxyMemberER22ST_Notice_Guild_Secede
          (CGuild *this,ST_Notice_Guild_Secede *param_1)

{
  char cVar1;
  CGuild *pCVar2;
  int local_10;
  
  if (((((*(ushort *)(this + 0x1c) & 4) != 0) && ((*(ushort *)(this + 0x1c) & 0x10) != 0)) &&
      (cVar1 = std::
               map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
               ::empty((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                        *)this), cVar1 == '\0')) &&
     (pCVar2 = this + 0x1e, *(ushort *)pCVar2 < 0x12d)) {
    for (local_10 = 0; local_10 < (int)(uint)*(ushort *)pCVar2; local_10 = local_10 + 1) {
      if (*(int *)(this + local_10 * 0x41 + 0xdd) == *(int *)(param_1 + 8)) {
        if ((uint)*(ushort *)pCVar2 - local_10 != 1) {
          memmove(this + local_10 * 0x41 + 0xdd,this + (local_10 + 1) * 0x41 + 0xdd,
                  (((uint)*(ushort *)pCVar2 - local_10) + -1) * 0x41);
        }
        *(ushort *)pCVar2 = *(ushort *)pCVar2 - 1;
        if (300 < *(ushort *)pCVar2) {
          *(ushort *)pCVar2 = 0;
        }
        *(ushort *)(this + 0x42) = *(ushort *)pCVar2;
        return;
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 1709 行）：

```cpp
void CGuild::SecedeProxyMember(ST_Notice_Guild_Secede& info)
{
    if ((m_guildDBFlag & 4) != 0 && (m_guildDBFlag & 0x10) != 0 && !m_members.empty())
    {
        unsigned short cnt = m_totalCnt;
        if (cnt < 0x12d)
        {
            for (int i = 0; i < (int)cnt; i++)
            {
                if (*(int*)((char*)this + i * 0x41 + 0xdd) == info.m_charNo)
                {
                    if ((unsigned int)cnt - (unsigned int)i != 1)
                    {
                        memmove((char*)this + i * 0x41 + 0xdd,
                                (char*)this + (i + 1) * 0x41 + 0xdd,
                                ((unsigned int)cnt - (unsigned int)i - 1) * 0x41);
                    }
                    cnt--;
                    if (300 < cnt)
                    {
                        cnt = 0;
                    }
                    m_totalCnt = cnt;
                    m_dbInfo.m_info.m_totalCnt = cnt;
                    return;
                }
            }
        }
    }
}
```

# _ZN6CGuild14AddGuildMemberER21ST_Notice_Guild_EnterP5CUser

`CGuild::AddGuildMember(ST_Notice_Guild_Enter&, CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8090b68` | `0x16e` | `0x80565cc` | `0x154` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,118 +1,107 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 cmpl   $0x0,0x10(%ebp)
-je     <T> <_ZN6CGuild14AddGuildMemberER21ST_Notice_Guild_EnterP5CUser+0x164>
+je     <T> <_ZN6CGuild14AddGuildMemberER21ST_Notice_Guild_EnterP5CUser+0x3e>
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild14AddGuildMemberER21ST_Notice_Guild_EnterP5CUser+0x168>
+je     <T> <_ZN6CGuild14AddGuildMemberER21ST_Notice_Guild_EnterP5CUser+0x3e>
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x10,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild14AddGuildMemberER21ST_Notice_Guild_EnterP5CUser+0x168>
+je     <T> <_ZN6CGuild14AddGuildMemberER21ST_Notice_Guild_EnterP5CUser+0x3e>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
 test   %al,%al
-jne    <T> <_ZN6CGuild14AddGuildMemberER21ST_Notice_Guild_EnterP5CUser+0x167>
+je     <T> <_ZN6CGuild14AddGuildMemberER21ST_Notice_Guild_EnterP5CUser+0x45>
+mov    $0x1,%eax
+jmp    <T> <_ZN6CGuild14AddGuildMemberER21ST_Notice_Guild_EnterP5CUser+0x4a>
+mov    $0x0,%eax
+test   %al,%al
+jne    <T> <_ZN6CGuild14AddGuildMemberER21ST_Notice_Guild_EnterP5CUser+0x14d>
 mov    0x8(%ebp),%eax
-add    $0x1e,%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%edx
+movzwl 0x1e(%eax),%eax
+mov    %ax,-0xa(%ebp)
+movzwl -0xa(%ebp),%edx
 mov    0xc(%ebp),%eax
-mov    0x8(%eax),%ecx
+mov    0x8(%eax),%eax
+mov    %eax,%ecx
 mov    0x8(%ebp),%ebx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
 lea    (%ebx,%eax,1),%eax
 add    $0xd0,%eax
 mov    %ecx,0xd(%eax)
 mov    0xc(%ebp),%eax
 lea    0x23(%eax),%ecx
-mov    -0xc(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%edx
+movzwl -0xa(%ebp),%edx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
 add    $0xd0,%eax
 add    0x8(%ebp),%eax
 add    $0x11,%eax
 movl   $0x1d,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
-mov    -0xc(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%ebx
+movzwl -0xa(%ebp),%ebx
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser6GetJobEv>
 mov    %eax,%edx
 mov    0x8(%ebp),%ecx
 mov    %ebx,%eax
 shl    $0x6,%eax
 add    %ebx,%eax
 lea    (%ecx,%eax,1),%eax
 add    $0xf0,%eax
 mov    %dl,0xf(%eax)
-mov    -0xc(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%ebx
+movzwl -0xa(%ebp),%ebx
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGrowthTypeEv>
 mov    %eax,%edx
 mov    0x8(%ebp),%ecx
 mov    %ebx,%eax
 shl    $0x6,%eax
 add    %ebx,%eax
 lea    (%ecx,%eax,1),%eax
 add    $0xf0,%eax
 mov    %dl,0x10(%eax)
-mov    -0xc(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%ebx
+movzwl -0xa(%ebp),%ebx
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser8GetLevelEv>
-mov    %eax,%edx
+movzbl %al,%edx
 mov    0x8(%ebp),%ecx
 mov    %ebx,%eax
 shl    $0x6,%eax
 add    %ebx,%eax
 lea    (%ecx,%eax,1),%eax
 add    $0xf0,%eax
 mov    %dx,0x11(%eax)
-mov    -0xc(%ebp),%eax
-movzwl (%eax),%eax
-lea    0x1(%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %dx,(%eax)
-mov    -0xc(%ebp),%eax
-movzwl (%eax),%eax
-cmp    $0x12c,%ax
-jbe    <T> <_ZN6CGuild14AddGuildMemberER21ST_Notice_Guild_EnterP5CUser+0x155>
-mov    -0xc(%ebp),%eax
-movw   $0x12c,(%eax)
-mov    -0xc(%ebp),%eax
-movzwl (%eax),%edx
+addw   $0x1,-0xa(%ebp)
+cmpw   $0x12c,-0xa(%ebp)
+jbe    <T> <_ZN6CGuild14AddGuildMemberER21ST_Notice_Guild_EnterP5CUser+0x135>
+movw   $0x12c,-0xa(%ebp)
 mov    0x8(%ebp),%eax
+movzwl -0xa(%ebp),%edx
+mov    %dx,0x1e(%eax)
+mov    0x8(%ebp),%eax
+movzwl -0xa(%ebp),%edx
 mov    %dx,0x42(%eax)
-jmp    <T> <_ZN6CGuild14AddGuildMemberER21ST_Notice_Guild_EnterP5CUser+0x168>
-nop
-jmp    <T> <_ZN6CGuild14AddGuildMemberER21ST_Notice_Guild_EnterP5CUser+0x168>
+jmp    <T> <_ZN6CGuild14AddGuildMemberER21ST_Notice_Guild_EnterP5CUser+0x14e>
 nop
 add    $0x24,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::AddGuildMember(ST_Notice_Guild_Enter&, CUser*) */

void __thiscall
CGuild::_ZN6CGuild14AddGuildMemberER21ST_Notice_Guild_EnterP5CUser
          (CGuild *this,ST_Notice_Guild_Enter *param_1,CUser *param_2)

{
  ushort uVar1;
  char cVar2;
  CGuild CVar3;
  undefined2 uVar4;
  CGuild *pCVar5;
  
  if ((((param_2 != (CUser *)0x0) && ((*(ushort *)(this + 0x1c) & 4) != 0)) &&
      ((*(ushort *)(this + 0x1c) & 0x10) != 0)) &&
     (cVar2 = std::
              map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
              ::empty((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                       *)this), cVar2 == '\0')) {
    pCVar5 = this + 0x1e;
    *(undefined4 *)(this + (uint)*(ushort *)pCVar5 * 0x41 + 0xdd) = *(undefined4 *)(param_1 + 8);
    memcpy(this + (uint)*(ushort *)pCVar5 * 0x41 + 0xe1,param_1 + 0x23,0x1d);
    uVar1 = *(ushort *)pCVar5;
    CVar3 = (CGuild)CUser::GetJob(param_2);
    this[(uint)uVar1 * 0x41 + 0xff] = CVar3;
    uVar1 = *(ushort *)pCVar5;
    CVar3 = (CGuild)CUser::GetGrowthType(param_2);
    this[(uint)uVar1 * 0x41 + 0x100] = CVar3;
    uVar1 = *(ushort *)pCVar5;
    uVar4 = CUser::_ZN5CUser8GetLevelEv(param_2);
    *(undefined2 *)(this + (uint)uVar1 * 0x41 + 0x101) = uVar4;
    *(ushort *)pCVar5 = *(ushort *)pCVar5 + 1;
    if (300 < *(ushort *)pCVar5) {
      *(ushort *)pCVar5 = 300;
    }
    *(ushort *)(this + 0x42) = *(ushort *)pCVar5;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 1673 行）：

```cpp
void CGuild::AddGuildMember(ST_Notice_Guild_Enter& info, CUser* user)
{
    if (user == 0 || (m_guildDBFlag & 4) == 0 || (m_guildDBFlag & 0x10) == 0 || m_members.empty())
    {
        return;
    }
    unsigned short idx = m_totalCnt;
    m_dbInfo.m_members[idx].m_no = info.m_charNo;
    memcpy(m_dbInfo.m_members[idx].m_name, info.m_charName, 0x1d);
    m_dbInfo.m_members[idx].m_job = user->GetJob();
    m_dbInfo.m_members[idx].m_growType = user->GetGrowthType();
    m_dbInfo.m_members[idx].m_lev = user->GetLevel();
    idx++;
    if (300 < idx)
    {
        idx = 300;
    }
    m_totalCnt = idx;
    m_dbInfo.m_info.m_totalCnt = idx;
}
```

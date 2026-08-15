# _ZN6CGuild23LoadGuildOneMemberProxyEP5CUser

`CGuild::LoadGuildOneMemberProxy(CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8090968` | `0x200` | `0x8056318` | `0x1e3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,152 +1,144 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x1f4>
+je     <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x2a>
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x8,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x1f4>
+jne    <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x34>
+mov    $0x0,%eax
+jmp    <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x1dc>
 mov    0x8(%ebp),%eax
 movzwl 0x1e(%eax),%eax
 cmp    $0x12b,%ax
-ja     <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x16e>
+ja     <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x158>
 mov    0x8(%ebp),%eax
 movzwl 0x1e(%eax),%eax
-movzwl %ax,%ebx
+mov    %ax,-0xa(%ebp)
+mov    0x8(%ebp),%esi
+movzwl -0xa(%ebp),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,%edx
-mov    0x8(%ebp),%ecx
 mov    %ebx,%eax
 shl    $0x6,%eax
 add    %ebx,%eax
-lea    (%ecx,%eax,1),%eax
+lea    (%esi,%eax,1),%eax
 add    $0xd0,%eax
 mov    %edx,0xd(%eax)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
 mov    %eax,%ecx
-mov    0x8(%ebp),%eax
-movzwl 0x1e(%eax),%eax
-movzwl %ax,%edx
+mov    0x8(%ebp),%ebx
+movzwl -0xa(%ebp),%edx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
-add    $0xd0,%eax
-add    0x8(%ebp),%eax
-add    $0x11,%eax
+add    $0xe0,%eax
+lea    (%ebx,%eax,1),%eax
+add    $0x1,%eax
 movl   $0x1d,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
-mov    0x8(%ebp),%eax
-movzwl 0x1e(%eax),%eax
-movzwl %ax,%ebx
+mov    0x8(%ebp),%esi
+movzwl -0xa(%ebp),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser6GetJobEv>
 mov    %eax,%edx
-mov    0x8(%ebp),%ecx
 mov    %ebx,%eax
 shl    $0x6,%eax
 add    %ebx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0xf0,%eax
-mov    %dl,0xf(%eax)
-mov    0x8(%ebp),%eax
-movzwl 0x1e(%eax),%eax
-movzwl %ax,%ebx
+lea    (%esi,%eax,1),%eax
+add    $0xff,%eax
+mov    %dl,(%eax)
+mov    0x8(%ebp),%esi
+movzwl -0xa(%ebp),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGrowthTypeEv>
 mov    %eax,%edx
-mov    0x8(%ebp),%ecx
 mov    %ebx,%eax
 shl    $0x6,%eax
 add    %ebx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0xf0,%eax
-mov    %dl,0x10(%eax)
-mov    0x8(%ebp),%eax
-movzwl 0x1e(%eax),%eax
-movzwl %ax,%ebx
+lea    (%esi,%eax,1),%eax
+add    $0x100,%eax
+mov    %dl,(%eax)
+mov    0x8(%ebp),%esi
+movzwl -0xa(%ebp),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser6GetSexEv>
 mov    %eax,%edx
-mov    0x8(%ebp),%ecx
 mov    %ebx,%eax
 shl    $0x6,%eax
 add    %ebx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0xf0,%eax
-mov    %dl,0x13(%eax)
-mov    0x8(%ebp),%eax
-movzwl 0x1e(%eax),%eax
-movzwl %ax,%ebx
+lea    (%esi,%eax,1),%eax
+add    $0x103,%eax
+mov    %dl,(%eax)
+mov    0x8(%ebp),%esi
+movzwl -0xa(%ebp),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser8GetLevelEv>
-mov    %eax,%edx
-mov    0x8(%ebp),%ecx
+movzbl %al,%edx
 mov    %ebx,%eax
 shl    $0x6,%eax
 add    %ebx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0xf0,%eax
-mov    %dx,0x11(%eax)
+lea    (%esi,%eax,1),%eax
+add    $0x100,%eax
+mov    %dx,0x1(%eax)
 mov    0x8(%ebp),%eax
 movzwl 0x1e(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %dx,0x1e(%eax)
 mov    0x8(%ebp),%eax
 movzwl 0x1e(%eax),%eax
 cmp    $0x12b,%ax
-jbe    <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x1df>
+jbe    <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x1c9>
+movl   $0x73d,0x8(%esp)
+movl   $"LoadGuildOneMemberProxy",0x4(%esp)
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x8(%ebp),%eax
 movzwl 0x1e(%eax),%eax
-movzwl %ax,%esi
+movzwl %ax,%edx
 mov    0x8(%ebp),%eax
-mov    0x18(%eax),%ebx
-movl   $0x73d,0x8(%esp)
-movl   $&_ZZN6CGuild23LoadGuildOneMemberProxyEP5CUserE12__FUNCTION__,0x4(%esp)
-lea    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    0x18(%eax),%eax
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"Guild Member Cnt Full Or Over : G Key(%d), Cnt(%d)",0x8(%esp)
 movl   $"./log/GuildErr",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 movzwl 0x1e(%eax),%eax
 cmp    $0x12c,%ax
-jbe    <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x1df>
+jbe    <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x1c9>
 mov    0x8(%ebp),%eax
 movw   $0x12c,0x1e(%eax)
 mov    0x8(%ebp),%eax
 movzwl 0x1e(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %dx,0x42(%eax)
 mov    $0x1,%eax
-jmp    <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x1f9>
-mov    $0x0,%eax
 add    $0x30,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::LoadGuildOneMemberProxy(CUser*) */

undefined4 __thiscall
CGuild::_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser(CGuild *this,CUser *param_1)

{
  ushort uVar1;
  CGuild CVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  void *__src;
  CMyFileLog local_14 [8];
  
  if (((*(ushort *)(this + 0x1c) & 4) == 0) || ((*(ushort *)(this + 0x1c) & 8) == 0)) {
    uVar4 = 0;
  }
  else {
    if (*(ushort *)(this + 0x1e) < 300) {
      uVar1 = *(ushort *)(this + 0x1e);
      uVar4 = CUser::GetUniqCharNo(param_1);
      *(undefined4 *)(this + (uint)uVar1 * 0x41 + 0xdd) = uVar4;
      __src = (void *)CUser::GetCharName(param_1);
      memcpy(this + (uint)*(ushort *)(this + 0x1e) * 0x41 + 0xe1,__src,0x1d);
      uVar1 = *(ushort *)(this + 0x1e);
      CVar2 = (CGuild)CUser::GetJob(param_1);
      this[(uint)uVar1 * 0x41 + 0xff] = CVar2;
      uVar1 = *(ushort *)(this + 0x1e);
      CVar2 = (CGuild)CUser::GetGrowthType(param_1);
      this[(uint)uVar1 * 0x41 + 0x100] = CVar2;
      uVar1 = *(ushort *)(this + 0x1e);
      CVar2 = (CGuild)CUser::_ZN5CUser6GetSexEv(param_1);
      this[(uint)uVar1 * 0x41 + 0x103] = CVar2;
      uVar1 = *(ushort *)(this + 0x1e);
      uVar3 = CUser::_ZN5CUser8GetLevelEv(param_1);
      *(undefined2 *)(this + (uint)uVar1 * 0x41 + 0x101) = uVar3;
      *(short *)(this + 0x1e) = *(short *)(this + 0x1e) + 1;
    }
    if (299 < *(ushort *)(this + 0x1e)) {
      uVar1 = *(ushort *)(this + 0x1e);
      uVar4 = *(undefined4 *)(this + 0x18);
      CMyFileLog::CMyFileLog(local_14,"LoadGuildOneMemberProxy",0x73d);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_14,"./log/GuildErr","Guild Member Cnt Full Or Over : G Key(%d), Cnt(%d)",
                 uVar4,(uint)uVar1);
      if (300 < *(ushort *)(this + 0x1e)) {
        *(undefined2 *)(this + 0x1e) = 300;
      }
    }
    *(undefined2 *)(this + 0x42) = *(undefined2 *)(this + 0x1e);
    uVar4 = 1;
  }
  return uVar4;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 1645 行）：

```cpp
bool CGuild::LoadGuildOneMemberProxy(CUser* user)
{
    if ((m_guildDBFlag & 4) == 0 || (m_guildDBFlag & 8) == 0)
    {
        return 0;
    }
    if (m_totalCnt <= 0x12b)
    {
        unsigned short idx = m_totalCnt;
        ((CGuildMemberMainArray*)this)->m_members[idx].m_charNo = user->GetUniqCharNo();
        memcpy(((CGuildMemberMainArray*)this)->m_members[idx].m_name,
               user->GetCharName(), 0x1d);
        ((CGuildMemberExtraArray*)this)->m_members[idx].m_job = (char)user->GetJob();
        ((CGuildMemberExtraArray*)this)->m_members[idx].m_growth = (char)user->GetGrowthType();
        ((CGuildMemberExtraArray*)this)->m_members[idx].m_sex = (char)user->GetSex();
        ((CGuildMemberExtraArray*)this)->m_members[idx].m_level =
            (unsigned short)user->GetLevel();
        m_totalCnt++;
    }
    if (m_totalCnt > 0x12b)
    {
        CMyFileLog log("LoadGuildOneMemberProxy", 0x73d);
        log("./log/GuildErr", "Guild Member Cnt Full Or Over : G Key(%d), Cnt(%d)", m_guildKey,
            (unsigned int)m_totalCnt);
        if (m_totalCnt > 0x12c)
        {
            m_totalCnt = 0x12c;
        }
    }
    m_dbInfo.m_info.m_totalCnt = m_totalCnt;
    return 1;
}
```

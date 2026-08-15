# _ZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUser

`CGuild::GuildLevelUp(CServerHandler*, CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808e73e` | `0x287` | `0x8054694` | `0x2a1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,172 +1,177 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
-push   %esi
 push   %ebx
-sub    $0x4c,%esp
+sub    $0x54,%esp
 cmpl   $0x0,0x10(%ebp)
-jne    <T> <_ZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUser+0x19>
+jne    <T> <_ZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUser+0x17>
 mov    $0x2,%eax
-jmp    <T> <_ZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUser+0x27f>
+jmp    <T> <_ZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUser+0x29b>
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUser+0x27a>
+je     <T> <_ZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUser+0x296>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11GetMasterIdEv>
 cmp    %eax,%ebx
-je     <T> <_ZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUser+0x68>
+je     <T> <_ZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUser+0x66>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsSubGuildMasterEj>
 test   %al,%al
-je     <T> <_ZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUser+0x6f>
+je     <T> <_ZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUser+0x6d>
 mov    $0x1,%eax
-jmp    <T> <_ZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUser+0x74>
+jmp    <T> <_ZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUser+0x72>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUser+0x27a>
+jne    <T> <_ZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUser+0x80>
+mov    $0x2,%eax
+jmp    <T> <_ZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUser+0x29b>
 mov    0x8(%ebp),%eax
 movzbl 0x3b(%eax),%eax
 movzbl %al,%eax
 add    $0x1,%eax
 cmp    $0x10,%eax
-jle    <T> <_ZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUser+0xdf>
+jle    <T> <_ZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUser+0xe9>
 mov    0x8(%ebp),%eax
 movzbl 0x3b(%eax),%eax
 movzbl %al,%eax
-lea    0x1(%eax),%ebx
+add    $0x1,%eax
+mov    %eax,-0x14(%ebp)
 movl   $0x41d,0x8(%esp)
 movl   $&_ZZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUserE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CGuild::GuildLevelUp Err (%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x3,%eax
-jmp    <T> <_ZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUser+0x27f>
+jmp    <T> <_ZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUser+0x29b>
 mov    0x8(%ebp),%eax
 movzbl 0x3b(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0x3b(%eax)
 mov    0x8(%ebp),%eax
 movzbl 0x3b(%eax),%eax
 movzbl %al,%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13GetGuildBoardEv>
 mov    0x10(%ebp),%edx
 mov    %edx,0xc(%esp)
 mov    %ebx,0x8(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildBoard30sendMessageToDBMW_GuildLevelUPEP14CServerHandleriP5CUser>
 movl   $0x1,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild17GuildSkillPointUpEt>
 mov    0x8(%ebp),%eax
 movzbl 0x3b(%eax),%eax
 cmp    $0x1,%al
-jne    <T> <_ZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUser+0x149>
+jne    <T> <_ZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUser+0x158>
 mov    0x8(%ebp),%eax
-movzbl 0x3c(%eax),%edx
+movzbl 0x3c(%eax),%eax
+mov    %eax,%edx
 or     $0x2,%edx
+mov    0x8(%ebp),%eax
 mov    %dl,0x3c(%eax)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUser+0x1c7>
+je     <T> <_ZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUser+0x1d6>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface10GetGroupNoEv>
 movzbl %al,%eax
 movl   $0x0,0xc(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild9SaveGuildEhP14CServerHandlerj>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface10GetGroupNoEv>
 movzbl %al,%eax
 movl   $0x1,0xc(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild9SaveGuildEhP14CServerHandlerj>
-jmp    <T> <_ZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUser+0x1fd>
+jmp    <T> <_ZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUser+0x20c>
 movl   $0x445,0x8(%esp)
 movl   $&_ZZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUserE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CGuild::GuildLevelUp : pclUser->GetGameServer() == 0",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movl   $0x0,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
 mov    0x8(%ebp),%eax
 movzwl 0x62(%eax),%eax
-movzwl %ax,%edi
+mov    %ax,-0x10(%ebp)
 mov    0x8(%ebp),%eax
 movzbl 0x3b(%eax),%eax
-movzbl %al,%esi
+mov    %al,-0xd(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11GetGuildKeyEv>
-mov    %eax,%ebx
+mov    %eax,-0xc(%ebp)
 movl   $0x44a,0x8(%esp)
 movl   $&_ZZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUserE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+movzwl -0x10(%ebp),%edx
+movzbl -0xd(%ebp),%eax
+mov    %edx,0x14(%esp)
+mov    %eax,0x10(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CGuild::GuildLevelUp(%d : %d)GSP(%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUser+0x27f>
+jmp    <T> <_ZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUser+0x29b>
 mov    $0x2,%eax
-add    $0x4c,%esp
+add    $0x54,%esp
 pop    %ebx
-pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::GuildLevelUp(CServerHandler*, CUser*) */

undefined4 __thiscall
CGuild::_ZN6CGuild12GuildLevelUpEP14CServerHandlerP5CUser
          (CGuild *this,CServerHandler *param_1,CUser *param_2)

{
  CGuild CVar1;
  ushort uVar2;
  bool bVar3;
  char cVar4;
  uchar uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  CGuildBoard *this_00;
  CServerInterface *pCVar9;
  undefined4 uVar10;
  CMyFileLog local_34 [8];
  CMyFileLog local_2c [8];
  CMyFileLog local_24 [20];
  
  if (param_2 == (CUser *)0x0) {
    return 2;
  }
  if ((*(ushort *)(this + 0x1c) & 4) == 0) {
    return 2;
  }
  iVar6 = CUser::GetUniqCharNo(param_2);
  iVar7 = GetMasterId(this);
  if (iVar6 != iVar7) {
    uVar8 = CUser::GetUniqCharNo(param_2);
    cVar4 = IsSubGuildMaster(this,uVar8);
    if (cVar4 == '\0') {
      bVar3 = false;
      goto LAB_0808e7b2;
    }
  }
  bVar3 = true;
LAB_0808e7b2:
  if (!bVar3) {
    return 2;
  }
  if ((byte)this[0x3b] + 1 < 0x11) {
    this[0x3b] = (CGuild)((char)this[0x3b] + '\x01');
    CVar1 = this[0x3b];
    this_00 = (CGuildBoard *)GetGuildBoard(this);
    CGuildBoard::_ZN11CGuildBoard30sendMessageToDBMW_GuildLevelUPEP14CServerHandleriP5CUser
              (this_00,param_1,(uint)(byte)CVar1,param_2);
    GuildSkillPointUp(this,1);
    if (this[0x3b] == (CGuild)0x1) {
      this[0x3c] = (CGuild)((byte)this[0x3c] | 2);
    }
    iVar6 = CUser::GetGameServer(param_2);
    if (iVar6 == 0) {
      CMyFileLog::CMyFileLog(local_2c,"GuildLevelUp",0x445);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_2c,"./log/Except","CGuild::GuildLevelUp : pclUser->GetGameServer() == 0");
    }
    else {
      pCVar9 = (CServerInterface *)CUser::GetGameServer(param_2);
      uVar5 = CServerInterface::_ZN16CServerInterface10GetGroupNoEv(pCVar9);
      SaveGuild(this,uVar5,param_1,0);
      pCVar9 = (CServerInterface *)CUser::GetGameServer(param_2);
      uVar5 = CServerInterface::_ZN16CServerInterface10GetGroupNoEv(pCVar9);
      SaveGuild(this,uVar5,param_1,1);
    }
    SendGuildInfoToMembers(this,false);
    uVar2 = *(ushort *)(this + 0x62);
    CVar1 = this[0x3b];
    uVar10 = GetGuildKey(this);
    CMyFileLog::CMyFileLog(local_24,"GuildLevelUp",0x44a);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_24,"./log/GuildModify","CGuild::GuildLevelUp(%d : %d)GSP(%d)",uVar10,
               (uint)(byte)CVar1,(uint)uVar2);
    return 0;
  }
  CVar1 = this[0x3b];
  CMyFileLog::CMyFileLog(local_34,"GuildLevelUp",0x41d);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_34,"./log/GuildModify","CGuild::GuildLevelUp Err (%d)",(byte)CVar1 + 1);
  return 3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 1061 行）：

```cpp
int CGuild::GuildLevelUp(CServerHandler* handler, CUser* user)
{
    if (user == 0)
    {
        return 2;
    }
    if ((m_guildDBFlag & 4) != 0)
    {
    if (user->GetUniqCharNo() == GetMasterId() ||
        IsSubGuildMaster(user->GetUniqCharNo()))
    {
    }
    else
    {
        return 2;
    }
    if (m_dbInfo.m_info.m_guildLevel + 1 > 0x10)
    {
        int nextLev = m_dbInfo.m_info.m_guildLevel + 1;
        CMyFileLog log(__FUNCTION__, 0x41d);
        log("./log/GuildModify", "CGuild::GuildLevelUp Err (%d)", nextLev);
        return 3;
    }
    m_dbInfo.m_info.m_guildLevel += 1;
    GetGuildBoard()->sendMessageToDBMW_GuildLevelUP(
        handler, m_dbInfo.m_info.m_guildLevel, user);
    GuildSkillPointUp(1);
    if (m_dbInfo.m_info.m_guildLevel == 1)
    {
        m_dbInfo.m_info.m_flags |= 2;
    }
    if (user->GetGameServer() != 0)
    {
        SaveGuild((unsigned char)user->GetGameServer()->GetGroupNo(), handler, 0);
        SaveGuild((unsigned char)user->GetGameServer()->GetGroupNo(), handler, 1);
    }
    else
    {
        CMyFileLog log(__FUNCTION__, 0x445);
        log("./log/Except", "CGuild::GuildLevelUp : pclUser->GetGameServer() == 0");
    }
    SendGuildInfoToMembers(false);
    {
        unsigned short gsp = m_dbInfo.m_info.m_guildSkillPoint;
        unsigned char lev = m_dbInfo.m_info.m_guildLevel;
        unsigned int key = GetGuildKey();
        CMyFileLog log(__FUNCTION__, 0x44a);
        log("./log/GuildModify", "CGuild::GuildLevelUp(%d : %d)GSP(%d)", key, lev, gsp);
    }
    return 0;
    }
    return 2;
}
```

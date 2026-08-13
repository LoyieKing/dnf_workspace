# _ZN13CPowerManager23SendPowerWarProcessInfoEj

`CPowerManager::SendPowerWarProcessInfo(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a4e5c` | `0x252` | `0x809b578` | `0x252` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,152 +1,152 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x74,%esp
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_UserManagerEv>
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0x18(%ebp)
 cmpl   $0x0,-0x18(%ebp)
 jne    <T> <_ZN13CPowerManager23SendPowerWarProcessInfoEj+0x6f>
 movl   $0x3e2,0x8(%esp)
 movl   $&_ZZN13CPowerManager23SendPowerWarProcessInfoEjE12__FUNCTION__,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::SendPowerWarProcessInfo : 0 == pclUser(%d)",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN13CPowerManager23SendPowerWarProcessInfoEj+0x24c>
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetGuildKeyEv>
 mov    %eax,-0x14(%ebp)
-mov    -0x14(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16Get_GuildManagerEv>
-mov    %ebx,0x4(%esp)
+mov    -0x14(%ebp),%edx
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
 jne    <T> <_ZN13CPowerManager23SendPowerWarProcessInfoEj+0xec>
 movl   $0x3ea,0x8(%esp)
 movl   $&_ZZN13CPowerManager23SendPowerWarProcessInfoEjE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0xc(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::SendPowerWarProcessInfo : 0 == pclGuild(%d), pclUser(%d)",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN13CPowerManager23SendPowerWarProcessInfoEj+0x24c>
 lea    -0x56(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN37Packet_Channel_Power_War_Process_InfoC1Ev>
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
 mov    %eax,-0x4c(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,-0x48(%ebp)
 movl   $0x1,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager13GetPowerScoreE20ENUM_POWER_SIDE_TYPE>
 mov    %eax,-0x44(%ebp)
 movl   $0x2,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager13GetPowerScoreE20ENUM_POWER_SIDE_TYPE>
 mov    %eax,-0x40(%ebp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild12GetPowerSideEv>
 movzbl %al,%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0x3,-0xc(%ebp)
 jne    <T> <_ZN13CPowerManager23SendPowerWarProcessInfoEj+0x157>
 movl   $0x1,-0xc(%ebp)
 jmp    <T> <_ZN13CPowerManager23SendPowerWarProcessInfoEj+0x1bf>
 cmpl   $0x4,-0xc(%ebp)
 jne    <T> <_ZN13CPowerManager23SendPowerWarProcessInfoEj+0x166>
 movl   $0x2,-0xc(%ebp)
 jmp    <T> <_ZN13CPowerManager23SendPowerWarProcessInfoEj+0x1bf>
 cmpl   $0x0,-0xc(%ebp)
 je     <T> <_ZN13CPowerManager23SendPowerWarProcessInfoEj+0x172>
 cmpl   $0x4,-0xc(%ebp)
 jle    <T> <_ZN13CPowerManager23SendPowerWarProcessInfoEj+0x1bf>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild12GetPowerSideEv>
 movzbl %al,%ebx
 movl   $0x3fd,0x8(%esp)
 movl   $&_ZZN13CPowerManager23SendPowerWarProcessInfoEjE12__FUNCTION__,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::SendPowerWarProcessInfo : Invalid Power Side(%d)",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN13CPowerManager23SendPowerWarProcessInfoEj+0x24c>
 mov    -0xc(%ebp),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager20GetUserPowerWarPointE20ENUM_POWER_SIDE_TYPEj>
 mov    %eax,-0x3c(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager12IsPowerWarOnEv>
 test   %al,%al
 je     <T> <_ZN13CPowerManager23SendPowerWarProcessInfoEj+0x224>
+mov    -0xc(%ebp),%eax
 mov    -0x14(%ebp),%edx
-mov    -0xc(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager22GetGuildRankingInPowerE20ENUM_POWER_SIDE_TYPEj>
 mov    %eax,-0x38(%ebp)
 mov    -0xc(%ebp),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager21GetUserRankingInPowerE20ENUM_POWER_SIDE_TYPEj>
 mov    %eax,-0x34(%ebp)
 jmp    <T> <_ZN13CPowerManager23SendPowerWarProcessInfoEj+0x232>
 movl   $0x0,-0x38(%ebp)
 movl   $0x0,-0x34(%ebp)
 lea    -0x56(%ebp),%eax
 movl   $0x26,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
 add    $0x74,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerManager::SendPowerWarProcessInfo(unsigned int) */

void __thiscall
CPowerManager::_ZN13CPowerManager23SendPowerWarProcessInfoEj(CPowerManager *this,uint param_1)

{
  char cVar1;
  uint uVar2;
  Packet_Channel_Power_War_Process_Info local_5a [10];
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  CMyFileLog local_34 [8];
  CMyFileLog local_2c [8];
  CMyFileLog local_24 [8];
  CUser *local_1c;
  undefined4 local_18;
  CGuild *local_14;
  uint local_10;
  
  uVar2 = CApplication::Get_UserManager(*(CApplication **)(this + 4));
  local_1c = (CUser *)CUserManager::FindUser_CharNo(uVar2);
  if (local_1c == (CUser *)0x0) {
    CMyFileLog::CMyFileLog(local_34,"SendPowerWarProcessInfo",0x3e2);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_34,"./log/Power",
               "CPacketTranslater::SendPowerWarProcessInfo : 0 == pclUser(%d)",param_1);
  }
  else {
    local_18 = CUser::GetGuildKey(local_1c);
    uVar2 = CApplication::Get_GuildManager(*(CApplication **)(this + 4));
    local_14 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(uVar2);
    if (local_14 == (CGuild *)0x0) {
      CMyFileLog::CMyFileLog(local_2c,"SendPowerWarProcessInfo",0x3ea);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_2c,"./log/Power",
                 "CPacketTranslater::SendPowerWarProcessInfo : 0 == pclGuild(%d), pclUser(%d)",
                 local_18,param_1);
    }
    else {
      Packet_Channel_Power_War_Process_Info::Packet_Channel_Power_War_Process_Info(local_5a);
      local_50 = CUser::GetIdByChannel(local_1c);
      local_4c = param_1;
      local_48 = _ZN13CPowerManager13GetPowerScoreE20ENUM_POWER_SIDE_TYPE(this,1);
      local_44 = _ZN13CPowerManager13GetPowerScoreE20ENUM_POWER_SIDE_TYPE(this,2);
      local_10 = CGuild::GetPowerSide(local_14);
      local_10 = local_10 & 0xff;
      if (local_10 == 3) {
        local_10 = 1;
      }
      else if (local_10 == 4) {
        local_10 = 2;
      }
      else if ((local_10 == 0) || (4 < local_10)) {
        uVar2 = CGuild::GetPowerSide(local_14);
        CMyFileLog::CMyFileLog(local_24,"SendPowerWarProcessInfo",0x3fd);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_24,"./log/Power",
                   "CPacketTranslater::SendPowerWarProcessInfo : Invalid Power Side(%d)",
                   uVar2 & 0xff);
        return;
      }
      local_40 = _ZN13CPowerManager20GetUserPowerWarPointE20ENUM_POWER_SIDE_TYPEj
                           (this,local_10,param_1);
      cVar1 = IsPowerWarOn(this);
      if (cVar1 == '\0') {
        local_3c = 0;
        local_38 = 0;
      }
      else {
        local_3c = _ZN13CPowerManager22GetGuildRankingInPowerE20ENUM_POWER_SIDE_TYPEj
                             (this,local_10,local_18);
        local_38 = _ZN13CPowerManager21GetUserRankingInPowerE20ENUM_POWER_SIDE_TYPEj
                             (this,local_10,param_1);
      }
      CUser::SendToGameserver(local_1c,(char *)local_5a,0x26);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 523 行）：

```cpp
void CPowerManager::SendPowerWarProcessInfo(unsigned int charNo)
{
    CUser* user =
        ((CApplication*)m_field4)->Get_UserManager()->FindUser_CharNo(charNo);
    if (user == 0)
    {
        DNF_LOG_SCOPE_LINE(0x3e2,"./log/Power", "CPacketTranslater::SendPowerWarProcessInfo : 0 == pclUser(%d)",
            charNo);
        return;
    }
    unsigned int guildKey = user->GetGuildKey();
    CGuild* guild = ((CApplication*)m_field4)->Get_GuildManager()->FindGuild(guildKey);
    if (guild == 0)
    {
        DNF_LOG_SCOPE_LINE(0x3ea,"./log/Power",
            "CPacketTranslater::SendPowerWarProcessInfo : 0 == pclGuild(%d), pclUser(%d)",
            guildKey, charNo);
        return;
    }
    Packet_Channel_Power_War_Process_Info pkt;
    pkt.m_idByChannel = user->GetIdByChannel();
    pkt.m_charNo = charNo;
    pkt.m_scoreA = GetPowerScore((ENUM_POWER_SIDE_TYPE)1);
    pkt.m_scoreB = GetPowerScore((ENUM_POWER_SIDE_TYPE)2);
    int side = (int)(unsigned char)guild->GetPowerSide();
    if (side == 3)
    {
        side = 1;
    }
    else if (side == 4)
    {
        side = 2;
    }
    else if (side == 0 || 4 < side)
    {
        DNF_LOG_SCOPE_LINE(0x3fd,"./log/Power", "CPacketTranslater::SendPowerWarProcessInfo : Invalid Power Side(%d)",
            (int)(unsigned char)guild->GetPowerSide());
        return;
    }
    pkt.m_userPoint = GetUserPowerWarPoint((ENUM_POWER_SIDE_TYPE)side, charNo);
    if (IsPowerWarOn())
    {
        pkt.m_guildRank = GetGuildRankingInPower((ENUM_POWER_SIDE_TYPE)side, guildKey);
        pkt.m_userRank = GetUserRankingInPower((ENUM_POWER_SIDE_TYPE)side, charNo);
    }
    else
    {
        pkt.m_guildRank = 0;
        pkt.m_userRank = 0;
    }
    user->SendToGameserver((char*)&pkt, 0x26);
}
```

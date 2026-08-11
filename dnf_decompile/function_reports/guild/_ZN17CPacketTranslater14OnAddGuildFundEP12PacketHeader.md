# _ZN17CPacketTranslater14OnAddGuildFundEP12PacketHeader

`CPacketTranslater::OnAddGuildFund(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80883b2` | `0x328` | `0x807d688` | `0x26c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,209 +1,172 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x70,%esp
+sub    $0x50,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x1c(%ebp)
-movl   $0x0,-0x18(%ebp)
-movl   $0x0,-0x14(%ebp)
+mov    %eax,-0x18(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater14OnAddGuildFundEP12PacketHeader+0x60>
+jne    <T> <_ZN17CPacketTranslater14OnAddGuildFundEP12PacketHeader+0x52>
 movl   $0x1f03,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater14OnAddGuildFundEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnAddGuildFund : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Guild",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater14OnAddGuildFundEP12PacketHeader+0x321>
-mov    -0x1c(%ebp),%eax
-mov    0xf(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+jmp    <T> <_ZN17CPacketTranslater14OnAddGuildFundEP12PacketHeader+0x265>
+mov    -0x18(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%ebx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication15Get_UserManagerEv>
+mov    %ebx,0x4(%esp)
+mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0x14(%ebp)
 cmpl   $0x0,-0x14(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater14OnAddGuildFundEP12PacketHeader+0xc4>
+je     <T> <_ZN17CPacketTranslater14OnAddGuildFundEP12PacketHeader+0xbc>
 movl   $0x1f09,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater14OnAddGuildFundEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnAddGuildFund : 0 == pUser",0x8(%esp)
 movl   $"./log/Guild",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater14OnAddGuildFundEP12PacketHeader+0x321>
-mov    -0x1c(%ebp),%eax
-mov    0x13(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+jmp    <T> <_ZN17CPacketTranslater14OnAddGuildFundEP12PacketHeader+0x265>
+mov    -0x18(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%ebx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication16Get_GuildManagerEv>
+mov    %ebx,0x4(%esp)
+mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater14OnAddGuildFundEP12PacketHeader+0x12b>
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+jne    <T> <_ZN17CPacketTranslater14OnAddGuildFundEP12PacketHeader+0x121>
 movl   $0x1f0f,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater14OnAddGuildFundEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnAddGuildFund : 0 == pGuild",0x8(%esp)
 movl   $"./log/Guild",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater14OnAddGuildFundEP12PacketHeader+0x321>
-mov    -0x1c(%ebp),%eax
-movzbl 0xa(%eax),%eax
+jmp    <T> <_ZN17CPacketTranslater14OnAddGuildFundEP12PacketHeader+0x265>
+mov    -0x18(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 cmp    $0x1,%al
-jne    <T> <_ZN17CPacketTranslater14OnAddGuildFundEP12PacketHeader+0x1f8>
-mov    -0x1c(%ebp),%eax
-mov    0xb(%eax),%eax
+jne    <T> <_ZN17CPacketTranslater14OnAddGuildFundEP12PacketHeader+0x212>
+mov    -0x18(%ebp),%eax
+add    $0xb,%eax
+mov    (%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild18IsAddableGuildFundEj>
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-jne    <T> <_ZN17CPacketTranslater14OnAddGuildFundEP12PacketHeader+0x1a6>
-mov    -0x1c(%ebp),%eax
-mov    0xb(%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN17CPacketTranslater14OnAddGuildFundEP12PacketHeader+0x154>
+mov    $0x1,%eax
+jmp    <T> <_ZN17CPacketTranslater14OnAddGuildFundEP12PacketHeader+0x159>
+mov    $0x0,%eax
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+jne    <T> <_ZN17CPacketTranslater14OnAddGuildFundEP12PacketHeader+0x1b2>
+mov    -0x18(%ebp),%eax
+add    $0xb,%eax
+mov    (%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild12AddGuildFundEj>
-mov    -0x1c(%ebp),%eax
-mov    0xb(%eax),%eax
-mov    %eax,%esi
+mov    -0x18(%ebp),%eax
+add    $0xb,%eax
+mov    (%eax),%esi
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %eax,%ebx
-mov    -0x18(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13GetGuildBoardEv>
 mov    -0x14(%ebp),%edx
 mov    %edx,0xc(%esp)
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildBoard27sendMessageToDBMW_GuildFundEP14CServerHandleriP5CUser>
-lea    -0x5b(%ebp),%eax
+lea    -0x47(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28Packet_Add_Guild_Fund_ResultC1Ev>
+lea    -0x47(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0xc(%ebp),%eax
+mov    %al,(%edx)
+lea    -0x47(%ebp),%eax
+lea    0xb(%eax),%edx
+mov    -0x18(%ebp),%eax
+add    $0xf,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x47(%ebp),%eax
+lea    0xf(%eax),%ebx
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x4c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xf(%eax),%eax
-mov    %eax,-0x50(%ebp)
-mov    -0x10(%ebp),%eax
-mov    %al,-0x51(%ebp)
-lea    -0x5b(%ebp),%eax
+mov    %eax,(%ebx)
+lea    -0x47(%ebp),%eax
 movl   $0x17,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-mov    -0x18(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild23SendGuildInfoToManagersEv>
-jmp    <T> <_ZN17CPacketTranslater14OnAddGuildFundEP12PacketHeader+0x321>
-mov    -0x1c(%ebp),%eax
-movzbl 0xa(%eax),%eax
+jmp    <T> <_ZN17CPacketTranslater14OnAddGuildFundEP12PacketHeader+0x265>
+mov    -0x18(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 cmp    $0x2,%al
-jne    <T> <_ZN17CPacketTranslater14OnAddGuildFundEP12PacketHeader+0x231>
-mov    -0x18(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater14OnAddGuildFundEP12PacketHeader+0x24e>
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild14GetGuildDBInfoEv>
-mov    -0x1c(%ebp),%edx
-mov    0xb(%edx),%edx
-mov    %edx,0xa0(%eax)
+lea    0xa0(%eax),%edx
+mov    -0x18(%ebp),%eax
+add    $0xb,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
 mov    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild25SendGuildInfoToMemberOnlyEP5CUser>
-jmp    <T> <_ZN17CPacketTranslater14OnAddGuildFundEP12PacketHeader+0x321>
-mov    -0x1c(%ebp),%eax
-mov    0xb(%eax),%eax
+jmp    <T> <_ZN17CPacketTranslater14OnAddGuildFundEP12PacketHeader+0x265>
+mov    -0x18(%ebp),%eax
+add    $0xb,%eax
+mov    (%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild12AddGuildFundEj>
-jmp    <T> <_ZN17CPacketTranslater14OnAddGuildFundEP12PacketHeader+0x321>
-cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater14OnAddGuildFundEP12PacketHeader+0x2c7>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-mov    (%eax),%eax
-add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
-movl   $0x1f36,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater14OnAddGuildFundEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnAddGuildFund Exception Break : %s\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater14OnAddGuildFundEP12PacketHeader+0x2c0>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater14OnAddGuildFundEP12PacketHeader+0x321>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-movl   $0x1f3b,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater14OnAddGuildFundEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnAddGuildFund Exception Break\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater14OnAddGuildFundEP12PacketHeader+0x31c>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-add    $0x70,%esp
+add    $0x50,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnAddGuildFund(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater14OnAddGuildFundEP12PacketHeader
               (PacketHeader *param_1)

{
  CServerHandler *pCVar1;
  CGuildBoard *this;
  int iVar2;
  Packet_Add_Guild_Fund_Result local_5f [10];
  undefined1 local_55;
  undefined4 local_54;
  undefined4 local_50;
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [8];
  CMyFileLog local_38 [24];
  PacketHeader *local_20;
  CGuild *local_1c;
  CUser *local_18;
  int local_14;
  
  local_20 = param_1;
  local_1c = (CGuild *)0x0;
  local_18 = (CUser *)0x0;
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 080883ed to 080885f7 has its CatchHandler @ 080885fd */
    CMyFileLog::CMyFileLog(local_48,"OnAddGuildFund",0x1f03);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_48,"./log/Guild","CPacketTranslater::OnAddGuildFund : 0 == m_pclApp");
  }
  else {
    local_18 = (CUser *)CUserManager::FindUser_CharNo((uint)(m_pclApp + 0x10));
    if (local_18 == (CUser *)0x0) {
      CMyFileLog::CMyFileLog(local_40,"OnAddGuildFund",0x1f09);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_40,"./log/Guild","CPacketTranslater::OnAddGuildFund : 0 == pUser");
    }
    else {
      local_1c = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj((uint)(m_pclApp + 0x290));
      if (local_1c == (CGuild *)0x0) {
        CMyFileLog::CMyFileLog(local_38,"OnAddGuildFund",0x1f0f);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_38,"./log/Guild","CPacketTranslater::OnAddGuildFund : 0 == pGuild");
      }
      else if (local_20[10] == (PacketHeader)0x1) {
        local_14 = CGuild::IsAddableGuildFund(local_1c,*(uint *)(local_20 + 0xb));
        if (local_14 == 0) {
          CGuild::AddGuildFund(local_1c,*(uint *)(local_20 + 0xb));
          iVar2 = *(int *)(local_20 + 0xb);
          pCVar1 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
          this = (CGuildBoard *)CGuild::GetGuildBoard(local_1c);
          CGuildBoard::_ZN11CGuildBoard27sendMessageToDBMW_GuildFundEP14CServerHandleriP5CUser
                    (this,pCVar1,iVar2,local_18);
        }
        Packet_Add_Guild_Fund_Result::Packet_Add_Guild_Fund_Result(local_5f);
        local_50 = CUser::GetIdByChannel(local_18);
        local_54 = *(undefined4 *)(local_20 + 0xf);
        local_55 = (undefined1)local_14;
        CUser::SendToGameserver(local_18,(char *)local_5f,0x17);
        CGuild::SendGuildInfoToManagers(local_1c);
      }
      else if (local_20[10] == (PacketHeader)0x2) {
        iVar2 = CGuild::GetGuildDBInfo(local_1c);
        *(undefined4 *)(iVar2 + 0xa0) = *(undefined4 *)(local_20 + 0xb);
        CGuild::SendGuildInfoToMemberOnly(local_1c,local_18);
      }
      else {
        CGuild::AddGuildFund(local_1c,*(uint *)(local_20 + 0xb));
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 5298 行）：

```cpp
void CPacketTranslater::OnAddGuildFund(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1f03, "./log/Guild", "CPacketTranslater::OnAddGuildFund : 0 == m_pclApp");
        return;
    }
    CUser* user;
    if ((user = m_pclApp->Get_UserManager()->FindUser_CharNo(*(unsigned int*)(pb + 0xa))) == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1f09, "./log/Guild", "CPacketTranslater::OnAddGuildFund : 0 == pUser");
        return;
    }
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(*(unsigned int*)(pb + 0xe));
    if (guild == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1f0f, "./log/Guild", "CPacketTranslater::OnAddGuildFund : 0 == pGuild");
        return;
    }
    if ((unsigned char)pb[10] == 1)
    {
        int result = guild->IsAddableGuildFund(*(unsigned int*)(pb + 0xb)) ? 1 : 0;
        if (result == 0)
        {
            guild->AddGuildFund(*(unsigned int*)(pb + 0xb));
            guild->GetGuildBoard()->sendMessageToDBMW_GuildFund(m_pclApp->Get_ServerHandler(),
                                                                *(int*)(pb + 0xb), user);
        }
        Packet_Add_Guild_Fund_Result reply;
        *(unsigned char*)((char*)&reply + 0xa) = (unsigned char)result;
        *(unsigned int*)((char*)&reply + 0xb) = *(unsigned int*)(pb + 0xf);
        *(unsigned int*)((char*)&reply + 0xf) = user->GetIdByChannel();
        user->SendToGameserver((char*)&reply, 0x17);
        guild->SendGuildInfoToManagers();
    }
    else if ((unsigned char)pb[10] == 2)
    {
        *(unsigned int*)((char*)guild->GetGuildDBInfo() + 0xa0) = *(unsigned int*)(pb + 0xb);
        guild->SendGuildInfoToMemberOnly(user);
    }
    else
    {
        guild->AddGuildFund(*(unsigned int*)(pb + 0xb));
    }
}
```

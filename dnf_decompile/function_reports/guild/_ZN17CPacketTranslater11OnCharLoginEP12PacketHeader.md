# _ZN17CPacketTranslater11OnCharLoginEP12PacketHeader

`CPacketTranslater::OnCharLogin(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x80721ce` | `0x4ec` | `0x8068728` | `0x4ec` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,325 +1,325 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0xbc,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 je     <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x4e0>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x24(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x13(%eax),%edx
 mov    -0x24(%ebp),%eax
 movzbl 0x3d(%eax),%eax
 movzbl %al,%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
 add    $0x290,%ecx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN13CGuildManager23IsGuildWarEnterableCharEhj>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x90>
 lea    -0x6a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN30Packet_Monitor_UDP_User_GetoutC1Ev>
 mov    -0x24(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,-0x60(%ebp)
 mov    -0x24(%ebp),%eax
 movzbl 0xe(%eax),%eax
 movzbl %al,%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 lea    -0x6a(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16SendToGameServerEhP12PacketHeader>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x10,%eax
 mov    %eax,-0x20(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager8FindUserEj>
 mov    %eax,-0x2c(%ebp)
 cmpl   $0x0,-0x2c(%ebp)
 setne  %al
 test   %al,%al
 je     <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x347>
 mov    -0x24(%ebp),%eax
 lea    0x1f(%eax),%esi
 mov    -0x24(%ebp),%eax
 mov    0xf(%eax),%ebx
 mov    -0x24(%ebp),%eax
 movzwl 0x19(%eax),%eax
 movswl %ax,%ecx
 mov    -0x24(%ebp),%eax
 movzbl 0x18(%eax),%eax
 movsbl %al,%edx
 mov    -0x24(%ebp),%eax
 movzbl 0x17(%eax),%eax
 movsbl %al,%eax
 mov    %esi,0x14(%esp)
 mov    %ebx,0x10(%esp)
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser18SetUserInfo_CharNoEccsjPc>
 mov    -0x24(%ebp),%eax
 movzbl 0xe(%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0x90(%ebp)
 mov    -0x24(%ebp),%eax
 add    $0x1f,%eax
 mov    %eax,-0x8c(%ebp)
 mov    -0x24(%ebp),%eax
 movzbl 0x17(%eax),%eax
 movsbl %al,%eax
 mov    %eax,-0x88(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x1b(%eax),%eax
 mov    %eax,-0x84(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x13(%eax),%edi
 mov    -0x24(%ebp),%eax
 mov    0xf(%eax),%esi
 mov    -0x24(%ebp),%eax
 mov    0xa(%eax),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
 mov    %eax,%ebx
 movl   $0x1b1,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater11OnCharLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x90(%ebp),%eax
 mov    %eax,0x24(%esp)
 mov    -0x8c(%ebp),%eax
 mov    %eax,0x20(%esp)
 mov    -0x88(%ebp),%eax
 mov    %eax,0x1c(%esp)
 mov    -0x84(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"[CHAR_LOGIN]\tDB ID(%s)\tChar Key(%d)\tGuild K(%d)\tMember K(%d)\tJob(%d)\tname(%s)\tCh No(%d)\tpvp(%d)\n",0x8(%esp)
 movl   $"./log/User",0x4(%esp)
 lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movl   $0x3,0x4(%esp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser15SetUserPosStateEh>
 mov    -0x24(%ebp),%eax
 mov    0x13(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x230>
 mov    -0x24(%ebp),%eax
 mov    0x13(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 lea    0x290(%edx),%ecx
 mov    -0x2c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser>
 mov    %eax,-0x28(%ebp)
 movl   $0x1,0x8(%esp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc>
 mov    -0x24(%ebp),%eax
 lea    0x1f(%eax),%edx
 mov    -0x2c(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager19InsertUser_CharNameEPcP5CUser>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x2af>
 mov    -0x24(%ebp),%eax
 lea    0x1f(%eax),%esi
 mov    -0x24(%ebp),%eax
 mov    0xa(%eax),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
 mov    %eax,%ebx
 movl   $0x1ce,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater11OnCharLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"uDBID(%s) uCharName(%s) is already exist at m_mapCharNameUsers!",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x24(%ebp),%eax
 mov    0xf(%eax),%eax
 mov    -0x2c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager17InsertUser_CharNoEjP5CUser>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x31c>
 mov    -0x24(%ebp),%eax
 lea    0x1f(%eax),%esi
 mov    -0x24(%ebp),%eax
 mov    0xf(%eax),%ebx
 movl   $0x1d2,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater11OnCharLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Insert Fail!\tChar ID : %d\t캐릭터 이름:%s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser7GetDBIDEv>
 mov    %eax,%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication21Get_MemoryCashManagerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN18CMemoryCashManager17DeleteCashObjecctEj>
 jmp    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x4e1>
 mov    -0x24(%ebp),%eax
 add    $0x1f,%eax
 mov    %eax,-0x80(%ebp)
 mov    -0x24(%ebp),%eax
 movzbl 0x17(%eax),%eax
 movsbl %al,%eax
 mov    %eax,-0x7c(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x13(%eax),%edi
 mov    -0x24(%ebp),%eax
 mov    0xf(%eax),%esi
 mov    -0x24(%ebp),%eax
 mov    0xa(%eax),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
 mov    %eax,%ebx
 movl   $0x1d9,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater11OnCharLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x80(%ebp),%eax
 mov    %eax,0x1c(%esp)
 mov    -0x7c(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"[CHAR_LOGIN_ERR]\tDB ID : %s\tChar Key : %d\tGuild Key : %d\tJob : %d\tname : %s\n",0x8(%esp)
 movl   $"./log/User",0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x4e1>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x478>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %eax,0x4(%esp)
 movl   $"CPacketTranslater::OnCharLogin() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %eax,%ebx
 movl   $0x1e5,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater11OnCharLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnCharLogin() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x471>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x4e1>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnCharLogin() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x1eb,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater11OnCharLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnCharLogin() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x4d9>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x4e1>
 nop
 add    $0xbc,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnCharLogin(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader(PacketHeader *param_1)

{
  PacketHeader PVar1;
  PacketHeader PVar2;
  undefined4 uVar3;
  char cVar4;
  CServerHandler *this;
  PacketHeader *pPVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  Packet_Monitor_UDP_User_Getout local_6e [10];
  undefined4 local_64;
  CMyFileLog local_60 [8];
  CMyFileLog local_58 [8];
  CMyFileLog local_50 [8];
  CMyFileLog local_48 [24];
  CUser *local_30;
  CGuild *local_2c;
  PacketHeader *local_28;
  CApplication *local_24;
  
  if (m_pclApp != (CApplication *)0x0) {
    local_28 = param_1;
                    /* try { // try from 08072214 to 0807259e has its CatchHandler @ 080725a4 */
    cVar4 = CGuildManager::_ZN13CGuildManager23IsGuildWarEnterableCharEhj
                      ((CGuildManager *)(m_pclApp + 0x290),(uchar)param_1[0x3d],
                       *(uint *)(param_1 + 0x13));
    if (cVar4 != '\x01') {
      Packet_Monitor_UDP_User_Getout::Packet_Monitor_UDP_User_Getout(local_6e);
      local_64 = *(undefined4 *)(local_28 + 10);
      PVar1 = local_28[0xe];
      this = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
      CServerHandler::_ZN14CServerHandler16SendToGameServerEhP12PacketHeader
                (this,(uchar)PVar1,(PacketHeader *)local_6e);
    }
    local_24 = m_pclApp + 0x10;
    local_30 = (CUser *)CUserManager::FindUser((uint)local_24);
    if (local_30 == (CUser *)0x0) {
      pPVar5 = local_28 + 0x1f;
      PVar1 = local_28[0x17];
      uVar7 = *(undefined4 *)(local_28 + 0x13);
      uVar3 = *(undefined4 *)(local_28 + 0xf);
      uVar9 = NumberToString(*(uint *)(local_28 + 10),0);
      CMyFileLog::CMyFileLog(local_48,"OnCharLogin",0x1d9);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_48,"./log/User",
                 "[CHAR_LOGIN_ERR]\tDB ID : %s\tChar Key : %d\tGuild Key : %d\tJob : %d\tname : %s\n"
                 ,uVar9,uVar3,uVar7,(int)(char)PVar1,pPVar5);
    }
    else {
      CUser::SetUserInfo_CharNo
                (local_30,(char)local_28[0x17],(char)local_28[0x18],*(short *)(local_28 + 0x19),
                 *(uint *)(local_28 + 0xf),(char *)(local_28 + 0x1f));
      PVar1 = local_28[0xe];
      pPVar5 = local_28 + 0x1f;
      PVar2 = local_28[0x17];
      uVar7 = *(undefined4 *)(local_28 + 0x1b);
      uVar3 = *(undefined4 *)(local_28 + 0x13);
      uVar9 = *(undefined4 *)(local_28 + 0xf);
      uVar6 = NumberToString(*(uint *)(local_28 + 10),0);
      CMyFileLog::CMyFileLog(local_60,"OnCharLogin",0x1b1);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_60,"./log/User",
                 "[CHAR_LOGIN]\tDB ID(%s)\tChar Key(%d)\tGuild K(%d)\tMember K(%d)\tJob(%d)\tname(%s)\tCh No(%d)\tpvp(%d)\n"
                 ,uVar6,uVar9,uVar3,uVar7,(int)(char)PVar2,pPVar5,(uint)(byte)PVar1);
      CUser::SetUserPosState(local_30,'\x03');
      if (*(int *)(local_28 + 0x13) != 0) {
        local_2c = (CGuild *)
                   CGuildManager::_ZN13CGuildManager13GuildMemLoginEjP5CUser
                             ((CGuildManager *)(m_pclApp + 0x290),*(uint *)(local_28 + 0x13),
                              local_30);
        CGuild::NoticeGuildMemberLogin_Out(local_2c,local_30,'\x01');
      }
      cVar4 = CUserManager::_ZN12CUserManager19InsertUser_CharNameEPcP5CUser
                        ((CUserManager *)local_24,(char *)(local_28 + 0x1f),local_30);
      if (cVar4 != '\x01') {
        pPVar5 = local_28 + 0x1f;
        uVar7 = NumberToString(*(uint *)(local_28 + 10),0);
        CMyFileLog::CMyFileLog(local_58,"OnCharLogin",0x1ce);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_58,"./log/Except",
                   "uDBID(%s) uCharName(%s) is already exist at m_mapCharNameUsers!",uVar7,pPVar5);
      }
      cVar4 = CUserManager::_ZN12CUserManager17InsertUser_CharNoEjP5CUser
                        ((CUserManager *)local_24,*(uint *)(local_28 + 0xf),local_30);
      if (cVar4 != '\x01') {
        pPVar5 = local_28 + 0x1f;
        uVar7 = *(undefined4 *)(local_28 + 0xf);
        CMyFileLog::CMyFileLog(local_50,"OnCharLogin",0x1d2);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_50,"./log/Except",&DAT_08125ee0,uVar7,pPVar5);
      }
      CUser::GetDBID(local_30);
      uVar8 = CApplication::Get_MemoryCashManager(m_pclApp);
      CMemoryCashManager::DeleteCashObjecct(uVar8);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 445 行）：

```cpp
void CPacketTranslater::OnCharLogin(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            return;
        }
        CUser* user;
        CGuild* guild;
        Packet_Monitor_Char_Info* pb = (Packet_Monitor_Char_Info*)pkt;
        CUserManager* um;
        if ((&m_pclApp->m_guildManager)->IsGuildWarEnterableChar(
                pb->m_war, pb->m_guildKey) != true)
        {
            Packet_Monitor_UDP_User_Getout pktGetout;
            pktGetout.ma = pb->m_serverNo;
            m_pclApp->Get_ServerHandler()->SendToGameServer(pb->m_channel, &pktGetout);
        }
        um = &m_pclApp->m_userManager;
        if ((user = um->FindUser(pb->m_serverNo)) != 0)
        {
            user->SetUserInfo_CharNo((char)pb->m_job, (char)pb->m_pvp, (short)pb->m_level,
                                     pb->m_charKey, pb->m_name);
            DNF_LOG_SCOPE_LINE(0x1b1,"./log/User",
                "[CHAR_LOGIN]\tDB ID(%s)\tChar Key(%d)\tGuild K(%d)\tMember K(%d)\tJob(%d)\tname(%s)\tCh No(%d)\tpvp(%d)\n",
                NumberToString(pb->m_serverNo, 0), pb->m_charKey, pb->m_guildKey,
                pb->m_memberKey, (int)(char)pb->m_job, pb->m_name,
                (unsigned int)pb->m_channel);
            user->SetUserPosState(3);
            if (pb->m_guildKey != 0)
            {
                guild = (&m_pclApp->m_guildManager)->GuildMemLogin(pb->m_guildKey, user);
                guild->NoticeGuildMemberLogin_Out(user, 1);
            }
            if (um->InsertUser_CharName(pb->m_name, user) != 1)
            {
                DNF_LOG_SCOPE_LINE(0x1ce,"./log/Except",
                    "uDBID(%s) uCharName(%s) is already exist at m_mapCharNameUsers!",
                    NumberToString(pb->m_serverNo, 0), pb->m_name);
            }
            if (um->InsertUser_CharNo(pb->m_charKey, user) != 1)
            {
                DNF_LOG_SCOPE_LINE(0x1d2,"./log/Except",
                    "Insert Fail!\tChar ID : %d\t\xc4\xb3\xb8\xaf\xc5\xcd \xc0\xcc\xb8\xa7:%s\n",
                    pb->m_charKey, pb->m_name);
            }
            m_pclApp->Get_MemoryCashManager()->DeleteCashObjecct(user->GetDBID());
        }
        else
        {
            DNF_LOG_SCOPE_LINE(0x1d9,"./log/User",
                "[CHAR_LOGIN_ERR]\tDB ID : %s\tChar Key : %d\tGuild Key : %d\tJob : %d\tname : %s\n",
                NumberToString(pb->m_serverNo, 0), pb->m_charKey, pb->m_guildKey,
                (int)(char)pb->m_job, pb->m_name);
        }
    }
    catch (std::exception& e)
    {
        printf("CPacketTranslater::OnCharLogin() Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x1e5, "./log/Except",
            "CPacketTranslater::OnCharLogin() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnCharLogin() Exception Break");
        DNF_LOG_SCOPE_LINE(0x1eb, "./log/Except",
            "CPacketTranslater::OnCharLogin() Exception Break\n");
    }
}
```

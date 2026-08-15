# _ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader

`CPacketTranslater::OnGuildCargoHistory(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8084102` | `0x342` | `0x807a208` | `0x33f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,204 +1,201 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
 push   %esi
 push   %ebx
-sub    $0x9fc,%esp
+sub    $0x9f0,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x30(%ebp)
+mov    %eax,-0x24(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x56>
+jne    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x55>
 movl   $0x18ec,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x68(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildCargoHistory : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x337>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x2c(%ebp)
-mov    -0x30(%ebp),%eax
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x335>
+mov    -0x24(%ebp),%eax
 mov    0xe(%eax),%eax
+mov    %eax,-0x20(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x10(%eax),%edx
+mov    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-jne    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0xba>
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
+jne    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0xb9>
 movl   $0x18f6,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x60(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildCargoHistory : 0 == pclUser",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x337>
-mov    -0x30(%ebp),%eax
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x335>
+mov    -0x24(%ebp),%eax
 mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+mov    %eax,-0x18(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-jne    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x11c>
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x120>
 movl   $0x18fe,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x58(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildCargoHistory : 0 == pclGuild",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x337>
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x335>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x290,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager11IsCargoLockEv>
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x181>
-mov    -0x30(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x30(%ebp),%eax
-mov    0xe(%eax),%ebx
-movl   $0x1906,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnGuildCargoHistory GUILD CARGO LOCKED!(%d,%d)",0x8(%esp)
-movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x337>
-mov    -0x28(%ebp),%eax
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x216>
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17GetGuildMemDBInfoEv>
 movzbl 0x15(%eax),%eax
-mov    %al,-0x1d(%ebp)
-cmpb   $0x3,-0x1d(%ebp)
-je     <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x1fc>
-cmpb   $0x1,-0x1d(%ebp)
-je     <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x1fc>
-cmpb   $0x2,-0x1d(%ebp)
-je     <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x1fc>
-movzbl -0x1d(%ebp),%edi
-mov    -0x30(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x30(%ebp),%eax
-mov    0xe(%eax),%ebx
-movl   $0x1910,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnGuildCargoHistory : Access Deny(%d,%d,%d)",0x8(%esp)
-movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x337>
-lea    -0x9da(%ebp),%eax
+mov    %al,-0xd(%ebp)
+cmpb   $0x3,-0xd(%ebp)
+je     <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x163>
+cmpb   $0x1,-0xd(%ebp)
+je     <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x163>
+cmpb   $0x2,-0xd(%ebp)
+jne    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x1c5>
+lea    -0x9ce(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN35Packet_Guild_Cargo_History_ResponseC1Ev>
-mov    -0x28(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x9d0(%ebp)
-mov    -0x30(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x9cc(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x9c4(%ebp)
+mov    -0x18(%ebp),%eax
+mov    %eax,-0x9c0(%ebp)
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13GetGuildCargoEv>
-lea    -0x9da(%ebp),%edx
+lea    -0x9ce(%ebp),%edx
 add    $0x12,%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildCargo10GetHistoryEP15STGuildCargoLog>
-lea    -0x9da(%ebp),%eax
+lea    -0x9ce(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x337>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x335>
+movzbl -0xd(%ebp),%ebx
+movl   $0x1910,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %ebx,0x14(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnGuildCargoHistory : Access Deny(%d,%d,%d)",0x8(%esp)
+movl   $"./log/GuildCargo",0x4(%esp)
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x335>
+movl   $0x1906,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x18(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnGuildCargoHistory GUILD CARGO LOCKED!(%d,%d)",0x8(%esp)
+movl   $"./log/GuildCargo",0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x335>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x2dd>
+jne    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x2db>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %eax,%ebx
 movl   $0x191e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnGuildCargoHistory Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x2d6>
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x2d4>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x337>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x335>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1923,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildCargoHistory Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x332>
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x330>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x9fc,%esp
+add    $0x9f0,%esp
 pop    %ebx
 pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnGuildCargoHistory(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  CGuildCargo *this;
  uint uVar5;
  Packet_Guild_Cargo_History_Response local_9de [10];
  undefined4 local_9d4;
  undefined4 local_9d0;
  STGuildCargoLog aSStack_9cc [2400];
  CMyFileLog local_6c [8];
  CMyFileLog local_64 [8];
  CMyFileLog local_5c [8];
  CMyFileLog local_54 [8];
  CMyFileLog local_4c [24];
  PacketHeader *local_34;
  uint local_30;
  CUser *local_2c;
  CGuild *local_28;
  byte local_21;
  
  local_34 = param_1;
  if (m_pclApp == 0) {
                    /* try { // try from 08084133 to 0808435d has its CatchHandler @ 08084363 */
    CMyFileLog::CMyFileLog(local_6c,"OnGuildCargoHistory",0x18ec);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_6c,"./log/GuildCargo","CPacketTranslater::OnGuildCargoHistory : 0 == m_pclApp")
    ;
  }
  else {
    local_30 = m_pclApp + 0x10;
    local_2c = (CUser *)CUserManager::FindUser_CharNo(local_30);
    if (local_2c == (CUser *)0x0) {
      CMyFileLog::CMyFileLog(local_64,"OnGuildCargoHistory",0x18f6);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_64,"./log/GuildCargo","CPacketTranslater::OnGuildCargoHistory : 0 == pclUser"
                );
    }
    else {
      local_28 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290);
      if (local_28 == (CGuild *)0x0) {
        CMyFileLog::CMyFileLog(local_5c,"OnGuildCargoHistory",0x18fe);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_5c,"./log/GuildCargo",
                   "CPacketTranslater::OnGuildCargoHistory : 0 == pclGuild");
      }
      else {
        cVar3 = CGuildManager::_ZN13CGuildManager11IsCargoLockEv
                          ((CGuildManager *)(m_pclApp + 0x290));
        if (cVar3 == '\0') {
          iVar4 = CUser::GetGuildMemDBInfo(local_2c);
          local_21 = *(byte *)(iVar4 + 0x15);
          if (((local_21 == 3) || (local_21 == 1)) || (local_21 == 2)) {
            Packet_Guild_Cargo_History_Response::Packet_Guild_Cargo_History_Response(local_9de);
            local_9d4 = CUser::GetIdByChannel(local_2c);
            local_9d0 = *(undefined4 *)(local_34 + 0xe);
            this = (CGuildCargo *)CGuild::GetGuildCargo(local_28);
            CGuildCargo::_ZN11CGuildCargo10GetHistoryEP15STGuildCargoLog(this,aSStack_9cc);
            CUser::SendTcpGameserver(local_2c,(PacketHeader *)local_9de);
          }
          else {
            uVar5 = (uint)local_21;
            uVar1 = *(undefined4 *)(local_34 + 10);
            uVar2 = *(undefined4 *)(local_34 + 0xe);
            CMyFileLog::CMyFileLog(local_4c,"OnGuildCargoHistory",0x1910);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_4c,"./log/GuildCargo",
                       "CPacketTranslater::OnGuildCargoHistory : Access Deny(%d,%d,%d)",uVar2,uVar1,
                       uVar5);
          }
        }
        else {
          uVar1 = *(undefined4 *)(local_34 + 10);
          uVar2 = *(undefined4 *)(local_34 + 0xe);
          CMyFileLog::CMyFileLog(local_54,"OnGuildCargoHistory",0x1906);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_54,"./log/GuildCargo",
                     "CPacketTranslater::OnGuildCargoHistory GUILD CARGO LOCKED!(%d,%d)",uVar2,uVar1
                    );
        }
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 4456 行）：

```cpp
void CPacketTranslater::OnGuildCargoHistory(PacketHeader* pkt)
{
    Packet_Guild_Cargo_Requst* pb = (Packet_Guild_Cargo_Requst*)pkt;
    try
    {
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x18ec, "./log/GuildCargo", "CPacketTranslater::OnGuildCargoHistory : 0 == m_pclApp");
            return;
        }
        unsigned int charNo = pb->m_charNo;
        CUser* user = (&m_pclApp->m_userManager)->FindUser_CharNo(charNo);
        if (user == 0)
        {
            DNF_LOG_SCOPE_LINE(0x18f6, "./log/GuildCargo", "CPacketTranslater::OnGuildCargoHistory : 0 == pclUser");
            return;
        }
        unsigned int guildKey = pb->m_guildKey;
        CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey);
        if (guild == 0)
        {
            DNF_LOG_SCOPE_LINE(0x18fe, "./log/GuildCargo", "CPacketTranslater::OnGuildCargoHistory : 0 == pclGuild");
            return;
        }
        if ((&m_pclApp->m_guildManager)->IsCargoLock() == 0)
        {
            unsigned char grade = user->GetGuildMemDBInfo()->m_grade;
            if (grade == 3 || grade == 1 || grade == 2)
            {
                Packet_Guild_Cargo_History_Response reply;
                reply.ma = user->GetIdByChannel();
                reply.me = guildKey;
                guild->GetGuildCargo()->GetHistory(reply.m_log);
                user->SendTcpGameserver(&reply);
            }
            else
            {
                DNF_LOG_SCOPE_LINE(0x1910,"./log/GuildCargo",
                    "CPacketTranslater::OnGuildCargoHistory : Access Deny(%d,%d,%d)", charNo,
                    guildKey, (unsigned int)grade);
            }
        }
        else
        {
            DNF_LOG_SCOPE_LINE(0x1906,"./log/GuildCargo",
                "CPacketTranslater::OnGuildCargoHistory GUILD CARGO LOCKED!(%d,%d)", charNo,
                guildKey);
        }
    }
    DNF_CATCH_LOG("./log/Except", "CPacketTranslater::OnGuildCargoHistory Exception Break", 0x191e, 0x1923);
}
```

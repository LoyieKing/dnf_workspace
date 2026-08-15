# _ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader

`CPacketTranslater::OnAddBuddyDBReply(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808797e` | `0x2c0` | `0x8072e14` | `0x2b2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,189 +1,185 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 add    $0xffffff80,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x14(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x52>
+jne    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x4c>
 movl   $0x1032,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnAddBuddyDBReply : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/buddy",0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x2b9>
+jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x2ab>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x10,%eax
-mov    %eax,-0x10(%ebp)
-mov    -0x14(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+mov    0x8(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
 mov    0xa(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x1a8>
-lea    -0x77(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN30Packet_Monitor_Add_Buddy_ReplyC1Ev>
-mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x6d(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x69(%ebp)
-mov    -0x14(%ebp),%eax
-movzbl 0x35(%eax),%eax
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x17c>
-mov    -0x14(%ebp),%eax
-add    $0xe,%eax
 mov    %eax,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN5CUser8AddBuddyER13STBuddyDBInfo>
-mov    -0x14(%ebp),%eax
-add    $0xe,%eax
-movl   $0x27,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x77(%ebp),%eax
-add    $0x12,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-mov    -0x14(%ebp),%eax
-mov    0x30(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x13f>
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
-test   %eax,%eax
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x139>
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
-mov    %eax,(%esp)
-call   <T> <_ZN16CServerInterface12GetChannelNoEv>
-mov    %al,-0x3e(%ebp)
-jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x143>
-movb   $0xff,-0x3e(%ebp)
-jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x143>
-movb   $0xff,-0x3e(%ebp)
-mov    -0x14(%ebp),%eax
-movzbl 0x35(%eax),%eax
-mov    %al,-0x3d(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    -0x14(%ebp),%edx
-mov    0x30(%edx),%edx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
-add    $0x300,%ecx
-mov    %eax,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %ecx,(%esp)
-call   <T> <_ZN21CBuddyRegisterManager16addBuddyRegisterEjj>
-jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x186>
-mov    -0x14(%ebp),%eax
-movzbl 0x35(%eax),%eax
-mov    %al,-0x3d(%ebp)
-movzwl -0x75(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x77(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x2b9>
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0xb6>
 movl   $0x105f,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnAddBuddyDBReply\tpclUser is NULL",0x8(%esp)
 movl   $"./log/buddy",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x2b9>
+jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x2ab>
+lea    -0x77(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN30Packet_Monitor_Add_Buddy_ReplyC1Ev>
+mov    -0x18(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x6d(%ebp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,-0x69(%ebp)
+mov    -0x18(%ebp),%eax
+movzbl 0x35(%eax),%eax
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x1a9>
+mov    -0x18(%ebp),%eax
+add    $0xe,%eax
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser8AddBuddyER13STBuddyDBInfo>
+mov    -0x18(%ebp),%eax
+add    $0xe,%eax
+movl   $0x27,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0x77(%ebp),%eax
+add    $0x12,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+mov    -0x18(%ebp),%eax
+mov    0x30(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+jne    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x140>
+movb   $0xff,-0x3e(%ebp)
+jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x170>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+test   %eax,%eax
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x15a>
+movb   $0xff,-0x3e(%ebp)
+jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x170>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+mov    %eax,(%esp)
+call   <T> <_ZN16CServerInterface12GetChannelNoEv>
+mov    %al,-0x3e(%ebp)
+mov    -0x18(%ebp),%eax
+movzbl 0x35(%eax),%eax
+mov    %al,-0x3d(%ebp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    -0x18(%ebp),%edx
+mov    0x30(%edx),%edx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
+add    $0x300,%ecx
+mov    %eax,0x8(%esp)
+mov    %edx,0x4(%esp)
+mov    %ecx,(%esp)
+call   <T> <_ZN21CBuddyRegisterManager16addBuddyRegisterEjj>
+jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x1b3>
+mov    -0x18(%ebp),%eax
+movzbl 0x35(%eax),%eax
+mov    %al,-0x3d(%ebp)
+movzwl -0x75(%ebp),%eax
+movzwl %ax,%edx
+lea    -0x77(%ebp),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x2ab>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x25f>
+jne    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x251>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x1065,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnAddBuddyDBReply Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x258>
+jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x24a>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x2b9>
+jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x2ab>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x106a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnAddBuddyDBReply Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x2b4>
+jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x2a6>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 sub    $0xffffff80,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnAddBuddyDBReply(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader
               (PacketHeader *param_1)

{
  int iVar1;
  CServerInterface *this;
  Packet_Monitor_Add_Buddy_Reply local_7b [2];
  ushort local_79;
  undefined4 local_71;
  undefined4 local_6d;
  undefined1 auStack_69 [39];
  undefined1 local_42;
  PacketHeader local_41;
  CMyFileLog local_40 [8];
  CMyFileLog local_38 [24];
  CUser *local_20;
  CUser *local_1c;
  PacketHeader *local_18;
  uint local_14;
  
  local_18 = param_1;
  if (m_pclApp == 0) {
                    /* try { // try from 080879ab to 08087b5b has its CatchHandler @ 08087b61 */
    CMyFileLog::CMyFileLog(local_40,"OnAddBuddyDBReply",0x1032);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_40,"./log/buddy","CPacketTranslater::OnAddBuddyDBReply : 0 == m_pclApp");
  }
  else {
    local_14 = m_pclApp + 0x10;
    local_20 = (CUser *)CUserManager::FindUser_CharNo(local_14);
    if (local_20 == (CUser *)0x0) {
      CMyFileLog::CMyFileLog(local_38,"OnAddBuddyDBReply",0x105f);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_38,"./log/buddy","CPacketTranslater::OnAddBuddyDBReply\tpclUser is NULL");
    }
    else {
      Packet_Monitor_Add_Buddy_Reply::Packet_Monitor_Add_Buddy_Reply(local_7b);
      local_71 = *(undefined4 *)(local_18 + 10);
      local_6d = CUser::GetIdByChannel(local_20);
      if (local_18[0x35] == (PacketHeader)0x0) {
        CUser::AddBuddy(local_20,(STBuddyDBInfo *)(local_18 + 0xe));
        memcpy(auStack_69,local_18 + 0xe,0x27);
        local_1c = (CUser *)CUserManager::FindUser_CharNo(local_14);
        if (local_1c == (CUser *)0x0) {
          local_42 = 0xff;
        }
        else {
          iVar1 = CUser::GetGameServer(local_1c);
          if (iVar1 == 0) {
            local_42 = 0xff;
          }
          else {
            this = (CServerInterface *)CUser::GetGameServer(local_1c);
            local_42 = CServerInterface::_ZN16CServerInterface12GetChannelNoEv(this);
          }
        }
        local_41 = local_18[0x35];
        CUser::GetUniqCharNo(local_20);
        CBuddyRegisterManager::addBuddyRegister(m_pclApp + 0x300,*(uint *)(local_18 + 0x30));
      }
      else {
        local_41 = local_18[0x35];
      }
      CUser::SendToGameserver(local_20,(char *)local_7b,(uint)local_79);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 2888 行）：

```cpp
void CPacketTranslater::OnAddBuddyDBReply(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1032, "./log/buddy", "CPacketTranslater::OnAddBuddyDBReply : 0 == m_pclApp");
        }
        else
        {
            CUserManager* userMgr = &m_pclApp->m_userManager;
            Packet_DBMW_Add_Buddy_Reply* db = (Packet_DBMW_Add_Buddy_Reply*)pkt;
            CUser* user = userMgr->FindUser_CharNo(db->m_charNo);
            if (user == 0)
            {
                DNF_LOG_SCOPE_LINE(0x105f, "./log/buddy", "CPacketTranslater::OnAddBuddyDBReply\tpclUser is NULL");
            }
            else
            {
                Packet_Monitor_Add_Buddy_Reply reply;
                reply.m_charNo = db->m_charNo;
                reply.m_idByChannel = user->GetIdByChannel();
                if (db->m_result == 0)
                {
                    user->AddBuddy(db->m_buddy);
                    memcpy(reply.m_name, db->m_buddy.m_name, 0x27);
                    CUser* other =
                        userMgr->FindUser_CharNo(db->m_buddy.m_characNo);
                    if (other == 0)
                    {
                        reply.m_channel = 0xff;
                    }
                    else if (other->GetGameServer() == 0)
                    {
                        reply.m_channel = 0xff;
                    }
                    else
                    {
                        reply.m_channel =
                            ((CServerInterface*)other->GetGameServer())->GetChannelNo();
                    }
                    reply.m_result = (unsigned char)db->m_result;
                    (&m_pclApp->m_buddyMgr)
                        ->addBuddyRegister(db->m_buddy.m_characNo,
                                           user->GetUniqCharNo());
                }
                else
                {
                    reply.m_result = (unsigned char)db->m_result;
                }
                user->SendToGameserver((char*)&reply, reply.packetSize);
            }
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1065, "./log/Except",
            "CPacketTranslater::OnAddBuddyDBReply Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x106a, "./log/Except",
            "CPacketTranslater::OnAddBuddyDBReply Exception Break\n");
    }
}
```

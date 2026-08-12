# _ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader

`CPacketTranslater::OnDelBuddyDBReply(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8087e72` | `0x25d` | `0x807324e` | `0x257` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,159 +1,158 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 add    $0xffffff80,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x14(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x52>
+jne    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x4c>
 movl   $0x10b1,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDelBuddyDBReply : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/buddy",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x256>
+jmp    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x250>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x10,%eax
-mov    %eax,-0x10(%ebp)
-mov    -0x14(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x145>
-lea    -0x69(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN30Packet_Monitor_Del_Buddy_ReplyC1Ev>
-mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x5f(%ebp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x5b(%ebp)
-mov    -0x14(%ebp),%eax
-movzbl 0x30(%eax),%eax
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x11f>
-mov    -0x14(%ebp),%eax
-add    $0x12,%eax
 mov    %eax,0x4(%esp)
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN5CUser8DelBuddyEPc>
-mov    -0x14(%ebp),%eax
-add    $0x12,%eax
-movl   $0x1d,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x69(%ebp),%eax
-add    $0x12,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-mov    -0x14(%ebp),%eax
-movzbl 0x30(%eax),%eax
-mov    %al,-0x39(%ebp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    -0x14(%ebp),%edx
-mov    0xe(%edx),%edx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
-add    $0x300,%ecx
-mov    %eax,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %ecx,(%esp)
-call   <T> <_ZN21CBuddyRegisterManager16delBuddyRegisterEjj>
-jmp    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x123>
-movb   $0x3,-0x39(%ebp)
-movzwl -0x67(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x69(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x256>
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0xb0>
 movl   $0x10cf,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDelBuddyDBReply\tpclUser is NULL",0x8(%esp)
 movl   $"./log/buddy",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x256>
+jmp    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x250>
+lea    -0x69(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN30Packet_Monitor_Del_Buddy_ReplyC1Ev>
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x5f(%ebp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,-0x5b(%ebp)
+mov    0x8(%ebp),%eax
+movzbl 0x30(%eax),%eax
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x151>
+mov    0x8(%ebp),%eax
+add    $0x12,%eax
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser8DelBuddyEPc>
+mov    0x8(%ebp),%eax
+add    $0x12,%eax
+movl   $0x1d,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0x69(%ebp),%eax
+add    $0x12,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+mov    0x8(%ebp),%eax
+movzbl 0x30(%eax),%eax
+mov    %al,-0x39(%ebp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0x10(%ebp)
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+lea    0x300(%edx),%ecx
+mov    -0x10(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %ecx,(%esp)
+call   <T> <_ZN21CBuddyRegisterManager16delBuddyRegisterEjj>
+jmp    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x155>
+movb   $0x3,-0x39(%ebp)
+lea    -0x69(%ebp),%eax
+movzwl 0x2(%eax),%eax
+movzwl %ax,%edx
+lea    -0x69(%ebp),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x250>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x1fc>
+jne    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x1f6>
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
 movl   $0x10d5,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnDelBuddyDBReply Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x1f5>
+jmp    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x1ef>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x256>
+jmp    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x250>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x10da,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDelBuddyDBReply Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x251>
+jmp    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x24b>
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

/* CPacketTranslater::OnDelBuddyDBReply(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader
               (PacketHeader *param_1)

{
  uint uVar1;
  Packet_Monitor_Del_Buddy_Reply local_6d [2];
  ushort local_6b;
  undefined4 local_63;
  undefined4 local_5f;
  undefined1 auStack_5b [30];
  PacketHeader local_3d;
  CMyFileLog local_3c [8];
  CMyFileLog local_34 [24];
  CUser *local_1c;
  PacketHeader *local_18;
  uint local_14;
  
  local_18 = param_1;
  if (m_pclApp == 0) {
                    /* try { // try from 08087e9f to 08087fec has its CatchHandler @ 08087ff2 */
    CMyFileLog::CMyFileLog(local_3c,"OnDelBuddyDBReply",0x10b1);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_3c,"./log/buddy","CPacketTranslater::OnDelBuddyDBReply : 0 == m_pclApp");
  }
  else {
    local_14 = m_pclApp + 0x10;
    local_1c = (CUser *)CUserManager::FindUser_CharNo(local_14);
    if (local_1c == (CUser *)0x0) {
      CMyFileLog::CMyFileLog(local_34,"OnDelBuddyDBReply",0x10cf);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_34,"./log/buddy","CPacketTranslater::OnDelBuddyDBReply\tpclUser is NULL");
    }
    else {
      Packet_Monitor_Del_Buddy_Reply::Packet_Monitor_Del_Buddy_Reply(local_6d);
      local_63 = *(undefined4 *)(local_18 + 10);
      local_5f = CUser::GetIdByChannel(local_1c);
      if (local_18[0x30] == (PacketHeader)0x0) {
        CUser::DelBuddy(local_1c,(char *)(local_18 + 0x12));
        memcpy(auStack_5b,local_18 + 0x12,0x1d);
        local_3d = local_18[0x30];
        uVar1 = CUser::GetUniqCharNo(local_1c);
        CBuddyRegisterManager::delBuddyRegister
                  ((CBuddyRegisterManager *)(m_pclApp + 0x300),*(uint *)(local_18 + 0xe),uVar1);
      }
      else {
        local_3d = (PacketHeader)0x3;
      }
      CUser::SendToGameserver(local_1c,(char *)local_6d,(uint)local_6b);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 2886 行）：

```cpp
void CPacketTranslater::OnDelBuddyDBReply(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x10b1, "./log/buddy", "CPacketTranslater::OnDelBuddyDBReply : 0 == m_pclApp");
        }
        else
        {
            CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
            CUser* user = userMgr->FindUser_CharNo(((RA_UINT<10>*)pkt)->v);
            if (user == 0)
            {
                DNF_LOG_SCOPE_LINE(0x10cf, "./log/buddy", "CPacketTranslater::OnDelBuddyDBReply\tpclUser is NULL");
            }
            else
            {
                Packet_Monitor_Del_Buddy_Reply reply;
                reply.m_charNo = ((RA_UINT<10>*)pkt)->v;
                reply.m_idByChannel = user->GetIdByChannel();
                if (((RA_S8<48>*)pkt)->v == 0)
                {
                    user->DelBuddy((char*)pkt + 0x12);
                    memcpy(reply.m_name, (char*)pkt + 0x12, 0x1d);
                    reply.m_result = ((RA_U8<48>*)pkt)->v;
                    unsigned int uniq = user->GetUniqCharNo();
                    ((CBuddyRegisterManager*)((char*)m_pclApp + 0x300))
                        ->delBuddyRegister(((RA_UINT<14>*)pkt)->v, uniq);
                }
                else
                {
                    reply.m_result = 3;
                }
                user->SendToGameserver((char*)&reply,
                                       ((RA_U16<2>*)&reply)->v);
            }
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x10d5, "./log/Except",
            "CPacketTranslater::OnDelBuddyDBReply Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x10da, "./log/Except",
            "CPacketTranslater::OnDelBuddyDBReply Exception Break\n");
    }
}
```

# _ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader

`CPacketTranslater::OnMemberEnterReply(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8080fb0` | `0xc32` | `0x806cdb4` | `0xcbd` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,746 +1,749 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0xcc,%esp
+sub    $0xdc,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xc1d>
+je     <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xcb2>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x38(%ebp)
-movl   $0x0,-0x34(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x30(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x2d0,%eax
-mov    %eax,-0x2c(%ebp)
-mov    -0x38(%ebp),%eax
+mov    %eax,-0x58(%ebp)
+mov    -0x58(%ebp),%eax
 mov    0xe(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x10,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x40(%ebp)
-cmpl   $0x0,-0x40(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xc20>
-mov    -0x40(%ebp),%eax
+mov    %eax,-0x54(%ebp)
+cmpl   $0x0,-0x54(%ebp)
+je     <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xcb2>
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser22GetMemberEnterCallerIdEv>
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x10,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x3c(%ebp)
-cmpl   $0x0,-0x3c(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xc23>
-mov    -0x3c(%ebp),%eax
+mov    %eax,-0x50(%ebp)
+cmpl   $0x0,-0x50(%ebp)
+je     <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xcb2>
+mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser22IsAbleToRegisterMemberEv>
 xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xb5>
-mov    -0x40(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0x98>
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser22IsAbleToRegisterMemberEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xbc>
+je     <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0x9f>
 mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xc1>
+jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xa4>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0x17e>
-mov    -0x3c(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0x161>
+mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
 mov    %eax,0x8(%esp)
 movl   $0x37,0x4(%esp)
-mov    -0x3c(%ebp),%eax
+mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CPacketTranslater28SendRequestMemberEnterResultEP5CUserhPKc>
-mov    -0x40(%ebp),%eax
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser22IsAbleToRegisterMemberEv>
 movzbl %al,%eax
-mov    %eax,-0xb8(%ebp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%esi
-mov    -0x3c(%ebp),%eax
+mov    %eax,-0xc8(%ebp)
+mov    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,%esi
+mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser22IsAbleToRegisterMemberEv>
 movzbl %al,%edi
-mov    -0x3c(%ebp),%eax
+mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,%ebx
 movl   $0x621,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0xa0(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0xb8(%ebp),%eax
+lea    -0xb8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0xc8(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %esi,0x14(%esp)
 mov    %edi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Err Member Register Restrict : requester(%d:%d) responser(%d:%d)",0x8(%esp)
 movl   $"./log/MemberModify",0x4(%esp)
-lea    -0xa0(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xc27>
-mov    -0x40(%ebp),%eax
+lea    -0xb8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xcb2>
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser24CheckPrevCallMemberEnterEv>
-xor    $0x1,%eax
+cmp    $0x1,%al
+sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0x224>
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser11GetCharNameEv>
-mov    %eax,0x8(%esp)
-movl   $0x2f,0x4(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17CPacketTranslater28SendRequestMemberEnterResultEP5CUserhPKc>
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%esi
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%ebx
-movl   $0x62e,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x98(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"Char id(%d) Reset char id(%d)",0x8(%esp)
-movl   $"./log/MemberModify",0x4(%esp)
-lea    -0x98(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser23ResetRequestMemberEnterEv>
-jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xc27>
-mov    -0x38(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xb20>
+mov    -0x58(%ebp),%eax
 movzbl 0x12(%eax),%eax
-cmp    $0x2,%al
-jne    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0x315>
+mov    %al,-0x49(%ebp)
+cmpb   $0x2,-0x49(%ebp)
+jne    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0x26f>
 movl   $0x0,0x18(%esp)
 movl   $0x0,0x14(%esp)
 movl   $0x0,0x10(%esp)
 movl   $0x0,0xc(%esp)
 movl   $0x2,0x8(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x3c(%ebp),%eax
+mov    -0x54(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CPacketTranslater29SendNoticeMemberEnterPacketOkEP5CUserS1_hhhhh>
 movl   $0x0,0x18(%esp)
 movl   $0x0,0x14(%esp)
 movl   $0x0,0x10(%esp)
 movl   $0x0,0xc(%esp)
 movl   $0x2,0x8(%esp)
-mov    -0x3c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x40(%ebp),%eax
+mov    -0x50(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CPacketTranslater32SendNoticeMemberEnterPacketReplyEP5CUserS1_hhhhh>
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%esi
-mov    -0x40(%ebp),%eax
+mov    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,%esi
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,%ebx
 movl   $0x63a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x90(%ebp),%eax
+lea    -0xb0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Char id(%d) Reject And Reset char id(%d)",0x8(%esp)
 movl   $"./log/MemberModify",0x4(%esp)
-lea    -0x90(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x40(%ebp),%eax
+lea    -0xb0(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser23ResetRequestMemberEnterEv>
-jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xc27>
-mov    -0x38(%ebp),%eax
-movzbl 0x12(%eax),%eax
-cmp    $0x3,%al
-jne    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0x406>
+jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xcb2>
+cmpb   $0x3,-0x49(%ebp)
+jne    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0x35b>
 movl   $0x0,0x18(%esp)
 movl   $0x0,0x14(%esp)
 movl   $0x0,0x10(%esp)
 movl   $0x0,0xc(%esp)
 movl   $0x3,0x8(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x3c(%ebp),%eax
+mov    -0x54(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CPacketTranslater29SendNoticeMemberEnterPacketOkEP5CUserS1_hhhhh>
 movl   $0x0,0x18(%esp)
 movl   $0x0,0x14(%esp)
 movl   $0x0,0x10(%esp)
 movl   $0x0,0xc(%esp)
 movl   $0x3,0x8(%esp)
-mov    -0x3c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x40(%ebp),%eax
+mov    -0x50(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CPacketTranslater32SendNoticeMemberEnterPacketReplyEP5CUserS1_hhhhh>
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%esi
-mov    -0x40(%ebp),%eax
+mov    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,%esi
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,%ebx
 movl   $0x647,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x88(%ebp),%eax
+lea    -0xa8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Char id(%d) Reject And Reset char id(%d)",0x8(%esp)
 movl   $"./log/MemberModify",0x4(%esp)
-lea    -0x88(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x40(%ebp),%eax
+lea    -0xa8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser23ResetRequestMemberEnterEv>
-jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xc27>
-mov    -0x38(%ebp),%eax
-movzbl 0x12(%eax),%eax
-cmp    $0x4,%al
-jne    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0x4f1>
+jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xcb2>
+cmpb   $0x4,-0x49(%ebp)
+jne    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0x447>
 movl   $0x0,0x18(%esp)
 movl   $0x0,0x14(%esp)
 movl   $0x0,0x10(%esp)
 movl   $0x0,0xc(%esp)
 movl   $0x4,0x8(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x3c(%ebp),%eax
+mov    -0x54(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CPacketTranslater29SendNoticeMemberEnterPacketOkEP5CUserS1_hhhhh>
 movl   $0x0,0x18(%esp)
 movl   $0x0,0x14(%esp)
 movl   $0x0,0x10(%esp)
 movl   $0x0,0xc(%esp)
 movl   $0x4,0x8(%esp)
-mov    -0x3c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x40(%ebp),%eax
+mov    -0x50(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CPacketTranslater32SendNoticeMemberEnterPacketReplyEP5CUserS1_hhhhh>
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%esi
-mov    -0x40(%ebp),%eax
+mov    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,%esi
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,%ebx
 movl   $0x654,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x80(%ebp),%eax
+lea    -0xa0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Char id(%d) Reject And Reset char id(%d)",0x8(%esp)
 movl   $"./log/MemberModify",0x4(%esp)
-lea    -0x80(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x40(%ebp),%eax
+lea    -0xa0(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser23ResetRequestMemberEnterEv>
-jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xc27>
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
+jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xcb2>
+mov    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x2d0,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZN14CMemberManager10FindMemberEj>
-mov    %eax,-0x28(%ebp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
+mov    %eax,-0x48(%ebp)
+mov    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x2d0,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZN14CMemberManager10FindMemberEj>
-mov    %eax,-0x24(%ebp)
-mov    -0x40(%ebp),%eax
+mov    %eax,-0x44(%ebp)
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser22GetMemberEnterCallerIdEv>
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0x5be>
-mov    -0x3c(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0x530>
+mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
 mov    %eax,0x8(%esp)
 movl   $0x30,0x4(%esp)
-mov    -0x40(%ebp),%eax
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CPacketTranslater28SendRequestMemberEnterResultEP5CUserhPKc>
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%esi
-mov    -0x40(%ebp),%eax
+mov    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,%esi
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,%ebx
 movl   $0x662,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x78(%ebp),%eax
+lea    -0x98(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Err : %d not received request from %d",0x8(%esp)
 movl   $"./log/MemberModify",0x4(%esp)
-lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xc27>
-mov    -0x24(%ebp),%eax
+lea    -0x98(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xcb2>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x2d0(%eax),%edx
+mov    -0x44(%ebp),%eax
 mov    %eax,0x10(%esp)
-mov    -0x40(%ebp),%eax
+mov    -0x54(%ebp),%eax
 mov    %eax,0xc(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    -0x3c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
+mov    -0x48(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x50(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZN14CMemberManager16CheckMemberEnterEP5CUserP7CMemberS1_S3_>
-mov    %eax,-0x34(%ebp)
-cmpl   $0x0,-0x34(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0x68a>
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser11GetCharNameEv>
-mov    -0x34(%ebp),%edx
-movzbl %dl,%edx
-mov    %eax,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17CPacketTranslater28SendRequestMemberEnterResultEP5CUserhPKc>
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%esi
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%ebx
-movl   $0x66a,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x14(%esp)
-mov    %ebx,0x10(%esp)
-mov    -0x34(%ebp),%eax
-mov    %eax,0xc(%esp)
-movl   $"Err(%d) : %d Fail And Reset %d",0x8(%esp)
-movl   $"./log/MemberModify",0x4(%esp)
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser23ResetRequestMemberEnterEv>
-jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xc27>
+mov    %eax,-0x40(%ebp)
+cmpl   $0x0,-0x40(%ebp)
+jne    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xa8d>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0xa0(%eax),%eax
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-je     <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xc26>
-cmpl   $0x0,-0x28(%ebp)
-jne    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0x6bd>
+mov    %eax,-0x3c(%ebp)
+cmpl   $0x0,-0x3c(%ebp)
+je     <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xcb2>
+cmpl   $0x0,-0x48(%ebp)
+jne    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0x5a7>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x2d0(%eax),%edx
+mov    -0x50(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN14CMemberManager18CreateMemberInJoinEP5CUser>
+mov    %eax,-0x48(%ebp)
+cmpl   $0x0,-0x44(%ebp)
+jne    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0x5ca>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x2d0(%eax),%edx
+mov    -0x54(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN14CMemberManager18CreateMemberInJoinEP5CUser>
+mov    %eax,-0x44(%ebp)
+mov    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser8GetLevelEv>
+mov    %ax,-0x38(%ebp)
+movswl -0x38(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+lea    0x2d0(%edx),%ecx
+movl   $0x1,0x10(%esp)
+mov    -0x54(%ebp),%edx
+mov    %edx,0xc(%esp)
+mov    %eax,0x8(%esp)
+mov    -0x48(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %ecx,(%esp)
+call   <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb>
+cmp    $0x1,%eax
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0x9f6>
+mov    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser8GetLevelEv>
+mov    %ax,-0x36(%ebp)
+movswl -0x36(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+lea    0x2d0(%edx),%ecx
+movl   $0x1,0x10(%esp)
+mov    -0x50(%ebp),%edx
+mov    %edx,0xc(%esp)
+mov    %eax,0x8(%esp)
+mov    -0x44(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %ecx,(%esp)
+call   <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb>
+cmp    $0x1,%eax
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0x959>
+mov    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x2d0,%edx
+movl   $0x1,0xc(%esp)
+mov    %eax,0x8(%esp)
 mov    -0x3c(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager18CreateMemberInJoinEP5CUser>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-jne    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0x6d8>
-mov    -0x40(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager18CreateMemberInJoinEP5CUser>
-mov    %eax,-0x24(%ebp)
+mov    %edx,(%esp)
+call   <T> <_ZN14CMemberManager28SendToDBMemberUpdateCharInfoEP14CServerHandlerjh>
+mov    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x2d0,%edx
+movl   $0x1,0xc(%esp)
+mov    %eax,0x8(%esp)
 mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser8GetLevelEv>
-cwtl
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN14CMemberManager28SendToDBMemberUpdateCharInfoEP14CServerHandlerjh>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x2d0(%eax),%edx
 movl   $0x1,0x10(%esp)
-mov    -0x40(%ebp),%edx
-mov    %edx,0xc(%esp)
-mov    %eax,0x8(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0x79f>
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser8GetLevelEv>
-cwtl
-mov    %eax,-0xb4(%ebp)
+mov    -0x54(%ebp),%eax
+mov    %eax,0xc(%esp)
+mov    -0x50(%ebp),%eax
+mov    %eax,0x8(%esp)
 mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser8GetLevelEv>
-movswl %ax,%edi
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser12GetMemberKeyEv>
-mov    %eax,%esi
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%ebx
-movl   $0x681,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0xb4(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnMemberEnterReply  :  RegisterMember return false , Caller Char id(%d), Caller Member id(%d), Caller Level(%d), Responser Level(%d)!",0x8(%esp)
-movl   $"./log/MemberModify",0x4(%esp)
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xc27>
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser8GetLevelEv>
-cwtl
-movl   $0x1,0x10(%esp)
-mov    -0x3c(%ebp),%edx
-mov    %edx,0xc(%esp)
-mov    %eax,0x8(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0x866>
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser8GetLevelEv>
-cwtl
-mov    %eax,-0xb0(%ebp)
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser8GetLevelEv>
-movswl %ax,%edi
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN7CMember12GetMemberKeyEv>
-mov    %eax,%esi
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%ebx
-movl   $0x688,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0xb0(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnMemberEnterReply  :  RegisterMember return false , Responser Char id(%d), Responser Member id(%d), Caller Level(%d), Responser Level(%d)!",0x8(%esp)
-movl   $"./log/MemberModify",0x4(%esp)
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xc27>
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-movl   $0x1,0xc(%esp)
-mov    %eax,0x8(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager28SendToDBMemberUpdateCharInfoEP14CServerHandlerjh>
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-movl   $0x1,0xc(%esp)
-mov    %eax,0x8(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager28SendToDBMemberUpdateCharInfoEP14CServerHandlerjh>
-movl   $0x1,0x10(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,0xc(%esp)
-mov    -0x3c(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h>
-mov    -0x40(%ebp),%eax
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser23ResetRequestMemberEnterEv>
 movl   $0x0,0x4(%esp)
-mov    -0x3c(%ebp),%eax
+mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser21SetMemberRegisterFlagEb>
 movl   $0x0,0x4(%esp)
-mov    -0x40(%ebp),%eax
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser21SetMemberRegisterFlagEb>
-mov    -0x3c(%ebp),%eax
+mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser22IsAbleToRegisterMemberEv>
 movzbl %al,%eax
-mov    %eax,-0xac(%ebp)
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%esi
-mov    -0x40(%ebp),%eax
+mov    %eax,-0xc4(%ebp)
+mov    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,%esi
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser22IsAbleToRegisterMemberEv>
 movzbl %al,%edi
-mov    -0x40(%ebp),%eax
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,%ebx
 movl   $0x69b,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0xac(%ebp),%eax
+lea    -0x90(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0xc4(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %esi,0x14(%esp)
 mov    %edi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"pclResponserUser Char id(%d)(%d) success and reset, pclRequestUser char id(%d)(%d)!",0x8(%esp)
 movl   $"./log/MemberModify",0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser8GetLevelEv>
-mov    %eax,%ebx
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser8GetLevelEv>
-cmp    %ax,%bx
-setg   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xa56>
-mov    -0x40(%ebp),%eax
+lea    -0x90(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser8GetLevelEv>
+mov    %ax,-0x34(%ebp)
+mov    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser8GetLevelEv>
+mov    %ax,-0x32(%ebp)
+movzwl -0x32(%ebp),%eax
+cmp    -0x34(%ebp),%ax
+jge    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0x88a>
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser22GetUpperMemberExpLevelEv>
-movzbl %al,%ebx
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser8GetLevelEv>
-movzbl %al,%eax
-mov    %ebx,0x18(%esp)
+mov    %al,-0x2f(%ebp)
+mov    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser8GetLevelEv>
+mov    %al,-0x2e(%ebp)
+movzbl -0x2f(%ebp),%edx
+movzbl -0x2e(%ebp),%eax
+mov    %edx,0x18(%esp)
 mov    %eax,0x14(%esp)
 movl   $0x1,0x10(%esp)
 movl   $0x1,0xc(%esp)
 movl   $0x1,0x8(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x3c(%ebp),%eax
+mov    -0x54(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CPacketTranslater29SendNoticeMemberEnterPacketOkEP5CUserS1_hhhhh>
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser8GetLevelEv>
-movzbl %al,%eax
+mov    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser8GetLevelEv>
+mov    %al,-0x2d(%ebp)
+movzbl -0x2d(%ebp),%eax
 movl   $0x0,0x18(%esp)
 mov    %eax,0x14(%esp)
 movl   $0x0,0x10(%esp)
 movl   $0x2,0xc(%esp)
 movl   $0x1,0x8(%esp)
-mov    -0x3c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x40(%ebp),%eax
+mov    -0x50(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CPacketTranslater32SendNoticeMemberEnterPacketReplyEP5CUserS1_hhhhh>
-jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xc27>
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser8GetLevelEv>
-mov    %eax,%ebx
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser8GetLevelEv>
-cmp    %ax,%bx
-setl   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xc27>
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser8GetLevelEv>
-movzbl %al,%eax
+jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xcb2>
+mov    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser8GetLevelEv>
+mov    %ax,-0x2c(%ebp)
+mov    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser8GetLevelEv>
+mov    %ax,-0x2a(%ebp)
+movzwl -0x2c(%ebp),%eax
+cmp    -0x2a(%ebp),%ax
+jge    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xcb2>
+mov    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser8GetLevelEv>
+mov    %al,-0x27(%ebp)
+movzbl -0x27(%ebp),%eax
 movl   $0x0,0x18(%esp)
 mov    %eax,0x14(%esp)
 movl   $0x0,0x10(%esp)
 movl   $0x2,0xc(%esp)
 movl   $0x1,0x8(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x3c(%ebp),%eax
+mov    -0x54(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CPacketTranslater29SendNoticeMemberEnterPacketOkEP5CUserS1_hhhhh>
-mov    -0x3c(%ebp),%eax
+mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser22GetUpperMemberExpLevelEv>
-movzbl %al,%ebx
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser8GetLevelEv>
-movzbl %al,%eax
-mov    %ebx,0x18(%esp)
+mov    %al,-0x26(%ebp)
+mov    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser8GetLevelEv>
+mov    %al,-0x25(%ebp)
+movzbl -0x26(%ebp),%edx
+movzbl -0x25(%ebp),%eax
+mov    %edx,0x18(%esp)
 mov    %eax,0x14(%esp)
 movl   $0x1,0x10(%esp)
 movl   $0x1,0xc(%esp)
 movl   $0x1,0x8(%esp)
-mov    -0x3c(%ebp),%eax
-mov    %eax,0x4(%esp)
+mov    -0x50(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17CPacketTranslater32SendNoticeMemberEnterPacketReplyEP5CUserS1_hhhhh>
+jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xcb2>
+mov    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser8GetLevelEv>
+mov    %ax,-0x24(%ebp)
+mov    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser8GetLevelEv>
+mov    %ax,-0x22(%ebp)
+movswl -0x24(%ebp),%eax
+mov    %eax,-0xc0(%ebp)
+movswl -0x22(%ebp),%edi
+mov    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN7CMember12GetMemberKeyEv>
+mov    %eax,%esi
+mov    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,%ebx
+movl   $0x688,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x88(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0xc0(%ebp),%eax
+mov    %eax,0x18(%esp)
+mov    %edi,0x14(%esp)
+mov    %esi,0x10(%esp)
+mov    %ebx,0xc(%esp)
+movl   $"CPacketTranslater::OnMemberEnterReply  :  RegisterMember return false , Responser Char id(%d), Responser Member id(%d), Caller Level(%d), Responser Level(%d)!",0x8(%esp)
+movl   $"./log/MemberModify",0x4(%esp)
+lea    -0x88(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xcb2>
+mov    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser8GetLevelEv>
+mov    %ax,-0x20(%ebp)
+mov    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser8GetLevelEv>
+mov    %ax,-0x1e(%ebp)
+movswl -0x20(%ebp),%eax
+mov    %eax,-0xbc(%ebp)
+movswl -0x1e(%ebp),%edi
+mov    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser12GetMemberKeyEv>
+mov    %eax,%esi
+mov    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,%ebx
+movl   $0x681,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x80(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0xbc(%ebp),%eax
+mov    %eax,0x18(%esp)
+mov    %edi,0x14(%esp)
+mov    %esi,0x10(%esp)
+mov    %ebx,0xc(%esp)
+movl   $"CPacketTranslater::OnMemberEnterReply  :  RegisterMember return false , Caller Char id(%d), Caller Member id(%d), Caller Level(%d), Responser Level(%d)!",0x8(%esp)
+movl   $"./log/MemberModify",0x4(%esp)
+lea    -0x80(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xcb2>
+mov    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser11GetCharNameEv>
+mov    -0x40(%ebp),%edx
+movzbl %dl,%edx
+mov    %eax,0x8(%esp)
+mov    %edx,0x4(%esp)
+mov    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17CPacketTranslater28SendRequestMemberEnterResultEP5CUserhPKc>
+mov    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,%esi
+mov    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,%ebx
+movl   $0x66a,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %esi,0x14(%esp)
+mov    %ebx,0x10(%esp)
 mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17CPacketTranslater32SendNoticeMemberEnterPacketReplyEP5CUserS1_hhhhh>
-jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xc27>
+mov    %eax,0xc(%esp)
+movl   $"Err(%d) : %d Fail And Reset %d",0x8(%esp)
+movl   $"./log/MemberModify",0x4(%esp)
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser23ResetRequestMemberEnterEv>
+jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xcb2>
+mov    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser11GetCharNameEv>
+mov    %eax,0x8(%esp)
+movl   $0x2f,0x4(%esp)
+mov    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17CPacketTranslater28SendRequestMemberEnterResultEP5CUserhPKc>
+mov    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,%esi
+mov    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,%ebx
+movl   $0x62e,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %esi,0x10(%esp)
+mov    %ebx,0xc(%esp)
+movl   $"Char id(%d) Reset char id(%d)",0x8(%esp)
+movl   $"./log/MemberModify",0x4(%esp)
+lea    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser23ResetRequestMemberEnterEv>
+jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xcb2>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xbb5>
+jne    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xc4c>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,0x4(%esp)
 movl   $"CPacketTranslater::OnRequestMemberEnter() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x6be,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnRequestMemberEnter() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xbae>
+lea    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xc45>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xc27>
+jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xcb2>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnRequestMemberEnter() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x6c4,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnRequestMemberEnter() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xc16>
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xcad>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xc27>
-nop
-jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xc27>
-nop
-jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xc27>
-nop
-jmp    <T> <_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader+0xc27>
-nop
-add    $0xcc,%esp
+add    $0xdc,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnMemberEnterReply(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader
               (PacketHeader *param_1)

{
  bool bVar1;
  char cVar2;
  uchar uVar3;
  uchar uVar4;
  short sVar5;
  short sVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  CMyFileLog local_a4 [8];
  CMyFileLog local_9c [8];
  CMyFileLog local_94 [8];
  CMyFileLog local_8c [8];
  CMyFileLog local_84 [8];
  CMyFileLog local_7c [8];
  CMyFileLog local_74 [8];
  CMyFileLog local_6c [8];
  CMyFileLog local_64 [8];
  CMyFileLog local_5c [24];
  CUser *local_44;
  CUser *local_40;
  PacketHeader *local_3c;
  int local_38;
  uint local_34;
  CMemberManager *local_30;
  CMember *local_2c;
  CMember *local_28;
  CServerHandler *local_24;
  
  if (m_pclApp != 0) {
    local_3c = param_1;
    local_38 = 0;
    local_34 = m_pclApp + 0x10;
    local_30 = (CMemberManager *)(m_pclApp + 0x2d0);
                    /* try { // try from 08080ffe to 08081abd has its CatchHandler @ 08081ac3 */
    local_44 = (CUser *)CUserManager::FindUser_CharNo(local_34);
    if (local_44 != (CUser *)0x0) {
      CUser::GetMemberEnterCallerId(local_44);
      local_40 = (CUser *)CUserManager::FindUser_CharNo(local_34);
      if (local_40 != (CUser *)0x0) {
        cVar2 = CUser::IsAbleToRegisterMember(local_40);
        if ((cVar2 == '\x01') && (cVar2 = CUser::IsAbleToRegisterMember(local_44), cVar2 == '\x01'))
        {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          pcVar7 = (char *)CUser::GetCharName(local_40);
          SendRequestMemberEnterResult(local_40,'7',pcVar7);
          uVar8 = CUser::IsAbleToRegisterMember(local_44);
          uVar9 = CUser::GetUniqCharNo(local_44);
          uVar10 = CUser::IsAbleToRegisterMember(local_40);
          uVar11 = CUser::GetUniqCharNo(local_40);
          CMyFileLog::CMyFileLog(local_a4,"OnMemberEnterReply",0x621);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_a4,"./log/MemberModify",
                     "Err Member Register Restrict : requester(%d:%d) responser(%d:%d)",uVar11,
                     uVar10 & 0xff,uVar9,uVar8 & 0xff);
        }
        else {
          cVar2 = CUser::CheckPrevCallMemberEnter(local_44);
          if (cVar2 == '\x01') {
            if (local_3c[0x12] == (PacketHeader)0x2) {
              SendNoticeMemberEnterPacketOk(local_40,local_44,'\x02','\0','\0','\0','\0');
              SendNoticeMemberEnterPacketReply(local_44,local_40,'\x02','\0','\0','\0','\0');
              uVar9 = CUser::GetUniqCharNo(local_40);
              uVar11 = CUser::GetUniqCharNo(local_44);
              CMyFileLog::CMyFileLog(local_94,"OnMemberEnterReply",0x63a);
              CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                        (local_94,"./log/MemberModify","Char id(%d) Reject And Reset char id(%d)",
                         uVar11,uVar9);
              CUser::ResetRequestMemberEnter(local_44);
            }
            else if (local_3c[0x12] == (PacketHeader)0x3) {
              SendNoticeMemberEnterPacketOk(local_40,local_44,'\x03','\0','\0','\0','\0');
              SendNoticeMemberEnterPacketReply(local_44,local_40,'\x03','\0','\0','\0','\0');
              uVar9 = CUser::GetUniqCharNo(local_40);
              uVar11 = CUser::GetUniqCharNo(local_44);
              CMyFileLog::CMyFileLog(local_8c,"OnMemberEnterReply",0x647);
              CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                        (local_8c,"./log/MemberModify","Char id(%d) Reject And Reset char id(%d)",
                         uVar11,uVar9);
              CUser::ResetRequestMemberEnter(local_44);
            }
            else if (local_3c[0x12] == (PacketHeader)0x4) {
              SendNoticeMemberEnterPacketOk(local_40,local_44,'\x04','\0','\0','\0','\0');
              SendNoticeMemberEnterPacketReply(local_44,local_40,'\x04','\0','\0','\0','\0');
              uVar9 = CUser::GetUniqCharNo(local_40);
              uVar11 = CUser::GetUniqCharNo(local_44);
              CMyFileLog::CMyFileLog(local_84,"OnMemberEnterReply",0x654);
              CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                        (local_84,"./log/MemberModify","Char id(%d) Reject And Reset char id(%d)",
                         uVar11,uVar9);
              CUser::ResetRequestMemberEnter(local_44);
            }
            else {
              CUser::GetUniqCharNo(local_40);
              local_2c = (CMember *)
                         CMemberManager::_ZN14CMemberManager10FindMemberEj((uint)local_30);
              CUser::GetUniqCharNo(local_44);
              local_28 = (CMember *)
                         CMemberManager::_ZN14CMemberManager10FindMemberEj((uint)local_30);
              iVar12 = CUser::GetMemberEnterCallerId(local_44);
              if (iVar12 == 0) {
                pcVar7 = (char *)CUser::GetCharName(local_40);
                SendRequestMemberEnterResult(local_44,'0',pcVar7);
                uVar9 = CUser::GetUniqCharNo(local_40);
                uVar11 = CUser::GetUniqCharNo(local_44);
                CMyFileLog::CMyFileLog(local_7c,"OnMemberEnterReply",0x662);
                CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                          (local_7c,"./log/MemberModify","Err : %d not received request from %d",
                           uVar11,uVar9);
              }
              else {
                local_38 = CMemberManager::
                           _ZN14CMemberManager16CheckMemberEnterEP5CUserP7CMemberS1_S3_
                                     (local_30,local_40,local_2c,local_44,local_28);
                if (local_38 == 0) {
                  local_24 = *(CServerHandler **)(m_pclApp + 0xa0);
                  if (local_24 != (CServerHandler *)0x0) {
                    if (local_2c == (CMember *)0x0) {
                      local_2c = (CMember *)CMemberManager::CreateMemberInJoin(local_30,local_40);
                    }
                    if (local_28 == (CMember *)0x0) {
                      local_28 = (CMember *)CMemberManager::CreateMemberInJoin(local_30,local_44);
                    }
                    sVar5 = CUser::GetLevel(local_40);
                    cVar2 = CMemberManager::_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb
                                      (local_30,local_2c,sVar5,local_44,true);
                    if (cVar2 == '\x01') {
                      sVar5 = CUser::GetLevel(local_44);
                      cVar2 = CMemberManager::_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb
                                        (local_30,local_28,sVar5,local_40,true);
                      if (cVar2 == '\x01') {
                        uVar8 = CUser::GetUniqCharNo(local_40);
                        CMemberManager::SendToDBMemberUpdateCharInfo(local_30,local_24,uVar8,'\x01')
                        ;
                        uVar8 = CUser::GetUniqCharNo(local_44);
                        CMemberManager::SendToDBMemberUpdateCharInfo(local_30,local_24,uVar8,'\x01')
                        ;
                        CMemberManager::
                        _ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h
                                  (local_30,local_24,local_40,local_44,'\x01');
                        CUser::ResetRequestMemberEnter(local_44);
                        CUser::SetMemberRegisterFlag(local_40,false);
                        CUser::SetMemberRegisterFlag(local_44,false);
                        uVar8 = CUser::IsAbleToRegisterMember(local_40);
                        uVar9 = CUser::GetUniqCharNo(local_40);
                        uVar10 = CUser::IsAbleToRegisterMember(local_44);
                        uVar11 = CUser::GetUniqCharNo(local_44);
                        CMyFileLog::CMyFileLog(local_5c,"OnMemberEnterReply",0x69b);
                        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                                  (local_5c,"./log/MemberModify",
                                   "pclResponserUser Char id(%d)(%d) success and reset, pclRequestUser char id(%d)(%d)!"
                                   ,uVar11,uVar10 & 0xff,uVar9,uVar8 & 0xff);
                        sVar5 = CUser::GetLevel(local_44);
                        sVar6 = CUser::GetLevel(local_40);
                        if (sVar6 < sVar5) {
                          uVar3 = CUser::GetUpperMemberExpLevel(local_44);
                          uVar4 = CUser::GetLevel(local_44);
                          SendNoticeMemberEnterPacketOk
                                    (local_40,local_44,'\x01','\x01','\x01',uVar4,uVar3);
                          uVar3 = CUser::GetLevel(local_40);
                          SendNoticeMemberEnterPacketReply
                                    (local_44,local_40,'\x01','\x02','\0',uVar3,'\0');
                        }
                        else {
                          sVar5 = CUser::GetLevel(local_44);
                          sVar6 = CUser::GetLevel(local_40);
                          if (sVar5 < sVar6) {
                            uVar3 = CUser::GetLevel(local_44);
                            SendNoticeMemberEnterPacketOk
                                      (local_40,local_44,'\x01','\x02','\0',uVar3,'\0');
                            uVar3 = CUser::GetUpperMemberExpLevel(local_40);
                            uVar4 = CUser::GetLevel(local_40);
                            SendNoticeMemberEnterPacketReply
                                      (local_44,local_40,'\x01','\x01','\x01',uVar4,uVar3);
                          }
                        }
                      }
                      else {
                        sVar5 = CUser::GetLevel(local_44);
                        sVar6 = CUser::GetLevel(local_40);
                        uVar9 = CMember::GetMemberKey(local_28);
                        uVar11 = CUser::GetUniqCharNo(local_44);
                        CMyFileLog::CMyFileLog(local_64,"OnMemberEnterReply",0x688);
                        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                                  (local_64,"./log/MemberModify",
                                   "CPacketTranslater::OnMemberEnterReply  :  RegisterMember return false , Responser Char id(%d), Responser Member id(%d), Caller Level(%d), Responser Level(%d)!"
                                   ,uVar11,uVar9,(int)sVar6,(int)sVar5);
                      }
                    }
                    else {
                      sVar5 = CUser::GetLevel(local_44);
                      sVar6 = CUser::GetLevel(local_40);
                      uVar9 = CUser::GetMemberKey(local_40);
                      uVar11 = CUser::GetUniqCharNo(local_40);
                      CMyFileLog::CMyFileLog(local_6c,"OnMemberEnterReply",0x681);
                      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                                (local_6c,"./log/MemberModify",
                                 "CPacketTranslater::OnMemberEnterReply  :  RegisterMember return false , Caller Char id(%d), Caller Member id(%d), Caller Level(%d), Responser Level(%d)!"
                                 ,uVar11,uVar9,(int)sVar6,(int)sVar5);
                    }
                  }
                }
                else {
                  pcVar7 = (char *)CUser::GetCharName(local_40);
                  SendRequestMemberEnterResult(local_44,(uchar)local_38,pcVar7);
                  uVar9 = CUser::GetUniqCharNo(local_40);
                  uVar11 = CUser::GetUniqCharNo(local_44);
                  CMyFileLog::CMyFileLog(local_74,"OnMemberEnterReply",0x66a);
                  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                            (local_74,"./log/MemberModify","Err(%d) : %d Fail And Reset %d",local_38
                             ,uVar11,uVar9);
                  CUser::ResetRequestMemberEnter(local_44);
                }
              }
            }
          }
          else {
            pcVar7 = (char *)CUser::GetCharName(local_40);
            SendRequestMemberEnterResult(local_44,'/',pcVar7);
            uVar9 = CUser::GetUniqCharNo(local_40);
            uVar11 = CUser::GetUniqCharNo(local_44);
            CMyFileLog::CMyFileLog(local_9c,"OnMemberEnterReply",0x62e);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_9c,"./log/MemberModify","Char id(%d) Reset char id(%d)",uVar11,uVar9);
            CUser::ResetRequestMemberEnter(local_44);
          }
        }
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 1241 行）：

```cpp
void CPacketTranslater::OnMemberEnterReply(PacketHeader* pkt)
{try
{


    if (m_pclApp != 0)
    {
        Packet_Monitor_Member_Enter_Reply* reply =
            (Packet_Monitor_Member_Enter_Reply*)pkt;
        CUser* requester = (&m_pclApp->m_userManager)->FindUser_CharNo(reply->m_charNo);
        if (requester != 0)
        {
            CUser* responser = (&m_pclApp->m_userManager)->FindUser_CharNo(requester->GetMemberEnterCallerId());
            if (responser != 0)
            {
                if (responser->IsAbleToRegisterMember() != 1 ||
                    requester->IsAbleToRegisterMember() != 1)
                {
                    SendRequestMemberEnterResult(responser, '7', responser->GetCharName());
                    DNF_LOG_SCOPE_LINE(0x621,"./log/MemberModify",
                        "Err Member Register Restrict : requester(%d:%d) responser(%d:%d)",
                        responser->GetUniqCharNo(), responser->IsAbleToRegisterMember(),
                        requester->GetUniqCharNo(), requester->IsAbleToRegisterMember());
                }
                else if (requester->CheckPrevCallMemberEnter() == 1)
                {
                    unsigned char code = reply->m_code;
                    if (code == 2)
                    {
                        SendNoticeMemberEnterPacketOk(responser, requester, 2, 0, 0, 0, 0);
                        SendNoticeMemberEnterPacketReply(requester, responser, 2, 0, 0, 0, 0);
                        DNF_LOG_SCOPE_LINE(0x63a,"./log/MemberModify",
                            "Char id(%d) Reject And Reset char id(%d)",
                            requester->GetUniqCharNo(), responser->GetUniqCharNo());
                        requester->ResetRequestMemberEnter();
                    }
                    else if (code == 3)
                    {
                        SendNoticeMemberEnterPacketOk(responser, requester, 3, 0, 0, 0, 0);
                        SendNoticeMemberEnterPacketReply(requester, responser, 3, 0, 0, 0, 0);
                        DNF_LOG_SCOPE_LINE(0x647,"./log/MemberModify",
                            "Char id(%d) Reject And Reset char id(%d)",
                            requester->GetUniqCharNo(), responser->GetUniqCharNo());
                        requester->ResetRequestMemberEnter();
                    }
                    else if (code == 4)
                    {
                        SendNoticeMemberEnterPacketOk(responser, requester, 4, 0, 0, 0, 0);
                        SendNoticeMemberEnterPacketReply(requester, responser, 4, 0, 0, 0, 0);
                        DNF_LOG_SCOPE_LINE(0x654,"./log/MemberModify",
                            "Char id(%d) Reject And Reset char id(%d)",
                            requester->GetUniqCharNo(), responser->GetUniqCharNo());
                        requester->ResetRequestMemberEnter();
                    }
                    else
                    {
                        CMember* responserMember =
                            (&m_pclApp->m_memberManager)->FindMember(responser->GetUniqCharNo());
                        CMember* requesterMember =
                            (&m_pclApp->m_memberManager)->FindMember(requester->GetUniqCharNo());
                        if (requester->GetMemberEnterCallerId() == 0)
                        {
                            SendRequestMemberEnterResult(requester, '0',
                                                         responser->GetCharName());
                            DNF_LOG_SCOPE_LINE(0x662,"./log/MemberModify",
                                "Err : %d not received request from %d",
                                requester->GetUniqCharNo(), responser->GetUniqCharNo());
                        }
                        else
                        {
                            int err = (&m_pclApp->m_memberManager)->CheckMemberEnter(
                                responser, responserMember, requester, requesterMember);
                            if (err == 0)
                            {
                                CServerHandler* handler =
                                    m_pclApp->m_serverHandler2;
                                if (handler != 0)
                                {
                                    if (responserMember == 0)
                                    {
                                        responserMember =
                                            (&m_pclApp->m_memberManager)->CreateMemberInJoin(responser);
                                    }
                                    if (requesterMember == 0)
                                    {
                                        requesterMember =
                                            (&m_pclApp->m_memberManager)->CreateMemberInJoin(requester);
                                    }
                                    short rl = responser->GetLevel();
                                    if ((&m_pclApp->m_memberManager)->RegisterMember(responserMember, rl, requester,
                                                                  true) == 1)
                                    {
                                        short ql = requester->GetLevel();
                                        if ((&m_pclApp->m_memberManager)->RegisterMember(requesterMember, ql,
                                                                      responser, true) == 1)
                                        {
                                            (&m_pclApp->m_memberManager)->SendToDBMemberUpdateCharInfo(
                                                handler, responser->GetUniqCharNo(), 1);
                                            (&m_pclApp->m_memberManager)->SendToDBMemberUpdateCharInfo(
                                                handler, requester->GetUniqCharNo(), 1);
                                            (&m_pclApp->m_memberManager)->SaveMemberOnConnect(
                                                handler, responser, requester, 1);
                                            requester->ResetRequestMemberEnter();
                                            responser->SetMemberRegisterFlag(false);
                                            requester->SetMemberRegisterFlag(false);
                                            DNF_LOG_SCOPE_LINE(0x69b,"./log/MemberModify",
                                                "pclResponserUser Char id(%d)(%d) success and reset, pclRequestUser char id(%d)(%d)!",
                                                requester->GetUniqCharNo(),
                                                requester->IsAbleToRegisterMember(),
                                                responser->GetUniqCharNo(),
                                                responser->IsAbleToRegisterMember());
                                            short l1 = requester->GetLevel();
                                            short l2 = responser->GetLevel();
                                            if (l2 < l1)
                                            {
                                                unsigned char el =
                                                    requester->GetUpperMemberExpLevel();
                                                unsigned char lv =
                                                    (unsigned char)requester->GetLevel();
                                                SendNoticeMemberEnterPacketOk(
                                                    responser, requester, 1, 1, 1, lv, el);
                                                unsigned char lv2 =
                                                    (unsigned char)responser->GetLevel();
                                                SendNoticeMemberEnterPacketReply(
                                                    requester, responser, 1, 2, 0, lv2, 0);
                                            }
                                            else
                                            {
                                                short l3 = requester->GetLevel();
                                                short l4 = responser->GetLevel();
                                                if (l3 < l4)
                                                {
                                                    unsigned char lv3 =
                                                        (unsigned char)requester->GetLevel();
                                                    SendNoticeMemberEnterPacketOk(
                                                        responser, requester, 1, 2, 0, lv3, 0);
                                                    unsigned char el2 =
                                                        responser->GetUpperMemberExpLevel();
                                                    unsigned char lv4 =
                                                        (unsigned char)responser->GetLevel();
                                                    SendNoticeMemberEnterPacketReply(
                                                        requester, responser, 1, 1, 1, lv4, el2);
                                                }
                                            }
                                        }
                                        else
                                        {
                                            short l5 = requester->GetLevel();
                                            short l6 = responser->GetLevel();
                                            DNF_LOG_SCOPE_LINE(0x688,"./log/MemberModify",
                                                "CPacketTranslater::OnMemberEnterReply  :  RegisterMember return false , Responser Char id(%d), Responser Member id(%d), Caller Level(%d), Responser Level(%d)!",
                                                requester->GetUniqCharNo(),
                                                requesterMember->GetMemberKey(), (int)l6,
                                                (int)l5);
                                        }
                                    }
                                    else
                                    {
                                        short l7 = requester->GetLevel();
                                        short l8 = responser->GetLevel();
                                        DNF_LOG_SCOPE_LINE(0x681,"./log/MemberModify",
                                            "CPacketTranslater::OnMemberEnterReply  :  RegisterMember return false , Caller Char id(%d), Caller Member id(%d), Caller Level(%d), Responser Level(%d)!",
                                            responser->GetUniqCharNo(),
                                            responser->GetMemberKey(), (int)l8, (int)l7);
                                    }
                                }
                            }
                            else
                            {
                                SendRequestMemberEnterResult(requester, (unsigned char)err,
                                                             responser->GetCharName());
                                DNF_LOG_SCOPE_LINE(0x66a,"./log/MemberModify", "Err(%d) : %d Fail And Reset %d", err,
                                    requester->GetUniqCharNo(), responser->GetUniqCharNo());
                                requester->ResetRequestMemberEnter();
                            }
                        }
                    }
                }
                else
                {
                    SendRequestMemberEnterResult(requester, '/', responser->GetCharName());
                    DNF_LOG_SCOPE_LINE(0x62e,"./log/MemberModify", "Char id(%d) Reset char id(%d)",
                        requester->GetUniqCharNo(), responser->GetUniqCharNo());
                    requester->ResetRequestMemberEnter();
                }
            }
        }
    }


    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnRequestMemberEnter() Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x6be, "./log/Except", "CPacketTranslater::OnRequestMemberEnter() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnRequestMemberEnter() Exception Break");
        DNF_LOG_SCOPE_LINE(0x6c4, "./log/Except", "CPacketTranslater::OnRequestMemberEnter() Exception Break\n");
    }
}
```

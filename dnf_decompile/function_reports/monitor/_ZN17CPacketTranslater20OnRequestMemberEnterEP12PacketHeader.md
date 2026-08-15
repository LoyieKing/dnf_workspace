# _ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader

`CPacketTranslater::OnRequestMemberEnter(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8080846` | `0x76a` | `0x806c64c` | `0x78a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,496 +1,503 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0xdc,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x75b>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x38(%ebp)
-movl   $0x0,-0x34(%ebp)
+je     <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x77b>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x10,%eax
-mov    %eax,-0x30(%ebp)
+mov    %eax,-0x44(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x2d0,%eax
-mov    %eax,-0x2c(%ebp)
-mov    -0x38(%ebp),%eax
+mov    %eax,-0x40(%ebp)
+mov    0x8(%ebp),%eax
+mov    %eax,-0x3c(%ebp)
+mov    -0x3c(%ebp),%eax
 mov    0xe(%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
+mov    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x3c(%ebp)
-cmpl   $0x0,-0x3c(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x75e>
-lea    -0x79(%ebp),%eax
+mov    %eax,-0x38(%ebp)
+cmpl   $0x0,-0x38(%ebp)
+je     <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x77e>
+lea    -0x7d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-mov    -0x38(%ebp),%eax
+mov    -0x3c(%ebp),%eax
 lea    0x12(%eax),%edx
-lea    -0x79(%ebp),%eax
+lea    -0x7d(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
-lea    -0x80(%ebp),%eax
+lea    -0x84(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x80(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
+lea    -0x84(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager17FindUser_CharNameESs>
-mov    %eax,-0x40(%ebp)
-cmpl   $0x0,-0x40(%ebp)
-sete   %bl
-lea    -0x80(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+lea    -0x84(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0xe2>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0xdb>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x80(%ebp),%eax
+lea    -0x84(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0xca>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0xc3>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x79(%ebp),%eax
+lea    -0x7d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x651>
-lea    -0x79(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x671>
+lea    -0x7d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
-test   %bl,%bl
-je     <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x113>
-mov    -0x38(%ebp),%eax
+cmpl   $0x0,-0x34(%ebp)
+jne    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x10e>
+mov    -0x3c(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,0x8(%esp)
 movl   $0x31,0x4(%esp)
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17CPacketTranslater28SendRequestMemberEnterResultEP5CUserhPKc>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x75f>
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17CPacketTranslater28SendRequestMemberEnterResultEP5CUserhPKc>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x77f>
+mov    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    -0x3c(%ebp),%edx
+mov    0xe(%edx),%edx
+mov    %eax,0x8(%esp)
+mov    %edx,0x4(%esp)
 mov    -0x40(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    -0x38(%ebp),%edx
-mov    0xe(%edx),%edx
-mov    %eax,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager21IsAlreadyMemberMemberEjj>
 test   %al,%al
+setne  %al
+test   %al,%al
 je     <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x1b5>
-mov    -0x38(%ebp),%eax
+mov    -0x3c(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,0x8(%esp)
 movl   $0x32,0x4(%esp)
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17CPacketTranslater28SendRequestMemberEnterResultEP5CUserhPKc>
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%esi
-mov    -0x3c(%ebp),%eax
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17CPacketTranslater28SendRequestMemberEnterResultEP5CUserhPKc>
+mov    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,%esi
+mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,%ebx
 movl   $0x599,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x78(%ebp),%eax
+lea    -0x7c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Err Already Member : requester(%d) responser(%d)",0x8(%esp)
 movl   $"./log/MemberModify",0x4(%esp)
-lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x75f>
-mov    -0x3c(%ebp),%eax
+lea    -0x7c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x77f>
+mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser22IsAbleToRegisterMemberEv>
 xor    $0x1,%eax
 test   %al,%al
 jne    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x1d9>
-mov    -0x40(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser22IsAbleToRegisterMemberEv>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x1e0>
 mov    $0x1,%eax
 jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x1e5>
 mov    $0x0,%eax
 test   %al,%al
 je     <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x297>
-mov    -0x38(%ebp),%eax
+mov    -0x3c(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,0x8(%esp)
 movl   $0x37,0x4(%esp)
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17CPacketTranslater28SendRequestMemberEnterResultEP5CUserhPKc>
-mov    -0x40(%ebp),%eax
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17CPacketTranslater28SendRequestMemberEnterResultEP5CUserhPKc>
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser22IsAbleToRegisterMemberEv>
 movzbl %al,%eax
 mov    %eax,-0xbc(%ebp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%esi
-mov    -0x3c(%ebp),%eax
+mov    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,%esi
+mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser22IsAbleToRegisterMemberEv>
 movzbl %al,%edi
-mov    -0x3c(%ebp),%eax
+mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,%ebx
 movl   $0x5a2,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x70(%ebp),%eax
+lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xbc(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %esi,0x14(%esp)
 mov    %edi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Err Member Register Restrict : requester(%d:%d) responser(%d:%d)",0x8(%esp)
 movl   $"./log/MemberModify",0x4(%esp)
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x75f>
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,0x4(%esp)
-mov    -0x40(%ebp),%eax
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x77f>
+mov    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,0x4(%esp)
+mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11IsBlackUserEj>
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x32f>
-mov    -0x38(%ebp),%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x334>
+mov    -0x3c(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,0x8(%esp)
 movl   $0x36,0x4(%esp)
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17CPacketTranslater28SendRequestMemberEnterResultEP5CUserhPKc>
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%esi
-mov    -0x3c(%ebp),%eax
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17CPacketTranslater28SendRequestMemberEnterResultEP5CUserhPKc>
+mov    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,%esi
+mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,%ebx
 movl   $0x5a9,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x68(%ebp),%eax
+lea    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Err Member Register Black : requester(%d) responser(%d)",0x8(%esp)
 movl   $"./log/MemberModify",0x4(%esp)
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x75f>
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x77f>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication13GetGMAccountsEv>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-je     <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x3e1>
-mov    -0x40(%ebp),%eax
+mov    %eax,-0x30(%ebp)
+cmpl   $0x0,-0x30(%ebp)
+je     <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x36f>
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser7GetDBIDEv>
 mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8WongWork11CGMAccounts4isGMEj>
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x3e1>
-mov    -0x38(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x36f>
+mov    $0x1,%eax
+jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x374>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x3f2>
+mov    -0x3c(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,0x8(%esp)
 movl   $0x5a,0x4(%esp)
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17CPacketTranslater28SendRequestMemberEnterResultEP5CUserhPKc>
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%esi
-mov    -0x3c(%ebp),%eax
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17CPacketTranslater28SendRequestMemberEnterResultEP5CUserhPKc>
+mov    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,%esi
+mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,%ebx
 movl   $0x5b4,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x60(%ebp),%eax
+lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Err Member Register GM : requester(%d) responser(%d)",0x8(%esp)
 movl   $"./log/MemberModify",0x4(%esp)
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x75f>
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x77f>
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,0x4(%esp)
+mov    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager10FindMemberEj>
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x2c(%ebp)
+mov    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,0x4(%esp)
 mov    -0x40(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager10FindMemberEj>
-mov    %eax,-0x20(%ebp)
-mov    -0x40(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser22GetMemberEnterCallerIdEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x451>
-mov    -0x38(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x462>
+mov    -0x3c(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,0x8(%esp)
 movl   $0x29,0x4(%esp)
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17CPacketTranslater28SendRequestMemberEnterResultEP5CUserhPKc>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x75f>
-mov    -0x3c(%ebp),%eax
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17CPacketTranslater28SendRequestMemberEnterResultEP5CUserhPKc>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x77f>
+movb   $0x0,-0x21(%ebp)
+mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser22GetMemberEnterCallerIdEv>
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x483>
-mov    -0x3c(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x498>
+mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser22GetMemberEnterCallerIdEv>
 mov    %eax,%ebx
+mov    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+cmp    %eax,%ebx
+jne    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x498>
+mov    $0x1,%eax
+jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x49d>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x4a5>
+movb   $0x1,-0x21(%ebp)
+cmpb   $0x0,-0x21(%ebp)
+je     <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x4cd>
+mov    -0x3c(%ebp),%eax
+add    $0x12,%eax
+mov    %eax,0x8(%esp)
+movl   $0x29,0x4(%esp)
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17CPacketTranslater28SendRequestMemberEnterResultEP5CUserhPKc>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x77f>
+mov    -0x28(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,0xc(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x38(%ebp),%eax
+mov    %eax,0x4(%esp)
 mov    -0x40(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-cmp    %eax,%ebx
-jne    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x483>
-mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x488>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x4ae>
-mov    -0x38(%ebp),%eax
+call   <T> <_ZN14CMemberManager16CheckMemberEnterEP5CUserP7CMemberS1_S3_>
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x5ee>
+mov    -0x3c(%ebp),%eax
+mov    0xe(%eax),%eax
+movl   $0x1,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser21RecordCallMemberEnterEjt>
+cmp    $0x1,%al
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x5cc>
+mov    -0x3c(%ebp),%eax
+add    $0x12,%eax
+mov    %eax,0x8(%esp)
+movl   $0x0,0x4(%esp)
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17CPacketTranslater28SendRequestMemberEnterResultEP5CUserhPKc>
+lea    -0xb6(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN48Packet_Monitor_Request_Member_Enter_To_ResponserC1Ev>
+mov    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,-0xac(%ebp)
+mov    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0xa8(%ebp)
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser8GetLevelEv>
+mov    %ax,-0xa4(%ebp)
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser11GetCharNameEv>
+movl   $0x1d,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0xb6(%ebp),%eax
+add    $0x14,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+lea    -0xb6(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x77f>
+mov    -0x3c(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,0x8(%esp)
 movl   $0x29,0x4(%esp)
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17CPacketTranslater28SendRequestMemberEnterResultEP5CUserhPKc>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x75f>
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17CPacketTranslater28SendRequestMemberEnterResultEP5CUserhPKc>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x77f>
+mov    -0x3c(%ebp),%eax
+lea    0x12(%eax),%edx
 mov    -0x20(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,0xc(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    -0x3c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager16CheckMemberEnterEP5CUserP7CMemberS1_S3_>
-mov    %eax,-0x34(%ebp)
-cmpl   $0x0,-0x34(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x56a>
-mov    -0x38(%ebp),%eax
-lea    0x12(%eax),%edx
-mov    -0x34(%ebp),%eax
 movzbl %al,%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17CPacketTranslater28SendRequestMemberEnterResultEP5CUserhPKc>
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%esi
-mov    -0x3c(%ebp),%eax
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17CPacketTranslater28SendRequestMemberEnterResultEP5CUserhPKc>
+mov    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,%esi
+mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,%ebx
 movl   $0x5d0,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x58(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x14(%esp)
 mov    %ebx,0x10(%esp)
-mov    -0x34(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Err(%d) Member Register : requester(%d) responser(%d)",0x8(%esp)
 movl   $"./log/MemberModify",0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x75f>
-mov    -0x38(%ebp),%eax
-mov    0xe(%eax),%eax
-movl   $0x1,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser21RecordCallMemberEnterEjt>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x5b0>
-mov    -0x38(%ebp),%eax
-add    $0x12,%eax
-mov    %eax,0x8(%esp)
-movl   $0x29,0x4(%esp)
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17CPacketTranslater28SendRequestMemberEnterResultEP5CUserhPKc>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x75f>
-mov    -0x38(%ebp),%eax
-add    $0x12,%eax
-mov    %eax,0x8(%esp)
-movl   $0x0,0x4(%esp)
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17CPacketTranslater28SendRequestMemberEnterResultEP5CUserhPKc>
-lea    -0xb2(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN48Packet_Monitor_Request_Member_Enter_To_ResponserC1Ev>
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0xa8(%ebp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0xa4(%ebp)
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser8GetLevelEv>
-mov    %ax,-0xa0(%ebp)
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser11GetCharNameEv>
-movl   $0x1d,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0xb2(%ebp),%eax
-add    $0x14,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-lea    -0xb2(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x75f>
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x77f>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x6f3>
+jne    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x713>
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
 movl   $0x5ee,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnRequestMemberEnter() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x6ec>
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x70c>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x75f>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x77f>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnRequestMemberEnter() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x5f4,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnRequestMemberEnter() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x754>
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x774>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x75f>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x77f>
 nop
-jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x75f>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader+0x77f>
 nop
 add    $0xdc,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnRequestMemberEnter(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader
               (PacketHeader *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  void *__src;
  bool bVar8;
  Packet_Monitor_Request_Member_Enter_To_Responser local_b6 [10];
  undefined4 local_ac;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined1 auStack_a2 [30];
  string local_84 [7];
  allocator local_7d;
  CMyFileLog local_7c [8];
  CMyFileLog local_74 [8];
  CMyFileLog local_6c [8];
  CMyFileLog local_64 [8];
  CMyFileLog local_5c [24];
  CUser *local_44;
  CUser *local_40;
  PacketHeader *local_3c;
  int local_38;
  CApplication *local_34;
  CApplication *local_30;
  CGMAccounts *local_2c;
  CMember *local_28;
  CMember *local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
    return;
  }
  local_3c = param_1;
  local_38 = 0;
  local_34 = m_pclApp + 0x10;
  local_30 = m_pclApp + 0x2d0;
                    /* try { // try from 08080894 to 08080898 has its CatchHandler @ 08080e97 */
  local_40 = (CUser *)CUserManager::FindUser_CharNo((uint)local_34);
  if (local_40 == (CUser *)0x0) {
    return;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 080808cd to 080808d1 has its CatchHandler @ 08080910 */
  std::string::string(local_84,(char *)(local_3c + 0x12),&local_7d);
                    /* try { // try from 080808df to 080808e3 has its CatchHandler @ 080808fb */
  local_44 = (CUser *)CUserManager::FindUser_CharName(local_34,local_84);
  bVar8 = local_44 == (CUser *)0x0;
                    /* try { // try from 080808f4 to 080808f8 has its CatchHandler @ 08080910 */
  std::string::~string(local_84);
  std::allocator<char>::~allocator((allocator<char> *)&local_7d);
  if (bVar8) {
                    /* try { // try from 0808094f to 08080e91 has its CatchHandler @ 08080e97 */
    SendRequestMemberEnterResult(local_40,'1',(char *)(local_3c + 0x12));
    return;
  }
  uVar2 = CUser::GetUniqCharNo(local_44);
  cVar1 = CMemberManager::IsAlreadyMemberMember
                    ((CMemberManager *)local_30,*(uint *)(local_3c + 0xe),uVar2);
  if (cVar1 != '\0') {
    SendRequestMemberEnterResult(local_40,'2',(char *)(local_3c + 0x12));
    uVar3 = CUser::GetUniqCharNo(local_44);
    uVar4 = CUser::GetUniqCharNo(local_40);
    CMyFileLog::CMyFileLog(local_7c,"OnRequestMemberEnter",0x599);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_7c,"./log/MemberModify","Err Already Member : requester(%d) responser(%d)",
               uVar4,uVar3);
    return;
  }
  cVar1 = CUser::IsAbleToRegisterMember(local_40);
  if ((cVar1 == '\x01') && (cVar1 = CUser::IsAbleToRegisterMember(local_44), cVar1 == '\x01')) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (bVar8) {
    SendRequestMemberEnterResult(local_40,'7',(char *)(local_3c + 0x12));
    uVar2 = CUser::IsAbleToRegisterMember(local_44);
    uVar3 = CUser::GetUniqCharNo(local_44);
    uVar5 = CUser::IsAbleToRegisterMember(local_40);
    uVar4 = CUser::GetUniqCharNo(local_40);
    CMyFileLog::CMyFileLog(local_74,"OnRequestMemberEnter",0x5a2);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_74,"./log/MemberModify",
               "Err Member Register Restrict : requester(%d:%d) responser(%d:%d)",uVar4,uVar5 & 0xff
               ,uVar3,uVar2 & 0xff);
    return;
  }
  CUser::GetUniqCharNo(local_40);
  cVar1 = CUser::IsBlackUser((uint)local_44);
  if (cVar1 != '\0') {
    SendRequestMemberEnterResult(local_40,'6',(char *)(local_3c + 0x12));
    uVar3 = CUser::GetUniqCharNo(local_44);
    uVar4 = CUser::GetUniqCharNo(local_40);
    CMyFileLog::CMyFileLog(local_6c,"OnRequestMemberEnter",0x5a9);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_6c,"./log/MemberModify",
               "Err Member Register Black : requester(%d) responser(%d)",uVar4,uVar3);
    return;
  }
  local_2c = (CGMAccounts *)CApplication::GetGMAccounts(m_pclApp);
  if (local_2c != (CGMAccounts *)0x0) {
    uVar2 = CUser::GetDBID(local_44);
    cVar1 = WongWork::CGMAccounts::isGM(local_2c,uVar2);
    if (cVar1 != '\0') {
      SendRequestMemberEnterResult(local_40,'Z',(char *)(local_3c + 0x12));
      uVar3 = CUser::GetUniqCharNo(local_44);
      uVar4 = CUser::GetUniqCharNo(local_40);
      CMyFileLog::CMyFileLog(local_64,"OnRequestMemberEnter",0x5b4);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_64,"./log/MemberModify",
                 "Err Member Register GM : requester(%d) responser(%d)",uVar4,uVar3);
      return;
    }
  }
  CUser::GetUniqCharNo(local_40);
  local_28 = (CMember *)CMemberManager::_ZN14CMemberManager10FindMemberEj((uint)local_30);
  CUser::GetUniqCharNo(local_44);
  local_24 = (CMember *)CMemberManager::_ZN14CMemberManager10FindMemberEj((uint)local_30);
  iVar6 = CUser::GetMemberEnterCallerId(local_44);
  if (iVar6 != 0) {
    SendRequestMemberEnterResult(local_40,')',(char *)(local_3c + 0x12));
    return;
  }
  iVar6 = CUser::GetMemberEnterCallerId(local_40);
  if (iVar6 != 0) {
    iVar6 = CUser::GetMemberEnterCallerId(local_40);
    iVar7 = CUser::GetUniqCharNo(local_44);
    if (iVar6 == iVar7) {
      bVar8 = true;
      goto LAB_08080cce;
    }
  }
  bVar8 = false;
LAB_08080cce:
  if (bVar8) {
    SendRequestMemberEnterResult(local_40,')',(char *)(local_3c + 0x12));
  }
  else {
    local_38 = CMemberManager::_ZN14CMemberManager16CheckMemberEnterEP5CUserP7CMemberS1_S3_
                         ((CMemberManager *)local_30,local_40,local_28,local_44,local_24);
    if (local_38 == 0) {
      cVar1 = CUser::RecordCallMemberEnter(local_44,*(uint *)(local_3c + 0xe),1);
      if (cVar1 == '\x01') {
        SendRequestMemberEnterResult(local_40,'\0',(char *)(local_3c + 0x12));
        Packet_Monitor_Request_Member_Enter_To_Responser::
        Packet_Monitor_Request_Member_Enter_To_Responser(local_b6);
        local_ac = CUser::GetIdByChannel(local_44);
        local_a8 = CUser::GetUniqCharNo(local_44);
        local_a4 = CUser::GetLevel(local_40);
        __src = (void *)CUser::GetCharName(local_40);
        memcpy(auStack_a2,__src,0x1d);
        CUser::SendTcpGameserver(local_44,(PacketHeader *)local_b6);
      }
      else {
        SendRequestMemberEnterResult(local_40,')',(char *)(local_3c + 0x12));
      }
    }
    else {
      SendRequestMemberEnterResult(local_40,(uchar)local_38,(char *)(local_3c + 0x12));
      uVar3 = CUser::GetUniqCharNo(local_44);
      uVar4 = CUser::GetUniqCharNo(local_40);
      CMyFileLog::CMyFileLog(local_5c,"OnRequestMemberEnter",0x5d0);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_5c,"./log/MemberModify",
                 "Err(%d) Member Register : requester(%d) responser(%d)",local_38,uVar4,uVar3);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 1129 行）：

```cpp
void CPacketTranslater::OnRequestMemberEnter(PacketHeader* pkt)
{try
{


    if (m_pclApp == 0)
    {
        return;
    }
    CUserManager* userMgr = &m_pclApp->m_userManager;
    CMemberManager* memberMgr = &m_pclApp->m_memberManager;
    Packet_Monitor_Request_Member_Enter* req =
        (Packet_Monitor_Request_Member_Enter*)pkt;
    CUser* requester = userMgr->FindUser_CharNo(req->m_charNo);
    if (requester == 0)
    {
        return;
    }
    CUser* target = userMgr->FindUser_CharName(req->m_name);
    if (target == 0)
    {
        SendRequestMemberEnterResult(requester, '1', req->m_name);
        return;
    }
    if (memberMgr->IsAlreadyMemberMember(req->m_charNo,
                                         target->GetUniqCharNo()) != 0)
    {
        SendRequestMemberEnterResult(requester, '2', req->m_name);
        DNF_LOG_SCOPE_LINE(0x599,"./log/MemberModify", "Err Already Member : requester(%d) responser(%d)",
            requester->GetUniqCharNo(), target->GetUniqCharNo());
        return;
    }
    if (requester->IsAbleToRegisterMember() != 1 || target->IsAbleToRegisterMember() != 1)
    {
        SendRequestMemberEnterResult(requester, '7', req->m_name);
        DNF_LOG_SCOPE_LINE(0x5a2,"./log/MemberModify",
            "Err Member Register Restrict : requester(%d:%d) responser(%d:%d)",
            requester->GetUniqCharNo(), requester->IsAbleToRegisterMember(),
            target->GetUniqCharNo(), target->IsAbleToRegisterMember());
        return;
    }
    if (requester->IsBlackUser(target->GetUniqCharNo()) != 0)
    {
        SendRequestMemberEnterResult(requester, '6', req->m_name);
        DNF_LOG_SCOPE_LINE(0x5a9,"./log/MemberModify", "Err Member Register Black : requester(%d) responser(%d)",
            requester->GetUniqCharNo(), target->GetUniqCharNo());
        return;
    }
    WongWork::CGMAccounts* gm = (WongWork::CGMAccounts*)m_pclApp->GetGMAccounts();
    if (gm != 0 && gm->isGM(target->GetDBID()) != 0)
    {
        SendRequestMemberEnterResult(requester, 'Z', req->m_name);
        DNF_LOG_SCOPE_LINE(0x5b4,"./log/MemberModify", "Err Member Register GM : requester(%d) responser(%d)",
            requester->GetUniqCharNo(), target->GetUniqCharNo());
        return;
    }
    CMember* requesterMember = memberMgr->FindMember(requester->GetUniqCharNo());
    CMember* targetMember = memberMgr->FindMember(target->GetUniqCharNo());
    if (target->GetMemberEnterCallerId() != 0)
    {
        SendRequestMemberEnterResult(requester, ')', req->m_name);
        return;
    }
    bool pending = false;
    if (requester->GetMemberEnterCallerId() != 0 &&
        requester->GetMemberEnterCallerId() == target->GetUniqCharNo())
    {
        pending = true;
    }
    if (pending)
    {
        SendRequestMemberEnterResult(requester, ')', req->m_name);
    }
    else
    {
        int err = memberMgr->CheckMemberEnter(requester, requesterMember, target, targetMember);
        if (err == 0)
        {
            if (target->RecordCallMemberEnter(req->m_charNo, 1) == 1)
            {
                SendRequestMemberEnterResult(requester, 0, req->m_name);
                Packet_Monitor_Request_Member_Enter_To_Responser rpkt;
                rpkt.m_idByChannel = target->GetIdByChannel();
                rpkt.m_uniqCharNo = target->GetUniqCharNo();
                rpkt.m_level = (unsigned short)requester->GetLevel();
                memcpy(rpkt.m_name, requester->GetCharName(), 0x1d);
                target->SendTcpGameserver(&rpkt);
            }
            else
            {
                SendRequestMemberEnterResult(requester, ')', req->m_name);
            }
        }
        else
        {
            SendRequestMemberEnterResult(requester, (unsigned char)err, req->m_name);
            DNF_LOG_SCOPE_LINE(0x5d0, "./log/MemberModify",
                "Err(%d) Member Register : requester(%d) responser(%d)", err,
                requester->GetUniqCharNo(), target->GetUniqCharNo());
        }
    }


    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnRequestMemberEnter() Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x5ee, "./log/Except", "CPacketTranslater::OnRequestMemberEnter() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnRequestMemberEnter() Exception Break");
        DNF_LOG_SCOPE_LINE(0x5f4, "./log/Except", "CPacketTranslater::OnRequestMemberEnter() Exception Break\n");
    }
}
```

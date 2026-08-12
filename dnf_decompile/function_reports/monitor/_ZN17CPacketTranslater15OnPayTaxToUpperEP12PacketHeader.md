# _ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader

`CPacketTranslater::OnPayTaxToUpper(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8082b74` | `0x58b` | `0x806e722` | `0x522` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,355 +1,330 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0xec,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0xe2>
-lea    -0x6d(%ebp),%eax
+lea    -0x79(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x6d(%ebp),%eax
+lea    -0x79(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnPayTaxToUpper : 0 == m_pclApp",0x4(%esp)
-lea    -0x74(%ebp),%eax
+lea    -0x80(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x74(%ebp),%esi
+lea    -0x80(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x90>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x74(%ebp),%eax
+lea    -0x80(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x8a>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0xa7>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0xa7>
-lea    -0x74(%ebp),%eax
+lea    -0x80(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0xbf>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0xa7>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x6d(%ebp),%eax
+lea    -0x79(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x475>
-lea    -0x6d(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x40f>
+lea    -0x79(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x38(%ebp)
-mov    -0x38(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0x2d0,%eax
+mov    %eax,-0x50(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0x10,%eax
+mov    %eax,-0x4c(%ebp)
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x2d0,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x50(%ebp),%eax
+mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager10FindMemberEj>
-mov    %eax,-0x3c(%ebp)
-cmpl   $0x0,-0x3c(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x16d>
-mov    -0x38(%ebp),%eax
+mov    %eax,-0x48(%ebp)
+cmpl   $0x0,-0x48(%ebp)
+jne    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x171>
+mov    0x8(%ebp),%eax
 mov    0x12(%eax),%edi
-mov    -0x38(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0xe(%eax),%esi
-mov    -0x38(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%ebx
 movl   $0x842,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x6c(%ebp),%eax
+lea    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"[MEMBER] CPacketTranslater::OnPayTaxToUpper : pclMember == 0!\tchar id(%d)\tmoney(%d)\tfatigue(%d)",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x6c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x580>
-mov    -0x3c(%ebp),%eax
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x517>
+mov    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK7CMember21GetUpperMember_CharIdEv>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0x44(%ebp)
-cmpl   $0x0,-0x44(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x1e7>
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK7CMember21GetUpperMember_CharIdEv>
-mov    %eax,%ebx
-movl   $0x849,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x64(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnPayTaxToUpper : pclUpperUser == 0!, Maybe, upper Member is not connect!\tupper char id(%d)",0x8(%esp)
-movl   $"./log/Member",0x4(%esp)
-lea    -0x64(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x580>
-mov    -0x38(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    -0x44(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0x40(%ebp)
 cmpl   $0x0,-0x40(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x269>
-mov    -0x38(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x1dc>
+movl   $0x849,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x44(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnPayTaxToUpper : pclUpperUser == 0!, Maybe, upper Member is not connect!\tupper char id(%d)",0x8(%esp)
+movl   $"./log/Member",0x4(%esp)
+lea    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x517>
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+mov    %eax,-0x3c(%ebp)
+cmpl   $0x0,-0x3c(%ebp)
+jne    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x253>
+mov    0x8(%ebp),%eax
 mov    0x12(%eax),%edi
-mov    -0x38(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0xe(%eax),%esi
-mov    -0x38(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%ebx
 movl   $0x84f,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x5c(%ebp),%eax
+lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"[MEMBER] CPacketTranslater::OnPayTaxToUpper : pclPayUser == 0!\tchar id(%d)\tmoney(%d)\tfatigue(%d)",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x580>
-mov    -0x44(%ebp),%eax
+lea    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x517>
+mov    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser21GetConnLowerMemberCntEv>
-mov    %eax,-0x34(%ebp)
-mov    -0x44(%ebp),%eax
+mov    %eax,-0x38(%ebp)
+mov    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser8GetLevelEv>
-movswl %ax,%ebx
+mov    %ax,-0x32(%ebp)
+movswl -0x32(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_MemberManagerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager24GetLowerMemberEnterLimitEj>
 mov    %eax,-0x30(%ebp)
-mov    -0x40(%ebp),%eax
+mov    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser22GetUpperMemberExpLevelEv>
-movzbl %al,%eax
+mov    %al,-0x29(%ebp)
+movzbl -0x29(%ebp),%eax
 mov    %ax,-0xbe(%ebp)
 filds  -0xbe(%ebp)
 fldl   &data#f224355d(.rodata)
 fmulp  %st,%st(1)
 fstps  -0xbc(%ebp)
 flds   -0xbc(%ebp)
-fildl  -0x34(%ebp)
-fildl  -0x30(%ebp)
-fdivrp %st,%st(1)
-fldl   &data#79b8813d(.rodata)
-fmulp  %st,%st(1)
-fstps  -0xbc(%ebp)
-flds   -0xbc(%ebp)
-faddp  %st,%st(1)
-fstps  -0x2c(%ebp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser22GetUpperMemberExpLevelEv>
-movzbl %al,%eax
-mov    %ax,-0xbe(%ebp)
-filds  -0xbe(%ebp)
-fldl   &data#f224355d(.rodata)
-fmulp  %st,%st(1)
-fstps  -0xbc(%ebp)
-flds   -0xbc(%ebp)
-fildl  -0x34(%ebp)
-fildl  -0x30(%ebp)
+fildl  -0x38(%ebp)
+mov    -0x30(%ebp),%eax
+mov    $0x0,%edx
+mov    %eax,-0xc8(%ebp)
+mov    %edx,-0xc4(%ebp)
+fildll -0xc8(%ebp)
 fdivrp %st,%st(1)
 fldl   &data#79b8813d(.rodata)
 fmulp  %st,%st(1)
 fstps  -0xbc(%ebp)
 flds   -0xbc(%ebp)
 faddp  %st,%st(1)
 fstps  -0x28(%ebp)
-mov    -0x38(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0xe(%eax),%eax
 mov    $0x0,%edx
 mov    %eax,-0xc8(%ebp)
 mov    %edx,-0xc4(%ebp)
 fildll -0xc8(%ebp)
-fmuls  -0x2c(%ebp)
+flds   -0x28(%ebp)
+fmulp  %st,%st(1)
 fnstcw -0xca(%ebp)
 movzwl -0xca(%ebp),%eax
 mov    $0xc,%ah
 mov    %ax,-0xcc(%ebp)
 fldcw  -0xcc(%ebp)
-fistpll -0xc8(%ebp)
+fistpl -0x24(%ebp)
 fldcw  -0xca(%ebp)
-mov    -0xc8(%ebp),%eax
-mov    -0xc4(%ebp),%edx
-mov    %eax,-0x24(%ebp)
-mov    -0x38(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0x12(%eax),%eax
 mov    $0x0,%edx
 mov    %eax,-0xc8(%ebp)
 mov    %edx,-0xc4(%ebp)
 fildll -0xc8(%ebp)
-fmuls  -0x28(%ebp)
+flds   -0x28(%ebp)
+fmulp  %st,%st(1)
 fldcw  -0xcc(%ebp)
-fistpll -0xc8(%ebp)
+fistpl -0x20(%ebp)
 fldcw  -0xca(%ebp)
-mov    -0xc8(%ebp),%eax
-mov    -0xc4(%ebp),%edx
-mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+jne    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x383>
 cmpl   $0x0,-0x20(%ebp)
-jne    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x3e9>
-cmpl   $0x0,-0x24(%ebp)
-je     <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x57f>
-lea    -0xac(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x517>
+lea    -0xb8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN37Packet_Monitor_Member_Pay_Tax_ToUpperC1Ev>
-mov    -0x44(%ebp),%eax
+mov    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,-0xae(%ebp)
+mov    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0xaa(%ebp)
+mov    -0x24(%ebp),%eax
+mov    %eax,-0xa6(%ebp)
+mov    -0x20(%ebp),%eax
 mov    %eax,-0xa2(%ebp)
-mov    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x9e(%ebp)
-mov    -0x24(%ebp),%eax
-mov    %eax,-0x9a(%ebp)
-mov    -0x20(%ebp),%eax
-mov    %eax,-0x96(%ebp)
-mov    -0x40(%ebp),%eax
+mov    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0xac(%ebp),%eax
+lea    -0xb8(%ebp),%eax
 add    $0x1a,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-lea    -0xac(%ebp),%eax
+lea    -0xb8(%ebp),%eax
 movl   $0x38,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x44(%ebp),%eax
+mov    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x580>
+jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x517>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x517>
+jne    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x4b1>
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
 movl   $"CPacketTranslater::OnPayTaxToUpper() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x880,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnPayTaxToUpper() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x510>
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x4aa>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x580>
+jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x517>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnPayTaxToUpper() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x886,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnPayTaxToUpper() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x578>
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x512>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x580>
-nop
 add    $0xec,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CPacketTranslater::OnPayTaxToUpper(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  short sVar5;
  CDNFException *this;
  undefined4 uVar6;
  CMemberManager *this_00;
  void *__src;
  ulonglong local_cc;
  Packet_Monitor_Member_Pay_Tax_ToUpper local_b0 [10];
  undefined4 local_a6;
  undefined4 local_a2;
  int local_9e;
  int local_9a;
  undefined1 auStack_96 [30];
  string local_78 [7];
  allocator local_71;
  CMyFileLog local_70 [8];
  CMyFileLog local_68 [8];
  CMyFileLog local_60 [24];
  CUser *local_48;
  CUser *local_44;
  CMember *local_40;
  PacketHeader *local_3c;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  int local_28;
  int local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08082bad to 08082bb1 has its CatchHandler @ 08082c1b */
    std::string::string(local_78,"CPacketTranslater::OnPayTaxToUpper : 0 == m_pclApp",&local_71);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08082bcc to 08082bd0 has its CatchHandler @ 08082bd3 */
    CDNFException::CDNFException(this,local_78);
                    /* try { // try from 08082c0a to 08082c0e has its CatchHandler @ 08082c11 */
    std::string::~string(local_78);
    std::allocator<char>::~allocator((allocator<char> *)&local_71);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08082c51 to 08082fe3 has its CatchHandler @ 08082fe9 */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_3c = param_1;
  local_40 = (CMember *)CMemberManager::_ZN14CMemberManager10FindMemberEj((uint)(m_pclApp + 0x2d0));
  if (local_40 == (CMember *)0x0) {
    uVar6 = *(undefined4 *)(local_3c + 0x12);
    uVar1 = *(undefined4 *)(local_3c + 0xe);
    uVar2 = *(undefined4 *)(local_3c + 10);
    CMyFileLog::CMyFileLog(local_70,"OnPayTaxToUpper",0x842);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_70,"./log/Except",
               "[MEMBER] CPacketTranslater::OnPayTaxToUpper : pclMember == 0!\tchar id(%d)\tmoney(%d)\tfatigue(%d)"
               ,uVar2,uVar1,uVar6);
  }
  else {
    CMember::GetUpperMember_CharId(local_40);
    local_48 = (CUser *)CUserManager::FindUser_CharNo((uint)(m_pclApp + 0x10));
    if (local_48 == (CUser *)0x0) {
      uVar6 = CMember::GetUpperMember_CharId(local_40);
      CMyFileLog::CMyFileLog(local_68,"OnPayTaxToUpper",0x849);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_68,"./log/Member",
                 "CPacketTranslater::OnPayTaxToUpper : pclUpperUser == 0!, Maybe, upper Member is not connect!\tupper char id(%d)"
                 ,uVar6);
    }
    else {
      local_44 = (CUser *)CUserManager::FindUser_CharNo((uint)(m_pclApp + 0x10));
      if (local_44 == (CUser *)0x0) {
        uVar6 = *(undefined4 *)(local_3c + 0x12);
        uVar1 = *(undefined4 *)(local_3c + 0xe);
        uVar2 = *(undefined4 *)(local_3c + 10);
        CMyFileLog::CMyFileLog(local_60,"OnPayTaxToUpper",0x84f);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_60,"./log/Except",
                   "[MEMBER] CPacketTranslater::OnPayTaxToUpper : pclPayUser == 0!\tchar id(%d)\tmoney(%d)\tfatigue(%d)"
                   ,uVar2,uVar1,uVar6);
      }
      else {
        local_38 = CUser::GetConnLowerMemberCnt(local_48);
        sVar5 = CUser::GetLevel(local_48);
        this_00 = (CMemberManager *)CApplication::Get_MemberManager(m_pclApp);
        local_34 = CMemberManager::_ZN14CMemberManager24GetLowerMemberEnterLimitEj
                             (this_00,(int)sVar5);
        bVar4 = CUser::GetUpperMemberExpLevel(local_44);
        local_30 = (float)_DAT_08131158 * ((float)local_38 / (float)local_34) +
                   (float)_DAT_08131150 * (float)bVar4;
        bVar4 = CUser::GetUpperMemberExpLevel(local_44);
        local_2c = (float)_DAT_08131158 * ((float)local_38 / (float)local_34) +
                   (float)_DAT_08131150 * (float)bVar4;
        local_cc = (ulonglong)*(uint *)(local_3c + 0xe);
        local_cc._0_4_ = (int)(longlong)ROUND((float)local_cc * local_30);
        iVar3 = (int)local_cc;
        local_28 = (int)local_cc;
        local_cc = (ulonglong)*(uint *)(local_3c + 0x12);
        local_cc._0_4_ = (int)(longlong)ROUND((float)local_cc * local_2c);
        local_24 = (int)local_cc;
        if (((int)local_cc != 0) || (iVar3 != 0)) {
          Packet_Monitor_Member_Pay_Tax_ToUpper::Packet_Monitor_Member_Pay_Tax_ToUpper(local_b0);
          local_a6 = CUser::GetIdByChannel(local_48);
          local_a2 = CUser::GetUniqCharNo(local_48);
          local_9e = local_28;
          local_9a = local_24;
          __src = (void *)CUser::GetCharName(local_44);
          memcpy(auStack_96,__src,0x1d);
          CUser::SendToGameserver(local_48,(char *)local_b0,0x38);
        }
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 1606 行）：

```cpp
void CPacketTranslater::OnPayTaxToUpper(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            throw CDNFException("CPacketTranslater::OnPayTaxToUpper : 0 == m_pclApp");
        }
        CMemberManager* memberMgr = (CMemberManager*)((char*)m_pclApp + 0x2d0);
        CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
        CMember* member = memberMgr->FindMember(((RA_UINT<10>*)pkt)->v);
        if (member == 0)
        {
            DNF_LOG_SCOPE_LINE(0x842,"./log/Except",
                "[MEMBER] CPacketTranslater::OnPayTaxToUpper : pclMember == 0!\tchar id(%d)\t"
                "money(%d)\tfatigue(%d)",
                ((RA_UINT<10>*)pkt)->v, ((RA_UINT<14>*)pkt)->v,
                ((RA_UINT<18>*)pkt)->v);
        }
        else
        {
            unsigned int upperCharId = (unsigned int)member->GetUpperMember_CharId();
            CUser* upperUser = userMgr->FindUser_CharNo(upperCharId);
            if (upperUser == 0)
            {
                DNF_LOG_SCOPE_LINE(0x849,"./log/Member",
                    "CPacketTranslater::OnPayTaxToUpper : pclUpperUser == 0!, Maybe, upper "
                    "Member is not connect!\tupper char id(%d)",
                    upperCharId);
            }
            else
            {
                CUser* payUser = userMgr->FindUser_CharNo(((RA_UINT<10>*)pkt)->v);
                if (payUser == 0)
                {
                    DNF_LOG_SCOPE_LINE(0x84f,"./log/Except",
                        "[MEMBER] CPacketTranslater::OnPayTaxToUpper : pclPayUser == 0!\tchar "
                        "id(%d)\tmoney(%d)\tfatigue(%d)",
                        ((RA_UINT<10>*)pkt)->v, ((RA_UINT<14>*)pkt)->v,
                        ((RA_UINT<18>*)pkt)->v);
                }
                else
                {
                    int lowerCnt = upperUser->GetConnLowerMemberCnt();
                    short level = upperUser->GetLevel();
                    unsigned int limit =
                        m_pclApp->Get_MemberManager()->GetLowerMemberEnterLimit(
                            (unsigned int)level);
                    unsigned char expLevel = payUser->GetUpperMemberExpLevel();
                    float rate = (float)(0.01 * (double)expLevel) +
                                 (float)(0.05 * ((double)lowerCnt / (double)limit));
                    int moneyTax =
                        (int)((double)((RA_UINT<14>*)pkt)->v * (double)rate);
                    int fatigueTax =
                        (int)((double)((RA_UINT<18>*)pkt)->v * (double)rate);
                    if (moneyTax != 0 || fatigueTax != 0)
                    {
                        Packet_Monitor_Member_Pay_Tax_ToUpper reply;
                        reply.m_idByChannel = upperUser->GetIdByChannel();
                        reply.m_uniqCharNo = upperUser->GetUniqCharNo();
                        reply.m_money = moneyTax;
                        reply.m_fatigue = fatigueTax;
                        memcpy(reply.m_name, payUser->GetCharName(), 0x1d);
                        upperUser->SendToGameserver((char*)&reply, 0x38);
                    }
                }
            }
        }
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnPayTaxToUpper() Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x880,"./log/Except", "CPacketTranslater::OnPayTaxToUpper() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnPayTaxToUpper() Exception Break");
        DNF_LOG_SCOPE_LINE(0x886,"./log/Except", "CPacketTranslater::OnPayTaxToUpper() Exception Break\n");
    }
}
```

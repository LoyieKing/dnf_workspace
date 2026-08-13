# _ZN17CPacketTranslater8OnLogoutEP12PacketHeader

`CPacketTranslater::OnLogout(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x807e32a` | `0x973` | `0x8069bb8` | `0x9a5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,611 +1,618 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x16c,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x48(%ebp)
+sub    $0x18c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x968>
+je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x999>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x10,%eax
-mov    %eax,-0x44(%ebp)
+mov    %eax,-0x78(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_MemberManagerEv>
+mov    %eax,-0x74(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication24GetLoginLogoutStatisticsEv>
-mov    %eax,-0x40(%ebp)
-cmpl   $0x0,-0x40(%ebp)
-je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x5e>
-mov    -0x48(%ebp),%eax
+mov    %eax,-0x70(%ebp)
+cmpl   $0x0,-0x70(%ebp)
+je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x68>
+mov    0x8(%ebp),%eax
 movzbl 0x17(%eax),%eax
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x5e>
+jne    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x68>
 movl   $0x6,0x4(%esp)
-mov    -0x40(%ebp),%eax
+mov    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN22CLoginLogoutStatistics18CountNumOfLoginoutE17ENUM_LOGIN_LOGOUT>
-mov    -0x48(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0x44(%ebp),%eax
+mov    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager8FindUserEj>
-mov    %eax,-0x4c(%ebp)
-cmpl   $0x0,-0x4c(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0xfa>
-mov    -0x48(%ebp),%eax
-movzbl 0xe(%eax),%eax
-movzbl %al,%edi
-mov    -0x48(%ebp),%eax
-movzbl 0x17(%eax),%eax
-movzbl %al,%esi
-mov    -0x48(%ebp),%eax
+mov    %eax,-0x6c(%ebp)
+cmpl   $0x0,-0x6c(%ebp)
+jne    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x103>
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
+mov    %eax,-0x44(%ebp)
+mov    0x8(%ebp),%eax
+movzbl 0xe(%eax),%eax
+movzbl %al,%esi
+mov    0x8(%ebp),%eax
+movzbl 0x17(%eax),%eax
+movzbl %al,%ebx
 movl   $0x22d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater8OnLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x90(%ebp),%eax
+lea    -0xa4(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    %esi,0x14(%esp)
+mov    %ebx,0x10(%esp)
+mov    -0x44(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"LOGOUT ERR : User DB ID(%s), F.O.C(%d), Ch(%d)",0x8(%esp)
 movl   $"./log/User",0x4(%esp)
-lea    -0x90(%ebp),%eax
+lea    -0xa4(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x968>
-mov    -0x48(%ebp),%eax
-movzbl 0xe(%eax),%eax
-movzbl %al,%eax
-mov    %eax,-0x148(%ebp)
-mov    -0x48(%ebp),%eax
-movzbl 0x17(%eax),%eax
-movzbl %al,%eax
-mov    %eax,-0x144(%ebp)
-mov    -0x4c(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x99a>
+mov    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
-mov    %eax,-0x140(%ebp)
-mov    -0x4c(%ebp),%eax
+mov    %eax,-0x68(%ebp)
+mov    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser12GetMemberKeyEv>
-mov    %eax,%edi
-mov    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%esi
-mov    -0x48(%ebp),%eax
+mov    %eax,-0x64(%ebp)
+mov    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0x60(%ebp)
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
+mov    %eax,-0x5c(%ebp)
+mov    0x8(%ebp),%eax
+movzbl 0xe(%eax),%eax
+movzbl %al,%esi
+mov    0x8(%ebp),%eax
+movzbl 0x17(%eax),%eax
+movzbl %al,%ebx
 movl   $0x230,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater8OnLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x88(%ebp),%eax
+lea    -0x9c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x148(%ebp),%eax
-mov    %eax,0x20(%esp)
-mov    -0x144(%ebp),%eax
-mov    %eax,0x1c(%esp)
-mov    -0x140(%ebp),%eax
+mov    %esi,0x20(%esp)
+mov    %ebx,0x1c(%esp)
+mov    -0x68(%ebp),%eax
 mov    %eax,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x64(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    -0x60(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x5c(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"LOGOUT : User DB ID(%s), Char No(%d), Member K(%d) , name(%s), F.O.C(%d), Ch(%d)",0x8(%esp)
 movl   $"./log/User",0x4(%esp)
-lea    -0x88(%ebp),%eax
+lea    -0x9c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x48(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
-mov    %eax,-0x3c(%ebp)
+mov    %eax,-0x58(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication21Get_MemoryCashManagerEv>
-mov    %eax,-0x38(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_MemberManagerEv>
-mov    -0x3c(%ebp),%edx
-mov    %edx,0x4(%esp)
+mov    %eax,-0x54(%ebp)
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager10FindMemberEj>
-lea    -0x92(%ebp),%edx
-mov    %edx,0x10(%esp)
-lea    -0x91(%ebp),%edx
-mov    %edx,0xc(%esp)
+mov    %eax,-0x50(%ebp)
+movb   $0x0,-0xa5(%ebp)
+movb   $0x0,-0xa6(%ebp)
+lea    -0xa6(%ebp),%eax
+mov    %eax,0x10(%esp)
+lea    -0xa5(%ebp),%eax
+mov    %eax,0xc(%esp)
+mov    -0x50(%ebp),%eax
 mov    %eax,0x8(%esp)
-mov    -0x4c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x38(%ebp),%eax
+mov    -0x6c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CMemoryCashManager34InsertCashMemorySetCharacterObjectEP5CUserP7CMemberRbS4_>
-cmpl   $0x0,-0x3c(%ebp)
-je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x25b>
-movzbl -0x92(%ebp),%eax
+cmpl   $0x0,-0x58(%ebp)
+je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x256>
+movzbl -0xa6(%ebp),%eax
 xor    $0x1,%eax
 movzbl %al,%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x2d0,%edx
 mov    %eax,0xc(%esp)
-mov    -0x4c(%ebp),%eax
+mov    -0x6c(%ebp),%eax
 mov    %eax,0x8(%esp)
-mov    -0x3c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    -0x58(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x74(%ebp),%eax
+mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager15MemberMemLogoutEjP5CUserb>
-mov    -0x4c(%ebp),%eax
+mov    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x621>
-mov    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,0x4(%esp)
-mov    -0x44(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x642>
+mov    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,0x4(%esp)
+mov    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager17DeleteUser_CharNoEj>
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x582>
-mov    -0x4c(%ebp),%eax
+cmp    $0x1,%eax
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x589>
+mov    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN12CApplication12Remove_GM_idEj>
-lea    -0x130(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x4c(%ebp),%eax
+lea    -0x15c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser15GetBuddysCharNoEPj>
-mov    %eax,-0x34(%ebp)
-movl   $0x0,-0x28(%ebp)
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x30b>
-mov    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    -0x28(%ebp),%edx
-mov    -0x130(%ebp,%edx,4),%edx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
-add    $0x300,%ecx
+mov    %eax,-0x40(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0x300,%eax
+mov    %eax,-0x3c(%ebp)
+movl   $0x0,-0x30(%ebp)
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x318>
+mov    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    -0x30(%ebp),%edx
+mov    -0x15c(%ebp,%edx,4),%edx
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
-mov    %ecx,(%esp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
 call   <T> <_ZN21CBuddyRegisterManager16delBuddyRegisterEjj>
-addl   $0x1,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
-cmp    -0x34(%ebp),%eax
+addl   $0x1,-0x30(%ebp)
+mov    -0x30(%ebp),%eax
+cmp    -0x40(%ebp),%eax
 setl   %al
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x2d6>
-lea    -0x9e(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x2ec>
+lea    -0xb4(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIjSaIjEEC1Ev>
-mov    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-lea    0x300(%edx),%ecx
-lea    -0x9e(%ebp),%edx
+mov    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+lea    -0xb4(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
 call   <T> <_ZN21CBuddyRegisterManager17findBuddyRegisterEjRSt6vectorIjSaIjEE>
-lea    -0xa4(%ebp),%eax
-lea    -0x9e(%ebp),%edx
+lea    -0xcc(%ebp),%eax
+lea    -0xb4(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIjSaIjEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x43c>
-lea    -0xa4(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x433>
+lea    -0xcc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEEdeEv>
 mov    (%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0x44(%ebp),%eax
+mov    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x30(%ebp)
-cmpl   $0x0,-0x30(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x42e>
-lea    -0xa4(%ebp),%eax
+mov    %eax,-0x2c(%ebp)
+cmpl   $0x0,-0x2c(%ebp)
+je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x425>
+lea    -0xcc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEEdeEv>
 mov    (%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0x4c(%ebp),%eax
+mov    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11IsBlackUserEj>
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x3ce>
-mov    $0x1,%ebx
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x3d3>
-mov    $0x0,%ebx
-mov    -0x4c(%ebp),%eax
+setne  %al
+movzbl %al,%edi
+mov    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
-mov    %eax,%edi
-mov    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,%esi
-mov    -0x4c(%ebp),%eax
+mov    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,%ebx
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface12GetChannelNoEv>
 movzbl %al,%eax
 movl   $0x0,0x18(%esp)
 movl   $0x0,0x14(%esp)
-mov    %ebx,0x10(%esp)
-mov    %edi,0xc(%esp)
-mov    %esi,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
+mov    %edi,0x10(%esp)
+mov    %esi,0xc(%esp)
+mov    %ebx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser20SendNoticeBuddyInOutEhjPchhc>
-lea    -0xa4(%ebp),%eax
+lea    -0xcc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEEppEv>
-lea    -0x80(%ebp),%eax
-lea    -0x9e(%ebp),%edx
+lea    -0x94(%ebp),%eax
+lea    -0xb4(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIjSaIjEE3endEv>
 sub    $0x4,%esp
-lea    -0x80(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0xa4(%ebp),%eax
+lea    -0x94(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0xcc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIPjSt6vectorIjSaIjEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x373>
-mov    -0x48(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x377>
+mov    0x8(%ebp),%eax
+mov    0xf(%eax),%eax
+mov    %eax,-0xc0(%ebp)
+mov    0x8(%ebp),%eax
 movzbl 0xe(%eax),%eax
 movzbl %al,%eax
-mov    %eax,-0xac(%ebp)
-mov    -0x48(%ebp),%eax
-mov    0xf(%eax),%eax
-mov    %eax,-0xb0(%ebp)
-mov    -0xac(%ebp),%edi
-mov    -0xb0(%ebp),%esi
-mov    -0x48(%ebp),%eax
+mov    %eax,-0xbc(%ebp)
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
+mov    %eax,-0x38(%ebp)
 movl   $0x290,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater8OnLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x7c(%ebp),%eax
+lea    -0xc8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0xbc(%ebp),%edx
+mov    -0xc0(%ebp),%eax
+mov    %edx,0x14(%esp)
+mov    %eax,0x10(%esp)
+mov    -0x38(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CacheCharacter() (%s,%d,%d)\n",0x8(%esp)
 movl   $"./log/ExchangeServer",0x4(%esp)
-lea    -0x7c(%ebp),%eax
+lea    -0xc8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x48(%ebp),%eax
+mov    0x8(%ebp),%eax
 movzbl 0x3a(%eax),%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x51f>
-mov    -0x48(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x526>
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%ebx
 call   <T> <_ZN15exchange_server28GetInstanceCacheCharacterMgrEv>
-lea    -0xb0(%ebp),%edx
+lea    -0xc0(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN15exchange_server18CCacheCharacterMgr14CacheCharacterEjPNS_20CACHE_CHARACTER_TYPEE>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication24GetLoginLogoutStatisticsEv>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x574>
-mov    -0x44(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+cmpl   $0x0,-0x34(%ebp)
+je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x57b>
+mov    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager20GetSizeOfCharnoUsersEv>
 mov    %eax,0x8(%esp)
 movl   $0x4,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN22CLoginLogoutStatistics21CountNumOfOccupationsE17ENUM_LOGIN_LOGOUTi>
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x574>
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x57b>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x9e(%ebp),%eax
+lea    -0xb4(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIjSaIjEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x860>
-lea    -0x9e(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x889>
+lea    -0xb4(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIjSaIjEED1Ev>
-lea    -0x6d(%ebp),%eax
+lea    -0x89(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-mov    -0x4c(%ebp),%eax
+mov    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
-lea    -0x6d(%ebp),%edx
+lea    -0x89(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x74(%ebp),%eax
+lea    -0x90(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x74(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x44(%ebp),%eax
+lea    -0x90(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager19DeleteUser_CharNameESs>
-lea    -0x74(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x5fa>
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x5ed>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x74(%ebp),%eax
+lea    -0x90(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x5e2>
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x5fd>
+lea    -0x90(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x618>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x6d(%ebp),%eax
+lea    -0x89(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x860>
-lea    -0x6d(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x889>
+lea    -0x89(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
-movzbl -0x91(%ebp),%eax
+movzbl -0xa5(%ebp),%eax
 xor    $0x1,%eax
 movzbl %al,%eax
 mov    %eax,0x4(%esp)
+mov    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13ResetCharInfoEb>
+mov    0x8(%ebp),%eax
+movzbl 0x17(%eax),%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x665>
+movl   $0x2,0x4(%esp)
+mov    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser15SetUserPosStateEh>
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x99a>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication21Get_MemoryCashManagerEv>
+mov    %eax,-0x4c(%ebp)
+mov    -0x6c(%ebp),%eax
+mov    %eax,0x4(%esp)
 mov    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN5CUser13ResetCharInfoEb>
-mov    -0x48(%ebp),%eax
-movzbl 0x17(%eax),%eax
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x848>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication21Get_MemoryCashManagerEv>
-mov    %eax,-0x24(%ebp)
-mov    -0x4c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
 call   <T> <_ZN18CMemoryCashManager13SetUserObjectEP5CUser>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x66e>
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x6a0>
+movl   $0x0,0x4(%esp)
+mov    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14ResetBlackListEi>
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x6b3>
 movl   $0x1,0x4(%esp)
-mov    -0x4c(%ebp),%eax
+mov    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14ResetBlackListEi>
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x681>
-movl   $0x0,0x4(%esp)
-mov    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14ResetBlackListEi>
-mov    -0x4c(%ebp),%eax
+mov    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x6b5>
-mov    -0x4c(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x6e7>
+mov    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface12GetChannelNoEv>
-mov    -0x48(%ebp),%edx
+mov    0x8(%ebp),%edx
 movzbl 0xe(%edx),%edx
 cmp    %dl,%al
-jne    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x6b5>
+jne    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x6e7>
 mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x6ba>
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x6ec>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x758>
-mov    -0x4c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x44(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x795>
+mov    -0x6c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager10DeleteUserEP5CUser>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x807>
-mov    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser11GetCharNameEv>
-mov    %eax,%edi
-mov    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%esi
-mov    -0x48(%ebp),%eax
+cmp    $0x1,%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x848>
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
+mov    %eax,-0x28(%ebp)
 movl   $0x2c5,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater8OnLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x6c(%ebp),%eax
+lea    -0xd4(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser11GetCharNameEv>
+mov    %eax,%ebx
+mov    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %ebx,0x14(%esp)
+mov    %eax,0x10(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"[NO USER] Disconnected User DB ID : %s, Char No : %d , char name:%s\n",0x8(%esp)
 movl   $"./log/User",0x4(%esp)
-lea    -0x6c(%ebp),%eax
+lea    -0xd4(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x807>
-mov    -0x4c(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x848>
+mov    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x807>
-mov    -0x48(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x848>
+mov    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+mov    %eax,(%esp)
+call   <T> <_ZN16CServerInterface12GetChannelNoEv>
+mov    %al,-0x22(%ebp)
+mov    0x8(%ebp),%eax
 movzbl 0xe(%eax),%eax
-movzbl %al,%eax
-mov    %eax,-0x13c(%ebp)
-mov    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
-mov    %eax,(%esp)
-call   <T> <_ZN16CServerInterface12GetChannelNoEv>
-movzbl %al,%edi
-mov    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%esi
-mov    -0x48(%ebp),%eax
+mov    %al,-0x21(%ebp)
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
+mov    %eax,-0x20(%ebp)
 movl   $0x2cc,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater8OnLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x64(%ebp),%eax
+lea    -0xdc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x13c(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+movzbl -0x21(%ebp),%esi
+movzbl -0x22(%ebp),%ebx
+mov    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %esi,0x18(%esp)
+mov    %ebx,0x14(%esp)
+mov    %eax,0x10(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"[LOGOUT SESSION MISMATCH] User DB ID : %s, Char No : %d , Already Ch(%d), Logout Ch(%d)",0x8(%esp)
 movl   $"./log/User",0x4(%esp)
-lea    -0x64(%ebp),%eax
+lea    -0xdc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication24GetLoginLogoutStatisticsEv>
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x968>
-mov    -0x44(%ebp),%eax
+mov    %eax,-0x48(%ebp)
+cmpl   $0x0,-0x48(%ebp)
+je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x99a>
+mov    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager4SizeEv>
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN22CLoginLogoutStatistics21CountNumOfOccupationsE17ENUM_LOGIN_LOGOUTi>
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x968>
-movl   $0x2,0x4(%esp)
-mov    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser15SetUserPosStateEh>
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x968>
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x99a>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x902>
+jne    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x931>
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
 movl   $"CPacketTranslater::OnLogout() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x2eb,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater8OnLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x5c(%ebp),%eax
+lea    -0x88(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnLogout() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x5c(%ebp),%eax
+lea    -0x88(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x8fb>
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x92a>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x968>
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x99a>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnLogout() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x2f1,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater8OnLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x80(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnLogout() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x80(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x963>
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x992>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x99a>
+nop
 lea    -0xc(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnLogout(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater8OnLogoutEP12PacketHeader(PacketHeader *param_1)

{
  PacketHeader PVar1;
  char cVar2;
  uchar uVar3;
  bool bVar4;
  PacketHeader PVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  CMember *pCVar11;
  int iVar12;
  CCacheCharacterMgr *this;
  char *pcVar13;
  CServerInterface *pCVar14;
  uint local_134 [32];
  undefined4 local_b4;
  uint local_b0;
  __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
  local_a8 [6];
  vector<unsigned_int,std::allocator<unsigned_int>> local_a2 [12];
  bool local_96;
  bool local_95;
  CMyFileLog local_94 [8];
  CMyFileLog local_8c [8];
  __normal_iterator local_84 [4];
  CMyFileLog local_80 [8];
  string local_78 [7];
  allocator local_71;
  CMyFileLog local_70 [8];
  CMyFileLog local_68 [24];
  CUser *local_50;
  PacketHeader *local_4c;
  CApplication *local_48;
  CLoginLogoutStatistics *local_44;
  uint local_40;
  CMemoryCashManager *local_3c;
  int local_38;
  CUser *local_34;
  CLoginLogoutStatistics *local_30;
  int local_2c;
  CMemoryCashManager *local_28;
  CLoginLogoutStatistics *local_24;
  
  local_4c = param_1;
  if (m_pclApp == (CApplication *)0x0) {
    return;
  }
  local_48 = m_pclApp + 0x10;
  local_44 = (CLoginLogoutStatistics *)
             CApplication::_ZN12CApplication24GetLoginLogoutStatisticsEv(m_pclApp);
  if ((local_44 != (CLoginLogoutStatistics *)0x0) && (local_4c[0x17] == (PacketHeader)0x0)) {
                    /* try { // try from 0807e383 to 0807e64f has its CatchHandler @ 0807eb8a */
    CLoginLogoutStatistics::CountNumOfLoginout(local_44,6);
  }
  local_50 = (CUser *)CUserManager::FindUser((uint)local_48);
  if (local_50 == (CUser *)0x0) {
    PVar5 = local_4c[0xe];
    PVar1 = local_4c[0x17];
    uVar6 = NumberToString(*(uint *)(local_4c + 10),0);
    CMyFileLog::CMyFileLog(local_94,"OnLogout",0x22d);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_94,"./log/User","LOGOUT ERR : User DB ID(%s), F.O.C(%d), Ch(%d)",uVar6,
               (uint)(byte)PVar1,(uint)(byte)PVar5);
    return;
  }
  PVar5 = local_4c[0xe];
  PVar1 = local_4c[0x17];
  uVar6 = CUser::GetCharName(local_50);
  uVar7 = CUser::GetMemberKey(local_50);
  uVar8 = CUser::GetUniqCharNo(local_50);
  uVar9 = NumberToString(*(uint *)(local_4c + 10),0);
  CMyFileLog::CMyFileLog(local_8c,"OnLogout",0x230);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_8c,"./log/User",
             "LOGOUT : User DB ID(%s), Char No(%d), Member K(%d) , name(%s), F.O.C(%d), Ch(%d)",
             uVar9,uVar8,uVar7,uVar6,(uint)(byte)PVar1,(uint)(byte)PVar5);
  local_40 = *(uint *)(local_4c + 0x18);
  local_3c = (CMemoryCashManager *)
             CApplication::_ZN12CApplication21Get_MemoryCashManagerEv(m_pclApp);
  uVar10 = CApplication::Get_MemberManager(m_pclApp);
  pCVar11 = (CMember *)CMemberManager::_ZN14CMemberManager10FindMemberEj(uVar10);
  CMemoryCashManager::InsertCashMemorySetCharacterObject
            (local_3c,local_50,pCVar11,&local_95,&local_96);
  if (local_40 != 0) {
    CMemberManager::_ZN14CMemberManager15MemberMemLogoutEjP5CUserb
              ((CMemberManager *)(m_pclApp + 0x2d0),local_40,local_50,(bool)(local_96 ^ 1));
  }
  iVar12 = CUser::GetUniqCharNo(local_50);
  if (iVar12 != 0) {
    uVar10 = CUser::GetUniqCharNo(local_50);
    cVar2 = CUserManager::_ZN12CUserManager17DeleteUser_CharNoEj((CUserManager *)local_48,uVar10);
    if (cVar2 == '\x01') {
      CUser::GetUniqCharNo(local_50);
      CApplication::_ZN12CApplication12Remove_GM_idEj((uint)m_pclApp);
      local_38 = CUser::GetBuddysCharNo(local_50,local_134);
      for (local_2c = 0; local_2c < local_38; local_2c = local_2c + 1) {
        uVar10 = CUser::GetUniqCharNo(local_50);
        CBuddyRegisterManager::delBuddyRegister
                  ((CBuddyRegisterManager *)(m_pclApp + 0x300),local_134[local_2c],uVar10);
      }
      std::vector<unsigned_int,std::allocator<unsigned_int>>::vector(local_a2);
      uVar10 = CUser::GetUniqCharNo(local_50);
                    /* try { // try from 0807e678 to 0807e880 has its CatchHandler @ 0807e883 */
      CBuddyRegisterManager::findBuddyRegister
                ((CBuddyRegisterManager *)(m_pclApp + 0x300),uVar10,(vector *)local_a2);
      std::vector<unsigned_int,std::allocator<unsigned_int>>::begin();
      while( true ) {
        std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
        bVar4 = __gnu_cxx::operator!=(local_a8,local_84);
        if (!bVar4) break;
        __gnu_cxx::
        __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
        operator*(local_a8);
        local_34 = (CUser *)CUserManager::FindUser_CharNo((uint)local_48);
        if (local_34 != (CUser *)0x0) {
          __gnu_cxx::
          __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
          operator*(local_a8);
          cVar2 = CUser::IsBlackUser((uint)local_50);
          pcVar13 = (char *)CUser::GetCharName(local_50);
          uVar10 = CUser::GetUniqCharNo(local_50);
          pCVar14 = (CServerInterface *)CUser::GetGameServer(local_50);
          uVar3 = CServerInterface::_ZN16CServerInterface12GetChannelNoEv(pCVar14);
          CUser::SendNoticeBuddyInOut(local_34,uVar3,uVar10,pcVar13,cVar2 != '\0','\0','\0');
        }
        __gnu_cxx::
        __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
        operator++(local_a8);
      }
      PVar5 = local_4c[0xe];
      uVar6 = *(undefined4 *)(local_4c + 0xf);
      local_b4 = uVar6;
      local_b0 = (uint)(byte)PVar5;
      uVar7 = NumberToString(*(uint *)(local_4c + 10),0);
      CMyFileLog::CMyFileLog(local_80,"OnLogout",0x290);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_80,"./log/ExchangeServer","CacheCharacter() (%s,%d,%d)\n",uVar7,uVar6,
                 (uint)(byte)PVar5);
      if (local_4c[0x3a] != (PacketHeader)0x0) {
        uVar10 = *(uint *)(local_4c + 10);
        this = (CCacheCharacterMgr *)
               exchange_server::_ZN15exchange_server28GetInstanceCacheCharacterMgrEv();
        exchange_server::CCacheCharacterMgr::
        _ZN15exchange_server18CCacheCharacterMgr14CacheCharacterEjPNS_20CACHE_CHARACTER_TYPEE
                  (this,uVar10,(CACHE_CHARACTER_TYPE *)&local_b4);
      }
      local_30 = (CLoginLogoutStatistics *)
                 CApplication::_ZN12CApplication24GetLoginLogoutStatisticsEv(m_pclApp);
      if (local_30 != (CLoginLogoutStatistics *)0x0) {
        uVar6 = CUserManager::GetSizeOfCharnoUsers((CUserManager *)local_48);
        CLoginLogoutStatistics::CountNumOfOccupations(local_30,4,uVar6);
      }
                    /* try { // try from 0807e8a7 to 0807e8ab has its CatchHandler @ 0807eb8a */
      std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector(local_a2);
    }
    std::allocator<char>::allocator();
    pcVar13 = (char *)CUser::GetCharName(local_50);
                    /* try { // try from 0807e8d3 to 0807e8d7 has its CatchHandler @ 0807e90c */
    std::string::string(local_78,pcVar13,&local_71);
                    /* try { // try from 0807e8e5 to 0807e8e9 has its CatchHandler @ 0807e8f7 */
    CUserManager::DeleteUser_CharName((CUserManager *)local_48,local_78);
                    /* try { // try from 0807e8f0 to 0807e8f4 has its CatchHandler @ 0807e90c */
    std::string::~string(local_78);
    std::allocator<char>::~allocator((allocator<char> *)&local_71);
                    /* try { // try from 0807e946 to 0807eb6c has its CatchHandler @ 0807eb8a */
    CUser::ResetCharInfo(local_50,(bool)(local_95 ^ 1));
  }
  if (local_4c[0x17] != (PacketHeader)0x0) {
    CUser::SetUserPosState(local_50,'\x02');
    return;
  }
  local_28 = (CMemoryCashManager *)
             CApplication::_ZN12CApplication21Get_MemoryCashManagerEv(m_pclApp);
  cVar2 = CMemoryCashManager::SetUserObject(local_28,local_50);
  if (cVar2 == '\x01') {
    CUser::ResetBlackList(local_50,0);
  }
  else {
    CUser::ResetBlackList(local_50,1);
  }
  iVar12 = CUser::GetGameServer(local_50);
  if (iVar12 != 0) {
    pCVar14 = (CServerInterface *)CUser::GetGameServer(local_50);
    PVar5 = (PacketHeader)CServerInterface::_ZN16CServerInterface12GetChannelNoEv(pCVar14);
    if (PVar5 == local_4c[0xe]) {
      bVar4 = true;
      goto LAB_0807e9e4;
    }
  }
  bVar4 = false;
LAB_0807e9e4:
  if (bVar4) {
    cVar2 = CUserManager::_ZN12CUserManager10DeleteUserEP5CUser((CUserManager *)local_48,local_50);
    if (cVar2 != '\x01') {
      uVar6 = CUser::GetCharName(local_50);
      uVar7 = CUser::GetUniqCharNo(local_50);
      uVar8 = NumberToString(*(uint *)(local_4c + 10),0);
      CMyFileLog::CMyFileLog(local_70,"OnLogout",0x2c5);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_70,"./log/User",
                 "[NO USER] Disconnected User DB ID : %s, Char No : %d , char name:%s\n",uVar8,uVar7
                 ,uVar6);
    }
  }
  else {
    iVar12 = CUser::GetGameServer(local_50);
    if (iVar12 != 0) {
      PVar5 = local_4c[0xe];
      pCVar14 = (CServerInterface *)CUser::GetGameServer(local_50);
      uVar10 = CServerInterface::_ZN16CServerInterface12GetChannelNoEv(pCVar14);
      uVar6 = CUser::GetUniqCharNo(local_50);
      uVar7 = NumberToString(*(uint *)(local_4c + 10),0);
      CMyFileLog::CMyFileLog(local_68,"OnLogout",0x2cc);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_68,"./log/User",
                 "[LOGOUT SESSION MISMATCH] User DB ID : %s, Char No : %d , Already Ch(%d), Logout Ch(%d)"
                 ,uVar7,uVar6,uVar10 & 0xff,(uint)(byte)PVar5);
    }
  }
  local_24 = (CLoginLogoutStatistics *)
             CApplication::_ZN12CApplication24GetLoginLogoutStatisticsEv(m_pclApp);
  if (local_24 != (CLoginLogoutStatistics *)0x0) {
    uVar6 = CUserManager::Size((CUserManager *)local_48);
    CLoginLogoutStatistics::CountNumOfOccupations(local_24,0,uVar6);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 433 行）：

```cpp
void CPacketTranslater::OnLogout(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        return;
    }
    try
    {
        CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
        CMemberManager* memberMgr = m_pclApp->Get_MemberManager();
        CLoginLogoutStatistics* stats =
            (CLoginLogoutStatistics*)m_pclApp->GetLoginLogoutStatistics();
        if (stats != 0 && ((RA_S8<23>*)pkt)->v == 0)
        {
            stats->CountNumOfLoginout((ENUM_LOGIN_LOGOUT)6);
        }
        CUser* user = userMgr->FindUser(((RA_UINT<10>*)pkt)->v);
        if (user == 0)
        {
            char* dbid = NumberToString(((RA_UINT<10>*)pkt)->v, 0);
            DNF_LOG_SCOPE_LINE(0x22d,"./log/User", "LOGOUT ERR : User DB ID(%s), F.O.C(%d), Ch(%d)", dbid,
                (unsigned int)(unsigned char)((RA_S8<23>*)pkt)->v,
                (unsigned int)(unsigned char)((RA_S8<14>*)pkt)->v);
            return;
        }
        char* name = user->GetCharName();
        unsigned int memberKey = user->GetMemberKey();
        unsigned int charNo = user->GetUniqCharNo();
        char* dbid = NumberToString(((RA_UINT<10>*)pkt)->v, 0);
        DNF_LOG_SCOPE_LINE(0x230,"./log/User",
            "LOGOUT : User DB ID(%s), Char No(%d), Member K(%d) , name(%s), F.O.C(%d), Ch(%d)",
            dbid, charNo, memberKey, name,
            (unsigned int)(unsigned char)((RA_S8<23>*)pkt)->v,
            (unsigned int)(unsigned char)((RA_S8<14>*)pkt)->v);
        unsigned int memberKey2 = ((RA_UINT<24>*)pkt)->v;
        CMemoryCashManager* cash = (CMemoryCashManager*)m_pclApp->Get_MemoryCashManager();
        CMember* member = memberMgr->FindMember(((RA_UINT<10>*)pkt)->v);
        bool f1 = false;
        bool f2 = false;
        cash->InsertCashMemorySetCharacterObject(user, member, f1, f2);
        if (memberKey2 != 0)
        {
            memberMgr->MemberMemLogout(memberKey2, user, !f2);
        }
        if (user->GetUniqCharNo() != 0)
        {
            if (userMgr->DeleteUser_CharNo(user->GetUniqCharNo()) == 1)
            {
                user->GetUniqCharNo();
                m_pclApp->Remove_GM_id(user->GetUniqCharNo());
                unsigned int charNos[32];
                int n = user->GetBuddysCharNo(charNos);
                CBuddyRegisterManager* buddyReg =
                    (CBuddyRegisterManager*)((char*)m_pclApp + 0x300);
                for (int i = 0; i < n; i++)
                {
                    buddyReg->delBuddyRegister(charNos[i], user->GetUniqCharNo());
                }
                std::vector<unsigned int> vec;
                buddyReg->findBuddyRegister(user->GetUniqCharNo(), vec);
                for (std::vector<unsigned int>::iterator it = vec.begin(); it != vec.end();
                     ++it)
                {
                    CUser* other = userMgr->FindUser_CharNo(*it);
                    if (other != 0)
                    {
                        other->SendNoticeBuddyInOut(
                            ((CServerInterface*)other->GetGameServer())->GetChannelNo(),
                            user->GetUniqCharNo(), user->GetCharName(),
                            (unsigned char)(user->IsBlackUser(*it) != 0), 0, 0);
                    }
                }
                exchange_server::CACHE_CHARACTER_TYPE cacheType;
                cacheType.m_field0 = ((RA_INT<15>*)pkt)->v;
                cacheType.m_field4 = (int)(unsigned char)((RA_S8<14>*)pkt)->v;
                char* dbid2 = NumberToString(((RA_UINT<10>*)pkt)->v, 0);
                CMyFileLog log2(__FUNCTION__, 0x290);
                log2("./log/ExchangeServer", "CacheCharacter() (%s,%d,%d)\n", dbid2,
                     cacheType.m_field0, cacheType.m_field4);
                if (((RA_S8<58>*)pkt)->v != 0)
                {
                    exchange_server::GetInstanceCacheCharacterMgr()->CacheCharacter(
                        ((RA_UINT<10>*)pkt)->v, &cacheType);
                }
                CLoginLogoutStatistics* stats2 =
                    (CLoginLogoutStatistics*)m_pclApp->GetLoginLogoutStatistics();
                if (stats2 != 0)
                {
                    stats2->CountNumOfOccupations((ENUM_LOGIN_LOGOUT)4,
                                                  (int)userMgr->GetSizeOfCharnoUsers());
                }
            }
            userMgr->DeleteUser_CharName(user->GetCharName());
            user->ResetCharInfo(!f1);
        }
        if (((RA_S8<23>*)pkt)->v != 0)
        {
            user->SetUserPosState(2);
            return;
        }
        CMemoryCashManager* cash2 = (CMemoryCashManager*)m_pclApp->Get_MemoryCashManager();
        if (cash2->SetUserObject(user) == 1)
        {
            user->ResetBlackList(0);
        }
        else
        {
            user->ResetBlackList(1);
        }
        if (user->GetGameServer() != 0 &&
            ((CServerInterface*)user->GetGameServer())->GetChannelNo() ==
                (unsigned char)((RA_S8<14>*)pkt)->v)
        {
            if (userMgr->DeleteUser(user) != 1)
            {
                char* dbid3 = NumberToString(((RA_UINT<10>*)pkt)->v, 0);
                CMyFileLog log3(__FUNCTION__, 0x2c5);
                log3("./log/User",
                     "[NO USER] Disconnected User DB ID : %s, Char No : %d , char name:%s\n",
                     dbid3, user->GetUniqCharNo(), user->GetCharName());
            }
        }
        else if (user->GetGameServer() != 0)
        {
            unsigned char alreadyCh =
                ((CServerInterface*)user->GetGameServer())->GetChannelNo();
            unsigned char logoutCh = (unsigned char)((RA_S8<14>*)pkt)->v;
            char* dbid4 = NumberToString(((RA_UINT<10>*)pkt)->v, 0);
            CMyFileLog log4(__FUNCTION__, 0x2cc);
            log4("./log/User",
                 "[LOGOUT SESSION MISMATCH] User DB ID : %s, Char No : %d , Already Ch(%d), "
                 "Logout Ch(%d)",
                 dbid4, user->GetUniqCharNo(), (unsigned int)alreadyCh,
                 (unsigned int)logoutCh);
        }
        CLoginLogoutStatistics* stats3 =
            (CLoginLogoutStatistics*)m_pclApp->GetLoginLogoutStatistics();
        if (stats3 != 0)
        {
            stats3->CountNumOfOccupations((ENUM_LOGIN_LOGOUT)0, (int)userMgr->Size());
        }
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnLogout() Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x2eb, "./log/Except", "CPacketTranslater::OnLogout() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnLogout() Exception Break");
        DNF_LOG_SCOPE_LINE(0x2f1, "./log/Except", "CPacketTranslater::OnLogout() Exception Break\n");
    }
}
```

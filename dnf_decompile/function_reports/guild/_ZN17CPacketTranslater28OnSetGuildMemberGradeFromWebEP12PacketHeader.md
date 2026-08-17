# _ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader

`CPacketTranslater::OnSetGuildMemberGradeFromWeb(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8074ede` | `0x71d` | `0x806b3b4` | `0x6e3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,451 +1,426 @@
-push   %ebp
-mov    %esp,%ebp
-push   %edi
-push   %esi
-push   %ebx
-sub    $0xac,%esp
+mov    0x8(%ebp),%eax
+mov    %eax,-0x38(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0xfa>
-lea    -0x89(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x100>
+lea    -0x99(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x89(%ebp),%eax
+lea    -0x99(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnSetGuildMemberGradeFromWeb : 0 == m_pclApp",0x4(%esp)
-lea    -0x90(%ebp),%eax
+lea    -0xa0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x90(%ebp),%esi
+lea    -0xa0(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x9f>
+jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0xa5>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x90(%ebp),%eax
+lea    -0xa0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x99>
+jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x9f>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0xb9>
+jne    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0xbf>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0xb9>
-lea    -0x90(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0xbf>
+lea    -0xa0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0xd4>
+jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0xda>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0xb9>
+jne    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0xbf>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x89(%ebp),%eax
+lea    -0x99(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x63c>
-lea    -0x89(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x602>
+lea    -0x99(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x38(%ebp),%eax
 mov    0xe(%eax),%eax
-test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x15d>
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%eax
-test   %eax,%eax
+mov    %eax,-0x34(%ebp)
+mov    -0x38(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x30(%ebp)
+mov    -0x38(%ebp),%eax
+movzbl 0x12(%eax),%eax
+mov    %al,-0x29(%ebp)
+mov    -0x38(%ebp),%eax
+mov    0x13(%eax),%eax
+mov    %eax,-0x28(%ebp)
+cmpl   $0x0,-0x34(%ebp)
+jne    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x17a>
+cmpl   $0x0,-0x34(%ebp)
 sete   %al
 movzbl %al,%ebx
 movl   $0x515,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x88(%ebp),%eax
+lea    -0x98(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnSetGuildMemberGradeFromWeb : 0 == packet->m_uGuildKey(%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x88(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x712>
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+lea    -0x98(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x6d8>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x34(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
 mov    %eax,-0x24(%ebp)
 cmpl   $0x0,-0x24(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x1ce>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x1ea>
 movl   $0x51a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x80(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+lea    -0x90(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnSetGuildMemberGradeFromWeb : no guild(%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x80(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x712>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
+lea    -0x90(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x6d8>
+mov    -0x30(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13IsGuildMasterEj>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x20d>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
+je     <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x223>
+mov    -0x30(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsSubGuildMasterEj>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x20d>
+je     <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x223>
 mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x212>
+jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x228>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x25b>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x274>
 movl   $0x520,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+lea    -0x88(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnSetGuildMemberGradeFromWeb : no guild master(%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x712>
-mov    -0x20(%ebp),%eax
-movzbl 0x12(%eax),%eax
-cmp    $0x1,%al
-jne    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x2af>
-mov    -0x20(%ebp),%eax
-movzbl 0x12(%eax),%eax
+lea    -0x88(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x6d8>
+cmpb   $0x1,-0x29(%ebp)
+jne    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x2c0>
+movzbl -0x29(%ebp),%eax
 movsbl %al,%ebx
 movl   $0x526,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x70(%ebp),%eax
+lea    -0x80(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnSetGuildMemberGradeFromWeb : can't change guild master(%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x712>
-mov    -0x20(%ebp),%eax
-movzbl 0x12(%eax),%eax
-cmp    $0x2,%al
-jne    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x364>
+lea    -0x80(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x6d8>
+cmpb   $0x2,-0x29(%ebp)
+jne    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x36d>
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild23GetCurSubGuildMasterCntEv>
 cmp    $0x4,%al
 seta   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x30d>
+je     <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x319>
 movl   $0x52e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x68(%ebp),%eax
+lea    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnSetGuildMemberGradeFromWeb : over sub guild master count",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x712>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x6d8>
+mov    -0x30(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13IsGuildMasterEj>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x364>
+je     <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x36d>
 movl   $0x535,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x60(%ebp),%eax
+lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnSetGuildMemberGradeFromWeb : can't change sub guild master except master",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x712>
-mov    -0x20(%ebp),%eax
-mov    0x13(%eax),%eax
+lea    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x6d8>
+mov    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13IsGuildMasterEj>
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x3c6>
-mov    -0x20(%ebp),%eax
-movzbl 0x12(%eax),%eax
+je     <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x3c9>
+movzbl -0x29(%ebp),%eax
 movsbl %al,%ebx
 movl   $0x53d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x58(%ebp),%eax
+lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnSetGuildMemberGradeFromWeb : can't change guild master(%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x712>
-mov    -0x20(%ebp),%eax
-mov    0x13(%eax),%edx
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
-cmp    %eax,%edx
-jne    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x41b>
-mov    -0x20(%ebp),%eax
-mov    0x13(%eax),%ebx
+lea    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x6d8>
+mov    -0x28(%ebp),%eax
+cmp    -0x30(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x413>
 movl   $0x542,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x28(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnSetGuildMemberGradeFromWeb : can't change myself(%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x712>
-mov    -0x20(%ebp),%eax
-movzbl 0x12(%eax),%eax
-cmp    $0x2,%al
-jne    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x4c0>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x6d8>
+cmpb   $0x2,-0x29(%ebp)
+jne    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x4aa>
+mov    -0x30(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13IsGuildMasterEj>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x48b>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x478>
 movl   $0x54c,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnSetGuildMemberGradeFromWeb : can't change sub guild master except guild master(%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x712>
-mov    -0x20(%ebp),%eax
-mov    0x13(%eax),%eax
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x6d8>
 movl   $0x1,0x8(%esp)
+mov    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild17SetSubGuildMasterEjb>
 movl   $0x0,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
-jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x56e>
-mov    -0x20(%ebp),%eax
-mov    0x13(%eax),%eax
+jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x54c>
+mov    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsSubGuildMasterEj>
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x56e>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
+je     <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x54c>
+mov    -0x30(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13IsGuildMasterEj>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x53e>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x51f>
 movl   $0x55c,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnSetGuildMemberGradeFromWeb : can't change sub guild master except guild master(%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x712>
-mov    -0x20(%ebp),%eax
-mov    0x13(%eax),%eax
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x6d8>
 movl   $0x0,0x8(%esp)
+mov    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild17SetSubGuildMasterEjb>
 movl   $0x0,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
-mov    -0x20(%ebp),%eax
-movzbl 0x12(%eax),%eax
-movsbl %al,%edx
-mov    -0x20(%ebp),%eax
-mov    0x13(%eax),%eax
-mov    %edx,0x8(%esp)
+movzbl -0x29(%ebp),%eax
+movsbl %al,%eax
+mov    %eax,0x8(%esp)
+mov    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji>
-mov    -0x20(%ebp),%eax
-mov    0x13(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x10(%eax),%edx
+mov    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x712>
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x6d8>
+movzbl -0x29(%ebp),%eax
+mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
-movzbl 0x12(%eax),%eax
-movzbl %al,%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser22ChangeGuildMemberGradeEh>
-lea    -0xa3(%ebp),%eax
+lea    -0xb3(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN38Packet_Monitor_Notify_GuildMemberGradeC1Ev>
 mov    -0x20(%ebp),%eax
-movzbl 0x12(%eax),%eax
-mov    %al,-0x91(%ebp)
-mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,-0xa9(%ebp)
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x95(%ebp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x99(%ebp)
-movzwl -0xa1(%ebp),%eax
+mov    %eax,-0xa5(%ebp)
+movzbl -0x29(%ebp),%eax
+mov    %al,-0xa1(%ebp)
+movzwl -0xb1(%ebp),%eax
 movzwl %ax,%edx
-lea    -0xa3(%ebp),%eax
+lea    -0xb3(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x712>
+jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x6d8>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x6b8>
+jne    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x67e>
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
 mov    %eax,%ebx
 movl   $0x578,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnSetGuildMemberGrade() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x6b1>
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x677>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x712>
+jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x6d8>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x57d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnSetGuildMemberGrade() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x70d>
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader+0x6d3>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0xac,%esp
+add    $0xbc,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
+nop
+push   %ebp
+mov    %esp,%ebp
+push   %edi
+push   %esi
+push   %ebx
+sub    $0xfc,%esp
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnSetGuildMemberGradeFromWeb(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader PVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  CDNFException *this;
  Packet_Monitor_Notify_GuildMemberGrade local_a7 [2];
  ushort local_a5;
  undefined4 local_9d;
  undefined4 local_99;
  PacketHeader local_95;
  string local_94 [7];
  allocator local_8d;
  CMyFileLog local_8c [8];
  CMyFileLog local_84 [8];
  CMyFileLog local_7c [8];
  CMyFileLog local_74 [8];
  CMyFileLog local_6c [8];
  CMyFileLog local_64 [8];
  CMyFileLog local_5c [8];
  CMyFileLog local_54 [8];
  CMyFileLog local_4c [8];
  CMyFileLog local_44 [24];
  CUser *local_2c;
  CGuild *local_28;
  PacketHeader *local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08074f20 to 08074f24 has its CatchHandler @ 08074f97 */
    std::string::string(local_94,"CPacketTranslater::OnSetGuildMemberGradeFromWeb : 0 == m_pclApp",
                        &local_8d);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08074f42 to 08074f46 has its CatchHandler @ 08074f49 */
    CDNFException::CDNFException(this,local_94);
                    /* try { // try from 08074f86 to 08074f8a has its CatchHandler @ 08074f8d */
    std::string::~string(local_94);
    std::allocator<char>::~allocator((allocator<char> *)&local_8d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08074fd3 to 08075514 has its CatchHandler @ 0807551a */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = param_1;
  if (*(int *)(param_1 + 0xe) == 0) {
    iVar2 = *(int *)(param_1 + 0xe);
    CMyFileLog::CMyFileLog(local_8c,"OnSetGuildMemberGradeFromWeb",0x515);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_8c,"./log/GuildModify",
               "CPacketTranslater::OnSetGuildMemberGradeFromWeb : 0 == packet->m_uGuildKey(%d)",
               (uint)(iVar2 == 0));
    return;
  }
  local_28 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290);
  if (local_28 == (CGuild *)0x0) {
    uVar3 = *(undefined4 *)(local_24 + 10);
    CMyFileLog::CMyFileLog(local_84,"OnSetGuildMemberGradeFromWeb",0x51a);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_84,"./log/GuildModify",
               "CPacketTranslater::OnSetGuildMemberGradeFromWeb : no guild(%d)",uVar3);
    return;
  }
  cVar5 = CGuild::IsGuildMaster(local_28,*(uint *)(local_24 + 10));
  if ((cVar5 == '\x01') ||
     (cVar5 = CGuild::IsSubGuildMaster(local_28,*(uint *)(local_24 + 10)), cVar5 == '\x01')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    uVar3 = *(undefined4 *)(local_24 + 10);
    CMyFileLog::CMyFileLog(local_7c,"OnSetGuildMemberGradeFromWeb",0x520);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_7c,"./log/GuildModify",
               "CPacketTranslater::OnSetGuildMemberGradeFromWeb : no guild master(%d)",uVar3);
  }
  else if (local_24[0x12] == (PacketHeader)0x1) {
    PVar1 = local_24[0x12];
    CMyFileLog::CMyFileLog(local_74,"OnSetGuildMemberGradeFromWeb",0x526);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_74,"./log/GuildModify",
               "CPacketTranslater::OnSetGuildMemberGradeFromWeb : can\'t change guild master(%d)",
               (int)(char)PVar1);
  }
  else {
    if (local_24[0x12] == (PacketHeader)0x2) {
      bVar6 = CGuild::GetCurSubGuildMasterCnt(local_28);
      if (4 < bVar6) {
        CMyFileLog::CMyFileLog(local_6c,"OnSetGuildMemberGradeFromWeb",0x52e);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_6c,"./log/GuildModify",
                   "CPacketTranslater::OnSetGuildMemberGradeFromWeb : over sub guild master count");
        return;
      }
      cVar5 = CGuild::IsGuildMaster(local_28,*(uint *)(local_24 + 10));
      if (cVar5 != '\x01') {
        CMyFileLog::CMyFileLog(local_64,"OnSetGuildMemberGradeFromWeb",0x535);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_64,"./log/GuildModify",
                   "CPacketTranslater::OnSetGuildMemberGradeFromWeb : can\'t change sub guild master except master"
                  );
        return;
      }
    }
    cVar5 = CGuild::IsGuildMaster(local_28,*(uint *)(local_24 + 0x13));
    if (cVar5 == '\0') {
      if (*(int *)(local_24 + 0x13) == *(int *)(local_24 + 10)) {
        uVar3 = *(undefined4 *)(local_24 + 0x13);
        CMyFileLog::CMyFileLog(local_54,"OnSetGuildMemberGradeFromWeb",0x542);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_54,"./log/GuildModify",
                   "CPacketTranslater::OnSetGuildMemberGradeFromWeb : can\'t change myself(%d)",
                   uVar3);
      }
      else {
        if (local_24[0x12] == (PacketHeader)0x2) {
          cVar5 = CGuild::IsGuildMaster(local_28,*(uint *)(local_24 + 10));
          if (cVar5 != '\x01') {
            uVar3 = *(undefined4 *)(local_24 + 10);
            CMyFileLog::CMyFileLog(local_4c,"OnSetGuildMemberGradeFromWeb",0x54c);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_4c,"./log/GuildModify",
                       "CPacketTranslater::OnSetGuildMemberGradeFromWeb : can\'t change sub guild master except guild master(%d)"
                       ,uVar3);
            return;
          }
          CGuild::SetSubGuildMaster(local_28,*(uint *)(local_24 + 0x13),true);
          CGuild::SendGuildInfoToMembers(local_28,false);
        }
        else {
          cVar5 = CGuild::IsSubGuildMaster(local_28,*(uint *)(local_24 + 0x13));
          if (cVar5 != '\0') {
            cVar5 = CGuild::IsGuildMaster(local_28,*(uint *)(local_24 + 10));
            if (cVar5 != '\x01') {
              uVar3 = *(undefined4 *)(local_24 + 10);
              CMyFileLog::CMyFileLog(local_44,"OnSetGuildMemberGradeFromWeb",0x55c);
              CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                        (local_44,"./log/GuildModify",
                         "CPacketTranslater::OnSetGuildMemberGradeFromWeb : can\'t change sub guild master except guild master(%d)"
                         ,uVar3);
              return;
            }
            CGuild::SetSubGuildMaster(local_28,*(uint *)(local_24 + 0x13),false);
            CGuild::SendGuildInfoToMembers(local_28,false);
          }
        }
        CGuild::ChangeUnconnectedGuildMemberGrade
                  (local_28,*(uint *)(local_24 + 0x13),(int)(char)local_24[0x12]);
        local_2c = (CUser *)CUserManager::FindUser_CharNo(m_pclApp + 0x10);
        if (local_2c != (CUser *)0x0) {
          CUser::ChangeGuildMemberGrade(local_2c,(uchar)local_24[0x12]);
          Packet_Monitor_Notify_GuildMemberGrade::Packet_Monitor_Notify_GuildMemberGrade(local_a7);
          local_95 = local_24[0x12];
          local_99 = CUser::GetUniqCharNo(local_2c);
          local_9d = CUser::GetIdByChannel(local_2c);
          CUser::SendToGameserver(local_2c,(char *)local_a7,(uint)local_a5);
        }
      }
    }
    else {
      PVar1 = local_24[0x12];
      CMyFileLog::CMyFileLog(local_5c,"OnSetGuildMemberGradeFromWeb",0x53d);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_5c,"./log/GuildModify",
                 "CPacketTranslater::OnSetGuildMemberGradeFromWeb : can\'t change guild master(%d)",
                 (int)(char)PVar1);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 1019 行）：

```cpp
void CPacketTranslater::OnSetGuildMemberGradeFromWeb(PacketHeader* pkt)
{
    Packet_Monitor_Set_GuildMember_Grade_FromWeb* pb = (Packet_Monitor_Set_GuildMember_Grade_FromWeb*)pkt;
    try
    {
    THROW_IF_NO_APP("CPacketTranslater::OnSetGuildMemberGradeFromWeb : 0 == m_pclApp");
    unsigned int guildKey = pb->m_guildKey;
    unsigned int masterCharNo = pb->m_masterCharNo;
    unsigned char newGrade = pb->m_newGrade;
    unsigned int targetCharNo = pb->m_targetCharNo;
    if (guildKey == 0)
    {
        DNF_LOG_SCOPE_LINE(0x515,"./log/GuildModify",
            "CPacketTranslater::OnSetGuildMemberGradeFromWeb : 0 == packet->m_uGuildKey(%d)",
            (unsigned int)(guildKey == 0));
        return;
    }
    CGuild* guild;
    if ((guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey)) == 0)
    {
        DNF_LOG_SCOPE_LINE(0x51a,"./log/GuildModify",
            "CPacketTranslater::OnSetGuildMemberGradeFromWeb : no guild(%d)", masterCharNo);
        return;
    }
    if (!guild->IsGuildMaster(masterCharNo) && !guild->IsSubGuildMaster(masterCharNo))
    {
        DNF_LOG_SCOPE_LINE(0x520,"./log/GuildModify",
            "CPacketTranslater::OnSetGuildMemberGradeFromWeb : no guild master(%d)", masterCharNo);
        return;
    }
    if (newGrade == 1)
    {
        DNF_LOG_SCOPE_LINE(0x526,"./log/GuildModify",
            "CPacketTranslater::OnSetGuildMemberGradeFromWeb : can't change guild master(%d)",
            (int)(char)newGrade);
        return;
    }
    if (newGrade == 2)
    {
        if (4 < guild->GetCurSubGuildMasterCnt())
        {
            DNF_LOG_SCOPE_LINE(0x52e,"./log/GuildModify",
                "CPacketTranslater::OnSetGuildMemberGradeFromWeb : over sub guild master count");
            return;
        }
        if (!guild->IsGuildMaster(masterCharNo))
        {
            DNF_LOG_SCOPE_LINE(0x535,"./log/GuildModify",
                "CPacketTranslater::OnSetGuildMemberGradeFromWeb : can't change sub guild master except master");
            return;
        }
    }
    if (guild->IsGuildMaster(targetCharNo))
    {
        DNF_LOG_SCOPE_LINE(0x53d,"./log/GuildModify",
            "CPacketTranslater::OnSetGuildMemberGradeFromWeb : can't change guild master(%d)",
            (int)(char)newGrade);
        return;
    }
    if (targetCharNo == masterCharNo)
    {
        DNF_LOG_SCOPE_LINE(0x542,"./log/GuildModify",
            "CPacketTranslater::OnSetGuildMemberGradeFromWeb : can't change myself(%d)", targetCharNo);
        return;
    }
    if (newGrade == 2)
    {
        if (!guild->IsGuildMaster(masterCharNo))
        {
            DNF_LOG_SCOPE_LINE(0x54c,"./log/GuildModify",
                "CPacketTranslater::OnSetGuildMemberGradeFromWeb : can't change sub guild master except guild master(%d)",
                masterCharNo);
            return;
        }
        guild->SetSubGuildMaster(targetCharNo, true);
        guild->SendGuildInfoToMembers(false);
    }
    else if (guild->IsSubGuildMaster(targetCharNo))
    {
        if (!guild->IsGuildMaster(masterCharNo))
        {
            DNF_LOG_SCOPE_LINE(0x55c,"./log/GuildModify",
                "CPacketTranslater::OnSetGuildMemberGradeFromWeb : can't change sub guild master except guild master(%d)",
                masterCharNo);
            return;
        }
        guild->SetSubGuildMaster(targetCharNo, false);
        guild->SendGuildInfoToMembers(false);
    }
    guild->ChangeUnconnectedGuildMemberGrade(targetCharNo, (int)(char)newGrade);
    CUser* user = (&m_pclApp->m_userManager)->FindUser_CharNo(targetCharNo);
    if (user != 0)
    {
        user->ChangeGuildMemberGrade(newGrade);
        Packet_Monitor_Notify_GuildMemberGrade notify;
        notify.m_channel = user->GetIdByChannel();
        notify.m_charNo = user->GetUniqCharNo();
        notify.m_grade = newGrade;
        user->SendToGameserver((char*)&notify, notify.packetSize);
    }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x578, "./log/Except", "CPacketTranslater::OnSetGuildMemberGrade() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x57d, "./log/Except", "CPacketTranslater::OnSetGuildMemberGrade() Exception Break\n");
    }
}
```

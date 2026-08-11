# _ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader

`CPacketTranslater::OnNoticeGuildWarEnd(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8076258` | `0x4a8` | `0x806cb1c` | `0x4ba` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,344 +1,349 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0xdc,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0xf2>
-lea    -0x49(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcEC1Ev>
-lea    -0x49(%ebp),%eax
-mov    %eax,0x8(%esp)
-movl   $"CPacketTranslater::OnNoticeGuildWarEnd : 0 == m_pclApp",0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x50(%ebp),%esi
-movl   $0x8,(%esp)
-call   <T> <__cxa_allocate_exception>
-mov    %eax,%ebx
-mov    %ebx,%eax
-mov    %esi,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x98>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%esi
-mov    %ecx,%edi
-mov    %ebx,(%esp)
-call   <T> <__cxa_free_exception>
-mov    %edi,%ecx
-mov    %esi,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x92>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0xb7>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0xb7>
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0xcf>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0xb7>
-call   <T> <_ZSt9terminatev>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x49(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x3bc>
-lea    -0x49(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
-movl   $&_ZTI13CDNFException,0x4(%esp)
-mov    %ebx,(%esp)
-call   <T> <__cxa_throw>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x290,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN13CGuildManager11GetGuildWarEv>
-mov    %eax,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN9CGuildWar17IsGuildWarEventOnEv>
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x49c>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%eax
-mov    %eax,0x8(%esp)
-movl   $0x0,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN9CGuildWar16SetGuildWarEventEbh>
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN9CGuildWar4RankEv>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x233>
-lea    -0x41(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcEC1Ev>
-lea    -0x41(%ebp),%eax
-mov    %eax,0x8(%esp)
-movl   $"CPacketTranslater::OnNoticeGuildWarEnd : false == Rank() : May be m_vtGuildWarInfo is empty!",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x48(%ebp),%esi
-movl   $0x8,(%esp)
-call   <T> <__cxa_allocate_exception>
-mov    %eax,%ebx
-mov    %ebx,%eax
-mov    %esi,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x1d9>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%esi
-mov    %ecx,%edi
-mov    %ebx,(%esp)
-call   <T> <__cxa_free_exception>
-mov    %edi,%ecx
-mov    %esi,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x1d3>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x1f8>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x1f8>
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x210>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x1f8>
-call   <T> <_ZSt9terminatev>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x41(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x3bc>
-lea    -0x41(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
-movl   $&_ZTI13CDNFException,0x4(%esp)
-mov    %ebx,(%esp)
-call   <T> <__cxa_throw>
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN9CGuildWar12SameRankWorkEv>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x322>
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x39(%ebp),%eax
 mov    %eax,0x8(%esp)
-movl   $"CPacketTranslater::OnNoticeGuildWarEnd : false == SameRankWork() : May be m_vtGuildWarInfo is empty!",0x4(%esp)
+movl   $"CPacketTranslater::OnNoticeGuildWarEnd : 0 == m_pclApp",0x4(%esp)
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x40(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x2c8>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x98>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x2c2>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x2e7>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x2e7>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x92>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0xb7>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0xb7>
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x2ff>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x2e7>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0xcf>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0xb7>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x3bc>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x3d3>
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
+call   <T> <_ZN12CApplication16Get_GuildManagerEv>
+mov    %eax,(%esp)
+call   <T> <_ZN13CGuildManager11GetGuildWarEv>
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN9CGuildWar17IsGuildWarEventOnEv>
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x4af>
+mov    0x8(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
+movzbl %al,%eax
+mov    %eax,0x8(%esp)
+movl   $0x0,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN9CGuildWar16SetGuildWarEventEbh>
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN9CGuildWar4RankEv>
+cmp    $0x1,%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x238>
+lea    -0x31(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcEC1Ev>
+lea    -0x31(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $"CPacketTranslater::OnNoticeGuildWarEnd : false == Rank() : May be m_vtGuildWarInfo is empty!",0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsC1EPKcRKSaIcE>
+lea    -0x38(%ebp),%esi
+movl   $0x8,(%esp)
+call   <T> <__cxa_allocate_exception>
+mov    %eax,%ebx
+mov    %ebx,%eax
+mov    %esi,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN13CDNFExceptionC1ERKSs>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x1de>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%esi
+mov    %ecx,%edi
+mov    %ebx,(%esp)
+call   <T> <__cxa_free_exception>
+mov    %edi,%ecx
+mov    %esi,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x1d8>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x1fd>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x1fd>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x215>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x1fd>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x31(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x3d3>
+lea    -0x31(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
+movl   $&_ZTI13CDNFException,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <__cxa_throw>
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN9CGuildWar12SameRankWorkEv>
+cmp    $0x1,%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x32a>
+lea    -0x29(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcEC1Ev>
+lea    -0x29(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $"CPacketTranslater::OnNoticeGuildWarEnd : false == SameRankWork() : May be m_vtGuildWarInfo is empty!",0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsC1EPKcRKSaIcE>
+lea    -0x30(%ebp),%esi
+movl   $0x8,(%esp)
+call   <T> <__cxa_allocate_exception>
+mov    %eax,%ebx
+mov    %ebx,%eax
+mov    %esi,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN13CDNFExceptionC1ERKSs>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x2d0>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%esi
+mov    %ecx,%edi
+mov    %ebx,(%esp)
+call   <T> <__cxa_free_exception>
+mov    %edi,%ecx
+mov    %esi,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x2ca>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x2ef>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x2ef>
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x307>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x2ef>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x29(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x3d3>
+lea    -0x29(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
+movl   $&_ZTI13CDNFException,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <__cxa_throw>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_ServerGroupEv>
 mov    %al,-0x1d(%ebp)
-lea    -0xcd(%ebp),%eax
+lea    -0xcf(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN30Packet_Notice_DB_Guild_War_EndC1Ev>
+lea    -0xcf(%ebp),%eax
+lea    0xa(%eax),%edx
 movzbl -0x1d(%ebp),%eax
-mov    %al,-0xc3(%ebp)
-lea    -0xcd(%ebp),%eax
+mov    %al,(%edx)
+lea    -0xcf(%ebp),%eax
 add    $0x5b,%eax
+lea    -0xcf(%ebp),%edx
+lea    0x33(%edx),%ecx
+lea    -0xcf(%ebp),%edx
+add    $0xb,%edx
 mov    %eax,0xc(%esp)
-lea    -0xcd(%ebp),%eax
-add    $0x33,%eax
-mov    %eax,0x8(%esp)
-lea    -0xcd(%ebp),%eax
-add    $0xb,%eax
-mov    %eax,0x4(%esp)
+mov    %ecx,0x8(%esp)
+mov    %edx,0x4(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9CGuildWar15GetGuildWarInfoEPjS0_Pt>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0x68(%eax),%eax
-lea    -0xcd(%ebp),%edx
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+lea    -0xcf(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-lea    -0x5e(%ebp),%eax
+lea    -0x4e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN24Packet_Monitor_Event_EndC1Ev>
-movl   $0x9,-0x54(%ebp)
-lea    -0x5e(%ebp),%eax
+lea    -0x4e(%ebp),%eax
+add    $0xa,%eax
+movl   $0x9,(%eax)
+lea    -0x4e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CPacketTranslater10OnEventEndEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x49d>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x4af>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0x2,%eax
-jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x43c>
+jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x451>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
+movl   $0x76d,0x8(%esp)
+movl   $"OnNoticeGuildWarEnd",0x4(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %eax,%ebx
-movl   $0x76d,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnNoticeGuildWarEnd Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x435>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x44a>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x49d>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x4af>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x772,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnNoticeGuildWarEnd Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x495>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x4aa>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x49d>
-nop
 add    $0xdc,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnNoticeGuildWarEnd(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader
               (PacketHeader *param_1)

{
  char cVar1;
  CDNFException *pCVar2;
  Packet_Notice_DB_Guild_War_End local_d1 [10];
  undefined1 local_c7;
  uint auStack_c6 [10];
  uint auStack_9e [10];
  ushort auStack_76 [10];
  Packet_Monitor_Event_End local_62 [10];
  undefined4 local_58;
  string local_54 [7];
  allocator local_4d;
  string local_4c [7];
  allocator local_45;
  string local_44 [7];
  allocator local_3d [17];
  CGuildWar *local_2c;
  PacketHeader *local_28;
  undefined1 local_21;
  
  if (m_pclApp == (CApplication *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08076291 to 08076295 has its CatchHandler @ 0807630b */
    std::string::string(local_54,"CPacketTranslater::OnNoticeGuildWarEnd : 0 == m_pclApp",&local_4d)
    ;
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080762b0 to 080762b4 has its CatchHandler @ 080762b7 */
    CDNFException::CDNFException(pCVar2,local_54);
                    /* try { // try from 080762f6 to 080762fa has its CatchHandler @ 080762fd */
    std::string::~string(local_54);
    std::allocator<char>::~allocator((allocator<char> *)&local_4d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08076345 to 080763a6 has its CatchHandler @ 08076610 */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_2c = (CGuildWar *)CGuildManager::GetGuildWar((CGuildManager *)(m_pclApp + 0x290));
  cVar1 = CGuildWar::IsGuildWarEventOn(local_2c);
  if (cVar1 == '\x01') {
    local_28 = param_1;
    CGuildWar::SetGuildWarEvent(local_2c,false,(uchar)param_1[10]);
    cVar1 = CGuildWar::Rank(local_2c);
    if (cVar1 != '\x01') {
      std::allocator<char>::allocator();
                    /* try { // try from 080763d2 to 080763d6 has its CatchHandler @ 0807644c */
      std::string::string(local_4c,
                          "CPacketTranslater::OnNoticeGuildWarEnd : false == Rank() : May be m_vtGuildWarInfo is empty!"
                          ,&local_45);
      pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080763f1 to 080763f5 has its CatchHandler @ 080763f8 */
      CDNFException::CDNFException(pCVar2,local_4c);
                    /* try { // try from 08076437 to 0807643b has its CatchHandler @ 0807643e */
      std::string::~string(local_4c);
      std::allocator<char>::~allocator((allocator<char> *)&local_45);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08076486 to 08076495 has its CatchHandler @ 08076610 */
      __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
    }
    cVar1 = CGuildWar::SameRankWork();
    if (cVar1 != '\x01') {
      std::allocator<char>::allocator();
                    /* try { // try from 080764c1 to 080764c5 has its CatchHandler @ 0807653b */
      std::string::string(local_44,
                          "CPacketTranslater::OnNoticeGuildWarEnd : false == SameRankWork() : May be m_vtGuildWarInfo is empty!"
                          ,local_3d);
      pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080764e0 to 080764e4 has its CatchHandler @ 080764e7 */
      CDNFException::CDNFException(pCVar2,local_44);
                    /* try { // try from 08076526 to 0807652a has its CatchHandler @ 0807652d */
      std::string::~string(local_44);
      std::allocator<char>::~allocator((allocator<char> *)local_3d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08076575 to 0807660a has its CatchHandler @ 08076610 */
      __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
    }
    local_21 = CApplication::_ZN12CApplication15Get_ServerGroupEv(m_pclApp);
    Packet_Notice_DB_Guild_War_End::Packet_Notice_DB_Guild_War_End(local_d1);
    local_c7 = local_21;
    CGuildWar::GetGuildWarInfo(local_2c,auStack_c6,auStack_9e,auStack_76);
    CServerHandler::_ZN14CServerHandler8SendToDBEP12PacketHeader
              (*(CServerHandler **)(m_pclApp + 0x68),(PacketHeader *)local_d1);
    Packet_Monitor_Event_End::Packet_Monitor_Event_End(local_62);
    local_58 = 9;
    _ZN17CPacketTranslater10OnEventEndEP12PacketHeader((PacketHeader *)local_62);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 1246 行）：

```cpp
void CPacketTranslater::OnNoticeGuildWarEnd(PacketHeader* pkt)
{
    try
    {
    THROW_IF_NO_APP("CPacketTranslater::OnNoticeGuildWarEnd : 0 == m_pclApp");
    CGuildWar* war = m_pclApp->Get_GuildManager()->GetGuildWar();
    if (war->IsGuildWarEventOn() == 1)
    {
        char* pb = (char*)pkt;
        war->SetGuildWarEvent(false, (unsigned char)pb[10]);
        if (war->Rank() != 1)
        {
            throw CDNFException(
                "CPacketTranslater::OnNoticeGuildWarEnd : false == Rank() : May be m_vtGuildWarInfo is empty!");
        }
        if (war->SameRankWork() != 1)
        {
            throw CDNFException(
                "CPacketTranslater::OnNoticeGuildWarEnd : false == SameRankWork() : May be m_vtGuildWarInfo is empty!");
        }
        unsigned char group = m_pclApp->Get_ServerGroup();
        Packet_Notice_DB_Guild_War_End dbPkt;
        *(unsigned char*)((char*)&dbPkt + 0xa) = group;
        war->GetGuildWarInfo((unsigned int*)((char*)&dbPkt + 0xb),
                             (unsigned int*)((char*)&dbPkt + 0x33),
                             (unsigned short*)((char*)&dbPkt + 0x5b));
        m_pclApp->Get_ServerHandler()->SendToDB(&dbPkt);
        Packet_Monitor_Event_End monPkt;
        *(unsigned int*)((char*)&monPkt + 0xa) = 9;
        OnEventEnd(&monPkt);
    }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnNoticeGuildWarEnd", 0x76d);
        log("./log/Except", "CPacketTranslater::OnNoticeGuildWarEnd Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0x772);
        log("./log/Except", "CPacketTranslater::OnNoticeGuildWarEnd Exception Break\n");
    }
}
```

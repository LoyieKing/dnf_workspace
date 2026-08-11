# _ZN6CGuild17ReplyGuildMembersEP5CUser

`CGuild::ReplyGuildMembers(CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808f520` | `0x737` | `0x805579c` | `0x563` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,523 +1,424 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
-sub    $0x2fd4,%esp
+sub    $0x64,%esp
 cmpl   $0x0,0xc(%ebp)
-je     <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x72e>
+je     <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x2d>
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x732>
+je     <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x2d>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
 test   %al,%al
-jne    <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x731>
-lea    -0x2fab(%ebp),%eax
+je     <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x34>
+mov    $0x1,%eax
+jmp    <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x39>
+mov    $0x0,%eax
+test   %al,%al
+jne    <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x55d>
+lea    -0x3e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN43Packet_Monitor_Call_Guild_Members_ToChannelC1Ev>
+lea    -0x3e(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
+lea    0x12(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
-mov    %eax,-0x2f99(%ebp)
-mov    0x8(%ebp),%eax
-add    $0x20,%eax
+mov    %eax,(%edx)
+mov    0x8(%ebp),%eax
+lea    0x20(%eax),%edx
+mov    -0x28(%ebp),%eax
+add    $0x16,%eax
 movl   $0x16,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x2fab(%ebp),%eax
-add    $0x16,%eax
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
-mov    0x8(%ebp),%eax
-mov    0x44(%eax),%eax
-mov    %eax,-0x2f7d(%ebp)
-mov    0x8(%ebp),%eax
-movzwl 0x42(%eax),%eax
-mov    %ax,-0x2f79(%ebp)
-movl   $0x0,-0xc(%ebp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEC1Ev>
+mov    -0x28(%ebp),%eax
+lea    0x2e(%eax),%edx
+mov    0x8(%ebp),%eax
+add    $0x44,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+mov    -0x28(%ebp),%eax
+lea    0x32(%eax),%edx
+mov    0x8(%ebp),%eax
+add    $0x42,%eax
+movzwl (%eax),%eax
+mov    %ax,(%edx)
+movl   $0x0,-0x24(%ebp)
 mov    0x8(%ebp),%edx
-lea    -0x2fbc(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-mov    -0x2fbc(%ebp),%eax
-mov    %eax,-0x1c(%ebp)
-jmp    <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x304>
-mov    -0xc(%ebp),%ebx
-lea    -0x1c(%ebp),%eax
+jmp    <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x20d>
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x24(%ebp),%eax
+mov    %eax,%edx
+shl    $0x6,%edx
+mov    %edx,%ecx
+sub    %eax,%ecx
+mov    %ecx,%eax
+add    $0x34,%eax
+add    -0x28(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser6GetJobEv>
 mov    %eax,%edx
-mov    %ebx,%eax
-shl    $0x6,%eax
-sub    %ebx,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x2f6f,%eax
+mov    -0x1c(%ebp),%eax
 mov    %dl,(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
-mov    0x4(%eax),%eax
+mov    -0x1c(%ebp),%eax
+lea    0x1(%eax),%ebx
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGrowthTypeEv>
-mov    %eax,%edx
-mov    %ebx,%eax
-shl    $0x6,%eax
-sub    %ebx,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x2f6e,%eax
-mov    %dl,(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
-mov    0x4(%eax),%eax
+mov    %al,(%ebx)
+mov    -0x1c(%ebp),%eax
+lea    0x2(%eax),%ebx
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser8GetLevelEv>
-mov    %eax,%edx
-mov    %ebx,%eax
-shl    $0x6,%eax
-sub    %ebx,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x2f73,%eax
-mov    %dx,0x6(%eax)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
-mov    0x4(%eax),%eax
+movzbl %al,%eax
+mov    %ax,(%ebx)
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
-mov    %eax,%ecx
-mov    -0xc(%ebp),%edx
-lea    -0x2fab(%ebp),%ebx
-mov    %edx,%eax
-shl    $0x6,%eax
-sub    %edx,%eax
-add    $0x30,%eax
-lea    (%ebx,%eax,1),%eax
-add    $0x8,%eax
+mov    -0x1c(%ebp),%edx
+add    $0x4,%edx
 movl   $0x1d,0x8(%esp)
-mov    %ecx,0x4(%esp)
-mov    %eax,(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <memcpy>
-mov    -0xc(%ebp),%ebx
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
-mov    0x4(%eax),%eax
+mov    -0x1c(%ebp),%eax
+lea    0x38(%eax),%ebx
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser6GetSexEv>
-mov    %eax,%edx
-mov    %ebx,%eax
-shl    $0x6,%eax
-sub    %ebx,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x2f37,%eax
-mov    %dl,(%eax)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
-mov    0x4(%eax),%eax
+mov    %al,(%ebx)
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x224>
-mov    -0xc(%ebp),%ebx
-lea    -0x1c(%ebp),%eax
+je     <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x18e>
+mov    -0x1c(%ebp),%eax
+lea    0x37(%eax),%ebx
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+mov    %eax,(%esp)
+call   <T> <_ZN16CServerInterface12GetChannelNoEv>
+mov    %al,(%ebx)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17GetGuildMemDBInfoEv>
+mov    -0x1c(%ebp),%edx
+add    $0x22,%edx
+movl   $0x14,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+mov    -0x1c(%ebp),%eax
+lea    0x3a(%eax),%ebx
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17GetGuildMemDBInfoEv>
+add    $0x15,%eax
+movzbl (%eax),%eax
+mov    %al,(%ebx)
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser11IsBlackUserEj>
+test   %eax,%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x1f8>
+mov    -0x1c(%ebp),%eax
+add    $0x39,%eax
+movb   $0x1,(%eax)
+addl   $0x1,-0x24(%ebp)
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEppEv>
+cmpl   $0x5f,-0x24(%ebp)
+jg     <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x23e>
+mov    0x8(%ebp),%edx
+lea    -0x34(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
+sub    $0x4,%esp
+lea    -0x34(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
+test   %al,%al
+jne    <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0xc3>
+jmp    <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x23f>
+nop
+mov    -0x28(%ebp),%eax
+lea    0x2d(%eax),%edx
+mov    -0x24(%ebp),%eax
+mov    %al,(%edx)
+mov    -0x28(%ebp),%eax
+lea    0x2(%eax),%edx
+mov    -0x24(%ebp),%eax
+mov    %eax,%ecx
+shl    $0x6,%ecx
+mov    %ecx,%ebx
+sub    %ax,%bx
+mov    %ebx,%eax
+add    $0x34,%eax
+mov    %ax,(%edx)
+mov    -0x28(%ebp),%eax
+lea    0xa(%eax),%ebx
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,(%ebx)
+mov    -0x28(%ebp),%eax
+lea    0xe(%eax),%ebx
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,(%ebx)
+mov    -0x24(%ebp),%eax
+mov    %eax,%edx
+shl    $0x6,%edx
+mov    %edx,%ecx
+sub    %eax,%ecx
+mov    %ecx,%eax
+add    $0x34,%eax
+mov    %eax,0x8(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+mov    0x8(%ebp),%edx
+lea    -0x30(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
+sub    $0x4,%esp
+lea    -0x30(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
+test   %al,%al
+je     <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x55e>
+lea    -0x4e(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN48Packet_Monitor_Call_Guild_Members_ToChannel_NextC1Ev>
+lea    -0x4e(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
+lea    0x12(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    0x18(%eax),%eax
+mov    %eax,(%edx)
+movl   $0x0,-0x14(%ebp)
+jmp    <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x4b3>
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
-mov    %eax,(%esp)
-call   <T> <_ZN16CServerInterface12GetChannelNoEv>
-mov    %eax,%edx
+mov    %eax,-0x10(%ebp)
+mov    -0x14(%ebp),%eax
+mov    %eax,%edx
+shl    $0x6,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
 mov    %ebx,%eax
-shl    $0x6,%eax
-sub    %ebx,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x2f38,%eax
+add    $0x17,%eax
+add    -0x18(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser6GetJobEv>
+mov    %eax,%edx
+mov    -0xc(%ebp),%eax
 mov    %dl,(%eax)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
-mov    0x4(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17GetGuildMemDBInfoEv>
-mov    %eax,%ecx
+mov    -0xc(%ebp),%eax
+lea    0x1(%eax),%ebx
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGrowthTypeEv>
+mov    %al,(%ebx)
+mov    -0xc(%ebp),%eax
+lea    0x2(%eax),%ebx
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser8GetLevelEv>
+movzbl %al,%eax
+mov    %ax,(%ebx)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser11GetCharNameEv>
 mov    -0xc(%ebp),%edx
-lea    -0x2fab(%ebp),%ebx
-mov    %edx,%eax
-shl    $0x6,%eax
-sub    %edx,%eax
-add    $0x50,%eax
-lea    (%ebx,%eax,1),%eax
-add    $0x6,%eax
-movl   $0x14,0x8(%esp)
-mov    %ecx,0x4(%esp)
-mov    %eax,(%esp)
+add    $0x4,%edx
+movl   $0x1d,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <memcpy>
-mov    -0xc(%ebp),%ebx
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
-mov    0x4(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17GetGuildMemDBInfoEv>
-movzbl 0x15(%eax),%edx
-mov    %ebx,%eax
-shl    $0x6,%eax
-sub    %ebx,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x2f35,%eax
-mov    %dl,(%eax)
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%ebx
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
-mov    0x4(%eax),%eax
-mov    %ebx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser11IsBlackUserEj>
-test   %al,%al
-je     <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x2dd>
-mov    -0xc(%ebp),%edx
-mov    %edx,%eax
-shl    $0x6,%eax
-sub    %edx,%eax
-lea    -0x8(%ebp),%edx
-lea    (%edx,%eax,1),%eax
-sub    $0x2f36,%eax
-movb   $0x1,(%eax)
-addl   $0x1,-0xc(%ebp)
-cmpl   $0x5f,-0xc(%ebp)
-setg   %al
-test   %al,%al
-je     <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x2f9>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEppEv>
-jmp    <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x333>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEppEv>
-mov    0x8(%ebp),%edx
-lea    -0x18(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
-sub    $0x4,%esp
-lea    -0x18(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
-test   %al,%al
-jne    <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0xcb>
-mov    -0xc(%ebp),%eax
-mov    %al,-0x2f7e(%ebp)
-movzbl -0x2f7e(%ebp),%eax
-movzbl %al,%edx
-mov    %edx,%eax
-shl    $0x6,%eax
-sub    %dx,%ax
-add    $0x34,%eax
-mov    %ax,-0x2fa9(%ebp)
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x2fa1(%ebp)
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x2f9d(%ebp)
-movzwl -0x2fa9(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x2fab(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-mov    0x8(%ebp),%edx
-lea    -0x14(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
-sub    $0x4,%esp
-lea    -0x1c(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
-test   %al,%al
-je     <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x732>
-lea    -0x17d7(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN48Packet_Monitor_Call_Guild_Members_ToChannel_NextC1Ev>
-mov    0x8(%ebp),%eax
-mov    0x18(%eax),%eax
-mov    %eax,-0x17c5(%ebp)
-movl   $0x0,-0xc(%ebp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEC1Ev>
-mov    -0x1c(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-jmp    <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x68d>
-mov    -0xc(%ebp),%ebx
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
-mov    0x4(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser6GetJobEv>
-mov    %eax,%edx
-mov    %ebx,%eax
-shl    $0x6,%eax
-sub    %ebx,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x17b8,%eax
-mov    %dl,(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
-mov    0x4(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGrowthTypeEv>
-mov    %eax,%edx
-mov    %ebx,%eax
-shl    $0x6,%eax
-sub    %ebx,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x17b7,%eax
-mov    %dl,(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
-mov    0x4(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser8GetLevelEv>
-mov    %eax,%edx
-mov    %ebx,%eax
-shl    $0x6,%eax
-sub    %ebx,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x17bf,%eax
-mov    %dx,0x9(%eax)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
-mov    0x4(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser11GetCharNameEv>
-mov    %eax,%ecx
-mov    -0xc(%ebp),%edx
-lea    -0x17d7(%ebp),%ebx
-mov    %edx,%eax
-shl    $0x6,%eax
-sub    %edx,%eax
-add    $0x10,%eax
-lea    (%ebx,%eax,1),%eax
-add    $0xb,%eax
-movl   $0x1d,0x8(%esp)
-mov    %ecx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <memcpy>
-mov    -0xc(%ebp),%ebx
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
-mov    0x4(%eax),%eax
+mov    -0xc(%ebp),%eax
+lea    0x38(%eax),%ebx
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser6GetSexEv>
-mov    %eax,%edx
-mov    %ebx,%eax
-shl    $0x6,%eax
-sub    %ebx,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x1780,%eax
-mov    %dl,(%eax)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
-mov    0x4(%eax),%eax
+mov    %al,(%ebx)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x55c>
-mov    -0xc(%ebp),%ebx
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
-mov    0x4(%eax),%eax
+je     <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x3d7>
+mov    -0xc(%ebp),%eax
+lea    0x37(%eax),%ebx
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface12GetChannelNoEv>
-mov    %eax,%edx
-mov    %ebx,%eax
-shl    $0x6,%eax
-sub    %ebx,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x1781,%eax
-mov    %dl,(%eax)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
-mov    0x4(%eax),%eax
+mov    %al,(%ebx)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17GetGuildMemDBInfoEv>
-mov    %eax,%ecx
 mov    -0xc(%ebp),%edx
-lea    -0x17d7(%ebp),%ebx
-mov    %edx,%eax
-shl    $0x6,%eax
-sub    %edx,%eax
-add    $0x30,%eax
-lea    (%ebx,%eax,1),%eax
-add    $0x9,%eax
+add    $0x22,%edx
 movl   $0x14,0x8(%esp)
-mov    %ecx,0x4(%esp)
-mov    %eax,(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <memcpy>
-mov    -0xc(%ebp),%ebx
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
-mov    0x4(%eax),%eax
+mov    -0xc(%ebp),%eax
+lea    0x3a(%eax),%ebx
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17GetGuildMemDBInfoEv>
-movzbl 0x15(%eax),%edx
-mov    %ebx,%eax
-shl    $0x6,%eax
-sub    %ebx,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x177e,%eax
-mov    %dl,(%eax)
+add    $0x15,%eax
+movzbl (%eax),%eax
+mov    %al,(%ebx)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%ebx
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
-mov    0x4(%eax),%eax
-mov    %ebx,0x4(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11IsBlackUserEj>
-test   %al,%al
-je     <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x615>
-mov    -0xc(%ebp),%edx
-mov    %edx,%eax
-shl    $0x6,%eax
-sub    %edx,%eax
-lea    -0x8(%ebp),%edx
-lea    (%edx,%eax,1),%eax
-sub    $0x177f,%eax
+test   %eax,%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x441>
+mov    -0xc(%ebp),%eax
+add    $0x39,%eax
 movb   $0x1,(%eax)
-addl   $0x1,-0xc(%ebp)
-cmpl   $0x5f,-0xc(%ebp)
-setg   %al
-test   %al,%al
-je     <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x682>
-mov    -0xc(%ebp),%eax
-mov    %al,-0x17c1(%ebp)
-movw   $0x17b7,-0x17d5(%ebp)
+addl   $0x1,-0x14(%ebp)
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEppEv>
+cmpl   $0x5f,-0x14(%ebp)
+jle    <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x4b3>
+mov    -0x18(%ebp),%eax
+lea    0x16(%eax),%edx
+mov    -0x14(%ebp),%eax
+mov    %al,(%edx)
+mov    -0x18(%ebp),%eax
+add    $0x2,%eax
+movw   $0x17b7,(%eax)
+mov    -0x18(%ebp),%eax
+lea    0xa(%eax),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x17cd(%ebp)
+mov    %eax,(%ebx)
+mov    -0x18(%ebp),%eax
+lea    0xe(%eax),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x17c9(%ebp)
-movzwl -0x17d5(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x17d7(%ebp),%eax
-mov    %edx,0x8(%esp)
+mov    %eax,(%ebx)
+movl   $0x17b7,0x8(%esp)
+mov    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-movl   $0x0,-0xc(%ebp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEppEv>
+movl   $0x0,-0x14(%ebp)
 mov    0x8(%ebp),%edx
-lea    -0x10(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x2c(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x403>
-cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x732>
-mov    -0xc(%ebp),%eax
-mov    %al,-0x17c1(%ebp)
-movzbl -0x17c1(%ebp),%eax
-movzbl %al,%edx
-mov    %edx,%eax
-shl    $0x6,%eax
-sub    %dx,%ax
+jne    <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x30c>
+cmpl   $0x0,-0x14(%ebp)
+je     <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x55e>
+mov    -0x18(%ebp),%eax
+lea    0x16(%eax),%edx
+mov    -0x14(%ebp),%eax
+mov    %al,(%edx)
+mov    -0x18(%ebp),%eax
+lea    0x2(%eax),%edx
+mov    -0x14(%ebp),%eax
+mov    %eax,%ecx
+shl    $0x6,%ecx
+mov    %ecx,%ebx
+sub    %ax,%bx
+mov    %ebx,%eax
 add    $0x17,%eax
-mov    %ax,-0x17d5(%ebp)
+mov    %ax,(%edx)
+mov    -0x18(%ebp),%eax
+lea    0xa(%eax),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x17cd(%ebp)
+mov    %eax,(%ebx)
+mov    -0x18(%ebp),%eax
+lea    0xe(%eax),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x17c9(%ebp)
-movzwl -0x17d5(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x17d7(%ebp),%eax
-mov    %edx,0x8(%esp)
+mov    %eax,(%ebx)
+mov    -0x14(%ebp),%eax
+mov    %eax,%edx
+shl    $0x6,%edx
+mov    %edx,%ecx
+sub    %eax,%ecx
+mov    %ecx,%eax
+add    $0x17,%eax
+mov    %eax,0x8(%esp)
+mov    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x732>
-nop
-jmp    <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x732>
+jmp    <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser+0x55e>
 nop
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::ReplyGuildMembers(CUser*) */

void __thiscall CGuild::_ZN6CGuild17ReplyGuildMembersEP5CUser(CGuild *this,CUser *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  CServerInterface *pCVar7;
  undefined4 local_2fc0 [4];
  Packet_Monitor_Call_Guild_Members_ToChannel local_2faf [2];
  ushort local_2fad;
  undefined4 local_2fa5;
  undefined4 local_2fa1;
  undefined4 local_2f9d;
  undefined1 auStack_2f99 [23];
  byte local_2f82;
  undefined4 local_2f81;
  undefined2 local_2f7d;
  undefined1 auStack_2f7b [2];
  undefined2 uStack_2f79;
  undefined1 auStack_2f77 [30];
  undefined1 auStack_2f59 [21];
  undefined1 auStack_2f44 [5993];
  Packet_Monitor_Call_Guild_Members_ToChannel_Next local_17db [2];
  ushort local_17d9;
  undefined4 local_17d1;
  undefined4 local_17cd;
  undefined4 local_17c9;
  byte local_17c5;
  undefined1 auStack_17c4 [2];
  undefined2 uStack_17c2;
  undefined1 auStack_17c0 [30];
  undefined1 auStack_17a2 [21];
  undefined1 auStack_178d [5993];
  undefined4 local_24;
  undefined4 local_20;
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_1c [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_18 [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_14 [4];
  int local_10;
  
  if (((param_1 != (CUser *)0x0) && ((*(ushort *)(this + 0x1c) & 4) != 0)) &&
     (cVar1 = std::
              map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
              ::empty((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                       *)this), cVar1 == '\0')) {
    Packet_Monitor_Call_Guild_Members_ToChannel::
    _ZN43Packet_Monitor_Call_Guild_Members_ToChannelC2Ev(local_2faf);
    local_2f9d = *(undefined4 *)(this + 0x18);
    memcpy(auStack_2f99,this + 0x20,0x16);
    local_2f81 = *(undefined4 *)(this + 0x44);
    local_2f7d = *(undefined2 *)(this + 0x42);
    local_10 = 0;
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::_Rb_tree_iterator
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_20);
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::begin((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
             *)local_2fc0);
    local_20 = local_2fc0[0];
    while( true ) {
      std::
      map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
      ::end(local_1c);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_20,
                         (_Rb_tree_iterator *)local_1c);
      iVar5 = local_10;
      if (cVar1 == '\0') break;
      iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_20);
      uVar2 = CUser::GetJob(*(CUser **)(iVar4 + 4));
      iVar4 = local_10;
      auStack_2f7b[iVar5 * 0x3f] = uVar2;
      iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_20);
      uVar2 = CUser::GetGrowthType(*(CUser **)(iVar5 + 4));
      iVar5 = local_10;
      auStack_2f7b[iVar4 * 0x3f + 1] = uVar2;
      iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_20);
      uVar3 = CUser::_ZN5CUser8GetLevelEv(*(CUser **)(iVar4 + 4));
      *(undefined2 *)(auStack_2f7b + iVar5 * 0x3f + 2) = uVar3;
      iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_20);
      pvVar6 = (void *)CUser::GetCharName(*(CUser **)(iVar5 + 4));
      memcpy(auStack_2f7b + local_10 * 0x3f + 4,pvVar6,0x1d);
      iVar5 = local_10;
      iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_20);
      uVar2 = CUser::_ZN5CUser6GetSexEv(*(CUser **)(iVar4 + 4));
      auStack_2f44[iVar5 * 0x3f + 1] = uVar2;
      iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_20);
      iVar4 = CUser::GetGameServer(*(CUser **)(iVar5 + 4));
      iVar5 = local_10;
      if (iVar4 != 0) {
        iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_20);
        pCVar7 = (CServerInterface *)CUser::GetGameServer(*(CUser **)(iVar4 + 4));
        uVar2 = CServerInterface::_ZN16CServerInterface12GetChannelNoEv(pCVar7);
        auStack_2f44[iVar5 * 0x3f] = uVar2;
      }
      iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_20);
      pvVar6 = (void *)CUser::GetGuildMemDBInfo(*(CUser **)(iVar5 + 4));
      memcpy(auStack_2f59 + local_10 * 0x3f,pvVar6,0x14);
      iVar5 = local_10;
      iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_20);
      iVar4 = CUser::GetGuildMemDBInfo(*(CUser **)(iVar4 + 4));
      auStack_2f44[iVar5 * 0x3f + 3] = *(undefined1 *)(iVar4 + 0x15);
      CUser::GetUniqCharNo(param_1);
      iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_20);
      cVar1 = CUser::_ZN5CUser11IsBlackUserEj(*(uint *)(iVar5 + 4));
      if (cVar1 != '\0') {
        auStack_2f44[local_10 * 0x3f + 2] = 1;
      }
      local_10 = local_10 + 1;
      if (0x5f < local_10) {
        std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
                  ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_20);
        break;
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_20);
    }
    local_2f82 = (byte)local_10;
    local_2fad = ((ushort)local_2f82 * 0x40 - (ushort)local_2f82) + 0x34;
    local_2fa5 = CUser::GetIdByChannel(param_1);
    local_2fa1 = CUser::GetUniqCharNo(param_1);
    CUser::SendToGameserver(param_1,(char *)local_2faf,(uint)local_2fad);
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_18,
                       (_Rb_tree_iterator *)&local_20);
    if (cVar1 != '\0') {
      Packet_Monitor_Call_Guild_Members_ToChannel_Next::
      _ZN48Packet_Monitor_Call_Guild_Members_ToChannel_NextC2Ev(local_17db);
      local_17c9 = *(undefined4 *)(this + 0x18);
      local_10 = 0;
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::_Rb_tree_iterator
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_24);
      local_24 = local_20;
      while( true ) {
        std::
        map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
        ::end(local_14);
        cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_24,
                           (_Rb_tree_iterator *)local_14);
        iVar5 = local_10;
        if (cVar1 == '\0') break;
        iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_24);
        uVar2 = CUser::GetJob(*(CUser **)(iVar4 + 4));
        iVar4 = local_10;
        auStack_17c4[iVar5 * 0x3f] = uVar2;
        iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_24);
        uVar2 = CUser::GetGrowthType(*(CUser **)(iVar5 + 4));
        iVar5 = local_10;
        auStack_17c4[iVar4 * 0x3f + 1] = uVar2;
        iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_24);
        uVar3 = CUser::_ZN5CUser8GetLevelEv(*(CUser **)(iVar4 + 4));
        *(undefined2 *)(auStack_17c4 + iVar5 * 0x3f + 2) = uVar3;
        iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_24);
        pvVar6 = (void *)CUser::GetCharName(*(CUser **)(iVar5 + 4));
        memcpy(auStack_17c4 + local_10 * 0x3f + 4,pvVar6,0x1d);
        iVar5 = local_10;
        iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_24);
        uVar2 = CUser::_ZN5CUser6GetSexEv(*(CUser **)(iVar4 + 4));
        auStack_178d[iVar5 * 0x3f + 1] = uVar2;
        iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_24);
        iVar4 = CUser::GetGameServer(*(CUser **)(iVar5 + 4));
        iVar5 = local_10;
        if (iVar4 != 0) {
          iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                            ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_24);
          pCVar7 = (CServerInterface *)CUser::GetGameServer(*(CUser **)(iVar4 + 4));
          uVar2 = CServerInterface::_ZN16CServerInterface12GetChannelNoEv(pCVar7);
          auStack_178d[iVar5 * 0x3f] = uVar2;
        }
        iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_24);
        pvVar6 = (void *)CUser::GetGuildMemDBInfo(*(CUser **)(iVar5 + 4));
        memcpy(auStack_17a2 + local_10 * 0x3f,pvVar6,0x14);
        iVar5 = local_10;
        iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_24);
        iVar4 = CUser::GetGuildMemDBInfo(*(CUser **)(iVar4 + 4));
        auStack_178d[iVar5 * 0x3f + 3] = *(undefined1 *)(iVar4 + 0x15);
        CUser::GetUniqCharNo(param_1);
        iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_24);
        cVar1 = CUser::_ZN5CUser11IsBlackUserEj(*(uint *)(iVar5 + 4));
        if (cVar1 != '\0') {
          auStack_178d[local_10 * 0x3f + 2] = 1;
        }
        local_10 = local_10 + 1;
        if (0x5f < local_10) {
          local_17c5 = (byte)local_10;
          local_17d9 = 0x17b7;
          local_17d1 = CUser::GetIdByChannel(param_1);
          local_17cd = CUser::GetUniqCharNo(param_1);
          CUser::SendToGameserver(param_1,(char *)local_17db,(uint)local_17d9);
          local_10 = 0;
        }
        std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
                  ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_24);
      }
      if (local_10 != 0) {
        local_17c5 = (byte)local_10;
        local_17d9 = ((ushort)local_17c5 * 0x40 - (ushort)local_17c5) + 0x17;
        local_17d1 = CUser::GetIdByChannel(param_1);
        local_17cd = CUser::GetUniqCharNo(param_1);
        CUser::SendToGameserver(param_1,(char *)local_17db,(uint)local_17d9);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 1228 行）：

```cpp
void CGuild::ReplyGuildMembers(CUser* user)
{
    if (user == 0 || (m_field1c & 4) == 0 || m_members.empty())
    {
        return;
    }
    Packet_Monitor_Call_Guild_Members_ToChannel pkt;
    char* buf = (char*)&pkt;
    *(unsigned int*)(buf + 0x12) = m_guildKey;
    memcpy(buf + 0x16, (char*)this + 0x20, 0x16);
    *(unsigned int*)(buf + 0x2e) = *(unsigned int*)((char*)this + 0x44);
    *(unsigned short*)(buf + 0x32) = *(unsigned short*)((char*)this + 0x42);
    int count = 0;
    std::map<unsigned int, CUser*>::iterator it = m_members.begin();
    while (it != m_members.end())
    {
        CUser* m = it->second;
        char* rec = buf + 0x34 + count * 0x3f;
        rec[0] = m->GetJob();
        rec[1] = m->GetGrowthType();
        *(unsigned short*)(rec + 2) = m->GetLevel();
        memcpy(rec + 4, m->GetCharName(), 0x1d);
        rec[0x38] = m->GetSex();
        if (m->GetGameServer() != 0)
        {
            rec[0x37] = m->GetGameServer()->GetChannelNo();
        }
        memcpy(rec + 0x22, (char*)m->GetGuildMemDBInfo(), 0x14);
        rec[0x3a] = *(char*)((char*)m->GetGuildMemDBInfo() + 0x15);
        if (m->IsBlackUser(user->GetUniqCharNo()) != 0)
        {
            rec[0x39] = 1;
        }
        count++;
        ++it;
        if (0x5f < count)
        {
            break;
        }
    }
    *(unsigned char*)(buf + 0x2d) = (unsigned char)count;
    *(unsigned short*)(buf + 2) = (unsigned short)(count * 0x3f + 0x34);
    *(unsigned int*)(buf + 0xa) = user->GetIdByChannel();
    *(unsigned int*)(buf + 0xe) = user->GetUniqCharNo();
    user->SendToGameserver(buf, count * 0x3f + 0x34);
    if (it != m_members.end())
    {
        Packet_Monitor_Call_Guild_Members_ToChannel_Next pkt2;
        char* buf2 = (char*)&pkt2;
        *(unsigned int*)(buf2 + 0x12) = m_guildKey;
        int cnt2 = 0;
        while (it != m_members.end())
        {
            CUser* m = it->second;
            char* rec = buf2 + 0x17 + cnt2 * 0x3f;
            rec[0] = m->GetJob();
            rec[1] = m->GetGrowthType();
            *(unsigned short*)(rec + 2) = m->GetLevel();
            memcpy(rec + 4, m->GetCharName(), 0x1d);
            rec[0x38] = m->GetSex();
            if (m->GetGameServer() != 0)
            {
                rec[0x37] = m->GetGameServer()->GetChannelNo();
            }
            memcpy(rec + 0x22, (char*)m->GetGuildMemDBInfo(), 0x14);
            rec[0x3a] = *(char*)((char*)m->GetGuildMemDBInfo() + 0x15);
            if (m->IsBlackUser(user->GetUniqCharNo()) != 0)
            {
                rec[0x39] = 1;
            }
            cnt2++;
            ++it;
            if (0x5f < cnt2)
            {
                *(unsigned char*)(buf2 + 0x16) = (unsigned char)cnt2;
                *(unsigned short*)(buf2 + 2) = 0x17b7;
                *(unsigned int*)(buf2 + 0xa) = user->GetIdByChannel();
                *(unsigned int*)(buf2 + 0xe) = user->GetUniqCharNo();
                user->SendToGameserver(buf2, 0x17b7);
                cnt2 = 0;
            }
        }
        if (cnt2 != 0)
        {
            *(unsigned char*)(buf2 + 0x16) = (unsigned char)cnt2;
            *(unsigned short*)(buf2 + 2) = (unsigned short)(cnt2 * 0x3f + 0x17);
            *(unsigned int*)(buf2 + 0xa) = user->GetIdByChannel();
            *(unsigned int*)(buf2 + 0xe) = user->GetUniqCharNo();
            user->SendToGameserver(buf2, cnt2 * 0x3f + 0x17);
        }
    }
}
```

# _ZN6CGuild20ReplyGuildAllMembersEP5CUser

`CGuild::ReplyGuildAllMembers(CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808fcd4` | `0xa29` | `0x8055a3c` | `0x75d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,753 +1,547 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x2ffc,%esp
+sub    $0x301c,%esp
 cmpl   $0x0,0xc(%ebp)
-je     <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0xa1d>
+je     <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x74b>
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0xa1e>
+je     <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x74e>
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x10,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0xa1e>
-lea    -0x2fcb(%ebp),%eax
+je     <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x751>
+lea    -0x2fef(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN47Packet_Monitor_Call_Guild_All_Members_ToChannelC1Ev>
+lea    -0x2fef(%ebp),%eax
+mov    %eax,-0x4c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
-mov    %eax,-0x2fb9(%ebp)
-mov    0x8(%ebp),%eax
-add    $0x20,%eax
+mov    %eax,-0x2fdd(%ebp)
+mov    0x8(%ebp),%eax
+lea    0x20(%eax),%edx
+mov    -0x4c(%ebp),%eax
+add    $0x16,%eax
 movl   $0x16,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x2fcb(%ebp),%eax
-add    $0x16,%eax
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0x8(%ebp),%eax
 mov    0x44(%eax),%eax
-mov    %eax,-0x2f9e(%ebp)
+mov    %eax,-0x2fc2(%ebp)
 mov    0x8(%ebp),%eax
 movzwl 0x1e(%eax),%eax
-mov    %ax,-0x2f9a(%ebp)
-movl   $0x0,-0x20(%ebp)
+mov    %ax,-0x2fbe(%ebp)
+mov    0x8(%ebp),%eax
+movzwl 0x1e(%eax),%eax
+mov    %ax,-0x46(%ebp)
+movl   $0x0,-0x44(%ebp)
 mov    0x8(%ebp),%eax
 movzwl 0x42(%eax),%edx
 mov    0x8(%ebp),%eax
 movzwl 0x1e(%eax),%eax
 cmp    %ax,%dx
-je     <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x111>
+je     <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x122>
 mov    0x8(%ebp),%eax
 movzwl 0x1e(%eax),%eax
 movzwl %ax,%esi
 mov    0x8(%ebp),%eax
 movzwl 0x42(%eax),%eax
 movzwl %ax,%ebx
 movl   $0x63b,0x8(%esp)
 movl   $&_ZZN6CGuild20ReplyGuildAllMembersEP5CUserE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Error Guild Member Cnt Not Valid , (%d)/(%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 movzwl 0x1e(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %dx,0x42(%eax)
-movl   $0x0,-0x24(%ebp)
-jmp    <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x4cb>
-mov    -0x20(%ebp),%edx
-mov    -0x24(%ebp),%ecx
-mov    0x8(%ebp),%ebx
-mov    %ecx,%eax
-shl    $0x6,%eax
-add    %ecx,%eax
-lea    (%ebx,%eax,1),%eax
-add    $0xf0,%eax
-movzbl 0xf(%eax),%ecx
-mov    %edx,%eax
-shl    $0x6,%eax
-sub    %edx,%eax
-lea    -0x18(%ebp),%edx
-lea    (%edx,%eax,1),%eax
-sub    $0x2f7f,%eax
-mov    %cl,(%eax)
-mov    -0x20(%ebp),%edx
-mov    -0x24(%ebp),%ecx
-mov    0x8(%ebp),%ebx
-mov    %ecx,%eax
-shl    $0x6,%eax
-add    %ecx,%eax
-lea    (%ebx,%eax,1),%eax
-add    $0xf0,%eax
-movzbl 0x10(%eax),%ecx
-mov    %edx,%eax
-shl    $0x6,%eax
-sub    %edx,%eax
-lea    -0x18(%ebp),%edx
-lea    (%edx,%eax,1),%eax
-sub    $0x2f7e,%eax
-mov    %cl,(%eax)
-mov    -0x20(%ebp),%edx
-mov    -0x24(%ebp),%ecx
-mov    0x8(%ebp),%ebx
-mov    %ecx,%eax
-shl    $0x6,%eax
-add    %ecx,%eax
-lea    (%ebx,%eax,1),%eax
-add    $0xf0,%eax
-movzwl 0x11(%eax),%ecx
-mov    %edx,%eax
-shl    $0x6,%eax
-sub    %edx,%eax
-lea    -0x18(%ebp),%edx
-lea    (%edx,%eax,1),%eax
-sub    $0x2f83,%eax
-mov    %cx,0x6(%eax)
-mov    -0x24(%ebp),%edx
+movl   $0x0,-0x40(%ebp)
+movl   $0x0,-0x40(%ebp)
+jmp    <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x378>
+mov    -0x40(%ebp),%edx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
 add    $0xd0,%eax
 add    0x8(%ebp),%eax
-lea    0x11(%eax),%ecx
-mov    -0x20(%ebp),%edx
-lea    -0x2fcb(%ebp),%ebx
+add    $0xd,%eax
+mov    %eax,-0x3c(%ebp)
+mov    -0x44(%ebp),%edx
 mov    %edx,%eax
 shl    $0x6,%eax
 sub    %edx,%eax
-add    $0x30,%eax
-lea    (%ebx,%eax,1),%eax
-add    $0x8,%eax
+add    $0x34,%eax
+add    -0x4c(%ebp),%eax
+mov    %eax,-0x38(%ebp)
+mov    -0x3c(%ebp),%eax
+add    $0x22,%eax
+movzbl (%eax),%edx
+mov    -0x38(%ebp),%eax
+mov    %dl,(%eax)
+mov    -0x38(%ebp),%eax
+lea    0x1(%eax),%edx
+mov    -0x3c(%ebp),%eax
+add    $0x23,%eax
+movzbl (%eax),%eax
+mov    %al,(%edx)
+mov    -0x38(%ebp),%eax
+lea    0x2(%eax),%edx
+mov    -0x3c(%ebp),%eax
+add    $0x24,%eax
+movzwl (%eax),%eax
+mov    %ax,(%edx)
+mov    -0x3c(%ebp),%eax
+lea    0x4(%eax),%edx
+mov    -0x38(%ebp),%eax
+add    $0x4,%eax
 movl   $0x1d,0x8(%esp)
-mov    %ecx,0x4(%esp)
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
-mov    -0x20(%ebp),%edx
-mov    -0x24(%ebp),%ecx
-mov    0x8(%ebp),%ebx
-mov    %ecx,%eax
-shl    $0x6,%eax
-add    %ecx,%eax
-lea    (%ebx,%eax,1),%eax
-add    $0xf0,%eax
-movzbl 0x13(%eax),%ecx
-mov    %edx,%eax
-shl    $0x6,%eax
-sub    %edx,%eax
-lea    -0x18(%ebp),%edx
-lea    (%edx,%eax,1),%eax
-sub    $0x2f47,%eax
-mov    %cl,(%eax)
-mov    -0x20(%ebp),%edx
-mov    -0x24(%ebp),%ecx
-mov    0x8(%ebp),%ebx
-mov    %ecx,%eax
-shl    $0x6,%eax
-add    %ecx,%eax
-lea    (%ebx,%eax,1),%eax
-add    $0xf0,%eax
-movzbl 0x14(%eax),%ecx
-mov    %edx,%eax
-shl    $0x6,%eax
-sub    %edx,%eax
-lea    -0x18(%ebp),%edx
-lea    (%edx,%eax,1),%eax
-sub    $0x2f45,%eax
-mov    %cl,(%eax)
-mov    -0x20(%ebp),%edx
-mov    -0x24(%ebp),%ecx
-mov    0x8(%ebp),%ebx
-mov    %ecx,%eax
-shl    $0x6,%eax
-add    %ecx,%eax
-lea    (%ebx,%eax,1),%eax
-add    $0xf0,%eax
-mov    0x15(%eax),%ecx
-mov    %edx,%eax
-shl    $0x6,%eax
-sub    %edx,%eax
-lea    -0x18(%ebp),%edx
-lea    (%edx,%eax,1),%eax
-sub    $0x2f53,%eax
-mov    %ecx,0xf(%eax)
-mov    -0x24(%ebp),%edx
-mov    0x8(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x6,%eax
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0xd0,%eax
-mov    0xd(%eax),%eax
+mov    -0x38(%ebp),%eax
+lea    0x38(%eax),%edx
+mov    -0x3c(%ebp),%eax
+add    $0x26,%eax
+movzbl (%eax),%eax
+mov    %al,(%edx)
+mov    -0x38(%ebp),%eax
+lea    0x3a(%eax),%edx
+mov    -0x3c(%ebp),%eax
+add    $0x27,%eax
+movzbl (%eax),%eax
+mov    %al,(%edx)
+mov    -0x38(%ebp),%eax
+lea    0x3b(%eax),%edx
+mov    -0x3c(%ebp),%eax
+add    $0x28,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+mov    -0x3c(%ebp),%eax
+mov    (%eax),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild15FindGuildMemberEj>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x476>
-mov    -0x20(%ebp),%ebx
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+cmpl   $0x0,-0x34(%ebp)
+jne    <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x225>
+mov    -0x3c(%ebp),%eax
+lea    0x2c(%eax),%edx
+mov    -0x38(%ebp),%eax
+add    $0x22,%eax
+movl   $0x14,0x8(%esp)
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x36a>
+mov    -0x38(%ebp),%eax
+lea    0x1(%eax),%ebx
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGrowthTypeEv>
-mov    %eax,%edx
-mov    %ebx,%eax
-shl    $0x6,%eax
-sub    %ebx,%eax
-lea    -0x18(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x2f7e,%eax
-mov    %dl,(%eax)
-mov    -0x20(%ebp),%ebx
-mov    -0x28(%ebp),%eax
+mov    %al,(%ebx)
+mov    -0x38(%ebp),%eax
+lea    0x2(%eax),%ebx
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser8GetLevelEv>
-mov    %eax,%edx
-mov    %ebx,%eax
-shl    $0x6,%eax
-sub    %ebx,%eax
-lea    -0x18(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x2f83,%eax
-mov    %dx,0x6(%eax)
-mov    -0x28(%ebp),%eax
+movzbl %al,%eax
+mov    %ax,(%ebx)
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 test   %eax,%eax
-setne  %al
+sete   %al
 test   %al,%al
-je     <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x3ad>
-mov    -0x20(%ebp),%ebx
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
-mov    %eax,(%esp)
-call   <T> <_ZN16CServerInterface12GetChannelNoEv>
-mov    %eax,%edx
-mov    %ebx,%eax
-shl    $0x6,%eax
-sub    %ebx,%eax
-lea    -0x18(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x2f48,%eax
-mov    %dl,(%eax)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17GetGuildMemDBInfoEv>
-mov    %eax,%ecx
-mov    -0x20(%ebp),%edx
-lea    -0x2fcb(%ebp),%ebx
-mov    %edx,%eax
-shl    $0x6,%eax
-sub    %edx,%eax
-add    $0x50,%eax
-lea    (%ebx,%eax,1),%eax
-add    $0x6,%eax
-movl   $0x14,0x8(%esp)
-mov    %ecx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <memcpy>
-mov    -0x20(%ebp),%ebx
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17GetGuildMemDBInfoEv>
-movzbl 0x15(%eax),%edx
-mov    %ebx,%eax
-shl    $0x6,%eax
-sub    %ebx,%eax
-lea    -0x18(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x2f45,%eax
-mov    %dl,(%eax)
-jmp    <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x43e>
-mov    -0x24(%ebp),%edx
-mov    0x8(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x6,%eax
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0xd0,%eax
-mov    0xd(%eax),%eax
-mov    %eax,-0x2fe0(%ebp)
-mov    -0x28(%ebp),%eax
+je     <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x2e7>
+mov    -0x3c(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,-0x3000(%ebp)
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser7GetDBIDEv>
 mov    %eax,%edi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild12GetGuildNameEv>
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11GetGuildKeyEv>
 mov    %eax,%ebx
 movl   $0x658,0x8(%esp)
 movl   $&_ZZN6CGuild20ReplyGuildAllMembersEP5CUserE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x2fe0(%ebp),%eax
+mov    -0x3000(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CGuild::ReplyGuildMembers() Guild Key : %d\tGuild Name : %s\tDB Id : %d\tChar Id : %d\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x33e>
+mov    -0x38(%ebp),%eax
+lea    0x37(%eax),%ebx
+mov    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+mov    %eax,(%esp)
+call   <T> <_ZN16CServerInterface12GetChannelNoEv>
+mov    %al,(%ebx)
+mov    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17GetGuildMemDBInfoEv>
+mov    -0x38(%ebp),%edx
+add    $0x22,%edx
+movl   $0x14,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+mov    -0x38(%ebp),%eax
+lea    0x3a(%eax),%ebx
+mov    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17GetGuildMemDBInfoEv>
+movzbl 0x15(%eax),%eax
+mov    %al,(%ebx)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11IsBlackUserEj>
+test   %eax,%eax
+setne  %al
 test   %al,%al
-je     <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x4b8>
-mov    -0x20(%ebp),%edx
-mov    %edx,%eax
-shl    $0x6,%eax
-sub    %edx,%eax
-lea    -0x18(%ebp),%edx
-lea    (%edx,%eax,1),%eax
-sub    $0x2f46,%eax
+je     <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x36a>
+mov    -0x38(%ebp),%eax
+add    $0x39,%eax
 movb   $0x1,(%eax)
-jmp    <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x4b8>
-mov    -0x24(%ebp),%edx
-mov    %edx,%eax
-shl    $0x6,%eax
-add    %edx,%eax
-add    $0xf0,%eax
-add    0x8(%ebp),%eax
-lea    0x19(%eax),%ecx
-mov    -0x20(%ebp),%edx
-lea    -0x2fcb(%ebp),%ebx
-mov    %edx,%eax
-shl    $0x6,%eax
-sub    %edx,%eax
-add    $0x50,%eax
-lea    (%ebx,%eax,1),%eax
-add    $0x6,%eax
-movl   $0x14,0x8(%esp)
-mov    %ecx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <memcpy>
-addl   $0x1,-0x20(%ebp)
-cmpl   $0x5f,-0x20(%ebp)
+addl   $0x1,-0x44(%ebp)
+cmpl   $0x5f,-0x44(%ebp)
+jg     <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x38c>
+addl   $0x1,-0x40(%ebp)
+movzwl -0x46(%ebp),%eax
+cmp    -0x40(%ebp),%eax
 setg   %al
 test   %al,%al
-jne    <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x4e5>
-addl   $0x1,-0x24(%ebp)
-mov    0x8(%ebp),%eax
-movzwl 0x1e(%eax),%eax
-movzwl %ax,%eax
-cmp    -0x24(%ebp),%eax
-setg   %al
-test   %al,%al
-jne    <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x11d>
-jmp    <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x4e6>
+jne    <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x135>
+jmp    <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x38d>
 nop
-mov    -0x20(%ebp),%eax
-mov    %al,-0x2f98(%ebp)
-movzbl -0x2f98(%ebp),%eax
-movzbl %al,%edx
+mov    -0x4c(%ebp),%eax
+lea    0x33(%eax),%edx
+mov    -0x44(%ebp),%eax
+mov    %al,(%edx)
+mov    -0x4c(%ebp),%eax
+lea    0x2(%eax),%ecx
+mov    -0x44(%ebp),%eax
+mov    %eax,%edx
 mov    %edx,%eax
 shl    $0x6,%eax
 sub    %dx,%ax
 add    $0x34,%eax
-mov    %ax,-0x2fc9(%ebp)
+mov    %ax,(%ecx)
+mov    -0x4c(%ebp),%eax
+lea    0xa(%eax),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x2fc1(%ebp)
+mov    %eax,(%ebx)
+mov    -0x4c(%ebp),%eax
+lea    0xe(%eax),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x2fbd(%ebp)
-lea    -0x2fcb(%ebp),%eax
+mov    %eax,(%ebx)
+mov    -0x4c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-mov    0x8(%ebp),%eax
-movzwl 0x1e(%eax),%eax
-movzwl %ax,%eax
-cmp    -0x20(%ebp),%eax
-jle    <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0xa1e>
-lea    -0x17f7(%ebp),%eax
+movzwl -0x46(%ebp),%eax
+cmp    -0x44(%ebp),%eax
+jle    <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x752>
+lea    -0x181b(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN52Packet_Monitor_Call_Guild_All_Members_ToChannel_NextC1Ev>
+lea    -0x181b(%ebp),%eax
+mov    %eax,-0x30(%ebp)
+mov    -0x30(%ebp),%eax
+lea    0x12(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
-mov    %eax,-0x17e5(%ebp)
-movl   $0x0,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,(%edx)
+movl   $0x0,-0x2c(%ebp)
+mov    -0x40(%ebp),%eax
 add    $0x1,%eax
-mov    %eax,-0x1c(%ebp)
-jmp    <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x9a1>
-mov    -0x20(%ebp),%edx
-mov    -0x1c(%ebp),%ecx
-mov    0x8(%ebp),%ebx
-mov    %ecx,%eax
-shl    $0x6,%eax
-add    %ecx,%eax
-lea    (%ebx,%eax,1),%eax
-add    $0xf0,%eax
-movzbl 0xf(%eax),%ecx
-mov    %edx,%eax
-shl    $0x6,%eax
-sub    %edx,%eax
-lea    -0x18(%ebp),%edx
-lea    (%edx,%eax,1),%eax
-sub    $0x17c8,%eax
-mov    %cl,(%eax)
-mov    -0x20(%ebp),%edx
-mov    -0x1c(%ebp),%ecx
-mov    0x8(%ebp),%ebx
-mov    %ecx,%eax
-shl    $0x6,%eax
-add    %ecx,%eax
-lea    (%ebx,%eax,1),%eax
-add    $0xf0,%eax
-movzbl 0x10(%eax),%ecx
-mov    %edx,%eax
-shl    $0x6,%eax
-sub    %edx,%eax
-lea    -0x18(%ebp),%edx
-lea    (%edx,%eax,1),%eax
-sub    $0x17c7,%eax
-mov    %cl,(%eax)
-mov    -0x20(%ebp),%edx
-mov    -0x1c(%ebp),%ecx
-mov    0x8(%ebp),%ebx
-mov    %ecx,%eax
-shl    $0x6,%eax
-add    %ecx,%eax
-lea    (%ebx,%eax,1),%eax
-add    $0xf0,%eax
-movzwl 0x11(%eax),%ecx
-mov    %edx,%eax
-shl    $0x6,%eax
-sub    %edx,%eax
-lea    -0x18(%ebp),%edx
-lea    (%edx,%eax,1),%eax
-sub    $0x17cf,%eax
-mov    %cx,0x9(%eax)
-mov    -0x1c(%ebp),%edx
+mov    %eax,-0x28(%ebp)
+jmp    <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x6d5>
+mov    -0x28(%ebp),%edx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
 add    $0xd0,%eax
 add    0x8(%ebp),%eax
-lea    0x11(%eax),%ecx
-mov    -0x20(%ebp),%edx
-lea    -0x17f7(%ebp),%ebx
+add    $0xd,%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x2c(%ebp),%edx
 mov    %edx,%eax
 shl    $0x6,%eax
 sub    %edx,%eax
-add    $0x10,%eax
-lea    (%ebx,%eax,1),%eax
-add    $0xb,%eax
+add    $0x17,%eax
+add    -0x30(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x24(%ebp),%eax
+add    $0x22,%eax
+movzbl (%eax),%edx
+mov    -0x20(%ebp),%eax
+mov    %dl,(%eax)
+mov    -0x20(%ebp),%eax
+lea    0x1(%eax),%edx
+mov    -0x24(%ebp),%eax
+add    $0x23,%eax
+movzbl (%eax),%eax
+mov    %al,(%edx)
+mov    -0x20(%ebp),%eax
+lea    0x2(%eax),%edx
+mov    -0x24(%ebp),%eax
+add    $0x24,%eax
+movzwl (%eax),%eax
+mov    %ax,(%edx)
+mov    -0x24(%ebp),%eax
+lea    0x4(%eax),%edx
+mov    -0x20(%ebp),%eax
+add    $0x4,%eax
 movl   $0x1d,0x8(%esp)
-mov    %ecx,0x4(%esp)
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
-mov    -0x20(%ebp),%edx
-mov    -0x1c(%ebp),%ecx
-mov    0x8(%ebp),%ebx
-mov    %ecx,%eax
-shl    $0x6,%eax
-add    %ecx,%eax
-lea    (%ebx,%eax,1),%eax
-add    $0xf0,%eax
-movzbl 0x13(%eax),%ecx
-mov    %edx,%eax
-shl    $0x6,%eax
-sub    %edx,%eax
-lea    -0x18(%ebp),%edx
-lea    (%edx,%eax,1),%eax
-sub    $0x1790,%eax
-mov    %cl,(%eax)
-mov    -0x20(%ebp),%edx
-mov    -0x1c(%ebp),%ecx
-mov    0x8(%ebp),%ebx
-mov    %ecx,%eax
-shl    $0x6,%eax
-add    %ecx,%eax
-lea    (%ebx,%eax,1),%eax
-add    $0xf0,%eax
-movzbl 0x14(%eax),%ecx
-mov    %edx,%eax
-shl    $0x6,%eax
-sub    %edx,%eax
-lea    -0x18(%ebp),%edx
-lea    (%edx,%eax,1),%eax
-sub    $0x178e,%eax
-mov    %cl,(%eax)
-mov    -0x20(%ebp),%edx
-mov    -0x1c(%ebp),%ecx
-mov    0x8(%ebp),%ebx
-mov    %ecx,%eax
-shl    $0x6,%eax
-add    %ecx,%eax
-lea    (%ebx,%eax,1),%eax
-add    $0xf0,%eax
-mov    0x15(%eax),%ecx
-mov    %edx,%eax
-shl    $0x6,%eax
-sub    %edx,%eax
-lea    -0x18(%ebp),%edx
-lea    (%edx,%eax,1),%eax
-sub    $0x179f,%eax
-mov    %ecx,0x12(%eax)
-mov    -0x1c(%ebp),%edx
-mov    0x8(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x6,%eax
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0xd0,%eax
-mov    0xd(%eax),%eax
+mov    -0x20(%ebp),%eax
+lea    0x38(%eax),%edx
+mov    -0x24(%ebp),%eax
+add    $0x26,%eax
+movzbl (%eax),%eax
+mov    %al,(%edx)
+mov    -0x20(%ebp),%eax
+lea    0x3a(%eax),%edx
+mov    -0x24(%ebp),%eax
+add    $0x27,%eax
+movzbl (%eax),%eax
+mov    %al,(%edx)
+mov    -0x20(%ebp),%eax
+lea    0x3b(%eax),%edx
+mov    -0x24(%ebp),%eax
+add    $0x28,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+mov    -0x24(%ebp),%eax
+mov    (%eax),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild15FindGuildMemberEj>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x8dd>
-mov    -0x20(%ebp),%ebx
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
+jne    <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x52d>
+mov    -0x20(%ebp),%eax
+movb   $0xff,(%eax)
+mov    -0x20(%ebp),%eax
+add    $0x22,%eax
+movl   $0x14,0x8(%esp)
+movl   $0x0,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <memset>
+mov    -0x20(%ebp),%eax
+add    $0x38,%eax
+movb   $0x0,(%eax)
+jmp    <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x672>
+mov    -0x20(%ebp),%eax
+lea    0x1(%eax),%ebx
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGrowthTypeEv>
-mov    %eax,%edx
-mov    %ebx,%eax
-shl    $0x6,%eax
-sub    %ebx,%eax
-lea    -0x18(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x17c7,%eax
-mov    %dl,(%eax)
-mov    -0x20(%ebp),%ebx
-mov    -0x28(%ebp),%eax
+mov    %al,(%ebx)
+mov    -0x20(%ebp),%eax
+lea    0x2(%eax),%ebx
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser8GetLevelEv>
-mov    %eax,%edx
-mov    %ebx,%eax
-shl    $0x6,%eax
-sub    %ebx,%eax
-lea    -0x18(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x17cf,%eax
-mov    %dx,0x9(%eax)
-mov    -0x28(%ebp),%eax
+movzbl %al,%eax
+mov    %ax,(%ebx)
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 test   %eax,%eax
-setne  %al
+sete   %al
 test   %al,%al
-je     <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x814>
-mov    -0x20(%ebp),%ebx
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
-mov    %eax,(%esp)
-call   <T> <_ZN16CServerInterface12GetChannelNoEv>
-mov    %eax,%edx
-mov    %ebx,%eax
-shl    $0x6,%eax
-sub    %ebx,%eax
-lea    -0x18(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x1791,%eax
-mov    %dl,(%eax)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17GetGuildMemDBInfoEv>
-mov    %eax,%ecx
-mov    -0x20(%ebp),%edx
-lea    -0x17f7(%ebp),%ebx
-mov    %edx,%eax
-shl    $0x6,%eax
-sub    %edx,%eax
-add    $0x30,%eax
-lea    (%ebx,%eax,1),%eax
-add    $0x9,%eax
-movl   $0x14,0x8(%esp)
-mov    %ecx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <memcpy>
-mov    -0x20(%ebp),%ebx
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17GetGuildMemDBInfoEv>
-movzbl 0x15(%eax),%edx
-mov    %ebx,%eax
-shl    $0x6,%eax
-sub    %ebx,%eax
-lea    -0x18(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x178e,%eax
-mov    %dl,(%eax)
-jmp    <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x8a5>
-mov    -0x1c(%ebp),%edx
-mov    0x8(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x6,%eax
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0xd0,%eax
-mov    0xd(%eax),%eax
-mov    %eax,-0x2fdc(%ebp)
-mov    -0x28(%ebp),%eax
+je     <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x5ef>
+mov    -0x24(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,-0x2ffc(%ebp)
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser7GetDBIDEv>
 mov    %eax,%edi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild12GetGuildNameEv>
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11GetGuildKeyEv>
 mov    %eax,%ebx
 movl   $0x695,0x8(%esp)
 movl   $&_ZZN6CGuild20ReplyGuildAllMembersEP5CUserE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x2fdc(%ebp),%eax
+mov    -0x2ffc(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CGuild::ReplyGuildMembers() Guild Key : %d\tGuild Name : %s\tDB Id : %d\tChar Id : %d\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x646>
+mov    -0x20(%ebp),%eax
+lea    0x37(%eax),%ebx
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+mov    %eax,(%esp)
+call   <T> <_ZN16CServerInterface12GetChannelNoEv>
+mov    %al,(%ebx)
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17GetGuildMemDBInfoEv>
+mov    -0x20(%ebp),%edx
+add    $0x22,%edx
+movl   $0x14,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+mov    -0x20(%ebp),%eax
+lea    0x3a(%eax),%ebx
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17GetGuildMemDBInfoEv>
+movzbl 0x15(%eax),%eax
+mov    %al,(%ebx)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11IsBlackUserEj>
+test   %eax,%eax
+setne  %al
 test   %al,%al
-je     <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x93e>
-mov    -0x20(%ebp),%edx
-mov    %edx,%eax
-shl    $0x6,%eax
-sub    %edx,%eax
-lea    -0x18(%ebp),%edx
-lea    (%edx,%eax,1),%eax
-sub    $0x178f,%eax
+je     <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x672>
+mov    -0x20(%ebp),%eax
+add    $0x39,%eax
 movb   $0x1,(%eax)
-jmp    <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x93e>
-mov    -0x20(%ebp),%edx
-mov    %edx,%eax
-shl    $0x6,%eax
-sub    %edx,%eax
-lea    -0x18(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x1791,%eax
-movb   $0xff,(%eax)
-mov    -0x20(%ebp),%edx
-lea    -0x17f7(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x6,%eax
-sub    %edx,%eax
-add    $0x30,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x9,%eax
-movl   $0x14,0x8(%esp)
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <memset>
-mov    -0x20(%ebp),%edx
-mov    %edx,%eax
-shl    $0x6,%eax
-sub    %edx,%eax
-lea    -0x18(%ebp),%edx
-lea    (%edx,%eax,1),%eax
-sub    $0x178f,%eax
-movb   $0x0,(%eax)
-addl   $0x1,-0x20(%ebp)
-cmpl   $0x5f,-0x20(%ebp)
+addl   $0x1,-0x2c(%ebp)
+cmpl   $0x5f,-0x2c(%ebp)
+jle    <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x6d1>
+mov    -0x30(%ebp),%eax
+lea    0x16(%eax),%edx
+mov    -0x2c(%ebp),%eax
+mov    %al,(%edx)
+mov    -0x30(%ebp),%eax
+add    $0x2,%eax
+movw   $0x17b7,(%eax)
+mov    -0x30(%ebp),%eax
+lea    0xa(%eax),%ebx
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,(%ebx)
+mov    -0x30(%ebp),%eax
+lea    0xe(%eax),%ebx
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,(%ebx)
+mov    -0x30(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+movl   $0x0,-0x2c(%ebp)
+addl   $0x1,-0x28(%ebp)
+movzwl -0x46(%ebp),%eax
+cmp    -0x28(%ebp),%eax
 setg   %al
 test   %al,%al
-je     <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x99d>
-mov    -0x20(%ebp),%eax
-mov    %al,-0x17e1(%ebp)
-movw   $0x17b7,-0x17f5(%ebp)
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x17ed(%ebp)
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x17e9(%ebp)
-lea    -0x17f7(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-movl   $0x0,-0x20(%ebp)
-addl   $0x1,-0x1c(%ebp)
-mov    0x8(%ebp),%eax
-movzwl 0x1e(%eax),%eax
-movzwl %ax,%eax
-cmp    -0x1c(%ebp),%eax
-setg   %al
-test   %al,%al
-jne    <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x584>
-cmpl   $0x0,-0x20(%ebp)
-je     <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0xa1e>
-mov    -0x20(%ebp),%eax
-mov    %al,-0x17e1(%ebp)
-movzbl -0x17e1(%ebp),%eax
-movzbl %al,%edx
+jne    <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x430>
+cmpl   $0x0,-0x2c(%ebp)
+je     <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x752>
+mov    -0x30(%ebp),%eax
+lea    0x16(%eax),%edx
+mov    -0x2c(%ebp),%eax
+mov    %al,(%edx)
+mov    -0x30(%ebp),%eax
+lea    0x2(%eax),%ecx
+mov    -0x2c(%ebp),%eax
+mov    %eax,%edx
 mov    %edx,%eax
 shl    $0x6,%eax
 sub    %dx,%ax
 add    $0x17,%eax
-mov    %ax,-0x17f5(%ebp)
+mov    %ax,(%ecx)
+mov    -0x30(%ebp),%eax
+lea    0xa(%eax),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x17ed(%ebp)
+mov    %eax,(%ebx)
+mov    -0x30(%ebp),%eax
+lea    0xe(%eax),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x17e9(%ebp)
-lea    -0x17f7(%ebp),%eax
+mov    %eax,(%ebx)
+mov    -0x30(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0xa1e>
+jmp    <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x752>
 nop
-add    $0x2ffc,%esp
+jmp    <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x752>
+nop
+jmp    <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser+0x752>
+nop
+add    $0x301c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::ReplyGuildAllMembers(CUser*) */

void __thiscall CGuild::_ZN6CGuild20ReplyGuildAllMembersEP5CUser(CGuild *this,CUser *param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  CGuild CVar5;
  char cVar6;
  undefined2 uVar7;
  int iVar8;
  CServerInterface *pCVar9;
  void *pvVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  Packet_Monitor_Call_Guild_All_Members_ToChannel local_2fcf [2];
  short local_2fcd;
  undefined4 local_2fc5;
  undefined4 local_2fc1;
  undefined4 local_2fbd;
  undefined1 auStack_2fb9 [23];
  undefined4 local_2fa2;
  undefined2 local_2f9e;
  byte local_2f9c;
  CGuild aCStack_2f9b [34];
  undefined1 auStack_2f79 [21];
  CGuild aCStack_2f64 [5993];
  Packet_Monitor_Call_Guild_All_Members_ToChannel_Next local_17fb [2];
  short local_17f9;
  undefined4 local_17f1;
  undefined4 local_17ed;
  undefined4 local_17e9;
  byte local_17e5;
  CGuild aCStack_17e4 [34];
  undefined1 auStack_17c2 [21];
  CGuild aCStack_17ad [5993];
  CMyFileLog local_44 [8];
  CMyFileLog local_3c [8];
  CMyFileLog local_34 [8];
  CUser *local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  if (((param_1 != (CUser *)0x0) && ((*(ushort *)(this + 0x1c) & 4) != 0)) &&
     ((*(ushort *)(this + 0x1c) & 0x10) != 0)) {
    Packet_Monitor_Call_Guild_All_Members_ToChannel::
    _ZN47Packet_Monitor_Call_Guild_All_Members_ToChannelC2Ev(local_2fcf);
    local_2fbd = *(undefined4 *)(this + 0x18);
    memcpy(auStack_2fb9,this + 0x20,0x16);
    local_2fa2 = *(undefined4 *)(this + 0x44);
    local_2f9e = *(undefined2 *)(this + 0x1e);
    local_24 = 0;
    if (*(short *)(this + 0x42) != *(short *)(this + 0x1e)) {
      uVar1 = *(ushort *)(this + 0x1e);
      uVar2 = *(ushort *)(this + 0x42);
      CMyFileLog::CMyFileLog(local_44,"ReplyGuildAllMembers",0x63b);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_44,"./log/GuildModify","Error Guild Member Cnt Not Valid , (%d)/(%d)",
                 (uint)uVar2,(uint)uVar1);
      *(undefined2 *)(this + 0x42) = *(undefined2 *)(this + 0x1e);
    }
    for (local_28 = 0; local_28 < (int)(uint)*(ushort *)(this + 0x1e); local_28 = local_28 + 1) {
      aCStack_2f9b[local_24 * 0x3f] = this[local_28 * 0x41 + 0xff];
      aCStack_2f9b[local_24 * 0x3f + 1] = this[local_28 * 0x41 + 0x100];
      *(undefined2 *)(aCStack_2f9b + local_24 * 0x3f + 2) =
           *(undefined2 *)(this + local_28 * 0x41 + 0x101);
      memcpy(aCStack_2f9b + local_24 * 0x3f + 4,this + local_28 * 0x41 + 0xe1,0x1d);
      aCStack_2f64[local_24 * 0x3f + 1] = this[local_28 * 0x41 + 0x103];
      aCStack_2f64[local_24 * 0x3f + 3] = this[local_28 * 0x41 + 0x104];
      *(undefined4 *)(aCStack_2f64 + local_24 * 0x3f + 4) =
           *(undefined4 *)(this + local_28 * 0x41 + 0x105);
      local_2c = (CUser *)_ZN6CGuild15FindGuildMemberEj((uint)this);
      iVar4 = local_24;
      if (local_2c == (CUser *)0x0) {
        memcpy(auStack_2f79 + local_24 * 0x3f,this + local_28 * 0x41 + 0x109,0x14);
      }
      else {
        CVar5 = (CGuild)CUser::GetGrowthType(local_2c);
        iVar8 = local_24;
        aCStack_2f9b[iVar4 * 0x3f + 1] = CVar5;
        uVar7 = CUser::_ZN5CUser8GetLevelEv(local_2c);
        *(undefined2 *)(aCStack_2f9b + iVar8 * 0x3f + 2) = uVar7;
        iVar8 = CUser::GetGameServer(local_2c);
        iVar4 = local_24;
        if (iVar8 == 0) {
          uVar3 = *(undefined4 *)(this + local_28 * 0x41 + 0xdd);
          uVar11 = CUser::GetDBID(local_2c);
          uVar12 = GetGuildName(this);
          uVar13 = GetGuildKey(this);
          CMyFileLog::CMyFileLog(local_3c,"ReplyGuildAllMembers",0x658);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_3c,"./log/Except",
                     "CGuild::ReplyGuildMembers() Guild Key : %d\tGuild Name : %s\tDB Id : %d\tChar Id : %d\n"
                     ,uVar13,uVar12,uVar11,uVar3);
        }
        else {
          pCVar9 = (CServerInterface *)CUser::GetGameServer(local_2c);
          CVar5 = (CGuild)CServerInterface::_ZN16CServerInterface12GetChannelNoEv(pCVar9);
          aCStack_2f64[iVar4 * 0x3f] = CVar5;
          pvVar10 = (void *)CUser::GetGuildMemDBInfo(local_2c);
          memcpy(auStack_2f79 + local_24 * 0x3f,pvVar10,0x14);
          iVar4 = local_24;
          iVar8 = CUser::GetGuildMemDBInfo(local_2c);
          aCStack_2f64[iVar4 * 0x3f + 3] = *(CGuild *)(iVar8 + 0x15);
        }
        CUser::GetUniqCharNo(param_1);
        cVar6 = CUser::_ZN5CUser11IsBlackUserEj((uint)local_2c);
        if (cVar6 != '\0') {
          aCStack_2f64[local_24 * 0x3f + 2] = (CGuild)0x1;
        }
      }
      local_24 = local_24 + 1;
      if (0x5f < local_24) break;
    }
    local_2f9c = (byte)local_24;
    local_2fcd = ((ushort)local_2f9c * 0x40 - (ushort)local_2f9c) + 0x34;
    local_2fc5 = CUser::GetIdByChannel(param_1);
    local_2fc1 = CUser::GetUniqCharNo(param_1);
    CUser::_ZN5CUser17SendTcpGameserverEP12PacketHeader(param_1,(PacketHeader *)local_2fcf);
    if (local_24 < (int)(uint)*(ushort *)(this + 0x1e)) {
      Packet_Monitor_Call_Guild_All_Members_ToChannel_Next::
      _ZN52Packet_Monitor_Call_Guild_All_Members_ToChannel_NextC2Ev(local_17fb);
      local_17e9 = *(undefined4 *)(this + 0x18);
      local_24 = 0;
      local_20 = local_28;
      while (local_20 = local_20 + 1, local_20 < (int)(uint)*(ushort *)(this + 0x1e)) {
        aCStack_17e4[local_24 * 0x3f] = this[local_20 * 0x41 + 0xff];
        aCStack_17e4[local_24 * 0x3f + 1] = this[local_20 * 0x41 + 0x100];
        *(undefined2 *)(aCStack_17e4 + local_24 * 0x3f + 2) =
             *(undefined2 *)(this + local_20 * 0x41 + 0x101);
        memcpy(aCStack_17e4 + local_24 * 0x3f + 4,this + local_20 * 0x41 + 0xe1,0x1d);
        aCStack_17ad[local_24 * 0x3f + 1] = this[local_20 * 0x41 + 0x103];
        aCStack_17ad[local_24 * 0x3f + 3] = this[local_20 * 0x41 + 0x104];
        *(undefined4 *)(aCStack_17ad + local_24 * 0x3f + 4) =
             *(undefined4 *)(this + local_20 * 0x41 + 0x105);
        local_2c = (CUser *)_ZN6CGuild15FindGuildMemberEj((uint)this);
        iVar4 = local_24;
        if (local_2c == (CUser *)0x0) {
          aCStack_17ad[local_24 * 0x3f] = (CGuild)0xff;
          memset(auStack_17c2 + local_24 * 0x3f,0,0x14);
          aCStack_17ad[local_24 * 0x3f + 2] = (CGuild)0x0;
        }
        else {
          CVar5 = (CGuild)CUser::GetGrowthType(local_2c);
          iVar8 = local_24;
          aCStack_17e4[iVar4 * 0x3f + 1] = CVar5;
          uVar7 = CUser::_ZN5CUser8GetLevelEv(local_2c);
          *(undefined2 *)(aCStack_17e4 + iVar8 * 0x3f + 2) = uVar7;
          iVar8 = CUser::GetGameServer(local_2c);
          iVar4 = local_24;
          if (iVar8 == 0) {
            uVar3 = *(undefined4 *)(this + local_20 * 0x41 + 0xdd);
            uVar11 = CUser::GetDBID(local_2c);
            uVar12 = GetGuildName(this);
            uVar13 = GetGuildKey(this);
            CMyFileLog::CMyFileLog(local_34,"ReplyGuildAllMembers",0x695);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_34,"./log/Except",
                       "CGuild::ReplyGuildMembers() Guild Key : %d\tGuild Name : %s\tDB Id : %d\tChar Id : %d\n"
                       ,uVar13,uVar12,uVar11,uVar3);
          }
          else {
            pCVar9 = (CServerInterface *)CUser::GetGameServer(local_2c);
            CVar5 = (CGuild)CServerInterface::_ZN16CServerInterface12GetChannelNoEv(pCVar9);
            aCStack_17ad[iVar4 * 0x3f] = CVar5;
            pvVar10 = (void *)CUser::GetGuildMemDBInfo(local_2c);
            memcpy(auStack_17c2 + local_24 * 0x3f,pvVar10,0x14);
            iVar4 = local_24;
            iVar8 = CUser::GetGuildMemDBInfo(local_2c);
            aCStack_17ad[iVar4 * 0x3f + 3] = *(CGuild *)(iVar8 + 0x15);
          }
          CUser::GetUniqCharNo(param_1);
          cVar6 = CUser::_ZN5CUser11IsBlackUserEj((uint)local_2c);
          if (cVar6 != '\0') {
            aCStack_17ad[local_24 * 0x3f + 2] = (CGuild)0x1;
          }
        }
        local_24 = local_24 + 1;
        if (0x5f < local_24) {
          local_17e5 = (byte)local_24;
          local_17f9 = 0x17b7;
          local_17f1 = CUser::GetIdByChannel(param_1);
          local_17ed = CUser::GetUniqCharNo(param_1);
          CUser::_ZN5CUser17SendTcpGameserverEP12PacketHeader(param_1,(PacketHeader *)local_17fb);
          local_24 = 0;
        }
      }
      if (local_24 != 0) {
        local_17e5 = (byte)local_24;
        local_17f9 = ((ushort)local_17e5 * 0x40 - (ushort)local_17e5) + 0x17;
        local_17f1 = CUser::GetIdByChannel(param_1);
        local_17ed = CUser::GetUniqCharNo(param_1);
        CUser::_ZN5CUser17SendTcpGameserverEP12PacketHeader(param_1,(PacketHeader *)local_17fb);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 1461 行）：

```cpp
void CGuild::ReplyGuildAllMembers(CUser* user)
{
    if (user == 0 || (m_guildDBFlag & 4) == 0 || (m_guildDBFlag & 0x10) == 0)
    {
        return;
    }
    Packet_Monitor_Call_Guild_All_Members_ToChannel pkt;
    char* buf = (char*)&pkt;
    pkt.m_fieldC = m_guildKey;
    memcpy(buf + 0x16, m_dbInfo.m_info.m_guildName, 0x16);
    pkt.m_fieldD = m_dbInfo.m_info.m_guildPoint;
    pkt.m_totalCnt = m_totalCnt;
    unsigned short total = m_totalCnt;
    int count = 0;
    if (m_dbInfo.m_info.m_totalCnt != m_totalCnt)
    {
        DNF_LOG_SCOPE_LINE(0x63b,"./log/GuildModify", "Error Guild Member Cnt Not Valid , (%d)/(%d)",
            (unsigned int)m_dbInfo.m_info.m_totalCnt,
            (unsigned int)m_totalCnt);
        m_dbInfo.m_info.m_totalCnt = m_totalCnt;
    }
    int idx = 0;
    for (idx = 0; idx < (int)total; idx++)
    {
        char* src = (char*)&m_dbInfo.m_members[idx];
        char* rec = buf + 0x34 + count * 0x3f;
        rec[0] = src[0x22];
        rec[1] = src[0x23];
        *(unsigned short*)(rec + 2) = *(unsigned short*)(src + 0x24);
        memcpy(rec + 4, src + 4, 0x1d);
        rec[0x38] = src[0x26];
        rec[0x3a] = src[0x27];
        *(unsigned int*)(rec + 0x3b) = *(unsigned int*)(src + 0x28);
        CUser* m = FindGuildMember(*(unsigned int*)src);
        if (m == 0)
        {
            memcpy(rec + 0x22, src + 0x2c, 0x14);
        }
        else
        {
            rec[1] = m->GetGrowthType();
            *(unsigned short*)(rec + 2) = m->GetLevel();
            if (m->GetGameServer() == 0)
            {
                DNF_LOG_SCOPE_LINE(0x658,"./log/Except",
                    "CGuild::ReplyGuildMembers() Guild Key : %d\tGuild Name : %s\tDB Id : %d\tChar Id : %d\n",
                    GetGuildKey(), GetGuildName(), m->GetDBID(), *(unsigned int*)src);
            }
            else
            {
                rec[0x37] = m->GetGameServer()->GetChannelNo();
                memcpy(rec + 0x22, (char*)m->GetGuildMemDBInfo(), 0x14);
                rec[0x3a] = (char)m->GetGuildMemDBInfo()->m_grade;
            }
            if (m->IsBlackUser(user->GetUniqCharNo()) != 0)
            {
                rec[0x39] = 1;
            }
        }
        count++;
        if (0x5f < count)
        {
            break;
        }
    }
    *(unsigned char*)(buf + 0x33) = (unsigned char)count;
    *(unsigned short*)(buf + 2) = (unsigned short)(count * 0x3f + 0x34);
    *(unsigned int*)(buf + 0xa) = user->GetIdByChannel();
    *(unsigned int*)(buf + 0xe) = user->GetUniqCharNo();
    user->SendTcpGameserver((PacketHeader*)buf);
    if (count < (int)total)
    {
        Packet_Monitor_Call_Guild_All_Members_ToChannel_Next pkt2;
        char* buf2 = (char*)&pkt2;
        *(unsigned int*)(buf2 + 0x12) = m_guildKey;
        int cnt2 = 0;
        for (int i = idx + 1; i < (int)total; i++)
        {
            char* src = (char*)&m_dbInfo.m_members[i];
            char* rec = buf2 + 0x17 + cnt2 * 0x3f;
            rec[0] = src[0x22];
            rec[1] = src[0x23];
            *(unsigned short*)(rec + 2) = *(unsigned short*)(src + 0x24);
            memcpy(rec + 4, src + 4, 0x1d);
            rec[0x38] = src[0x26];
            rec[0x3a] = src[0x27];
            *(unsigned int*)(rec + 0x3b) = *(unsigned int*)(src + 0x28);
            CUser* m = FindGuildMember(*(unsigned int*)src);
            if (m == 0)
            {
                rec[0] = (char)0xff;
                memset(rec + 0x22, 0, 0x14);
                rec[0x38] = 0;
            }
            else
            {
                rec[1] = m->GetGrowthType();
                *(unsigned short*)(rec + 2) = m->GetLevel();
                if (m->GetGameServer() == 0)
                {
                    DNF_LOG_SCOPE_LINE(0x695,"./log/Except",
                        "CGuild::ReplyGuildMembers() Guild Key : %d\tGuild Name : %s\tDB Id : %d\tChar Id : %d\n",
                        GetGuildKey(), GetGuildName(), m->GetDBID(), *(unsigned int*)src);
                }
                else
                {
                    rec[0x37] = m->GetGameServer()->GetChannelNo();
                    memcpy(rec + 0x22, (char*)m->GetGuildMemDBInfo(), 0x14);
                    rec[0x3a] = (char)m->GetGuildMemDBInfo()->m_grade;
                }
                if (m->IsBlackUser(user->GetUniqCharNo()) != 0)
                {
                    rec[0x39] = 1;
                }
            }
            cnt2++;
            if (0x5f < cnt2)
            {
                *(unsigned char*)(buf2 + 0x16) = (unsigned char)cnt2;
                *(unsigned short*)(buf2 + 2) = 0x17b7;
                *(unsigned int*)(buf2 + 0xa) = user->GetIdByChannel();
                *(unsigned int*)(buf2 + 0xe) = user->GetUniqCharNo();
                user->SendTcpGameserver((PacketHeader*)buf2);
                cnt2 = 0;
            }
        }
        if (cnt2 != 0)
        {
            *(unsigned char*)(buf2 + 0x16) = (unsigned char)cnt2;
            *(unsigned short*)(buf2 + 2) = (unsigned short)(cnt2 * 0x3f + 0x17);
            *(unsigned int*)(buf2 + 0xa) = user->GetIdByChannel();
            *(unsigned int*)(buf2 + 0xe) = user->GetUniqCharNo();
            user->SendTcpGameserver((PacketHeader*)buf2);
        }
    }
}
```

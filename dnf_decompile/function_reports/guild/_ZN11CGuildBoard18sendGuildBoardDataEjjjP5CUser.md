# _ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser

`CGuildBoard::sendGuildBoardData(unsigned int, unsigned int, unsigned int, CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809d342` | `0x559` | `0x808f6d6` | `0x4ea` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,342 +1,329 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
-sub    $0xd74,%esp
+sub    $0x704,%esp
 cmpl   $0x0,0x18(%ebp)
-je     <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x550>
+je     <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x4e4>
 mov    0x8(%ebp),%eax
 add    $0xc,%eax
+mov    %eax,-0x38(%ebp)
+mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIj18STGuildBoardDBInfoSt7greaterIjESaISt4pairIKjS0_EEE4sizeEv>
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-jne    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0xe4>
-lea    -0x6ce(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+mov    0x14(%ebp),%eax
+mov    %ax,-0x2e(%ebp)
+cmpl   $0x0,-0x34(%ebp)
+jne    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x10b>
+lea    -0x6de(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN30Packet_Guild_Reply_Guild_BoardC1Ev>
-mov    0x14(%ebp),%eax
-mov    %ax,-0x6c2(%ebp)
+lea    -0x6de(%ebp),%eax
+add    $0xc,%eax
+movzwl -0x2e(%ebp),%edx
+mov    %dx,(%eax)
+lea    -0x6de(%ebp),%eax
+lea    0xf(%eax),%ebx
 mov    0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x6bf(%ebp)
+mov    %eax,(%ebx)
+lea    -0x6de(%ebp),%eax
+lea    0x13(%eax),%ebx
 mov    0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x6bb(%ebp)
-movb   $0x0,-0x6c0(%ebp)
-movb   $0x0,-0x6b7(%ebp)
-lea    -0x6ce(%ebp),%eax
+mov    %eax,(%ebx)
+lea    -0x6de(%ebp),%eax
+add    $0xe,%eax
+movb   $0x0,(%eax)
+lea    -0x6de(%ebp),%eax
+add    $0x17,%eax
+movb   $0x0,(%eax)
+lea    -0x6de(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
 movl   $0x77,0x8(%esp)
 movl   $&_ZZN11CGuildBoard18sendGuildBoardDataEjjjP5CUserE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $0x0,0x18(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x14(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"SEND SUCCESS - CODE TYPE:%u, GUILD:%u, CHARAC:%u, COUNT:%u",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x554>
-cmpl   $0x32,-0x20(%ebp)
-jle    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0xf1>
-movl   $0x32,-0x20(%ebp)
-mov    -0x20(%ebp),%ecx
+jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x4e5>
+cmpl   $0x32,-0x34(%ebp)
+jle    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x118>
+movl   $0x32,-0x34(%ebp)
+mov    -0x34(%ebp),%ecx
 mov    $0x66666667,%edx
 mov    %ecx,%eax
 imul   %edx
 sar    $0x2,%edx
 mov    %ecx,%eax
 sar    $0x1f,%eax
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
-mov    %eax,-0x1c(%ebp)
-mov    -0x20(%ebp),%ecx
+mov    %eax,-0x2c(%ebp)
+mov    -0x34(%ebp),%ecx
 mov    $0x66666667,%edx
 mov    %ecx,%eax
 imul   %edx
 sar    $0x2,%edx
 mov    %ecx,%eax
 sar    $0x1f,%eax
 sub    %eax,%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    %eax,%eax
 mov    %ecx,%edx
 sub    %eax,%edx
 mov    %edx,%eax
-mov    %eax,-0x18(%ebp)
-mov    0x8(%ebp),%eax
-lea    0xc(%eax),%edx
-lea    -0x3c(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+lea    -0x54(%ebp),%eax
+mov    -0x38(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj18STGuildBoardDBInfoSt7greaterIjESaISt4pairIKjS0_EEE5beginEv>
 sub    $0x4,%esp
-mov    0x8(%ebp),%eax
-lea    0xc(%eax),%edx
-lea    -0x40(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIj18STGuildBoardDBInfoSt7greaterIjESaISt4pairIKjS0_EEE3endEv>
-sub    $0x4,%esp
-mov    -0x3c(%ebp),%eax
-mov    %eax,-0x44(%ebp)
-movl   $0x0,-0x14(%ebp)
-jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x34b>
-lea    -0x6ce(%ebp),%eax
+movl   $0x0,-0x24(%ebp)
+jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x323>
+lea    -0x6de(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN30Packet_Guild_Reply_Guild_BoardC1Ev>
-mov    0x14(%ebp),%eax
-mov    %ax,-0x6c2(%ebp)
+lea    -0x6de(%ebp),%eax
+add    $0xc,%eax
+movzwl -0x2e(%ebp),%edx
+mov    %dx,(%eax)
+lea    -0x6de(%ebp),%eax
+lea    0xf(%eax),%ebx
 mov    0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x6bf(%ebp)
+mov    %eax,(%ebx)
+lea    -0x6de(%ebp),%eax
+lea    0x13(%eax),%ebx
 mov    0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x6bb(%ebp)
-mov    -0x20(%ebp),%eax
-mov    %al,-0x6c0(%ebp)
-movb   $0xa,-0x6b7(%ebp)
-movl   $0x0,-0x10(%ebp)
-jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x2c9>
-mov    -0x10(%ebp),%ebx
-lea    -0x44(%ebp),%eax
+mov    %eax,(%ebx)
+lea    -0x6de(%ebp),%eax
+lea    0xe(%eax),%edx
+mov    -0x34(%ebp),%eax
+mov    %al,(%edx)
+lea    -0x6de(%ebp),%eax
+add    $0x17,%eax
+movb   $0xa,(%eax)
+movl   $0x0,-0x20(%ebp)
+jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x2a1>
+lea    -0x6de(%ebp),%eax
+mov    -0x20(%ebp),%edx
+imul   $0xa5,%edx,%edx
+add    $0x18,%edx
+add    %edx,%eax
+mov    %eax,-0x1c(%ebp)
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj18STGuildBoardDBInfoEEptEv>
-mov    (%eax),%eax
-imul   $0xa5,%ebx,%edx
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0x646,%edx
-mov    %eax,0x14(%edx)
-lea    -0x44(%ebp),%eax
+add    $0x4,%eax
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
+add    $0x4,%eax
+movl   $0x78,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+mov    -0x1c(%ebp),%eax
+lea    0x78(%eax),%edx
+mov    -0x18(%ebp),%eax
+add    $0x7c,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+mov    -0x1c(%ebp),%eax
+lea    0x7c(%eax),%ebx
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj18STGuildBoardDBInfoEEptEv>
-lea    0x4(%eax),%edx
-mov    -0x10(%ebp),%ecx
-lea    -0x6ce(%ebp),%eax
-imul   $0xa5,%ecx,%ecx
-add    $0x10,%ecx
-add    %ecx,%eax
-add    $0x8,%eax
-movl   $0x78,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <memcpy>
-mov    -0x10(%ebp),%ebx
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj18STGuildBoardDBInfoEEptEv>
-mov    0x7c(%eax),%eax
-imul   $0xa5,%ebx,%edx
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0x646,%edx
-mov    %eax,0x10(%edx)
-mov    -0x10(%ebp),%ebx
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj18STGuildBoardDBInfoEEptEv>
-mov    0x84(%eax),%eax
-imul   $0xa5,%ebx,%edx
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0x636,%edx
-mov    %eax,0x8(%edx)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj18STGuildBoardDBInfoEEptEv>
+mov    (%eax),%eax
+mov    %eax,(%ebx)
+mov    -0x1c(%ebp),%eax
+lea    0x80(%eax),%edx
+mov    -0x18(%ebp),%eax
+add    $0x84,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+mov    -0x18(%ebp),%eax
 lea    0x88(%eax),%edx
-mov    -0x10(%ebp),%ecx
-lea    -0x6ce(%ebp),%eax
-imul   $0xa5,%ecx,%ecx
-add    $0x90,%ecx
-add    %ecx,%eax
-add    $0xc,%eax
+mov    -0x1c(%ebp),%eax
+add    $0x84,%eax
 movl   $0x21,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
-lea    -0x44(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKj18STGuildBoardDBInfoEEppEv>
-addl   $0x1,-0x10(%ebp)
-cmpl   $0x9,-0x10(%ebp)
+addl   $0x1,-0x20(%ebp)
+cmpl   $0x9,-0x20(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x1ce>
-lea    -0x6ce(%ebp),%eax
+jne    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x1ee>
+lea    -0x6de(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
 movl   $0xa5,0x8(%esp)
 movl   $&_ZZN11CGuildBoard18sendGuildBoardDataEjjjP5CUserE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $0xa,0x1c(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x14(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"SEND SUCCESS - CODE TYPE:%u, GUILD:%u, CHARAC:%u, COUNT:%u",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+addl   $0x1,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
+cmp    -0x2c(%ebp),%eax
+setl   %al
+test   %al,%al
+jne    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x17e>
+cmpl   $0x0,-0x28(%ebp)
+je     <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x4e5>
+lea    -0x6de(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN30Packet_Guild_Reply_Guild_BoardC1Ev>
+lea    -0x6de(%ebp),%eax
+add    $0xc,%eax
+movzwl -0x2e(%ebp),%edx
+mov    %dx,(%eax)
+lea    -0x6de(%ebp),%eax
+lea    0xf(%eax),%ebx
+mov    0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,(%ebx)
+lea    -0x6de(%ebp),%eax
+lea    0x13(%eax),%ebx
+mov    0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,(%ebx)
+lea    -0x6de(%ebp),%eax
+lea    0xe(%eax),%edx
+mov    -0x34(%ebp),%eax
+mov    %al,(%edx)
+lea    -0x6de(%ebp),%eax
+lea    0x17(%eax),%edx
+mov    -0x28(%ebp),%eax
+mov    %al,(%edx)
+movl   $0x0,-0x14(%ebp)
+jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x463>
+lea    -0x6de(%ebp),%eax
+mov    -0x14(%ebp),%edx
+imul   $0xa5,%edx,%edx
+add    $0x18,%edx
+add    %edx,%eax
+mov    %eax,-0x10(%ebp)
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj18STGuildBoardDBInfoEEptEv>
+add    $0x4,%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+add    $0x4,%eax
+movl   $0x78,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+mov    -0x10(%ebp),%eax
+lea    0x78(%eax),%edx
+mov    -0xc(%ebp),%eax
+add    $0x7c,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+mov    -0x10(%ebp),%eax
+lea    0x7c(%eax),%ebx
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj18STGuildBoardDBInfoEEptEv>
+mov    (%eax),%eax
+mov    %eax,(%ebx)
+mov    -0x10(%ebp),%eax
+lea    0x80(%eax),%edx
+mov    -0xc(%ebp),%eax
+add    $0x84,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+mov    -0xc(%ebp),%eax
+lea    0x88(%eax),%edx
+mov    -0x10(%ebp),%eax
+add    $0x84,%eax
+movl   $0x21,0x8(%esp)
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <memcpy>
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKj18STGuildBoardDBInfoEEppEv>
 addl   $0x1,-0x14(%ebp)
 mov    -0x14(%ebp),%eax
-cmp    -0x1c(%ebp),%eax
+cmp    -0x28(%ebp),%eax
 setl   %al
 test   %al,%al
-jne    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x178>
-cmpl   $0x0,-0x18(%ebp)
-je     <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x553>
-lea    -0xd58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN30Packet_Guild_Reply_Guild_BoardC1Ev>
-mov    0x14(%ebp),%eax
-mov    %ax,-0xd4c(%ebp)
-mov    0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0xd49(%ebp)
-mov    0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0xd45(%ebp)
-mov    -0x20(%ebp),%eax
-mov    %al,-0xd4a(%ebp)
-mov    -0x18(%ebp),%eax
-mov    %al,-0xd41(%ebp)
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x4cc>
-mov    -0xc(%ebp),%ebx
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj18STGuildBoardDBInfoEEptEv>
-mov    (%eax),%eax
-imul   $0xa5,%ebx,%edx
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0xcbc,%edx
-mov    %eax,(%edx)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj18STGuildBoardDBInfoEEptEv>
-lea    0x4(%eax),%edx
-mov    -0xc(%ebp),%ecx
-lea    -0xd58(%ebp),%eax
-imul   $0xa5,%ecx,%ecx
-add    $0x10,%ecx
-add    %ecx,%eax
-add    $0x8,%eax
-movl   $0x78,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <memcpy>
-mov    -0xc(%ebp),%ebx
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj18STGuildBoardDBInfoEEptEv>
-mov    0x7c(%eax),%eax
-imul   $0xa5,%ebx,%edx
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0xcc0,%edx
-mov    %eax,(%edx)
-mov    -0xc(%ebp),%ebx
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj18STGuildBoardDBInfoEEptEv>
-mov    0x84(%eax),%eax
-imul   $0xa5,%ebx,%edx
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0xcb8,%edx
-mov    %eax,(%edx)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj18STGuildBoardDBInfoEEptEv>
-lea    0x88(%eax),%edx
-mov    -0xc(%ebp),%ecx
-lea    -0xd58(%ebp),%eax
-imul   $0xa5,%ecx,%ecx
-add    $0x90,%ecx
-add    %ecx,%eax
-add    $0xc,%eax
-movl   $0x21,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <memcpy>
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKj18STGuildBoardDBInfoEEppEv>
-lea    -0x44(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj18STGuildBoardDBInfoEEeqERKS4_>
-test   %al,%al
-jne    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x4df>
-addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    -0x18(%ebp),%eax
-setl   %al
-test   %al,%al
-jne    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x3be>
-jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x4e0>
-nop
-lea    -0xd58(%ebp),%eax
+jne    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x3b0>
+lea    -0x6de(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
 movl   $0xcb,0x8(%esp)
 movl   $&_ZZN11CGuildBoard18sendGuildBoardDataEjjjP5CUserE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x18(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,0x1c(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x14(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"SEND SUCCESS - CODE TYPE:%u, GUILD:%u, CHARAC:%u, COUNT:%u",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x554>
-nop
-jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x554>
+jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x4e5>
 nop
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildBoard::sendGuildBoardData(unsigned int, unsigned int, unsigned int, CUser*) */

void __thiscall
CGuildBoard::_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser
          (CGuildBoard *this,uint param_1,uint param_2,uint param_3,CUser *param_4)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  Packet_Guild_Reply_Guild_Board local_d5c [12];
  undefined2 local_d50;
  undefined1 local_d4e;
  undefined4 local_d4d;
  undefined4 local_d49;
  undefined1 local_d45;
  undefined1 auStack_d44 [120];
  undefined4 auStack_ccc [3];
  undefined1 auStack_cc0 [1518];
  Packet_Guild_Reply_Guild_Board local_6d2 [12];
  undefined2 local_6c6;
  undefined1 local_6c4;
  undefined4 local_6c3;
  undefined4 local_6bf;
  undefined1 local_6bb;
  undefined1 auStack_6ba [120];
  undefined4 auStack_642 [3];
  undefined1 auStack_636 [1518];
  undefined4 local_48;
  map<unsigned_int,STGuildBoardDBInfo,std::greater<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>>
  local_44 [4];
  undefined4 local_40;
  CMyFileLog local_3c [8];
  CMyFileLog local_34 [8];
  CMyFileLog local_2c [8];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (param_4 != (CUser *)0x0) {
    local_24 = std::
               map<unsigned_int,STGuildBoardDBInfo,std::greater<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>>
               ::size((map<unsigned_int,STGuildBoardDBInfo,std::greater<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>>
                       *)(this + 0xc));
    uVar2 = (undefined2)param_3;
    if (local_24 == 0) {
      Packet_Guild_Reply_Guild_Board::Packet_Guild_Reply_Guild_Board(local_6d2);
      local_6c6 = uVar2;
      local_6c3 = CUser::GetIdByChannel(param_4);
      local_6bf = CUser::GetUniqCharNo(param_4);
      local_6c4 = 0;
      local_6bb = 0;
      CUser::SendTcpGameserver(param_4,(PacketHeader *)local_6d2);
      CMyFileLog::CMyFileLog(local_3c,"sendGuildBoardData",0x77);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_3c,"./log/GuildBoard",
                 "SEND SUCCESS - CODE TYPE:%u, GUILD:%u, CHARAC:%u, COUNT:%u",param_3,param_1,
                 param_2,0);
    }
    else {
      if (0x32 < local_24) {
        local_24 = 0x32;
      }
      local_20 = local_24 / 10;
      local_1c = local_24 % 10;
      std::
      map<unsigned_int,STGuildBoardDBInfo,std::greater<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>>
      ::begin((map<unsigned_int,STGuildBoardDBInfo,std::greater<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>>
               *)&local_40);
      std::
      map<unsigned_int,STGuildBoardDBInfo,std::greater<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>>
      ::end(local_44);
      local_48 = local_40;
      for (local_18 = 0; local_18 < local_20; local_18 = local_18 + 1) {
        Packet_Guild_Reply_Guild_Board::Packet_Guild_Reply_Guild_Board(local_6d2);
        local_6c6 = uVar2;
        local_6c3 = CUser::GetIdByChannel(param_4);
        local_6bf = CUser::GetUniqCharNo(param_4);
        local_6c4 = (undefined1)local_24;
        local_6bb = 10;
        for (local_14 = 0; iVar4 = local_14, local_14 < 10; local_14 = local_14 + 1) {
          puVar3 = (undefined4 *)
                   std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>::
                   operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>> *
                              )&local_48);
          *(undefined4 *)((int)auStack_642 + iVar4 * 0xa5 + 4) = *puVar3;
          iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>::
                  operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>> *)
                             &local_48);
          memcpy(auStack_6ba + local_14 * 0xa5,(void *)(iVar4 + 4),0x78);
          iVar4 = local_14;
          iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>::
                  operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>> *)
                             &local_48);
          *(undefined4 *)((int)auStack_642 + iVar4 * 0xa5) = *(undefined4 *)(iVar5 + 0x7c);
          iVar4 = local_14;
          iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>::
                  operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>> *)
                             &local_48);
          *(undefined4 *)(auStack_636 + iVar4 * 0xa5 + -4) = *(undefined4 *)(iVar5 + 0x84);
          iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>::
                  operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>> *)
                             &local_48);
          memcpy(auStack_636 + local_14 * 0xa5,(void *)(iVar4 + 0x88),0x21);
          std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>::operator++
                    ((_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>> *)
                     &local_48);
        }
        CUser::SendTcpGameserver(param_4,(PacketHeader *)local_6d2);
        CMyFileLog::CMyFileLog(local_34,"sendGuildBoardData",0xa5);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_34,"./log/GuildBoard",
                   "SEND SUCCESS - CODE TYPE:%u, GUILD:%u, CHARAC:%u, COUNT:%u",param_3,param_1,
                   param_2,local_24,10);
      }
      if (local_1c != 0) {
        Packet_Guild_Reply_Guild_Board::Packet_Guild_Reply_Guild_Board(local_d5c);
        local_d50 = uVar2;
        local_d4d = CUser::GetIdByChannel(param_4);
        local_d49 = CUser::GetUniqCharNo(param_4);
        local_d4e = (undefined1)local_24;
        local_d45 = (undefined1)local_1c;
        for (local_10 = 0; iVar4 = local_10, local_10 < local_1c; local_10 = local_10 + 1) {
          puVar3 = (undefined4 *)
                   std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>::
                   operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>> *
                              )&local_48);
          *(undefined4 *)((int)auStack_ccc + iVar4 * 0xa5 + 4) = *puVar3;
          iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>::
                  operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>> *)
                             &local_48);
          memcpy(auStack_d44 + local_10 * 0xa5,(void *)(iVar4 + 4),0x78);
          iVar4 = local_10;
          iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>::
                  operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>> *)
                             &local_48);
          *(undefined4 *)((int)auStack_ccc + iVar4 * 0xa5) = *(undefined4 *)(iVar5 + 0x7c);
          iVar4 = local_10;
          iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>::
                  operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>> *)
                             &local_48);
          *(undefined4 *)(auStack_cc0 + iVar4 * 0xa5 + -4) = *(undefined4 *)(iVar5 + 0x84);
          iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>::
                  operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>> *)
                             &local_48);
          memcpy(auStack_cc0 + local_10 * 0xa5,(void *)(iVar4 + 0x88),0x21);
          std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>::operator++
                    ((_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>> *)
                     &local_48);
          cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>::
                  operator==((_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>> *)
                             local_44,(_Rb_tree_iterator *)&local_48);
          if (cVar1 != '\0') break;
        }
        CUser::SendTcpGameserver(param_4,(PacketHeader *)local_d5c);
        CMyFileLog::CMyFileLog(local_2c,"sendGuildBoardData",0xcb);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_2c,"./log/GuildBoard",
                   "SEND SUCCESS - CODE TYPE:%u, GUILD:%u, CHARAC:%u, COUNT:%u",param_3,param_1,
                   param_2,local_24,local_1c);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Guild/GuildBoard.cpp, source/DNFServer/GameServer/Guild/BlackUser.h, source/DNFServer/GameServer/Guild/CashObject.h, source/DNFServer/GameServer/Guild/DNFAppConfig.h, source/DNFServer/GameServer/Guild/DNFAppStartInit.h, source/DNFServer/GameServer/Guild/DNFAppStopInit.h, source/DNFServer/GameServer/Guild/DNFApplication.h, source/DNFServer/GameServer/Guild/DNFDBServer.h 等 289 个文件*

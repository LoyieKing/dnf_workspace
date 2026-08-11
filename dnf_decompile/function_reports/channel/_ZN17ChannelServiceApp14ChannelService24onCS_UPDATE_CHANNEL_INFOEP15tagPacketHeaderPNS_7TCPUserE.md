# _ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE

`ChannelServiceApp::ChannelService::onCS_UPDATE_CHANNEL_INFO(tagPacketHeader*, ChannelServiceApp::TCPUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| channel | DIFF | `0x804f786` | `0xb15` | `0x8060f3c` | `0xb0d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,718 +1,714 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $"In  ",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $"onCS_UPDATE_CHANNEL_INFO",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 movl   $0xffffffff,-0x2c(%ebp)
-movl   $0x0,-0x24(%ebp)
+movl   $0x0,-0x28(%ebp)
 mov    0xc(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
 mov    0xb(%eax),%eax
 mov    %eax,-0x38(%ebp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 mov    -0x38(%ebp),%ebx
 movl   $"ABCD update gc_no=",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 mov    0x8(%ebp),%eax
 movzbl 0x1c02708(%eax),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0xd8>
 mov    $0x0,%eax
-jmp    <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0xb0a>
+jmp    <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0xb02>
 mov    -0x38(%ebp),%eax
 test   %eax,%eax
 jg     <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0x134>
 movl   $&_ZN17ChannelServiceApp13gFileLogErrorE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 mov    -0x38(%ebp),%ebx
 movl   $"Incomming invalid gc_no=",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp13gFileLogErrorE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp13gFileLogErrorE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 mov    $0x0,%eax
-jmp    <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0xb0a>
+jmp    <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0xb02>
 mov    0x8(%ebp),%eax
 lea    0x1c0270c(%eax),%edx
 lea    -0x3c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIPciSt4lessIS0_ESaISt4pairIKS0_iEEE5beginEv>
 sub    $0x4,%esp
 jmp    <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0x1fc>
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKPciEEptEv>
 mov    0x4(%eax),%edx
 mov    -0x38(%ebp),%eax
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 test   %eax,%eax
 jle    <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0x194>
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKPciEEptEv>
 mov    0x4(%eax),%edx
 mov    -0x38(%ebp),%eax
-mov    %edx,%esi
-sub    %eax,%esi
-mov    %esi,%eax
+mov    %edx,%ecx
+sub    %eax,%ecx
+mov    %ecx,%eax
 cmp    $0x3e7,%eax
 jg     <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0x194>
 mov    $0x1,%eax
 jmp    <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0x199>
 mov    $0x0,%eax
 test   %al,%al
 je     <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0x1db>
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,-0x2c(%ebp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKPciEEptEv>
 mov    (%eax),%eax
 mov    -0x2c(%ebp),%edx
 imul   $0x3804c,%edx,%edx
 add    $0x100,%edx
 add    0x8(%ebp),%edx
 add    $0x5,%edx
 movl   $0x14,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <strncpy>
 jmp    <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0x231>
-addl   $0x1,-0x24(%ebp)
+addl   $0x1,-0x28(%ebp)
 lea    -0x30(%ebp),%eax
 movl   $0x0,0x8(%esp)
 lea    -0x3c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKPciEEppEi>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x1c0270c(%eax),%edx
 lea    -0x34(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIPciSt4lessIS0_ESaISt4pairIKS0_iEEE3endEv>
 sub    $0x4,%esp
 lea    -0x34(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKPciEEneERKS4_>
 test   %al,%al
 jne    <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0x154>
 cmpl   $0xffffffff,-0x2c(%ebp)
 jne    <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0x27d>
 movl   $&_ZN17ChannelServiceApp13gFileLogErrorE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $"Invalid ServerGroupIndex",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp13gFileLogErrorE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp13gFileLogErrorE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 mov    $0x0,%eax
-jmp    <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0xb0a>
+jmp    <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0xb02>
 mov    -0x2c(%ebp),%eax
 mov    0x8(%ebp),%edx
 imul   $0x3804c,%eax,%eax
 lea    (%edx,%eax,1),%eax
 add    $0x100,%eax
 movzbl 0x4(%eax),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0x2b4>
 mov    -0x2c(%ebp),%eax
 mov    0x8(%ebp),%edx
 imul   $0x3804c,%eax,%eax
 lea    (%edx,%eax,1),%eax
 add    $0x100,%eax
 movb   $0x1,0x4(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x1c02704(%eax)
 movl   $0x0,-0x1c(%ebp)
 jmp    <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0x2ff>
 mov    -0x1c(%ebp),%eax
 mov    0x8(%ebp),%edx
 imul   $0x3804c,%eax,%eax
 lea    (%edx,%eax,1),%eax
 add    $0x100,%eax
 movzbl 0x4(%eax),%eax
 test   %al,%al
 je     <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0x2fb>
 mov    0x8(%ebp),%eax
 mov    0x1c02704(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x1c02704(%eax)
 addl   $0x1,-0x1c(%ebp)
 cmpl   $0x7f,-0x1c(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0x2ca>
-movl   $0x0,-0x28(%ebp)
+movl   $0x0,-0x20(%ebp)
 jmp    <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0x346>
 mov    -0x2c(%ebp),%ebx
-mov    -0x28(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    0x8(%ebp),%ecx
 shl    $0x3,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 imul   $0x3804c,%ebx,%eax
 lea    (%edx,%eax,1),%eax
 lea    (%ecx,%eax,1),%eax
 add    $0x168,%eax
 mov    (%eax),%edx
 mov    -0x38(%ebp),%eax
 cmp    %eax,%edx
 je     <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0x356>
-addl   $0x1,-0x28(%ebp)
-cmpl   $0xfff,-0x28(%ebp)
+addl   $0x1,-0x20(%ebp)
+cmpl   $0xfff,-0x20(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0x313>
 jmp    <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0x357>
 nop
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $"update ?",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
-mov    -0x28(%ebp),%edx
+mov    -0x20(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 mov    -0x38(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    0x1c02704(%eax),%esi
 movl   $"ServerGroupCount=",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $", ServerGroupIndex=",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    -0x2c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $", gc_no=",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
-cmpl   $0x1000,-0x28(%ebp)
-jne    <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0x7b1>
-movl   $0x0,-0x28(%ebp)
+cmpl   $0x1000,-0x20(%ebp)
+jne    <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0x7ad>
+movl   $0x0,-0x20(%ebp)
 jmp    <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0x47c>
 mov    -0x2c(%ebp),%ebx
-mov    -0x28(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    0x8(%ebp),%ecx
 shl    $0x3,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 imul   $0x3804c,%ebx,%eax
 lea    (%edx,%eax,1),%eax
 lea    (%ecx,%eax,1),%eax
 add    $0x160,%eax
 movzbl 0xc(%eax),%eax
 xor    $0x1,%eax
 test   %al,%al
 jne    <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0x48c>
-addl   $0x1,-0x28(%ebp)
-cmpl   $0xfff,-0x28(%ebp)
+addl   $0x1,-0x20(%ebp)
+cmpl   $0xfff,-0x20(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0x447>
 jmp    <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0x48d>
 nop
 mov    0x8(%ebp),%eax
 add    $0x1c02724,%eax
 mov    %eax,0x4(%esp)
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11TScopedLockI11TThreadLockI16ThreadLock_linuxEEC1ERS2_>
 mov    -0x2c(%ebp),%esi
-mov    -0x28(%ebp),%edx
-mov    -0x20(%ebp),%eax
+mov    -0x20(%ebp),%edx
+mov    -0x24(%ebp),%eax
 mov    0x17(%eax),%ecx
 mov    0x8(%ebp),%ebx
 mov    %edx,%eax
 shl    $0x3,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 imul   $0x3804c,%esi,%eax
 lea    (%edx,%eax,1),%eax
 lea    (%ebx,%eax,1),%eax
 add    $0x14c,%eax
 mov    %ecx,(%eax)
 mov    -0x2c(%ebp),%esi
-mov    -0x28(%ebp),%edx
-mov    -0x20(%ebp),%eax
+mov    -0x20(%ebp),%edx
+mov    -0x24(%ebp),%eax
 mov    0x1b(%eax),%ecx
 mov    0x8(%ebp),%ebx
 mov    %edx,%eax
 shl    $0x3,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 imul   $0x3804c,%esi,%eax
 lea    (%edx,%eax,1),%eax
 lea    (%ebx,%eax,1),%eax
 add    $0x150,%eax
 mov    %ecx,(%eax)
 mov    -0x2c(%ebp),%esi
-mov    -0x28(%ebp),%edx
-mov    -0x20(%ebp),%eax
+mov    -0x20(%ebp),%edx
+mov    -0x24(%ebp),%eax
 mov    0x2f(%eax),%ecx
 mov    0x8(%ebp),%ebx
 mov    %edx,%eax
 shl    $0x3,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 imul   $0x3804c,%esi,%eax
 lea    (%edx,%eax,1),%eax
 lea    (%ebx,%eax,1),%eax
 add    $0x164,%eax
 mov    %ecx,(%eax)
 mov    -0x2c(%ebp),%esi
-mov    -0x28(%ebp),%edx
-mov    -0x20(%ebp),%eax
+mov    -0x20(%ebp),%edx
+mov    -0x24(%ebp),%eax
 mov    0xb(%eax),%ecx
 mov    0x8(%ebp),%ebx
 mov    %edx,%eax
 shl    $0x3,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 imul   $0x3804c,%esi,%eax
 lea    (%edx,%eax,1),%eax
 lea    (%ebx,%eax,1),%eax
 add    $0x168,%eax
 mov    %ecx,(%eax)
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
 lea    0x1f(%eax),%ecx
 mov    -0x2c(%ebp),%ebx
-mov    -0x28(%ebp),%eax
+mov    -0x20(%ebp),%eax
 shl    $0x3,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 imul   $0x3804c,%ebx,%eax
 lea    (%edx,%eax,1),%eax
 add    $0x140,%eax
 add    0x8(%ebp),%eax
 add    $0x14,%eax
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <strcpy>
 mov    -0x2c(%ebp),%esi
-mov    -0x28(%ebp),%edx
-mov    -0x20(%ebp),%eax
+mov    -0x20(%ebp),%edx
+mov    -0x24(%ebp),%eax
 mov    0x13(%eax),%ecx
 mov    0x8(%ebp),%ebx
 mov    %edx,%eax
 shl    $0x3,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 imul   $0x3804c,%esi,%eax
 lea    (%edx,%eax,1),%eax
 lea    (%ebx,%eax,1),%eax
 add    $0x180,%eax
 mov    %ecx,(%eax)
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    0x13(%eax),%ecx
 mov    -0x2c(%ebp),%ebx
-mov    -0x28(%ebp),%eax
+mov    -0x20(%ebp),%eax
 shl    $0x3,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 imul   $0x3804c,%ebx,%eax
 lea    (%edx,%eax,1),%eax
 add    $0x160,%eax
 add    0x8(%ebp),%eax
 add    $0x14,%eax
 mov    %ecx,0x8(%esp)
 movl   $"#ch.%d",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <sprintf>
 mov    -0x2c(%ebp),%esi
-mov    -0x28(%ebp),%edi
+mov    -0x20(%ebp),%edi
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,%ecx
 mov    0x8(%ebp),%ebx
 mov    %edi,%eax
 shl    $0x3,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 imul   $0x3804c,%esi,%eax
 lea    (%edx,%eax,1),%eax
 lea    (%ebx,%eax,1),%eax
 add    $0x170,%eax
 mov    %ecx,(%eax)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 mov    -0x38(%ebp),%ebx
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    0x2f(%eax),%esi
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
 lea    0x1f(%eax),%edi
 movl   $"Add SGI=",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    -0x2c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $", IP= ",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %edi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPc>
 movl   $", PORT= ",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $", gc_no=",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 mov    -0x2c(%ebp),%ebx
-mov    -0x28(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    0x8(%ebp),%ecx
 shl    $0x3,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 imul   $0x3804c,%ebx,%eax
 lea    (%edx,%eax,1),%eax
 lea    (%ecx,%eax,1),%eax
 add    $0x160,%eax
 movb   $0x1,0xc(%eax)
 mov    -0x2c(%ebp),%eax
 imul   $0x3804c,%eax,%eax
 add    $0x110,%eax
 add    0x8(%ebp),%eax
 lea    0xc(%eax),%edx
 lea    -0x38(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIiPN17ChannelServiceApp11tServerInfoESt4lessIiESaISt4pairIKiS2_EEEixERS6_>
-mov    %eax,%edx
-mov    -0x2c(%ebp),%eax
-imul   $0x3804c,%eax,%eax
+mov    %eax,%ecx
+mov    -0x2c(%ebp),%ebx
+mov    -0x20(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%edx
+sub    %eax,%edx
+imul   $0x3804c,%ebx,%eax
+lea    (%edx,%eax,1),%eax
 add    $0x140,%eax
 add    0x8(%ebp),%eax
-lea    0xc(%eax),%ebx
-mov    -0x28(%ebp),%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%ecx
-mov    %ecx,%esi
-sub    %eax,%esi
-mov    %esi,%eax
-lea    (%ebx,%eax,1),%eax
-mov    %eax,(%edx)
+add    $0xc,%eax
+mov    %eax,(%ecx)
 mov    -0x2c(%ebp),%eax
 imul   $0x3804c,%eax,%eax
 add    $0x100,%eax
 add    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp11ServerGroup18increseServerCountEv>
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11TScopedLockI11TThreadLockI16ThreadLock_linuxEED1Ev>
-jmp    <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0xab9>
+jmp    <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0xab1>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11TScopedLockI11TThreadLockI16ThreadLock_linuxEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
 add    $0x1c02724,%eax
 mov    %eax,0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11TScopedLockI11TThreadLockI16ThreadLock_linuxEEC1ERS2_>
 mov    -0x2c(%ebp),%esi
-mov    -0x28(%ebp),%edx
-mov    -0x20(%ebp),%eax
+mov    -0x20(%ebp),%edx
+mov    -0x24(%ebp),%eax
 mov    0x17(%eax),%ecx
 mov    0x8(%ebp),%ebx
 mov    %edx,%eax
 shl    $0x3,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 imul   $0x3804c,%esi,%eax
 lea    (%edx,%eax,1),%eax
 lea    (%ebx,%eax,1),%eax
 add    $0x14c,%eax
 mov    %ecx,(%eax)
 mov    -0x2c(%ebp),%esi
-mov    -0x28(%ebp),%edx
-mov    -0x20(%ebp),%eax
+mov    -0x20(%ebp),%edx
+mov    -0x24(%ebp),%eax
 mov    0x1b(%eax),%ecx
 mov    0x8(%ebp),%ebx
 mov    %edx,%eax
 shl    $0x3,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 imul   $0x3804c,%esi,%eax
 lea    (%edx,%eax,1),%eax
 lea    (%ebx,%eax,1),%eax
 add    $0x150,%eax
 mov    %ecx,(%eax)
 mov    -0x2c(%ebp),%esi
-mov    -0x28(%ebp),%edx
-mov    -0x20(%ebp),%eax
+mov    -0x20(%ebp),%edx
+mov    -0x24(%ebp),%eax
 mov    0x2f(%eax),%ecx
 mov    0x8(%ebp),%ebx
 mov    %edx,%eax
 shl    $0x3,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 imul   $0x3804c,%esi,%eax
 lea    (%edx,%eax,1),%eax
 lea    (%ebx,%eax,1),%eax
 add    $0x164,%eax
 mov    %ecx,(%eax)
 mov    -0x2c(%ebp),%esi
-mov    -0x28(%ebp),%edx
-mov    -0x20(%ebp),%eax
+mov    -0x20(%ebp),%edx
+mov    -0x24(%ebp),%eax
 mov    0xb(%eax),%ecx
 mov    0x8(%ebp),%ebx
 mov    %edx,%eax
 shl    $0x3,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 imul   $0x3804c,%esi,%eax
 lea    (%edx,%eax,1),%eax
 lea    (%ebx,%eax,1),%eax
 add    $0x168,%eax
 mov    %ecx,(%eax)
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
 lea    0x1f(%eax),%ecx
 mov    -0x2c(%ebp),%ebx
-mov    -0x28(%ebp),%eax
+mov    -0x20(%ebp),%eax
 shl    $0x3,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 imul   $0x3804c,%ebx,%eax
 lea    (%edx,%eax,1),%eax
 add    $0x140,%eax
 add    0x8(%ebp),%eax
 add    $0x14,%eax
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <strcpy>
 mov    -0x2c(%ebp),%esi
-mov    -0x28(%ebp),%edx
-mov    -0x20(%ebp),%eax
+mov    -0x20(%ebp),%edx
+mov    -0x24(%ebp),%eax
 mov    0x13(%eax),%ecx
 mov    0x8(%ebp),%ebx
 mov    %edx,%eax
 shl    $0x3,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 imul   $0x3804c,%esi,%eax
 lea    (%edx,%eax,1),%eax
 lea    (%ebx,%eax,1),%eax
 add    $0x180,%eax
 mov    %ecx,(%eax)
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    0x13(%eax),%ecx
 mov    -0x2c(%ebp),%ebx
-mov    -0x28(%ebp),%eax
+mov    -0x20(%ebp),%eax
 shl    $0x3,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 imul   $0x3804c,%ebx,%eax
 lea    (%edx,%eax,1),%eax
 add    $0x160,%eax
 add    0x8(%ebp),%eax
 add    $0x14,%eax
 mov    %ecx,0x8(%esp)
 movl   $"#ch.%d",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <sprintf>
 mov    -0x2c(%ebp),%esi
-mov    -0x28(%ebp),%edi
+mov    -0x20(%ebp),%edi
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,%ecx
 mov    0x8(%ebp),%ebx
 mov    %edi,%eax
 shl    $0x3,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 imul   $0x3804c,%esi,%eax
 lea    (%edx,%eax,1),%eax
 lea    (%ebx,%eax,1),%eax
 add    $0x170,%eax
 mov    %ecx,(%eax)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 mov    -0x38(%ebp),%ebx
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    0x2f(%eax),%esi
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
 lea    0x1f(%eax),%edi
 movl   $"Add SGI=",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    -0x2c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $", IP= ",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %edi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPc>
 movl   $", PORT= ",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $", gc_no=",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 mov    -0x2c(%ebp),%eax
 imul   $0x3804c,%eax,%eax
 add    $0x110,%eax
 add    0x8(%ebp),%eax
 lea    0xc(%eax),%edx
 lea    -0x38(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIiPN17ChannelServiceApp11tServerInfoESt4lessIiESaISt4pairIKiS2_EEEixERS6_>
-mov    %eax,%edx
-mov    -0x2c(%ebp),%eax
-imul   $0x3804c,%eax,%eax
+mov    %eax,%ecx
+mov    -0x2c(%ebp),%ebx
+mov    -0x20(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%edx
+sub    %eax,%edx
+imul   $0x3804c,%ebx,%eax
+lea    (%edx,%eax,1),%eax
 add    $0x140,%eax
 add    0x8(%ebp),%eax
-lea    0xc(%eax),%ebx
-mov    -0x28(%ebp),%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%ecx
-mov    %ecx,%esi
-sub    %eax,%esi
-mov    %esi,%eax
-lea    (%ebx,%eax,1),%eax
-mov    %eax,(%edx)
-mov    -0x2c(%ebp),%ebx
-mov    -0x28(%ebp),%eax
+add    $0xc,%eax
+mov    %eax,(%ecx)
+mov    -0x2c(%ebp),%ebx
+mov    -0x20(%ebp),%eax
 mov    0x8(%ebp),%ecx
 shl    $0x3,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 imul   $0x3804c,%ebx,%eax
 lea    (%edx,%eax,1),%eax
 lea    (%ecx,%eax,1),%eax
 add    $0x160,%eax
 movb   $0x1,0xc(%eax)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11TScopedLockI11TThreadLockI16ThreadLock_linuxEED1Ev>
-jmp    <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0xab9>
+jmp    <T> <_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0xab1>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11TScopedLockI11TThreadLockI16ThreadLock_linuxEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $"Out ",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $"onCS_UPDATE_CHANNEL_INFO",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 mov    $0x1,%eax
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

/* DWARF original prototype: DWORD onCS_UPDATE_CHANNEL_INFO(ChannelService * this, LPPACKET_HEADER
   pPCK, TCPUser * u) */

DWORD __thiscall
ChannelServiceApp::ChannelService::
_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE
          (ChannelService *this,LPPACKET_HEADER pPCK,TCPUser *u)

{
  int iVar1;
  LPPACKET_HEADER ptVar2;
  undefined4 uVar3;
  _Base_ptr p_Var4;
  size_t sVar5;
  bool bVar6;
  TDebugTrace<char> *pTVar7;
  DWORD DVar8;
  pair<char*_const,_int> *ppVar9;
  time_t tVar10;
  tServerInfo **pptVar11;
  int *piVar12;
  TScopedLock<TThreadLock<ThreadLock_linux>_> local_48;
  TScopedLock<TThreadLock<ThreadLock_linux>_> local_44;
  undefined1 local_40 [12];
  _Rb_tree_iterator<std::pair<char*_const,_int>_> local_34;
  _Base_ptr local_30;
  size_t local_2c;
  _Base_ptr local_28;
  LPPACKET_HEADER local_24;
  int local_20;
  
                    /* Unresolved local var: int ServerGroupIndex@[???]
                       Unresolved local var: int gc_no@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: int count@[???]
                       Unresolved local var: LPPCK_CS_UPDATE_CHANNEL_INFO _pPCK@[???] */
  TDebugTrace<char>::Lock(&gFileLogInfo);
  pTVar7 = TDebugTrace<char>::operator<<(&gFileLogInfo,"In  ");
  pTVar7 = TDebugTrace<char>::operator<<(pTVar7,"onCS_UPDATE_CHANNEL_INFO");
  TDebugTrace<char>::operator<<(pTVar7,endl<char>);
  TDebugTrace<char>::Unlock(&gFileLogInfo);
  local_30 = (_Base_ptr)0xffffffff;
  local_28 = (_Base_ptr)0x0;
  local_24 = pPCK;
  local_40._4_4_ = *(undefined4 *)(pPCK + 1);
  TDebugTrace<char>::Lock(&gFileLogInfo);
  uVar3 = local_40._4_4_;
  pTVar7 = TDebugTrace<char>::operator<<(&gFileLogInfo,"ABCD update gc_no=");
  pTVar7 = TDebugTrace<char>::operator<<(pTVar7,uVar3);
  TDebugTrace<char>::operator<<(pTVar7,endl<char>);
  TDebugTrace<char>::Unlock(&gFileLogInfo);
  if ((this->super_Channel).isReadyToStart == true) {
    if ((int)local_40._4_4_ < 1) {
      TDebugTrace<char>::Lock(&gFileLogError);
      uVar3 = local_40._4_4_;
      pTVar7 = TDebugTrace<char>::operator<<(&gFileLogError,"Incomming invalid gc_no=");
      pTVar7 = TDebugTrace<char>::operator<<(pTVar7,uVar3);
      TDebugTrace<char>::operator<<(pTVar7,endl<char>);
      TDebugTrace<char>::Unlock(&gFileLogError);
      DVar8 = 0;
    }
    else {
                    /* Unresolved local var: map_iter_t iter@[???] */
      std::map<char*,_int,_std::less<char*>,_std::allocator<std::pair<char*_const,_int>_>_>::begin
                ((map<char*,_int,_std::less<char*>,_std::allocator<std::pair<char*_const,_int>_>_> *
                 )local_40);
      while( true ) {
        std::map<char*,_int,_std::less<char*>,_std::allocator<std::pair<char*_const,_int>_>_>::end
                  ((map<char*,_int,_std::less<char*>,_std::allocator<std::pair<char*_const,_int>_>_>
                    *)(local_40 + 8));
        bVar6 = std::_Rb_tree_iterator<std::pair<char*_const,_int>_>::operator!=
                          ((_Rb_tree_iterator<std::pair<char*_const,_int>_> *)local_40,
                           (_Rb_tree_iterator<std::pair<char*_const,_int>_> *)(local_40 + 8));
        if (!bVar6) break;
        ppVar9 = std::_Rb_tree_iterator<std::pair<char*_const,_int>_>::operator->
                           ((_Rb_tree_iterator<std::pair<char*_const,_int>_> *)local_40);
        if ((ppVar9->second == local_40._4_4_ || ppVar9->second - local_40._4_4_ < 0) ||
           (ppVar9 = std::_Rb_tree_iterator<std::pair<char*_const,_int>_>::operator->
                               ((_Rb_tree_iterator<std::pair<char*_const,_int>_> *)local_40),
           999 < ppVar9->second - local_40._4_4_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          local_30 = local_28;
          ppVar9 = std::_Rb_tree_iterator<std::pair<char*_const,_int>_>::operator->
                             ((_Rb_tree_iterator<std::pair<char*_const,_int>_> *)local_40);
          strncpy((this->super_Channel).Servers[(int)local_30].ServerName,ppVar9->first,0x14);
          break;
        }
        local_28 = (_Base_ptr)((int)&local_28->_M_color + 1);
        std::_Rb_tree_iterator<std::pair<char*_const,_int>_>::operator++(&local_34,(int)local_40);
      }
      if (local_30 == (_Base_ptr)0xffffffff) {
        TDebugTrace<char>::Lock(&gFileLogError);
        pTVar7 = TDebugTrace<char>::operator<<(&gFileLogError,"Invalid ServerGroupIndex");
        TDebugTrace<char>::operator<<(pTVar7,endl<char>);
        TDebugTrace<char>::Unlock(&gFileLogError);
        DVar8 = 0;
      }
      else {
        if ((this->super_Channel).Servers[(int)local_30].use != true) {
          (this->super_Channel).Servers[(int)local_30].use = true;
        }
        (this->super_Channel).ServerGroupCount = 0;
                    /* Unresolved local var: int j@[???] */
        for (local_20 = 0; local_20 < 0x80; local_20 = local_20 + 1) {
          if ((this->super_Channel).Servers[local_20].use != false) {
            (this->super_Channel).ServerGroupCount = (this->super_Channel).ServerGroupCount + 1;
          }
        }
        for (local_2c = 0;
            ((int)local_2c < 0x1000 &&
            ((this->super_Channel).Servers[(int)local_30].ServerInfo[local_2c].gc_no !=
             local_40._4_4_)); local_2c = local_2c + 1) {
        }
        TDebugTrace<char>::Lock(&gFileLogInfo);
        pTVar7 = TDebugTrace<char>::operator<<(&gFileLogInfo,"update ?");
        pTVar7 = TDebugTrace<char>::operator<<(pTVar7,local_2c);
        TDebugTrace<char>::operator<<(pTVar7,endl<char>);
        TDebugTrace<char>::Unlock(&gFileLogInfo);
        TDebugTrace<char>::Lock(&gFileLogInfo);
        uVar3 = local_40._4_4_;
        iVar1 = (this->super_Channel).ServerGroupCount;
        pTVar7 = TDebugTrace<char>::operator<<(&gFileLogInfo,"ServerGroupCount=");
        pTVar7 = TDebugTrace<char>::operator<<(pTVar7,iVar1);
        pTVar7 = TDebugTrace<char>::operator<<(pTVar7,", ServerGroupIndex=");
        pTVar7 = TDebugTrace<char>::operator<<(pTVar7,(int)local_30);
        pTVar7 = TDebugTrace<char>::operator<<(pTVar7,", gc_no=");
        pTVar7 = TDebugTrace<char>::operator<<(pTVar7,uVar3);
        TDebugTrace<char>::operator<<(pTVar7,endl<char>);
        TDebugTrace<char>::Unlock(&gFileLogInfo);
        if (local_2c == 0x1000) {
                    /* Unresolved local var: TScopedLock<TThreadLock<ThreadLock_linux>_> slock@[???]
                        */
          for (local_2c = 0;
              ((int)local_2c < 0x1000 &&
              ((this->super_Channel).Servers[(int)local_30].ServerInfo[local_2c].use == true));
              local_2c = local_2c + 1) {
          }
          TScopedLock<TThreadLock<ThreadLock_linux>_>::TScopedLock
                    (&local_44,&(this->super_Channel).LockChannel);
          (this->super_Channel).Servers[(int)local_30].ServerInfo[local_2c].nMaxUserCount_ =
               *(int *)&local_24[2].msg_no;
          (this->super_Channel).Servers[(int)local_30].ServerInfo[local_2c].nCurrentUserCount_ =
               *(int *)((int)&local_24[2].sLength + 3);
          (this->super_Channel).Servers[(int)local_30].ServerInfo[local_2c].port =
               *(int *)((int)&local_24[4].sLength + 1);
          (this->super_Channel).Servers[(int)local_30].ServerInfo[local_2c].gc_no =
               *(int *)(local_24 + 1);
          strcpy((this->super_Channel).Servers[(int)local_30].ServerInfo[local_2c].IP,
                 (char *)((int)&local_24[2].check_sum + 3));
          (this->super_Channel).Servers[(int)local_30].ServerInfo[local_2c].channel_no =
               *(int *)((int)&local_24[1].check_sum + 2);
          sprintf((this->super_Channel).Servers[(int)local_30].ServerInfo[local_2c].ChannelName,
                  "#ch.%d",*(undefined4 *)((int)&local_24[1].check_sum + 2));
          sVar5 = local_2c;
          p_Var4 = local_30;
          tVar10 = time((time_t *)0x0);
          (this->super_Channel).Servers[(int)p_Var4].ServerInfo[sVar5].tic = tVar10;
                    /* try { // try from 0804fdd1 to 0804fec4 has its CatchHandler @ 0804ff1c */
          TDebugTrace<char>::Lock(&gFileLogInfo);
          uVar3 = local_40._4_4_;
          iVar1 = *(int *)((int)&local_24[4].sLength + 1);
          ptVar2 = local_24 + 2;
          pTVar7 = TDebugTrace<char>::operator<<(&gFileLogInfo,"Add SGI=");
          pTVar7 = TDebugTrace<char>::operator<<(pTVar7,(int)local_30);
          pTVar7 = TDebugTrace<char>::operator<<(pTVar7,", IP= ");
          pTVar7 = TDebugTrace<char>::operator<<(pTVar7,(char *)((int)&ptVar2->check_sum + 3));
          pTVar7 = TDebugTrace<char>::operator<<(pTVar7,", PORT= ");
          pTVar7 = TDebugTrace<char>::operator<<(pTVar7,iVar1);
          pTVar7 = TDebugTrace<char>::operator<<(pTVar7,", gc_no=");
          pTVar7 = TDebugTrace<char>::operator<<(pTVar7,uVar3);
          TDebugTrace<char>::operator<<(pTVar7,endl<char>);
          TDebugTrace<char>::Unlock(&gFileLogInfo);
          (this->super_Channel).Servers[(int)local_30].ServerInfo[local_2c].use = true;
          piVar12 = (int *)(local_40 + 4);
          pptVar11 = std::
                     map<int,_ChannelServiceApp::tServerInfo*,_std::less<int>,_std::allocator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>_>
                     ::operator[](&(this->super_Channel).Servers[(int)local_30].listServerInfo_,
                                  piVar12);
          *pptVar11 = (this->super_Channel).Servers[(int)local_30].ServerInfo + local_2c;
          ServerGroup::increseServerCount((this->super_Channel).Servers + (int)local_30);
          TScopedLock<TThreadLock<ThreadLock_linux>_>::~TScopedLock(&local_44,(int)piVar12);
        }
        else {
                    /* Unresolved local var: TScopedLock<TThreadLock<ThreadLock_linux>_> slock@[???]
                        */
          TScopedLock<TThreadLock<ThreadLock_linux>_>::TScopedLock
                    (&local_48,&(this->super_Channel).LockChannel);
          (this->super_Channel).Servers[(int)local_30].ServerInfo[local_2c].nMaxUserCount_ =
               *(int *)&local_24[2].msg_no;
          (this->super_Channel).Servers[(int)local_30].ServerInfo[local_2c].nCurrentUserCount_ =
               *(int *)((int)&local_24[2].sLength + 3);
          (this->super_Channel).Servers[(int)local_30].ServerInfo[local_2c].port =
               *(int *)((int)&local_24[4].sLength + 1);
          (this->super_Channel).Servers[(int)local_30].ServerInfo[local_2c].gc_no =
               *(int *)(local_24 + 1);
          strcpy((this->super_Channel).Servers[(int)local_30].ServerInfo[local_2c].IP,
                 (char *)((int)&local_24[2].check_sum + 3));
          (this->super_Channel).Servers[(int)local_30].ServerInfo[local_2c].channel_no =
               *(int *)((int)&local_24[1].check_sum + 2);
          sprintf((this->super_Channel).Servers[(int)local_30].ServerInfo[local_2c].ChannelName,
                  "#ch.%d",*(undefined4 *)((int)&local_24[1].check_sum + 2));
          sVar5 = local_2c;
          p_Var4 = local_30;
          tVar10 = time((time_t *)0x0);
          (this->super_Channel).Servers[(int)p_Var4].ServerInfo[sVar5].tic = tVar10;
                    /* try { // try from 080500f5 to 080501be has its CatchHandler @ 08050224 */
          TDebugTrace<char>::Lock(&gFileLogInfo);
          uVar3 = local_40._4_4_;
          iVar1 = *(int *)((int)&local_24[4].sLength + 1);
          ptVar2 = local_24 + 2;
          pTVar7 = TDebugTrace<char>::operator<<(&gFileLogInfo,"Add SGI=");
          pTVar7 = TDebugTrace<char>::operator<<(pTVar7,(int)local_30);
          pTVar7 = TDebugTrace<char>::operator<<(pTVar7,", IP= ");
          pTVar7 = TDebugTrace<char>::operator<<(pTVar7,(char *)((int)&ptVar2->check_sum + 3));
          pTVar7 = TDebugTrace<char>::operator<<(pTVar7,", PORT= ");
          pTVar7 = TDebugTrace<char>::operator<<(pTVar7,iVar1);
          pTVar7 = TDebugTrace<char>::operator<<(pTVar7,", gc_no=");
          pTVar7 = TDebugTrace<char>::operator<<(pTVar7,uVar3);
          TDebugTrace<char>::operator<<(pTVar7,endl<char>);
          TDebugTrace<char>::Unlock(&gFileLogInfo);
          piVar12 = (int *)(local_40 + 4);
          pptVar11 = std::
                     map<int,_ChannelServiceApp::tServerInfo*,_std::less<int>,_std::allocator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>_>
                     ::operator[](&(this->super_Channel).Servers[(int)local_30].listServerInfo_,
                                  piVar12);
          *pptVar11 = (this->super_Channel).Servers[(int)local_30].ServerInfo + local_2c;
          (this->super_Channel).Servers[(int)local_30].ServerInfo[local_2c].use = true;
          TScopedLock<TThreadLock<ThreadLock_linux>_>::~TScopedLock(&local_48,(int)piVar12);
        }
        TDebugTrace<char>::Lock(&gFileLogInfo);
        pTVar7 = TDebugTrace<char>::operator<<(&gFileLogInfo,"Out ");
        pTVar7 = TDebugTrace<char>::operator<<(pTVar7,"onCS_UPDATE_CHANNEL_INFO");
        TDebugTrace<char>::operator<<(pTVar7,endl<char>);
        TDebugTrace<char>::Unlock(&gFileLogInfo);
        DVar8 = 1;
      }
    }
  }
  else {
    DVar8 = 0;
  }
  return DVar8;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/ChannelOld/DNFChannelBridge/ChannelService.cpp, source/ChannelOld/DNFChannelServer/ChannelService.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h 等 288 个文件*

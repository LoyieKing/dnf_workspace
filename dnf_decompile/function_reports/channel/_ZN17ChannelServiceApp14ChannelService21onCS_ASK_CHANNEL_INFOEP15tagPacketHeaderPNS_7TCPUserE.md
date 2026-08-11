# _ZN17ChannelServiceApp14ChannelService21onCS_ASK_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE

`ChannelServiceApp::ChannelService::onCS_ASK_CHANNEL_INFO(tagPacketHeader*, ChannelServiceApp::TCPUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| channel | DIFF | `0x804ee64` | `0x918` | `0x8060628` | `0x913` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,522 +1,519 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x80120,%esp
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $"In  ",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $"onCS_ASK_CHANNEL_INFO",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 lea    -0x47(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN22tagSC_ASK_CHANNEL_INFOC1Ev>
 lea    -0x47(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15tagPacketHeader8setAckOkEv>
-lea    -0x200b4(%ebp),%eax
+lea    -0x200b8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TMsgCellILi131072EEC1Ev>
-lea    -0x400cc(%ebp),%eax
+lea    -0x400d0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TMsgCellILi131072EEC1Ev>
-lea    -0x600e4(%ebp),%eax
+lea    -0x600e8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TMsgCellILi131072EEC1Ev>
-lea    -0x800fc(%ebp),%eax
+lea    -0x80100(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TMsgCellILi131072EEC1Ev>
-lea    -0x200b4(%ebp),%eax
+lea    -0x200b8(%ebp),%eax
 mov    %eax,-0x28(%ebp)
-lea    -0x400cc(%ebp),%eax
+lea    -0x400d0(%ebp),%eax
 mov    %eax,-0x24(%ebp)
-lea    -0x800fc(%ebp),%eax
+lea    -0x80100(%ebp),%eax
 mov    %eax,-0x20(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x1c02704(%eax),%eax
-mov    %eax,-0x2c(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x30(%ebp)
+mov    -0x30(%ebp),%eax
 mov    %eax,-0x3c(%ebp)
 lea    -0x47(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CMsgCelllsEP15tagPacketHeader>
 movl   $0x0,-0x1c(%ebp)
 movl   $0x0,-0x18(%ebp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $"*****************************************************************************************",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
-mov    -0x2c(%ebp),%eax
+mov    -0x3c(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $&data#9f2dddec(.rodata),0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN17ChannelServiceApp14ChannelService21onCS_ASK_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0x657>
+jmp    <T> <_ZN17ChannelServiceApp14ChannelService21onCS_ASK_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0x654>
 movl   $0x0,-0x1c(%ebp)
-lea    -0x5f(%ebp),%eax
-mov    %eax,0x4(%esp)
 lea    -0x64(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11TSerializerI16tServerGroupInfoEC1ERKS0_>
 mov    -0xc(%ebp),%eax
 imul   $0x3804c,%eax,%eax
 add    $0x100,%eax
 add    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK17ChannelServiceApp11ServerGroup14getServerCountEv>
-mov    %eax,-0x4b(%ebp)
-mov    -0x4b(%ebp),%eax
+mov    %eax,-0x50(%ebp)
+mov    -0x50(%ebp),%eax
 test   %eax,%eax
-je     <T> <_ZN17ChannelServiceApp14ChannelService21onCS_ASK_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0x652>
+je     <T> <_ZN17ChannelServiceApp14ChannelService21onCS_ASK_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0x650>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $"*****************************************************************************************",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $"th SG",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
-mov    -0x4b(%ebp),%ebx
+mov    -0x50(%ebp),%ebx
 movl   $"channel count=",0x4(%esp)
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
 mov    -0xc(%ebp),%eax
 imul   $0x3804c,%eax,%eax
 add    $0x100,%eax
 add    0x8(%ebp),%eax
 add    $0x5,%eax
 movl   $0x14,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x5f(%ebp),%eax
+lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strncpy>
+lea    -0x68(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN8CMsgCelllsI16tServerGroupInfoEERS_RK11TSerializerIT_E>
+movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
+call   <T> <_ZN11TDebugTraceIcE4LockEv>
 lea    -0x64(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN8CMsgCelllsI16tServerGroupInfoEERS_RK11TSerializerIT_E>
-movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
-call   <T> <_ZN11TDebugTraceIcE4LockEv>
-lea    -0x5f(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 mov    -0xc(%ebp),%eax
 imul   $0x3804c,%eax,%eax
 add    $0x110,%eax
 add    0x8(%ebp),%eax
 lea    0xc(%eax),%edx
-lea    -0x68(%ebp),%eax
+lea    -0x6c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiPN17ChannelServiceApp11tServerInfoESt4lessIiESaISt4pairIKiS2_EEE5beginEv>
 sub    $0x4,%esp
 jmp    <T> <_ZN17ChannelServiceApp14ChannelService21onCS_ASK_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0x5bf>
-lea    -0x9c(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x6c(%ebp),%eax
+lea    -0xa0(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11TSerializerI12tpServerInfoEC1ERKS0_>
-lea    -0x68(%ebp),%eax
+lea    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEdeEv>
 mov    0x4(%eax),%eax
 add    $0x28,%eax
 mov    %eax,0x4(%esp)
-lea    -0x9c(%ebp),%eax
+lea    -0xa0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcpy>
-lea    -0x68(%ebp),%eax
+lea    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEdeEv>
 mov    0x4(%eax),%eax
 mov    (%eax),%eax
+mov    %eax,-0x8c(%ebp)
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEdeEv>
+mov    0x4(%eax),%eax
+mov    0x4(%eax),%eax
 mov    %eax,-0x88(%ebp)
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEdeEv>
-mov    0x4(%eax),%eax
-mov    0x4(%eax),%eax
-mov    %eax,-0x84(%ebp)
-lea    -0x68(%ebp),%eax
+lea    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEdeEv>
 mov    0x4(%eax),%eax
 add    $0x8,%eax
 mov    %eax,0x4(%esp)
-lea    -0x9c(%ebp),%eax
+lea    -0xa0(%ebp),%eax
 add    $0x1c,%eax
 mov    %eax,(%esp)
 call   <T> <strcpy>
-lea    -0x68(%ebp),%eax
+lea    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEdeEv>
 mov    0x4(%eax),%eax
 mov    0x18(%eax),%eax
-mov    %eax,-0x70(%ebp)
-movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
-call   <T> <_ZN11TDebugTraceIcE4LockEv>
-lea    -0x9c(%ebp),%eax
+mov    %eax,-0x74(%ebp)
+movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
+call   <T> <_ZN11TDebugTraceIcE4LockEv>
+lea    -0xa0(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
-lea    -0x68(%ebp),%eax
+lea    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEdeEv>
 mov    0x4(%eax),%eax
 add    $0x8,%eax
 mov    %eax,%ebx
 movl   $"IP    ",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
-lea    -0x68(%ebp),%eax
+lea    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEdeEv>
 mov    0x4(%eax),%eax
 mov    0x18(%eax),%ebx
 movl   $"POPT  ",0x4(%esp)
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
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
-lea    -0x68(%ebp),%eax
+lea    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEdeEv>
 mov    0x4(%eax),%eax
 mov    (%eax),%ebx
 movl   $"MAX  ",0x4(%esp)
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
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
-lea    -0x68(%ebp),%eax
+lea    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEdeEv>
 mov    0x4(%eax),%eax
 mov    0x4(%eax),%ebx
 movl   $"CUR  ",0x4(%esp)
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
-lea    -0x68(%ebp),%eax
+lea    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEdeEv>
 mov    0x4(%eax),%eax
 mov    0x4(%eax),%eax
 add    %eax,-0x1c(%ebp)
-lea    -0x6c(%ebp),%eax
+lea    -0x70(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CMsgCelllsI12tpServerInfoEERS_RK11TSerializerIT_E>
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
 movl   $0x0,0x8(%esp)
-lea    -0x68(%ebp),%edx
+lea    -0x6c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEppEi>
 sub    $0x4,%esp
 mov    -0xc(%ebp),%eax
 imul   $0x3804c,%eax,%eax
 add    $0x110,%eax
 add    0x8(%ebp),%eax
 lea    0xc(%eax),%edx
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiPN17ChannelServiceApp11tServerInfoESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x34(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x68(%ebp),%eax
+lea    -0x38(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN17ChannelServiceApp11tServerInfoEEEneERKS6_>
 test   %al,%al
 jne    <T> <_ZN17ChannelServiceApp14ChannelService21onCS_ASK_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0x33a>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $" CurrentConnectedUserForGroup = ",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    -0x1c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 mov    -0x1c(%ebp),%eax
 add    %eax,-0x18(%ebp)
-jmp    <T> <_ZN17ChannelServiceApp14ChannelService21onCS_ASK_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0x653>
-nop
 addl   $0x1,-0xc(%ebp)
 cmpl   $0x7f,-0xc(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN17ChannelServiceApp14ChannelService21onCS_ASK_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE+0x185>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $" TotalConnectedUser = ",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    -0x18(%ebp),%edx
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
 movl   $"*****************************************************************************************",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CMsgCell3PADEv>
-lea    -0x600e4(%ebp),%esi
+lea    -0x600e8(%ebp),%ebx
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK8CMsgCell7GetSizeEv>
-sub    $0xb,%eax
-mov    %eax,%ebx
+lea    -0xb(%eax),%esi
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK8CMsgCell6GetBufEv>
 lea    0xb(%eax),%edx
 mov    0x8(%ebp),%eax
 add    $0x1d0275c,%eax
-mov    %esi,0xc(%esp)
-mov    %ebx,0x8(%esp)
+mov    %ebx,0xc(%esp)
+mov    %esi,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp10EncyptTool11wrapEncryptEPciS1_>
 mov    %eax,-0x14(%ebp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK8CMsgCell6GetBufEv>
 movl   $0xb,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CMsgCell12AttachStreamEPci>
-lea    -0x600e4(%ebp),%eax
+lea    -0x600e8(%ebp),%eax
 mov    -0x14(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CMsgCell12AttachStreamEPci>
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CMsgCell3PADEv>
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK8CMsgCell6GetBufEv>
 movl   $0xb,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CMsgCell12AttachStreamEPci>
 mov    -0x14(%ebp),%eax
 add    $0xd,%eax
-mov    %eax,-0x38(%ebp)
+mov    %eax,-0x4c(%ebp)
 mov    -0x14(%ebp),%ebx
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK8CMsgCell6GetBufEv>
 lea    0xb(%eax),%edx
-lea    -0x600e4(%ebp),%eax
+lea    -0x600e8(%ebp),%eax
 movl   $0x1,0x10(%esp)
 mov    %ebx,0xc(%esp)
 mov    %edx,0x8(%esp)
-lea    -0x38(%ebp),%edx
+lea    -0x4c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <compress2>
 mov    %eax,-0x10(%ebp)
-mov    -0x38(%ebp),%eax
+mov    -0x4c(%ebp),%eax
 mov    %eax,%edx
-lea    -0x600e4(%ebp),%eax
+lea    -0x600e8(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CMsgCell12AttachStreamEPci>
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CMsgCell3PADEv>
 mov    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp7TCPUser14onWrite2BufferEP8CMsgCell>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $"Out ",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $"onCS_ASK_CHANNEL_INFO",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 mov    $0x1,%ebx
-lea    -0x800fc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN8TMsgCellILi131072EED1Ev>
-lea    -0x600e4(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN8TMsgCellILi131072EED1Ev>
-lea    -0x400cc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN8TMsgCellILi131072EED1Ev>
-lea    -0x200b4(%ebp),%eax
+lea    -0x80100(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN8TMsgCellILi131072EED1Ev>
+lea    -0x600e8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN8TMsgCellILi131072EED1Ev>
+lea    -0x400d0(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN8TMsgCellILi131072EED1Ev>
+lea    -0x200b8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TMsgCellILi131072EED1Ev>
 mov    %ebx,%eax
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x800fc(%ebp),%eax
+lea    -0x80100(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TMsgCellILi131072EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x600e4(%ebp),%eax
+lea    -0x600e8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TMsgCellILi131072EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x400cc(%ebp),%eax
+lea    -0x400d0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TMsgCellILi131072EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x200b4(%ebp),%eax
+lea    -0x200b8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TMsgCellILi131072EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: DWORD onCS_ASK_CHANNEL_INFO(ChannelService * this, LPPACKET_HEADER
   pPCK, TCPUser * u) */

DWORD __thiscall
ChannelServiceApp::ChannelService::
_ZN17ChannelServiceApp14ChannelService21onCS_ASK_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE
          (ChannelService *this,LPPACKET_HEADER pPCK,TCPUser *u)

{
  tServerInfo *ptVar1;
  bool bVar2;
  TDebugTrace<char> *pTVar3;
  pair<const_int,_ChannelServiceApp::tServerInfo*> *ppVar4;
  int iVar5;
  LPBYTE puVar6;
  code *__in_chrg;
  TMsgCell<131072> TStack_80100;
  TMsgCell<131072> TStack_600e8;
  TMsgCell<131072> TStack_400d0;
  TMsgCell<131072> TStack_200b8;
  tpServerInfo local_a0;
  TSerializer<tpServerInfo> local_70;
  undefined1 local_6c [29];
  int local_4f;
  tagSC_ASK_CHANNEL_INFO local_4b;
  int local_3c;
  map<int,_ChannelServiceApp::tServerInfo*,_std::less<int>,_std::allocator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>_>
  local_38;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  
                    /* Unresolved local var: int ServerGroupNum@[???]
                       Unresolved local var: uint CompressLen@[???]
                       Unresolved local var: PCK_SC_ASK_CHANNEL_INFO pck@[???]
                       Unresolved local var: CMsgCell * pMsg@[???]
                       Unresolved local var: MSGCELL128K buffer@[???]
                       Unresolved local var: CMsgCell * encMsg@[???]
                       Unresolved local var: MSGCELL128K encbuffer@[???]
                       Unresolved local var: MSGCELL128K tmpbuffer@[???]
                       Unresolved local var: CMsgCell * zipMsg@[???]
                       Unresolved local var: MSGCELL128K zipbuffer@[???]
                       Unresolved local var: int CurrentConnectedUserForGroup@[???]
                       Unresolved local var: int TotalConnectedUser@[???]
                       Unresolved local var: int enc_len@[???]
                       Unresolved local var: int ttt@[???] */
  TDebugTrace<char>::Lock(&gFileLogInfo);
  pTVar3 = TDebugTrace<char>::operator<<(&gFileLogInfo,"In  ");
  pTVar3 = TDebugTrace<char>::operator<<(pTVar3,"onCS_ASK_CHANNEL_INFO");
  TDebugTrace<char>::operator<<(pTVar3,endl<char>);
  TDebugTrace<char>::Unlock(&gFileLogInfo);
  tagSC_ASK_CHANNEL_INFO::tagSC_ASK_CHANNEL_INFO(&local_4b);
  tagPacketHeader::setAckOk(&local_4b.super_tagPacketHeader);
  TMsgCell<131072>::TMsgCell(&TStack_200b8);
  TMsgCell<131072>::TMsgCell(&TStack_400d0);
  TMsgCell<131072>::TMsgCell(&TStack_600e8);
  TMsgCell<131072>::TMsgCell(&TStack_80100);
  local_38._M_t._M_impl._M_header._M_left = (_Base_ptr)&TStack_200b8;
  local_38._M_t._M_impl._M_header._M_right = (_Base_ptr)&TStack_400d0;
  local_38._M_t._M_impl._M_node_count = (size_t)&TStack_80100;
  local_4b.server_group_count = (this->super_Channel).ServerGroupCount;
  local_38._M_t._M_impl._M_header._M_parent = (_Base_ptr)local_4b.server_group_count;
  CMsgCell::operator<<
            ((CMsgCell *)local_38._M_t._M_impl._M_header._M_left,&local_4b.super_tagPacketHeader);
  local_20 = 0;
  local_1c = 0;
                    /* try { // try from 0804ef5d to 0804f6d2 has its CatchHandler @ 0804f71c */
  TDebugTrace<char>::Lock(&gFileLogInfo);
  pTVar3 = TDebugTrace<char>::operator<<
                     (&gFileLogInfo,
                      "*****************************************************************************************"
                     );
  TDebugTrace<char>::operator<<(pTVar3,endl<char>);
  TDebugTrace<char>::Unlock(&gFileLogInfo);
  TDebugTrace<char>::Lock(&gFileLogInfo);
  pTVar3 = TDebugTrace<char>::operator<<
                     (&gFileLogInfo,(int)local_38._M_t._M_impl._M_header._M_parent);
  pTVar3 = TDebugTrace<char>::operator<<(pTVar3,&DAT_0806d30e);
  TDebugTrace<char>::operator<<(pTVar3,endl<char>);
  TDebugTrace<char>::Unlock(&gFileLogInfo);
                    /* Unresolved local var: int i@[???] */
  for (local_10 = 0; local_10 < 0x80; local_10 = local_10 + 1) {
                    /* Unresolved local var: tServerGroupInfo ServerGroupInfo@[???]
                       Unresolved local var: TSerializer<tServerGroupInfo> Ginfo@[???] */
    local_20 = 0;
    TSerializer<tServerGroupInfo>::TSerializer
              ((TSerializer<tServerGroupInfo> *)(local_6c + 4),(tServerGroupInfo *)(local_6c + 9));
    local_4f = ServerGroup::getServerCount((this->super_Channel).Servers + local_10);
    if (local_4f != 0) {
      TDebugTrace<char>::Lock(&gFileLogInfo);
      pTVar3 = TDebugTrace<char>::operator<<
                         (&gFileLogInfo,
                          "*****************************************************************************************"
                         );
      TDebugTrace<char>::operator<<(pTVar3,endl<char>);
      TDebugTrace<char>::Unlock(&gFileLogInfo);
      TDebugTrace<char>::Lock(&gFileLogInfo);
      pTVar3 = TDebugTrace<char>::operator<<(&gFileLogInfo,local_10);
      pTVar3 = TDebugTrace<char>::operator<<(pTVar3,"th SG");
      TDebugTrace<char>::operator<<(pTVar3,endl<char>);
      TDebugTrace<char>::Unlock(&gFileLogInfo);
      TDebugTrace<char>::Lock(&gFileLogInfo);
      iVar5 = local_4f;
      pTVar3 = TDebugTrace<char>::operator<<(&gFileLogInfo,"channel count=");
      pTVar3 = TDebugTrace<char>::operator<<(pTVar3,iVar5);
      TDebugTrace<char>::operator<<(pTVar3,endl<char>);
      TDebugTrace<char>::Unlock(&gFileLogInfo);
      strncpy(local_6c + 9,(this->super_Channel).Servers[local_10].ServerName,0x14);
      CMsgCell::operator<<_<tServerGroupInfo>
                ((CMsgCell *)local_38._M_t._M_impl._M_header._M_left,
                 (TSerializer<tServerGroupInfo> *)(local_6c + 4));
      TDebugTrace<char>::Lock(&gFileLogInfo);
      pTVar3 = TDebugTrace<char>::operator<<(&gFileLogInfo,local_6c + 9);
      TDebugTrace<char>::operator<<(pTVar3,endl<char>);
      TDebugTrace<char>::Unlock(&gFileLogInfo);
                    /* Unresolved local var:
                       _Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>
                       it@[???] */
      std::
      map<int,_ChannelServiceApp::tServerInfo*,_std::less<int>,_std::allocator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>_>
      ::begin((map<int,_ChannelServiceApp::tServerInfo*,_std::less<int>,_std::allocator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>_>
               *)local_6c);
      while( true ) {
        std::
        map<int,_ChannelServiceApp::tServerInfo*,_std::less<int>,_std::allocator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>_>
        ::end(&local_38);
        bVar2 = std::_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>::
                operator!=((_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>
                            *)local_6c,
                           (_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>
                            *)&local_38);
        if (!bVar2) break;
                    /* Unresolved local var: tpServerInfo _ServerInfo@[???]
                       Unresolved local var: TSerializer<tpServerInfo> Sinfo@[???] */
        TSerializer<tpServerInfo>::TSerializer(&local_70,&local_a0);
        ppVar4 = std::_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>::
                 operator*((_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>
                            *)local_6c);
        strcpy(local_a0.channel_name,ppVar4->second->ChannelName);
        ppVar4 = std::_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>::
                 operator*((_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>
                            *)local_6c);
        local_a0.max_user_num = ppVar4->second->nMaxUserCount_;
        ppVar4 = std::_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>::
                 operator*((_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>
                            *)local_6c);
        local_a0.cur_user_num = ppVar4->second->nCurrentUserCount_;
        ppVar4 = std::_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>::
                 operator*((_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>
                            *)local_6c);
        strcpy(local_a0.server_ip,ppVar4->second->IP);
        ppVar4 = std::_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>::
                 operator*((_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>
                            *)local_6c);
        local_a0.port = ppVar4->second->port;
        TDebugTrace<char>::Lock(&gFileLogInfo);
        pTVar3 = TDebugTrace<char>::operator<<(&gFileLogInfo,local_a0.channel_name);
        TDebugTrace<char>::operator<<(pTVar3,endl<char>);
        TDebugTrace<char>::Unlock(&gFileLogInfo);
        TDebugTrace<char>::Lock(&gFileLogInfo);
        ppVar4 = std::_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>::
                 operator*((_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>
                            *)local_6c);
        ptVar1 = ppVar4->second;
        pTVar3 = TDebugTrace<char>::operator<<(&gFileLogInfo,"IP    ");
        pTVar3 = TDebugTrace<char>::operator<<(pTVar3,ptVar1->IP);
        TDebugTrace<char>::operator<<(pTVar3,endl<char>);
        TDebugTrace<char>::Unlock(&gFileLogInfo);
        TDebugTrace<char>::Lock(&gFileLogInfo);
        ppVar4 = std::_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>::
                 operator*((_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>
                            *)local_6c);
        iVar5 = ppVar4->second->port;
        pTVar3 = TDebugTrace<char>::operator<<(&gFileLogInfo,"POPT  ");
        pTVar3 = TDebugTrace<char>::operator<<(pTVar3,iVar5);
        TDebugTrace<char>::operator<<(pTVar3,endl<char>);
        TDebugTrace<char>::Unlock(&gFileLogInfo);
        TDebugTrace<char>::Lock(&gFileLogInfo);
        ppVar4 = std::_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>::
                 operator*((_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>
                            *)local_6c);
        iVar5 = ppVar4->second->nMaxUserCount_;
        pTVar3 = TDebugTrace<char>::operator<<(&gFileLogInfo,"MAX  ");
        pTVar3 = TDebugTrace<char>::operator<<(pTVar3,iVar5);
        TDebugTrace<char>::operator<<(pTVar3,endl<char>);
        TDebugTrace<char>::Unlock(&gFileLogInfo);
        TDebugTrace<char>::Lock(&gFileLogInfo);
        ppVar4 = std::_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>::
                 operator*((_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>
                            *)local_6c);
        iVar5 = ppVar4->second->nCurrentUserCount_;
        pTVar3 = TDebugTrace<char>::operator<<(&gFileLogInfo,"CUR  ");
        pTVar3 = TDebugTrace<char>::operator<<(pTVar3,iVar5);
        TDebugTrace<char>::operator<<(pTVar3,endl<char>);
        TDebugTrace<char>::Unlock(&gFileLogInfo);
        ppVar4 = std::_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>::
                 operator*((_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>
                            *)local_6c);
        local_20 = local_20 + ppVar4->second->nCurrentUserCount_;
        CMsgCell::operator<<_<tpServerInfo>
                  ((CMsgCell *)local_38._M_t._M_impl._M_header._M_left,&local_70);
        std::_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_>::operator++
                  ((_Rb_tree_iterator<std::pair<const_int,_ChannelServiceApp::tServerInfo*>_> *)
                   &local_38._M_t._M_impl._M_header,(int)local_6c);
      }
      TDebugTrace<char>::Lock(&gFileLogInfo);
      pTVar3 = TDebugTrace<char>::operator<<(&gFileLogInfo," CurrentConnectedUserForGroup = ");
      pTVar3 = TDebugTrace<char>::operator<<(pTVar3,local_20);
      TDebugTrace<char>::operator<<(pTVar3,endl<char>);
      TDebugTrace<char>::Unlock(&gFileLogInfo);
      local_1c = local_1c + local_20;
    }
  }
  TDebugTrace<char>::Lock(&gFileLogInfo);
  pTVar3 = TDebugTrace<char>::operator<<(&gFileLogInfo," TotalConnectedUser = ");
  pTVar3 = TDebugTrace<char>::operator<<(pTVar3,local_1c);
  TDebugTrace<char>::operator<<(pTVar3,endl<char>);
  TDebugTrace<char>::Unlock(&gFileLogInfo);
  TDebugTrace<char>::Lock(&gFileLogInfo);
  pTVar3 = TDebugTrace<char>::operator<<
                     (&gFileLogInfo,
                      "*****************************************************************************************"
                     );
  TDebugTrace<char>::operator<<(pTVar3,endl<char>);
  TDebugTrace<char>::Unlock(&gFileLogInfo);
  CMsgCell::PAD((CMsgCell *)local_38._M_t._M_impl._M_header._M_left);
  iVar5 = CMsgCell::GetSize((CMsgCell *)local_38._M_t._M_impl._M_header._M_left);
  puVar6 = CMsgCell::GetBuf((CMsgCell *)local_38._M_t._M_impl._M_header._M_left);
  local_18 = EncyptTool::wrapEncrypt
                       (&this->super_EncyptTool,(char *)(puVar6 + 0xb),iVar5 + -0xb,
                        (char *)&TStack_600e8);
  puVar6 = CMsgCell::GetBuf((CMsgCell *)local_38._M_t._M_impl._M_header._M_left);
  CMsgCell::AttachStream((CMsgCell *)local_38._M_t._M_impl._M_header._M_right,(char *)puVar6,0xb);
  CMsgCell::AttachStream
            ((CMsgCell *)local_38._M_t._M_impl._M_header._M_right,(char *)&TStack_600e8,local_18);
  CMsgCell::PAD((CMsgCell *)local_38._M_t._M_impl._M_header._M_right);
  puVar6 = CMsgCell::GetBuf((CMsgCell *)local_38._M_t._M_impl._M_header._M_left);
  CMsgCell::AttachStream((CMsgCell *)local_38._M_t._M_impl._M_node_count,(char *)puVar6,0xb);
  iVar5 = local_18;
  local_3c = local_18 + 0xd;
  puVar6 = CMsgCell::GetBuf((CMsgCell *)local_38._M_t._M_impl._M_header._M_right);
  local_14 = compress2(&TStack_600e8,&local_3c,puVar6 + 0xb,iVar5,1);
  CMsgCell::AttachStream
            ((CMsgCell *)local_38._M_t._M_impl._M_node_count,(char *)&TStack_600e8,local_3c);
  CMsgCell::PAD((CMsgCell *)local_38._M_t._M_impl._M_node_count);
  TCPUser::onWrite2Buffer(u,(CMsgCell *)local_38._M_t._M_impl._M_node_count);
  TDebugTrace<char>::Lock(&gFileLogInfo);
  pTVar3 = TDebugTrace<char>::operator<<(&gFileLogInfo,"Out ");
  pTVar3 = TDebugTrace<char>::operator<<(pTVar3,"onCS_ASK_CHANNEL_INFO");
  __in_chrg = endl<char>;
  TDebugTrace<char>::operator<<(pTVar3,endl<char>);
  TDebugTrace<char>::Unlock(&gFileLogInfo);
  TMsgCell<131072>::~TMsgCell(&TStack_80100,(int)__in_chrg);
  TMsgCell<131072>::~TMsgCell(&TStack_600e8,(int)__in_chrg);
  TMsgCell<131072>::~TMsgCell(&TStack_400d0,(int)__in_chrg);
  TMsgCell<131072>::~TMsgCell(&TStack_200b8,(int)__in_chrg);
  return 1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/ChannelOld/DNFChannelBridge/ChannelService.cpp, source/ChannelOld/DNFChannelServer/ChannelService.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h 等 288 个文件*

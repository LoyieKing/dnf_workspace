# _ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader

`CPacketTranslater::OnRequestIPCounterList(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x809b958` | `0x599` | `0x80d81bc` | `0x577` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,373 +1,363 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0xeb0,%esp
 lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorI18st_ip_counter_listSaIS0_EEC1Ev>
 lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorI23st_full_ip_counter_listSaIS0_EEC1Ev>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x34>
 mov    $0x0,%ebx
-jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x55c>
+jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x53a>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x34(%ebp)
 mov    -0x34(%ebp),%eax
 movzbl 0xa(%eax),%eax
 movzbl %al,%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 lea    0x50(%edx),%ecx
 lea    -0x74(%ebp),%edx
 mov    %edx,0xc(%esp)
 lea    -0x68(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN10CDBManager14QueryIPCounterEhRSt6vectorI18st_ip_counter_listSaIS1_EERS0_I23st_full_ip_counter_listSaIS5_EE>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0xae>
 movl   $0xb8a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnRequestIPCounterList insert fail\n",0x8(%esp)
 movl   $"./log/Secu",0x4(%esp)
 lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%ebx
-jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x55c>
+jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x53a>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetMonitorServerEv>
 mov    %eax,-0x30(%ebp)
 lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorI18st_ip_counter_listSaIS0_EE5emptyEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x24b>
+je     <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x23f>
 lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorI18st_ip_counter_listSaIS0_EE4sizeEv>
 mov    %eax,-0x2c(%ebp)
 movl   $0x0,-0x28(%ebp)
 movl   $0x0,-0x24(%ebp)
-jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0xf6>
-nop
+jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x22c>
 lea    -0xe90(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN29Packet_Response_IPCounterListC1Ev>
 movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x10e>
-nop
-mov    -0x24(%ebp),%eax
-addl   $0x1,-0x24(%ebp)
+jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x150>
+mov    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorI18st_ip_counter_listSaIS0_EEixEj>
 mov    %eax,%ecx
+lea    -0xe90(%ebp),%ebx
 mov    -0x20(%ebp),%edx
-lea    -0xe90(%ebp),%ebx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x2,%eax
+add    $0xc,%eax
 lea    (%ebx,%eax,1),%eax
-add    $0xc,%eax
+mov    %ecx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN18st_ip_counter_list10CopyStructERKS_>
+addl   $0x1,-0x28(%ebp)
 addl   $0x1,-0x20(%ebp)
-mov    %ecx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN18st_ip_counter_list10CopyStructERKS_>
 cmpl   $0x95,-0x20(%ebp)
-jg     <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x160>
-mov    -0x24(%ebp),%eax
+jg     <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x168>
+mov    -0x28(%ebp),%eax
 cmp    -0x2c(%ebp),%eax
-jl     <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x10d>
+jge    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x168>
+mov    $0x1,%eax
+jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x16d>
+mov    $0x0,%eax
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x10f>
 mov    -0x20(%ebp),%eax
 mov    %al,-0xe85(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-jne    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x178>
+cmpl   $0x0,-0x24(%ebp)
+jne    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x189>
 movb   $0x0,-0xe86(%ebp)
-jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x190>
-mov    -0x24(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x1a1>
+mov    -0x28(%ebp),%eax
 cmp    -0x2c(%ebp),%eax
-jl     <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x189>
+jl     <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x19a>
 movb   $0x2,-0xe86(%ebp)
-jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x190>
+jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x1a1>
 movb   $0x1,-0xe86(%ebp)
-movzbl -0xe85(%ebp),%eax
-movzbl %al,%eax
-mov    $0x96,%edx
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x2,%eax
-mov    $0xbc4,%edx
-mov    %edx,%ecx
-sub    %ax,%cx
-mov    %ecx,%eax
+add    $0xc,%eax
 mov    %ax,-0xe8e(%ebp)
 movzwl -0xe8e(%ebp),%eax
 movzwl %ax,%edx
 lea    -0xe90(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer12SendToServerEPci>
-movzbl -0xe85(%ebp),%eax
-movzbl %al,%esi
 movzbl -0xe86(%ebp),%eax
-movzbl %al,%ebx
+movsbl %al,%ebx
 movl   $0xbab,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"[IP Counter] Packet Send - Stats : %3d, Cnt : %3d",0x8(%esp)
 movl   $"./log/Secu",0x4(%esp)
 lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-addl   $0x1,-0x28(%ebp)
-mov    -0x24(%ebp),%eax
+addl   $0x1,-0x24(%ebp)
+mov    -0x28(%ebp),%eax
 cmp    -0x2c(%ebp),%eax
-jl     <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0xf5>
-jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x285>
+setl   %al
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0xf8>
+jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x279>
 lea    -0xe90(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN29Packet_Response_IPCounterListC1Ev>
 movw   $0xc,-0xe8e(%ebp)
 movzwl -0xe8e(%ebp),%eax
 movzwl %ax,%edx
 lea    -0xe90(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer12SendToServerEPci>
 lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorI23st_full_ip_counter_listSaIS0_EE5emptyEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x2a9>
+je     <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x29d>
 mov    -0x34(%ebp),%eax
 movzbl 0xb(%eax),%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x2a9>
+je     <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x29d>
 mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x2ae>
+jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x2a2>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x42b>
+je     <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x410>
 lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorI23st_full_ip_counter_listSaIS0_EE4sizeEv>
 mov    %eax,-0x1c(%ebp)
 movl   $0x0,-0x18(%ebp)
 movl   $0x0,-0x14(%ebp)
-jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x2d5>
-nop
+jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x3fd>
 lea    -0xe90(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN31Packet_Response_D_IPCounterListC1Ev>
 movl   $0x0,-0x10(%ebp)
-jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x2ed>
-nop
-mov    -0x14(%ebp),%eax
-addl   $0x1,-0x14(%ebp)
+jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x322>
+mov    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorI23st_full_ip_counter_listSaIS0_EEixEj>
 mov    %eax,%ecx
+lea    -0xe90(%ebp),%ebx
 mov    -0x10(%ebp),%edx
-lea    -0xe90(%ebp),%ebx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x3,%eax
+add    $0xc,%eax
 lea    (%ebx,%eax,1),%eax
-add    $0xc,%eax
+mov    %ecx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN23st_full_ip_counter_list10CopyStructERKS_>
+addl   $0x1,-0x18(%ebp)
 addl   $0x1,-0x10(%ebp)
-mov    %ecx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN23st_full_ip_counter_list10CopyStructERKS_>
 cmpl   $0x95,-0x10(%ebp)
-jg     <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x33e>
-mov    -0x14(%ebp),%eax
+jg     <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x33a>
+mov    -0x18(%ebp),%eax
 cmp    -0x1c(%ebp),%eax
-jl     <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x2ec>
+jge    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x33a>
+mov    $0x1,%eax
+jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x33f>
+mov    $0x0,%eax
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x2e2>
 mov    -0x10(%ebp),%eax
 mov    %al,-0xe85(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-jne    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x356>
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x35b>
 movb   $0x0,-0xe86(%ebp)
-jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x36e>
-mov    -0x14(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x373>
+mov    -0x18(%ebp),%eax
 cmp    -0x1c(%ebp),%eax
-jl     <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x367>
+jl     <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x36c>
 movb   $0x2,-0xe86(%ebp)
-jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x36e>
+jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x373>
 movb   $0x1,-0xe86(%ebp)
-movzbl -0xe85(%ebp),%eax
-movzbl %al,%eax
-mov    $0x96,%edx
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x3,%eax
-mov    $0xe1c,%edx
-mov    %edx,%ecx
-sub    %ax,%cx
-mov    %ecx,%eax
+add    $0xc,%eax
 mov    %ax,-0xe8e(%ebp)
 movzwl -0xe8e(%ebp),%eax
 movzwl %ax,%edx
 lea    -0xe90(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer12SendToServerEPci>
-movzbl -0xe85(%ebp),%eax
-movzbl %al,%esi
 movzbl -0xe86(%ebp),%eax
-movzbl %al,%ebx
+movsbl %al,%ebx
 movl   $0xbd8,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"[D_IP Counter] Packet Send - Stats : %3d, Cnt : %3d",0x8(%esp)
 movl   $"./log/Secu",0x4(%esp)
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-addl   $0x1,-0x18(%ebp)
-mov    -0x14(%ebp),%eax
+addl   $0x1,-0x14(%ebp)
+mov    -0x18(%ebp),%eax
 cmp    -0x1c(%ebp),%eax
-jl     <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x2d4>
-jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x540>
+setl   %al
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x2cb>
+jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x44a>
 lea    -0xe90(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN31Packet_Response_D_IPCounterListC1Ev>
 movw   $0xc,-0xe8e(%ebp)
 movzwl -0xe8e(%ebp),%eax
 movzwl %ax,%edx
 lea    -0xe90(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x540>
+mov    $0x0,%ebx
+jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x53a>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x4e5>
+jne    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x4ca>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0xbe9,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnRequestIPCounterList Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x4d9>
+jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x4c3>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x547>
+jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x525>
 call   <T> <__cxa_end_catch>
-mov    $0x0,%ebx
-jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x55c>
+jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x51e>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xbee,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnRequestIPCounterList Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x534>
+jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x519>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x547>
+jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x525>
 call   <T> <__cxa_end_catch>
-mov    $0x0,%ebx
-jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x55c>
 mov    $0x1,%ebx
-jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x55c>
+jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x53a>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorI23st_full_ip_counter_listSaIS0_EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x57e>
+jmp    <T> <_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader+0x55c>
 lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorI23st_full_ip_counter_listSaIS0_EED1Ev>
 test   %ebx,%ebx
 lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorI18st_ip_counter_listSaIS0_EED1Ev>
 add    $0xeb0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorI18st_ip_counter_listSaIS0_EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnRequestIPCounterList(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader
               (PacketHeader *param_1)

{
  bool bVar1;
  char cVar2;
  st_ip_counter_list *psVar3;
  int iVar4;
  st_full_ip_counter_list *psVar5;
  uint uVar6;
  uint uVar7;
  Packet_Response_IPCounterList local_e94 [2];
  ushort local_e92;
  byte local_e8a;
  byte local_e89;
  st_ip_counter_list asStack_e88 [3600];
  vector<st_full_ip_counter_list,std::allocator<st_full_ip_counter_list>> local_78 [12];
  vector<st_ip_counter_list,std::allocator<st_ip_counter_list>> local_6c [12];
  CMyFileLog local_60 [8];
  CMyFileLog local_58 [8];
  CMyFileLog local_50 [24];
  PacketHeader *local_38;
  CMonitorServer *local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  
  std::vector<st_ip_counter_list,std::allocator<st_ip_counter_list>>::vector(local_6c);
                    /* try { // try from 0809b974 to 0809b978 has its CatchHandler @ 0809bed6 */
  std::vector<st_full_ip_counter_list,std::allocator<st_full_ip_counter_list>>::vector(local_78);
  if (m_pclApp != 0) {
    local_38 = param_1;
                    /* try { // try from 0809b9ba to 0809bdbc has its CatchHandler @ 0809bdc2 */
    cVar2 = CDBManager::QueryIPCounter
                      ((CDBManager *)(m_pclApp + 0x50),(uchar)param_1[10],(vector *)local_6c,
                       (vector *)local_78);
    if (cVar2 == '\x01') {
      local_34 = (CMonitorServer *)
                 CServerHandler::GetMonitorServer(*(CServerHandler **)(m_pclApp + 0x18));
      cVar2 = std::vector<st_ip_counter_list,std::allocator<st_ip_counter_list>>::empty();
      if (cVar2 == '\x01') {
        Packet_Response_IPCounterList::Packet_Response_IPCounterList(local_e94);
        local_e92 = 0xc;
        CMonitorServer::SendToServer(local_34,(char *)local_e94,0xc);
      }
      else {
        local_30 = std::vector<st_ip_counter_list,std::allocator<st_ip_counter_list>>::size
                             (local_6c);
        local_2c = 0;
        local_28 = 0;
        do {
          Packet_Response_IPCounterList::Packet_Response_IPCounterList(local_e94);
          local_24 = 0;
          do {
            uVar6 = local_28;
            local_28 = local_28 + 1;
            psVar3 = (st_ip_counter_list *)
                     std::vector<st_ip_counter_list,std::allocator<st_ip_counter_list>>::operator[]
                               (local_6c,uVar6);
            iVar4 = local_24 * 0x14;
            local_24 = local_24 + 1;
            st_ip_counter_list::CopyStruct(asStack_e88 + iVar4,psVar3);
            if (0x95 < local_24) break;
          } while ((int)local_28 < local_30);
          local_e89 = (byte)local_24;
          if (local_2c == 0) {
            local_e8a = 0;
          }
          else if ((int)local_28 < local_30) {
            local_e8a = 1;
          }
          else {
            local_e8a = 2;
          }
          local_e92 = (0x96 - ((ushort)local_24 & 0xff)) * -0x14 + 0xbc4;
          CMonitorServer::SendToServer(local_34,(char *)local_e94,(uint)local_e92);
          uVar7 = (uint)local_e89;
          uVar6 = (uint)local_e8a;
          CMyFileLog::CMyFileLog(local_58,"OnRequestIPCounterList",0xbab);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_58,"./log/Secu","[IP Counter] Packet Send - Stats : %3d, Cnt : %3d",uVar6
                     ,uVar7);
          local_2c = local_2c + 1;
        } while ((int)local_28 < local_30);
      }
      cVar2 = std::vector<st_full_ip_counter_list,std::allocator<st_full_ip_counter_list>>::empty();
      if ((cVar2 == '\x01') || (local_38[0xb] == (PacketHeader)0x0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_20 = std::vector<st_full_ip_counter_list,std::allocator<st_full_ip_counter_list>>::
                   size(local_78);
        local_1c = 0;
        local_18 = 0;
        do {
          Packet_Response_D_IPCounterList::Packet_Response_D_IPCounterList
                    ((Packet_Response_D_IPCounterList *)local_e94);
          local_14 = 0;
          do {
            uVar6 = local_18;
            local_18 = local_18 + 1;
            psVar5 = (st_full_ip_counter_list *)
                     std::vector<st_full_ip_counter_list,std::allocator<st_full_ip_counter_list>>::
                     operator[](local_78,uVar6);
            iVar4 = local_14 * 0x18;
            local_14 = local_14 + 1;
            st_full_ip_counter_list::CopyStruct
                      ((st_full_ip_counter_list *)(asStack_e88 + iVar4),psVar5);
            if (0x95 < local_14) break;
          } while ((int)local_18 < local_20);
          local_e89 = (byte)local_14;
          if (local_1c == 0) {
            local_e8a = 0;
          }
          else if ((int)local_18 < local_20) {
            local_e8a = 1;
          }
          else {
            local_e8a = 2;
          }
          local_e92 = (0x96 - (ushort)local_e89) * -0x18 + 0xe1c;
          CMonitorServer::SendToServer(local_34,(char *)local_e94,(uint)local_e92);
          uVar7 = (uint)local_e89;
          uVar6 = (uint)local_e8a;
          CMyFileLog::CMyFileLog(local_50,"OnRequestIPCounterList",0xbd8);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_50,"./log/Secu","[D_IP Counter] Packet Send - Stats : %3d, Cnt : %3d",
                     uVar6,uVar7);
          local_1c = local_1c + 1;
        } while ((int)local_18 < local_20);
      }
      else {
        Packet_Response_D_IPCounterList::Packet_Response_D_IPCounterList
                  ((Packet_Response_D_IPCounterList *)local_e94);
        local_e92 = 0xc;
        CMonitorServer::SendToServer(local_34,(char *)local_e94,0xc);
      }
    }
    else {
      CMyFileLog::CMyFileLog(local_60,"OnRequestIPCounterList",0xb8a);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_60,"./log/Secu","CPacketTranslater::OnRequestIPCounterList insert fail\n");
    }
  }
                    /* try { // try from 0809beba to 0809bebe has its CatchHandler @ 0809bed6 */
  std::vector<st_full_ip_counter_list,std::allocator<st_full_ip_counter_list>>::~vector(local_78);
  std::vector<st_ip_counter_list,std::allocator<st_ip_counter_list>>::~vector(local_6c);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 2096 行）：

```cpp
void CPacketTranslater::OnRequestIPCounterList(PacketHeader* header)
{
    std::vector<st_ip_counter_list> vec1;
    std::vector<st_full_ip_counter_list> vec2;
    if (!m_pclApp)
        return;
    try
    {
        Packet_DBMW_Request_IPCounter_List* pkt =
            (Packet_DBMW_Request_IPCounter_List*)header;
        if (!m_pclApp->m_dbManager.QueryIPCounter(
                pkt->m_serverGroup, vec1, vec2))
        {
            DNF_LOG_SCOPE_LINE(0xb8a,
                "./log/Secu",
                "CPacketTranslater::OnRequestIPCounterList insert fail\n"
            );

            return;
        }
        CMonitorServer* ms = m_pclApp->m_serverHandler->GetMonitorServer();
        if (!vec1.empty())
        {
            int size = vec1.size();
            int srcIdx = 0;
            int batch = 0;
            while (srcIdx < size)
            {
                Packet_Response_IPCounterList reply;
                int count = 0;
                while (count <= 0x95 && srcIdx < size)
                {
                    (*(st_ip_counter_list*)((char*)&reply + 0xc + count * 0x14))
                        .CopyStruct(vec1[srcIdx]);
                    srcIdx++;
                    count++;
                }
                reply.m_fieldB = (char)count;
                if (batch == 0)
                    reply.m_fieldA = 0;
                else if (srcIdx >= size)
                    reply.m_fieldA = 2;
                else
                    reply.m_fieldA = 1;
                reply.packetSize =
                    (unsigned short)(0xbc4 - (0x96 - count) * 0x14);
                ms->SendToServer((char*)&reply, reply.packetSize);
                DNF_LOG_SCOPE_LINE(0xbab,
                    "./log/Secu",
                    "[IP Counter] Packet Send - Stats : %3d, Cnt : %3d", (int)reply.m_fieldA,
                    count
                );

                batch++;
            }
        }
        else
        {
            Packet_Response_IPCounterList reply;
            reply.packetSize = 0xc;
            ms->SendToServer((char*)&reply, reply.packetSize);
        }
        if (!vec2.empty() && pkt->m_fieldB != 0)
        {
            int size = vec2.size();
            int srcIdx = 0;
            int batch = 0;
            while (srcIdx < size)
            {
                Packet_Response_D_IPCounterList reply;
                int count = 0;
                while (count <= 0x95 && srcIdx < size)
                {
                    (*(st_full_ip_counter_list*)((char*)&reply + 0xc +
                                                 count * 0x18))
                        .CopyStruct(vec2[srcIdx]);
                    srcIdx++;
                    count++;
                }
                reply.m_fieldB = (char)count;
                if (batch == 0)
                    reply.m_fieldA = 0;
                else if (srcIdx >= size)
                    reply.m_fieldA = 2;
                else
                    reply.m_fieldA = 1;
                reply.packetSize =
                    (unsigned short)(0xe1c - (0x96 - count) * 0x18);
                ms->SendToServer((char*)&reply, reply.packetSize);
                DNF_LOG_SCOPE_LINE(0xbd8,
                    "./log/Secu",
                    "[D_IP Counter] Packet Send - Stats : %3d, Cnt : %3d", (int)reply.m_fieldA,
                    count
                );

                batch++;
            }
        }
        else
        {
            Packet_Response_D_IPCounterList reply;
            reply.packetSize = 0xc;
            ms->SendToServer((char*)&reply, reply.packetSize);
        }
        return;
    }
    DNF_CATCH_LOG("./log/Except",
                  "CPacketTranslater::OnRequestIPCounterList Exception Break",
                  0xbe9, 0xbee);
}
```

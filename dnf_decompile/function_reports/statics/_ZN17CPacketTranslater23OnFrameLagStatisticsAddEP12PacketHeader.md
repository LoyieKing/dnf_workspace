# _ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader

`CPacketTranslater::OnFrameLagStatisticsAdd(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x805a69c` | `0x9b2` | `0x805512e` | `0x9c7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,548 +1,582 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x13c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0xfa>
-lea    -0xf1(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0xe2>
+lea    -0x4d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0xf1(%ebp),%eax
+lea    -0x4d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnFrameLagStatisticsAdd() : 0 == m_pclApp",0x4(%esp)
-lea    -0xf8(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0xf8(%ebp),%esi
+lea    -0x54(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x9f>
+jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x90>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0xf8(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x99>
+jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x8a>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0xb9>
+jne    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0xa7>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0xb9>
-lea    -0xf8(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0xa7>
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0xd4>
+jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0xbf>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0xb9>
+jne    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0xa7>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0xf1(%ebp),%eax
+lea    -0x4d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x8d1>
-lea    -0xf1(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x8da>
+lea    -0x4d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication21Get_FrameLagCollectorEv>
+mov    %eax,-0x4c(%ebp)
 mov    0x8(%ebp),%eax
+mov    %eax,-0x48(%ebp)
+movl   $0x0,0x4(%esp)
+movl   $"./SHOW_PACKET",(%esp)
+call   <T> <access>
+test   %eax,%eax
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x8a1>
+movl   $0x124,0x8(%esp)
+movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x48(%ebp),%eax
+add    $0x2,%eax
+movzwl (%eax),%eax
+movzwl %ax,%eax
+mov    %eax,0xc(%esp)
+movl   $"packet->m_wSize\t\t: %hu",0x8(%esp)
+movl   $"./log/FrameLag.log",0x4(%esp)
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x125,0x8(%esp)
+movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x48(%ebp),%eax
+add    $0x1f,%eax
+movzbl (%eax),%eax
+movsbl %al,%eax
+mov    %eax,0xc(%esp)
+movl   $"crashCount\t\t\t\t: %hhd",0x8(%esp)
+movl   $"./log/FrameLag.log",0x4(%esp)
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x126,0x8(%esp)
+movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x48(%ebp),%eax
+add    $0x28,%eax
+mov    (%eax),%eax
+mov    %eax,0xc(%esp)
+movl   $"cpuInfo.cpuClock       : %d",0x8(%esp)
+movl   $"./log/FrameLag.log",0x4(%esp)
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x127,0x8(%esp)
+movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x48(%ebp),%eax
+add    $0x38,%eax
+movzbl (%eax),%eax
+movsbl %al,%eax
+mov    %eax,0xc(%esp)
+movl   $"cpuInfo.numOfProcessor : %hhd",0x8(%esp)
+movl   $"./log/FrameLag.log",0x4(%esp)
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x128,0x8(%esp)
+movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
+lea    -0x7c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x48(%ebp),%eax
+add    $0x3c,%eax
+movzbl (%eax),%eax
+movsbl %al,%eax
+mov    %eax,0xc(%esp)
+movl   $"cpuInfo.cpuVendor      : %hhd",0x8(%esp)
+movl   $"./log/FrameLag.log",0x4(%esp)
+lea    -0x7c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x129,0x8(%esp)
+movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
+lea    -0x84(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x48(%ebp),%eax
+add    $0x48,%eax
+movzwl (%eax),%eax
+movzwl %ax,%eax
+mov    %eax,0xc(%esp)
+movl   $"videoCardVendorId      : %hu",0x8(%esp)
+movl   $"./log/FrameLag.log",0x4(%esp)
+lea    -0x84(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x12a,0x8(%esp)
+movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
+lea    -0x8c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x48(%ebp),%eax
+add    $0x50,%eax
+movzwl (%eax),%eax
+movzwl %ax,%eax
+mov    %eax,0xc(%esp)
+movl   $"videoCardDeviceId      : %hu",0x8(%esp)
+movl   $"./log/FrameLag.log",0x4(%esp)
+lea    -0x8c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x12b,0x8(%esp)
+movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
+lea    -0x94(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x48(%ebp),%eax
+add    $0x58,%eax
+movzwl (%eax),%eax
+cwtl
+mov    %eax,0xc(%esp)
+movl   $"availableTextureMemory : %hd",0x8(%esp)
+movl   $"./log/FrameLag.log",0x4(%esp)
+lea    -0x94(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x12c,0x8(%esp)
+movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
+lea    -0x9c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x48(%ebp),%eax
+add    $0x60,%eax
+movzwl (%eax),%eax
+cwtl
+mov    %eax,0xc(%esp)
+movl   $"ramMemory              : %hd",0x8(%esp)
+movl   $"./log/FrameLag.log",0x4(%esp)
+lea    -0x9c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x12d,0x8(%esp)
+movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
+lea    -0xa4(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x48(%ebp),%eax
+add    $0x68,%eax
+movzbl (%eax),%eax
+movsbl %al,%eax
+mov    %eax,0xc(%esp)
+movl   $"osVersion              : %hhd",0x8(%esp)
+movl   $"./log/FrameLag.log",0x4(%esp)
+lea    -0xa4(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x12e,0x8(%esp)
+movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
+lea    -0xac(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x48(%ebp),%eax
+add    $0x6c,%eax
+mov    (%eax),%eax
+mov    %eax,0xc(%esp)
+movl   $"directxVersion         : %x",0x8(%esp)
+movl   $"./log/FrameLag.log",0x4(%esp)
+lea    -0xac(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x130,0x8(%esp)
+movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
+lea    -0xb4(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x48(%ebp),%eax
+add    $0x7c,%eax
+movzbl (%eax),%eax
+movsbl %al,%eax
+mov    %eax,0xc(%esp)
+movl   $"crash\t\t\t\t\t: %hhd",0x8(%esp)
+movl   $"./log/FrameLag.log",0x4(%esp)
+lea    -0xb4(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    -0x48(%ebp),%eax
+add    $0x7c,%eax
+movzbl (%eax),%eax
+test   %al,%al
+js     <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x4b5>
+mov    -0x48(%ebp),%eax
+add    $0x7c,%eax
+movzbl (%eax),%eax
+cmp    $0x7,%al
+jg     <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x4b5>
+mov    -0x48(%ebp),%eax
+add    $0x7c,%eax
+movzbl (%eax),%eax
+movsbl %al,%eax
+movzbl &_ZL8chk_ting(%eax),%edx
+add    $0x1,%edx
+mov    %dl,&_ZL8chk_ting(%eax)
+mov    -0x48(%ebp),%eax
+add    $0x14c,%eax
+mov    (%eax),%eax
+mov    %eax,-0x44(%ebp)
+mov    -0x48(%ebp),%eax
+add    $0x148,%eax
+mov    (%eax),%eax
+mov    %eax,-0x40(%ebp)
+mov    -0x48(%ebp),%eax
+add    $0x144,%eax
+mov    (%eax),%eax
+mov    %eax,-0x3c(%ebp)
+mov    -0x48(%ebp),%eax
+add    $0x140,%eax
+mov    (%eax),%eax
 mov    %eax,-0x38(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication21Get_FrameLagCollectorEv>
+mov    -0x48(%ebp),%eax
+add    $0x13c,%eax
+mov    (%eax),%eax
+mov    %eax,-0x34(%ebp)
+mov    -0x48(%ebp),%eax
+add    $0x138,%eax
+mov    (%eax),%eax
 mov    %eax,-0x30(%ebp)
-movl   $"./SHOW_PACKET",-0x2c(%ebp)
-movl   $0x0,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <access>
-mov    %eax,-0x34(%ebp)
-cmpl   $0x0,-0x34(%ebp)
-jne    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x894>
-mov    -0x38(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%ebx
-movl   $0x124,0x8(%esp)
-movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
-lea    -0xf0(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"packet->m_wSize\t\t: %hu",0x8(%esp)
-movl   $"./log/FrameLag.log",0x4(%esp)
-lea    -0xf0(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x38(%ebp),%eax
-movzbl 0x1f(%eax),%eax
-movsbl %al,%ebx
-movl   $0x125,0x8(%esp)
-movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
-lea    -0xe8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"crashCount\t\t\t\t: %hhd",0x8(%esp)
-movl   $"./log/FrameLag.log",0x4(%esp)
-lea    -0xe8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x38(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0x126,0x8(%esp)
-movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
-lea    -0xe0(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"cpuInfo.cpuClock       : %d",0x8(%esp)
-movl   $"./log/FrameLag.log",0x4(%esp)
-lea    -0xe0(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x38(%ebp),%eax
-movzbl 0xe(%eax),%eax
-movsbl %al,%ebx
-movl   $0x127,0x8(%esp)
-movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
-lea    -0xd8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"cpuInfo.numOfProcessor : %hhd",0x8(%esp)
-movl   $"./log/FrameLag.log",0x4(%esp)
-lea    -0xd8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x38(%ebp),%eax
-movzbl 0xf(%eax),%eax
-movsbl %al,%ebx
-movl   $0x128,0x8(%esp)
-movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
-lea    -0xd0(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"cpuInfo.cpuVendor      : %hhd",0x8(%esp)
-movl   $"./log/FrameLag.log",0x4(%esp)
-lea    -0xd0(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x38(%ebp),%eax
-movzwl 0x12(%eax),%eax
-movzwl %ax,%ebx
-movl   $0x129,0x8(%esp)
-movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
-lea    -0xc8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"videoCardVendorId      : %hu",0x8(%esp)
-movl   $"./log/FrameLag.log",0x4(%esp)
-lea    -0xc8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x38(%ebp),%eax
-movzwl 0x14(%eax),%eax
-movzwl %ax,%ebx
-movl   $0x12a,0x8(%esp)
-movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
-lea    -0xc0(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"videoCardDeviceId      : %hu",0x8(%esp)
-movl   $"./log/FrameLag.log",0x4(%esp)
-lea    -0xc0(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x38(%ebp),%eax
-movzwl 0x16(%eax),%eax
-movswl %ax,%ebx
-movl   $0x12b,0x8(%esp)
-movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
-lea    -0xb8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"availableTextureMemory : %hd",0x8(%esp)
-movl   $"./log/FrameLag.log",0x4(%esp)
-lea    -0xb8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x38(%ebp),%eax
-movzwl 0x18(%eax),%eax
-movswl %ax,%ebx
-movl   $0x12c,0x8(%esp)
-movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
-lea    -0xb0(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"ramMemory              : %hd",0x8(%esp)
-movl   $"./log/FrameLag.log",0x4(%esp)
-lea    -0xb0(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x38(%ebp),%eax
-movzbl 0x1a(%eax),%eax
-movsbl %al,%ebx
-movl   $0x12d,0x8(%esp)
-movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
-lea    -0xa8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"osVersion              : %hhd",0x8(%esp)
-movl   $"./log/FrameLag.log",0x4(%esp)
-lea    -0xa8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x38(%ebp),%eax
-mov    0x1b(%eax),%ebx
-movl   $0x12e,0x8(%esp)
-movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
-lea    -0xa0(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"directxVersion         : %x",0x8(%esp)
-movl   $"./log/FrameLag.log",0x4(%esp)
-lea    -0xa0(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x38(%ebp),%eax
-movzbl 0x1f(%eax),%eax
-movsbl %al,%ebx
-movl   $0x130,0x8(%esp)
-movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
-lea    -0x98(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"crash\t\t\t\t\t: %hhd",0x8(%esp)
-movl   $"./log/FrameLag.log",0x4(%esp)
-lea    -0x98(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x38(%ebp),%eax
-movzbl 0x1f(%eax),%eax
-test   %al,%al
-js     <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x4e2>
-mov    -0x38(%ebp),%eax
-movzbl 0x1f(%eax),%eax
-cmp    $0x7,%al
-jg     <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x4e2>
-mov    -0x38(%ebp),%eax
-movzbl 0x1f(%eax),%eax
-movsbl %al,%eax
-mov    -0x38(%ebp),%edx
-movzbl 0x1f(%edx),%edx
-movsbl %dl,%edx
-mov    &_ZZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeaderE8chk_ting(,%edx,4),%edx
-add    $0x1,%edx
-mov    %edx,&_ZZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeaderE8chk_ting(,%eax,4)
 movl   $0x0,-0x28(%ebp)
-jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x76b>
-mov    -0x28(%ebp),%eax
-mov    -0x38(%ebp),%ecx
+jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x791>
+movl   $0x138,0x8(%esp)
+movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
+lea    -0xd4(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x28(%ebp),%eax
 shl    $0x3,%eax
 lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x20,%eax
-movzwl 0x4(%eax),%eax
-movswl %ax,%ebx
-movl   $0x138,0x8(%esp)
-movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
-lea    -0x90(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0x10(%esp)
+mov    %edx,%ecx
+sub    %eax,%ecx
+mov    %ecx,%eax
+add    $0x24,%eax
+add    -0x48(%ebp),%eax
+movzwl (%eax),%eax
+cwtl
+mov    %eax,0x10(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"window_fps fps[%d]             : %hd",0x8(%esp)
 movl   $"./log/FrameLag.log",0x4(%esp)
-lea    -0x90(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x28(%ebp),%eax
-mov    -0x38(%ebp),%ecx
+lea    -0xd4(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x139,0x8(%esp)
+movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
+lea    -0xdc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x28(%ebp),%eax
 shl    $0x3,%eax
 lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x20,%eax
-movzwl 0x6(%eax),%eax
-movswl %ax,%ebx
-movl   $0x139,0x8(%esp)
-movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
-lea    -0x88(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0x10(%esp)
+mov    %edx,%ecx
+sub    %eax,%ecx
+mov    %ecx,%eax
+add    $0x26,%eax
+add    -0x48(%ebp),%eax
+movzwl (%eax),%eax
+cwtl
+mov    %eax,0x10(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"full_fps fps[%d]               : %hd",0x8(%esp)
 movl   $"./log/FrameLag.log",0x4(%esp)
-lea    -0x88(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x28(%ebp),%eax
-mov    -0x38(%ebp),%ecx
+lea    -0xdc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x13a,0x8(%esp)
+movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
+lea    -0xe4(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x28(%ebp),%eax
 shl    $0x3,%eax
 lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x20,%eax
-movzwl 0x8(%eax),%eax
-movswl %ax,%ebx
-movl   $0x13a,0x8(%esp)
-movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
-lea    -0x80(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0x10(%esp)
+mov    %edx,%ecx
+sub    %eax,%ecx
+mov    %ecx,%eax
+add    $0x28,%eax
+add    -0x48(%ebp),%eax
+movzwl (%eax),%eax
+cwtl
+mov    %eax,0x10(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"full_window_fps fps[%d]        : %hd",0x8(%esp)
 movl   $"./log/FrameLag.log",0x4(%esp)
-lea    -0x80(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x28(%ebp),%eax
-mov    -0x38(%ebp),%ecx
+lea    -0xe4(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x13b,0x8(%esp)
+movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
+lea    -0xec(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x28(%ebp),%eax
 shl    $0x3,%eax
 lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x20,%eax
-movzwl 0xa(%eax),%eax
-movswl %ax,%ebx
-movl   $0x13b,0x8(%esp)
-movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
-lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0x10(%esp)
+mov    %edx,%ecx
+sub    %eax,%ecx
+mov    %ecx,%eax
+add    $0x2a,%eax
+add    -0x48(%ebp),%eax
+movzwl (%eax),%eax
+cwtl
+mov    %eax,0x10(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"full_window_nosync_fps fps[%d] : %hd",0x8(%esp)
 movl   $"./log/FrameLag.log",0x4(%esp)
-lea    -0x78(%ebp),%eax
+lea    -0xec(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movl   $0x0,-0x24(%ebp)
-jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x758>
+jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x77e>
+movl   $0x13e,0x8(%esp)
+movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
+lea    -0xf4(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x28(%ebp),%edx
-mov    -0x24(%ebp),%ebx
-mov    -0x38(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x3,%eax
 sub    %edx,%eax
-add    %ebx,%eax
+add    -0x24(%ebp),%eax
 add    $0x4,%eax
-mov    0xc(%ecx,%eax,8),%ebx
-movl   $0x13e,0x8(%esp)
-movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0x14(%esp)
+shl    $0x3,%eax
+add    $0xc,%eax
+add    -0x48(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,0x14(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"m_frameLagArray[%d].framelag[%d].frame : %d",0x8(%esp)
 movl   $"./log/FrameLag.log",0x4(%esp)
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0xf4(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x13f,0x8(%esp)
+movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
+lea    -0xfc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x28(%ebp),%edx
-mov    -0x24(%ebp),%ebx
-mov    -0x38(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x3,%eax
 sub    %edx,%eax
-add    %ebx,%eax
-add    $0x4,%eax
-flds   0x10(%ecx,%eax,8)
-fstpl  -0x110(%ebp)
-movl   $0x13f,0x8(%esp)
-movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-fldl   -0x110(%ebp)
+add    -0x24(%ebp),%eax
+add    $0x6,%eax
+shl    $0x3,%eax
+add    -0x48(%ebp),%eax
+flds   (%eax)
 fstpl  0x14(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"m_frameLagArray[%d].framelag[%d].time : %.3f",0x8(%esp)
 movl   $"./log/FrameLag.log",0x4(%esp)
-lea    -0x68(%ebp),%eax
+lea    -0xfc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 addl   $0x1,-0x24(%ebp)
 cmpl   $0x5,-0x24(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x686>
+jne    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x6ab>
 addl   $0x1,-0x28(%ebp)
 cmpl   $0x5,-0x28(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x4ee>
-mov    &_ZZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeaderE8chk_ting+0x14,%eax
-mov    %eax,-0x104(%ebp)
-mov    &_ZZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeaderE8chk_ting+0x10,%eax
-mov    %eax,-0x100(%ebp)
-mov    &_ZZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeaderE8chk_ting+0xc,%eax
-mov    %eax,-0xfc(%ebp)
-mov    &_ZZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeaderE8chk_ting+0x8,%edi
-mov    &_ZZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeaderE8chk_ting+0x4,%esi
-mov    &_ZZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeaderE8chk_ting,%ebx
+jne    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x50f>
 movl   $0x142,0x8(%esp)
 movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x104(%ebp),%eax
+lea    -0xbc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x44(%ebp),%eax
 mov    %eax,0x20(%esp)
-mov    -0x100(%ebp),%eax
+mov    -0x40(%ebp),%eax
 mov    %eax,0x1c(%esp)
-mov    -0xfc(%ebp),%eax
+mov    -0x3c(%ebp),%eax
 mov    %eax,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x38(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"TOTAL TING : %u, %u, %u, %u, %u, %u",0x8(%esp)
 movl   $"./log/FrameLag.log",0x4(%esp)
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x38(%ebp),%eax
+lea    -0xbc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    0x8(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
+mov    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add>
-movzbl %al,%ebx
+mov    %eax,-0x2c(%ebp)
 movl   $0x144,0x8(%esp)
 movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+lea    -0xc4(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x2c(%ebp),%eax
+and    $0xff,%eax
+mov    %eax,0xc(%esp)
 movl   $"packet validation : %d",0x8(%esp)
 movl   $"./log/FrameLag.log",0x4(%esp)
-lea    -0x58(%ebp),%eax
+lea    -0xc4(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movl   $0x146,0x8(%esp)
 movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0xcc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $&data#77b0a6cf(.rodata),0x8(%esp)
 movl   $"./log/FrameLag.log",0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x8ba>
+lea    -0xcc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x8c3>
 movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x8af>
+jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x8b8>
 mov    -0x20(%ebp),%eax
-movl   $0x0,&_ZZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeaderE8chk_ting(,%eax,4)
+movb   $0x0,&_ZL8chk_ting(%eax)
 addl   $0x1,-0x20(%ebp)
 cmpl   $0x7,-0x20(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x89d>
-mov    -0x38(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x8aa>
+mov    0x8(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
+mov    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17FrameLagCollector19PushOneFrameLagDataEP30Packet_Frame_Lag_Statistic_Add>
-jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x9a7>
+jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x9bc>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x94d>
+jne    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x95c>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %eax,%ebx
 movl   $0x154,0x8(%esp)
 movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x104(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnFrameLagStatisticsAdd() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x946>
+lea    -0x104(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x955>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x9a7>
+jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x9bc>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x159,0x8(%esp)
 movl   $"OnFrameLagStatisticsAdd",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x10c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnFrameLagStatisticsAdd() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x9a2>
+lea    -0x10c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x9b7>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x13c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnFrameLagStatisticsAdd(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader
               (PacketHeader *param_1)

{
  float fVar1;
  PacketHeader PVar2;
  ushort uVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  CDNFException *this;
  uint uVar11;
  string local_fc [7];
  allocator local_f5;
  CMyFileLog local_f4 [8];
  CMyFileLog local_ec [8];
  CMyFileLog local_e4 [8];
  CMyFileLog local_dc [8];
  CMyFileLog local_d4 [8];
  CMyFileLog local_cc [8];
  CMyFileLog local_c4 [8];
  CMyFileLog local_bc [8];
  CMyFileLog local_b4 [8];
  CMyFileLog local_ac [8];
  CMyFileLog local_a4 [8];
  CMyFileLog local_9c [8];
  CMyFileLog local_94 [8];
  CMyFileLog local_8c [8];
  CMyFileLog local_84 [8];
  CMyFileLog local_7c [8];
  CMyFileLog local_74 [8];
  CMyFileLog local_6c [8];
  CMyFileLog local_64 [8];
  CMyFileLog local_5c [8];
  CMyFileLog local_54 [24];
  PacketHeader *local_3c;
  int local_38;
  FrameLagCollector *local_34;
  char *local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0805a6de to 0805a6e2 has its CatchHandler @ 0805a755 */
    std::string::string(local_fc,"CPacketTranslater::OnFrameLagStatisticsAdd() : 0 == m_pclApp",
                        &local_f5);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0805a700 to 0805a704 has its CatchHandler @ 0805a707 */
    CDNFException::CDNFException(this,local_fc);
                    /* try { // try from 0805a744 to 0805a748 has its CatchHandler @ 0805a74b */
    std::string::~string(local_fc);
    std::allocator<char>::~allocator((allocator<char> *)&local_f5);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0805a791 to 0805af67 has its CatchHandler @ 0805af6d */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_3c = param_1;
  local_34 = (FrameLagCollector *)CApplication::Get_FrameLagCollector(m_pclApp);
  local_30 = "./SHOW_PACKET";
  local_38 = access("./SHOW_PACKET",0);
  if (local_38 == 0) {
    uVar3 = *(ushort *)(local_3c + 2);
    CMyFileLog::CMyFileLog(local_f4,"OnFrameLagStatisticsAdd",0x124);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_f4,"./log/FrameLag.log","packet->m_wSize\t\t: %hu",(uint)uVar3);
    PVar2 = local_3c[0x1f];
    CMyFileLog::CMyFileLog(local_ec,"OnFrameLagStatisticsAdd",0x125);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_ec,"./log/FrameLag.log","crashCount\t\t\t\t: %hhd",(int)(char)PVar2);
    uVar5 = *(undefined4 *)(local_3c + 10);
    CMyFileLog::CMyFileLog(local_e4,"OnFrameLagStatisticsAdd",0x126);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_e4,"./log/FrameLag.log","cpuInfo.cpuClock       : %d",uVar5);
    PVar2 = local_3c[0xe];
    CMyFileLog::CMyFileLog(local_dc,"OnFrameLagStatisticsAdd",0x127);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_dc,"./log/FrameLag.log","cpuInfo.numOfProcessor : %hhd",(int)(char)PVar2);
    PVar2 = local_3c[0xf];
    CMyFileLog::CMyFileLog(local_d4,"OnFrameLagStatisticsAdd",0x128);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_d4,"./log/FrameLag.log","cpuInfo.cpuVendor      : %hhd",(int)(char)PVar2);
    uVar3 = *(ushort *)(local_3c + 0x12);
    CMyFileLog::CMyFileLog(local_cc,"OnFrameLagStatisticsAdd",0x129);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_cc,"./log/FrameLag.log","videoCardVendorId      : %hu",(uint)uVar3);
    uVar3 = *(ushort *)(local_3c + 0x14);
    CMyFileLog::CMyFileLog(local_c4,"OnFrameLagStatisticsAdd",0x12a);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_c4,"./log/FrameLag.log","videoCardDeviceId      : %hu",(uint)uVar3);
    sVar4 = *(short *)(local_3c + 0x16);
    CMyFileLog::CMyFileLog(local_bc,"OnFrameLagStatisticsAdd",299);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_bc,"./log/FrameLag.log","availableTextureMemory : %hd",(int)sVar4);
    sVar4 = *(short *)(local_3c + 0x18);
    CMyFileLog::CMyFileLog(local_b4,"OnFrameLagStatisticsAdd",300);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_b4,"./log/FrameLag.log","ramMemory              : %hd",(int)sVar4);
    PVar2 = local_3c[0x1a];
    CMyFileLog::CMyFileLog(local_ac,"OnFrameLagStatisticsAdd",0x12d);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_ac,"./log/FrameLag.log","osVersion              : %hhd",(int)(char)PVar2);
    uVar5 = *(undefined4 *)(local_3c + 0x1b);
    CMyFileLog::CMyFileLog(local_a4,"OnFrameLagStatisticsAdd",0x12e);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_a4,"./log/FrameLag.log","directxVersion         : %x",uVar5);
    PVar2 = local_3c[0x1f];
    CMyFileLog::CMyFileLog(local_9c,"OnFrameLagStatisticsAdd",0x130);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_9c,"./log/FrameLag.log","crash\t\t\t\t\t: %hhd",(int)(char)PVar2);
    if ((-1 < (char)local_3c[0x1f]) && ((char)local_3c[0x1f] < '\b')) {
      (&OnFrameLagStatisticsAdd(PacketHeader*)::chk_ting)[(char)local_3c[0x1f]] =
           (&OnFrameLagStatisticsAdd(PacketHeader*)::chk_ting)[(char)local_3c[0x1f]] + 1;
    }
    for (local_2c = 0; uVar10 = DAT_0815b154, uVar9 = DAT_0815b150, uVar8 = DAT_0815b14c,
        uVar7 = DAT_0815b148, uVar6 = DAT_0815b144,
        uVar5 = OnFrameLagStatisticsAdd(PacketHeader*)::chk_ting, local_2c < 6;
        local_2c = local_2c + 1) {
      sVar4 = *(short *)(local_3c + local_2c * 0x38 + 0x24);
      CMyFileLog::CMyFileLog(local_94,"OnFrameLagStatisticsAdd",0x138);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_94,"./log/FrameLag.log","window_fps fps[%d]             : %hd",local_2c,
                 (int)sVar4);
      sVar4 = *(short *)(local_3c + local_2c * 0x38 + 0x26);
      CMyFileLog::CMyFileLog(local_8c,"OnFrameLagStatisticsAdd",0x139);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_8c,"./log/FrameLag.log","full_fps fps[%d]               : %hd",local_2c,
                 (int)sVar4);
      sVar4 = *(short *)(local_3c + local_2c * 0x38 + 0x28);
      CMyFileLog::CMyFileLog(local_84,"OnFrameLagStatisticsAdd",0x13a);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_84,"./log/FrameLag.log","full_window_fps fps[%d]        : %hd",local_2c,
                 (int)sVar4);
      sVar4 = *(short *)(local_3c + local_2c * 0x38 + 0x2a);
      CMyFileLog::CMyFileLog(local_7c,"OnFrameLagStatisticsAdd",0x13b);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_7c,"./log/FrameLag.log","full_window_nosync_fps fps[%d] : %hd",local_2c,
                 (int)sVar4);
      for (local_28 = 0; local_28 < 6; local_28 = local_28 + 1) {
        uVar5 = *(undefined4 *)(local_3c + (local_2c * 7 + local_28 + 4) * 8 + 0xc);
        CMyFileLog::CMyFileLog(local_74,"OnFrameLagStatisticsAdd",0x13e);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_74,"./log/FrameLag.log","m_frameLagArray[%d].framelag[%d].frame : %d",
                   local_2c,local_28,uVar5);
        fVar1 = *(float *)(local_3c + (local_2c * 7 + local_28 + 4) * 8 + 0x10);
        CMyFileLog::CMyFileLog(local_6c,"OnFrameLagStatisticsAdd",0x13f);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_6c,"./log/FrameLag.log","m_frameLagArray[%d].framelag[%d].time : %.3f",
                   local_2c,local_28,(double)fVar1);
      }
    }
    CMyFileLog::CMyFileLog(local_64,"OnFrameLagStatisticsAdd",0x142);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_64,"./log/FrameLag.log","TOTAL TING : %u, %u, %u, %u, %u, %u",uVar5,uVar6,uVar7
               ,uVar8,uVar9,uVar10);
    uVar11 = FrameLagCollector::is_valid_statistic_packet
                       (local_34,(Packet_Frame_Lag_Statistic_Add *)local_3c);
    CMyFileLog::CMyFileLog(local_5c,"OnFrameLagStatisticsAdd",0x144);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_5c,"./log/FrameLag.log","packet validation : %d",uVar11 & 0xff);
    CMyFileLog::CMyFileLog(local_54,"OnFrameLagStatisticsAdd",0x146);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_54,"./log/FrameLag.log","\n");
  }
  else {
    for (local_24 = 0; local_24 < 8; local_24 = local_24 + 1) {
      (&OnFrameLagStatisticsAdd(PacketHeader*)::chk_ting)[local_24] = 0;
    }
  }
  FrameLagCollector::PushOneFrameLagData(local_34,(Packet_Frame_Lag_Statistic_Add *)local_3c);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Statics/DNFPacketTranslater.cpp)（约第 100 行）：

```cpp
void CPacketTranslater::OnFrameLagStatisticsAdd(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnFrameLagStatisticsAdd() : 0 == m_pclApp")
        FrameLagCollector* flc = m_pclApp->Get_FrameLagCollector();
        char* pb = (char*)pkt;
        if (access("./SHOW_PACKET", 0) == 0)
        {
            CMyFileLog log1("OnFrameLagStatisticsAdd", 0x124);
            log1("./log/FrameLag.log", "packet->m_wSize\t\t: %hu", *(unsigned short*)(pb + 2));
            CMyFileLog log2("OnFrameLagStatisticsAdd", 0x125);
            log2("./log/FrameLag.log", "crashCount\t\t\t\t: %hhd", (int)(char)pb[0x1f]);
            CMyFileLog log3("OnFrameLagStatisticsAdd", 0x126);
            log3("./log/FrameLag.log", "cpuInfo.cpuClock       : %d", *(int*)(pb + 0x28));
            CMyFileLog log4("OnFrameLagStatisticsAdd", 0x127);
            log4("./log/FrameLag.log", "cpuInfo.numOfProcessor : %hhd", (int)(char)pb[0x38]);
            CMyFileLog log5("OnFrameLagStatisticsAdd", 0x128);
            log5("./log/FrameLag.log", "cpuInfo.cpuVendor      : %hhd", (int)(char)pb[0x3c]);
            CMyFileLog log6("OnFrameLagStatisticsAdd", 0x129);
            log6("./log/FrameLag.log", "videoCardVendorId      : %hu", (unsigned int)*(unsigned short*)(pb + 0x48));
            CMyFileLog log7("OnFrameLagStatisticsAdd", 0x12a);
            log7("./log/FrameLag.log", "videoCardDeviceId      : %hu", (unsigned int)*(unsigned short*)(pb + 0x50));
            CMyFileLog log8("OnFrameLagStatisticsAdd", 299);
            log8("./log/FrameLag.log", "availableTextureMemory : %hd", (int)*(short*)(pb + 0x58));
            CMyFileLog log9("OnFrameLagStatisticsAdd", 300);
            log9("./log/FrameLag.log", "ramMemory              : %hd", (int)*(short*)(pb + 0x60));
            CMyFileLog log10("OnFrameLagStatisticsAdd", 0x12d);
            log10("./log/FrameLag.log", "osVersion              : %hhd", (int)(char)pb[0x68]);
            CMyFileLog log11("OnFrameLagStatisticsAdd", 0x12e);
            log11("./log/FrameLag.log", "directxVersion         : %x", *(unsigned int*)(pb + 0x6c));
            CMyFileLog log12("OnFrameLagStatisticsAdd", 0x130);
            log12("./log/FrameLag.log", "crash\t\t\t\t\t: %hhd", (int)(char)pb[0x7c]);
            if (-1 < (char)pb[0x7c] && (char)pb[0x7c] < 8)
            {
                chk_ting[(char)pb[0x7c]]++;
            }
            unsigned int t5 = *(unsigned int*)(pb + 0x14c);
            unsigned int t4 = *(unsigned int*)(pb + 0x148);
            unsigned int t3 = *(unsigned int*)(pb + 0x144);
            unsigned int t2 = *(unsigned int*)(pb + 0x140);
            unsigned int t1 = *(unsigned int*)(pb + 0x13c);
            unsigned int t0 = *(unsigned int*)(pb + 0x138);
            for (int i = 0; i < 6; i++)
            {
                CMyFileLog log13("OnFrameLagStatisticsAdd", 0x138);
                log13("./log/FrameLag.log", "window_fps fps[%d]             : %hd", i,
                      (int)*(short*)(pb + i * 0x38 + 0x24));
                CMyFileLog log14("OnFrameLagStatisticsAdd", 0x139);
                log14("./log/FrameLag.log", "full_fps fps[%d]               : %hd", i,
                      (int)*(short*)(pb + i * 0x38 + 0x26));
                CMyFileLog log15("OnFrameLagStatisticsAdd", 0x13a);
                log15("./log/FrameLag.log", "full_window_fps fps[%d]        : %hd", i,
                      (int)*(short*)(pb + i * 0x38 + 0x28));
                CMyFileLog log16("OnFrameLagStatisticsAdd", 0x13b);
                log16("./log/FrameLag.log", "full_window_nosync_fps fps[%d] : %hd", i,
                      (int)*(short*)(pb + i * 0x38 + 0x2a));
                for (int j = 0; j < 6; j++)
                {
                    CMyFileLog log17("OnFrameLagStatisticsAdd", 0x13e);
                    log17("./log/FrameLag.log",
                          "m_frameLagArray[%d].framelag[%d].frame : %d", i, j,
                          *(int*)(pb + (i * 7 + j + 4) * 8 + 0xc));
                    CMyFileLog log18("OnFrameLagStatisticsAdd", 0x13f);
                    log18("./log/FrameLag.log",
                          "m_frameLagArray[%d].framelag[%d].time : %.3f", i, j,
                          (double)*(float*)(pb + (i * 7 + j + 4) * 8 + 0x10));
                }
            }
            CMyFileLog log19("OnFrameLagStatisticsAdd", 0x142);
            log19("./log/FrameLag.log", "TOTAL TING : %u, %u, %u, %u, %u, %u",
                  t0, t1, t2, t3, t4, t5);
            unsigned int valid = flc->is_valid_statistic_packet((Packet_Frame_Lag_Statistic_Add*)pkt);
            CMyFileLog log20("OnFrameLagStatisticsAdd", 0x144);
            log20("./log/FrameLag.log", "packet validation : %d", valid & 0xff);
            CMyFileLog log21("OnFrameLagStatisticsAdd", 0x146);
            log21("./log/FrameLag.log", "\n");
        }
        else
        {
            for (int i = 0; i < 8; i++)
            {
                chk_ting[i] = 0;
            }
        }
        flc->PushOneFrameLagData((Packet_Frame_Lag_Statistic_Add*)pkt);

    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnFrameLagStatisticsAdd", 340);
        log("./log/Except", "CPacketTranslater::OnFrameLagStatisticsAdd() Exception Break : %s\n", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnFrameLagStatisticsAdd", 345);
        log("./log/Except", "CPacketTranslater::OnFrameLagStatisticsAdd() Exception Break\n");
    }
}
```

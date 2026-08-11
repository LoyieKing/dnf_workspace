# _ZN15RelayServiceApp12RelayService7makeLogEv

`RelayServiceApp::RelayService::makeLog()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x8051c56` | `0x4d8` | `0x805200c` | `0x4ba` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,339 +1,343 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x1cc,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK15RelayServiceApp12RelayService7getTickEv>
-mov    %eax,-0x38(%ebp)
-mov    %edx,-0x34(%ebp)
+mov    %eax,-0x80(%ebp)
+mov    %edx,-0x7c(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp12RelayService10getTickLogEv>
 mov    %eax,%ecx
 mov    %edx,%ebx
-mov    -0x38(%ebp),%eax
-mov    -0x34(%ebp),%edx
+mov    -0x80(%ebp),%eax
+mov    -0x7c(%ebp),%edx
 sub    %ecx,%eax
 sbb    %ebx,%edx
-mov    %eax,-0x30(%ebp)
-mov    %edx,-0x2c(%ebp)
+mov    %eax,-0x78(%ebp)
+mov    %edx,-0x74(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp12RelayService10getTickLogEv>
 or     %edx,%eax
 test   %eax,%eax
 je     <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x69>
-cmpl   $0x0,-0x2c(%ebp)
+cmpl   $0x0,-0x74(%ebp)
 js     <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x69>
-cmpl   $0x0,-0x2c(%ebp)
+cmpl   $0x0,-0x74(%ebp)
 jg     <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x62>
-cmpl   $0xea60,-0x30(%ebp)
+cmpl   $0xea60,-0x78(%ebp)
 jbe    <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x69>
 mov    $0x1,%eax
 jmp    <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x6e>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x4ac>
+je     <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x48e>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp12RelayService10setTickLogEv>
-mov    -0x38(%ebp),%eax
-mov    -0x34(%ebp),%edx
+mov    -0x80(%ebp),%eax
+mov    -0x7c(%ebp),%edx
 movl   $0x3e8,0x8(%esp)
 movl   $0x0,0xc(%esp)
 mov    %eax,(%esp)
 mov    %edx,0x4(%esp)
 call   <T> <__divdi3>
-mov    %eax,-0x3c(%ebp)
-lea    -0x3c(%ebp),%eax
+mov    %eax,-0x84(%ebp)
+lea    -0x84(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
-mov    %eax,-0x24(%ebp)
-lea    -0x13c(%ebp),%ebx
+mov    %eax,-0x6c(%ebp)
+lea    -0x184(%ebp),%ebx
 mov    $0x0,%eax
 mov    $0x40,%edx
 mov    %ebx,%edi
 mov    %edx,%ecx
 rep stos %eax,%es:(%edi)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK15RelayServiceApp8PortInfo10getTCPPortEv>
-mov    -0x24(%ebp),%edx
+mov    -0x6c(%ebp),%edx
 mov    0xc(%edx),%edx
-mov    -0x24(%ebp),%ecx
+mov    -0x6c(%ebp),%ecx
 mov    0x10(%ecx),%ecx
 lea    0x1(%ecx),%ebx
-mov    -0x24(%ebp),%ecx
+mov    -0x6c(%ebp),%ecx
 mov    0x14(%ecx),%ecx
 add    $0x76c,%ecx
 mov    %eax,0x18(%esp)
 mov    %edx,0x14(%esp)
 mov    %ebx,0x10(%esp)
 mov    %ecx,0xc(%esp)
 movl   $"./log/Relay%4d%02d%02d_T%d.log",0x8(%esp)
 movl   $0x100,0x4(%esp)
-lea    -0x13c(%ebp),%eax
+lea    -0x184(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
 movl   $"a+",0x4(%esp)
-lea    -0x13c(%ebp),%eax
+lea    -0x184(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fopen>
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-je     <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x4cd>
+mov    %eax,-0x68(%ebp)
+cmpl   $0x0,-0x68(%ebp)
+je     <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x4af>
 call   <T> <_Z12G_ScriptDatav>
 movzbl 0x34(%eax),%eax
-test   %al,%al
-je     <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x389>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x24f>
+mov    0x8(%ebp),%eax
+add    $0x24,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK15RelayServiceApp5Users15getDispatchCoutEv>
+mov    %eax,-0x64(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x24,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK15RelayServiceApp5Users22getAverageDispatchTimeEv>
+fstpl  -0x60(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x24,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK15RelayServiceApp5Users18getMaxDispatchTimeEv>
+mov    %eax,-0x58(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x24,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK15RelayServiceApp5Users22getCurrentMaxUserCountEv>
+test   %eax,%eax
+sete   %al
+test   %al,%al
+je     <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x1ba>
+mov    0x8(%ebp),%eax
+add    $0x24,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK15RelayServiceApp5Users12getUserCountEv>
+neg    %eax
+mov    %eax,-0x54(%ebp)
+jmp    <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x1cb>
+mov    0x8(%ebp),%eax
+add    $0x24,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK15RelayServiceApp5Users22getCurrentMaxUserCountEv>
+mov    %eax,-0x54(%ebp)
+mov    -0x6c(%ebp),%eax
+mov    (%eax),%esi
+mov    -0x6c(%ebp),%eax
+mov    0x4(%eax),%ebx
+mov    -0x6c(%ebp),%eax
+mov    0x8(%eax),%ecx
+mov    -0x6c(%ebp),%eax
+mov    0xc(%eax),%edx
+mov    -0x6c(%ebp),%eax
+mov    0x10(%eax),%eax
+add    $0x1,%eax
+mov    %eax,-0x194(%ebp)
+mov    -0x6c(%ebp),%eax
+mov    0x14(%eax),%eax
+lea    0x76c(%eax),%edi
+mov    -0x64(%ebp),%eax
+mov    %eax,0x30(%esp)
+fldl   -0x60(%ebp)
+fstpl  0x28(%esp)
+mov    -0x58(%ebp),%eax
+mov    %eax,0x24(%esp)
+mov    -0x54(%ebp),%eax
+mov    %eax,0x20(%esp)
+mov    %esi,0x1c(%esp)
+mov    %ebx,0x18(%esp)
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    -0x194(%ebp),%eax
+mov    %eax,0xc(%esp)
+mov    %edi,0x8(%esp)
+movl   $"%02d/%02d/%02d %02d:%02d:%02d Current User: %d Dispatch Time: MAX = %d, AVG = %.2f, CNT = %d\n",0x4(%esp)
+mov    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <fprintf>
+jmp    <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x465>
 mov    0x8(%ebp),%eax
 mov    0xe4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp9UDPThread12getUDPSocketEv>
+mov    %eax,-0x50(%ebp)
+cmpl   $0x0,-0x50(%ebp)
+jne    <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x361>
+mov    0x8(%ebp),%eax
+add    $0x24,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK15RelayServiceApp5Users15getDispatchCoutEv>
+mov    %eax,-0x4c(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x24,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK15RelayServiceApp5Users22getAverageDispatchTimeEv>
+fstpl  -0x48(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x24,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK15RelayServiceApp5Users18getMaxDispatchTimeEv>
+mov    %eax,-0x3c(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x24,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK15RelayServiceApp5Users22getCurrentMaxUserCountEv>
+test   %eax,%eax
+sete   %al
+test   %al,%al
+je     <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x2cc>
+mov    0x8(%ebp),%eax
+add    $0x24,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK15RelayServiceApp5Users12getUserCountEv>
+neg    %eax
+mov    %eax,-0x38(%ebp)
+jmp    <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x2dd>
+mov    0x8(%ebp),%eax
+add    $0x24,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK15RelayServiceApp5Users22getCurrentMaxUserCountEv>
+mov    %eax,-0x38(%ebp)
+mov    -0x6c(%ebp),%eax
+mov    (%eax),%esi
+mov    -0x6c(%ebp),%eax
+mov    0x4(%eax),%ebx
+mov    -0x6c(%ebp),%eax
+mov    0x8(%eax),%ecx
+mov    -0x6c(%ebp),%eax
+mov    0xc(%eax),%edx
+mov    -0x6c(%ebp),%eax
+mov    0x10(%eax),%eax
+add    $0x1,%eax
+mov    %eax,-0x190(%ebp)
+mov    -0x6c(%ebp),%eax
+mov    0x14(%eax),%eax
+lea    0x76c(%eax),%edi
+mov    -0x4c(%ebp),%eax
+mov    %eax,0x30(%esp)
+fldl   -0x48(%ebp)
+fstpl  0x28(%esp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,0x24(%esp)
+mov    -0x38(%ebp),%eax
+mov    %eax,0x20(%esp)
+mov    %esi,0x1c(%esp)
+mov    %ebx,0x18(%esp)
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    -0x190(%ebp),%ecx
+mov    %ecx,0xc(%esp)
+mov    %edi,0x8(%esp)
+movl   $"%02d/%02d/%02d %02d:%02d:%02d Current User: %d\tError UDPS2SSocket!! Not Auth mode\tDispatch Time: MAX = %d, AVG = %.2f, CNT = %d\n",0x4(%esp)
+mov    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <fprintf>
+jmp    <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x465>
+mov    0x8(%ebp),%eax
+add    $0x24,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK15RelayServiceApp5Users15getDispatchCoutEv>
+mov    %eax,-0x34(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x24,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK15RelayServiceApp5Users22getAverageDispatchTimeEv>
+fstpl  -0x30(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x24,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK15RelayServiceApp5Users18getMaxDispatchTimeEv>
+mov    %eax,-0x24(%ebp)
+mov    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN9UDPSocket21sizeMonitorAuthPacketEv>
+mov    %eax,-0x20(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x24,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK15RelayServiceApp5Users22getCurrentMaxUserCountEv>
+test   %eax,%eax
+sete   %al
+test   %al,%al
+je     <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x3ce>
+mov    0x8(%ebp),%eax
+add    $0x24,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK15RelayServiceApp5Users12getUserCountEv>
+neg    %eax
 mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-jne    <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x26f>
-mov    0x8(%ebp),%eax
-add    $0x24,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK15RelayServiceApp5Users15getDispatchCoutEv>
-mov    %eax,%ebx
-mov    0x8(%ebp),%eax
-add    $0x24,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK15RelayServiceApp5Users22getAverageDispatchTimeEv>
-fstpl  -0x190(%ebp)
-mov    0x8(%ebp),%eax
-add    $0x24,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK15RelayServiceApp5Users18getMaxDispatchTimeEv>
-mov    %eax,%esi
-mov    0x8(%ebp),%eax
-add    $0x24,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK15RelayServiceApp5Users22getCurrentMaxUserCountEv>
-test   %eax,%eax
-jne    <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x1ca>
-mov    0x8(%ebp),%eax
-add    $0x24,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK15RelayServiceApp5Users12getUserCountEv>
-mov    %eax,%ecx
-neg    %ecx
-jmp    <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x1da>
-mov    0x8(%ebp),%eax
-add    $0x24,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK15RelayServiceApp5Users22getCurrentMaxUserCountEv>
-mov    %eax,%ecx
+jmp    <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x3df>
+mov    0x8(%ebp),%eax
+add    $0x24,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK15RelayServiceApp5Users22getCurrentMaxUserCountEv>
+mov    %eax,-0x1c(%ebp)
+mov    -0x6c(%ebp),%eax
+mov    (%eax),%esi
+mov    -0x6c(%ebp),%eax
+mov    0x4(%eax),%ebx
+mov    -0x6c(%ebp),%eax
+mov    0x8(%eax),%ecx
+mov    -0x6c(%ebp),%eax
+mov    0xc(%eax),%edx
+mov    -0x6c(%ebp),%eax
+mov    0x10(%eax),%eax
+add    $0x1,%eax
+mov    %eax,-0x18c(%ebp)
+mov    -0x6c(%ebp),%eax
+mov    0x14(%eax),%eax
+lea    0x76c(%eax),%edi
+mov    -0x34(%ebp),%eax
+mov    %eax,0x34(%esp)
+fldl   -0x30(%ebp)
+fstpl  0x2c(%esp)
 mov    -0x24(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,-0x184(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    %eax,-0x180(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x8(%eax),%eax
-mov    %eax,-0x17c(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xc(%eax),%edi
-mov    -0x24(%ebp),%eax
-mov    0x10(%eax),%eax
-lea    0x1(%eax),%edx
-mov    -0x24(%ebp),%eax
-mov    0x14(%eax),%eax
-add    $0x76c,%eax
-mov    %ebx,0x30(%esp)
-fldl   -0x190(%ebp)
-fstpl  0x28(%esp)
-mov    %esi,0x24(%esp)
-mov    %ecx,0x20(%esp)
-mov    -0x184(%ebp),%ecx
-mov    %ecx,0x1c(%esp)
-mov    -0x180(%ebp),%ebx
+mov    %eax,0x28(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0x24(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x20(%esp)
+mov    %esi,0x1c(%esp)
 mov    %ebx,0x18(%esp)
-mov    -0x17c(%ebp),%ecx
 mov    %ecx,0x14(%esp)
-mov    %edi,0x10(%esp)
-mov    %edx,0xc(%esp)
-mov    %eax,0x8(%esp)
-movl   $"%02d/%02d/%02d %02d:%02d:%02d Current User: %d\tError UDPS2SSocket!! Not Auth mode\tDispatch Time: MAX = %d, AVG = %.2f, CNT = %d\n",0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    %edx,0x10(%esp)
+mov    -0x18c(%ebp),%eax
+mov    %eax,0xc(%esp)
+mov    %edi,0x8(%esp)
+movl   $"%02d/%02d/%02d %02d:%02d:%02d Current User: %d\tAuth Packet Queue: %d\tDispatch Time: MAX = %d, AVG = %.2f, CNT = %d\n",0x4(%esp)
+mov    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fprintf>
-jmp    <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x483>
-mov    0x8(%ebp),%eax
-add    $0x24,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK15RelayServiceApp5Users15getDispatchCoutEv>
-mov    %eax,%ebx
-mov    0x8(%ebp),%eax
-add    $0x24,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK15RelayServiceApp5Users22getAverageDispatchTimeEv>
-fstpl  -0x178(%ebp)
-mov    0x8(%ebp),%eax
-add    $0x24,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK15RelayServiceApp5Users18getMaxDispatchTimeEv>
-mov    %eax,%esi
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN9UDPSocket21sizeMonitorAuthPacketEv>
-mov    %eax,-0x170(%ebp)
-mov    0x8(%ebp),%eax
-add    $0x24,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK15RelayServiceApp5Users22getCurrentMaxUserCountEv>
-test   %eax,%eax
-jne    <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x2da>
-mov    0x8(%ebp),%eax
-add    $0x24,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK15RelayServiceApp5Users12getUserCountEv>
-mov    %eax,%ecx
-neg    %ecx
-jmp    <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x2ea>
-mov    0x8(%ebp),%eax
-add    $0x24,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK15RelayServiceApp5Users22getCurrentMaxUserCountEv>
-mov    %eax,%ecx
-mov    -0x24(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,-0x16c(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    %eax,-0x168(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x8(%eax),%eax
-mov    %eax,-0x164(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xc(%eax),%edi
-mov    -0x24(%ebp),%eax
-mov    0x10(%eax),%eax
-lea    0x1(%eax),%edx
-mov    -0x24(%ebp),%eax
-mov    0x14(%eax),%eax
-add    $0x76c,%eax
-mov    %ebx,0x34(%esp)
-fldl   -0x178(%ebp)
-fstpl  0x2c(%esp)
-mov    %esi,0x28(%esp)
-mov    -0x170(%ebp),%ebx
-mov    %ebx,0x24(%esp)
-mov    %ecx,0x20(%esp)
-mov    -0x16c(%ebp),%ecx
-mov    %ecx,0x1c(%esp)
-mov    -0x168(%ebp),%ebx
-mov    %ebx,0x18(%esp)
-mov    -0x164(%ebp),%ecx
-mov    %ecx,0x14(%esp)
-mov    %edi,0x10(%esp)
-mov    %edx,0xc(%esp)
-mov    %eax,0x8(%esp)
-movl   $"%02d/%02d/%02d %02d:%02d:%02d Current User: %d\tAuth Packet Queue: %d\tDispatch Time: MAX = %d, AVG = %.2f, CNT = %d\n",0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <fprintf>
-jmp    <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x483>
-mov    0x8(%ebp),%eax
-add    $0x24,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK15RelayServiceApp5Users15getDispatchCoutEv>
-mov    %eax,%ebx
-mov    0x8(%ebp),%eax
-add    $0x24,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK15RelayServiceApp5Users22getAverageDispatchTimeEv>
-fstpl  -0x160(%ebp)
-mov    0x8(%ebp),%eax
-add    $0x24,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK15RelayServiceApp5Users18getMaxDispatchTimeEv>
-mov    %eax,%esi
-mov    0x8(%ebp),%eax
-add    $0x24,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK15RelayServiceApp5Users22getCurrentMaxUserCountEv>
-test   %eax,%eax
-jne    <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x3e3>
-mov    0x8(%ebp),%eax
-add    $0x24,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK15RelayServiceApp5Users12getUserCountEv>
-mov    %eax,%ecx
-neg    %ecx
-jmp    <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x3f3>
-mov    0x8(%ebp),%eax
-add    $0x24,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK15RelayServiceApp5Users22getCurrentMaxUserCountEv>
-mov    %eax,%ecx
-mov    -0x24(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,-0x154(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    %eax,-0x150(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x8(%eax),%eax
-mov    %eax,-0x14c(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xc(%eax),%edi
-mov    -0x24(%ebp),%eax
-mov    0x10(%eax),%eax
-lea    0x1(%eax),%edx
-mov    -0x24(%ebp),%eax
-mov    0x14(%eax),%eax
-add    $0x76c,%eax
-mov    %ebx,0x30(%esp)
-fldl   -0x160(%ebp)
-fstpl  0x28(%esp)
-mov    %esi,0x24(%esp)
-mov    %ecx,0x20(%esp)
-mov    -0x154(%ebp),%ecx
-mov    %ecx,0x1c(%esp)
-mov    -0x150(%ebp),%ebx
-mov    %ebx,0x18(%esp)
-mov    -0x14c(%ebp),%ecx
-mov    %ecx,0x14(%esp)
-mov    %edi,0x10(%esp)
-mov    %edx,0xc(%esp)
-mov    %eax,0x8(%esp)
-movl   $"%02d/%02d/%02d %02d:%02d:%02d Current User: %d Dispatch Time: MAX = %d, AVG = %.2f, CNT = %d\n",0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <fprintf>
-mov    -0x20(%ebp),%eax
+mov    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fclose>
 mov    0x8(%ebp),%eax
 add    $0x24,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp5Users24clearCurrentMaxUserCountEv>
 mov    0x8(%ebp),%eax
 add    $0x24,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp5Users17clearDispatchTimeEv>
-jmp    <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x4cd>
+jmp    <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x4af>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp12RelayService10getTickLogEv>
 or     %edx,%eax
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x4cd>
+je     <T> <_ZN15RelayServiceApp12RelayService7makeLogEv+0x4af>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp12RelayService10setTickLogEv>
 add    $0x1cc,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Removing unreachable block (ram,0x08051caf) */
/* RelayServiceApp::RelayService::makeLog() */

void __thiscall
RelayServiceApp::RelayService::_ZN15RelayServiceApp12RelayService7makeLogEv(RelayService *this)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  byte bVar7;
  longdouble lVar8;
  longlong lVar9;
  char local_140 [256];
  time_t local_40;
  longlong local_3c;
  longlong local_34;
  tm *local_28;
  FILE *local_24;
  UDPSocket *local_20;
  
  bVar7 = 0;
  local_3c = getTick(this);
  local_34 = _ZN15RelayServiceApp12RelayService10getTickLogEv(this);
  local_34 = local_3c - local_34;
  lVar9 = _ZN15RelayServiceApp12RelayService10getTickLogEv(this);
  if ((lVar9 == 0) || (local_34 < 0xea61)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    setTickLog(this);
    local_40 = __divdi3(local_3c,1000,0);
    local_28 = localtime(&local_40);
    pcVar6 = local_140;
    for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6 = pcVar6 + ((uint)bVar7 * -2 + 1) * 4;
    }
    uVar2 = PortInfo::getTCPPort((PortInfo *)this);
    snprintf(local_140,0x100,"./log/Relay%4d%02d%02d_T%d.log",local_28->tm_year + 0x76c,
             local_28->tm_mon + 1,local_28->tm_mday,uVar2);
    local_24 = fopen(local_140,"a+");
    if (local_24 != (FILE *)0x0) {
      iVar5 = G_ScriptData();
      if (*(char *)(iVar5 + 0x34) == '\0') {
        uVar2 = Users::getDispatchCout((Users *)(this + 0x24));
        lVar8 = (longdouble)Users::getAverageDispatchTime((Users *)(this + 0x24));
        uVar3 = Users::getMaxDispatchTime((Users *)(this + 0x24));
        iVar5 = Users::getCurrentMaxUserCount((Users *)(this + 0x24));
        if (iVar5 == 0) {
          iVar5 = Users::getUserCount((Users *)(this + 0x24));
          iVar5 = -iVar5;
        }
        else {
          iVar5 = Users::getCurrentMaxUserCount((Users *)(this + 0x24));
        }
        fprintf(local_24,
                "%02d/%02d/%02d %02d:%02d:%02d Current User: %d Dispatch Time: MAX = %d, AVG = %.2f, CNT = %d\n"
                ,local_28->tm_year + 0x76c,local_28->tm_mon + 1,local_28->tm_mday,local_28->tm_hour,
                local_28->tm_min,local_28->tm_sec,iVar5,uVar3,SUB84((double)lVar8,0),
                (int)((ulonglong)(double)lVar8 >> 0x20),uVar2);
      }
      else {
        local_20 = (UDPSocket *)UDPThread::getUDPSocket(*(UDPThread **)(this + 0xe4));
        if (local_20 == (UDPSocket *)0x0) {
          uVar2 = Users::getDispatchCout((Users *)(this + 0x24));
          lVar8 = (longdouble)Users::getAverageDispatchTime((Users *)(this + 0x24));
          uVar3 = Users::getMaxDispatchTime((Users *)(this + 0x24));
          iVar5 = Users::getCurrentMaxUserCount((Users *)(this + 0x24));
          if (iVar5 == 0) {
            iVar5 = Users::getUserCount((Users *)(this + 0x24));
            iVar5 = -iVar5;
          }
          else {
            iVar5 = Users::getCurrentMaxUserCount((Users *)(this + 0x24));
          }
          fprintf(local_24,
                  "%02d/%02d/%02d %02d:%02d:%02d Current User: %d\tError UDPS2SSocket!! Not Auth mode\tDispatch Time: MAX = %d, AVG = %.2f, CNT = %d\n"
                  ,local_28->tm_year + 0x76c,local_28->tm_mon + 1,local_28->tm_mday,
                  local_28->tm_hour,local_28->tm_min,local_28->tm_sec,iVar5,uVar3,
                  SUB84((double)lVar8,0),(int)((ulonglong)(double)lVar8 >> 0x20),uVar2);
        }
        else {
          uVar2 = Users::getDispatchCout((Users *)(this + 0x24));
          lVar8 = (longdouble)Users::getAverageDispatchTime((Users *)(this + 0x24));
          uVar3 = Users::getMaxDispatchTime((Users *)(this + 0x24));
          uVar4 = UDPSocket::sizeMonitorAuthPacket(local_20);
          iVar5 = Users::getCurrentMaxUserCount((Users *)(this + 0x24));
          if (iVar5 == 0) {
            iVar5 = Users::getUserCount((Users *)(this + 0x24));
            iVar5 = -iVar5;
          }
          else {
            iVar5 = Users::getCurrentMaxUserCount((Users *)(this + 0x24));
          }
          fprintf(local_24,
                  "%02d/%02d/%02d %02d:%02d:%02d Current User: %d\tAuth Packet Queue: %d\tDispatch Time: MAX = %d, AVG = %.2f, CNT = %d\n"
                  ,local_28->tm_year + 0x76c,local_28->tm_mon + 1,local_28->tm_mday,
                  local_28->tm_hour,local_28->tm_min,local_28->tm_sec,iVar5,uVar4,uVar3,
                  SUB84((double)lVar8,0),(int)((ulonglong)(double)lVar8 >> 0x20),uVar2);
        }
      }
      fclose(local_24);
      Users::clearCurrentMaxUserCount((Users *)(this + 0x24));
      Users::clearDispatchTime((Users *)(this + 0x24));
    }
  }
  else {
    lVar9 = _ZN15RelayServiceApp12RelayService10getTickLogEv(this);
    if (lVar9 == 0) {
      setTickLog(this);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/RelayService.cpp](source/DNFServer/GameServer/Relay/RelayService.cpp)（约第 284 行）：

```cpp
void RelayService::makeLog()
{
    long long tick = getTick();
    long long diff = tick - getTickLog();
    if (getTickLog() != 0 && diff >= 0xea61)
    {
        setTickLog();
        time_t t = (time_t)(tick / 1000);
        tm* tm_now = localtime(&t);
        char filename[256] = {0};
        snprintf(filename, 0x100, "./log/Relay%4d%02d%02d_T%d.log",
                 tm_now->tm_year + 1900, tm_now->tm_mon + 1, tm_now->tm_mday,
                 m_portInfo.getTCPPort());
        FILE* f = fopen(filename, "a+");
        if (f != 0)
        {
            if (!G_ScriptData()->mFlag)
            {
                int count = m_users.getDispatchCout();
                double avg = m_users.getAverageDispatchTime();
                int max = m_users.getMaxDispatchTime();
                int cur;
                if (m_users.getCurrentMaxUserCount() == 0)
                {
                    cur = -m_users.getUserCount();
                }
                else
                {
                    cur = m_users.getCurrentMaxUserCount();
                }
                fprintf(f,
                    "%02d/%02d/%02d %02d:%02d:%02d Current User: %d Dispatch Time: MAX = %d, AVG = %.2f, CNT = %d\n",
                    tm_now->tm_year + 1900, tm_now->tm_mon + 1, tm_now->tm_mday,
                    tm_now->tm_hour, tm_now->tm_min, tm_now->tm_sec, cur, max, avg, count);
            }
                else
                {
                    UDPSocket* udp = m_threads.m_udpS2SThread->getUDPSocket();
                if (udp == 0)
                {
                    int count = m_users.getDispatchCout();
                    double avg = m_users.getAverageDispatchTime();
                    int max = m_users.getMaxDispatchTime();
                    int cur;
                    if (m_users.getCurrentMaxUserCount() == 0)
                    {
                        cur = -m_users.getUserCount();
                    }
                    else
                    {
                        cur = m_users.getCurrentMaxUserCount();
                    }
                    fprintf(f,
                        "%02d/%02d/%02d %02d:%02d:%02d Current User: %d\tError UDPS2SSocket!! Not Auth mode\tDispatch Time: MAX = %d, AVG = %.2f, CNT = %d\n",
                        tm_now->tm_year + 1900, tm_now->tm_mon + 1, tm_now->tm_mday,
                        tm_now->tm_hour, tm_now->tm_min, tm_now->tm_sec, cur, max, avg, count);
                }
                else
                {
                    int count = m_users.getDispatchCout();
                    double avg = m_users.getAverageDispatchTime();
                    int max = m_users.getMaxDispatchTime();
                    int qsize = udp->sizeMonitorAuthPacket();
                    int cur;
                    if (m_users.getCurrentMaxUserCount() == 0)
                    {
                        cur = -m_users.getUserCount();
                    }
                    else
                    {
                        cur = m_users.getCurrentMaxUserCount();
                    }
                    fprintf(f,
                        "%02d/%02d/%02d %02d:%02d:%02d Current User: %d\tAuth Packet Queue: %d\tDispatch Time: MAX = %d, AVG = %.2f, CNT = %d\n",
                        tm_now->tm_year + 1900, tm_now->tm_mon + 1, tm_now->tm_mday,
                        tm_now->tm_hour, tm_now->tm_min, tm_now->tm_sec, cur, qsize, max, avg, count);
                }
            }
            fclose(f);
            m_users.clearCurrentMaxUserCount();
            m_users.clearDispatchTime();
        }
    }
    else
    {
        if (getTickLog() == 0)
        {
            setTickLog();
        }
    }
}
```

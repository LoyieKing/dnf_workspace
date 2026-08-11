# _ZN12CApplication7ProcessEv

`CApplication::Process()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8056a3c` | `0x4e8` | `0x804db7c` | `0x522` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,309 +1,321 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
 push   %esi
 push   %ebx
-sub    $0x187c,%esp
-lea    -0x1860(%ebp),%ebx
-mov    $0x0,%eax
-mov    $0x600,%edx
-mov    %ebx,%edi
-mov    %edx,%ecx
-rep stos %eax,%es:(%edi)
-lea    -0x1860(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-jmp    <T> <_ZN12CApplication7ProcessEv+0x4ce>
+sub    $0x1870,%esp
+lea    -0x1858(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+movl   $0x600,-0x14(%ebp)
+jmp    <T> <_ZN12CApplication7ProcessEv+0x2e>
+mov    -0x1c(%ebp),%eax
+movl   $0x0,(%eax)
+addl   $0x4,-0x1c(%ebp)
+subl   $0x1,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+setne  %al
+test   %al,%al
+jne    <T> <_ZN12CApplication7ProcessEv+0x1d>
+lea    -0x1858(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+jmp    <T> <_ZN12CApplication7ProcessEv+0x509>
 movl   $0x1,0x4(%esp)
 movl   $0x0,(%esp)
 call   <T> <_ZN7DNFFLib9Sleep_ExtEii>
 mov    0x8(%ebp),%eax
 add    $0x29c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv>
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 movzbl 0x24(%eax),%eax
 test   %al,%al
-je     <T> <_ZN12CApplication7ProcessEv+0x1b6>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZN12CApplication7ProcessEv+0x1cd>
+mov    -0x10(%ebp),%eax
 movzbl 0x24(%eax),%eax
 cmp    $0x1,%al
-jbe    <T> <_ZN12CApplication7ProcessEv+0x1b6>
+jbe    <T> <_ZN12CApplication7ProcessEv+0x1cd>
 mov    0x8(%ebp),%eax
 mov    0x298(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler7ProcessEv>
 mov    0x8(%ebp),%eax
 mov    0x298(%eax),%eax
 mov    0x8(%ebp),%edx
 add    $0x84,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN17FrameLagCollector8LoadSpecEP14CServerHandler>
-mov    -0x20(%ebp),%eax
+mov    -0x10(%ebp),%eax
 movzbl 0x24(%eax),%eax
 cmp    $0x3,%al
-jne    <T> <_ZN12CApplication7ProcessEv+0x1b6>
+jne    <T> <_ZN12CApplication7ProcessEv+0x1cd>
 mov    0x8(%ebp),%eax
 add    $0x29c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CFrameCountHandler11SaveProcessEv>
 mov    0x8(%ebp),%eax
 mov    0x298(%eax),%eax
 mov    0x8(%ebp),%edx
 add    $0x18,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN17CHWSpecResearcher13DBSaveProcessEP14CServerHandler>
 mov    0x8(%ebp),%eax
 mov    0x298(%eax),%eax
 mov    0x8(%ebp),%edx
 add    $0x32c,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN16StatisticManager13DBSaveProcessEP14CServerHandler>
 mov    0x8(%ebp),%eax
 mov    0x298(%eax),%eax
 mov    0x8(%ebp),%edx
 add    $0x84,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN17FrameLagCollector10ReLoadSpecEP14CServerHandler>
 mov    0x8(%ebp),%eax
 mov    0x298(%eax),%eax
 mov    0x8(%ebp),%edx
 add    $0x84,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler>
 mov    0x8(%ebp),%eax
 add    $0x84,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17FrameLagCollector10RenewTodayEv>
 mov    0x8(%ebp),%eax
 mov    0x298(%eax),%eax
 mov    0x8(%ebp),%edx
 add    $0x84,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN17FrameLagCollector27SaveCollectedDirectxVersionEP14CServerHandler>
 mov    0x8(%ebp),%eax
 mov    0x298(%eax),%eax
 mov    0x8(%ebp),%edx
 add    $0x84,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN17FrameLagCollector14SaveUsedMemoryEP14CServerHandler>
 mov    0x8(%ebp),%eax
 add    $0x84,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17FrameLagCollector18GetCollectIntervalEv>
 mov    0x8(%ebp),%edx
 mov    0x298(%edx),%edx
 mov    0x8(%ebp),%ecx
 add    $0x26c,%ecx
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN17UdpCharacteristic25SaveUdpCharacteristicDataEP14CServerHandleri>
 movl   $0x1800,0x8(%esp)
 movl   $0x0,0x4(%esp)
-lea    -0x1860(%ebp),%eax
+lea    -0x1858(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
-movl   $0x1800,-0x58(%ebp)
+movl   $0x1800,-0x20(%ebp)
+movl   $0x0,-0x24(%ebp)
+movw   $0x0,-0x26(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x2f8(%eax),%eax
-lea    -0x5a(%ebp),%edx
+lea    -0x26(%ebp),%edx
 mov    %edx,0x10(%esp)
-lea    -0x60(%ebp),%edx
+lea    -0x24(%ebp),%edx
 mov    %edx,0xc(%esp)
-lea    -0x58(%ebp),%edx
+lea    -0x20(%ebp),%edx
 mov    %edx,0x8(%esp)
-lea    -0x1860(%ebp),%edx
+lea    -0x1858(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt>
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN12CApplication7ProcessEv+0x4cd>
+cmp    $0x1,%eax
+sete   %al
+test   %al,%al
+je     <T> <_ZN12CApplication7ProcessEv+0x509>
+mov    -0x18(%ebp),%eax
+add    $0x2,%eax
+movzwl (%eax),%eax
+movzwl %ax,%edx
+mov    -0x20(%ebp),%eax
+cmp    %eax,%edx
+jne    <T> <_ZN12CApplication7ProcessEv+0x3a4>
+mov    -0x18(%ebp),%eax
+add    $0x2,%eax
+movzwl (%eax),%eax
+cmp    $0x17ff,%ax
+ja     <T> <_ZN12CApplication7ProcessEv+0x345>
+mov    -0x20(%ebp),%eax
+cmp    $0x1800,%eax
+jg     <T> <_ZN12CApplication7ProcessEv+0x2e6>
+mov    -0x18(%ebp),%eax
+lea    0x6(%eax),%edx
 mov    -0x24(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%edx
-mov    -0x58(%ebp),%eax
-cmp    %eax,%edx
-je     <T> <_ZN12CApplication7ProcessEv+0x284>
-mov    -0x24(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%edi
-mov    -0x58(%ebp),%esi
-mov    -0x24(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%ebx
+mov    %eax,(%edx)
+mov    -0x18(%ebp),%eax
+lea    0x4(%eax),%edx
+movzwl -0x26(%ebp),%eax
+mov    %ax,(%edx)
+call   <T> <_Z22CPacketDecoderInstancev>
+mov    -0x18(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader>
+cmp    $0x1,%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN12CApplication7ProcessEv+0x509>
+movl   $0x22a,0x8(%esp)
+movl   $"Process",0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"CPacketDecoder::MsgDecode() Undefined Packet Arrived Exception Break!",0x8(%esp)
+movl   $"./log/recv",0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN12CApplication7ProcessEv+0x509>
+movl   $0x219,0x8(%esp)
+movl   $"Process",0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x18(%ebp),%eax
+movzwl (%eax),%eax
+movzwl %ax,%ecx
+mov    -0x20(%ebp),%edx
+mov    -0x18(%ebp),%eax
+add    $0x2,%eax
+movzwl (%eax),%eax
+movzwl %ax,%eax
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
+movl   $"Recv Byte is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",0x8(%esp)
+movl   $"./log/recvErr",0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN12CApplication7ProcessEv+0x509>
+movl   $0x212,0x8(%esp)
+movl   $"Process",0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x18(%ebp),%eax
+movzwl (%eax),%eax
+movzwl %ax,%ecx
+mov    -0x20(%ebp),%edx
+mov    -0x18(%ebp),%eax
+add    $0x2,%eax
+movzwl (%eax),%eax
+movzwl %ax,%eax
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
+movl   $"Packet Size is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",0x8(%esp)
+movl   $"./log/recvErr",0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN12CApplication7ProcessEv+0x509>
 movl   $0x20c,0x8(%esp)
 movl   $"Process",0x4(%esp)
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x18(%ebp),%eax
+movzwl (%eax),%eax
+movzwl %ax,%ecx
+mov    -0x20(%ebp),%edx
+mov    -0x18(%ebp),%eax
+add    $0x2,%eax
+movzwl (%eax),%eax
+movzwl %ax,%eax
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"Packet Size is Incorrect! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",0x8(%esp)
 movl   $"./log/recvErr",0x4(%esp)
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN12CApplication7ProcessEv+0x4ce>
-mov    -0x24(%ebp),%eax
-movzwl 0x2(%eax),%eax
-cmp    $0x17ff,%ax
-jbe    <T> <_ZN12CApplication7ProcessEv+0x2ee>
-mov    -0x24(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%edi
-mov    -0x58(%ebp),%esi
-mov    -0x24(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%ebx
-movl   $0x212,0x8(%esp)
-movl   $"Process",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"Packet Size is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",0x8(%esp)
-movl   $"./log/recvErr",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN12CApplication7ProcessEv+0x4ce>
-mov    -0x58(%ebp),%eax
-cmp    $0x1800,%eax
-jbe    <T> <_ZN12CApplication7ProcessEv+0x355>
-mov    -0x24(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%edi
-mov    -0x58(%ebp),%esi
-mov    -0x24(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%ebx
-movl   $0x219,0x8(%esp)
-movl   $"Process",0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"Recv Byte is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",0x8(%esp)
-movl   $"./log/recvErr",0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN12CApplication7ProcessEv+0x4ce>
-mov    -0x60(%ebp),%edx
-mov    -0x24(%ebp),%eax
-mov    %edx,0x6(%eax)
-movzwl -0x5a(%ebp),%edx
-mov    -0x24(%ebp),%eax
-mov    %dx,0x4(%eax)
-call   <T> <_Z22CPacketDecoderInstancev>
-mov    -0x24(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN12CApplication7ProcessEv+0x4ce>
-movl   $0x22a,0x8(%esp)
-movl   $"Process",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketDecoder::MsgDecode() Undefined Packet Arrived Exception Break!",0x8(%esp)
-movl   $"./log/recv",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN12CApplication7ProcessEv+0x4ce>
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN12CApplication7ProcessEv+0x509>
 cmp    $0x2,%edx
-jne    <T> <_ZN12CApplication7ProcessEv+0x465>
+jne    <T> <_ZN12CApplication7ProcessEv+0x4a3>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %eax,0x4(%esp)
 movl   $"CApplication::Process() Exception Break : %s\n",(%esp)
 call   <T> <printf>
-mov    -0x1c(%ebp),%eax
+movl   $0x22e,0x8(%esp)
+movl   $"Process",0x4(%esp)
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
-movl   $0x234,0x8(%esp)
-movl   $"Process",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0xc(%esp)
 movl   $"CApplication::Process() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/process",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN12CApplication7ProcessEv+0x45e>
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN12CApplication7ProcessEv+0x49c>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN12CApplication7ProcessEv+0x4ce>
+jmp    <T> <_ZN12CApplication7ProcessEv+0x509>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CApplication::Process() Exception Break",(%esp)
 call   <T> <puts>
-movl   $0x239,0x8(%esp)
-movl   $"Process",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+movl   $0x233,0x8(%esp)
+movl   $"Process",0x4(%esp)
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CApplication::Process() Exception Break\n",0x8(%esp)
 movl   $"./log/process",0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN12CApplication7ProcessEv+0x4c6>
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN12CApplication7ProcessEv+0x504>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN12CApplication7ProcessEv+0x4ce>
-nop
 mov    0x8(%ebp),%eax
 movzbl 0x4(%eax),%eax
 test   %al,%al
-jne    <T> <_ZN12CApplication7ProcessEv+0x30>
-add    $0x187c,%esp
+jne    <T> <_ZN12CApplication7ProcessEv+0x47>
+add    $0x1870,%esp
 pop    %ebx
 pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CApplication::Process() */

void __thiscall CApplication::_ZN12CApplication7ProcessEv(CApplication *this)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  CPacketDecoder *this_00;
  int iVar5;
  PacketHeader *pPVar6;
  PacketHeader local_1864 [6144];
  uint local_64;
  ushort local_5e;
  uint local_5c;
  CMyFileLog local_58 [8];
  CMyFileLog local_50 [8];
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [24];
  PacketHeader *local_28;
  int local_24;
  
  pPVar6 = local_1864;
  for (iVar5 = 0x600; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pPVar6 = 0;
    pPVar6 = pPVar6 + 4;
  }
  local_28 = local_1864;
  while (this[4] != (CApplication)0x0) {
                    /* try { // try from 08056a7b to 08056df9 has its CatchHandler @ 08056dff */
    DNFFLib::Sleep_Ext(0,1);
    local_24 = CFrameCountHandler::GetFrameCountInfo((CFrameCountHandler *)(this + 0x29c));
    if ((*(char *)(local_24 + 0x24) != '\0') && (1 < *(byte *)(local_24 + 0x24))) {
      CServerHandler::Process(*(CServerHandler **)(this + 0x298));
      FrameLagCollector::LoadSpec
                ((FrameLagCollector *)(this + 0x84),*(CServerHandler **)(this + 0x298));
      if (*(char *)(local_24 + 0x24) == '\x03') {
        CFrameCountHandler::SaveProcess((CFrameCountHandler *)(this + 0x29c));
        CHWSpecResearcher::DBSaveProcess
                  ((CHWSpecResearcher *)(this + 0x18),*(CServerHandler **)(this + 0x298));
        StatisticManager::DBSaveProcess
                  ((StatisticManager *)(this + 0x32c),*(CServerHandler **)(this + 0x298));
        FrameLagCollector::ReLoadSpec
                  ((FrameLagCollector *)(this + 0x84),*(CServerHandler **)(this + 0x298));
        FrameLagCollector::SaveFrameLagData
                  ((FrameLagCollector *)(this + 0x84),*(CServerHandler **)(this + 0x298));
        FrameLagCollector::RenewToday((FrameLagCollector *)(this + 0x84));
        FrameLagCollector::SaveCollectedDirectxVersion
                  ((FrameLagCollector *)(this + 0x84),*(CServerHandler **)(this + 0x298));
        FrameLagCollector::SaveUsedMemory
                  ((FrameLagCollector *)(this + 0x84),*(CServerHandler **)(this + 0x298));
        iVar5 = FrameLagCollector::GetCollectInterval((FrameLagCollector *)(this + 0x84));
        UdpCharacteristic::SaveUdpCharacteristicData
                  ((UdpCharacteristic *)(this + 0x26c),*(CServerHandler **)(this + 0x298),iVar5);
      }
    }
    memset(local_1864,0,0x1800);
    local_5c = 0x1800;
    cVar4 = CUdpHandler::RecvFromClient
                      (*(CUdpHandler **)(this + 0x2f8),(char *)local_1864,(int *)&local_5c,&local_64
                       ,&local_5e);
    uVar3 = local_5c;
    if (cVar4 == '\x01') {
      if (*(ushort *)(local_28 + 2) == local_5c) {
        if (*(ushort *)(local_28 + 2) < 0x1800) {
          if (local_5c < 0x1801) {
            *(uint *)(local_28 + 6) = local_64;
            *(ushort *)(local_28 + 4) = local_5e;
            this_00 = (CPacketDecoder *)CPacketDecoderInstance();
            cVar4 = CPacketDecoder::MsgDecode(this_00,local_28);
            if (cVar4 != '\x01') {
              CMyFileLog::CMyFileLog(local_40,"Process",0x22a);
              CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                        (local_40,"./log/recv",
                         "CPacketDecoder::MsgDecode() Undefined Packet Arrived Exception Break!");
            }
          }
          else {
            uVar1 = *(ushort *)local_28;
            uVar2 = *(ushort *)(local_28 + 2);
            CMyFileLog::CMyFileLog(local_48,"Process",0x219);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_48,"./log/recvErr",
                       "Recv Byte is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                       (uint)uVar2,uVar3,(uint)uVar1);
          }
        }
        else {
          uVar1 = *(ushort *)local_28;
          uVar2 = *(ushort *)(local_28 + 2);
          CMyFileLog::CMyFileLog(local_50,"Process",0x212);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_50,"./log/recvErr",
                     "Packet Size is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                     (uint)uVar2,uVar3,(uint)uVar1);
        }
      }
      else {
        uVar1 = *(ushort *)local_28;
        uVar2 = *(ushort *)(local_28 + 2);
        CMyFileLog::CMyFileLog(local_58,"Process",0x20c);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_58,"./log/recvErr",
                   "Packet Size is Incorrect! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                   (uint)uVar2,uVar3,(uint)uVar1);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFApplication.cpp](source/DNFServer/GameServer/COServer/DNFApplication.cpp)（约第 252 行）：

```cpp
void CApplication::Process()
{
    while (m_loaded)
    {
        try
        {
            CFrameCountHandler* f = m_frame.GetFrameCountInfo();
            if (f->m_state != 0 && 1 < (unsigned char)f->m_state)
            {
                m_serverHandler->Process();
                if (f->m_state == 3)
                {
                    m_frame.SaveProcess(9999);
                }
            }
            DNFFLib::Sleep_Ext(0, 1);
        }
        catch (CDNFException& e)
        {
            printf("CApplication::Process() Exception Break : %s\n", e.what());
            register const char* msg = e.what();
            DNF_LOG_SCOPE_LINE(0x1ec, "./log/process", "CApplication::Process() Exception Break : %s\n", msg);
        }
        catch (...)
        {
            puts("CApplication::Process() Exception Break");
            DNF_LOG_SCOPE_LINE(0x1f1, "./log/process", "CApplication::Process() Exception Break\n");
        }
    }
}
```

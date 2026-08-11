# _ZN14CPacketDecoder9MsgDecodeEP12PacketHeader

`CPacketDecoder::MsgDecode(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80915e6` | `0x1e9` | `0x80cddd6` | `0x1e8` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,128 +1,127 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x2c,%esp
 cmpl   $0x0,0xc(%ebp)
 jne    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x19>
 mov    $0x0,%eax
-jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x1e1>
+jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x1e0>
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 cmp    $0x27ff,%ax
-ja     <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x180>
+ja     <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x17f>
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 cmp    $0x3e7,%ax
-jbe    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x180>
+jbe    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x17f>
 mov    $&_ZGVZN14CPacketDecoder9MsgDecodeEP12PacketHeaderE14packet_counter,%eax
 movzbl (%eax),%eax
 test   %al,%al
 jne    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0xca>
 movl   $&_ZGVZN14CPacketDecoder9MsgDecodeEP12PacketHeaderE14packet_counter,(%esp)
 call   <T> <__cxa_guard_acquire>
 test   %eax,%eax
 setne  %al
 test   %al,%al
 je     <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0xca>
 mov    $0x0,%ebx
 movl   $"PacketDispatcher",0x8(%esp)
 movl   $0x0,0x4(%esp)
 movl   $&_ZZN14CPacketDecoder9MsgDecodeEP12PacketHeaderE14packet_counter,(%esp)
 call   <T> <_ZN14CPacketCounterILi1000ELi10240EEC1EPcS1_>
 movl   $&_ZGVZN14CPacketDecoder9MsgDecodeEP12PacketHeaderE14packet_counter,(%esp)
 call   <T> <__cxa_guard_release>
 mov    $&_ZN14CPacketCounterILi1000ELi10240EED1Ev,%eax
 movl   $&__dso_handle,0x8(%esp)
 movl   $&_ZZN14CPacketDecoder9MsgDecodeEP12PacketHeaderE14packet_counter,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <__cxa_atexit>
 jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0xca>
 mov    %edx,%esi
 mov    %eax,%edi
 test   %bl,%bl
 jne    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0xbe>
 movl   $&_ZGVZN14CPacketDecoder9MsgDecodeEP12PacketHeaderE14packet_counter,(%esp)
 call   <T> <__cxa_guard_abort>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%eax
 mov    %eax,0x4(%esp)
 movl   $&_ZZN14CPacketDecoder9MsgDecodeEP12PacketHeaderE14packet_counter,(%esp)
 call   <T> <_ZN14CPacketCounterILi1000ELi10240EE20IncrementPacketCountEi>
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%edx
 mov    0x8(%ebp),%eax
 add    $0x4,%edx
 mov    0xc(%eax,%edx,4),%eax
 test   %eax,%eax
 jne    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x104>
 mov    $0x0,%eax
-jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x1e1>
+jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x1e0>
 movl   $&_ZZN14CPacketDecoder9MsgDecodeEP12PacketHeaderE14packet_counter,(%esp)
 call   <T> <_ZN14CPacketCounterILi1000ELi10240EE13BeforeProcessEv>
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%ebx
 call   <T> <_Z21CPacketTracerInstancev>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CPacketTracer21StartPacketProcessLogEj>
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%edx
 mov    0x8(%ebp),%eax
 add    $0x4,%edx
-mov    0xc(%eax,%edx,4),%edx
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    0xc(%eax,%edx,4),%eax
+mov    0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%ebx
 call   <T> <_Z21CPacketTracerInstancev>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CPacketTracer19EndPacketProcessLogEj>
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%eax
 mov    %eax,0x4(%esp)
 movl   $&_ZZN14CPacketDecoder9MsgDecodeEP12PacketHeaderE14packet_counter,(%esp)
 call   <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi>
-nop
 mov    $0x1,%eax
-jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x1e1>
+jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x1e0>
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%eax
 mov    %eax,0x4(%esp)
 movl   $"Game Message with identifier %i has arrived.\n",(%esp)
 call   <T> <printf>
-mov    0xc(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%ebx
 movl   $0x1da,0x8(%esp)
 movl   $&_ZZN14CPacketDecoder9MsgDecodeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    0xc(%ebp),%eax
+movzwl (%eax),%eax
+movzwl %ax,%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketDecoder::MsgDecode() Game Message with identifier %i has arrived.\n",0x8(%esp)
 movl   $"./log/Decoder.log",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
 add    $0x2c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketDecoder::MsgDecode(PacketHeader*) */

undefined4 __thiscall
CPacketDecoder::_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader
          (CPacketDecoder *this,PacketHeader *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  CMyFileLog local_24 [20];
  
  if (param_1 == (PacketHeader *)0x0) {
    uVar2 = 0;
  }
  else if ((*(ushort *)param_1 < 0x2800) && (999 < *(ushort *)param_1)) {
    if (MsgDecode(PacketHeader*)::packet_counter == '\0') {
      iVar3 = __cxa_guard_acquire(&MsgDecode(PacketHeader*)::packet_counter);
      if (iVar3 != 0) {
                    /* try { // try from 08091660 to 08091664 has its CatchHandler @ 08091690 */
        CPacketCounter<1000,10240>::_ZN14CPacketCounterILi1000ELi10240EEC2EPcS1_
                  ((CPacketCounter<1000,10240> *)MsgDecode(PacketHeader*)::packet_counter,
                   (char *)0x0,"PacketDispatcher");
        __cxa_guard_release(&MsgDecode(PacketHeader*)::packet_counter);
        __cxa_atexit(CPacketCounter<1000,10240>::~CPacketCounter,
                     MsgDecode(PacketHeader*)::packet_counter,&__dso_handle);
      }
    }
    CPacketCounter<1000,10240>::_ZN14CPacketCounterILi1000ELi10240EE20IncrementPacketCountEi
              ((CPacketCounter<1000,10240> *)MsgDecode(PacketHeader*)::packet_counter,
               (uint)*(ushort *)param_1);
    if (*(int *)(this + (*(ushort *)param_1 + 4) * 4 + 0xc) == 0) {
      uVar2 = 0;
    }
    else {
      CPacketCounter<1000,10240>::_ZN14CPacketCounterILi1000ELi10240EE13BeforeProcessEv
                ((CPacketCounter<1000,10240> *)MsgDecode(PacketHeader*)::packet_counter);
      uVar5 = (uint)*(ushort *)param_1;
      uVar4 = CPacketTracerInstance();
      CPacketTracer::_ZN13CPacketTracer21StartPacketProcessLogEj(uVar4);
      (**(code **)(this + (*(ushort *)param_1 + 4) * 4 + 0xc))(param_1,uVar5);
      uVar4 = CPacketTracerInstance();
      CPacketTracer::_ZN13CPacketTracer19EndPacketProcessLogEj(uVar4);
      CPacketCounter<1000,10240>::_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi
                ((CPacketCounter<1000,10240> *)MsgDecode(PacketHeader*)::packet_counter,
                 (uint)*(ushort *)param_1);
      uVar2 = 1;
    }
  }
  else {
    printf("Game Message with identifier %i has arrived.\n",(uint)*(ushort *)param_1);
    uVar1 = *(ushort *)param_1;
    CMyFileLog::CMyFileLog(local_24,"MsgDecode",0x1da);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_24,"./log/Decoder.log",
               "CPacketDecoder::MsgDecode() Game Message with identifier %i has arrived.\n",
               (uint)uVar1);
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketDecoder.cpp](source/DNFServer/GameServer/DBMW/DNFPacketDecoder.cpp)（约第 238 行）：

```cpp
bool CPacketDecoder::MsgDecode(PacketHeader* header)
{
    if (!header)
        return 0;
    if (header->packetId <= 0x27ff && header->packetId > 0x3e7)
    {
        static CPacketCounter<1000, 10240> packet_counter(0, "PacketDispatcher");
        packet_counter.IncrementPacketCount(header->packetId);
        if (!m_table[header->packetId])
            return 0;
        packet_counter.BeforeProcess();
        CPacketTracerInstance()->StartPacketProcessLog(header->packetId);
        m_table[header->packetId](header);
        CPacketTracerInstance()->EndPacketProcessLog(header->packetId);
        packet_counter.AfterProcess(header->packetId);
        return 1;
    }
    printf("Game Message with identifier %i has arrived.\n", header->packetId);
    CMyFileLog log(__FUNCTION__, 0x1da);
    log("./log/Decoder.log",
        "CPacketDecoder::MsgDecode() Game Message with identifier %i has arrived.\n",
        header->packetId);
    return 0;
}
```

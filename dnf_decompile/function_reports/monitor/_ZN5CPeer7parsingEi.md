# _ZN5CPeer7parsingEi

`CPeer::parsing(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80513d4` | `0x489` | `0x809bc50` | `0x442` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,289 +1,271 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x7c,%esp
 movl   $0x0,0x8(%esp)
 movl   $0x0,0x4(%esp)
 lea    -0x5a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
-mov    0x1820(%eax),%edx
-mov    0xc(%ebp),%eax
-lea    (%edx,%eax,1),%eax
-mov    %eax,-0x24(%ebp)
-movl   $0xa,-0x1c(%ebp)
-cmpl   $0x9,-0x24(%ebp)
-jg     <T> <_ZN5CPeer7parsingEi+0xe1>
-mov    0x8(%ebp),%eax
-mov    0x1820(%eax),%edx
-mov    0xc(%ebp),%eax
-add    %eax,%edx
+mov    0x1820(%eax),%eax
+add    0xc(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+movl   $0xa,-0x24(%ebp)
+mov    -0x28(%ebp),%eax
+cmp    $0x9,%eax
+jg     <T> <_ZN5CPeer7parsingEi+0xda>
+mov    0x8(%ebp),%eax
+mov    0x1820(%eax),%eax
+mov    %eax,%edx
+add    0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x1820(%eax)
 mov    0x8(%ebp),%eax
 mov    0x181c(%eax),%edx
 mov    0xc(%ebp),%eax
 add    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x181c(%eax)
 mov    0x8(%ebp),%eax
 mov    0x1820(%eax),%esi
 mov    0x8(%ebp),%eax
 lea    0x1c(%eax),%edi
 mov    0x8(%ebp),%eax
 mov    0x181c(%eax),%ebx
 movl   $0xbb,0x8(%esp)
 movl   $&_ZZN5CPeer7parsingEiE12__FUNCTION__,0x4(%esp)
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0xc(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %esi,0x14(%esp)
 mov    %edi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"(offset:%x - buf:%x) = remainlen:%d, Recv Size[%d] ",0x8(%esp)
 movl   $"./log/TcpRecv",0x4(%esp)
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x1,%ebx
-jmp    <T> <_ZN5CPeer7parsingEi+0x47f>
-nop
+jmp    <T> <_ZN5CPeer7parsingEi+0x435>
 mov    0x8(%ebp),%eax
 mov    0x1820(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN5CPeer7parsingEi+0x10d>
+je     <T> <_ZN5CPeer7parsingEi+0x106>
 mov    0x8(%ebp),%eax
 mov    0x181c(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x1820(%eax),%eax
 neg    %eax
 add    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x181c(%eax)
 mov    0x8(%ebp),%eax
 mov    0x181c(%eax),%eax
 movl   $0xa,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x5a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-movzwl -0x58(%ebp),%eax
+lea    -0x5a(%ebp),%eax
+movzwl 0x2(%eax),%eax
 movzwl %ax,%eax
 mov    %eax,-0x20(%ebp)
 cmpl   $0x9,-0x20(%ebp)
-jbe    <T> <_ZN5CPeer7parsingEi+0x14a>
+jbe    <T> <_ZN5CPeer7parsingEi+0x146>
 cmpl   $0x1800,-0x20(%ebp)
-jbe    <T> <_ZN5CPeer7parsingEi+0x1d8>
+jbe    <T> <_ZN5CPeer7parsingEi+0x1d4>
 mov    0x8(%ebp),%eax
 mov    0x1824(%eax),%esi
 mov    0x8(%ebp),%eax
 lea    0x1c(%eax),%edi
 mov    0x8(%ebp),%eax
 mov    0x181c(%eax),%ebx
 movl   $0xd0,0x8(%esp)
 movl   $&_ZZN5CPeer7parsingEiE12__FUNCTION__,0x4(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x1c(%esp)
 mov    %edi,0x18(%esp)
 mov    %ebx,0x14(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Recv Size[%d], Parsing Packet Size[%d] is Too Large, offset:%x, buf:%x, alreadyRead:%d",0x8(%esp)
 movl   $"./log/TcpRecv",0x4(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 lea    0x1c(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x181c(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x1820(%eax)
-mov    $0x0,%ebx
-jmp    <T> <_ZN5CPeer7parsingEi+0x47f>
-mov    -0x24(%ebp),%eax
+mov    $0x0,%eax
+jmp    <T> <_ZN5CPeer7parsingEi+0x43a>
+mov    -0x28(%ebp),%eax
 cmp    -0x20(%ebp),%eax
-jb     <T> <_ZN5CPeer7parsingEi+0x361>
+jae    <T> <_ZN5CPeer7parsingEi+0x21e>
+movl   $0x100,0x8(%esp)
+movl   $&_ZZN5CPeer7parsingEiE12__FUNCTION__,0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x28(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"need more data (packetsize > (unsigned int)parsinglength): body=%d !!",0x8(%esp)
+movl   $"./log/TcpRecv",0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN5CPeer7parsingEi+0x39a>
 mov    0x8(%ebp),%eax
 mov    0x182c(%eax),%eax
 mov    %eax,0x4(%esp)
 lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
 movl   $0x1804,(%esp)
 call   <T> <_ZN14CTcpRecvBuffernwEj>
 mov    %eax,-0x60(%ebp)
 lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    0x8(%ebp),%eax
 mov    0x181c(%eax),%edx
 mov    -0x60(%ebp),%eax
 mov    -0x20(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    -0x60(%ebp),%eax
 mov    %eax,%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9TCPSocket9getHandleEv>
 mov    %eax,0x6(%ebx)
 mov    0x8(%ebp),%eax
 mov    0x1830(%eax),%eax
 mov    %eax,0x4(%esp)
 lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
 mov    0x8(%ebp),%eax
 mov    0x1828(%eax),%eax
 lea    -0x60(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt5queueIP14CTcpRecvBufferSt5dequeIS1_SaIS1_EEE4pushERKS1_>
-jmp    <T> <_ZN5CPeer7parsingEi+0x295>
+jmp    <T> <_ZN5CPeer7parsingEi+0x2cf>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
 mov    0x1828(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt5queueIP14CTcpRecvBufferSt5dequeIS1_SaIS1_EEE4sizeEv>
-mov    %eax,-0x28(%ebp)
+mov    %eax,-0x1c(%ebp)
 lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    -0x24(%ebp),%eax
-sub    -0x20(%ebp),%eax
-mov    %eax,-0x24(%ebp)
+mov    -0x20(%ebp),%eax
+sub    %eax,-0x28(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x181c(%eax),%eax
 mov    %eax,%edx
 add    -0x20(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x181c(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x1820(%eax)
-cmpl   $0x0,-0x24(%ebp)
-je     <T> <_ZN5CPeer7parsingEi+0x304>
-jmp    <T> <_ZN5CPeer7parsingEi+0x318>
+cmpl   $0x0,-0x28(%ebp)
+je     <T> <_ZN5CPeer7parsingEi+0x33b>
+jmp    <T> <_ZN5CPeer7parsingEi+0x34c>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
 lea    0x1c(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x181c(%eax)
-jmp    <T> <_ZN5CPeer7parsingEi+0x39f>
-cmpl   $0x9,-0x24(%ebp)
-jg     <T> <_ZN5CPeer7parsingEi+0xe0>
+jmp    <T> <_ZN5CPeer7parsingEi+0x39a>
+mov    -0x28(%ebp),%eax
+cmp    $0x9,%eax
+setg   %al
+test   %al,%al
+jne    <T> <_ZN5CPeer7parsingEi+0xda>
 movl   $0xf8,0x8(%esp)
 movl   $&_ZZN5CPeer7parsingEiE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x24(%ebp),%eax
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x28(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"need more data (parsinglength < HEADER_SIZE): body=%d !!",0x8(%esp)
 movl   $"./log/TcpRecv",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN5CPeer7parsingEi+0x39f>
-movl   $0x100,0x8(%esp)
-movl   $&_ZZN5CPeer7parsingEiE12__FUNCTION__,0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x24(%ebp),%eax
-mov    %eax,0xc(%esp)
-movl   $"need more data (packetsize > (unsigned int)parsinglength): body=%d !!",0x8(%esp)
-movl   $"./log/TcpRecv",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-nop
-cmpl   $0x0,-0x24(%ebp)
-jle    <T> <_ZN5CPeer7parsingEi+0x47a>
-mov    -0x24(%ebp),%eax
-cmp    $0x1800,%eax
-jbe    <T> <_ZN5CPeer7parsingEi+0x3fa>
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    -0x28(%ebp),%eax
+test   %eax,%eax
+jle    <T> <_ZN5CPeer7parsingEi+0x435>
+cmpl   $0x1800,-0x28(%ebp)
+jbe    <T> <_ZN5CPeer7parsingEi+0x3f2>
 movl   $0x10e,0x8(%esp)
 movl   $&_ZZN5CPeer7parsingEiE12__FUNCTION__,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"[PARSING LENGTH EXCEPTION] parsinglength > MAX_RECV_BUF , memmove : parsinglength = %d",0x8(%esp)
 movl   $"./log/TcpRecv",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%ebx
-jmp    <T> <_ZN5CPeer7parsingEi+0x47f>
-mov    -0x24(%ebp),%edx
+mov    $0x0,%eax
+jmp    <T> <_ZN5CPeer7parsingEi+0x43a>
 mov    0x8(%ebp),%eax
 mov    0x181c(%eax),%eax
-mov    0x8(%ebp),%ecx
-add    $0x1c,%ecx
+mov    0x8(%ebp),%edx
+lea    0x1c(%edx),%ecx
+mov    -0x28(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <memmove>
-mov    -0x24(%ebp),%edx
+mov    -0x28(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x1820(%eax)
 mov    0x8(%ebp),%eax
-lea    0x1c(%eax),%edx
-mov    -0x24(%ebp),%eax
-add    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x181c(%eax)
-jmp    <T> <_ZN5CPeer7parsingEi+0x47a>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-mov    -0x24(%ebp),%eax
-mov    %eax,0x4(%esp)
-movl   $"[PARSING EXCEPTION] memmove : parsinglength = %d",(%esp)
-call   <T> <printf>
-mov    $0x0,%ebx
-call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN5CPeer7parsingEi+0x47f>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-mov    $0x1,%ebx
-mov    %ebx,%eax
+mov    -0x28(%ebp),%edx
+add    $0x1c,%edx
+lea    (%eax,%edx,1),%edx
+mov    0x8(%ebp),%eax
+mov    %edx,0x181c(%eax)
+mov    $0x1,%eax
 add    $0x7c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPeer::parsing(int) */

undefined4 __thiscall CPeer::_ZN5CPeer7parsingEi(CPeer *this,int param_1)

{
  undefined4 uVar1;
  CTcpRecvBuffer *pCVar2;
  undefined4 uVar3;
  CMutex *pCVar4;
  CGuard<CMutex> local_6c [4];
  CGuard<CMutex> local_68 [4];
  CTcpRecvBuffer *local_64;
  PacketHeader local_5e [2];
  ushort local_5c;
  CMyFileLog local_54 [8];
  CMyFileLog local_4c [8];
  CMyFileLog local_44 [8];
  CMyFileLog local_3c [8];
  CMyFileLog local_34 [8];
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  undefined4 local_20;
  
  PacketHeader::PacketHeader(local_5e,0,0);
  local_28 = *(int *)(this + 0x1820) + param_1;
  local_20 = 10;
  if ((int)local_28 < 10) {
    *(int *)(this + 0x1820) = *(int *)(this + 0x1820) + param_1;
    *(int *)(this + 0x181c) = *(int *)(this + 0x181c) + param_1;
    uVar3 = *(undefined4 *)(this + 0x1820);
    uVar1 = *(undefined4 *)(this + 0x181c);
    CMyFileLog::CMyFileLog(local_54,"parsing",0xbb);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_54,"./log/TcpRecv","(offset:%x - buf:%x) = remainlen:%d, Recv Size[%d] ",uVar1,
               this + 0x1c,uVar3,param_1);
  }
  else {
    do {
      if (*(int *)(this + 0x1820) != 0) {
        *(int *)(this + 0x181c) = *(int *)(this + 0x181c) - *(int *)(this + 0x1820);
      }
      memcpy(local_5e,*(void **)(this + 0x181c),10);
      local_24 = (uint)local_5c;
      if ((local_24 < 10) || (0x1800 < local_24)) {
        uVar3 = *(undefined4 *)(this + 0x1824);
        uVar1 = *(undefined4 *)(this + 0x181c);
        CMyFileLog::CMyFileLog(local_4c,"parsing",0xd0);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_4c,"./log/TcpRecv",
                   "Recv Size[%d], Parsing Packet Size[%d] is Too Large, offset:%x, buf:%x, alreadyRead:%d"
                   ,param_1,local_24,uVar1,this + 0x1c,uVar3);
        *(CPeer **)(this + 0x181c) = this + 0x1c;
        *(undefined4 *)(this + 0x1820) = 0;
        return 0;
      }
      if (local_28 < local_24) {
        CMyFileLog::CMyFileLog(local_3c,"parsing",0x100);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_3c,"./log/TcpRecv",
                   "need more data (packetsize > (unsigned int)parsinglength): body=%d !!",local_28)
        ;
        goto LAB_08051773;
      }
      pCVar4 = *(CMutex **)(this + 0x182c);
      CGuard<CMutex>::CGuard(local_68,pCVar4);
                    /* try { // try from 080515d7 to 080515db has its CatchHandler @ 0805164e */
      local_64 = CTcpRecvBuffer::operator_new((CTcpRecvBuffer *)0x1804,(uint)pCVar4);
      CGuard<CMutex>::~CGuard(local_68);
      memcpy(local_64,*(void **)(this + 0x181c),local_24);
      pCVar2 = local_64;
      uVar3 = TCPSocket::getHandle((TCPSocket *)this);
      *(undefined4 *)(pCVar2 + 6) = uVar3;
      CGuard<CMutex>::CGuard(local_6c,*(CMutex **)(this + 0x1830));
                    /* try { // try from 08051647 to 0805164b has its CatchHandler @ 080516bd */
      std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>::push
                (*(queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>
                   **)(this + 0x1828),&local_64);
                    /* try { // try from 08051675 to 08051679 has its CatchHandler @ 080516bd */
      local_2c = std::
                 queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>
                 ::size(*(queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>
                          **)(this + 0x1828));
      CGuard<CMutex>::~CGuard(local_6c);
      local_28 = local_28 - local_24;
      *(uint *)(this + 0x181c) = *(int *)(this + 0x181c) + local_24;
      *(undefined4 *)(this + 0x1820) = 0;
      if (local_28 == 0) {
        *(CPeer **)(this + 0x181c) = this + 0x1c;
        goto LAB_08051773;
      }
    } while (9 < (int)local_28);
    CMyFileLog::CMyFileLog(local_44,"parsing",0xf8);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_44,"./log/TcpRecv","need more data (parsinglength < HEADER_SIZE): body=%d !!",
               local_28);
LAB_08051773:
    if (0 < (int)local_28) {
      if (0x1800 < local_28) {
                    /* try { // try from 0805179d to 080517c3 has its CatchHandler @ 08051812 */
        CMyFileLog::CMyFileLog(local_34,"parsing",0x10e);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_34,"./log/TcpRecv",
                   "[PARSING LENGTH EXCEPTION] parsinglength > MAX_RECV_BUF , memmove : parsinglength = %d"
                   ,local_28);
        return 0;
      }
      memmove(this + 0x1c,*(void **)(this + 0x181c),local_28);
      *(uint *)(this + 0x1820) = local_28;
      *(CPeer **)(this + 0x181c) = this + local_28 + 0x1c;
    }
  }
  return 1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/Peer.cpp](source/DNFServer/GameServer/Monitor/Peer.cpp)（约第 240 行）：

```cpp
int CPeer::parsing(int recvLen)
{
    PacketHeader header(0, 0);
    unsigned int totalLen = (unsigned int)(m_remainLen + recvLen);
    int headerSize = 10;
    if ((int)totalLen < 10)
    {
        m_remainLen = m_remainLen + recvLen;
        m_buf = m_buf + recvLen;
        DNF_LOG_SCOPE_LINE(0xbb,"./log/TcpRecv", "(offset:%x - buf:%x) = remainlen:%d, Recv Size[%d] ",
            m_buf, (char*)this + 0x1c, m_remainLen, recvLen);
    }
    else
    {
        do
        {
            if (m_remainLen != 0)
            {
                m_buf = m_buf - m_remainLen;
            }
            memcpy(&header, m_buf, 10);
            unsigned int pktSize = (unsigned int)((RA_U16<2>*)&header)->v;
            if (pktSize < 10 || 0x1800 < pktSize)
            {
                DNF_LOG_SCOPE_LINE(0xd0,"./log/TcpRecv",
                    "Recv Size[%d], Parsing Packet Size[%d] is Too Large, offset:%x, buf:%x, alreadyRead:%d",
                    recvLen, pktSize, m_buf, (char*)this + 0x1c, m_alreadyRead);
                m_buf = (char*)this + 0x1c;
                m_remainLen = 0;
                return 0;
            }
            if (totalLen < pktSize)
            {
                DNF_LOG_SCOPE_LINE(0x100,"./log/TcpRecv",
                    "need more data (packetsize > (unsigned int)parsinglength): body=%d !!",
                    totalLen);
                goto LAB_51773;
            }
            CTcpRecvBuffer* buf;
            {
                CGuard<CMutex> guard((CMutex*)m_bLock);
                buf = new CTcpRecvBuffer;
            }
            memcpy(buf, m_buf, pktSize);
            ((RA_UINT<6>*)buf)->v = (unsigned int)getHandle();
            {
                CGuard<CMutex> guard((CMutex*)m_qLock);
                ((std::queue<CTcpRecvBuffer*>*)m_recvQ)->push(buf);
                int qsize = ((std::queue<CTcpRecvBuffer*>*)m_recvQ)->size();
            }
            totalLen = totalLen - pktSize;
            m_buf = m_buf + pktSize;
            m_remainLen = 0;
            if (totalLen == 0)
            {
                m_buf = (char*)this + 0x1c;
                goto LAB_51773;
            }
        } while (9 < (int)totalLen);
        {
            DNF_LOG_SCOPE_LINE(0xf8,"./log/TcpRecv", "need more data (parsinglength < HEADER_SIZE): body=%d !!",
                totalLen);
        }
LAB_51773:
        if (0 < (int)totalLen)
        {
            if (0x1800 < totalLen)
            {
                DNF_LOG_SCOPE_LINE(0x10e,"./log/TcpRecv",
                    "[PARSING LENGTH EXCEPTION] parsinglength > MAX_RECV_BUF , memmove : parsinglength = %d",
                    totalLen);
                return 0;
            }
            try
            {
                memmove((char*)this + 0x1c, m_buf, totalLen);
                m_remainLen = (int)totalLen;
                m_buf = (char*)this + 0x1c + totalLen;
            }
            catch (...)
            {
                printf("[PARSING EXCEPTION] memmove : parsinglength = %d", totalLen);
                return 0;
            }
        }
    }
    return 1;
}
```

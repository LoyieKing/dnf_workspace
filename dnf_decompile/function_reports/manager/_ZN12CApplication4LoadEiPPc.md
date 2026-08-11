# _ZN12CApplication4LoadEiPPc

`CApplication::Load(int, char**)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x805deaa` | `0x501` | `0x804e1ce` | `0x4fb` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,367 +1,365 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x3c,%esp
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%ebx
 lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 mov    0x10(%ebp),%eax
 add    $0x4,%eax
 mov    (%eax),%eax
 lea    -0x2d(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 lea    -0x34(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   *%ebx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x68>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x75>
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x8d>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x487>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x481>
 lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $"Application App Config Load_Table() Success!",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%ebx
 lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x25(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"./table/server_config.tbl",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 lea    -0x2c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   *%ebx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0xff>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x10c>
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x124>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x487>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x481>
 lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $"Application Server Config Load_Table() Success!",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig19Get_FrameCountValueEv>
-movzwl %ax,%eax
 mov    0x8(%ebp),%edx
 add    $0x1c,%edx
 movl   $0x3e8,0xc(%esp)
 mov    %eax,0x8(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt>
 movl   $"Application Init Frame Count() Success!",(%esp)
 call   <T> <puts>
 movl   $0x8,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CUdpHandlerC1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1a8>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1a5>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x487>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x481>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0xc4(%eax)
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig17Get_ServerUdpPortEv>
-movzwl %ax,%edx
-mov    0x8(%ebp),%eax
-mov    0xc4(%eax),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
+mov    0x8(%ebp),%edx
+mov    0xc4(%edx),%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZN11CUdpHandler16InitServerSocketEi>
 cmp    $0xffffffff,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN12CApplication4LoadEiPPc+0x2b0>
+je     <T> <_ZN12CApplication4LoadEiPPc+0x2aa>
 lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x1d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CApplication::Load() Init Server Socket Exception Break!",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x24(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x25e>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x258>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x258>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x252>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN12CApplication4LoadEiPPc+0x275>
+jne    <T> <_ZN12CApplication4LoadEiPPc+0x26f>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x275>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x26f>
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x28d>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x287>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN12CApplication4LoadEiPPc+0x275>
+jne    <T> <_ZN12CApplication4LoadEiPPc+0x26f>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x487>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x481>
 lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 movl   $"Application UDP Handler Create() Success!",(%esp)
 call   <T> <puts>
 movl   $0x804,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandlerC1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x2eb>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x2e5>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x487>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x481>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x18(%eax)
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler6AttachEP12CApplication>
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CServerConfig13GetServerInfoEv>
-mov    0x8(%ebp),%edx
-mov    0x18(%edx),%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    %eax,%edx
+mov    0x8(%ebp),%eax
+mov    0x18(%eax),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo>
 movl   $"Application Server Handler Create() Success!",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CPacketTranslater6attachEP12CApplication>
 movl   $"Application Packet Translater Attach() Success!",(%esp)
 call   <T> <puts>
 call   <T> <_Z22CPacketDecoderInstancev>
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CPacketDecoder6AttachEP12CApplication>
 movl   $"Application Packet Decoder Attach() Success!",(%esp)
 call   <T> <puts>
 movl   $0x1c,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CUdpNetworkThreadC1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x39a>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x396>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x487>
-mov    %ebx,%eax
-mov    %eax,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x481>
+mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0xc8(%eax)
 mov    0x8(%ebp),%eax
 mov    0xc8(%eax),%eax
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN17CUdpNetworkThread6attachEP12CApplication>
 mov    0x8(%ebp),%eax
 mov    0xc8(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CThreadInterface5beginEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN12CApplication4LoadEiPPc+0x3dc>
+je     <T> <_ZN12CApplication4LoadEiPPc+0x3d6>
 call   <T> <__cxa_rethrow>
 movl   $"Application Network Thread Begin() Success!",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 add    $0xcc,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem18Get_TcpSwapQPacketEv>
 mov    %eax,(%esp)
+call   <T> <_ZN10CSwapQueueISt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEELi2EE8GetRecvQEv>
+mov    %eax,%esi
+mov    0x8(%ebp),%eax
+add    $0xcc,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN13CTcpNetSystem18Get_TcpSwapQPacketEv>
+mov    %eax,(%esp)
 call   <T> <_ZN10CSwapQueueISt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEELi2EE9GetParseQEv>
-mov    %eax,%esi
-mov    0x8(%ebp),%eax
-add    $0xcc,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN13CTcpNetSystem18Get_TcpSwapQPacketEv>
-mov    %eax,(%esp)
-call   <T> <_ZN10CSwapQueueISt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEELi2EE8GetRecvQEv>
 mov    %eax,%ebx
 call   <T> <_ZN6IQueueISt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEEE3GetEv>
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN6IQueueISt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEEE9InitQueueEPS6_S8_>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig17Get_ServerTcpPortEv>
 movzwl %ax,%eax
 mov    0x8(%ebp),%edx
 add    $0xcc,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CTcpNetSystem4InitEt>
 mov    0x8(%ebp),%eax
 lea    0x4c(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN12CUserManager4InitEP12CApplication>
 movl   $"Application Load() Success!",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 movb   $0x1,0x4(%eax)
 add    $0x3c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
 cmp    $0x2,%edx
-jne    <T> <_ZN12CApplication4LoadEiPPc+0x4d3>
+jne    <T> <_ZN12CApplication4LoadEiPPc+0x4cd>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,0x4(%esp)
 movl   $"CApplication::Load() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 call   <T> <__cxa_rethrow>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CApplication::Load() Exception Break",(%esp)
 call   <T> <puts>
 call   <T> <__cxa_rethrow>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* CApplication::Load(int, char**) */

void __thiscall
CApplication::_ZN12CApplication4LoadEiPPc(CApplication *this,int param_1,char **param_2)

{
  code *pcVar1;
  char cVar2;
  ushort uVar3;
  CUdpHandler *this_00;
  uint uVar4;
  int iVar5;
  CDNFException *this_01;
  CServerHandler *this_02;
  ST_ServerInfo *pSVar6;
  CPacketDecoder *this_03;
  CUdpNetworkThread *this_04;
  CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
  *pCVar7;
  queue *pqVar8;
  queue *pqVar9;
  IQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>>
  *this_05;
  string local_38 [7];
  allocator local_31;
  string local_30 [7];
  allocator local_29;
  string local_28 [7];
  allocator local_21 [17];
  
  pcVar1 = *(code **)(**(int **)(this + 0x10) + 8);
  std::allocator<char>::allocator();
                    /* try { // try from 0805dee4 to 0805dee8 has its CatchHandler @ 0805df1f */
  std::string::string(local_38,param_2[1],&local_31);
                    /* try { // try from 0805def9 to 0805defa has its CatchHandler @ 0805defd */
  (*pcVar1)(*(undefined4 *)(this + 0x10),local_38);
                    /* try { // try from 0805df18 to 0805df1c has its CatchHandler @ 0805df1f */
  std::string::~string(local_38);
  std::allocator<char>::~allocator((allocator<char> *)&local_31);
                    /* try { // try from 0805df49 to 0805df4d has its CatchHandler @ 0805e331 */
  puts("Application App Config Load_Table() Success!");
  pcVar1 = *(code **)(**(int **)(this + 0x14) + 8);
  std::allocator<char>::allocator();
                    /* try { // try from 0805df7b to 0805df7f has its CatchHandler @ 0805dfb6 */
  std::string::string(local_30,"./table/server_config.tbl",&local_29);
                    /* try { // try from 0805df90 to 0805df91 has its CatchHandler @ 0805df94 */
  (*pcVar1)(*(undefined4 *)(this + 0x14),local_30);
                    /* try { // try from 0805dfaf to 0805dfb3 has its CatchHandler @ 0805dfb6 */
  std::string::~string(local_30);
  std::allocator<char>::~allocator((allocator<char> *)&local_29);
                    /* try { // try from 0805dfe0 to 0805e02e has its CatchHandler @ 0805e331 */
  puts("Application Server Config Load_Table() Success!");
  uVar3 = CAppConfig::Get_FrameCountValue(*(CAppConfig **)(this + 0x10));
  CFrameCountHandler::InitFrameCountInfo(this + 0x1c,(uint)this,uVar3);
  puts("Application Init Frame Count() Success!");
  this_00 = operator_new(8);
                    /* try { // try from 0805e036 to 0805e03a has its CatchHandler @ 0805e03d */
  CUdpHandler::CUdpHandler(this_00);
  *(CUdpHandler **)(this + 0xc4) = this_00;
  uVar4 = CAppConfig::Get_ServerUdpPort(*(CAppConfig **)(this + 0x10));
                    /* try { // try from 0805e07e to 0805e082 has its CatchHandler @ 0805e331 */
  iVar5 = CUdpHandler::_ZN11CUdpHandler16InitServerSocketEi
                    (*(CUdpHandler **)(this + 0xc4),uVar4 & 0xffff);
  if (iVar5 == -1) {
    std::allocator<char>::allocator();
                    /* try { // try from 0805e0b1 to 0805e0b5 has its CatchHandler @ 0805e11f */
    std::string::string(local_28,"CApplication::Load() Init Server Socket Exception Break!",local_21
                       );
    this_01 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0805e0d0 to 0805e0d4 has its CatchHandler @ 0805e0d7 */
    CDNFException::CDNFException(this_01,local_28);
                    /* try { // try from 0805e10e to 0805e112 has its CatchHandler @ 0805e115 */
    std::string::~string(local_28);
    std::allocator<char>::~allocator((allocator<char> *)local_21);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0805e155 to 0805e171 has its CatchHandler @ 0805e331 */
    __cxa_throw(this_01,&CDNFException::typeinfo,CDNFException::~CDNFException);
  }
  puts("Application UDP Handler Create() Success!");
  this_02 = operator_new(0x804);
                    /* try { // try from 0805e179 to 0805e17d has its CatchHandler @ 0805e180 */
  CServerHandler::CServerHandler(this_02);
  *(CServerHandler **)(this + 0x18) = this_02;
                    /* try { // try from 0805e1ad to 0805e220 has its CatchHandler @ 0805e331 */
  CServerHandler::Attach(*(CServerHandler **)(this + 0x18),this);
  pSVar6 = (ST_ServerInfo *)CServerConfig::GetServerInfo(*(CServerConfig **)(this + 0x14));
  CServerHandler::Load(*(CServerHandler **)(this + 0x18),pSVar6);
  puts("Application Server Handler Create() Success!");
  CPacketTranslater::attach(this);
  puts("Application Packet Translater Attach() Success!");
  this_03 = (CPacketDecoder *)CPacketDecoderInstance();
  CPacketDecoder::Attach(this_03,this);
  puts("Application Packet Decoder Attach() Success!");
  this_04 = operator_new(0x1c);
                    /* try { // try from 0805e228 to 0805e22c has its CatchHandler @ 0805e22f */
  CUdpNetworkThread::CUdpNetworkThread(this_04);
  *(CUdpNetworkThread **)(this + 200) = this_04;
                    /* try { // try from 0805e264 to 0805e321 has its CatchHandler @ 0805e331 */
  CUdpNetworkThread::attach(*(CUdpNetworkThread **)(this + 200),this);
  cVar2 = CThreadInterface::begin(*(CThreadInterface **)(this + 200));
  if (cVar2 != '\x01') {
                    /* WARNING: Subroutine does not return */
    __cxa_rethrow();
  }
  puts("Application Network Thread Begin() Success!");
  pCVar7 = (CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
            *)CTcpNetSystem::Get_TcpSwapQPacket((CTcpNetSystem *)(this + 0xcc));
  pqVar8 = (queue *)CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
                    ::GetParseQ(pCVar7);
  pCVar7 = (CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
            *)CTcpNetSystem::Get_TcpSwapQPacket((CTcpNetSystem *)(this + 0xcc));
  pqVar9 = (queue *)CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
                    ::GetRecvQ(pCVar7);
  this_05 = (IQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>>
             *)IQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>>
               ::Get();
  IQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>>::
  InitQueue(this_05,pqVar9,pqVar8);
  uVar3 = CAppConfig::Get_ServerTcpPort(*(CAppConfig **)(this + 0x10));
  CTcpNetSystem::Init((CTcpNetSystem *)(this + 0xcc),uVar3);
  CUserManager::Init((CUserManager *)(this + 0x4c),this);
  puts("Application Load() Success!");
  this[4] = (CApplication)0x1;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Manager/DNFApplication.cpp](source/DNFServer/GameServer/Manager/DNFApplication.cpp)（约第 114 行）：

```cpp
void CApplication::Load(int argc, char** argv)
{
    try
    {
        m_appConfig->Load_Table(std::string(argv[1]));
        puts("Application App Config Load_Table() Success!");
        m_serverConfig->Load_Table(std::string("./table/server_config.tbl"));
        puts("Application Server Config Load_Table() Success!");
        m_frameCount.InitFrameCountInfo(this, m_appConfig->Get_FrameCountValue(), 0x3e8);
        puts("Application Init Frame Count() Success!");
        m_udpHandler = new CUdpHandler;
        if (((CUdpHandler*)m_udpHandler)->InitServerSocket(m_appConfig->Get_ServerUdpPort()) == -1)
            throw CDNFException("CApplication::Load() Init Server Socket Exception Break!");
        puts("Application UDP Handler Create() Success!");
        m_serverHandler = new CServerHandler;
        m_serverHandler->Attach(this);
        m_serverHandler->Load((ST_ServerInfo*)m_serverConfig->GetServerInfo());
        puts("Application Server Handler Create() Success!");
        CPacketTranslater::attach(this);
        puts("Application Packet Translater Attach() Success!");
        CPacketDecoderInstance()->Attach(this);
        puts("Application Packet Decoder Attach() Success!");
        m_udpNetworkThread = new CUdpNetworkThread;
        m_udpNetworkThread->attach(this);
        if (!m_udpNetworkThread->CThreadInterface::begin())
            throw;
        puts("Application Network Thread Begin() Success!");
        IQueue<TcpRecvQueue>::Get().InitQueue(
            m_tcpNetSystem.Get_TcpSwapQPacket()->GetParseQ(),
            m_tcpNetSystem.Get_TcpSwapQPacket()->GetRecvQ());
        m_tcpNetSystem.Init(m_appConfig->Get_ServerTcpPort());
        m_userManager.Init(this);
        puts("Application Load() Success!");
        m_loaded = 1;
    }
    catch (CDNFException& e)
    {
        printf("CApplication::Load() Exception Break : %s\n", e.what());
        throw;
    }
    catch (...)
    {
        puts("CApplication::Load() Exception Break");
        throw;
    }
}
```

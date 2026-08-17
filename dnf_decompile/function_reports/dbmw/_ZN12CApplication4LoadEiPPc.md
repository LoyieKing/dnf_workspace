# _ZN12CApplication4LoadEiPPc

`CApplication::Load(int, char**)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x806baea` | `0x5d0` | `0x806d2d6` | `0x5d0` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,420 +1,420 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%ebx
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 mov    0x10(%ebp),%eax
 add    $0x4,%eax
 mov    (%eax),%eax
 lea    -0x39(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 lea    -0x40(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   *%ebx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x68>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x75>
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x8d>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x556>
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $"Application App Config Load_Table() Success!",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%ebx
 lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x31(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"./table/server_config.tbl",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 lea    -0x38(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   *%ebx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0xff>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x10c>
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x124>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x556>
 lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $"Application Server Config Load_Table() Success!",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig19Get_FrameCountValueEv>
 movzwl %ax,%eax
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
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1a8>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x556>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x98(%eax)
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig17Get_ServerUdpPortEv>
 movzwl %ax,%edx
 mov    0x8(%ebp),%eax
 mov    0x98(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CUdpHandler16InitServerSocketEi>
 cmp    $0xffffffff,%eax
 sete   %al
 test   %al,%al
 je     <T> <_ZN12CApplication4LoadEiPPc+0x2b0>
 lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x29(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CApplication::Load() Init Server Socket Exception Break!",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x30(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x25e>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x258>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN12CApplication4LoadEiPPc+0x275>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x275>
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x28d>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN12CApplication4LoadEiPPc+0x275>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x556>
 lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 movl   $"Application UDP Handler Create() Success!",(%esp)
 call   <T> <puts>
 movl   $0x1040,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandlerC1Ev>
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x2eb>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x556>
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
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication6InitDBEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN12CApplication4LoadEiPPc+0x38e>
+je     <T> <_ZN12CApplication4LoadEiPPc+0x390>
 movl   $"DB Open Fail",(%esp)
 call   <T> <puts>
 call   <T> <__cxa_rethrow>
 movl   $0x4c44,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManagerC1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x3bd>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x3bf>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x556>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x288(%eax)
 movl   $0x1c,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CNetworkThreadC1Ev>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x3f7>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x3f9>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x556>
-mov    %ebx,%eax
-mov    %eax,%edx
+mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x9c(%eax)
 mov    0x8(%ebp),%eax
 mov    0x9c(%eax),%eax
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CNetworkThread6attachEP12CApplication>
 mov    0x8(%ebp),%eax
 mov    0x9c(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CThreadInterface5beginEv>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN12CApplication4LoadEiPPc+0x439>
 call   <T> <__cxa_rethrow>
 movl   $"Application Network Thread Begin() Success!",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig17Get_ServerTcpPortEv>
 mov    %ax,-0x1e(%ebp)
 cmpw   $0x0,-0x1e(%ebp)
 je     <T> <_ZN12CApplication4LoadEiPPc+0x479>
 movzwl -0x1e(%ebp),%eax
 mov    0x8(%ebp),%edx
 add    $0x128,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CTcpNetSystem4InitEt>
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x4bb>
 movl   $"TCP Server Unused",(%esp)
 call   <T> <puts>
 movl   $0x251,0x8(%esp)
 movl   $&_ZZN12CApplication4LoadEiPPcE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"TCP Server Unused",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movl   $0x8,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8WongWork11CGMAccountsC1Ev>
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x4e7>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x556>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x28c(%eax)
 mov    0x8(%ebp),%eax
 add    $0x128,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem18Get_TcpSwapQPacketEv>
 mov    %eax,(%esp)
 call   <T> <_ZN10CSwapQueueISt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEELi2EE9GetParseQEv>
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x128,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem18Get_TcpSwapQPacketEv>
 mov    %eax,(%esp)
 call   <T> <_ZN10CSwapQueueISt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEELi2EE8GetRecvQEv>
 mov    %eax,%ebx
 call   <T> <_ZN6IQueueISt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEEE3GetEv>
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN6IQueueISt5queueIP14CTcpRecvBufferSt5dequeIS2_SaIS2_EEEE9InitQueueEPS6_S8_>
 movl   $"Application Load() Success!",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 movb   $0x1,0x4(%eax)
 add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
 cmp    $0x2,%edx
 jne    <T> <_ZN12CApplication4LoadEiPPc+0x5a2>
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
  CGuildManager *this_04;
  CNetworkThread *this_05;
  CGMAccounts *this_06;
  CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
  *pCVar7;
  queue *pqVar8;
  queue *pqVar9;
  IQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>>
  *this_07;
  string local_44 [7];
  allocator local_3d;
  string local_3c [7];
  allocator local_35;
  string local_34 [7];
  allocator local_2d;
  CMyFileLog local_2c [10];
  ushort local_22;
  
  pcVar1 = *(code **)(**(int **)(this + 0x10) + 8);
  std::allocator<char>::allocator();
                    /* try { // try from 0806bb24 to 0806bb28 has its CatchHandler @ 0806bb5f */
  std::string::string(local_44,param_2[1],&local_3d);
                    /* try { // try from 0806bb39 to 0806bb3a has its CatchHandler @ 0806bb3d */
  (*pcVar1)(*(undefined4 *)(this + 0x10),local_44);
                    /* try { // try from 0806bb58 to 0806bb5c has its CatchHandler @ 0806bb5f */
  std::string::~string(local_44);
  std::allocator<char>::~allocator((allocator<char> *)&local_3d);
                    /* try { // try from 0806bb89 to 0806bb8d has its CatchHandler @ 0806c040 */
  puts("Application App Config Load_Table() Success!");
  pcVar1 = *(code **)(**(int **)(this + 0x14) + 8);
  std::allocator<char>::allocator();
                    /* try { // try from 0806bbbb to 0806bbbf has its CatchHandler @ 0806bbf6 */
  std::string::string(local_3c,"./table/server_config.tbl",&local_35);
                    /* try { // try from 0806bbd0 to 0806bbd1 has its CatchHandler @ 0806bbd4 */
  (*pcVar1)(*(undefined4 *)(this + 0x14),local_3c);
                    /* try { // try from 0806bbef to 0806bbf3 has its CatchHandler @ 0806bbf6 */
  std::string::~string(local_3c);
  std::allocator<char>::~allocator((allocator<char> *)&local_35);
                    /* try { // try from 0806bc20 to 0806bc6e has its CatchHandler @ 0806c040 */
  puts("Application Server Config Load_Table() Success!");
  uVar3 = CAppConfig::Get_FrameCountValue(*(CAppConfig **)(this + 0x10));
  CFrameCountHandler::InitFrameCountInfo(this + 0x1c,(uint)this,uVar3);
  puts("Application Init Frame Count() Success!");
  this_00 = operator_new(8);
                    /* try { // try from 0806bc76 to 0806bc7a has its CatchHandler @ 0806bc7d */
  CUdpHandler::_ZN11CUdpHandlerC2Ev(this_00);
  *(CUdpHandler **)(this + 0x98) = this_00;
  uVar4 = CAppConfig::Get_ServerUdpPort(*(CAppConfig **)(this + 0x10));
                    /* try { // try from 0806bcbe to 0806bcc2 has its CatchHandler @ 0806c040 */
  iVar5 = CUdpHandler::_ZN11CUdpHandler16InitServerSocketEi
                    (*(CUdpHandler **)(this + 0x98),uVar4 & 0xffff);
  if (iVar5 == -1) {
    std::allocator<char>::allocator();
                    /* try { // try from 0806bcf1 to 0806bcf5 has its CatchHandler @ 0806bd5f */
    std::string::string(local_34,"CApplication::Load() Init Server Socket Exception Break!",
                        &local_2d);
    this_01 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0806bd10 to 0806bd14 has its CatchHandler @ 0806bd17 */
    CDNFException::CDNFException(this_01,local_34);
                    /* try { // try from 0806bd4e to 0806bd52 has its CatchHandler @ 0806bd55 */
    std::string::~string(local_34);
    std::allocator<char>::~allocator((allocator<char> *)&local_2d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0806bd95 to 0806bdb1 has its CatchHandler @ 0806c040 */
    __cxa_throw(this_01,&CDNFException::typeinfo,CDNFException::~CDNFException);
  }
  puts("Application UDP Handler Create() Success!");
  this_02 = operator_new(0x1040);
                    /* try { // try from 0806bdb9 to 0806bdbd has its CatchHandler @ 0806bdc0 */
  CServerHandler::CServerHandler(this_02);
  *(CServerHandler **)(this + 0x18) = this_02;
                    /* try { // try from 0806bded to 0806be83 has its CatchHandler @ 0806c040 */
  CServerHandler::Attach(*(CServerHandler **)(this + 0x18),this);
  pSVar6 = (ST_ServerInfo *)CServerConfig::GetServerInfo(*(CServerConfig **)(this + 0x14));
  CServerHandler::Load(*(CServerHandler **)(this + 0x18),pSVar6);
  puts("Application Server Handler Create() Success!");
  CPacketTranslater::attach(this);
  puts("Application Packet Translater Attach() Success!");
  this_03 = (CPacketDecoder *)CPacketDecoderInstance();
  CPacketDecoder::Attach(this_03,this);
  puts("Application Packet Decoder Attach() Success!");
  cVar2 = InitDB(this);
  if (cVar2 != '\x01') {
    puts("DB Open Fail");
                    /* WARNING: Subroutine does not return */
    __cxa_rethrow();
  }
  this_04 = operator_new(0x4c44);
                    /* try { // try from 0806be8b to 0806be8f has its CatchHandler @ 0806be92 */
  CGuildManager::CGuildManager(this_04);
  *(CGuildManager **)(this + 0x288) = this_04;
                    /* try { // try from 0806beb9 to 0806bebd has its CatchHandler @ 0806c040 */
  this_05 = operator_new(0x1c);
                    /* try { // try from 0806bec5 to 0806bec9 has its CatchHandler @ 0806becc */
  CNetworkThread::CNetworkThread(this_05);
  *(CNetworkThread **)(this + 0x9c) = this_05;
                    /* try { // try from 0806bf01 to 0806bfb0 has its CatchHandler @ 0806c040 */
  CNetworkThread::attach(*(CNetworkThread **)(this + 0x9c),this);
  cVar2 = CThreadInterface::begin(*(CThreadInterface **)(this + 0x9c));
  if (cVar2 != '\x01') {
                    /* WARNING: Subroutine does not return */
    __cxa_rethrow();
  }
  puts("Application Network Thread Begin() Success!");
  local_22 = CAppConfig::Get_ServerTcpPort(*(CAppConfig **)(this + 0x10));
  if (local_22 == 0) {
    puts("TCP Server Unused");
    CMyFileLog::CMyFileLog(local_2c,"Load",0x251);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_2c,"./log/TcpServer","TCP Server Unused");
  }
  else {
    CTcpNetSystem::Init((CTcpNetSystem *)(this + 0x128),local_22);
  }
  this_06 = operator_new(8);
                    /* try { // try from 0806bfb8 to 0806bfbc has its CatchHandler @ 0806bfbf */
  WongWork::CGMAccounts::CGMAccounts(this_06);
  *(CGMAccounts **)(this + 0x28c) = this_06;
  pCVar7 = (CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
            *)CTcpNetSystem::Get_TcpSwapQPacket((CTcpNetSystem *)(this + 0x128));
  pqVar8 = (queue *)CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
                    ::GetParseQ(pCVar7);
  pCVar7 = (CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
            *)CTcpNetSystem::Get_TcpSwapQPacket((CTcpNetSystem *)(this + 0x128));
  pqVar9 = (queue *)CSwapQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>,2>
                    ::GetRecvQ(pCVar7);
                    /* try { // try from 0806c010 to 0806c030 has its CatchHandler @ 0806c040 */
  this_07 = (IQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>>
             *)IQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>>
               ::Get();
  IQueue<std::queue<CTcpRecvBuffer*,std::deque<CTcpRecvBuffer*,std::allocator<CTcpRecvBuffer*>>>>::
  InitQueue(this_07,pqVar9,pqVar8);
  puts("Application Load() Success!");
  this[4] = (CApplication)0x1;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFApplication.cpp](source/DNFServer/GameServer/DBMW/DNFApplication.cpp)（约第 111 行）：

```cpp
void CApplication::Load(int argc, char** argv)
{
    try
    {
        m_appConfig->Load_Table(std::string(argv[1]));
        puts("Application App Config Load_Table() Success!");
        m_serverConfig->Load_Table(std::string("./table/server_config.tbl"));
        puts("Application Server Config Load_Table() Success!");
        m_frameCount.InitFrameCountInfo(this,
                                        ((CAppConfig*)m_appConfig)->Get_FrameCountValue(),
                                        0x3e8);
        puts("Application Init Frame Count() Success!");
        m_udpHandler = new CUdpHandler;
        if (((CUdpHandler*)m_udpHandler)->InitServerSocket(
                (unsigned short)((CAppConfig*)m_appConfig)->Get_ServerUdpPort()) == -1)
            throw CDNFException("CApplication::Load() Init Server Socket Exception Break!");
        puts("Application UDP Handler Create() Success!");
        m_serverHandler = new CServerHandler;
        m_serverHandler->Attach(this);
        m_serverHandler->Load((ST_ServerInfo*)((CServerConfig*)m_serverConfig)->GetServerInfo());
        puts("Application Server Handler Create() Success!");
        CPacketTranslater::attach(this);
        puts("Application Packet Translater Attach() Success!");
        CPacketDecoderInstance()->Attach(this);
        puts("Application Packet Decoder Attach() Success!");
        // TODO(dbmw): InitDB() 尚未按原版 0x0806d25c 还原
        if (InitDB() != 1)
        {
            puts("DB Open Fail");
            throw;
        }
        m_guildManager = new CGuildManager;
        m_networkThread = new CNetworkThread;
        m_networkThread->attach(this);
        if (m_networkThread->begin() != 1)
            throw;
        puts("Application Network Thread Begin() Success!");
        unsigned short port = ((CAppConfig*)m_appConfig)->Get_ServerTcpPort();
        if (port != 0)
        {
            m_tcpNetSystem.Init(port);
        }
        else
        {
            puts("TCP Server Unused");
            DNF_LOG_SCOPE_LINE(0x251, "./log/TcpServer", "TCP Server Unused");
        }
        m_gmAccounts = new WongWork::CGMAccounts;
        IQueue<TcpRecvQueue>::Get().InitQueue(
            m_tcpNetSystem.Get_TcpSwapQPacket()->GetRecvQ(),
            m_tcpNetSystem.Get_TcpSwapQPacket()->GetParseQ());
        puts("Application Load() Success!");
        m_loaded = 1;
    }
    DNF_CATCH_RETHROW("CApplication::Load() Exception Break");
}
```

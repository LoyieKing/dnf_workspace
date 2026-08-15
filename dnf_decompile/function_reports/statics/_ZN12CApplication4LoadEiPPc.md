# _ZN12CApplication4LoadEiPPc

`CApplication::Load(int, char**)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | NEAR | `0x8056412` | `0x3ea` | `0x804d52c` | `0x3ea` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,295 +1,295 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x3c,%esp
 call   <T> <_ZN14statistc_proxy10initializeEv>
 movl   $&_ZN15global_function16SendPacketToDbmwEPc,&_ZN14statistc_proxy14StatisticProxy25sendPacketFunctionPointerE
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
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x77>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x84>
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x9c>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x370>
 lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
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
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x102>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x10f>
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x127>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x370>
 lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig19Get_FrameCountValueEv>
 movzwl %ax,%eax
 mov    0x8(%ebp),%edx
 add    $0x29c,%edx
 movl   $0x3e8,0xc(%esp)
 mov    %eax,0x8(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt>
 movl   $0x8,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CUdpHandlerC1Ev>
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x196>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x370>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x2f8(%eax)
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig17Get_ServerUdpPortEv>
 movzwl %ax,%edx
 mov    0x8(%ebp),%eax
 mov    0x2f8(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CUdpHandler16InitServerSocketEi>
 cmp    $0xffffffff,%eax
 sete   %al
 test   %al,%al
 je     <T> <_ZN12CApplication4LoadEiPPc+0x29e>
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
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x24c>
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
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x246>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN12CApplication4LoadEiPPc+0x263>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x263>
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x27b>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN12CApplication4LoadEiPPc+0x263>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x370>
 lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 movl   $0x1418,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandlerC1Ev>
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x2cd>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
 jmp    <T> <_ZN12CApplication4LoadEiPPc+0x370>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x298(%eax)
 mov    0x8(%ebp),%eax
 mov    0x298(%eax),%eax
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler6AttachEP12CApplication>
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CServerConfig13GetServerInfoEv>
 mov    0x8(%ebp),%edx
 mov    0x298(%edx),%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CPacketTranslater6attachEP12CApplication>
 movl   $0x1,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CInnerMsgHandlerC1Ev>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x2cc(%eax)
 call   <T> <_Z22CPacketDecoderInstancev>
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CPacketDecoder6AttachEP12CApplication>
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
 jne    <T> <_ZN12CApplication4LoadEiPPc+0x3bc>
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
  ushort uVar2;
  CUdpHandler *this_00;
  uint uVar3;
  int iVar4;
  CDNFException *this_01;
  CServerHandler *this_02;
  ST_ServerInfo *pSVar5;
  CInnerMsgHandler *this_03;
  CPacketDecoder *this_04;
  string local_38 [7];
  allocator local_31;
  string local_30 [7];
  allocator local_29;
  string local_28 [7];
  allocator local_21 [17];
  
                    /* try { // try from 0805641b to 0805641f has its CatchHandler @ 08056782 */
  statistc_proxy::initialize();
  statistc_proxy::StatisticProxy::sendPacketFunctionPointer = global_function::SendPacketToDbmw;
  pcVar1 = *(code **)(**(int **)(this + 0x10) + 8);
  std::allocator<char>::allocator();
                    /* try { // try from 0805645b to 0805645f has its CatchHandler @ 08056496 */
  std::string::string(local_38,param_2[1],&local_31);
                    /* try { // try from 08056470 to 08056471 has its CatchHandler @ 08056474 */
  (*pcVar1)(*(undefined4 *)(this + 0x10),local_38);
                    /* try { // try from 0805648f to 08056493 has its CatchHandler @ 08056496 */
  std::string::~string(local_38);
  std::allocator<char>::~allocator((allocator<char> *)&local_31);
  pcVar1 = *(code **)(**(int **)(this + 0x14) + 8);
  std::allocator<char>::allocator();
                    /* try { // try from 080564e6 to 080564ea has its CatchHandler @ 08056521 */
  std::string::string(local_30,"./table/server_config.tbl",&local_29);
                    /* try { // try from 080564fb to 080564fc has its CatchHandler @ 080564ff */
  (*pcVar1)(*(undefined4 *)(this + 0x14),local_30);
                    /* try { // try from 0805651a to 0805651e has its CatchHandler @ 08056521 */
  std::string::~string(local_30);
  std::allocator<char>::~allocator((allocator<char> *)&local_29);
  uVar2 = CAppConfig::_ZN10CAppConfig19Get_FrameCountValueEv(*(CAppConfig **)(this + 0x10));
                    /* try { // try from 08056574 to 08056584 has its CatchHandler @ 08056782 */
  CFrameCountHandler::InitFrameCountInfo(this + 0x29c,(uint)this,uVar2);
  this_00 = operator_new(8);
                    /* try { // try from 0805658c to 08056590 has its CatchHandler @ 08056593 */
  CUdpHandler::CUdpHandler(this_00);
  *(CUdpHandler **)(this + 0x2f8) = this_00;
  uVar3 = CAppConfig::Get_ServerUdpPort(*(CAppConfig **)(this + 0x10));
                    /* try { // try from 080565d4 to 080565d8 has its CatchHandler @ 08056782 */
  iVar4 = CUdpHandler::_ZN11CUdpHandler16InitServerSocketEi
                    (*(CUdpHandler **)(this + 0x2f8),uVar3 & 0xffff);
  if (iVar4 == -1) {
    std::allocator<char>::allocator();
                    /* try { // try from 08056607 to 0805660b has its CatchHandler @ 08056675 */
    std::string::string(local_28,"CApplication::Load() Init Server Socket Exception Break!",local_21
                       );
    this_01 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08056626 to 0805662a has its CatchHandler @ 0805662d */
    CDNFException::CDNFException(this_01,local_28);
                    /* try { // try from 08056664 to 08056668 has its CatchHandler @ 0805666b */
    std::string::~string(local_28);
    std::allocator<char>::~allocator((allocator<char> *)local_21);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 080566ab to 080566bb has its CatchHandler @ 08056782 */
    __cxa_throw(this_01,&CDNFException::typeinfo,CDNFException::~CDNFException);
  }
  this_02 = operator_new(0x1418);
                    /* try { // try from 080566c3 to 080566c7 has its CatchHandler @ 080566ca */
  CServerHandler::CServerHandler(this_02);
  *(CServerHandler **)(this + 0x298) = this_02;
                    /* try { // try from 080566fd to 08056772 has its CatchHandler @ 08056782 */
  CServerHandler::Attach(*(CServerHandler **)(this + 0x298),this);
  pSVar5 = (ST_ServerInfo *)CServerConfig::GetServerInfo(*(CServerConfig **)(this + 0x14));
  CServerHandler::Load(*(CServerHandler **)(this + 0x298),pSVar5);
  CPacketTranslater::attach(this);
  this_03 = operator_new(1);
  CInnerMsgHandler::CInnerMsgHandler(this_03);
  *(CInnerMsgHandler **)(this + 0x2cc) = this_03;
  this_04 = (CPacketDecoder *)CPacketDecoderInstance();
  CPacketDecoder::Attach(this_04,this);
  puts("Application Load() Success!");
  this[4] = (CApplication)0x1;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/DNFApplication.cpp](source/DNFServer/GameServer/Statics/DNFApplication.cpp)（约第 89 行）：

```cpp
void CApplication::Load(int argc, char** argv)
{
    try
    {
        statistc_proxy::initialize();
        statistc_proxy::StatisticProxy::sendPacketFunctionPointer = global_function::SendPacketToDbmw;
        m_appConfig->Load_Table(argv[1]);
        m_serverConfig->Load_Table("./table/server_config.tbl");
        m_frame.InitFrameCountInfo(this, ((CAppConfig*)m_appConfig)->Get_FrameCountValue(), 0x3e8);
        m_udpHandler = new CUdpHandler;
        if (m_udpHandler->InitServerSocket(((CAppConfig*)m_appConfig)->Get_ServerUdpPort() & 0xffff) == -1)
        {
            throw CDNFException(
                std::string("CApplication::Load() Init Server Socket Exception Break!"));
        }
        m_serverHandler = new CServerHandler;
        m_serverHandler->Attach(this);
        m_serverHandler->Load(((CServerConfig*)m_serverConfig)->GetServerInfo());
        CPacketTranslater::attach(this);
        m_innerMsg = new CInnerMsgHandler;
        CPacketDecoderInstance()->Attach(this);
        puts("Application Load() Success!");
        m_loaded = true;
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

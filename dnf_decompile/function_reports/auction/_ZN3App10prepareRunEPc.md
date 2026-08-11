# _ZN3App10prepareRunEPc

`App::prepareRun(char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x808b7e0` | `0x524` | `0x8093a0c` | `0x534` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,324 +1,328 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x3c,%esp
+sub    $0x4c,%esp
 movl   $"Called prepareRun",(%esp)
 call   <T> <puts>
 call   <T> <_ZN3nsl13TSocketSystemINS_17SocketSystemLinuxEE7startupEv>
 call   <T> <_Z25SetAuctionServiceErrorStrv>
 movl   $0x1bc,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    0x8(%ebp),%eax
 lea    0x404(%eax),%edx
 mov    %ebx,%eax
 mov    %edx,0x8(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl14ServiceFactoryC1EPcS1_>
 jmp    <T> <_ZN3App10prepareRunEPc+0x62>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
-jmp    <T> <_ZN3App10prepareRunEPc+0x458>
+jmp    <T> <_ZN3App10prepareRunEPc+0x468>
 mov    %ebx,%eax
 mov    %eax,&_ZN3nsl4pAppE
 movl   $0x300c,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14HandlerFor_GA_C1Ev>
 mov    %ebx,%eax
 mov    %eax,&handlerFor_GA_
 movl   $0x300c,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14HandlerFor_GP_C1Ev>
 mov    %ebx,%eax
 mov    %eax,&handlerFor_GP_
 movl   $0x22c,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14HandlerFor_TE_C1Ev>
 mov    %ebx,%eax
 mov    %eax,&handlerFor_TE_
 movl   $0x6444,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14HandlerFor_DB_C1Ev>
 jmp    <T> <_ZN3App10prepareRunEPc+0xf5>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
-jmp    <T> <_ZN3App10prepareRunEPc+0x458>
+jmp    <T> <_ZN3App10prepareRunEPc+0x468>
 mov    %ebx,%eax
 mov    %eax,&handlerFor_DB_
 mov    &handlerFor_GA_,%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0xbc,%edx
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9IHandlers17setNetWorkHandlerEiPNS_15INetWorkHandlerE>
 mov    &handlerFor_GP_,%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0xbc,%edx
 mov    %eax,0x8(%esp)
 movl   $0x12,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9IHandlers17setNetWorkHandlerEiPNS_15INetWorkHandlerE>
 mov    &handlerFor_TE_,%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0xbc,%edx
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9IHandlers14setTimeHandlerEiPNS_12ITimeHandlerE>
 mov    &_ZN3nsl4pAppE,%eax
 add    $0xbc,%eax
 movl   $0x1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9IHandlers16setTimeHandleNumEi>
 call   <T> <_ZN3nsl8G_ScriptEv>
 movl   $0x4,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6Script12findIntValueEii>
-mov    %eax,%esi
+mov    %eax,-0x2c(%ebp)
 call   <T> <_ZN3nsl8G_ScriptEv>
 movl   $0x1,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6Script13findCharValueEii>
-mov    %eax,%ebx
+mov    %eax,-0x28(%ebp)
 call   <T> <_Z21G_StatisticsCollectorv>
-mov    %esi,0x8(%esp)
-mov    %ebx,0x4(%esp)
+mov    -0x2c(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    -0x28(%ebp),%edx
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN19StatisticsCollector14SetLogFileNameEPKci>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN3App10prepareRunEPc+0x24e>
+je     <T> <_ZN3App10prepareRunEPc+0x25e>
 call   <T> <_ZN3nsl8G_ScriptEv>
 movl   $0x4,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6Script12findIntValueEii>
-mov    %eax,%esi
+mov    %eax,-0x2c(%ebp)
 call   <T> <_ZN3nsl8G_ScriptEv>
 movl   $0x1,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6Script13findCharValueEii>
-mov    %eax,%ebx
+mov    %eax,-0x28(%ebp)
 call   <T> <_ZN3nsl10G_TraceLogEv>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x2c(%ebp),%edx
+mov    %edx,0x10(%esp)
+mov    -0x28(%ebp),%edx
+mov    %edx,0xc(%esp)
 movl   $"G_StatisticsCollector()->SetLogFileName(%s, %d)",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 movl   $0x1,(%esp)
 call   <T> <exit>
 movl   $0x1,-0x24(%ebp)
 movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN3App10prepareRunEPc+0x2c3>
+jmp    <T> <_ZN3App10prepareRunEPc+0x2d3>
 movl   $0x8c,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12GameDataPoolC1Ev>
-jmp    <T> <_ZN3App10prepareRunEPc+0x28d>
-mov    %edx,%esi
-mov    %eax,%edi
-mov    %ebx,(%esp)
-call   <T> <_ZdlPv>
-mov    %edi,%eax
-mov    %esi,%edx
-jmp    <T> <_ZN3App10prepareRunEPc+0x458>
+jmp    <T> <_ZN3App10prepareRunEPc+0x29d>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN3App10prepareRunEPc+0x468>
 mov    -0x20(%ebp),%eax
 mov    %ebx,%edx
 mov    %edx,&gameDataPool_(,%eax,4)
 mov    -0x20(%ebp),%eax
 mov    &gameDataPool_(,%eax,4),%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0x5c,%edx
 mov    %eax,0x8(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9DataPools17setCommonDataPoolEiPNS_14CommonDataPoolE>
 addl   $0x1,-0x20(%ebp)
 mov    -0x20(%ebp),%eax
 cmp    -0x24(%ebp),%eax
 setl   %al
 test   %al,%al
-jne    <T> <_ZN3App10prepareRunEPc+0x25e>
+jne    <T> <_ZN3App10prepareRunEPc+0x26e>
 movl   $0x42088,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnectionC1Ev>
-jmp    <T> <_ZN3App10prepareRunEPc+0x2ff>
-mov    %edx,%esi
-mov    %eax,%edi
-mov    %ebx,(%esp)
-call   <T> <_ZdlPv>
-mov    %edi,%eax
-mov    %esi,%edx
-jmp    <T> <_ZN3App10prepareRunEPc+0x458>
+jmp    <T> <_ZN3App10prepareRunEPc+0x30f>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN3App10prepareRunEPc+0x468>
 mov    %ebx,%eax
 mov    %eax,&pGameDbConnection
 movl   $0x42088,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnectionC1Ev>
-jmp    <T> <_ZN3App10prepareRunEPc+0x335>
-mov    %edx,%esi
-mov    %eax,%edi
-mov    %ebx,(%esp)
-call   <T> <_ZdlPv>
-mov    %edi,%eax
-mov    %esi,%edx
-jmp    <T> <_ZN3App10prepareRunEPc+0x458>
+jmp    <T> <_ZN3App10prepareRunEPc+0x345>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN3App10prepareRunEPc+0x468>
 mov    %ebx,%eax
 mov    %eax,&pAuctionDbConnection
 mov    &pGameDbConnection,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection4initEv>
 mov    &pAuctionDbConnection,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12DBConnection4initEv>
 mov    &pGameDbConnection,%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0x134,%edx
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl13DBConnections15setDBConnectionEiPNS_12DBConnectionE>
 mov    &pAuctionDbConnection,%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0x134,%edx
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl13DBConnections15setDBConnectionEiPNS_12DBConnectionE>
 mov    &handlerFor_DB_,%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0xbc,%edx
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9IHandlers12setDBHandlerEiPNS_10IDBHandlerE>
 mov    &handlerFor_DB_,%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0xbc,%edx
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9IHandlers12setDBHandlerEiPNS_10IDBHandlerE>
 movl   $0x200c,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12InterHandlerC1Ev>
 mov    %ebx,%eax
 mov    %eax,&interHandler
 mov    &interHandler,%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0xbc,%edx
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9IHandlers15setInterHandlerEiPNS_13IInterHandlerE>
 mov    &interHandler,%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0xbc,%edx
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9IHandlers15setInterHandlerEiPNS_13IInterHandlerE>
-jmp    <T> <_ZN3App10prepareRunEPc+0x51c>
+jmp    <T> <_ZN3App10prepareRunEPc+0x52c>
 cmp    $0x1,%edx
-je     <T> <_ZN3App10prepareRunEPc+0x465>
+je     <T> <_ZN3App10prepareRunEPc+0x475>
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK3nsl9Exception15getFunctionNameEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN3App10prepareRunEPc+0x4d4>
+je     <T> <_ZN3App10prepareRunEPc+0x4e4>
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK3nsl9Exception15getFunctionNameEv>
 mov    %eax,%edi
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK3nsl9Exception7getLineEv>
 mov    %eax,%esi
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK3nsl9Exception11getErrorMsgEv>
 mov    %eax,%ebx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK3nsl9Exception12getErrorCodeEv>
 mov    %edi,0x10(%esp)
 mov    %esi,0xc(%esp)
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $"Main Exception : %d %s at %d in %s\n",(%esp)
 call   <T> <printf>
-jmp    <T> <_ZN3App10prepareRunEPc+0x517>
+jmp    <T> <_ZN3App10prepareRunEPc+0x527>
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK3nsl9Exception11getErrorMsgEv>
 mov    %eax,%ebx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK3nsl9Exception12getErrorCodeEv>
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $"Main Exception : %d %s\n",(%esp)
 call   <T> <printf>
-jmp    <T> <_ZN3App10prepareRunEPc+0x517>
+jmp    <T> <_ZN3App10prepareRunEPc+0x527>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x3c,%esp
+add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "LinuxService": ignoring overlapping field "isTerminated_" */
/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: void prepareRun(App * this, char * Service_identify) */

void __thiscall App::_ZN3App10prepareRunEPc(App *this,char *Service_identify)

{
  bool bVar1;
  ServiceFactory *this_00;
  HandlerFor_GA_ *this_01;
  HandlerFor_GP_ *this_02;
  HandlerFor_TE_ *this_03;
  HandlerFor_DB_ *this_04;
  Script *pSVar2;
  int iVar3;
  char *pcVar4;
  StatisticsCollector *this_05;
  TraceLog *this_06;
  GameDataPool *this_07;
  DBConnection *pDVar5;
  InterHandler *this_08;
  int local_24;
  
  puts("Called prepareRun");
  nsl::TSocketSystem<nsl::SocketSystemLinux>::startup();
                    /* Unresolved local var: int mWorkThreadNum@[???]
                       try { // try from 0808b7fa to 0808b80a has its CatchHandler @ 0808bc38 */
  SetAuctionServiceErrorStr();
  this_00 = operator_new(0x1bc);
                    /* try { // try from 0808b826 to 0808b82a has its CatchHandler @ 0808b82d */
  nsl::ServiceFactory::ServiceFactory
            (this_00,Service_identify,
             (this->super_LinuxService).super_ServiceInfo.m_szConfigFileName);
  nsl::pApp = this_00;
                    /* try { // try from 0808b850 to 0808b8b1 has its CatchHandler @ 0808bc38 */
  this_01 = operator_new(0x300c);
  HandlerFor_GA_::_ZN14HandlerFor_GA_C2Ev(this_01);
  handlerFor_GA_ = this_01;
  this_02 = operator_new(0x300c);
  HandlerFor_GP_::_ZN14HandlerFor_GP_C2Ev(this_02);
  handlerFor_GP_ = this_02;
  this_03 = operator_new(0x22c);
  HandlerFor_TE_::_ZN14HandlerFor_TE_C2Ev(this_03);
  handlerFor_TE_ = this_03;
  this_04 = operator_new(0x6444);
                    /* try { // try from 0808b8b9 to 0808b8bd has its CatchHandler @ 0808b8c0 */
  HandlerFor_DB_::_ZN14HandlerFor_DB_C2Ev(this_04);
  handlerFor_DB_ = this_04;
                    /* try { // try from 0808b8fc to 0808ba49 has its CatchHandler @ 0808bc38 */
  nsl::IHandlers::setNetWorkHandler
            (&nsl::pApp->super_IHandlers,0,&handlerFor_GA_->super_INetWorkHandler);
  nsl::IHandlers::setNetWorkHandler
            (&nsl::pApp->super_IHandlers,0x12,&handlerFor_GP_->super_INetWorkHandler);
  nsl::IHandlers::setTimeHandler(&nsl::pApp->super_IHandlers,0,&handlerFor_TE_->super_ITimeHandler);
  nsl::IHandlers::setTimeHandleNum(&nsl::pApp->super_IHandlers,1);
  pSVar2 = nsl::G_Script();
  iVar3 = nsl::Script::findIntValue(pSVar2,0,4);
  pSVar2 = nsl::G_Script();
  pcVar4 = nsl::Script::findCharValue(pSVar2,0,1);
  this_05 = G_StatisticsCollector();
  bVar1 = StatisticsCollector::_ZN19StatisticsCollector14SetLogFileNameEPKci(this_05,pcVar4,iVar3);
  if (!bVar1) {
    pSVar2 = nsl::G_Script();
    iVar3 = nsl::Script::findIntValue(pSVar2,0,4);
    pSVar2 = nsl::G_Script();
    pcVar4 = nsl::Script::findCharValue(pSVar2,0,1);
    this_06 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog(this_06,7,"G_StatisticsCollector()->SetLogFileName(%s, %d)",pcVar4,iVar3);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
                    /* Unresolved local var: int i@[???] */
  for (local_24 = 0; local_24 < 1; local_24 = local_24 + 1) {
    this_07 = operator_new(0x8c);
                    /* try { // try from 0808ba51 to 0808ba55 has its CatchHandler @ 0808ba58 */
    GameDataPool::_ZN12GameDataPoolC2Ev(this_07);
    gameDataPool_[local_24] = this_07;
    nsl::DataPools::setCommonDataPool
              (&nsl::pApp->super_DataPools,local_24,&gameDataPool_[local_24]->super_CommonDataPool);
  }
                    /* try { // try from 0808bab7 to 0808babb has its CatchHandler @ 0808bc38 */
  pDVar5 = operator_new(0x42088);
                    /* try { // try from 0808bac3 to 0808bac7 has its CatchHandler @ 0808baca */
  nsl::DBConnection::DBConnection(pDVar5);
  pGameDbConnection = pDVar5;
                    /* try { // try from 0808baed to 0808baf1 has its CatchHandler @ 0808bc38 */
  pDVar5 = operator_new(0x42088);
                    /* try { // try from 0808baf9 to 0808bafd has its CatchHandler @ 0808bb00 */
  nsl::DBConnection::DBConnection(pDVar5);
  pAuctionDbConnection = pDVar5;
                    /* try { // try from 0808bb24 to 0808bc32 has its CatchHandler @ 0808bc38 */
  nsl::DBConnection::init(pGameDbConnection);
  nsl::DBConnection::init(pAuctionDbConnection);
  nsl::DBConnections::setDBConnection(&nsl::pApp->super_DBConnections,0,pGameDbConnection);
  nsl::DBConnections::setDBConnection(&nsl::pApp->super_DBConnections,1,pAuctionDbConnection);
  nsl::IHandlers::setDBHandler(&nsl::pApp->super_IHandlers,0,&handlerFor_DB_->super_IDBHandler);
  nsl::IHandlers::setDBHandler(&nsl::pApp->super_IHandlers,1,&handlerFor_DB_->super_IDBHandler);
  this_08 = operator_new(0x200c);
  InterHandler::_ZN12InterHandlerC2Ev(this_08);
  interHandler = this_08;
  nsl::IHandlers::setInterHandler(&nsl::pApp->super_IHandlers,0,&this_08->super_IInterHandler);
  nsl::IHandlers::setInterHandler(&nsl::pApp->super_IHandlers,1,&interHandler->super_IInterHandler);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/ServerLibrary2.0.cpp](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/ServerLibrary2.0.cpp)（约第 91 行）：

```cpp
void App::prepareRun(char* Service_identify)
{
    puts("Called prepareRun");
    try
    {
        nsl::TSocketSystem<nsl::SocketSystemLinux>::startup();
        SetAuctionServiceErrorStr();
        nsl::pApp = new nsl::ServiceFactory(
            Service_identify, m_szConfigFileName);
        handlerFor_GA_ = new HandlerFor_GA_;
        handlerFor_GP_ = new HandlerFor_GP_;
        handlerFor_TE_ = new HandlerFor_TE_;
        handlerFor_DB_ = new HandlerFor_DB_;
        nsl::pApp->super_IHandlers.setNetWorkHandler(
            0, handlerFor_GA_);
        nsl::pApp->super_IHandlers.setNetWorkHandler(
            0x12, handlerFor_GP_);
        nsl::pApp->super_IHandlers.setTimeHandler(
            0, handlerFor_TE_);
        nsl::pApp->super_IHandlers.setTimeHandleNum(1);
        // Evaluate findIntValue before findCharValue (arg order / ORIG esi/ebx)
        int iVar3 = nsl::G_Script()->findIntValue(0, 4);
        char* pcVar4 = nsl::G_Script()->findCharValue(0, 1);
        if (!G_StatisticsCollector()->SetLogFileName(pcVar4, iVar3))
        {
            iVar3 = nsl::G_Script()->findIntValue(0, 4);
            pcVar4 = nsl::G_Script()->findCharValue(0, 1);
            nsl::G_TraceLog()->sysLog(
                7, "G_StatisticsCollector()->SetLogFileName(%s, %d)",
                pcVar4, iVar3);
            exit(1);
        }
        // ORIG: local_24 = limit(1), i at separate local
        int local_24 = 1;
        for (int i = 0; i < local_24; i = i + 1)
        {
            gameDataPool_[i] = new GameDataPool;
            nsl::pApp->super_DataPools.setCommonDataPool(
                i, gameDataPool_[i]);
        }
        pGameDbConnection = new nsl::DBConnection;
        pAuctionDbConnection = new nsl::DBConnection;
        pGameDbConnection->init();
        pAuctionDbConnection->init();
        nsl::pApp->super_DBConnections.setDBConnection(0, pGameDbConnection);
        nsl::pApp->super_DBConnections.setDBConnection(1, pAuctionDbConnection);
        nsl::pApp->super_IHandlers.setDBHandler(
            0, handlerFor_DB_);
        nsl::pApp->super_IHandlers.setDBHandler(
            1, handlerFor_DB_);
        interHandler = new InterHandler;
        nsl::pApp->super_IHandlers.setInterHandler(
            0, interHandler);
        nsl::pApp->super_IHandlers.setInterHandler(
            1, interHandler);
    }
    catch (nsl::Exception& e)
    {
        if (e.getFunctionName() != NULL)
        {
            printf("Main Exception : %d %s at %d in %s\n",
                   e.getErrorCode(), e.getErrorMsg(), e.getLine(),
                   e.getFunctionName());
        }
        else
        {
            printf("Main Exception : %d %s\n",
                   e.getErrorCode(), e.getErrorMsg());
        }
    }
}
```

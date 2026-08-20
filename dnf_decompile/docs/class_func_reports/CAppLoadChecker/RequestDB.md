# RequestDB

`_ZN15CAppLoadChecker9RequestDBEiiii`

`CAppLoadChecker::RequestDB(int, int, int, int)`

| 类 | 地址 |
|---|---|
| `CAppLoadChecker` | `0x08600580` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08600580  _ZN15CAppLoadChecker9RequestDBEiiii
#           CAppLoadChecker::RequestDB(int, int, int, int)
# range [0x08600580, 0x086006ab]
08600580 +0x000:  push   %ebp
08600581 +0x001:  mov    %esp,%ebp
08600583 +0x003:  push   %esi
08600584 +0x004:  push   %ebx
08600585 +0x005:  sub    $0x20,%esp
08600588 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0860058d +0x00d:  movl   $0x1b5,0x8(%esp)
08600595 +0x015:  movl   $"ServerLoadChecker.cpp",0x4(%esp)
0860059d +0x01d:  mov    %eax,(%esp)
086005a0 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
086005a5 +0x025:  movl   $0x1,0x8(%esp)
086005ad +0x02d:  mov    %eax,0x4(%esp)
086005b1 +0x031:  lea    -0x14(%ebp),%eax
086005b4 +0x034:  mov    %eax,(%esp)
086005b7 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
086005bc +0x03c:  lea    -0x14(%ebp),%eax
086005bf +0x03f:  mov    %eax,(%esp)
086005c2 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086005c7 +0x047:  movl   $0x183,0x4(%esp)
086005cf +0x04f:  mov    %eax,(%esp)
086005d2 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086005d7 +0x057:  lea    -0x14(%ebp),%eax
086005da +0x05a:  mov    %eax,(%esp)
086005dd +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086005e2 +0x062:  movl   $0xffffffff,0x4(%esp)
086005ea +0x06a:  mov    %eax,(%esp)
086005ed +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086005f2 +0x072:  lea    -0x14(%ebp),%eax
086005f5 +0x075:  mov    %eax,(%esp)
086005f8 +0x078:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
086005fd +0x07d:  mov    %eax,(%esp)
08600600 +0x080:  call   08600708 <_GLOBAL__I__Z23CAppLoadCheckerInstancev+0x1c>  ; global constructors keyed to CAppLoadCheckerInstance()+0x1c
08600605 +0x085:  mov    %eax,-0xc(%ebp)
08600608 +0x088:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0860060d +0x08d:  mov    %eax,(%esp)
08600610 +0x090:  call   08106ce0 <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x162>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x162
08600615 +0x095:  mov    %eax,%edx
08600617 +0x097:  mov    -0xc(%ebp),%eax
0860061a +0x09a:  mov    %dl,(%eax)
0860061c +0x09c:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08600621 +0x0a1:  mov    %eax,(%esp)
08600624 +0x0a4:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
08600629 +0x0a9:  mov    %eax,%edx
0860062b +0x0ab:  mov    -0xc(%ebp),%eax
0860062e +0x0ae:  mov    %dl,0x1(%eax)
08600631 +0x0b1:  mov    0xc(%ebp),%eax
08600634 +0x0b4:  mov    %eax,%edx
08600636 +0x0b6:  mov    -0xc(%ebp),%eax
08600639 +0x0b9:  mov    %dx,0x2(%eax)
0860063d +0x0bd:  mov    0x10(%ebp),%eax
08600640 +0x0c0:  mov    %eax,%edx
08600642 +0x0c2:  mov    -0xc(%ebp),%eax
08600645 +0x0c5:  mov    %dx,0x4(%eax)
08600649 +0x0c9:  mov    0x14(%ebp),%eax
0860064c +0x0cc:  mov    %eax,%edx
0860064e +0x0ce:  mov    -0xc(%ebp),%eax
08600651 +0x0d1:  mov    %dx,0x6(%eax)
08600655 +0x0d5:  mov    0x18(%ebp),%eax
08600658 +0x0d8:  mov    %eax,%edx
0860065a +0x0da:  mov    -0xc(%ebp),%eax
0860065d +0x0dd:  mov    %dx,0x8(%eax)
08600661 +0x0e1:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08600666 +0x0e6:  lea    -0x14(%ebp),%edx
08600669 +0x0e9:  mov    %edx,0x8(%esp)
0860066d +0x0ed:  movl   $0x4,0x4(%esp)
08600675 +0x0f5:  mov    %eax,(%esp)
08600678 +0x0f8:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0860067d +0x0fd:  jmp    0860069a <+0x11a>
0860067f +0x0ff:  mov    %edx,%ebx
08600681 +0x101:  mov    %eax,%esi
08600683 +0x103:  lea    -0x14(%ebp),%eax
08600686 +0x106:  mov    %eax,(%esp)
08600689 +0x109:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0860068e +0x10e:  mov    %esi,%eax
08600690 +0x110:  mov    %ebx,%edx
08600692 +0x112:  mov    %eax,(%esp)
08600695 +0x115:  call   08ae3750 <_Unwind_Resume>
0860069a +0x11a:  lea    -0x14(%ebp),%eax
0860069d +0x11d:  mov    %eax,(%esp)
086006a0 +0x120:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086006a5 +0x125:  add    $0x20,%esp
086006a8 +0x128:  pop    %ebx
086006a9 +0x129:  pop    %esi
086006aa +0x12a:  pop    %ebp
086006ab +0x12b:  ret
```

## 反编译 C

```c
// CAppLoadChecker::RequestDB @ 0x8600580

/* CAppLoadChecker::RequestDB(int, int, int, int) */

void __thiscall
CAppLoadChecker::RequestDB(CAppLoadChecker *this,int param_1,int param_2,int param_3,int param_4)

{
  SIG_INSERT_SERVER_LOAD_STATISTIC SVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  CEnvironment *pCVar4;
  CStreamGuard local_18 [8];
  SIG_INSERT_SERVER_LOAD_STATISTIC *local_10;
  
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"ServerLoadChecker.cpp",0x1b5);
  CStreamGuard::CStreamGuard(local_18,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 086005d2 to 0860067c has its CatchHandler @ 0860067f */
  CStreamGuard::operator<<(pCVar3,0x183);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar3,-1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_INSERT_SERVER_LOAD_STATISTIC>(pCVar3);
  pCVar4 = (CEnvironment *)G_CEnvironment();
  SVar1 = (SIG_INSERT_SERVER_LOAD_STATISTIC)CEnvironment::get_server_group(pCVar4);
  *local_10 = SVar1;
  pCVar4 = (CEnvironment *)G_CEnvironment();
  SVar1 = (SIG_INSERT_SERVER_LOAD_STATISTIC)CEnvironment::get_channel_no(pCVar4);
  local_10[1] = SVar1;
  *(short *)(local_10 + 2) = (short)param_1;
  *(short *)(local_10 + 4) = (short)param_2;
  *(short *)(local_10 + 6) = (short)param_3;
  *(short *)(local_10 + 8) = (short)param_4;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```

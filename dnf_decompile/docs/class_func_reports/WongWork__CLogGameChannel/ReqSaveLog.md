# ReqSaveLog

`_ZN8WongWork15CLogGameChannel10ReqSaveLogEv`

`WongWork::CLogGameChannel::ReqSaveLog()`

| 类 | 地址 |
|---|---|
| `WongWork::CLogGameChannel` | `0x08550456` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08550456  _ZN8WongWork15CLogGameChannel10ReqSaveLogEv
#           WongWork::CLogGameChannel::ReqSaveLog()
# range [0x08550456, 0x08550611]
08550456 +0x000:  push   %ebp
08550457 +0x001:  mov    %esp,%ebp
08550459 +0x003:  push   %esi
0855045a +0x004:  push   %ebx
0855045b +0x005:  sub    $0x20,%esp
0855045e +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08550463 +0x00d:  movl   $0x20,0x8(%esp)
0855046b +0x015:  movl   $"LogGameChannel.cpp",0x4(%esp)
08550473 +0x01d:  mov    %eax,(%esp)
08550476 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0855047b +0x025:  movl   $0x1,0x8(%esp)
08550483 +0x02d:  mov    %eax,0x4(%esp)
08550487 +0x031:  lea    -0x14(%ebp),%eax
0855048a +0x034:  mov    %eax,(%esp)
0855048d +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08550492 +0x03c:  lea    -0x14(%ebp),%eax
08550495 +0x03f:  mov    %eax,(%esp)
08550498 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0855049d +0x047:  movl   $0x79,0x4(%esp)
085504a5 +0x04f:  mov    %eax,(%esp)
085504a8 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085504ad +0x057:  lea    -0x14(%ebp),%eax
085504b0 +0x05a:  mov    %eax,(%esp)
085504b3 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085504b8 +0x062:  movl   $0xffffffff,0x4(%esp)
085504c0 +0x06a:  mov    %eax,(%esp)
085504c3 +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085504c8 +0x072:  lea    -0x14(%ebp),%eax
085504cb +0x075:  mov    %eax,(%esp)
085504ce +0x078:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
085504d3 +0x07d:  mov    %eax,(%esp)
085504d6 +0x080:  call   08550780 <_GLOBAL__I__ZN8WongWork15CLogGameChannel14GetLogTargetDBEv+0x1d>  ; global constructors keyed to WongWork::CLogGameChannel::GetLogTargetDB()+0x1d
085504db +0x085:  mov    %eax,-0xc(%ebp)
085504de +0x088:  movl   $0x3b,0x8(%esp)
085504e6 +0x090:  movl   $0x0,0x4(%esp)
085504ee +0x098:  mov    -0xc(%ebp),%eax
085504f1 +0x09b:  mov    %eax,(%esp)
085504f4 +0x09e:  call   0807dcc0 <_init+0x5b8>
085504f9 +0x0a3:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
085504fe +0x0a8:  mov    0x378(%eax),%eax
08550504 +0x0ae:  mov    %eax,%edx
08550506 +0x0b0:  mov    -0xc(%ebp),%eax
08550509 +0x0b3:  mov    %dl,(%eax)
0855050b +0x0b5:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08550510 +0x0ba:  mov    0x1b0(%eax),%eax
08550516 +0x0c0:  mov    %eax,%edx
08550518 +0x0c2:  mov    -0xc(%ebp),%eax
0855051b +0x0c5:  mov    %dx,0x23(%eax)
0855051f +0x0c9:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08550524 +0x0ce:  mov    0x198(%eax),%edx
0855052a +0x0d4:  mov    -0xc(%ebp),%eax
0855052d +0x0d7:  mov    %edx,0x1(%eax)
08550530 +0x0da:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08550535 +0x0df:  add    $0x384,%eax
0855053a +0x0e4:  mov    %eax,(%esp)
0855053d +0x0e7:  call   0807e3b0 <_init+0xca8>
08550542 +0x0ec:  mov    %eax,%ebx
08550544 +0x0ee:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08550549 +0x0f3:  lea    0x384(%eax),%edx
0855054f +0x0f9:  mov    -0xc(%ebp),%eax
08550552 +0x0fc:  add    $0x5,%eax
08550555 +0x0ff:  mov    %ebx,0x8(%esp)
08550559 +0x103:  mov    %edx,0x4(%esp)
0855055d +0x107:  mov    %eax,(%esp)
08550560 +0x10a:  call   0807d8a0 <_init+0x198>
08550565 +0x10f:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0855056a +0x114:  add    $0x1b4,%eax
0855056f +0x119:  mov    %eax,(%esp)
08550572 +0x11c:  call   0807e3b0 <_init+0xca8>
08550577 +0x121:  mov    %eax,%ebx
08550579 +0x123:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0855057e +0x128:  lea    0x1b4(%eax),%edx
08550584 +0x12e:  mov    -0xc(%ebp),%eax
08550587 +0x131:  add    $0x25,%eax
0855058a +0x134:  mov    %ebx,0x8(%esp)
0855058e +0x138:  mov    %edx,0x4(%esp)
08550592 +0x13c:  mov    %eax,(%esp)
08550595 +0x13f:  call   0807d8a0 <_init+0x198>
0855059a +0x144:  mov    0x8(%ebp),%eax
0855059d +0x147:  mov    0x8(%eax),%eax
085505a0 +0x14a:  mov    %eax,%edx
085505a2 +0x14c:  mov    -0xc(%ebp),%eax
085505a5 +0x14f:  mov    %dx,0x37(%eax)
085505a9 +0x153:  mov    0x8(%ebp),%eax
085505ac +0x156:  mov    (%eax),%eax
085505ae +0x158:  mov    %eax,%edx
085505b0 +0x15a:  mov    -0xc(%ebp),%eax
085505b3 +0x15d:  mov    %dx,0x35(%eax)
085505b7 +0x161:  mov    0x8(%ebp),%eax
085505ba +0x164:  mov    0x4(%eax),%eax
085505bd +0x167:  mov    %eax,%edx
085505bf +0x169:  mov    -0xc(%ebp),%eax
085505c2 +0x16c:  mov    %dx,0x39(%eax)
085505c6 +0x170:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
085505cb +0x175:  lea    -0x14(%ebp),%edx
085505ce +0x178:  mov    %edx,0x8(%esp)
085505d2 +0x17c:  movl   $0x4,0x4(%esp)
085505da +0x184:  mov    %eax,(%esp)
085505dd +0x187:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
085505e2 +0x18c:  jmp    085505ff <+0x1a9>
085505e4 +0x18e:  mov    %edx,%ebx
085505e6 +0x190:  mov    %eax,%esi
085505e8 +0x192:  lea    -0x14(%ebp),%eax
085505eb +0x195:  mov    %eax,(%esp)
085505ee +0x198:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
085505f3 +0x19d:  mov    %esi,%eax
085505f5 +0x19f:  mov    %ebx,%edx
085505f7 +0x1a1:  mov    %eax,(%esp)
085505fa +0x1a4:  call   08ae3750 <_Unwind_Resume>
085505ff +0x1a9:  lea    -0x14(%ebp),%eax
08550602 +0x1ac:  mov    %eax,(%esp)
08550605 +0x1af:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0855060a +0x1b4:  add    $0x20,%esp
0855060d +0x1b7:  pop    %ebx
0855060e +0x1b8:  pop    %esi
0855060f +0x1b9:  pop    %ebp
08550610 +0x1ba:  ret
08550611 +0x1bb:  nop
```

## 反编译 C

```c
// WongWork::CLogGameChannel::ReqSaveLog @ 0x8550456

/* WongWork::CLogGameChannel::ReqSaveLog() */

void __thiscall WongWork::CLogGameChannel::ReqSaveLog(CLogGameChannel *this)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  size_t sVar4;
  CStreamGuard local_18 [8];
  SIG_SAVE_LOGGAMECHANNEL *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"LogGameChannel.cpp",0x20);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 085504a8 to 085505e1 has its CatchHandler @ 085505e4 */
  CStreamGuard::operator<<(pCVar2,0x79);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SAVE_LOGGAMECHANNEL>(pCVar2);
  memset(local_10,0,0x3b);
  iVar3 = G_CEnvironment();
  *local_10 = SUB41(*(undefined4 *)(iVar3 + 0x378),0);
  iVar3 = G_CEnvironment();
  *(short *)(local_10 + 0x23) = (short)*(undefined4 *)(iVar3 + 0x1b0);
  iVar3 = G_CEnvironment();
  *(undefined4 *)(local_10 + 1) = *(undefined4 *)(iVar3 + 0x198);
  iVar3 = G_CEnvironment();
  sVar4 = strlen((char *)(iVar3 + 900));
  iVar3 = G_CEnvironment();
  memcpy(local_10 + 5,(void *)(iVar3 + 900),sVar4);
  iVar3 = G_CEnvironment();
  sVar4 = strlen((char *)(iVar3 + 0x1b4));
  iVar3 = G_CEnvironment();
  memcpy(local_10 + 0x25,(void *)(iVar3 + 0x1b4),sVar4);
  *(short *)(local_10 + 0x37) = (short)*(undefined4 *)(this + 8);
  *(short *)(local_10 + 0x35) = (short)*(undefined4 *)this;
  *(short *)(local_10 + 0x39) = (short)*(undefined4 *)(this + 4);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```

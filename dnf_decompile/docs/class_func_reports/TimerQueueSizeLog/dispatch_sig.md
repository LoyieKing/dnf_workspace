# dispatch_sig

`_ZN17TimerQueueSizeLog12dispatch_sigEiij`

`TimerQueueSizeLog::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerQueueSizeLog` | `0x08636204` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08636204  _ZN17TimerQueueSizeLog12dispatch_sigEiij
#           TimerQueueSizeLog::dispatch_sig(int, int, unsigned int)
# range [0x08636204, 0x08636347]
08636204 +0x000:  push   %ebp
08636205 +0x001:  mov    %esp,%ebp
08636207 +0x003:  push   %esi
08636208 +0x004:  push   %ebx
08636209 +0x005:  sub    $0x20,%esp
0863620c +0x008:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08636211 +0x00d:  movl   $0x2,0x4(%esp)
08636219 +0x015:  mov    %eax,(%esp)
0863621c +0x018:  call   085711e4 <_ZN11MsgQueueMgr6remainENS_9QUEUE_IDXE>  ; MsgQueueMgr::remain(MsgQueueMgr::QUEUE_IDX)
08636221 +0x01d:  mov    %eax,-0x10(%ebp)
08636224 +0x020:  cmpl   $0xa,-0x10(%ebp)
08636228 +0x024:  jle    0863631c <+0x118>
0863622e +0x02a:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08636233 +0x02f:  movl   $0xa7f,0x8(%esp)
0863623b +0x037:  movl   $"TimerDispatcher.cpp",0x4(%esp)
08636243 +0x03f:  mov    %eax,(%esp)
08636246 +0x042:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0863624b +0x047:  movl   $0x1,0x8(%esp)
08636253 +0x04f:  mov    %eax,0x4(%esp)
08636257 +0x053:  lea    -0x18(%ebp),%eax
0863625a +0x056:  mov    %eax,(%esp)
0863625d +0x059:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08636262 +0x05e:  lea    -0x18(%ebp),%eax
08636265 +0x061:  mov    %eax,(%esp)
08636268 +0x064:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0863626d +0x069:  movl   $0x9b,0x4(%esp)
08636275 +0x071:  mov    %eax,(%esp)
08636278 +0x074:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0863627d +0x079:  lea    -0x18(%ebp),%eax
08636280 +0x07c:  mov    %eax,(%esp)
08636283 +0x07f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08636288 +0x084:  movl   $0xffffffff,0x4(%esp)
08636290 +0x08c:  mov    %eax,(%esp)
08636293 +0x08f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08636298 +0x094:  lea    -0x18(%ebp),%eax
0863629b +0x097:  mov    %eax,(%esp)
0863629e +0x09a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086362a3 +0x09f:  mov    -0x10(%ebp),%edx
086362a6 +0x0a2:  mov    %edx,0x4(%esp)
086362aa +0x0a6:  mov    %eax,(%esp)
086362ad +0x0a9:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086362b2 +0x0ae:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086362b7 +0x0b3:  mov    %eax,(%esp)
086362ba +0x0b6:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
086362bf +0x0bb:  mov    %eax,%ebx
086362c1 +0x0bd:  lea    -0x18(%ebp),%eax
086362c4 +0x0c0:  mov    %eax,(%esp)
086362c7 +0x0c3:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086362cc +0x0c8:  mov    %ebx,0x4(%esp)
086362d0 +0x0cc:  mov    %eax,(%esp)
086362d3 +0x0cf:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086362d8 +0x0d4:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
086362dd +0x0d9:  lea    -0x18(%ebp),%edx
086362e0 +0x0dc:  mov    %edx,0x8(%esp)
086362e4 +0x0e0:  movl   $0x4,0x4(%esp)
086362ec +0x0e8:  mov    %eax,(%esp)
086362ef +0x0eb:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
086362f4 +0x0f0:  jmp    08636311 <+0x10d>
086362f6 +0x0f2:  mov    %edx,%ebx
086362f8 +0x0f4:  mov    %eax,%esi
086362fa +0x0f6:  lea    -0x18(%ebp),%eax
086362fd +0x0f9:  mov    %eax,(%esp)
08636300 +0x0fc:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08636305 +0x101:  mov    %esi,%eax
08636307 +0x103:  mov    %ebx,%edx
08636309 +0x105:  mov    %eax,(%esp)
0863630c +0x108:  call   08ae3750 <_Unwind_Resume>
08636311 +0x10d:  lea    -0x18(%ebp),%eax
08636314 +0x110:  mov    %eax,(%esp)
08636317 +0x113:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0863631c +0x118:  mov    0x8(%ebp),%eax
0863631f +0x11b:  mov    %eax,(%esp)
08636322 +0x11e:  call   08636348 <_ZN17TimerQueueSizeLog15RegistNextTimerEv>  ; TimerQueueSizeLog::RegistNextTimer()
08636327 +0x123:  mov    %al,-0x9(%ebp)
0863632a +0x126:  movzbl -0x9(%ebp),%eax
0863632e +0x12a:  xor    $0x1,%eax
08636331 +0x12d:  test   %al,%al
08636333 +0x12f:  je     0863633c <+0x138>
08636335 +0x131:  mov    $0x0,%eax
0863633a +0x136:  jmp    08636341 <+0x13d>
0863633c +0x138:  mov    $0x1,%eax
08636341 +0x13d:  add    $0x20,%esp
08636344 +0x140:  pop    %ebx
08636345 +0x141:  pop    %esi
08636346 +0x142:  pop    %ebp
08636347 +0x143:  ret
```

## 反编译 C

```c
// TimerQueueSizeLog::dispatch_sig @ 0x8636204

/* TimerQueueSizeLog::dispatch_sig(int, int, unsigned int) */

bool TimerQueueSizeLog::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  CEnvironment *this;
  int iVar4;
  CStreamGuard local_1c [8];
  int local_14;
  
  local_14 = MsgQueueMgr::remain(GlobalData::s_msgq_mgr,2);
  if (10 < local_14) {
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"TimerDispatcher.cpp",0xa7f);
    CStreamGuard::CStreamGuard(local_1c,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 08636278 to 086362f3 has its CatchHandler @ 086362f6 */
    CStreamGuard::operator<<(pCVar3,0x9b);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,-1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,local_14);
    this = (CEnvironment *)G_CEnvironment();
    iVar4 = CEnvironment::get_channel_no(this);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,iVar4);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_1c);
    CStreamGuard::~CStreamGuard(local_1c);
  }
  cVar1 = RegistNextTimer();
  return cVar1 == '\x01';
}
```

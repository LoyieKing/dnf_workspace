# _sendResult

`_ZN13DB_LoadCharac11_sendResultEiiP15SIG_LOAD_CHARAC`

`DB_LoadCharac::_sendResult(int, int, SIG_LOAD_CHARAC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadCharac` | `0x0840a4ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840a4ce  _ZN13DB_LoadCharac11_sendResultEiiP15SIG_LOAD_CHARAC
#           DB_LoadCharac::_sendResult(int, int, SIG_LOAD_CHARAC*)
# range [0x0840a4ce, 0x0840a603]
0840a4ce +0x000:  push   %ebp
0840a4cf +0x001:  mov    %esp,%ebp
0840a4d1 +0x003:  push   %esi
0840a4d2 +0x004:  push   %ebx
0840a4d3 +0x005:  sub    $0x30,%esp
0840a4d6 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0840a4db +0x00d:  movl   $0x233a,0x8(%esp)
0840a4e3 +0x015:  movl   $"DBThread.cpp",0x4(%esp)
0840a4eb +0x01d:  mov    %eax,(%esp)
0840a4ee +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0840a4f3 +0x025:  movl   $0x1,0x8(%esp)
0840a4fb +0x02d:  mov    %eax,0x4(%esp)
0840a4ff +0x031:  lea    -0x24(%ebp),%eax
0840a502 +0x034:  mov    %eax,(%esp)
0840a505 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0840a50a +0x03c:  lea    -0x24(%ebp),%eax
0840a50d +0x03f:  mov    %eax,(%esp)
0840a510 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0840a515 +0x047:  movl   $0x7,0x4(%esp)
0840a51d +0x04f:  mov    %eax,(%esp)
0840a520 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0840a525 +0x057:  lea    -0x24(%ebp),%eax
0840a528 +0x05a:  mov    %eax,(%esp)
0840a52b +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0840a530 +0x062:  mov    0x10(%ebp),%edx
0840a533 +0x065:  mov    %edx,0x4(%esp)
0840a537 +0x069:  mov    %eax,(%esp)
0840a53a +0x06c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0840a53f +0x071:  lea    -0x24(%ebp),%eax
0840a542 +0x074:  mov    %eax,(%esp)
0840a545 +0x077:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0840a54a +0x07c:  mov    %eax,(%esp)
0840a54d +0x07f:  call   08236d1a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc3c4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc3c4
0840a552 +0x084:  mov    %eax,-0xc(%ebp)
0840a555 +0x087:  movl   $0x703,0x8(%esp)
0840a55d +0x08f:  mov    0x14(%ebp),%eax
0840a560 +0x092:  mov    %eax,0x4(%esp)
0840a564 +0x096:  mov    -0xc(%ebp),%eax
0840a567 +0x099:  mov    %eax,(%esp)
0840a56a +0x09c:  call   0807d8a0 <_init+0x198>
0840a56f +0x0a1:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0840a574 +0x0a6:  lea    -0x24(%ebp),%edx
0840a577 +0x0a9:  mov    %edx,0x8(%esp)
0840a57b +0x0ad:  movl   $0x1,0x4(%esp)
0840a583 +0x0b5:  mov    %eax,(%esp)
0840a586 +0x0b8:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0840a58b +0x0bd:  mov    0x14(%ebp),%eax
0840a58e +0x0c0:  mov    0x59(%eax),%esi
0840a591 +0x0c3:  mov    0x14(%ebp),%eax
0840a594 +0x0c6:  mov    0x4(%eax),%ebx
0840a597 +0x0c9:  movl   $0x0,0xc(%esp)
0840a59f +0x0d1:  movl   $0x2347,0x8(%esp)
0840a5a7 +0x0d9:  movl   $&_ZZN13DB_LoadCharac11_sendResultEiiP15SIG_LOAD_CHARACE19__PRETTY_FUNCTION__,0x4(%esp)
0840a5af +0x0e1:  lea    -0x1c(%ebp),%eax
0840a5b2 +0x0e4:  mov    %eax,(%esp)
0840a5b5 +0x0e7:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840a5ba +0x0ec:  mov    %esi,0xc(%esp)
0840a5be +0x0f0:  mov    %ebx,0x8(%esp)
0840a5c2 +0x0f4:  movl   $"CharLastPlayTick char(%d) t(%d)",0x4(%esp)
0840a5ca +0x0fc:  lea    -0x1c(%ebp),%eax
0840a5cd +0x0ff:  mov    %eax,(%esp)
0840a5d0 +0x102:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840a5d5 +0x107:  jmp    0840a5f2 <+0x124>
0840a5d7 +0x109:  mov    %edx,%ebx
0840a5d9 +0x10b:  mov    %eax,%esi
0840a5db +0x10d:  lea    -0x24(%ebp),%eax
0840a5de +0x110:  mov    %eax,(%esp)
0840a5e1 +0x113:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0840a5e6 +0x118:  mov    %esi,%eax
0840a5e8 +0x11a:  mov    %ebx,%edx
0840a5ea +0x11c:  mov    %eax,(%esp)
0840a5ed +0x11f:  call   08ae3750 <_Unwind_Resume>
0840a5f2 +0x124:  lea    -0x24(%ebp),%eax
0840a5f5 +0x127:  mov    %eax,(%esp)
0840a5f8 +0x12a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0840a5fd +0x12f:  add    $0x30,%esp
0840a600 +0x132:  pop    %ebx
0840a601 +0x133:  pop    %esi
0840a602 +0x134:  pop    %ebp
0840a603 +0x135:  ret
```

## 反编译 C

```c
// DB_LoadCharac::_sendResult @ 0x840a4ce

/* DB_LoadCharac::_sendResult(int, int, SIG_LOAD_CHARAC*) */

void __thiscall
DB_LoadCharac::_sendResult(DB_LoadCharac *this,int param_1,int param_2,SIG_LOAD_CHARAC *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  CStreamGuard local_28 [8];
  cMyTrace local_20 [16];
  SIG_LOAD_CHARAC *local_10;
  
  pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x233a);
  CStreamGuard::CStreamGuard(local_28,pSVar3,true);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_28);
                    /* try { // try from 0840a520 to 0840a5d4 has its CatchHandler @ 0840a5d7 */
  CStreamGuard::operator<<(pCVar4,7);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_28);
  CStreamGuard::operator<<(pCVar4,param_2);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_28);
  local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_CHARAC>(pCVar4);
  memcpy(local_10,param_3,0x703);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_28);
  uVar1 = *(undefined4 *)(param_3 + 0x59);
  uVar2 = *(undefined4 *)(param_3 + 4);
  cMyTrace::cMyTrace(local_20,"void DB_LoadCharac::_sendResult(int, int, SIG_LOAD_CHARAC*)",0x2347,0
                    );
  cMyTrace::operator()(local_20,"CharLastPlayTick char(%d) t(%d)",uVar2,uVar1);
  CStreamGuard::~CStreamGuard(local_28);
  return;
}
```

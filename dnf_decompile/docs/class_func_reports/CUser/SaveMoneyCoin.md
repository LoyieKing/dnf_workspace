# SaveMoneyCoin

`_ZN5CUser13SaveMoneyCoinEv`

`CUser::SaveMoneyCoin()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086504d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086504d8  _ZN5CUser13SaveMoneyCoinEv
#           CUser::SaveMoneyCoin()
# range [0x086504d8, 0x086505f5]
086504d8 +0x000:  push   %ebp
086504d9 +0x001:  mov    %esp,%ebp
086504db +0x003:  push   %esi
086504dc +0x004:  push   %ebx
086504dd +0x005:  sub    $0x20,%esp
086504e0 +0x008:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086504e5 +0x00d:  mov    %eax,(%esp)
086504e8 +0x010:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
086504ed +0x015:  cmp    $0x7,%eax
086504f0 +0x018:  sete   %al
086504f3 +0x01b:  test   %al,%al
086504f5 +0x01d:  je     08650501 <+0x29>
086504f7 +0x01f:  mov    $0x0,%ebx
086504fc +0x024:  jmp    086505ec <+0x114>
08650501 +0x029:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
08650506 +0x02e:  movl   $0x18cc,0x8(%esp)
0865050e +0x036:  movl   $"user.cpp",0x4(%esp)
08650516 +0x03e:  mov    %eax,(%esp)
08650519 +0x041:  call   08290262 <_ZN13BigStreamPool7AcquireEPKci>  ; BigStreamPool::Acquire(char const*, int)
0865051e +0x046:  movl   $0x1,0x8(%esp)
08650526 +0x04e:  mov    %eax,0x4(%esp)
0865052a +0x052:  lea    -0x14(%ebp),%eax
0865052d +0x055:  mov    %eax,(%esp)
08650530 +0x058:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08650535 +0x05d:  lea    -0x14(%ebp),%eax
08650538 +0x060:  mov    %eax,(%esp)
0865053b +0x063:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08650540 +0x068:  movl   $0x23,0x4(%esp)
08650548 +0x070:  mov    %eax,(%esp)
0865054b +0x073:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08650550 +0x078:  mov    0x8(%ebp),%eax
08650553 +0x07b:  mov    %eax,(%esp)
08650556 +0x07e:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0865055b +0x083:  mov    %eax,%ebx
0865055d +0x085:  lea    -0x14(%ebp),%eax
08650560 +0x088:  mov    %eax,(%esp)
08650563 +0x08b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08650568 +0x090:  mov    %ebx,0x4(%esp)
0865056c +0x094:  mov    %eax,(%esp)
0865056f +0x097:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08650574 +0x09c:  lea    -0x14(%ebp),%eax
08650577 +0x09f:  mov    %eax,(%esp)
0865057a +0x0a2:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0865057f +0x0a7:  mov    %eax,(%esp)
08650582 +0x0aa:  call   08180dac <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0xa43>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0xa43
08650587 +0x0af:  mov    %eax,-0xc(%ebp)
0865058a +0x0b2:  mov    -0xc(%ebp),%eax
0865058d +0x0b5:  mov    %eax,0x4(%esp)
08650591 +0x0b9:  mov    0x8(%ebp),%eax
08650594 +0x0bc:  mov    %eax,(%esp)
08650597 +0x0bf:  call   0864fd80 <_ZN5CUser17_GetSaveInvenBaseEP18SIG_SAVE_INVENTORY>  ; CUser::_GetSaveInvenBase(SIG_SAVE_INVENTORY*)
0865059c +0x0c4:  mov    -0xc(%ebp),%eax
0865059f +0x0c7:  movb   $0x1,0x8(%eax)
086505a3 +0x0cb:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
086505a8 +0x0d0:  lea    -0x14(%ebp),%edx
086505ab +0x0d3:  mov    %edx,0x8(%esp)
086505af +0x0d7:  movl   $0x2,0x4(%esp)
086505b7 +0x0df:  mov    %eax,(%esp)
086505ba +0x0e2:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
086505bf +0x0e7:  mov    $0x1,%ebx
086505c4 +0x0ec:  lea    -0x14(%ebp),%eax
086505c7 +0x0ef:  mov    %eax,(%esp)
086505ca +0x0f2:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086505cf +0x0f7:  jmp    086505ec <+0x114>
086505d1 +0x0f9:  mov    %edx,%ebx
086505d3 +0x0fb:  mov    %eax,%esi
086505d5 +0x0fd:  lea    -0x14(%ebp),%eax
086505d8 +0x100:  mov    %eax,(%esp)
086505db +0x103:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086505e0 +0x108:  mov    %esi,%eax
086505e2 +0x10a:  mov    %ebx,%edx
086505e4 +0x10c:  mov    %eax,(%esp)
086505e7 +0x10f:  call   08ae3750 <_Unwind_Resume>
086505ec +0x114:  mov    %ebx,%eax
086505ee +0x116:  add    $0x20,%esp
086505f1 +0x119:  pop    %ebx
086505f2 +0x11a:  pop    %esi
086505f3 +0x11b:  pop    %ebp
086505f4 +0x11c:  ret
086505f5 +0x11d:  nop
```

## 反编译 C

```c
// CUser::SaveMoneyCoin @ 0x86504d8

/* CUser::SaveMoneyCoin() */

bool __thiscall CUser::SaveMoneyCoin(CUser *this)

{
  GameWorld *this_00;
  int iVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  CStreamGuard local_18 [8];
  SIG_SAVE_INVENTORY *local_10;
  
  this_00 = (GameWorld *)G_GameWorld();
  iVar1 = GameWorld::GetChannelType(this_00);
  if (iVar1 != 7) {
    pSVar2 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"user.cpp",0x18cc);
    CStreamGuard::CStreamGuard(local_18,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0865054b to 086505be has its CatchHandler @ 086505d1 */
    CStreamGuard::operator<<(pCVar3,0x23);
    iVar4 = GetUID(this);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,iVar4);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
    local_10 = CStreamGuard::GetInBuffer<SIG_SAVE_INVENTORY>(pCVar3);
    _GetSaveInvenBase(this,local_10);
    local_10[8] = (SIG_SAVE_INVENTORY)0x1;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
    CStreamGuard::~CStreamGuard(local_18);
  }
  return iVar1 != 7;
}
```

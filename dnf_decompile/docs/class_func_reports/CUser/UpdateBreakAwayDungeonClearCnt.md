# UpdateBreakAwayDungeonClearCnt

`_ZN5CUser30UpdateBreakAwayDungeonClearCntEv`

`CUser::UpdateBreakAwayDungeonClearCnt()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086522ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086522ea  _ZN5CUser30UpdateBreakAwayDungeonClearCntEv
#           CUser::UpdateBreakAwayDungeonClearCnt()
# range [0x086522ea, 0x0865240b]
086522ea +0x000:  push   %ebp
086522eb +0x001:  mov    %esp,%ebp
086522ed +0x003:  push   %esi
086522ee +0x004:  push   %ebx
086522ef +0x005:  sub    $0x20,%esp
086522f2 +0x008:  movl   $0x0,0x4(%esp)
086522fa +0x010:  mov    0x8(%ebp),%eax
086522fd +0x013:  mov    %eax,(%esp)
08652300 +0x016:  call   085bfd1a <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1278>  ; global constructors keyed to CParty::cMember::cMember()+0x1278
08652305 +0x01b:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0865230a +0x020:  movl   $0x1c01,0x8(%esp)
08652312 +0x028:  movl   $"user.cpp",0x4(%esp)
0865231a +0x030:  mov    %eax,(%esp)
0865231d +0x033:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08652322 +0x038:  movl   $0x1,0x8(%esp)
0865232a +0x040:  mov    %eax,0x4(%esp)
0865232e +0x044:  lea    -0x10(%ebp),%eax
08652331 +0x047:  mov    %eax,(%esp)
08652334 +0x04a:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08652339 +0x04f:  lea    -0x10(%ebp),%eax
0865233c +0x052:  mov    %eax,(%esp)
0865233f +0x055:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08652344 +0x05a:  movl   $0x145,0x4(%esp)
0865234c +0x062:  mov    %eax,(%esp)
0865234f +0x065:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08652354 +0x06a:  mov    0x8(%ebp),%eax
08652357 +0x06d:  mov    %eax,(%esp)
0865235a +0x070:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0865235f +0x075:  mov    %eax,%ebx
08652361 +0x077:  lea    -0x10(%ebp),%eax
08652364 +0x07a:  mov    %eax,(%esp)
08652367 +0x07d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0865236c +0x082:  mov    %ebx,0x4(%esp)
08652370 +0x086:  mov    %eax,(%esp)
08652373 +0x089:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08652378 +0x08e:  mov    0x8(%ebp),%eax
0865237b +0x091:  mov    %eax,(%esp)
0865237e +0x094:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08652383 +0x099:  mov    %eax,%ebx
08652385 +0x09b:  lea    -0x10(%ebp),%eax
08652388 +0x09e:  mov    %eax,(%esp)
0865238b +0x0a1:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08652390 +0x0a6:  mov    %ebx,0x4(%esp)
08652394 +0x0aa:  mov    %eax,(%esp)
08652397 +0x0ad:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0865239c +0x0b2:  mov    0x8(%ebp),%eax
0865239f +0x0b5:  mov    %eax,(%esp)
086523a2 +0x0b8:  call   0822fc6e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5318>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5318
086523a7 +0x0bd:  mov    %eax,%ebx
086523a9 +0x0bf:  lea    -0x10(%ebp),%eax
086523ac +0x0c2:  mov    %eax,(%esp)
086523af +0x0c5:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086523b4 +0x0ca:  mov    %ebx,0x4(%esp)
086523b8 +0x0ce:  mov    %eax,(%esp)
086523bb +0x0d1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086523c0 +0x0d6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
086523c5 +0x0db:  lea    -0x10(%ebp),%edx
086523c8 +0x0de:  mov    %edx,0x8(%esp)
086523cc +0x0e2:  movl   $0x2,0x4(%esp)
086523d4 +0x0ea:  mov    %eax,(%esp)
086523d7 +0x0ed:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
086523dc +0x0f2:  jmp    086523f9 <+0x10f>
086523de +0x0f4:  mov    %edx,%ebx
086523e0 +0x0f6:  mov    %eax,%esi
086523e2 +0x0f8:  lea    -0x10(%ebp),%eax
086523e5 +0x0fb:  mov    %eax,(%esp)
086523e8 +0x0fe:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086523ed +0x103:  mov    %esi,%eax
086523ef +0x105:  mov    %ebx,%edx
086523f1 +0x107:  mov    %eax,(%esp)
086523f4 +0x10a:  call   08ae3750 <_Unwind_Resume>
086523f9 +0x10f:  lea    -0x10(%ebp),%eax
086523fc +0x112:  mov    %eax,(%esp)
086523ff +0x115:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08652404 +0x11a:  add    $0x20,%esp
08652407 +0x11d:  pop    %ebx
08652408 +0x11e:  pop    %esi
08652409 +0x11f:  pop    %ebp
0865240a +0x120:  ret
0865240b +0x121:  nop
```

## 反编译 C

```c
// CUser::UpdateBreakAwayDungeonClearCnt @ 0x86522ea

/* CUser::UpdateBreakAwayDungeonClearCnt() */

void __thiscall CUser::UpdateBreakAwayDungeonClearCnt(CUser *this)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  uint uVar4;
  CStreamGuard local_14 [8];
  
  setBreakAwayDungeonClear(this,false);
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0x1c01);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0865234f to 086523db has its CatchHandler @ 086523de */
  CStreamGuard::operator<<(pCVar2,0x145);
  iVar3 = GetUID(this);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,iVar3);
  uVar4 = get_acc_id(this);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,uVar4);
  iVar3 = getBreakAwayDungeonClearCnt(this);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,iVar3);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```

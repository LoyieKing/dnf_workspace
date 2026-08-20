# SaveMileage

`_ZN5CUser11SaveMileageEv`

`CUser::SaveMileage()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086505f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086505f6  _ZN5CUser11SaveMileageEv
#           CUser::SaveMileage()
# range [0x086505f6, 0x08650721]
086505f6 +0x000:  push   %ebp
086505f7 +0x001:  mov    %esp,%ebp
086505f9 +0x003:  push   %esi
086505fa +0x004:  push   %ebx
086505fb +0x005:  sub    $0x20,%esp
086505fe +0x008:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08650603 +0x00d:  mov    %eax,(%esp)
08650606 +0x010:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0865060b +0x015:  cmp    $0x7,%eax
0865060e +0x018:  sete   %al
08650611 +0x01b:  test   %al,%al
08650613 +0x01d:  jne    0865071a <+0x124>
08650619 +0x023:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0865061e +0x028:  movl   $0x18e4,0x8(%esp)
08650626 +0x030:  movl   $"user.cpp",0x4(%esp)
0865062e +0x038:  mov    %eax,(%esp)
08650631 +0x03b:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08650636 +0x040:  movl   $0x1,0x8(%esp)
0865063e +0x048:  mov    %eax,0x4(%esp)
08650642 +0x04c:  lea    -0x14(%ebp),%eax
08650645 +0x04f:  mov    %eax,(%esp)
08650648 +0x052:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0865064d +0x057:  lea    -0x14(%ebp),%eax
08650650 +0x05a:  mov    %eax,(%esp)
08650653 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08650658 +0x062:  movl   $0x1fc,0x4(%esp)
08650660 +0x06a:  mov    %eax,(%esp)
08650663 +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08650668 +0x072:  mov    0x8(%ebp),%eax
0865066b +0x075:  mov    %eax,(%esp)
0865066e +0x078:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08650673 +0x07d:  mov    %eax,%ebx
08650675 +0x07f:  lea    -0x14(%ebp),%eax
08650678 +0x082:  mov    %eax,(%esp)
0865067b +0x085:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08650680 +0x08a:  mov    %ebx,0x4(%esp)
08650684 +0x08e:  mov    %eax,(%esp)
08650687 +0x091:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0865068c +0x096:  lea    -0x14(%ebp),%eax
0865068f +0x099:  mov    %eax,(%esp)
08650692 +0x09c:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08650697 +0x0a1:  mov    %eax,(%esp)
0865069a +0x0a4:  call   08699246 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x5a9b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x5a9b
0865069f +0x0a9:  mov    %eax,-0xc(%ebp)
086506a2 +0x0ac:  mov    0x8(%ebp),%eax
086506a5 +0x0af:  mov    %eax,(%esp)
086506a8 +0x0b2:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086506ad +0x0b7:  mov    -0xc(%ebp),%edx
086506b0 +0x0ba:  mov    %eax,(%edx)
086506b2 +0x0bc:  mov    0x8(%ebp),%eax
086506b5 +0x0bf:  mov    %eax,(%esp)
086506b8 +0x0c2:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086506bd +0x0c7:  mov    -0xc(%ebp),%edx
086506c0 +0x0ca:  mov    %eax,0x4(%edx)
086506c3 +0x0cd:  mov    0x8(%ebp),%eax
086506c6 +0x0d0:  mov    %eax,(%esp)
086506c9 +0x0d3:  call   08650a94 <_ZN5CUser10GetMileageEv>  ; CUser::GetMileage()
086506ce +0x0d8:  mov    -0xc(%ebp),%edx
086506d1 +0x0db:  mov    %eax,0x8(%edx)
086506d4 +0x0de:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
086506d9 +0x0e3:  lea    -0x14(%ebp),%edx
086506dc +0x0e6:  mov    %edx,0x8(%esp)
086506e0 +0x0ea:  movl   $0x2,0x4(%esp)
086506e8 +0x0f2:  mov    %eax,(%esp)
086506eb +0x0f5:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
086506f0 +0x0fa:  jmp    0865070d <+0x117>
086506f2 +0x0fc:  mov    %edx,%ebx
086506f4 +0x0fe:  mov    %eax,%esi
086506f6 +0x100:  lea    -0x14(%ebp),%eax
086506f9 +0x103:  mov    %eax,(%esp)
086506fc +0x106:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08650701 +0x10b:  mov    %esi,%eax
08650703 +0x10d:  mov    %ebx,%edx
08650705 +0x10f:  mov    %eax,(%esp)
08650708 +0x112:  call   08ae3750 <_Unwind_Resume>
0865070d +0x117:  lea    -0x14(%ebp),%eax
08650710 +0x11a:  mov    %eax,(%esp)
08650713 +0x11d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08650718 +0x122:  jmp    0865071b <+0x125>
0865071a +0x124:  nop
0865071b +0x125:  add    $0x20,%esp
0865071e +0x128:  pop    %ebx
0865071f +0x129:  pop    %esi
08650720 +0x12a:  pop    %ebp
08650721 +0x12b:  ret
```

## 反编译 C

```c
// CUser::SaveMileage @ 0x86505f6

/* CUser::SaveMileage() */

void __thiscall CUser::SaveMileage(CUser *this)

{
  GameWorld *this_00;
  int iVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  undefined4 uVar4;
  CStreamGuard local_18 [8];
  SIG_MILEAGE_STRUCT *local_10;
  
  this_00 = (GameWorld *)G_GameWorld();
  iVar1 = GameWorld::GetChannelType(this_00);
  if (iVar1 != 7) {
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0x18e4);
    CStreamGuard::CStreamGuard(local_18,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08650663 to 086506ef has its CatchHandler @ 086506f2 */
    CStreamGuard::operator<<(pCVar3,0x1fc);
    iVar1 = GetUID(this);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,iVar1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
    local_10 = CStreamGuard::GetInBuffer<SIG_MILEAGE_STRUCT>(pCVar3);
    uVar4 = get_acc_id(this);
    *(undefined4 *)local_10 = uVar4;
    uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
    *(undefined4 *)(local_10 + 4) = uVar4;
    uVar4 = GetMileage(this);
    *(undefined4 *)(local_10 + 8) = uVar4;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
    CStreamGuard::~CStreamGuard(local_18);
  }
  return;
}
```

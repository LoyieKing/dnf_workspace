# updateComboSkill

`_ZN5CUser16updateComboSkillEv`

`CUser::updateComboSkill()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08692396` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08692396  _ZN5CUser16updateComboSkillEv
#           CUser::updateComboSkill()
# range [0x08692396, 0x086924a9]
08692396 +0x000:  push   %ebp
08692397 +0x001:  mov    %esp,%ebp
08692399 +0x003:  push   %esi
0869239a +0x004:  push   %ebx
0869239b +0x005:  sub    $0x20,%esp
0869239e +0x008:  mov    0x8(%ebp),%eax
086923a1 +0x00b:  mov    %eax,(%esp)
086923a4 +0x00e:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
086923a9 +0x013:  cmp    $0x9,%eax
086923ac +0x016:  setne  %al
086923af +0x019:  test   %al,%al
086923b1 +0x01b:  jne    086924a2 <+0x10c>
086923b7 +0x021:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
086923bc +0x026:  movl   $0xb697,0x8(%esp)
086923c4 +0x02e:  movl   $"user.cpp",0x4(%esp)
086923cc +0x036:  mov    %eax,(%esp)
086923cf +0x039:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
086923d4 +0x03e:  movl   $0x1,0x8(%esp)
086923dc +0x046:  mov    %eax,0x4(%esp)
086923e0 +0x04a:  lea    -0x14(%ebp),%eax
086923e3 +0x04d:  mov    %eax,(%esp)
086923e6 +0x050:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
086923eb +0x055:  lea    -0x14(%ebp),%eax
086923ee +0x058:  mov    %eax,(%esp)
086923f1 +0x05b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086923f6 +0x060:  movl   $0x31d,0x4(%esp)
086923fe +0x068:  mov    %eax,(%esp)
08692401 +0x06b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08692406 +0x070:  lea    -0x14(%ebp),%eax
08692409 +0x073:  mov    %eax,(%esp)
0869240c +0x076:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08692411 +0x07b:  movl   $0xffffffff,0x4(%esp)
08692419 +0x083:  mov    %eax,(%esp)
0869241c +0x086:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08692421 +0x08b:  lea    -0x14(%ebp),%eax
08692424 +0x08e:  mov    %eax,(%esp)
08692427 +0x091:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0869242c +0x096:  mov    %eax,(%esp)
0869242f +0x099:  call   0869ccca <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x951f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x951f
08692434 +0x09e:  mov    %eax,-0xc(%ebp)
08692437 +0x0a1:  mov    -0xc(%ebp),%eax
0869243a +0x0a4:  mov    %eax,(%esp)
0869243d +0x0a7:  call   08694d04 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x1559>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x1559
08692442 +0x0ac:  mov    0x8(%ebp),%eax
08692445 +0x0af:  mov    %eax,(%esp)
08692448 +0x0b2:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0869244d +0x0b7:  mov    -0xc(%ebp),%edx
08692450 +0x0ba:  mov    %edx,0x4(%esp)
08692454 +0x0be:  mov    %eax,(%esp)
08692457 +0x0c1:  call   08608b78 <_ZNK9SkillSlot21getComboSkillSaveDataEP15SIG_COMBO_SKILL>  ; SkillSlot::getComboSkillSaveData(SIG_COMBO_SKILL*) const
0869245c +0x0c6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08692461 +0x0cb:  lea    -0x14(%ebp),%edx
08692464 +0x0ce:  mov    %edx,0x8(%esp)
08692468 +0x0d2:  movl   $0x2,0x4(%esp)
08692470 +0x0da:  mov    %eax,(%esp)
08692473 +0x0dd:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08692478 +0x0e2:  jmp    08692495 <+0xff>
0869247a +0x0e4:  mov    %edx,%ebx
0869247c +0x0e6:  mov    %eax,%esi
0869247e +0x0e8:  lea    -0x14(%ebp),%eax
08692481 +0x0eb:  mov    %eax,(%esp)
08692484 +0x0ee:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08692489 +0x0f3:  mov    %esi,%eax
0869248b +0x0f5:  mov    %ebx,%edx
0869248d +0x0f7:  mov    %eax,(%esp)
08692490 +0x0fa:  call   08ae3750 <_Unwind_Resume>
08692495 +0x0ff:  lea    -0x14(%ebp),%eax
08692498 +0x102:  mov    %eax,(%esp)
0869249b +0x105:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086924a0 +0x10a:  jmp    086924a3 <+0x10d>
086924a2 +0x10c:  nop
086924a3 +0x10d:  add    $0x20,%esp
086924a6 +0x110:  pop    %ebx
086924a7 +0x111:  pop    %esi
086924a8 +0x112:  pop    %ebp
086924a9 +0x113:  ret
```

## 反编译 C

```c
// CUser::updateComboSkill @ 0x8692396

/* CUser::updateComboSkill() */

void __thiscall CUser::updateComboSkill(CUser *this)

{
  int iVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  SkillSlot *this_00;
  CStreamGuard local_18 [8];
  SIG_COMBO_SKILL *local_10;
  
  iVar1 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
  if (iVar1 == 9) {
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0xb697);
    CStreamGuard::CStreamGuard(local_18,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08692401 to 08692477 has its CatchHandler @ 0869247a */
    CStreamGuard::operator<<(pCVar3,0x31d);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,-1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
    local_10 = CStreamGuard::GetInBuffer<SIG_COMBO_SKILL>(pCVar3);
    SIG_COMBO_SKILL::reset(local_10);
    this_00 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
    SkillSlot::getComboSkillSaveData(this_00,local_10);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
    CStreamGuard::~CStreamGuard(local_18);
  }
  return;
}
```

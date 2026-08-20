# _saveData

`_ZN13TOD_UserState9_saveDataEP5CUser`

`TOD_UserState::_saveData(CUser*)`

| 类 | 地址 |
|---|---|
| `TOD_UserState` | `0x08643642` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08643642  _ZN13TOD_UserState9_saveDataEP5CUser
#           TOD_UserState::_saveData(CUser*)
# range [0x08643642, 0x086437eb]
08643642 +0x000:  push   %ebp
08643643 +0x001:  mov    %esp,%ebp
08643645 +0x003:  push   %esi
08643646 +0x004:  push   %ebx
08643647 +0x005:  sub    $0x20,%esp
0864364a +0x008:  mov    &_ZN10GlobalData20s_pTowerOfDespairMgrE,%eax
0864364f +0x00d:  mov    %eax,-0x10(%ebp)
08643652 +0x010:  mov    0xc(%ebp),%eax
08643655 +0x013:  mov    %eax,(%esp)
08643658 +0x016:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0864365d +0x01b:  mov    %eax,%ebx
0864365f +0x01d:  mov    -0x10(%ebp),%eax
08643662 +0x020:  mov    %eax,(%esp)
08643665 +0x023:  call   08643a1e <_GLOBAL__I__ZN13TOD_UserStateC2Ev+0x72>  ; global constructors keyed to TOD_UserState::TOD_UserState()+0x72
0864366a +0x028:  movzwl %ax,%eax
0864366d +0x02b:  cmp    %eax,%ebx
0864366f +0x02d:  setl   %al
08643672 +0x030:  test   %al,%al
08643674 +0x032:  je     08643680 <+0x3e>
08643676 +0x034:  mov    $0x1,%ebx
0864367b +0x039:  jmp    086437e3 <+0x1a1>
08643680 +0x03e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08643685 +0x043:  movl   $0x58,0x8(%esp)
0864368d +0x04b:  movl   $"TOD_UserState.cpp",0x4(%esp)
08643695 +0x053:  mov    %eax,(%esp)
08643698 +0x056:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0864369d +0x05b:  movl   $0x1,0x8(%esp)
086436a5 +0x063:  mov    %eax,0x4(%esp)
086436a9 +0x067:  lea    -0x18(%ebp),%eax
086436ac +0x06a:  mov    %eax,(%esp)
086436af +0x06d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
086436b4 +0x072:  lea    -0x18(%ebp),%eax
086436b7 +0x075:  mov    %eax,(%esp)
086436ba +0x078:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086436bf +0x07d:  movl   $0x278,0x4(%esp)
086436c7 +0x085:  mov    %eax,(%esp)
086436ca +0x088:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086436cf +0x08d:  mov    0xc(%ebp),%eax
086436d2 +0x090:  mov    %eax,(%esp)
086436d5 +0x093:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
086436da +0x098:  mov    %eax,%ebx
086436dc +0x09a:  lea    -0x18(%ebp),%eax
086436df +0x09d:  mov    %eax,(%esp)
086436e2 +0x0a0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086436e7 +0x0a5:  mov    %ebx,0x4(%esp)
086436eb +0x0a9:  mov    %eax,(%esp)
086436ee +0x0ac:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086436f3 +0x0b1:  lea    -0x18(%ebp),%eax
086436f6 +0x0b4:  mov    %eax,(%esp)
086436f9 +0x0b7:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
086436fe +0x0bc:  mov    %eax,(%esp)
08643701 +0x0bf:  call   08643a2e <_GLOBAL__I__ZN13TOD_UserStateC2Ev+0x82>  ; global constructors keyed to TOD_UserState::TOD_UserState()+0x82
08643706 +0x0c4:  mov    %eax,-0xc(%ebp)
08643709 +0x0c7:  cmpl   $0x0,-0xc(%ebp)
0864370d +0x0cb:  jne    08643719 <+0xd7>
0864370f +0x0cd:  mov    $0x0,%ebx
08643714 +0x0d2:  jmp    086437d8 <+0x196>
08643719 +0x0d7:  movl   $0x18,0x8(%esp)
08643721 +0x0df:  movl   $0x0,0x4(%esp)
08643729 +0x0e7:  mov    -0xc(%ebp),%eax
0864372c +0x0ea:  mov    %eax,(%esp)
0864372f +0x0ed:  call   0807dcc0 <_init+0x5b8>
08643734 +0x0f2:  movl   $0xffffffff,0x4(%esp)
0864373c +0x0fa:  mov    0xc(%ebp),%eax
0864373f +0x0fd:  mov    %eax,(%esp)
08643742 +0x100:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08643747 +0x105:  mov    %eax,%edx
08643749 +0x107:  mov    -0xc(%ebp),%eax
0864374c +0x10a:  mov    %edx,(%eax)
0864374e +0x10c:  mov    0x8(%ebp),%eax
08643751 +0x10f:  movzwl 0x16(%eax),%edx
08643755 +0x113:  mov    -0xc(%ebp),%eax
08643758 +0x116:  mov    %dx,0xe(%eax)
0864375c +0x11a:  mov    -0xc(%ebp),%eax
0864375f +0x11d:  mov    0x8(%ebp),%edx
08643762 +0x120:  movzwl 0x14(%edx),%edx
08643766 +0x124:  mov    %dx,0xc(%eax)
0864376a +0x128:  mov    0x8(%ebp),%eax
0864376d +0x12b:  mov    0xc(%eax),%edx
08643770 +0x12e:  mov    -0xc(%ebp),%eax
08643773 +0x131:  mov    %edx,0x4(%eax)
08643776 +0x134:  mov    0x8(%ebp),%eax
08643779 +0x137:  mov    0x10(%eax),%edx
0864377c +0x13a:  mov    -0xc(%ebp),%eax
0864377f +0x13d:  mov    %edx,0x8(%eax)
08643782 +0x140:  mov    0x8(%ebp),%eax
08643785 +0x143:  mov    0x18(%eax),%edx
08643788 +0x146:  mov    -0xc(%ebp),%eax
0864378b +0x149:  mov    %edx,0x10(%eax)
0864378e +0x14c:  mov    0x8(%ebp),%eax
08643791 +0x14f:  mov    0x1c(%eax),%edx
08643794 +0x152:  mov    -0xc(%ebp),%eax
08643797 +0x155:  mov    %edx,0x14(%eax)
0864379a +0x158:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0864379f +0x15d:  lea    -0x18(%ebp),%edx
086437a2 +0x160:  mov    %edx,0x8(%esp)
086437a6 +0x164:  movl   $0x2,0x4(%esp)
086437ae +0x16c:  mov    %eax,(%esp)
086437b1 +0x16f:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
086437b6 +0x174:  mov    $0x1,%ebx
086437bb +0x179:  jmp    086437d8 <+0x196>
086437bd +0x17b:  mov    %edx,%ebx
086437bf +0x17d:  mov    %eax,%esi
086437c1 +0x17f:  lea    -0x18(%ebp),%eax
086437c4 +0x182:  mov    %eax,(%esp)
086437c7 +0x185:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086437cc +0x18a:  mov    %esi,%eax
086437ce +0x18c:  mov    %ebx,%edx
086437d0 +0x18e:  mov    %eax,(%esp)
086437d3 +0x191:  call   08ae3750 <_Unwind_Resume>
086437d8 +0x196:  lea    -0x18(%ebp),%eax
086437db +0x199:  mov    %eax,(%esp)
086437de +0x19c:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086437e3 +0x1a1:  mov    %ebx,%eax
086437e5 +0x1a3:  add    $0x20,%esp
086437e8 +0x1a6:  pop    %ebx
086437e9 +0x1a7:  pop    %esi
086437ea +0x1a8:  pop    %ebp
086437eb +0x1a9:  ret
```

## 反编译 C

```c
// TOD_UserState::_saveData @ 0x8643642

/* TOD_UserState::_saveData(CUser*) */

bool __thiscall TOD_UserState::_saveData(TOD_UserState *this,CUser *param_1)

{
  int iVar1;
  uint uVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  undefined4 uVar5;
  bool bVar6;
  CStreamGuard local_1c [8];
  TowerOfDespairMgr *local_14;
  SIG_REQUEST_TOD_USER_STATE *local_10;
  
  local_14 = GlobalData::s_pTowerOfDespairMgr;
  iVar1 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  uVar2 = TowerOfDespairMgr::GetMinLv(local_14);
  if (iVar1 < (int)(uVar2 & 0xffff)) {
    bVar6 = true;
  }
  else {
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"TOD_UserState.cpp",0x58);
    CStreamGuard::CStreamGuard(local_1c,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 086436ca to 086437b5 has its CatchHandler @ 086437bd */
    CStreamGuard::operator<<(pCVar4,0x278);
    iVar1 = CUser::GetUID(param_1);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar4,iVar1);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
    local_10 = CStreamGuard::GetInBuffer<SIG_REQUEST_TOD_USER_STATE>(pCVar4);
    bVar6 = local_10 != (SIG_REQUEST_TOD_USER_STATE *)0x0;
    if (bVar6) {
      memset(local_10,0,0x18);
      uVar5 = CUser::get_charac_no(param_1,-1);
      *(undefined4 *)local_10 = uVar5;
      *(undefined2 *)(local_10 + 0xe) = *(undefined2 *)(this + 0x16);
      *(undefined2 *)(local_10 + 0xc) = *(undefined2 *)(this + 0x14);
      *(undefined4 *)(local_10 + 4) = *(undefined4 *)(this + 0xc);
      *(undefined4 *)(local_10 + 8) = *(undefined4 *)(this + 0x10);
      *(undefined4 *)(local_10 + 0x10) = *(undefined4 *)(this + 0x18);
      *(undefined4 *)(local_10 + 0x14) = *(undefined4 *)(this + 0x1c);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
    }
    CStreamGuard::~CStreamGuard(local_1c);
  }
  return bVar6;
}
```

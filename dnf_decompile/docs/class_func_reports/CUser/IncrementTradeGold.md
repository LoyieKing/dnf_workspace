# IncrementTradeGold

`_ZN5CUser18IncrementTradeGoldEji`

`CUser::IncrementTradeGold(unsigned int, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864658a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864658a  _ZN5CUser18IncrementTradeGoldEji
#           CUser::IncrementTradeGold(unsigned int, int)
# range [0x0864658a, 0x08646709]
0864658a +0x000:  push   %ebp
0864658b +0x001:  mov    %esp,%ebp
0864658d +0x003:  push   %esi
0864658e +0x004:  push   %ebx
0864658f +0x005:  sub    $0x20,%esp
08646592 +0x008:  cmpl   $0x0,0x10(%ebp)
08646596 +0x00c:  je     086466da <+0x150>
0864659c +0x012:  movb   $0x0,-0x9(%ebp)
086465a0 +0x016:  mov    0x8(%ebp),%eax
086465a3 +0x019:  mov    %eax,(%esp)
086465a6 +0x01c:  call   08696656 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2eab>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2eab
086465ab +0x021:  cmp    $0x98967f,%eax
086465b0 +0x026:  setbe  %al
086465b3 +0x029:  test   %al,%al
086465b5 +0x02b:  je     086465bb <+0x31>
086465b7 +0x02d:  movb   $0x1,-0x9(%ebp)
086465bb +0x031:  mov    0x8(%ebp),%eax
086465be +0x034:  mov    %eax,(%esp)
086465c1 +0x037:  call   08696656 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2eab>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2eab
086465c6 +0x03c:  mov    %eax,%edx
086465c8 +0x03e:  add    0xc(%ebp),%edx
086465cb +0x041:  mov    0x8(%ebp),%eax
086465ce +0x044:  mov    %edx,0x4(%esp)
086465d2 +0x048:  mov    %eax,(%esp)
086465d5 +0x04b:  call   084ec04a <_GLOBAL__I__Z7getUserj+0x2ffc>  ; global constructors keyed to getUser(unsigned int)+0x2ffc
086465da +0x050:  cmpb   $0x0,-0x9(%ebp)
086465de +0x054:  je     086466da <+0x150>
086465e4 +0x05a:  mov    0x8(%ebp),%eax
086465e7 +0x05d:  mov    %eax,(%esp)
086465ea +0x060:  call   08696656 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2eab>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2eab
086465ef +0x065:  cmp    $0x98967f,%eax
086465f4 +0x06a:  seta   %al
086465f7 +0x06d:  test   %al,%al
086465f9 +0x06f:  je     086466da <+0x150>
086465ff +0x075:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08646604 +0x07a:  movl   $0x408,0x8(%esp)
0864660c +0x082:  movl   $"user.cpp",0x4(%esp)
08646614 +0x08a:  mov    %eax,(%esp)
08646617 +0x08d:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0864661c +0x092:  movl   $0x1,0x8(%esp)
08646624 +0x09a:  mov    %eax,0x4(%esp)
08646628 +0x09e:  lea    -0x14(%ebp),%eax
0864662b +0x0a1:  mov    %eax,(%esp)
0864662e +0x0a4:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08646633 +0x0a9:  lea    -0x14(%ebp),%eax
08646636 +0x0ac:  mov    %eax,(%esp)
08646639 +0x0af:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0864663e +0x0b4:  movl   $0xd0,0x4(%esp)
08646646 +0x0bc:  mov    %eax,(%esp)
08646649 +0x0bf:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0864664e +0x0c4:  mov    0x8(%ebp),%eax
08646651 +0x0c7:  mov    %eax,(%esp)
08646654 +0x0ca:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08646659 +0x0cf:  mov    %eax,%ebx
0864665b +0x0d1:  lea    -0x14(%ebp),%eax
0864665e +0x0d4:  mov    %eax,(%esp)
08646661 +0x0d7:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08646666 +0x0dc:  mov    %ebx,0x4(%esp)
0864666a +0x0e0:  mov    %eax,(%esp)
0864666d +0x0e3:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08646672 +0x0e8:  mov    0x8(%ebp),%eax
08646675 +0x0eb:  mov    %eax,(%esp)
08646678 +0x0ee:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0864667d +0x0f3:  mov    %eax,%ebx
0864667f +0x0f5:  lea    -0x14(%ebp),%eax
08646682 +0x0f8:  mov    %eax,(%esp)
08646685 +0x0fb:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0864668a +0x100:  mov    %ebx,0x4(%esp)
0864668e +0x104:  mov    %eax,(%esp)
08646691 +0x107:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08646696 +0x10c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0864669b +0x111:  lea    -0x14(%ebp),%edx
0864669e +0x114:  mov    %edx,0x8(%esp)
086466a2 +0x118:  movl   $0x2,0x4(%esp)
086466aa +0x120:  mov    %eax,(%esp)
086466ad +0x123:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
086466b2 +0x128:  jmp    086466cf <+0x145>
086466b4 +0x12a:  mov    %edx,%ebx
086466b6 +0x12c:  mov    %eax,%esi
086466b8 +0x12e:  lea    -0x14(%ebp),%eax
086466bb +0x131:  mov    %eax,(%esp)
086466be +0x134:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086466c3 +0x139:  mov    %esi,%eax
086466c5 +0x13b:  mov    %ebx,%edx
086466c7 +0x13d:  mov    %eax,(%esp)
086466ca +0x140:  call   08ae3750 <_Unwind_Resume>
086466cf +0x145:  lea    -0x14(%ebp),%eax
086466d2 +0x148:  mov    %eax,(%esp)
086466d5 +0x14b:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086466da +0x150:  mov    0x8(%ebp),%eax
086466dd +0x153:  mov    %eax,(%esp)
086466e0 +0x156:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
086466e5 +0x15b:  test   %eax,%eax
086466e7 +0x15d:  sete   %al
086466ea +0x160:  test   %al,%al
086466ec +0x162:  jne    08646702 <+0x178>
086466ee +0x164:  mov    0x8(%ebp),%eax
086466f1 +0x167:  mov    0xc(%ebp),%edx
086466f4 +0x16a:  mov    %edx,0x4(%esp)
086466f8 +0x16e:  mov    %eax,(%esp)
086466fb +0x171:  call   0869662a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2e7f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2e7f
08646700 +0x176:  jmp    08646703 <+0x179>
08646702 +0x178:  nop
08646703 +0x179:  add    $0x20,%esp
08646706 +0x17c:  pop    %ebx
08646707 +0x17d:  pop    %esi
08646708 +0x17e:  pop    %ebp
08646709 +0x17f:  ret
```

## 反编译 C

```c
// CUser::IncrementTradeGold @ 0x864658a

/* CUser::IncrementTradeGold(unsigned int, int) */

void __thiscall CUser::IncrementTradeGold(CUser *this,uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  CStreamGuard local_18 [11];
  char local_d;
  
  if (param_2 != 0) {
    local_d = '\0';
    uVar1 = CUserCharacInfo::GetOverTradeGoldCount((CUserCharacInfo *)this);
    if (uVar1 < 10000000) {
      local_d = '\x01';
    }
    iVar2 = CUserCharacInfo::GetOverTradeGoldCount((CUserCharacInfo *)this);
    CUserCharacInfo::SetOverTradeGoldCount((CUserCharacInfo *)this,iVar2 + param_1);
    if (local_d != '\0') {
      uVar1 = CUserCharacInfo::GetOverTradeGoldCount((CUserCharacInfo *)this);
      if (9999999 < uVar1) {
        pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0x408);
        CStreamGuard::CStreamGuard(local_18,pSVar3,true);
        pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08646649 to 086466b1 has its CatchHandler @ 086466b4 */
        CStreamGuard::operator<<(pCVar4,0xd0);
        iVar2 = GetUID(this);
        pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_18);
        CStreamGuard::operator<<(pCVar4,iVar2);
        uVar1 = get_acc_id(this);
        pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_18);
        CStreamGuard::operator<<(pCVar4,uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
        CStreamGuard::~CStreamGuard(local_18);
      }
    }
  }
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar2 != 0) {
    CUserCharacInfo::IncrementCurCharacTradeGoldDaily((CUserCharacInfo *)this,param_1);
  }
  return;
}
```

# requestCubePremiumInfoIfContracted

`_ZN5CUser34requestCubePremiumInfoIfContractedEv`

`CUser::requestCubePremiumInfoIfContracted()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086467ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086467ee  _ZN5CUser34requestCubePremiumInfoIfContractedEv
#           CUser::requestCubePremiumInfoIfContracted()
# range [0x086467ee, 0x08646911]
086467ee +0x000:  push   %ebp
086467ef +0x001:  mov    %esp,%ebp
086467f1 +0x003:  push   %esi
086467f2 +0x004:  push   %ebx
086467f3 +0x005:  sub    $0x20,%esp
086467f6 +0x008:  mov    0x8(%ebp),%eax
086467f9 +0x00b:  mov    %eax,(%esp)
086467fc +0x00e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08646801 +0x013:  test   %eax,%eax
08646803 +0x015:  sete   %al
08646806 +0x018:  test   %al,%al
08646808 +0x01a:  jne    0864690a <+0x11c>
0864680e +0x020:  movl   $0x5c,0x4(%esp)
08646816 +0x028:  mov    0x8(%ebp),%eax
08646819 +0x02b:  mov    %eax,(%esp)
0864681c +0x02e:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
08646821 +0x033:  test   %al,%al
08646823 +0x035:  je     0864690b <+0x11d>
08646829 +0x03b:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0864682e +0x040:  movl   $0x475,0x8(%esp)
08646836 +0x048:  movl   $"user.cpp",0x4(%esp)
0864683e +0x050:  mov    %eax,(%esp)
08646841 +0x053:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08646846 +0x058:  movl   $0x1,0x8(%esp)
0864684e +0x060:  mov    %eax,0x4(%esp)
08646852 +0x064:  lea    -0x14(%ebp),%eax
08646855 +0x067:  mov    %eax,(%esp)
08646858 +0x06a:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0864685d +0x06f:  lea    -0x14(%ebp),%eax
08646860 +0x072:  mov    %eax,(%esp)
08646863 +0x075:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08646868 +0x07a:  movl   $0x332,0x4(%esp)
08646870 +0x082:  mov    %eax,(%esp)
08646873 +0x085:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08646878 +0x08a:  mov    0x8(%ebp),%eax
0864687b +0x08d:  mov    %eax,(%esp)
0864687e +0x090:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08646883 +0x095:  mov    %eax,%ebx
08646885 +0x097:  lea    -0x14(%ebp),%eax
08646888 +0x09a:  mov    %eax,(%esp)
0864688b +0x09d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08646890 +0x0a2:  mov    %ebx,0x4(%esp)
08646894 +0x0a6:  mov    %eax,(%esp)
08646897 +0x0a9:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0864689c +0x0ae:  lea    -0x14(%ebp),%eax
0864689f +0x0b1:  mov    %eax,(%esp)
086468a2 +0x0b4:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
086468a7 +0x0b9:  mov    %eax,(%esp)
086468aa +0x0bc:  call   086985da <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x4e2f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x4e2f
086468af +0x0c1:  mov    %eax,-0xc(%ebp)
086468b2 +0x0c4:  mov    0x8(%ebp),%eax
086468b5 +0x0c7:  mov    %eax,(%esp)
086468b8 +0x0ca:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
086468bd +0x0cf:  mov    (%eax),%edx
086468bf +0x0d1:  mov    -0xc(%ebp),%eax
086468c2 +0x0d4:  mov    %edx,(%eax)
086468c4 +0x0d6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
086468c9 +0x0db:  lea    -0x14(%ebp),%edx
086468cc +0x0de:  mov    %edx,0x8(%esp)
086468d0 +0x0e2:  movl   $0x2,0x4(%esp)
086468d8 +0x0ea:  mov    %eax,(%esp)
086468db +0x0ed:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
086468e0 +0x0f2:  jmp    086468fd <+0x10f>
086468e2 +0x0f4:  mov    %edx,%ebx
086468e4 +0x0f6:  mov    %eax,%esi
086468e6 +0x0f8:  lea    -0x14(%ebp),%eax
086468e9 +0x0fb:  mov    %eax,(%esp)
086468ec +0x0fe:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086468f1 +0x103:  mov    %esi,%eax
086468f3 +0x105:  mov    %ebx,%edx
086468f5 +0x107:  mov    %eax,(%esp)
086468f8 +0x10a:  call   08ae3750 <_Unwind_Resume>
086468fd +0x10f:  lea    -0x14(%ebp),%eax
08646900 +0x112:  mov    %eax,(%esp)
08646903 +0x115:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08646908 +0x11a:  jmp    0864690b <+0x11d>
0864690a +0x11c:  nop
0864690b +0x11d:  add    $0x20,%esp
0864690e +0x120:  pop    %ebx
0864690f +0x121:  pop    %esi
08646910 +0x122:  pop    %ebp
08646911 +0x123:  ret
```

## 反编译 C

```c
// CUser::requestCubePremiumInfoIfContracted @ 0x86467ee

/* CUser::requestCubePremiumInfoIfContracted() */

void __thiscall CUser::requestCubePremiumInfoIfContracted(CUser *this)

{
  char cVar1;
  int iVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  undefined4 *puVar5;
  CStreamGuard local_18 [8];
  SIG_GET_PREMIUM_SELECTED_CUBE_INFO *local_10;
  
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar2 != 0) {
    cVar1 = isAffectedPremium(this,0x5c);
    if (cVar1 != '\0') {
      pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0x475);
      CStreamGuard::CStreamGuard(local_18,pSVar3,true);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08646873 to 086468df has its CatchHandler @ 086468e2 */
      CStreamGuard::operator<<(pCVar4,0x332);
      iVar2 = GetUID(this);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_18);
      CStreamGuard::operator<<(pCVar4,iVar2);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_18);
      local_10 = CStreamGuard::GetInBuffer<SIG_GET_PREMIUM_SELECTED_CUBE_INFO>(pCVar4);
      puVar5 = (undefined4 *)CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
      *(undefined4 *)local_10 = *puVar5;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
      CStreamGuard::~CStreamGuard(local_18);
    }
  }
  return;
}
```

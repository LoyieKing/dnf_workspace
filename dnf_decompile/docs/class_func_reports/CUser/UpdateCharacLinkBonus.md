# UpdateCharacLinkBonus

`_ZN5CUser21UpdateCharacLinkBonusEjjj28ENUM_CHARAC_LINK_BONUS_STATE`

`CUser::UpdateCharacLinkBonus(unsigned int, unsigned int, unsigned int, ENUM_CHARAC_LINK_BONUS_STATE)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865240c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865240c  _ZN5CUser21UpdateCharacLinkBonusEjjj28ENUM_CHARAC_LINK_BONUS_STATE
#           CUser::UpdateCharacLinkBonus(unsigned int, unsigned int, unsigned int, ENUM_CHARAC_LINK_BONUS_STATE)
# range [0x0865240c, 0x0865255f]
0865240c +0x000:  push   %ebp
0865240d +0x001:  mov    %esp,%ebp
0865240f +0x003:  push   %esi
08652410 +0x004:  push   %ebx
08652411 +0x005:  sub    $0x20,%esp
08652414 +0x008:  mov    0x18(%ebp),%eax
08652417 +0x00b:  mov    %eax,-0xc(%ebp)
0865241a +0x00e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0865241f +0x013:  movl   $0x1c11,0x8(%esp)
08652427 +0x01b:  movl   $"user.cpp",0x4(%esp)
0865242f +0x023:  mov    %eax,(%esp)
08652432 +0x026:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08652437 +0x02b:  movl   $0x1,0x8(%esp)
0865243f +0x033:  mov    %eax,0x4(%esp)
08652443 +0x037:  lea    -0x14(%ebp),%eax
08652446 +0x03a:  mov    %eax,(%esp)
08652449 +0x03d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0865244e +0x042:  lea    -0x14(%ebp),%eax
08652451 +0x045:  mov    %eax,(%esp)
08652454 +0x048:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08652459 +0x04d:  movl   $0x14c,0x4(%esp)
08652461 +0x055:  mov    %eax,(%esp)
08652464 +0x058:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08652469 +0x05d:  mov    0x8(%ebp),%eax
0865246c +0x060:  mov    %eax,(%esp)
0865246f +0x063:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08652474 +0x068:  mov    %eax,%ebx
08652476 +0x06a:  lea    -0x14(%ebp),%eax
08652479 +0x06d:  mov    %eax,(%esp)
0865247c +0x070:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08652481 +0x075:  mov    %ebx,0x4(%esp)
08652485 +0x079:  mov    %eax,(%esp)
08652488 +0x07c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0865248d +0x081:  lea    -0x14(%ebp),%eax
08652490 +0x084:  mov    %eax,(%esp)
08652493 +0x087:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08652498 +0x08c:  mov    0x14(%ebp),%edx
0865249b +0x08f:  mov    %edx,0x4(%esp)
0865249f +0x093:  mov    %eax,(%esp)
086524a2 +0x096:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
086524a7 +0x09b:  lea    -0x14(%ebp),%eax
086524aa +0x09e:  mov    %eax,(%esp)
086524ad +0x0a1:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086524b2 +0x0a6:  mov    0xc(%ebp),%edx
086524b5 +0x0a9:  mov    %edx,0x4(%esp)
086524b9 +0x0ad:  mov    %eax,(%esp)
086524bc +0x0b0:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
086524c1 +0x0b5:  lea    -0x14(%ebp),%eax
086524c4 +0x0b8:  mov    %eax,(%esp)
086524c7 +0x0bb:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086524cc +0x0c0:  mov    0x10(%ebp),%edx
086524cf +0x0c3:  mov    %edx,0x4(%esp)
086524d3 +0x0c7:  mov    %eax,(%esp)
086524d6 +0x0ca:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
086524db +0x0cf:  lea    -0x14(%ebp),%eax
086524de +0x0d2:  mov    %eax,(%esp)
086524e1 +0x0d5:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086524e6 +0x0da:  mov    -0xc(%ebp),%edx
086524e9 +0x0dd:  mov    %edx,0x4(%esp)
086524ed +0x0e1:  mov    %eax,(%esp)
086524f0 +0x0e4:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
086524f5 +0x0e9:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
086524fa +0x0ee:  lea    -0x14(%ebp),%edx
086524fd +0x0f1:  mov    %edx,0x8(%esp)
08652501 +0x0f5:  movl   $0x2,0x4(%esp)
08652509 +0x0fd:  mov    %eax,(%esp)
0865250c +0x100:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08652511 +0x105:  mov    0x8(%ebp),%eax
08652514 +0x108:  movl   $0x0,0x4(%esp)
0865251c +0x110:  mov    %eax,(%esp)
0865251f +0x113:  call   08696b90 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x33e5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x33e5
08652524 +0x118:  mov    0x8(%ebp),%eax
08652527 +0x11b:  movl   $0x0,0x4(%esp)
0865252f +0x123:  mov    %eax,(%esp)
08652532 +0x126:  call   08696bd0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3425>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3425
08652537 +0x12b:  lea    -0x14(%ebp),%eax
0865253a +0x12e:  mov    %eax,(%esp)
0865253d +0x131:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08652542 +0x136:  add    $0x20,%esp
08652545 +0x139:  pop    %ebx
08652546 +0x13a:  pop    %esi
08652547 +0x13b:  pop    %ebp
08652548 +0x13c:  ret
08652549 +0x13d:  mov    %edx,%ebx
0865254b +0x13f:  mov    %eax,%esi
0865254d +0x141:  lea    -0x14(%ebp),%eax
08652550 +0x144:  mov    %eax,(%esp)
08652553 +0x147:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08652558 +0x14c:  mov    %esi,%eax
0865255a +0x14e:  mov    %ebx,%edx
0865255c +0x150:  mov    %eax,(%esp)
0865255f +0x153:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CUser::UpdateCharacLinkBonus @ 0x865240c

/* CUser::UpdateCharacLinkBonus(unsigned int, unsigned int, unsigned int,
   ENUM_CHARAC_LINK_BONUS_STATE) */

void __thiscall
CUser::UpdateCharacLinkBonus(CUser *this,uint param_1,uint param_2,uint param_3,uint param_5)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  CStreamGuard local_18 [8];
  uint local_10;
  
  local_10 = param_5;
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0x1c11);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08652464 to 08652510 has its CatchHandler @ 08652549 */
  CStreamGuard::operator<<(pCVar2,0x14c);
  iVar3 = GetUID(this);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,local_10);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CUserCharacInfo::setCharacLinkBonusExp((CUserCharacInfo *)this,0);
  CUserCharacInfo::setCharacLinkBonusGold((CUserCharacInfo *)this,0);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```

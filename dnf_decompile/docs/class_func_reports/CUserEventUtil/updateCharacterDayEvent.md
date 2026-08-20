# updateCharacterDayEvent

`_ZN14CUserEventUtil23updateCharacterDayEventEP5CUseri`

`CUserEventUtil::updateCharacterDayEvent(CUser*, int)`

| 类 | 地址 |
|---|---|
| `CUserEventUtil` | `0x08688230` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08688230  _ZN14CUserEventUtil23updateCharacterDayEventEP5CUseri
#           CUserEventUtil::updateCharacterDayEvent(CUser*, int)
# range [0x08688230, 0x08688327]
08688230 +0x00:  push   %ebp
08688231 +0x01:  mov    %esp,%ebp
08688233 +0x03:  push   %esi
08688234 +0x04:  push   %ebx
08688235 +0x05:  sub    $0x20,%esp
08688238 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0868823d +0x0d:  movl   $0x9af5,0x8(%esp)
08688245 +0x15:  movl   $"user.cpp",0x4(%esp)
0868824d +0x1d:  mov    %eax,(%esp)
08688250 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08688255 +0x25:  movl   $0x1,0x8(%esp)
0868825d +0x2d:  mov    %eax,0x4(%esp)
08688261 +0x31:  lea    -0x14(%ebp),%eax
08688264 +0x34:  mov    %eax,(%esp)
08688267 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0868826c +0x3c:  lea    -0x14(%ebp),%eax
0868826f +0x3f:  mov    %eax,(%esp)
08688272 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08688277 +0x47:  movl   $0x16e,0x4(%esp)
0868827f +0x4f:  mov    %eax,(%esp)
08688282 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08688287 +0x57:  mov    0x8(%ebp),%eax
0868828a +0x5a:  mov    %eax,(%esp)
0868828d +0x5d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08688292 +0x62:  mov    %eax,%ebx
08688294 +0x64:  lea    -0x14(%ebp),%eax
08688297 +0x67:  mov    %eax,(%esp)
0868829a +0x6a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0868829f +0x6f:  mov    %ebx,0x4(%esp)
086882a3 +0x73:  mov    %eax,(%esp)
086882a6 +0x76:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086882ab +0x7b:  lea    -0x14(%ebp),%eax
086882ae +0x7e:  mov    %eax,(%esp)
086882b1 +0x81:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
086882b6 +0x86:  mov    %eax,(%esp)
086882b9 +0x89:  call   0869c49c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8cf1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8cf1
086882be +0x8e:  mov    %eax,-0xc(%ebp)
086882c1 +0x91:  mov    0x8(%ebp),%eax
086882c4 +0x94:  mov    %eax,(%esp)
086882c7 +0x97:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086882cc +0x9c:  mov    -0xc(%ebp),%edx
086882cf +0x9f:  mov    %eax,(%edx)
086882d1 +0xa1:  mov    0xc(%ebp),%eax
086882d4 +0xa4:  mov    %eax,%edx
086882d6 +0xa6:  mov    -0xc(%ebp),%eax
086882d9 +0xa9:  mov    %dx,0x4(%eax)
086882dd +0xad:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
086882e2 +0xb2:  lea    -0x14(%ebp),%edx
086882e5 +0xb5:  mov    %edx,0x8(%esp)
086882e9 +0xb9:  movl   $0x2,0x4(%esp)
086882f1 +0xc1:  mov    %eax,(%esp)
086882f4 +0xc4:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
086882f9 +0xc9:  jmp    08688316 <+0xe6>
086882fb +0xcb:  mov    %edx,%ebx
086882fd +0xcd:  mov    %eax,%esi
086882ff +0xcf:  lea    -0x14(%ebp),%eax
08688302 +0xd2:  mov    %eax,(%esp)
08688305 +0xd5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0868830a +0xda:  mov    %esi,%eax
0868830c +0xdc:  mov    %ebx,%edx
0868830e +0xde:  mov    %eax,(%esp)
08688311 +0xe1:  call   08ae3750 <_Unwind_Resume>
08688316 +0xe6:  lea    -0x14(%ebp),%eax
08688319 +0xe9:  mov    %eax,(%esp)
0868831c +0xec:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08688321 +0xf1:  add    $0x20,%esp
08688324 +0xf4:  pop    %ebx
08688325 +0xf5:  pop    %esi
08688326 +0xf6:  pop    %ebp
08688327 +0xf7:  ret
```

## 反编译 C

```c
// CUserEventUtil::updateCharacterDayEvent @ 0x8688230

/* CUserEventUtil::updateCharacterDayEvent(CUser*, int) */

void CUserEventUtil::updateCharacterDayEvent(CUser *param_1,int param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  CStreamGuard local_18 [8];
  SIG_UPDATE_CHARACTER_DAY_EVENT *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0x9af5);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08688282 to 086882f8 has its CatchHandler @ 086882fb */
  CStreamGuard::operator<<(pCVar2,0x16e);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_UPDATE_CHARACTER_DAY_EVENT>(pCVar2);
  uVar4 = CUser::get_acc_id(param_1);
  *(undefined4 *)local_10 = uVar4;
  *(short *)(local_10 + 4) = (short)param_2;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```

# saveCharacLinkMessageFlag

`_ZN5CUser25saveCharacLinkMessageFlagEb`

`CUser::saveCharacLinkMessageFlag(bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086528b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086528b4  _ZN5CUser25saveCharacLinkMessageFlagEb
#           CUser::saveCharacLinkMessageFlag(bool)
# range [0x086528b4, 0x086529c9]
086528b4 +0x000:  push   %ebp
086528b5 +0x001:  mov    %esp,%ebp
086528b7 +0x003:  push   %esi
086528b8 +0x004:  push   %ebx
086528b9 +0x005:  sub    $0x30,%esp
086528bc +0x008:  mov    0xc(%ebp),%eax
086528bf +0x00b:  mov    %al,-0x1c(%ebp)
086528c2 +0x00e:  movzbl -0x1c(%ebp),%eax
086528c6 +0x012:  mov    %eax,0x4(%esp)
086528ca +0x016:  mov    0x8(%ebp),%eax
086528cd +0x019:  mov    %eax,(%esp)
086528d0 +0x01c:  call   084ece20 <_GLOBAL__I__Z7getUserj+0x3dd2>  ; global constructors keyed to getUser(unsigned int)+0x3dd2
086528d5 +0x021:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
086528da +0x026:  movl   $0x1c66,0x8(%esp)
086528e2 +0x02e:  movl   $"user.cpp",0x4(%esp)
086528ea +0x036:  mov    %eax,(%esp)
086528ed +0x039:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
086528f2 +0x03e:  movl   $0x1,0x8(%esp)
086528fa +0x046:  mov    %eax,0x4(%esp)
086528fe +0x04a:  lea    -0x10(%ebp),%eax
08652901 +0x04d:  mov    %eax,(%esp)
08652904 +0x050:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08652909 +0x055:  lea    -0x10(%ebp),%eax
0865290c +0x058:  mov    %eax,(%esp)
0865290f +0x05b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08652914 +0x060:  movl   $0x1e4,0x4(%esp)
0865291c +0x068:  mov    %eax,(%esp)
0865291f +0x06b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08652924 +0x070:  lea    -0x10(%ebp),%eax
08652927 +0x073:  mov    %eax,(%esp)
0865292a +0x076:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0865292f +0x07b:  movl   $0xffffffff,0x4(%esp)
08652937 +0x083:  mov    %eax,(%esp)
0865293a +0x086:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0865293f +0x08b:  mov    0x8(%ebp),%eax
08652942 +0x08e:  mov    %eax,(%esp)
08652945 +0x091:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0865294a +0x096:  mov    %eax,%ebx
0865294c +0x098:  lea    -0x10(%ebp),%eax
0865294f +0x09b:  mov    %eax,(%esp)
08652952 +0x09e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08652957 +0x0a3:  mov    %ebx,0x4(%esp)
0865295b +0x0a7:  mov    %eax,(%esp)
0865295e +0x0aa:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08652963 +0x0af:  movzbl -0x1c(%ebp),%ebx
08652967 +0x0b3:  lea    -0x10(%ebp),%eax
0865296a +0x0b6:  mov    %eax,(%esp)
0865296d +0x0b9:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08652972 +0x0be:  mov    %ebx,0x4(%esp)
08652976 +0x0c2:  mov    %eax,(%esp)
08652979 +0x0c5:  call   0844d430 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x46>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x46
0865297e +0x0ca:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08652983 +0x0cf:  lea    -0x10(%ebp),%edx
08652986 +0x0d2:  mov    %edx,0x8(%esp)
0865298a +0x0d6:  movl   $0x2,0x4(%esp)
08652992 +0x0de:  mov    %eax,(%esp)
08652995 +0x0e1:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0865299a +0x0e6:  jmp    086529b7 <+0x103>
0865299c +0x0e8:  mov    %edx,%ebx
0865299e +0x0ea:  mov    %eax,%esi
086529a0 +0x0ec:  lea    -0x10(%ebp),%eax
086529a3 +0x0ef:  mov    %eax,(%esp)
086529a6 +0x0f2:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086529ab +0x0f7:  mov    %esi,%eax
086529ad +0x0f9:  mov    %ebx,%edx
086529af +0x0fb:  mov    %eax,(%esp)
086529b2 +0x0fe:  call   08ae3750 <_Unwind_Resume>
086529b7 +0x103:  lea    -0x10(%ebp),%eax
086529ba +0x106:  mov    %eax,(%esp)
086529bd +0x109:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086529c2 +0x10e:  add    $0x30,%esp
086529c5 +0x111:  pop    %ebx
086529c6 +0x112:  pop    %esi
086529c7 +0x113:  pop    %ebp
086529c8 +0x114:  ret
086529c9 +0x115:  nop
```

## 反编译 C

```c
// CUser::saveCharacLinkMessageFlag @ 0x86528b4

/* CUser::saveCharacLinkMessageFlag(bool) */

void __thiscall CUser::saveCharacLinkMessageFlag(CUser *this,bool param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  uint uVar3;
  CStreamGuard local_14 [8];
  
  setCharacLinkMessageFlag(this,param_1);
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0x1c66);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0865291f to 08652999 has its CatchHandler @ 0865299c */
  CStreamGuard::operator<<(pCVar2,0x1e4);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  uVar3 = get_acc_id(this);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,uVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```

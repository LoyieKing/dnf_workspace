# makeRequest

`_ZN30DB_LoadCerashopAddRestrictType11makeRequestEP5CUser`

`DB_LoadCerashopAddRestrictType::makeRequest(CUser*)`

| 类 | 地址 |
|---|---|
| `DB_LoadCerashopAddRestrictType` | `0x080e1ff6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e1ff6  _ZN30DB_LoadCerashopAddRestrictType11makeRequestEP5CUser
#           DB_LoadCerashopAddRestrictType::makeRequest(CUser*)
# range [0x080e1ff6, 0x080e2103]
080e1ff6 +0x000:  push   %ebp
080e1ff7 +0x001:  mov    %esp,%ebp
080e1ff9 +0x003:  push   %esi
080e1ffa +0x004:  push   %ebx
080e1ffb +0x005:  sub    $0x20,%esp
080e1ffe +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
080e2003 +0x00d:  movl   $0x1f4,0x8(%esp)
080e200b +0x015:  movl   $"CerashopAddRestrictType.cpp",0x4(%esp)
080e2013 +0x01d:  mov    %eax,(%esp)
080e2016 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
080e201b +0x025:  movl   $0x1,0x8(%esp)
080e2023 +0x02d:  mov    %eax,0x4(%esp)
080e2027 +0x031:  lea    -0x10(%ebp),%eax
080e202a +0x034:  mov    %eax,(%esp)
080e202d +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
080e2032 +0x03c:  lea    -0x10(%ebp),%eax
080e2035 +0x03f:  mov    %eax,(%esp)
080e2038 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080e203d +0x047:  movl   $0x341,0x4(%esp)
080e2045 +0x04f:  mov    %eax,(%esp)
080e2048 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
080e204d +0x057:  mov    0x8(%ebp),%eax
080e2050 +0x05a:  mov    %eax,(%esp)
080e2053 +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
080e2058 +0x062:  mov    %eax,%ebx
080e205a +0x064:  lea    -0x10(%ebp),%eax
080e205d +0x067:  mov    %eax,(%esp)
080e2060 +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080e2065 +0x06f:  mov    %ebx,0x4(%esp)
080e2069 +0x073:  mov    %eax,(%esp)
080e206c +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
080e2071 +0x07b:  mov    0x8(%ebp),%eax
080e2074 +0x07e:  mov    %eax,(%esp)
080e2077 +0x081:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
080e207c +0x086:  mov    %eax,%ebx
080e207e +0x088:  lea    -0x10(%ebp),%eax
080e2081 +0x08b:  mov    %eax,(%esp)
080e2084 +0x08e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080e2089 +0x093:  mov    %ebx,0x4(%esp)
080e208d +0x097:  mov    %eax,(%esp)
080e2090 +0x09a:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
080e2095 +0x09f:  mov    0x8(%ebp),%eax
080e2098 +0x0a2:  mov    %eax,(%esp)
080e209b +0x0a5:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
080e20a0 +0x0aa:  mov    %eax,%ebx
080e20a2 +0x0ac:  lea    -0x10(%ebp),%eax
080e20a5 +0x0af:  mov    %eax,(%esp)
080e20a8 +0x0b2:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080e20ad +0x0b7:  mov    %ebx,0x4(%esp)
080e20b1 +0x0bb:  mov    %eax,(%esp)
080e20b4 +0x0be:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
080e20b9 +0x0c3:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
080e20be +0x0c8:  lea    -0x10(%ebp),%edx
080e20c1 +0x0cb:  mov    %edx,0x8(%esp)
080e20c5 +0x0cf:  movl   $0x2,0x4(%esp)
080e20cd +0x0d7:  mov    %eax,(%esp)
080e20d0 +0x0da:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
080e20d5 +0x0df:  jmp    080e20f2 <+0xfc>
080e20d7 +0x0e1:  mov    %edx,%ebx
080e20d9 +0x0e3:  mov    %eax,%esi
080e20db +0x0e5:  lea    -0x10(%ebp),%eax
080e20de +0x0e8:  mov    %eax,(%esp)
080e20e1 +0x0eb:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
080e20e6 +0x0f0:  mov    %esi,%eax
080e20e8 +0x0f2:  mov    %ebx,%edx
080e20ea +0x0f4:  mov    %eax,(%esp)
080e20ed +0x0f7:  call   08ae3750 <_Unwind_Resume>
080e20f2 +0x0fc:  lea    -0x10(%ebp),%eax
080e20f5 +0x0ff:  mov    %eax,(%esp)
080e20f8 +0x102:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
080e20fd +0x107:  add    $0x20,%esp
080e2100 +0x10a:  pop    %ebx
080e2101 +0x10b:  pop    %esi
080e2102 +0x10c:  pop    %ebp
080e2103 +0x10d:  ret
```

## 反编译 C

```c
// DB_LoadCerashopAddRestrictType::makeRequest @ 0x80e1ff6

/* DB_LoadCerashopAddRestrictType::makeRequest(CUser*) */

void DB_LoadCerashopAddRestrictType::makeRequest(CUser *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  uint uVar4;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"CerashopAddRestrictType.cpp",500);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 080e2048 to 080e20d4 has its CatchHandler @ 080e20d7 */
  CStreamGuard::operator<<(pCVar2,0x341);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,iVar3);
  uVar4 = CUser::get_acc_id(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,uVar4);
  uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,uVar4);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```

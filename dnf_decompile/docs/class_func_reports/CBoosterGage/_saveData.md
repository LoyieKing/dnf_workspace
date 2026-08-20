# _saveData

`_ZN12CBoosterGage9_saveDataEP5CUser`

`CBoosterGage::_saveData(CUser*)`

| 类 | 地址 |
|---|---|
| `CBoosterGage` | `0x080dd340` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080dd340  _ZN12CBoosterGage9_saveDataEP5CUser
#           CBoosterGage::_saveData(CUser*)
# range [0x080dd340, 0x080dd467]
080dd340 +0x000:  push   %ebp
080dd341 +0x001:  mov    %esp,%ebp
080dd343 +0x003:  push   %esi
080dd344 +0x004:  push   %ebx
080dd345 +0x005:  sub    $0x20,%esp
080dd348 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
080dd34d +0x00d:  movl   $0x193,0x8(%esp)
080dd355 +0x015:  movl   $"BoosterGage.cpp",0x4(%esp)
080dd35d +0x01d:  mov    %eax,(%esp)
080dd360 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
080dd365 +0x025:  movl   $0x1,0x8(%esp)
080dd36d +0x02d:  mov    %eax,0x4(%esp)
080dd371 +0x031:  lea    -0x14(%ebp),%eax
080dd374 +0x034:  mov    %eax,(%esp)
080dd377 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
080dd37c +0x03c:  lea    -0x14(%ebp),%eax
080dd37f +0x03f:  mov    %eax,(%esp)
080dd382 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080dd387 +0x047:  movl   $0x2d8,0x4(%esp)
080dd38f +0x04f:  mov    %eax,(%esp)
080dd392 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
080dd397 +0x057:  mov    0xc(%ebp),%eax
080dd39a +0x05a:  mov    %eax,(%esp)
080dd39d +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
080dd3a2 +0x062:  mov    %eax,%ebx
080dd3a4 +0x064:  lea    -0x14(%ebp),%eax
080dd3a7 +0x067:  mov    %eax,(%esp)
080dd3aa +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080dd3af +0x06f:  mov    %ebx,0x4(%esp)
080dd3b3 +0x073:  mov    %eax,(%esp)
080dd3b6 +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
080dd3bb +0x07b:  lea    -0x14(%ebp),%eax
080dd3be +0x07e:  mov    %eax,(%esp)
080dd3c1 +0x081:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
080dd3c6 +0x086:  mov    %eax,(%esp)
080dd3c9 +0x089:  call   080dd7dc <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x325>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x325
080dd3ce +0x08e:  mov    %eax,-0xc(%ebp)
080dd3d1 +0x091:  cmpl   $0x0,-0xc(%ebp)
080dd3d5 +0x095:  jne    080dd3de <+0x9e>
080dd3d7 +0x097:  mov    $0x0,%ebx
080dd3dc +0x09c:  jmp    080dd453 <+0x113>
080dd3de +0x09e:  movl   $0x8,0x8(%esp)
080dd3e6 +0x0a6:  movl   $0x0,0x4(%esp)
080dd3ee +0x0ae:  mov    -0xc(%ebp),%eax
080dd3f1 +0x0b1:  mov    %eax,(%esp)
080dd3f4 +0x0b4:  call   0807dcc0 <_init+0x5b8>
080dd3f9 +0x0b9:  mov    0xc(%ebp),%eax
080dd3fc +0x0bc:  mov    %eax,(%esp)
080dd3ff +0x0bf:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
080dd404 +0x0c4:  mov    -0xc(%ebp),%edx
080dd407 +0x0c7:  mov    %eax,(%edx)
080dd409 +0x0c9:  mov    0x8(%ebp),%eax
080dd40c +0x0cc:  mov    0x8(%eax),%edx
080dd40f +0x0cf:  mov    -0xc(%ebp),%eax
080dd412 +0x0d2:  mov    %edx,0x4(%eax)
080dd415 +0x0d5:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
080dd41a +0x0da:  lea    -0x14(%ebp),%edx
080dd41d +0x0dd:  mov    %edx,0x8(%esp)
080dd421 +0x0e1:  movl   $0x2,0x4(%esp)
080dd429 +0x0e9:  mov    %eax,(%esp)
080dd42c +0x0ec:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
080dd431 +0x0f1:  mov    $0x1,%ebx
080dd436 +0x0f6:  jmp    080dd453 <+0x113>
080dd438 +0x0f8:  mov    %edx,%ebx
080dd43a +0x0fa:  mov    %eax,%esi
080dd43c +0x0fc:  lea    -0x14(%ebp),%eax
080dd43f +0x0ff:  mov    %eax,(%esp)
080dd442 +0x102:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
080dd447 +0x107:  mov    %esi,%eax
080dd449 +0x109:  mov    %ebx,%edx
080dd44b +0x10b:  mov    %eax,(%esp)
080dd44e +0x10e:  call   08ae3750 <_Unwind_Resume>
080dd453 +0x113:  lea    -0x14(%ebp),%eax
080dd456 +0x116:  mov    %eax,(%esp)
080dd459 +0x119:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
080dd45e +0x11e:  mov    %ebx,%eax
080dd460 +0x120:  add    $0x20,%esp
080dd463 +0x123:  pop    %ebx
080dd464 +0x124:  pop    %esi
080dd465 +0x125:  pop    %ebp
080dd466 +0x126:  ret
080dd467 +0x127:  nop
```

## 反编译 C

```c
// CBoosterGage::_saveData @ 0x80dd340

/* CBoosterGage::_saveData(CUser*) */

bool __thiscall CBoosterGage::_saveData(CBoosterGage *this,CUser *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  CStreamGuard local_18 [8];
  SIG_BOOSTER_GAGE_DATA *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"BoosterGage.cpp",0x193);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 080dd392 to 080dd430 has its CatchHandler @ 080dd438 */
  CStreamGuard::operator<<(pCVar2,0x2d8);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_BOOSTER_GAGE_DATA>(pCVar2);
  bVar5 = local_10 != (SIG_BOOSTER_GAGE_DATA *)0x0;
  if (bVar5) {
    memset(local_10,0,8);
    uVar4 = CUser::get_acc_id(param_1);
    *(undefined4 *)local_10 = uVar4;
    *(undefined4 *)(local_10 + 4) = *(undefined4 *)(this + 8);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return bVar5;
}
```

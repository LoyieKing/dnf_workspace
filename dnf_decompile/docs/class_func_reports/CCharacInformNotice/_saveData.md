# _saveData

`_ZN19CCharacInformNotice9_saveDataEP5CUser`

`CCharacInformNotice::_saveData(CUser*)`

| 类 | 地址 |
|---|---|
| `CCharacInformNotice` | `0x080e4b52` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e4b52  _ZN19CCharacInformNotice9_saveDataEP5CUser
#           CCharacInformNotice::_saveData(CUser*)
# range [0x080e4b52, 0x080e4c99]
080e4b52 +0x000:  push   %ebp
080e4b53 +0x001:  mov    %esp,%ebp
080e4b55 +0x003:  push   %esi
080e4b56 +0x004:  push   %ebx
080e4b57 +0x005:  sub    $0x20,%esp
080e4b5a +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
080e4b5f +0x00d:  movl   $0x77,0x8(%esp)
080e4b67 +0x015:  movl   $"CharacInformNotice.cpp",0x4(%esp)
080e4b6f +0x01d:  mov    %eax,(%esp)
080e4b72 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
080e4b77 +0x025:  movl   $0x1,0x8(%esp)
080e4b7f +0x02d:  mov    %eax,0x4(%esp)
080e4b83 +0x031:  lea    -0x14(%ebp),%eax
080e4b86 +0x034:  mov    %eax,(%esp)
080e4b89 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
080e4b8e +0x03c:  lea    -0x14(%ebp),%eax
080e4b91 +0x03f:  mov    %eax,(%esp)
080e4b94 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080e4b99 +0x047:  movl   $0x311,0x4(%esp)
080e4ba1 +0x04f:  mov    %eax,(%esp)
080e4ba4 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
080e4ba9 +0x057:  mov    0xc(%ebp),%eax
080e4bac +0x05a:  mov    %eax,(%esp)
080e4baf +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
080e4bb4 +0x062:  mov    %eax,%ebx
080e4bb6 +0x064:  lea    -0x14(%ebp),%eax
080e4bb9 +0x067:  mov    %eax,(%esp)
080e4bbc +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080e4bc1 +0x06f:  mov    %ebx,0x4(%esp)
080e4bc5 +0x073:  mov    %eax,(%esp)
080e4bc8 +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
080e4bcd +0x07b:  lea    -0x14(%ebp),%eax
080e4bd0 +0x07e:  mov    %eax,(%esp)
080e4bd3 +0x081:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
080e4bd8 +0x086:  mov    %eax,(%esp)
080e4bdb +0x089:  call   080e4dbe <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0xe4>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0xe4
080e4be0 +0x08e:  mov    %eax,-0xc(%ebp)
080e4be3 +0x091:  cmpl   $0x0,-0xc(%ebp)
080e4be7 +0x095:  jne    080e4bf3 <+0xa1>
080e4be9 +0x097:  mov    $0x0,%ebx
080e4bee +0x09c:  jmp    080e4c86 <+0x134>
080e4bf3 +0x0a1:  movl   $0x14,0x8(%esp)
080e4bfb +0x0a9:  movl   $0x0,0x4(%esp)
080e4c03 +0x0b1:  mov    -0xc(%ebp),%eax
080e4c06 +0x0b4:  mov    %eax,(%esp)
080e4c09 +0x0b7:  call   0807dcc0 <_init+0x5b8>
080e4c0e +0x0bc:  movl   $0xffffffff,0x4(%esp)
080e4c16 +0x0c4:  mov    0xc(%ebp),%eax
080e4c19 +0x0c7:  mov    %eax,(%esp)
080e4c1c +0x0ca:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
080e4c21 +0x0cf:  mov    %eax,%edx
080e4c23 +0x0d1:  mov    -0xc(%ebp),%eax
080e4c26 +0x0d4:  mov    %edx,(%eax)
080e4c28 +0x0d6:  mov    0x8(%ebp),%eax
080e4c2b +0x0d9:  lea    0x5(%eax),%edx
080e4c2e +0x0dc:  mov    -0xc(%ebp),%eax
080e4c31 +0x0df:  add    $0x4,%eax
080e4c34 +0x0e2:  movl   $0x10,0x8(%esp)
080e4c3c +0x0ea:  mov    %edx,0x4(%esp)
080e4c40 +0x0ee:  mov    %eax,(%esp)
080e4c43 +0x0f1:  call   0807d8a0 <_init+0x198>
080e4c48 +0x0f6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
080e4c4d +0x0fb:  lea    -0x14(%ebp),%edx
080e4c50 +0x0fe:  mov    %edx,0x8(%esp)
080e4c54 +0x102:  movl   $0x2,0x4(%esp)
080e4c5c +0x10a:  mov    %eax,(%esp)
080e4c5f +0x10d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
080e4c64 +0x112:  mov    $0x1,%ebx
080e4c69 +0x117:  jmp    080e4c86 <+0x134>
080e4c6b +0x119:  mov    %edx,%ebx
080e4c6d +0x11b:  mov    %eax,%esi
080e4c6f +0x11d:  lea    -0x14(%ebp),%eax
080e4c72 +0x120:  mov    %eax,(%esp)
080e4c75 +0x123:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
080e4c7a +0x128:  mov    %esi,%eax
080e4c7c +0x12a:  mov    %ebx,%edx
080e4c7e +0x12c:  mov    %eax,(%esp)
080e4c81 +0x12f:  call   08ae3750 <_Unwind_Resume>
080e4c86 +0x134:  lea    -0x14(%ebp),%eax
080e4c89 +0x137:  mov    %eax,(%esp)
080e4c8c +0x13a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
080e4c91 +0x13f:  mov    %ebx,%eax
080e4c93 +0x141:  add    $0x20,%esp
080e4c96 +0x144:  pop    %ebx
080e4c97 +0x145:  pop    %esi
080e4c98 +0x146:  pop    %ebp
080e4c99 +0x147:  ret
```

## 反编译 C

```c
// CCharacInformNotice::_saveData @ 0x80e4b52

/* CCharacInformNotice::_saveData(CUser*) */

bool __thiscall CCharacInformNotice::_saveData(CCharacInformNotice *this,CUser *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  CStreamGuard local_18 [8];
  SIG_SAVE_CHARAC_INFORM_NOTICE *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"CharacInformNotice.cpp",0x77);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 080e4ba4 to 080e4c63 has its CatchHandler @ 080e4c6b */
  CStreamGuard::operator<<(pCVar2,0x311);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SAVE_CHARAC_INFORM_NOTICE>(pCVar2);
  bVar5 = local_10 != (SIG_SAVE_CHARAC_INFORM_NOTICE *)0x0;
  if (bVar5) {
    memset(local_10,0,0x14);
    uVar4 = CUser::get_charac_no(param_1,-1);
    *(undefined4 *)local_10 = uVar4;
    memcpy(local_10 + 4,this + 5,0x10);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return bVar5;
}
```

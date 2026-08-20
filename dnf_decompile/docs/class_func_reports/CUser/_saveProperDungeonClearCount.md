# _saveProperDungeonClearCount

`_ZN5CUser28_saveProperDungeonClearCountEjs`

`CUser::_saveProperDungeonClearCount(unsigned int, short)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08681b3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08681b3a  _ZN5CUser28_saveProperDungeonClearCountEjs
#           CUser::_saveProperDungeonClearCount(unsigned int, short)
# range [0x08681b3a, 0x08681c2f]
08681b3a +0x00:  push   %ebp
08681b3b +0x01:  mov    %esp,%ebp
08681b3d +0x03:  push   %esi
08681b3e +0x04:  push   %ebx
08681b3f +0x05:  sub    $0x30,%esp
08681b42 +0x08:  mov    0x10(%ebp),%eax
08681b45 +0x0b:  mov    %ax,-0x1c(%ebp)
08681b49 +0x0f:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08681b4e +0x14:  movl   $0x85cd,0x8(%esp)
08681b56 +0x1c:  movl   $"user.cpp",0x4(%esp)
08681b5e +0x24:  mov    %eax,(%esp)
08681b61 +0x27:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08681b66 +0x2c:  movl   $0x1,0x8(%esp)
08681b6e +0x34:  mov    %eax,0x4(%esp)
08681b72 +0x38:  lea    -0x14(%ebp),%eax
08681b75 +0x3b:  mov    %eax,(%esp)
08681b78 +0x3e:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08681b7d +0x43:  lea    -0x14(%ebp),%eax
08681b80 +0x46:  mov    %eax,(%esp)
08681b83 +0x49:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08681b88 +0x4e:  movl   $0x1d4,0x4(%esp)
08681b90 +0x56:  mov    %eax,(%esp)
08681b93 +0x59:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08681b98 +0x5e:  mov    0x8(%ebp),%eax
08681b9b +0x61:  mov    %eax,(%esp)
08681b9e +0x64:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08681ba3 +0x69:  mov    %eax,%ebx
08681ba5 +0x6b:  lea    -0x14(%ebp),%eax
08681ba8 +0x6e:  mov    %eax,(%esp)
08681bab +0x71:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08681bb0 +0x76:  mov    %ebx,0x4(%esp)
08681bb4 +0x7a:  mov    %eax,(%esp)
08681bb7 +0x7d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08681bbc +0x82:  lea    -0x14(%ebp),%eax
08681bbf +0x85:  mov    %eax,(%esp)
08681bc2 +0x88:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08681bc7 +0x8d:  mov    %eax,(%esp)
08681bca +0x90:  call   0869c13c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8991>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8991
08681bcf +0x95:  mov    %eax,-0xc(%ebp)
08681bd2 +0x98:  mov    -0xc(%ebp),%eax
08681bd5 +0x9b:  mov    0xc(%ebp),%edx
08681bd8 +0x9e:  mov    %edx,(%eax)
08681bda +0xa0:  mov    -0xc(%ebp),%eax
08681bdd +0xa3:  movzwl -0x1c(%ebp),%edx
08681be1 +0xa7:  mov    %dx,0x4(%eax)
08681be5 +0xab:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08681bea +0xb0:  lea    -0x14(%ebp),%edx
08681bed +0xb3:  mov    %edx,0x8(%esp)
08681bf1 +0xb7:  movl   $0x2,0x4(%esp)
08681bf9 +0xbf:  mov    %eax,(%esp)
08681bfc +0xc2:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08681c01 +0xc7:  jmp    08681c1e <+0xe4>
08681c03 +0xc9:  mov    %edx,%ebx
08681c05 +0xcb:  mov    %eax,%esi
08681c07 +0xcd:  lea    -0x14(%ebp),%eax
08681c0a +0xd0:  mov    %eax,(%esp)
08681c0d +0xd3:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08681c12 +0xd8:  mov    %esi,%eax
08681c14 +0xda:  mov    %ebx,%edx
08681c16 +0xdc:  mov    %eax,(%esp)
08681c19 +0xdf:  call   08ae3750 <_Unwind_Resume>
08681c1e +0xe4:  lea    -0x14(%ebp),%eax
08681c21 +0xe7:  mov    %eax,(%esp)
08681c24 +0xea:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08681c29 +0xef:  add    $0x30,%esp
08681c2c +0xf2:  pop    %ebx
08681c2d +0xf3:  pop    %esi
08681c2e +0xf4:  pop    %ebp
08681c2f +0xf5:  ret
```

## 反编译 C

```c
// CUser::_saveProperDungeonClearCount @ 0x8681b3a

/* CUser::_saveProperDungeonClearCount(unsigned int, short) */

void __thiscall CUser::_saveProperDungeonClearCount(CUser *this,uint param_1,short param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  CStreamGuard local_18 [8];
  SIG_SAVE_BLOOD_CLEAR_COUNT *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0x85cd);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08681b93 to 08681c00 has its CatchHandler @ 08681c03 */
  CStreamGuard::operator<<(pCVar2,0x1d4);
  iVar3 = GetUID(this);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SAVE_BLOOD_CLEAR_COUNT>(pCVar2);
  *(uint *)local_10 = param_1;
  *(short *)(local_10 + 4) = param_2;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```

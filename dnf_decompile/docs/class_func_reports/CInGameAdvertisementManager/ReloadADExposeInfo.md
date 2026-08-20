# ReloadADExposeInfo

`_ZN27CInGameAdvertisementManager18ReloadADExposeInfoEv`

`CInGameAdvertisementManager::ReloadADExposeInfo()`

| 类 | 地址 |
|---|---|
| `CInGameAdvertisementManager` | `0x080fd95e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080fd95e  _ZN27CInGameAdvertisementManager18ReloadADExposeInfoEv
#           CInGameAdvertisementManager::ReloadADExposeInfo()
# range [0x080fd95e, 0x080fda55]
080fd95e +0x00:  push   %ebp
080fd95f +0x01:  mov    %esp,%ebp
080fd961 +0x03:  push   %esi
080fd962 +0x04:  push   %ebx
080fd963 +0x05:  sub    $0x20,%esp
080fd966 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
080fd96b +0x0d:  movl   $0x150,0x8(%esp)
080fd973 +0x15:  movl   $"InGameAdvertisementManager.cpp",0x4(%esp)
080fd97b +0x1d:  mov    %eax,(%esp)
080fd97e +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
080fd983 +0x25:  movl   $0x1,0x8(%esp)
080fd98b +0x2d:  mov    %eax,0x4(%esp)
080fd98f +0x31:  lea    -0x14(%ebp),%eax
080fd992 +0x34:  mov    %eax,(%esp)
080fd995 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
080fd99a +0x3c:  lea    -0x14(%ebp),%eax
080fd99d +0x3f:  mov    %eax,(%esp)
080fd9a0 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080fd9a5 +0x47:  movl   $0x2f9,0x4(%esp)
080fd9ad +0x4f:  mov    %eax,(%esp)
080fd9b0 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
080fd9b5 +0x57:  lea    -0x14(%ebp),%eax
080fd9b8 +0x5a:  mov    %eax,(%esp)
080fd9bb +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080fd9c0 +0x62:  movl   $0xffffffff,0x4(%esp)
080fd9c8 +0x6a:  mov    %eax,(%esp)
080fd9cb +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
080fd9d0 +0x72:  lea    -0x14(%ebp),%eax
080fd9d3 +0x75:  mov    %eax,(%esp)
080fd9d6 +0x78:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
080fd9db +0x7d:  mov    %eax,(%esp)
080fd9de +0x80:  call   080fe5be <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x8ea>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x8ea
080fd9e3 +0x85:  mov    %eax,-0xc(%ebp)
080fd9e6 +0x88:  mov    -0xc(%ebp),%eax
080fd9e9 +0x8b:  mov    %eax,0x4(%esp)
080fd9ed +0x8f:  mov    0x8(%ebp),%eax
080fd9f0 +0x92:  mov    %eax,(%esp)
080fd9f3 +0x95:  call   080fd19e <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition>  ; CInGameAdvertisementManager::queryADExposeInfo(stInGameADExposeCondition*)
080fd9f8 +0x9a:  test   %al,%al
080fd9fa +0x9c:  je     080fda1f <+0xc1>
080fd9fc +0x9e:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
080fda01 +0xa3:  lea    -0x14(%ebp),%edx
080fda04 +0xa6:  mov    %edx,0x8(%esp)
080fda08 +0xaa:  movl   $0x1,0x4(%esp)
080fda10 +0xb2:  mov    %eax,(%esp)
080fda13 +0xb5:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
080fda18 +0xba:  mov    $0x1,%ebx
080fda1d +0xbf:  jmp    080fda41 <+0xe3>
080fda1f +0xc1:  mov    $0x0,%ebx
080fda24 +0xc6:  jmp    080fda41 <+0xe3>
080fda26 +0xc8:  mov    %edx,%ebx
080fda28 +0xca:  mov    %eax,%esi
080fda2a +0xcc:  lea    -0x14(%ebp),%eax
080fda2d +0xcf:  mov    %eax,(%esp)
080fda30 +0xd2:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
080fda35 +0xd7:  mov    %esi,%eax
080fda37 +0xd9:  mov    %ebx,%edx
080fda39 +0xdb:  mov    %eax,(%esp)
080fda3c +0xde:  call   08ae3750 <_Unwind_Resume>
080fda41 +0xe3:  lea    -0x14(%ebp),%eax
080fda44 +0xe6:  mov    %eax,(%esp)
080fda47 +0xe9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
080fda4c +0xee:  mov    %ebx,%eax
080fda4e +0xf0:  add    $0x20,%esp
080fda51 +0xf3:  pop    %ebx
080fda52 +0xf4:  pop    %esi
080fda53 +0xf5:  pop    %ebp
080fda54 +0xf6:  ret
080fda55 +0xf7:  nop
```

## 反编译 C

```c
// CInGameAdvertisementManager::ReloadADExposeInfo @ 0x80fd95e

/* CInGameAdvertisementManager::ReloadADExposeInfo() */

bool __thiscall CInGameAdvertisementManager::ReloadADExposeInfo(CInGameAdvertisementManager *this)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  CStreamGuard local_18 [8];
  SIG_RELOAD_IN_GAME_ADVERTISEMENT *local_10;
  
  pSVar2 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"InGameAdvertisementManager.cpp",0x150);
  CStreamGuard::CStreamGuard(local_18,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 080fd9b0 to 080fda17 has its CatchHandler @ 080fda26 */
  CStreamGuard::operator<<(pCVar3,0x2f9);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar3,-1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_RELOAD_IN_GAME_ADVERTISEMENT>(pCVar3);
  cVar1 = queryADExposeInfo(this,(stInGameADExposeCondition *)local_10);
  if (cVar1 != '\0') {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return cVar1 != '\0';
}
```

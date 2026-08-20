# SendResult

`_ZN8APSystem18DB_LoadRewardMedal10SendResultEiiRNS_22_SIG_LOAD_REWARD_MEDALE`

`APSystem::DB_LoadRewardMedal::SendResult(int, int, APSystem::_SIG_LOAD_REWARD_MEDAL&)`

| 类 | 地址 |
|---|---|
| `APSystem::DB_LoadRewardMedal` | `0x08124b8e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08124b8e  _ZN8APSystem18DB_LoadRewardMedal10SendResultEiiRNS_22_SIG_LOAD_REWARD_MEDALE
#           APSystem::DB_LoadRewardMedal::SendResult(int, int, APSystem::_SIG_LOAD_REWARD_MEDAL&)
# range [0x08124b8e, 0x08124c6b]
08124b8e +0x00:  push   %ebp
08124b8f +0x01:  mov    %esp,%ebp
08124b91 +0x03:  push   %esi
08124b92 +0x04:  push   %ebx
08124b93 +0x05:  sub    $0x20,%esp
08124b96 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08124b9b +0x0d:  movl   $0x1c0,0x8(%esp)
08124ba3 +0x15:  movl   $"localchina/localchina_ActionPointSystem_Dispatcher.cpp",0x4(%esp)
08124bab +0x1d:  mov    %eax,(%esp)
08124bae +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08124bb3 +0x25:  movl   $0x1,0x8(%esp)
08124bbb +0x2d:  mov    %eax,0x4(%esp)
08124bbf +0x31:  lea    -0x10(%ebp),%eax
08124bc2 +0x34:  mov    %eax,(%esp)
08124bc5 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08124bca +0x3c:  lea    -0x10(%ebp),%eax
08124bcd +0x3f:  mov    %eax,(%esp)
08124bd0 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08124bd5 +0x47:  mov    0xc(%ebp),%edx
08124bd8 +0x4a:  mov    %edx,0x4(%esp)
08124bdc +0x4e:  mov    %eax,(%esp)
08124bdf +0x51:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08124be4 +0x56:  lea    -0x10(%ebp),%eax
08124be7 +0x59:  mov    %eax,(%esp)
08124bea +0x5c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08124bef +0x61:  mov    0x10(%ebp),%edx
08124bf2 +0x64:  mov    %edx,0x4(%esp)
08124bf6 +0x68:  mov    %eax,(%esp)
08124bf9 +0x6b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08124bfe +0x70:  lea    -0x10(%ebp),%eax
08124c01 +0x73:  mov    %eax,(%esp)
08124c04 +0x76:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08124c09 +0x7b:  movl   $0x13,0x8(%esp)
08124c11 +0x83:  mov    0x14(%ebp),%edx
08124c14 +0x86:  mov    %edx,0x4(%esp)
08124c18 +0x8a:  mov    %eax,(%esp)
08124c1b +0x8d:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08124c20 +0x92:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08124c25 +0x97:  lea    -0x10(%ebp),%edx
08124c28 +0x9a:  mov    %edx,0x8(%esp)
08124c2c +0x9e:  movl   $0x1,0x4(%esp)
08124c34 +0xa6:  mov    %eax,(%esp)
08124c37 +0xa9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08124c3c +0xae:  mov    $0x1,%ebx
08124c41 +0xb3:  lea    -0x10(%ebp),%eax
08124c44 +0xb6:  mov    %eax,(%esp)
08124c47 +0xb9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08124c4c +0xbe:  mov    %ebx,%eax
08124c4e +0xc0:  add    $0x20,%esp
08124c51 +0xc3:  pop    %ebx
08124c52 +0xc4:  pop    %esi
08124c53 +0xc5:  pop    %ebp
08124c54 +0xc6:  ret
08124c55 +0xc7:  mov    %edx,%ebx
08124c57 +0xc9:  mov    %eax,%esi
08124c59 +0xcb:  lea    -0x10(%ebp),%eax
08124c5c +0xce:  mov    %eax,(%esp)
08124c5f +0xd1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08124c64 +0xd6:  mov    %esi,%eax
08124c66 +0xd8:  mov    %ebx,%edx
08124c68 +0xda:  mov    %eax,(%esp)
08124c6b +0xdd:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// APSystem::DB_LoadRewardMedal::SendResult @ 0x8124b8e

/* APSystem::DB_LoadRewardMedal::SendResult(int, int, APSystem::_SIG_LOAD_REWARD_MEDAL&) */

undefined4 __thiscall
APSystem::DB_LoadRewardMedal::SendResult
          (DB_LoadRewardMedal *this,int param_1,int param_2,_SIG_LOAD_REWARD_MEDAL *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,
                               "localchina/localchina_ActionPointSystem_Dispatcher.cpp",0x1c0);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08124bdf to 08124c3b has its CatchHandler @ 08124c55 */
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar2,param_3,0x13);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}
```

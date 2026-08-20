# LoadPrivateStore

`_ZN13private_store16CPrivateStoreMgr16LoadPrivateStoreEP5CUser`

`private_store::CPrivateStoreMgr::LoadPrivateStore(CUser*)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStoreMgr` | `0x085cab24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085cab24  _ZN13private_store16CPrivateStoreMgr16LoadPrivateStoreEP5CUser
#           private_store::CPrivateStoreMgr::LoadPrivateStore(CUser*)
# range [0x085cab24, 0x085cac15]
085cab24 +0x00:  push   %ebp
085cab25 +0x01:  mov    %esp,%ebp
085cab27 +0x03:  push   %esi
085cab28 +0x04:  push   %ebx
085cab29 +0x05:  sub    $0x20,%esp
085cab2c +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
085cab31 +0x0d:  movl   $0xcb9,0x8(%esp)
085cab39 +0x15:  movl   $"PrivateStore.cpp",0x4(%esp)
085cab41 +0x1d:  mov    %eax,(%esp)
085cab44 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
085cab49 +0x25:  movl   $0x1,0x8(%esp)
085cab51 +0x2d:  mov    %eax,0x4(%esp)
085cab55 +0x31:  lea    -0x10(%ebp),%eax
085cab58 +0x34:  mov    %eax,(%esp)
085cab5b +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
085cab60 +0x3c:  lea    -0x10(%ebp),%eax
085cab63 +0x3f:  mov    %eax,(%esp)
085cab66 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085cab6b +0x47:  movl   $0x78,0x4(%esp)
085cab73 +0x4f:  mov    %eax,(%esp)
085cab76 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085cab7b +0x57:  mov    0xc(%ebp),%eax
085cab7e +0x5a:  mov    %eax,(%esp)
085cab81 +0x5d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
085cab86 +0x62:  mov    %eax,%ebx
085cab88 +0x64:  lea    -0x10(%ebp),%eax
085cab8b +0x67:  mov    %eax,(%esp)
085cab8e +0x6a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085cab93 +0x6f:  mov    %ebx,0x4(%esp)
085cab97 +0x73:  mov    %eax,(%esp)
085cab9a +0x76:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085cab9f +0x7b:  movl   $0xffffffff,0x4(%esp)
085caba7 +0x83:  mov    0xc(%ebp),%eax
085cabaa +0x86:  mov    %eax,(%esp)
085cabad +0x89:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
085cabb2 +0x8e:  mov    %eax,%ebx
085cabb4 +0x90:  lea    -0x10(%ebp),%eax
085cabb7 +0x93:  mov    %eax,(%esp)
085cabba +0x96:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085cabbf +0x9b:  mov    %ebx,0x4(%esp)
085cabc3 +0x9f:  mov    %eax,(%esp)
085cabc6 +0xa2:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085cabcb +0xa7:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
085cabd0 +0xac:  lea    -0x10(%ebp),%edx
085cabd3 +0xaf:  mov    %edx,0x8(%esp)
085cabd7 +0xb3:  movl   $0x2,0x4(%esp)
085cabdf +0xbb:  mov    %eax,(%esp)
085cabe2 +0xbe:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
085cabe7 +0xc3:  jmp    085cac04 <+0xe0>
085cabe9 +0xc5:  mov    %edx,%ebx
085cabeb +0xc7:  mov    %eax,%esi
085cabed +0xc9:  lea    -0x10(%ebp),%eax
085cabf0 +0xcc:  mov    %eax,(%esp)
085cabf3 +0xcf:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
085cabf8 +0xd4:  mov    %esi,%eax
085cabfa +0xd6:  mov    %ebx,%edx
085cabfc +0xd8:  mov    %eax,(%esp)
085cabff +0xdb:  call   08ae3750 <_Unwind_Resume>
085cac04 +0xe0:  lea    -0x10(%ebp),%eax
085cac07 +0xe3:  mov    %eax,(%esp)
085cac0a +0xe6:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
085cac0f +0xeb:  add    $0x20,%esp
085cac12 +0xee:  pop    %ebx
085cac13 +0xef:  pop    %esi
085cac14 +0xf0:  pop    %ebp
085cac15 +0xf1:  ret
```

## 反编译 C

```c
// private_store::CPrivateStoreMgr::LoadPrivateStore @ 0x85cab24

/* private_store::CPrivateStoreMgr::LoadPrivateStore(CUser*) */

void __thiscall
private_store::CPrivateStoreMgr::LoadPrivateStore(CPrivateStoreMgr *this,CUser *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"PrivateStore.cpp",0xcb9);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 085cab76 to 085cabe6 has its CatchHandler @ 085cabe9 */
  CStreamGuard::operator<<(pCVar2,0x78);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,iVar3);
  iVar3 = CUser::get_charac_no(param_1,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,iVar3);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```

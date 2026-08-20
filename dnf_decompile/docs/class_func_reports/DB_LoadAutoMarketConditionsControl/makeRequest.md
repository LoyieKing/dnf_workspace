# makeRequest

`_ZN34DB_LoadAutoMarketConditionsControl11makeRequestEb`

`DB_LoadAutoMarketConditionsControl::makeRequest(bool)`

| 类 | 地址 |
|---|---|
| `DB_LoadAutoMarketConditionsControl` | `0x08433ada` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08433ada  _ZN34DB_LoadAutoMarketConditionsControl11makeRequestEb
#           DB_LoadAutoMarketConditionsControl::makeRequest(bool)
# range [0x08433ada, 0x08433bb7]
08433ada +0x00:  push   %ebp
08433adb +0x01:  mov    %esp,%ebp
08433add +0x03:  push   %esi
08433ade +0x04:  push   %ebx
08433adf +0x05:  sub    $0x30,%esp
08433ae2 +0x08:  mov    0x8(%ebp),%eax
08433ae5 +0x0b:  mov    %al,-0x1c(%ebp)
08433ae8 +0x0e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08433aed +0x13:  movl   $0x7c43,0x8(%esp)
08433af5 +0x1b:  movl   $"DBThread.cpp",0x4(%esp)
08433afd +0x23:  mov    %eax,(%esp)
08433b00 +0x26:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08433b05 +0x2b:  movl   $0x1,0x8(%esp)
08433b0d +0x33:  mov    %eax,0x4(%esp)
08433b11 +0x37:  lea    -0x10(%ebp),%eax
08433b14 +0x3a:  mov    %eax,(%esp)
08433b17 +0x3d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08433b1c +0x42:  lea    -0x10(%ebp),%eax
08433b1f +0x45:  mov    %eax,(%esp)
08433b22 +0x48:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08433b27 +0x4d:  movl   $0x15a,0x4(%esp)
08433b2f +0x55:  mov    %eax,(%esp)
08433b32 +0x58:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08433b37 +0x5d:  lea    -0x10(%ebp),%eax
08433b3a +0x60:  mov    %eax,(%esp)
08433b3d +0x63:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08433b42 +0x68:  movl   $0xffffffff,0x4(%esp)
08433b4a +0x70:  mov    %eax,(%esp)
08433b4d +0x73:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08433b52 +0x78:  movzbl -0x1c(%ebp),%ebx
08433b56 +0x7c:  lea    -0x10(%ebp),%eax
08433b59 +0x7f:  mov    %eax,(%esp)
08433b5c +0x82:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08433b61 +0x87:  mov    %ebx,0x4(%esp)
08433b65 +0x8b:  mov    %eax,(%esp)
08433b68 +0x8e:  call   0844d430 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x46>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x46
08433b6d +0x93:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08433b72 +0x98:  lea    -0x10(%ebp),%edx
08433b75 +0x9b:  mov    %edx,0x8(%esp)
08433b79 +0x9f:  movl   $0x2,0x4(%esp)
08433b81 +0xa7:  mov    %eax,(%esp)
08433b84 +0xaa:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08433b89 +0xaf:  jmp    08433ba6 <+0xcc>
08433b8b +0xb1:  mov    %edx,%ebx
08433b8d +0xb3:  mov    %eax,%esi
08433b8f +0xb5:  lea    -0x10(%ebp),%eax
08433b92 +0xb8:  mov    %eax,(%esp)
08433b95 +0xbb:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08433b9a +0xc0:  mov    %esi,%eax
08433b9c +0xc2:  mov    %ebx,%edx
08433b9e +0xc4:  mov    %eax,(%esp)
08433ba1 +0xc7:  call   08ae3750 <_Unwind_Resume>
08433ba6 +0xcc:  lea    -0x10(%ebp),%eax
08433ba9 +0xcf:  mov    %eax,(%esp)
08433bac +0xd2:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08433bb1 +0xd7:  add    $0x30,%esp
08433bb4 +0xda:  pop    %ebx
08433bb5 +0xdb:  pop    %esi
08433bb6 +0xdc:  pop    %ebp
08433bb7 +0xdd:  ret
```

## 反编译 C

```c
// DB_LoadAutoMarketConditionsControl::makeRequest @ 0x8433ada

/* DB_LoadAutoMarketConditionsControl::makeRequest(bool) */

void DB_LoadAutoMarketConditionsControl::makeRequest(bool param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7c43);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08433b32 to 08433b88 has its CatchHandler @ 08433b8b */
  CStreamGuard::operator<<(pCVar2,0x15a);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```

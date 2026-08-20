# makeRequest

`_ZN18DB_UpdateGiftCount11makeRequestEji`

`DB_UpdateGiftCount::makeRequest(unsigned int, int)`

| 类 | 地址 |
|---|---|
| `DB_UpdateGiftCount` | `0x084271ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084271ec  _ZN18DB_UpdateGiftCount11makeRequestEji
#           DB_UpdateGiftCount::makeRequest(unsigned int, int)
# range [0x084271ec, 0x084272dd]
084271ec +0x00:  push   %ebp
084271ed +0x01:  mov    %esp,%ebp
084271ef +0x03:  push   %esi
084271f0 +0x04:  push   %ebx
084271f1 +0x05:  sub    $0x20,%esp
084271f4 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084271f9 +0x0d:  movl   $0x6841,0x8(%esp)
08427201 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
08427209 +0x1d:  mov    %eax,(%esp)
0842720c +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08427211 +0x25:  movl   $0x1,0x8(%esp)
08427219 +0x2d:  mov    %eax,0x4(%esp)
0842721d +0x31:  lea    -0x10(%ebp),%eax
08427220 +0x34:  mov    %eax,(%esp)
08427223 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08427228 +0x3c:  lea    -0x10(%ebp),%eax
0842722b +0x3f:  mov    %eax,(%esp)
0842722e +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08427233 +0x47:  movl   $0xd1,0x4(%esp)
0842723b +0x4f:  mov    %eax,(%esp)
0842723e +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08427243 +0x57:  lea    -0x10(%ebp),%eax
08427246 +0x5a:  mov    %eax,(%esp)
08427249 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842724e +0x62:  movl   $0xffffffff,0x4(%esp)
08427256 +0x6a:  mov    %eax,(%esp)
08427259 +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842725e +0x72:  lea    -0x10(%ebp),%eax
08427261 +0x75:  mov    %eax,(%esp)
08427264 +0x78:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08427269 +0x7d:  mov    0x8(%ebp),%edx
0842726c +0x80:  mov    %edx,0x4(%esp)
08427270 +0x84:  mov    %eax,(%esp)
08427273 +0x87:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08427278 +0x8c:  lea    -0x10(%ebp),%eax
0842727b +0x8f:  mov    %eax,(%esp)
0842727e +0x92:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08427283 +0x97:  mov    0xc(%ebp),%edx
08427286 +0x9a:  mov    %edx,0x4(%esp)
0842728a +0x9e:  mov    %eax,(%esp)
0842728d +0xa1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08427292 +0xa6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08427297 +0xab:  lea    -0x10(%ebp),%edx
0842729a +0xae:  mov    %edx,0x8(%esp)
0842729e +0xb2:  movl   $0x2,0x4(%esp)
084272a6 +0xba:  mov    %eax,(%esp)
084272a9 +0xbd:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084272ae +0xc2:  jmp    084272cb <+0xdf>
084272b0 +0xc4:  mov    %edx,%ebx
084272b2 +0xc6:  mov    %eax,%esi
084272b4 +0xc8:  lea    -0x10(%ebp),%eax
084272b7 +0xcb:  mov    %eax,(%esp)
084272ba +0xce:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084272bf +0xd3:  mov    %esi,%eax
084272c1 +0xd5:  mov    %ebx,%edx
084272c3 +0xd7:  mov    %eax,(%esp)
084272c6 +0xda:  call   08ae3750 <_Unwind_Resume>
084272cb +0xdf:  lea    -0x10(%ebp),%eax
084272ce +0xe2:  mov    %eax,(%esp)
084272d1 +0xe5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084272d6 +0xea:  add    $0x20,%esp
084272d9 +0xed:  pop    %ebx
084272da +0xee:  pop    %esi
084272db +0xef:  pop    %ebp
084272dc +0xf0:  ret
084272dd +0xf1:  nop
```

## 反编译 C

```c
// DB_UpdateGiftCount::makeRequest @ 0x84271ec

/* DB_UpdateGiftCount::makeRequest(unsigned int, int) */

void DB_UpdateGiftCount::makeRequest(uint param_1,int param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6841);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0842723e to 084272ad has its CatchHandler @ 084272b0 */
  CStreamGuard::operator<<(pCVar2,0xd1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```

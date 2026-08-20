# makeRequest

`_ZN27DB_SaveGiveAvengerTitleFlag11makeRequestEijj`

`DB_SaveGiveAvengerTitleFlag::makeRequest(int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_SaveGiveAvengerTitleFlag` | `0x084422dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084422dc  _ZN27DB_SaveGiveAvengerTitleFlag11makeRequestEijj
#           DB_SaveGiveAvengerTitleFlag::makeRequest(int, unsigned int, unsigned int)
# range [0x084422dc, 0x084423cb]
084422dc +0x00:  push   %ebp
084422dd +0x01:  mov    %esp,%ebp
084422df +0x03:  push   %esi
084422e0 +0x04:  push   %ebx
084422e1 +0x05:  sub    $0x20,%esp
084422e4 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084422e9 +0x0d:  movl   $0xa276,0x8(%esp)
084422f1 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
084422f9 +0x1d:  mov    %eax,(%esp)
084422fc +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08442301 +0x25:  movl   $0x1,0x8(%esp)
08442309 +0x2d:  mov    %eax,0x4(%esp)
0844230d +0x31:  lea    -0x10(%ebp),%eax
08442310 +0x34:  mov    %eax,(%esp)
08442313 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08442318 +0x3c:  lea    -0x10(%ebp),%eax
0844231b +0x3f:  mov    %eax,(%esp)
0844231e +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08442323 +0x47:  movl   $0x28d,0x4(%esp)
0844232b +0x4f:  mov    %eax,(%esp)
0844232e +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08442333 +0x57:  lea    -0x10(%ebp),%eax
08442336 +0x5a:  mov    %eax,(%esp)
08442339 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844233e +0x62:  mov    0x8(%ebp),%edx
08442341 +0x65:  mov    %edx,0x4(%esp)
08442345 +0x69:  mov    %eax,(%esp)
08442348 +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844234d +0x71:  lea    -0x10(%ebp),%eax
08442350 +0x74:  mov    %eax,(%esp)
08442353 +0x77:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08442358 +0x7c:  mov    0xc(%ebp),%edx
0844235b +0x7f:  mov    %edx,0x4(%esp)
0844235f +0x83:  mov    %eax,(%esp)
08442362 +0x86:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08442367 +0x8b:  lea    -0x10(%ebp),%eax
0844236a +0x8e:  mov    %eax,(%esp)
0844236d +0x91:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08442372 +0x96:  mov    0x10(%ebp),%edx
08442375 +0x99:  mov    %edx,0x4(%esp)
08442379 +0x9d:  mov    %eax,(%esp)
0844237c +0xa0:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08442381 +0xa5:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08442386 +0xaa:  lea    -0x10(%ebp),%edx
08442389 +0xad:  mov    %edx,0x8(%esp)
0844238d +0xb1:  movl   $0x2,0x4(%esp)
08442395 +0xb9:  mov    %eax,(%esp)
08442398 +0xbc:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0844239d +0xc1:  jmp    084423ba <+0xde>
0844239f +0xc3:  mov    %edx,%ebx
084423a1 +0xc5:  mov    %eax,%esi
084423a3 +0xc7:  lea    -0x10(%ebp),%eax
084423a6 +0xca:  mov    %eax,(%esp)
084423a9 +0xcd:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084423ae +0xd2:  mov    %esi,%eax
084423b0 +0xd4:  mov    %ebx,%edx
084423b2 +0xd6:  mov    %eax,(%esp)
084423b5 +0xd9:  call   08ae3750 <_Unwind_Resume>
084423ba +0xde:  lea    -0x10(%ebp),%eax
084423bd +0xe1:  mov    %eax,(%esp)
084423c0 +0xe4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084423c5 +0xe9:  add    $0x20,%esp
084423c8 +0xec:  pop    %ebx
084423c9 +0xed:  pop    %esi
084423ca +0xee:  pop    %ebp
084423cb +0xef:  ret
```

## 反编译 C

```c
// DB_SaveGiveAvengerTitleFlag::makeRequest @ 0x84422dc

/* DB_SaveGiveAvengerTitleFlag::makeRequest(int, unsigned int, unsigned int) */

void DB_SaveGiveAvengerTitleFlag::makeRequest(int param_1,uint param_2,uint param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xa276);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0844232e to 0844239c has its CatchHandler @ 0844239f */
  CStreamGuard::operator<<(pCVar2,0x28d);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```

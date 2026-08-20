# makeRequest

`_ZN20DB_UpdateRevengeData11makeRequestEjhh`

`DB_UpdateRevengeData::makeRequest(unsigned int, unsigned char, unsigned char)`

| 类 | 地址 |
|---|---|
| `DB_UpdateRevengeData` | `0x0843f232` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843f232  _ZN20DB_UpdateRevengeData11makeRequestEjhh
#           DB_UpdateRevengeData::makeRequest(unsigned int, unsigned char, unsigned char)
# range [0x0843f232, 0x0843f34b]
0843f232 +0x000:  push   %ebp
0843f233 +0x001:  mov    %esp,%ebp
0843f235 +0x003:  push   %esi
0843f236 +0x004:  push   %ebx
0843f237 +0x005:  sub    $0x30,%esp
0843f23a +0x008:  mov    0xc(%ebp),%edx
0843f23d +0x00b:  mov    0x10(%ebp),%eax
0843f240 +0x00e:  mov    %dl,-0x1c(%ebp)
0843f243 +0x011:  mov    %al,-0x20(%ebp)
0843f246 +0x014:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843f24b +0x019:  movl   $0x98bd,0x8(%esp)
0843f253 +0x021:  movl   $"DBThread.cpp",0x4(%esp)
0843f25b +0x029:  mov    %eax,(%esp)
0843f25e +0x02c:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843f263 +0x031:  movl   $0x1,0x8(%esp)
0843f26b +0x039:  mov    %eax,0x4(%esp)
0843f26f +0x03d:  lea    -0x10(%ebp),%eax
0843f272 +0x040:  mov    %eax,(%esp)
0843f275 +0x043:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843f27a +0x048:  lea    -0x10(%ebp),%eax
0843f27d +0x04b:  mov    %eax,(%esp)
0843f280 +0x04e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843f285 +0x053:  movl   $0x244,0x4(%esp)
0843f28d +0x05b:  mov    %eax,(%esp)
0843f290 +0x05e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843f295 +0x063:  lea    -0x10(%ebp),%eax
0843f298 +0x066:  mov    %eax,(%esp)
0843f29b +0x069:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843f2a0 +0x06e:  movl   $0xffffffff,0x4(%esp)
0843f2a8 +0x076:  mov    %eax,(%esp)
0843f2ab +0x079:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843f2b0 +0x07e:  lea    -0x10(%ebp),%eax
0843f2b3 +0x081:  mov    %eax,(%esp)
0843f2b6 +0x084:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843f2bb +0x089:  mov    0x8(%ebp),%edx
0843f2be +0x08c:  mov    %edx,0x4(%esp)
0843f2c2 +0x090:  mov    %eax,(%esp)
0843f2c5 +0x093:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0843f2ca +0x098:  movzbl -0x1c(%ebp),%ebx
0843f2ce +0x09c:  lea    -0x10(%ebp),%eax
0843f2d1 +0x09f:  mov    %eax,(%esp)
0843f2d4 +0x0a2:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843f2d9 +0x0a7:  mov    %ebx,0x4(%esp)
0843f2dd +0x0ab:  mov    %eax,(%esp)
0843f2e0 +0x0ae:  call   0844d454 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6a
0843f2e5 +0x0b3:  movzbl -0x20(%ebp),%ebx
0843f2e9 +0x0b7:  lea    -0x10(%ebp),%eax
0843f2ec +0x0ba:  mov    %eax,(%esp)
0843f2ef +0x0bd:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843f2f4 +0x0c2:  mov    %ebx,0x4(%esp)
0843f2f8 +0x0c6:  mov    %eax,(%esp)
0843f2fb +0x0c9:  call   0844d454 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6a
0843f300 +0x0ce:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843f305 +0x0d3:  lea    -0x10(%ebp),%edx
0843f308 +0x0d6:  mov    %edx,0x8(%esp)
0843f30c +0x0da:  movl   $0x2,0x4(%esp)
0843f314 +0x0e2:  mov    %eax,(%esp)
0843f317 +0x0e5:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843f31c +0x0ea:  jmp    0843f339 <+0x107>
0843f31e +0x0ec:  mov    %edx,%ebx
0843f320 +0x0ee:  mov    %eax,%esi
0843f322 +0x0f0:  lea    -0x10(%ebp),%eax
0843f325 +0x0f3:  mov    %eax,(%esp)
0843f328 +0x0f6:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843f32d +0x0fb:  mov    %esi,%eax
0843f32f +0x0fd:  mov    %ebx,%edx
0843f331 +0x0ff:  mov    %eax,(%esp)
0843f334 +0x102:  call   08ae3750 <_Unwind_Resume>
0843f339 +0x107:  lea    -0x10(%ebp),%eax
0843f33c +0x10a:  mov    %eax,(%esp)
0843f33f +0x10d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843f344 +0x112:  add    $0x30,%esp
0843f347 +0x115:  pop    %ebx
0843f348 +0x116:  pop    %esi
0843f349 +0x117:  pop    %ebp
0843f34a +0x118:  ret
0843f34b +0x119:  nop
```

## 反编译 C

```c
// DB_UpdateRevengeData::makeRequest @ 0x843f232

/* DB_UpdateRevengeData::makeRequest(unsigned int, unsigned char, unsigned char) */

void DB_UpdateRevengeData::makeRequest(uint param_1,uchar param_2,uchar param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x98bd);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843f290 to 0843f31b has its CatchHandler @ 0843f31e */
  CStreamGuard::operator<<(pCVar2,0x244);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
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

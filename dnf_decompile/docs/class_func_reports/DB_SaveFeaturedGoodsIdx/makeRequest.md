# makeRequest

`_ZN23DB_SaveFeaturedGoodsIdx11makeRequestEjiiii`

`DB_SaveFeaturedGoodsIdx::makeRequest(unsigned int, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `DB_SaveFeaturedGoodsIdx` | `0x0841b2da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841b2da  _ZN23DB_SaveFeaturedGoodsIdx11makeRequestEjiiii
#           DB_SaveFeaturedGoodsIdx::makeRequest(unsigned int, int, int, int, int)
# range [0x0841b2da, 0x0841b419]
0841b2da +0x000:  push   %ebp
0841b2db +0x001:  mov    %esp,%ebp
0841b2dd +0x003:  push   %esi
0841b2de +0x004:  push   %ebx
0841b2df +0x005:  sub    $0x20,%esp
0841b2e2 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0841b2e7 +0x00d:  movl   $0x4dfb,0x8(%esp)
0841b2ef +0x015:  movl   $"DBThread.cpp",0x4(%esp)
0841b2f7 +0x01d:  mov    %eax,(%esp)
0841b2fa +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0841b2ff +0x025:  movl   $0x1,0x8(%esp)
0841b307 +0x02d:  mov    %eax,0x4(%esp)
0841b30b +0x031:  lea    -0x10(%ebp),%eax
0841b30e +0x034:  mov    %eax,(%esp)
0841b311 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0841b316 +0x03c:  lea    -0x10(%ebp),%eax
0841b319 +0x03f:  mov    %eax,(%esp)
0841b31c +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0841b321 +0x047:  movl   $0x52,0x4(%esp)
0841b329 +0x04f:  mov    %eax,(%esp)
0841b32c +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0841b331 +0x057:  lea    -0x10(%ebp),%eax
0841b334 +0x05a:  mov    %eax,(%esp)
0841b337 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0841b33c +0x062:  movl   $0xffffffff,0x4(%esp)
0841b344 +0x06a:  mov    %eax,(%esp)
0841b347 +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0841b34c +0x072:  lea    -0x10(%ebp),%eax
0841b34f +0x075:  mov    %eax,(%esp)
0841b352 +0x078:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0841b357 +0x07d:  mov    0x8(%ebp),%edx
0841b35a +0x080:  mov    %edx,0x4(%esp)
0841b35e +0x084:  mov    %eax,(%esp)
0841b361 +0x087:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0841b366 +0x08c:  lea    -0x10(%ebp),%eax
0841b369 +0x08f:  mov    %eax,(%esp)
0841b36c +0x092:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0841b371 +0x097:  mov    0xc(%ebp),%edx
0841b374 +0x09a:  mov    %edx,0x4(%esp)
0841b378 +0x09e:  mov    %eax,(%esp)
0841b37b +0x0a1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0841b380 +0x0a6:  lea    -0x10(%ebp),%eax
0841b383 +0x0a9:  mov    %eax,(%esp)
0841b386 +0x0ac:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0841b38b +0x0b1:  mov    0x10(%ebp),%edx
0841b38e +0x0b4:  mov    %edx,0x4(%esp)
0841b392 +0x0b8:  mov    %eax,(%esp)
0841b395 +0x0bb:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0841b39a +0x0c0:  lea    -0x10(%ebp),%eax
0841b39d +0x0c3:  mov    %eax,(%esp)
0841b3a0 +0x0c6:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0841b3a5 +0x0cb:  mov    0x18(%ebp),%edx
0841b3a8 +0x0ce:  mov    %edx,0x4(%esp)
0841b3ac +0x0d2:  mov    %eax,(%esp)
0841b3af +0x0d5:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0841b3b4 +0x0da:  lea    -0x10(%ebp),%eax
0841b3b7 +0x0dd:  mov    %eax,(%esp)
0841b3ba +0x0e0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0841b3bf +0x0e5:  mov    0x14(%ebp),%edx
0841b3c2 +0x0e8:  mov    %edx,0x4(%esp)
0841b3c6 +0x0ec:  mov    %eax,(%esp)
0841b3c9 +0x0ef:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0841b3ce +0x0f4:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0841b3d3 +0x0f9:  lea    -0x10(%ebp),%edx
0841b3d6 +0x0fc:  mov    %edx,0x8(%esp)
0841b3da +0x100:  movl   $0x2,0x4(%esp)
0841b3e2 +0x108:  mov    %eax,(%esp)
0841b3e5 +0x10b:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0841b3ea +0x110:  jmp    0841b407 <+0x12d>
0841b3ec +0x112:  mov    %edx,%ebx
0841b3ee +0x114:  mov    %eax,%esi
0841b3f0 +0x116:  lea    -0x10(%ebp),%eax
0841b3f3 +0x119:  mov    %eax,(%esp)
0841b3f6 +0x11c:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0841b3fb +0x121:  mov    %esi,%eax
0841b3fd +0x123:  mov    %ebx,%edx
0841b3ff +0x125:  mov    %eax,(%esp)
0841b402 +0x128:  call   08ae3750 <_Unwind_Resume>
0841b407 +0x12d:  lea    -0x10(%ebp),%eax
0841b40a +0x130:  mov    %eax,(%esp)
0841b40d +0x133:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0841b412 +0x138:  add    $0x20,%esp
0841b415 +0x13b:  pop    %ebx
0841b416 +0x13c:  pop    %esi
0841b417 +0x13d:  pop    %ebp
0841b418 +0x13e:  ret
0841b419 +0x13f:  nop
```

## 反编译 C

```c
// DB_SaveFeaturedGoodsIdx::makeRequest @ 0x841b2da

/* DB_SaveFeaturedGoodsIdx::makeRequest(unsigned int, int, int, int, int) */

void DB_SaveFeaturedGoodsIdx::makeRequest
               (uint param_1,int param_2,int param_3,int param_4,int param_5)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x4dfb);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0841b32c to 0841b3e9 has its CatchHandler @ 0841b3ec */
  CStreamGuard::operator<<(pCVar2,0x52);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_5);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_4);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```

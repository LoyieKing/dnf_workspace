# makeRequest

`_ZN26DB_SaveEventLevelupSupport11makeRequestEiiii`

`DB_SaveEventLevelupSupport::makeRequest(int, int, int, int)`

| 类 | 地址 |
|---|---|
| `DB_SaveEventLevelupSupport` | `0x0844cc2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844cc2e  _ZN26DB_SaveEventLevelupSupport11makeRequestEiiii
#           DB_SaveEventLevelupSupport::makeRequest(int, int, int, int)
# range [0x0844cc2e, 0x0844cd37]
0844cc2e +0x000:  push   %ebp
0844cc2f +0x001:  mov    %esp,%ebp
0844cc31 +0x003:  push   %esi
0844cc32 +0x004:  push   %ebx
0844cc33 +0x005:  sub    $0x20,%esp
0844cc36 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0844cc3b +0x00d:  movl   $0xc25a,0x8(%esp)
0844cc43 +0x015:  movl   $"DBThread.cpp",0x4(%esp)
0844cc4b +0x01d:  mov    %eax,(%esp)
0844cc4e +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0844cc53 +0x025:  movl   $0x1,0x8(%esp)
0844cc5b +0x02d:  mov    %eax,0x4(%esp)
0844cc5f +0x031:  lea    -0x10(%ebp),%eax
0844cc62 +0x034:  mov    %eax,(%esp)
0844cc65 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0844cc6a +0x03c:  lea    -0x10(%ebp),%eax
0844cc6d +0x03f:  mov    %eax,(%esp)
0844cc70 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844cc75 +0x047:  movl   $0x34f,0x4(%esp)
0844cc7d +0x04f:  mov    %eax,(%esp)
0844cc80 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844cc85 +0x057:  lea    -0x10(%ebp),%eax
0844cc88 +0x05a:  mov    %eax,(%esp)
0844cc8b +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844cc90 +0x062:  mov    0x8(%ebp),%edx
0844cc93 +0x065:  mov    %edx,0x4(%esp)
0844cc97 +0x069:  mov    %eax,(%esp)
0844cc9a +0x06c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844cc9f +0x071:  lea    -0x10(%ebp),%eax
0844cca2 +0x074:  mov    %eax,(%esp)
0844cca5 +0x077:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844ccaa +0x07c:  mov    0xc(%ebp),%edx
0844ccad +0x07f:  mov    %edx,0x4(%esp)
0844ccb1 +0x083:  mov    %eax,(%esp)
0844ccb4 +0x086:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844ccb9 +0x08b:  lea    -0x10(%ebp),%eax
0844ccbc +0x08e:  mov    %eax,(%esp)
0844ccbf +0x091:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844ccc4 +0x096:  mov    0x10(%ebp),%edx
0844ccc7 +0x099:  mov    %edx,0x4(%esp)
0844cccb +0x09d:  mov    %eax,(%esp)
0844ccce +0x0a0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844ccd3 +0x0a5:  lea    -0x10(%ebp),%eax
0844ccd6 +0x0a8:  mov    %eax,(%esp)
0844ccd9 +0x0ab:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844ccde +0x0b0:  mov    0x14(%ebp),%edx
0844cce1 +0x0b3:  mov    %edx,0x4(%esp)
0844cce5 +0x0b7:  mov    %eax,(%esp)
0844cce8 +0x0ba:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844cced +0x0bf:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0844ccf2 +0x0c4:  lea    -0x10(%ebp),%edx
0844ccf5 +0x0c7:  mov    %edx,0x8(%esp)
0844ccf9 +0x0cb:  movl   $0x2,0x4(%esp)
0844cd01 +0x0d3:  mov    %eax,(%esp)
0844cd04 +0x0d6:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0844cd09 +0x0db:  jmp    0844cd26 <+0xf8>
0844cd0b +0x0dd:  mov    %edx,%ebx
0844cd0d +0x0df:  mov    %eax,%esi
0844cd0f +0x0e1:  lea    -0x10(%ebp),%eax
0844cd12 +0x0e4:  mov    %eax,(%esp)
0844cd15 +0x0e7:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844cd1a +0x0ec:  mov    %esi,%eax
0844cd1c +0x0ee:  mov    %ebx,%edx
0844cd1e +0x0f0:  mov    %eax,(%esp)
0844cd21 +0x0f3:  call   08ae3750 <_Unwind_Resume>
0844cd26 +0x0f8:  lea    -0x10(%ebp),%eax
0844cd29 +0x0fb:  mov    %eax,(%esp)
0844cd2c +0x0fe:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844cd31 +0x103:  add    $0x20,%esp
0844cd34 +0x106:  pop    %ebx
0844cd35 +0x107:  pop    %esi
0844cd36 +0x108:  pop    %ebp
0844cd37 +0x109:  ret
```

## 反编译 C

```c
// DB_SaveEventLevelupSupport::makeRequest @ 0x844cc2e

/* DB_SaveEventLevelupSupport::makeRequest(int, int, int, int) */

void DB_SaveEventLevelupSupport::makeRequest(int param_1,int param_2,int param_3,int param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xc25a);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0844cc80 to 0844cd08 has its CatchHandler @ 0844cd0b */
  CStreamGuard::operator<<(pCVar2,0x34f);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_4);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```

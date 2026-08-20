# makeRequest

`_ZN32DB_UpdateUserGiftFatigueQuantity11makeRequestEjjj`

`DB_UpdateUserGiftFatigueQuantity::makeRequest(unsigned int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_UpdateUserGiftFatigueQuantity` | `0x08441fde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08441fde  _ZN32DB_UpdateUserGiftFatigueQuantity11makeRequestEjjj
#           DB_UpdateUserGiftFatigueQuantity::makeRequest(unsigned int, unsigned int, unsigned int)
# range [0x08441fde, 0x084420e9]
08441fde +0x000:  push   %ebp
08441fdf +0x001:  mov    %esp,%ebp
08441fe1 +0x003:  push   %esi
08441fe2 +0x004:  push   %ebx
08441fe3 +0x005:  sub    $0x20,%esp
08441fe6 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08441feb +0x00d:  movl   $0xa1b1,0x8(%esp)
08441ff3 +0x015:  movl   $"DBThread.cpp",0x4(%esp)
08441ffb +0x01d:  mov    %eax,(%esp)
08441ffe +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08442003 +0x025:  movl   $0x1,0x8(%esp)
0844200b +0x02d:  mov    %eax,0x4(%esp)
0844200f +0x031:  lea    -0x10(%ebp),%eax
08442012 +0x034:  mov    %eax,(%esp)
08442015 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0844201a +0x03c:  lea    -0x10(%ebp),%eax
0844201d +0x03f:  mov    %eax,(%esp)
08442020 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08442025 +0x047:  movl   $0x288,0x4(%esp)
0844202d +0x04f:  mov    %eax,(%esp)
08442030 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08442035 +0x057:  lea    -0x10(%ebp),%eax
08442038 +0x05a:  mov    %eax,(%esp)
0844203b +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08442040 +0x062:  movl   $0xffffffff,0x4(%esp)
08442048 +0x06a:  mov    %eax,(%esp)
0844204b +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08442050 +0x072:  lea    -0x10(%ebp),%eax
08442053 +0x075:  mov    %eax,(%esp)
08442056 +0x078:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844205b +0x07d:  mov    0x8(%ebp),%edx
0844205e +0x080:  mov    %edx,0x4(%esp)
08442062 +0x084:  mov    %eax,(%esp)
08442065 +0x087:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0844206a +0x08c:  lea    -0x10(%ebp),%eax
0844206d +0x08f:  mov    %eax,(%esp)
08442070 +0x092:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08442075 +0x097:  mov    0xc(%ebp),%edx
08442078 +0x09a:  mov    %edx,0x4(%esp)
0844207c +0x09e:  mov    %eax,(%esp)
0844207f +0x0a1:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08442084 +0x0a6:  lea    -0x10(%ebp),%eax
08442087 +0x0a9:  mov    %eax,(%esp)
0844208a +0x0ac:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844208f +0x0b1:  mov    0x10(%ebp),%edx
08442092 +0x0b4:  mov    %edx,0x4(%esp)
08442096 +0x0b8:  mov    %eax,(%esp)
08442099 +0x0bb:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0844209e +0x0c0:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084420a3 +0x0c5:  lea    -0x10(%ebp),%edx
084420a6 +0x0c8:  mov    %edx,0x8(%esp)
084420aa +0x0cc:  movl   $0x2,0x4(%esp)
084420b2 +0x0d4:  mov    %eax,(%esp)
084420b5 +0x0d7:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084420ba +0x0dc:  jmp    084420d7 <+0xf9>
084420bc +0x0de:  mov    %edx,%ebx
084420be +0x0e0:  mov    %eax,%esi
084420c0 +0x0e2:  lea    -0x10(%ebp),%eax
084420c3 +0x0e5:  mov    %eax,(%esp)
084420c6 +0x0e8:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084420cb +0x0ed:  mov    %esi,%eax
084420cd +0x0ef:  mov    %ebx,%edx
084420cf +0x0f1:  mov    %eax,(%esp)
084420d2 +0x0f4:  call   08ae3750 <_Unwind_Resume>
084420d7 +0x0f9:  lea    -0x10(%ebp),%eax
084420da +0x0fc:  mov    %eax,(%esp)
084420dd +0x0ff:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084420e2 +0x104:  add    $0x20,%esp
084420e5 +0x107:  pop    %ebx
084420e6 +0x108:  pop    %esi
084420e7 +0x109:  pop    %ebp
084420e8 +0x10a:  ret
084420e9 +0x10b:  nop
```

## 反编译 C

```c
// DB_UpdateUserGiftFatigueQuantity::makeRequest @ 0x8441fde

/* DB_UpdateUserGiftFatigueQuantity::makeRequest(unsigned int, unsigned int, unsigned int) */

void DB_UpdateUserGiftFatigueQuantity::makeRequest(uint param_1,uint param_2,uint param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xa1b1);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08442030 to 084420b9 has its CatchHandler @ 084420bc */
  CStreamGuard::operator<<(pCVar2,0x288);
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

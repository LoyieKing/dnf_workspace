# makeRequest

`_ZN29DB_UpdateReturnUserFirstLogin11makeRequestEjii`

`DB_UpdateReturnUserFirstLogin::makeRequest(unsigned int, int, int)`

| 类 | 地址 |
|---|---|
| `DB_UpdateReturnUserFirstLogin` | `0x0843e146` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843e146  _ZN29DB_UpdateReturnUserFirstLogin11makeRequestEjii
#           DB_UpdateReturnUserFirstLogin::makeRequest(unsigned int, int, int)
# range [0x0843e146, 0x0843e251]
0843e146 +0x000:  push   %ebp
0843e147 +0x001:  mov    %esp,%ebp
0843e149 +0x003:  push   %esi
0843e14a +0x004:  push   %ebx
0843e14b +0x005:  sub    $0x20,%esp
0843e14e +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843e153 +0x00d:  movl   $0x92e1,0x8(%esp)
0843e15b +0x015:  movl   $"DBThread.cpp",0x4(%esp)
0843e163 +0x01d:  mov    %eax,(%esp)
0843e166 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843e16b +0x025:  movl   $0x1,0x8(%esp)
0843e173 +0x02d:  mov    %eax,0x4(%esp)
0843e177 +0x031:  lea    -0x10(%ebp),%eax
0843e17a +0x034:  mov    %eax,(%esp)
0843e17d +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843e182 +0x03c:  lea    -0x10(%ebp),%eax
0843e185 +0x03f:  mov    %eax,(%esp)
0843e188 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843e18d +0x047:  movl   $0x21f,0x4(%esp)
0843e195 +0x04f:  mov    %eax,(%esp)
0843e198 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843e19d +0x057:  lea    -0x10(%ebp),%eax
0843e1a0 +0x05a:  mov    %eax,(%esp)
0843e1a3 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843e1a8 +0x062:  movl   $0xffffffff,0x4(%esp)
0843e1b0 +0x06a:  mov    %eax,(%esp)
0843e1b3 +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843e1b8 +0x072:  lea    -0x10(%ebp),%eax
0843e1bb +0x075:  mov    %eax,(%esp)
0843e1be +0x078:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843e1c3 +0x07d:  mov    0x8(%ebp),%edx
0843e1c6 +0x080:  mov    %edx,0x4(%esp)
0843e1ca +0x084:  mov    %eax,(%esp)
0843e1cd +0x087:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0843e1d2 +0x08c:  lea    -0x10(%ebp),%eax
0843e1d5 +0x08f:  mov    %eax,(%esp)
0843e1d8 +0x092:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843e1dd +0x097:  mov    0x10(%ebp),%edx
0843e1e0 +0x09a:  mov    %edx,0x4(%esp)
0843e1e4 +0x09e:  mov    %eax,(%esp)
0843e1e7 +0x0a1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843e1ec +0x0a6:  lea    -0x10(%ebp),%eax
0843e1ef +0x0a9:  mov    %eax,(%esp)
0843e1f2 +0x0ac:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843e1f7 +0x0b1:  mov    0xc(%ebp),%edx
0843e1fa +0x0b4:  mov    %edx,0x4(%esp)
0843e1fe +0x0b8:  mov    %eax,(%esp)
0843e201 +0x0bb:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843e206 +0x0c0:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843e20b +0x0c5:  lea    -0x10(%ebp),%edx
0843e20e +0x0c8:  mov    %edx,0x8(%esp)
0843e212 +0x0cc:  movl   $0x2,0x4(%esp)
0843e21a +0x0d4:  mov    %eax,(%esp)
0843e21d +0x0d7:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843e222 +0x0dc:  jmp    0843e23f <+0xf9>
0843e224 +0x0de:  mov    %edx,%ebx
0843e226 +0x0e0:  mov    %eax,%esi
0843e228 +0x0e2:  lea    -0x10(%ebp),%eax
0843e22b +0x0e5:  mov    %eax,(%esp)
0843e22e +0x0e8:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843e233 +0x0ed:  mov    %esi,%eax
0843e235 +0x0ef:  mov    %ebx,%edx
0843e237 +0x0f1:  mov    %eax,(%esp)
0843e23a +0x0f4:  call   08ae3750 <_Unwind_Resume>
0843e23f +0x0f9:  lea    -0x10(%ebp),%eax
0843e242 +0x0fc:  mov    %eax,(%esp)
0843e245 +0x0ff:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843e24a +0x104:  add    $0x20,%esp
0843e24d +0x107:  pop    %ebx
0843e24e +0x108:  pop    %esi
0843e24f +0x109:  pop    %ebp
0843e250 +0x10a:  ret
0843e251 +0x10b:  nop
```

## 反编译 C

```c
// DB_UpdateReturnUserFirstLogin::makeRequest @ 0x843e146

/* DB_UpdateReturnUserFirstLogin::makeRequest(unsigned int, int, int) */

void DB_UpdateReturnUserFirstLogin::makeRequest(uint param_1,int param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x92e1);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843e198 to 0843e221 has its CatchHandler @ 0843e224 */
  CStreamGuard::operator<<(pCVar2,0x21f);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```

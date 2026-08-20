# makeRequest

`_ZN32CLocalChina_DB_LastDay_BreakAway11makeRequestEjii`

`CLocalChina_DB_LastDay_BreakAway::makeRequest(unsigned int, int, int)`

| 类 | 地址 |
|---|---|
| `CLocalChina_DB_LastDay_BreakAway` | `0x08128152` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08128152  _ZN32CLocalChina_DB_LastDay_BreakAway11makeRequestEjii
#           CLocalChina_DB_LastDay_BreakAway::makeRequest(unsigned int, int, int)
# range [0x08128152, 0x0812825d]
08128152 +0x000:  push   %ebp
08128153 +0x001:  mov    %esp,%ebp
08128155 +0x003:  push   %esi
08128156 +0x004:  push   %ebx
08128157 +0x005:  sub    $0x20,%esp
0812815a +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0812815f +0x00d:  movl   $0x438,0x8(%esp)
08128167 +0x015:  movl   $"localchina/localchina_DBThread.cpp",0x4(%esp)
0812816f +0x01d:  mov    %eax,(%esp)
08128172 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08128177 +0x025:  movl   $0x1,0x8(%esp)
0812817f +0x02d:  mov    %eax,0x4(%esp)
08128183 +0x031:  lea    -0x10(%ebp),%eax
08128186 +0x034:  mov    %eax,(%esp)
08128189 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0812818e +0x03c:  lea    -0x10(%ebp),%eax
08128191 +0x03f:  mov    %eax,(%esp)
08128194 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08128199 +0x047:  movl   $0x2de,0x4(%esp)
081281a1 +0x04f:  mov    %eax,(%esp)
081281a4 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081281a9 +0x057:  lea    -0x10(%ebp),%eax
081281ac +0x05a:  mov    %eax,(%esp)
081281af +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081281b4 +0x062:  movl   $0xffffffff,0x4(%esp)
081281bc +0x06a:  mov    %eax,(%esp)
081281bf +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081281c4 +0x072:  lea    -0x10(%ebp),%eax
081281c7 +0x075:  mov    %eax,(%esp)
081281ca +0x078:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081281cf +0x07d:  mov    0x8(%ebp),%edx
081281d2 +0x080:  mov    %edx,0x4(%esp)
081281d6 +0x084:  mov    %eax,(%esp)
081281d9 +0x087:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
081281de +0x08c:  lea    -0x10(%ebp),%eax
081281e1 +0x08f:  mov    %eax,(%esp)
081281e4 +0x092:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081281e9 +0x097:  mov    0x10(%ebp),%edx
081281ec +0x09a:  mov    %edx,0x4(%esp)
081281f0 +0x09e:  mov    %eax,(%esp)
081281f3 +0x0a1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081281f8 +0x0a6:  lea    -0x10(%ebp),%eax
081281fb +0x0a9:  mov    %eax,(%esp)
081281fe +0x0ac:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08128203 +0x0b1:  mov    0xc(%ebp),%edx
08128206 +0x0b4:  mov    %edx,0x4(%esp)
0812820a +0x0b8:  mov    %eax,(%esp)
0812820d +0x0bb:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08128212 +0x0c0:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08128217 +0x0c5:  lea    -0x10(%ebp),%edx
0812821a +0x0c8:  mov    %edx,0x8(%esp)
0812821e +0x0cc:  movl   $0x2,0x4(%esp)
08128226 +0x0d4:  mov    %eax,(%esp)
08128229 +0x0d7:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0812822e +0x0dc:  jmp    0812824b <+0xf9>
08128230 +0x0de:  mov    %edx,%ebx
08128232 +0x0e0:  mov    %eax,%esi
08128234 +0x0e2:  lea    -0x10(%ebp),%eax
08128237 +0x0e5:  mov    %eax,(%esp)
0812823a +0x0e8:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0812823f +0x0ed:  mov    %esi,%eax
08128241 +0x0ef:  mov    %ebx,%edx
08128243 +0x0f1:  mov    %eax,(%esp)
08128246 +0x0f4:  call   08ae3750 <_Unwind_Resume>
0812824b +0x0f9:  lea    -0x10(%ebp),%eax
0812824e +0x0fc:  mov    %eax,(%esp)
08128251 +0x0ff:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08128256 +0x104:  add    $0x20,%esp
08128259 +0x107:  pop    %ebx
0812825a +0x108:  pop    %esi
0812825b +0x109:  pop    %ebp
0812825c +0x10a:  ret
0812825d +0x10b:  nop
```

## 反编译 C

```c
// CLocalChina_DB_LastDay_BreakAway::makeRequest @ 0x8128152

/* CLocalChina_DB_LastDay_BreakAway::makeRequest(unsigned int, int, int) */

void CLocalChina_DB_LastDay_BreakAway::makeRequest(uint param_1,int param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"localchina/localchina_DBThread.cpp",0x438)
  ;
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 081281a4 to 0812822d has its CatchHandler @ 08128230 */
  CStreamGuard::operator<<(pCVar2,0x2de);
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

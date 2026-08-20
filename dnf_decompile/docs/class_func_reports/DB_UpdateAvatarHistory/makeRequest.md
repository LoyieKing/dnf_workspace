# makeRequest

`_ZN22DB_UpdateAvatarHistory11makeRequestEjiPc`

`DB_UpdateAvatarHistory::makeRequest(unsigned int, int, char*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateAvatarHistory` | `0x0844536a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844536a  _ZN22DB_UpdateAvatarHistory11makeRequestEjiPc
#           DB_UpdateAvatarHistory::makeRequest(unsigned int, int, char*)
# range [0x0844536a, 0x0844547d]
0844536a +0x000:  push   %ebp
0844536b +0x001:  mov    %esp,%ebp
0844536d +0x003:  push   %esi
0844536e +0x004:  push   %ebx
0844536f +0x005:  sub    $0x20,%esp
08445372 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08445377 +0x00d:  movl   $0xac3b,0x8(%esp)
0844537f +0x015:  movl   $"DBThread.cpp",0x4(%esp)
08445387 +0x01d:  mov    %eax,(%esp)
0844538a +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0844538f +0x025:  movl   $0x1,0x8(%esp)
08445397 +0x02d:  mov    %eax,0x4(%esp)
0844539b +0x031:  lea    -0x10(%ebp),%eax
0844539e +0x034:  mov    %eax,(%esp)
084453a1 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084453a6 +0x03c:  lea    -0x10(%ebp),%eax
084453a9 +0x03f:  mov    %eax,(%esp)
084453ac +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084453b1 +0x047:  movl   $0x2b0,0x4(%esp)
084453b9 +0x04f:  mov    %eax,(%esp)
084453bc +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084453c1 +0x057:  lea    -0x10(%ebp),%eax
084453c4 +0x05a:  mov    %eax,(%esp)
084453c7 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084453cc +0x062:  movl   $0xffffffff,0x4(%esp)
084453d4 +0x06a:  mov    %eax,(%esp)
084453d7 +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084453dc +0x072:  lea    -0x10(%ebp),%eax
084453df +0x075:  mov    %eax,(%esp)
084453e2 +0x078:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084453e7 +0x07d:  mov    0x8(%ebp),%edx
084453ea +0x080:  mov    %edx,0x4(%esp)
084453ee +0x084:  mov    %eax,(%esp)
084453f1 +0x087:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
084453f6 +0x08c:  lea    -0x10(%ebp),%eax
084453f9 +0x08f:  mov    %eax,(%esp)
084453fc +0x092:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08445401 +0x097:  mov    0xc(%ebp),%edx
08445404 +0x09a:  mov    %edx,0x4(%esp)
08445408 +0x09e:  mov    %eax,(%esp)
0844540b +0x0a1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08445410 +0x0a6:  lea    -0x10(%ebp),%eax
08445413 +0x0a9:  mov    %eax,(%esp)
08445416 +0x0ac:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0844541b +0x0b1:  movl   $0x18,0x8(%esp)
08445423 +0x0b9:  mov    0x10(%ebp),%edx
08445426 +0x0bc:  mov    %edx,0x4(%esp)
0844542a +0x0c0:  mov    %eax,(%esp)
0844542d +0x0c3:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08445432 +0x0c8:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08445437 +0x0cd:  lea    -0x10(%ebp),%edx
0844543a +0x0d0:  mov    %edx,0x8(%esp)
0844543e +0x0d4:  movl   $0x2,0x4(%esp)
08445446 +0x0dc:  mov    %eax,(%esp)
08445449 +0x0df:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0844544e +0x0e4:  jmp    0844546b <+0x101>
08445450 +0x0e6:  mov    %edx,%ebx
08445452 +0x0e8:  mov    %eax,%esi
08445454 +0x0ea:  lea    -0x10(%ebp),%eax
08445457 +0x0ed:  mov    %eax,(%esp)
0844545a +0x0f0:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844545f +0x0f5:  mov    %esi,%eax
08445461 +0x0f7:  mov    %ebx,%edx
08445463 +0x0f9:  mov    %eax,(%esp)
08445466 +0x0fc:  call   08ae3750 <_Unwind_Resume>
0844546b +0x101:  lea    -0x10(%ebp),%eax
0844546e +0x104:  mov    %eax,(%esp)
08445471 +0x107:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08445476 +0x10c:  add    $0x20,%esp
08445479 +0x10f:  pop    %ebx
0844547a +0x110:  pop    %esi
0844547b +0x111:  pop    %ebp
0844547c +0x112:  ret
0844547d +0x113:  nop
```

## 反编译 C

```c
// DB_UpdateAvatarHistory::makeRequest @ 0x844536a

/* DB_UpdateAvatarHistory::makeRequest(unsigned int, int, char*) */

void DB_UpdateAvatarHistory::makeRequest(uint param_1,int param_2,char *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xac3b);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 084453bc to 0844544d has its CatchHandler @ 08445450 */
  CStreamGuard::operator<<(pCVar2,0x2b0);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar2,param_3,0x18);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```

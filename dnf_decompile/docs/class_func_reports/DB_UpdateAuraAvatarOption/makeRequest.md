# makeRequest

`_ZN25DB_UpdateAuraAvatarOption11makeRequestEijii`

`DB_UpdateAuraAvatarOption::makeRequest(int, unsigned int, int, int)`

| 类 | 地址 |
|---|---|
| `DB_UpdateAuraAvatarOption` | `0x08444f26` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08444f26  _ZN25DB_UpdateAuraAvatarOption11makeRequestEijii
#           DB_UpdateAuraAvatarOption::makeRequest(int, unsigned int, int, int)
# range [0x08444f26, 0x08445031]
08444f26 +0x000:  push   %ebp
08444f27 +0x001:  mov    %esp,%ebp
08444f29 +0x003:  push   %esi
08444f2a +0x004:  push   %ebx
08444f2b +0x005:  sub    $0x20,%esp
08444f2e +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08444f33 +0x00d:  movl   $0xabf6,0x8(%esp)
08444f3b +0x015:  movl   $"DBThread.cpp",0x4(%esp)
08444f43 +0x01d:  mov    %eax,(%esp)
08444f46 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08444f4b +0x025:  movl   $0x1,0x8(%esp)
08444f53 +0x02d:  mov    %eax,0x4(%esp)
08444f57 +0x031:  lea    -0x10(%ebp),%eax
08444f5a +0x034:  mov    %eax,(%esp)
08444f5d +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08444f62 +0x03c:  lea    -0x10(%ebp),%eax
08444f65 +0x03f:  mov    %eax,(%esp)
08444f68 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08444f6d +0x047:  movl   $0x2af,0x4(%esp)
08444f75 +0x04f:  mov    %eax,(%esp)
08444f78 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08444f7d +0x057:  lea    -0x10(%ebp),%eax
08444f80 +0x05a:  mov    %eax,(%esp)
08444f83 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08444f88 +0x062:  movl   $0xffffffff,0x4(%esp)
08444f90 +0x06a:  mov    %eax,(%esp)
08444f93 +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08444f98 +0x072:  lea    -0x10(%ebp),%eax
08444f9b +0x075:  mov    %eax,(%esp)
08444f9e +0x078:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08444fa3 +0x07d:  mov    0xc(%ebp),%edx
08444fa6 +0x080:  mov    %edx,0x4(%esp)
08444faa +0x084:  mov    %eax,(%esp)
08444fad +0x087:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08444fb2 +0x08c:  lea    -0x10(%ebp),%eax
08444fb5 +0x08f:  mov    %eax,(%esp)
08444fb8 +0x092:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08444fbd +0x097:  mov    0x10(%ebp),%edx
08444fc0 +0x09a:  mov    %edx,0x4(%esp)
08444fc4 +0x09e:  mov    %eax,(%esp)
08444fc7 +0x0a1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08444fcc +0x0a6:  lea    -0x10(%ebp),%eax
08444fcf +0x0a9:  mov    %eax,(%esp)
08444fd2 +0x0ac:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08444fd7 +0x0b1:  mov    0x14(%ebp),%edx
08444fda +0x0b4:  mov    %edx,0x4(%esp)
08444fde +0x0b8:  mov    %eax,(%esp)
08444fe1 +0x0bb:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08444fe6 +0x0c0:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08444feb +0x0c5:  lea    -0x10(%ebp),%edx
08444fee +0x0c8:  mov    %edx,0x8(%esp)
08444ff2 +0x0cc:  movl   $0x2,0x4(%esp)
08444ffa +0x0d4:  mov    %eax,(%esp)
08444ffd +0x0d7:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08445002 +0x0dc:  jmp    0844501f <+0xf9>
08445004 +0x0de:  mov    %edx,%ebx
08445006 +0x0e0:  mov    %eax,%esi
08445008 +0x0e2:  lea    -0x10(%ebp),%eax
0844500b +0x0e5:  mov    %eax,(%esp)
0844500e +0x0e8:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08445013 +0x0ed:  mov    %esi,%eax
08445015 +0x0ef:  mov    %ebx,%edx
08445017 +0x0f1:  mov    %eax,(%esp)
0844501a +0x0f4:  call   08ae3750 <_Unwind_Resume>
0844501f +0x0f9:  lea    -0x10(%ebp),%eax
08445022 +0x0fc:  mov    %eax,(%esp)
08445025 +0x0ff:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844502a +0x104:  add    $0x20,%esp
0844502d +0x107:  pop    %ebx
0844502e +0x108:  pop    %esi
0844502f +0x109:  pop    %ebp
08445030 +0x10a:  ret
08445031 +0x10b:  nop
```

## 反编译 C

```c
// DB_UpdateAuraAvatarOption::makeRequest @ 0x8444f26

/* DB_UpdateAuraAvatarOption::makeRequest(int, unsigned int, int, int) */

void DB_UpdateAuraAvatarOption::makeRequest(int param_1,uint param_2,int param_3,int param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xabf6);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08444f78 to 08445001 has its CatchHandler @ 08445004 */
  CStreamGuard::operator<<(pCVar2,0x2af);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
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

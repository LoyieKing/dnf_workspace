# makeRequest

`_ZN22DB_LoadBloodBestRecord11makeRequestEij`

`DB_LoadBloodBestRecord::makeRequest(int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_LoadBloodBestRecord` | `0x084318c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084318c4  _ZN22DB_LoadBloodBestRecord11makeRequestEij
#           DB_LoadBloodBestRecord::makeRequest(int, unsigned int)
# range [0x084318c4, 0x08431999]
084318c4 +0x00:  push   %ebp
084318c5 +0x01:  mov    %esp,%ebp
084318c7 +0x03:  push   %esi
084318c8 +0x04:  push   %ebx
084318c9 +0x05:  sub    $0x20,%esp
084318cc +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084318d1 +0x0d:  movl   $0x78c6,0x8(%esp)
084318d9 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
084318e1 +0x1d:  mov    %eax,(%esp)
084318e4 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084318e9 +0x25:  movl   $0x1,0x8(%esp)
084318f1 +0x2d:  mov    %eax,0x4(%esp)
084318f5 +0x31:  lea    -0x10(%ebp),%eax
084318f8 +0x34:  mov    %eax,(%esp)
084318fb +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08431900 +0x3c:  lea    -0x10(%ebp),%eax
08431903 +0x3f:  mov    %eax,(%esp)
08431906 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843190b +0x47:  movl   $0x13f,0x4(%esp)
08431913 +0x4f:  mov    %eax,(%esp)
08431916 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843191b +0x57:  lea    -0x10(%ebp),%eax
0843191e +0x5a:  mov    %eax,(%esp)
08431921 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08431926 +0x62:  mov    0x8(%ebp),%edx
08431929 +0x65:  mov    %edx,0x4(%esp)
0843192d +0x69:  mov    %eax,(%esp)
08431930 +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08431935 +0x71:  lea    -0x10(%ebp),%eax
08431938 +0x74:  mov    %eax,(%esp)
0843193b +0x77:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08431940 +0x7c:  mov    0xc(%ebp),%edx
08431943 +0x7f:  mov    %edx,0x4(%esp)
08431947 +0x83:  mov    %eax,(%esp)
0843194a +0x86:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0843194f +0x8b:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08431954 +0x90:  lea    -0x10(%ebp),%edx
08431957 +0x93:  mov    %edx,0x8(%esp)
0843195b +0x97:  movl   $0x2,0x4(%esp)
08431963 +0x9f:  mov    %eax,(%esp)
08431966 +0xa2:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843196b +0xa7:  jmp    08431988 <+0xc4>
0843196d +0xa9:  mov    %edx,%ebx
0843196f +0xab:  mov    %eax,%esi
08431971 +0xad:  lea    -0x10(%ebp),%eax
08431974 +0xb0:  mov    %eax,(%esp)
08431977 +0xb3:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843197c +0xb8:  mov    %esi,%eax
0843197e +0xba:  mov    %ebx,%edx
08431980 +0xbc:  mov    %eax,(%esp)
08431983 +0xbf:  call   08ae3750 <_Unwind_Resume>
08431988 +0xc4:  lea    -0x10(%ebp),%eax
0843198b +0xc7:  mov    %eax,(%esp)
0843198e +0xca:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08431993 +0xcf:  add    $0x20,%esp
08431996 +0xd2:  pop    %ebx
08431997 +0xd3:  pop    %esi
08431998 +0xd4:  pop    %ebp
08431999 +0xd5:  ret
```

## 反编译 C

```c
// DB_LoadBloodBestRecord::makeRequest @ 0x84318c4

/* DB_LoadBloodBestRecord::makeRequest(int, unsigned int) */

void DB_LoadBloodBestRecord::makeRequest(int param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x78c6);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08431916 to 0843196a has its CatchHandler @ 0843196d */
  CStreamGuard::operator<<(pCVar2,0x13f);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```

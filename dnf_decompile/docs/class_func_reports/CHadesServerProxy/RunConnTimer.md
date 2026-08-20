# RunConnTimer

`_ZN17CHadesServerProxy12RunConnTimerEv`

`CHadesServerProxy::RunConnTimer()`

| 类 | 地址 |
|---|---|
| `CHadesServerProxy` | `0x084707ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084707ca  _ZN17CHadesServerProxy12RunConnTimerEv
#           CHadesServerProxy::RunConnTimer()
# range [0x084707ca, 0x08470886]
084707ca +0x00:  push   %ebp
084707cb +0x01:  mov    %esp,%ebp
084707cd +0x03:  push   %esi
084707ce +0x04:  push   %ebx
084707cf +0x05:  sub    $0x20,%esp
084707d2 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084707d7 +0x0d:  movl   $0x119,0x8(%esp)
084707df +0x15:  movl   $"DF_HadesServerProxy.cpp",0x4(%esp)
084707e7 +0x1d:  mov    %eax,(%esp)
084707ea +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084707ef +0x25:  movl   $0x1,0x8(%esp)
084707f7 +0x2d:  mov    %eax,0x4(%esp)
084707fb +0x31:  lea    -0x10(%ebp),%eax
084707fe +0x34:  mov    %eax,(%esp)
08470801 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08470806 +0x3c:  lea    -0x10(%ebp),%eax
08470809 +0x3f:  mov    %eax,(%esp)
0847080c +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08470811 +0x47:  movl   $0x23a,0x4(%esp)
08470819 +0x4f:  mov    %eax,(%esp)
0847081c +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08470821 +0x57:  lea    -0x10(%ebp),%eax
08470824 +0x5a:  mov    %eax,(%esp)
08470827 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847082c +0x62:  movl   $0xffffffff,0x4(%esp)
08470834 +0x6a:  mov    %eax,(%esp)
08470837 +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847083c +0x72:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08470841 +0x77:  lea    -0x10(%ebp),%edx
08470844 +0x7a:  mov    %edx,0x8(%esp)
08470848 +0x7e:  movl   $0x1,0x4(%esp)
08470850 +0x86:  mov    %eax,(%esp)
08470853 +0x89:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08470858 +0x8e:  jmp    08470875 <+0xab>
0847085a +0x90:  mov    %edx,%ebx
0847085c +0x92:  mov    %eax,%esi
0847085e +0x94:  lea    -0x10(%ebp),%eax
08470861 +0x97:  mov    %eax,(%esp)
08470864 +0x9a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08470869 +0x9f:  mov    %esi,%eax
0847086b +0xa1:  mov    %ebx,%edx
0847086d +0xa3:  mov    %eax,(%esp)
08470870 +0xa6:  call   08ae3750 <_Unwind_Resume>
08470875 +0xab:  lea    -0x10(%ebp),%eax
08470878 +0xae:  mov    %eax,(%esp)
0847087b +0xb1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08470880 +0xb6:  add    $0x20,%esp
08470883 +0xb9:  pop    %ebx
08470884 +0xba:  pop    %esi
08470885 +0xbb:  pop    %ebp
08470886 +0xbc:  ret
```

## 反编译 C

```c
// CHadesServerProxy::RunConnTimer @ 0x84707ca

/* CHadesServerProxy::RunConnTimer() */

void CHadesServerProxy::RunConnTimer(void)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DF_HadesServerProxy.cpp",0x119);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0847081c to 08470857 has its CatchHandler @ 0847085a */
  CStreamGuard::operator<<(pCVar2,0x23a);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```

# SendClientCrashDownLogToLogDB

`_ZN5CUser29SendClientCrashDownLogToLogDBEi`

`CUser::SendClientCrashDownLogToLogDB(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864870e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864870e  _ZN5CUser29SendClientCrashDownLogToLogDBEi
#           CUser::SendClientCrashDownLogToLogDB(int)
# range [0x0864870e, 0x086487e5]
0864870e +0x00:  push   %ebp
0864870f +0x01:  mov    %esp,%ebp
08648711 +0x03:  push   %esi
08648712 +0x04:  push   %ebx
08648713 +0x05:  sub    $0x20,%esp
08648716 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0864871b +0x0d:  movl   $0x8ac,0x8(%esp)
08648723 +0x15:  movl   $"user.cpp",0x4(%esp)
0864872b +0x1d:  mov    %eax,(%esp)
0864872e +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08648733 +0x25:  movl   $0x1,0x8(%esp)
0864873b +0x2d:  mov    %eax,0x4(%esp)
0864873f +0x31:  lea    -0x10(%ebp),%eax
08648742 +0x34:  mov    %eax,(%esp)
08648745 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0864874a +0x3c:  lea    -0x10(%ebp),%eax
0864874d +0x3f:  mov    %eax,(%esp)
08648750 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08648755 +0x47:  movl   $0xcc,0x4(%esp)
0864875d +0x4f:  mov    %eax,(%esp)
08648760 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08648765 +0x57:  lea    -0x10(%ebp),%eax
08648768 +0x5a:  mov    %eax,(%esp)
0864876b +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08648770 +0x62:  movl   $0xffffffff,0x4(%esp)
08648778 +0x6a:  mov    %eax,(%esp)
0864877b +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08648780 +0x72:  lea    -0x10(%ebp),%eax
08648783 +0x75:  mov    %eax,(%esp)
08648786 +0x78:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0864878b +0x7d:  mov    0xc(%ebp),%edx
0864878e +0x80:  mov    %edx,0x4(%esp)
08648792 +0x84:  mov    %eax,(%esp)
08648795 +0x87:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0864879a +0x8c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0864879f +0x91:  lea    -0x10(%ebp),%edx
086487a2 +0x94:  mov    %edx,0x8(%esp)
086487a6 +0x98:  movl   $0x4,0x4(%esp)
086487ae +0xa0:  mov    %eax,(%esp)
086487b1 +0xa3:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
086487b6 +0xa8:  mov    $0x1,%ebx
086487bb +0xad:  lea    -0x10(%ebp),%eax
086487be +0xb0:  mov    %eax,(%esp)
086487c1 +0xb3:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086487c6 +0xb8:  mov    %ebx,%eax
086487c8 +0xba:  add    $0x20,%esp
086487cb +0xbd:  pop    %ebx
086487cc +0xbe:  pop    %esi
086487cd +0xbf:  pop    %ebp
086487ce +0xc0:  ret
086487cf +0xc1:  mov    %edx,%ebx
086487d1 +0xc3:  mov    %eax,%esi
086487d3 +0xc5:  lea    -0x10(%ebp),%eax
086487d6 +0xc8:  mov    %eax,(%esp)
086487d9 +0xcb:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086487de +0xd0:  mov    %esi,%eax
086487e0 +0xd2:  mov    %ebx,%edx
086487e2 +0xd4:  mov    %eax,(%esp)
086487e5 +0xd7:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CUser::SendClientCrashDownLogToLogDB @ 0x864870e

/* CUser::SendClientCrashDownLogToLogDB(int) */

undefined4 __thiscall CUser::SendClientCrashDownLogToLogDB(CUser *this,int param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0x8ac);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08648760 to 086487b5 has its CatchHandler @ 086487cf */
  CStreamGuard::operator<<(pCVar2,0xcc);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}
```

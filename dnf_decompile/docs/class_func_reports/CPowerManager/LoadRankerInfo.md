# LoadRankerInfo

`_ZN13CPowerManager14LoadRankerInfoEv`

`CPowerManager::LoadRankerInfo()`

| 类 | 地址 |
|---|---|
| `CPowerManager` | `0x0847f4fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0847f4fe  _ZN13CPowerManager14LoadRankerInfoEv
#           CPowerManager::LoadRankerInfo()
# range [0x0847f4fe, 0x0847f5dd]
0847f4fe +0x00:  push   %ebp
0847f4ff +0x01:  mov    %esp,%ebp
0847f501 +0x03:  push   %esi
0847f502 +0x04:  push   %ebx
0847f503 +0x05:  sub    $0x20,%esp
0847f506 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847f50b +0x0d:  movl   $0x12e,0x8(%esp)
0847f513 +0x15:  movl   $"DNF_PowerManager.cpp",0x4(%esp)
0847f51b +0x1d:  mov    %eax,(%esp)
0847f51e +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847f523 +0x25:  movl   $0x1,0x8(%esp)
0847f52b +0x2d:  mov    %eax,0x4(%esp)
0847f52f +0x31:  lea    -0x10(%ebp),%eax
0847f532 +0x34:  mov    %eax,(%esp)
0847f535 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847f53a +0x3c:  lea    -0x10(%ebp),%eax
0847f53d +0x3f:  mov    %eax,(%esp)
0847f540 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847f545 +0x47:  movl   $0x165,0x4(%esp)
0847f54d +0x4f:  mov    %eax,(%esp)
0847f550 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847f555 +0x57:  lea    -0x10(%ebp),%eax
0847f558 +0x5a:  mov    %eax,(%esp)
0847f55b +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847f560 +0x62:  movl   $0xffffffff,0x4(%esp)
0847f568 +0x6a:  mov    %eax,(%esp)
0847f56b +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847f570 +0x72:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0847f575 +0x77:  mov    0x378(%eax),%ebx
0847f57b +0x7d:  lea    -0x10(%ebp),%eax
0847f57e +0x80:  mov    %eax,(%esp)
0847f581 +0x83:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847f586 +0x88:  mov    %ebx,0x4(%esp)
0847f58a +0x8c:  mov    %eax,(%esp)
0847f58d +0x8f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847f592 +0x94:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847f597 +0x99:  lea    -0x10(%ebp),%edx
0847f59a +0x9c:  mov    %edx,0x8(%esp)
0847f59e +0xa0:  movl   $0x2,0x4(%esp)
0847f5a6 +0xa8:  mov    %eax,(%esp)
0847f5a9 +0xab:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847f5ae +0xb0:  jmp    0847f5cb <+0xcd>
0847f5b0 +0xb2:  mov    %edx,%ebx
0847f5b2 +0xb4:  mov    %eax,%esi
0847f5b4 +0xb6:  lea    -0x10(%ebp),%eax
0847f5b7 +0xb9:  mov    %eax,(%esp)
0847f5ba +0xbc:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847f5bf +0xc1:  mov    %esi,%eax
0847f5c1 +0xc3:  mov    %ebx,%edx
0847f5c3 +0xc5:  mov    %eax,(%esp)
0847f5c6 +0xc8:  call   08ae3750 <_Unwind_Resume>
0847f5cb +0xcd:  lea    -0x10(%ebp),%eax
0847f5ce +0xd0:  mov    %eax,(%esp)
0847f5d1 +0xd3:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847f5d6 +0xd8:  add    $0x20,%esp
0847f5d9 +0xdb:  pop    %ebx
0847f5da +0xdc:  pop    %esi
0847f5db +0xdd:  pop    %ebp
0847f5dc +0xde:  ret
0847f5dd +0xdf:  nop
```

## 反编译 C

```c
// CPowerManager::LoadRankerInfo @ 0x847f4fe

/* CPowerManager::LoadRankerInfo() */

void CPowerManager::LoadRankerInfo(void)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DNF_PowerManager.cpp",0x12e);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0847f550 to 0847f5ad has its CatchHandler @ 0847f5b0 */
  CStreamGuard::operator<<(pCVar2,0x165);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  iVar3 = G_CEnvironment();
  iVar3 = *(int *)(iVar3 + 0x378);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,iVar3);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```

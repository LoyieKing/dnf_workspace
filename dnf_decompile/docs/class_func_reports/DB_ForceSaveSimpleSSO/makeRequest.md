# makeRequest

`_ZN21DB_ForceSaveSimpleSSO11makeRequestEji`

`DB_ForceSaveSimpleSSO::makeRequest(unsigned int, int)`

| 类 | 地址 |
|---|---|
| `DB_ForceSaveSimpleSSO` | `0x084281ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084281ae  _ZN21DB_ForceSaveSimpleSSO11makeRequestEji
#           DB_ForceSaveSimpleSSO::makeRequest(unsigned int, int)
# range [0x084281ae, 0x0842829f]
084281ae +0x00:  push   %ebp
084281af +0x01:  mov    %esp,%ebp
084281b1 +0x03:  push   %esi
084281b2 +0x04:  push   %ebx
084281b3 +0x05:  sub    $0x20,%esp
084281b6 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084281bb +0x0d:  movl   $0x69b1,0x8(%esp)
084281c3 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
084281cb +0x1d:  mov    %eax,(%esp)
084281ce +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084281d3 +0x25:  movl   $0x1,0x8(%esp)
084281db +0x2d:  mov    %eax,0x4(%esp)
084281df +0x31:  lea    -0x10(%ebp),%eax
084281e2 +0x34:  mov    %eax,(%esp)
084281e5 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084281ea +0x3c:  lea    -0x10(%ebp),%eax
084281ed +0x3f:  mov    %eax,(%esp)
084281f0 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084281f5 +0x47:  movl   $0xcf,0x4(%esp)
084281fd +0x4f:  mov    %eax,(%esp)
08428200 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08428205 +0x57:  lea    -0x10(%ebp),%eax
08428208 +0x5a:  mov    %eax,(%esp)
0842820b +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08428210 +0x62:  movl   $0xffffffff,0x4(%esp)
08428218 +0x6a:  mov    %eax,(%esp)
0842821b +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08428220 +0x72:  lea    -0x10(%ebp),%eax
08428223 +0x75:  mov    %eax,(%esp)
08428226 +0x78:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842822b +0x7d:  mov    0x8(%ebp),%edx
0842822e +0x80:  mov    %edx,0x4(%esp)
08428232 +0x84:  mov    %eax,(%esp)
08428235 +0x87:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0842823a +0x8c:  lea    -0x10(%ebp),%eax
0842823d +0x8f:  mov    %eax,(%esp)
08428240 +0x92:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08428245 +0x97:  mov    0xc(%ebp),%edx
08428248 +0x9a:  mov    %edx,0x4(%esp)
0842824c +0x9e:  mov    %eax,(%esp)
0842824f +0xa1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08428254 +0xa6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08428259 +0xab:  lea    -0x10(%ebp),%edx
0842825c +0xae:  mov    %edx,0x8(%esp)
08428260 +0xb2:  movl   $0x2,0x4(%esp)
08428268 +0xba:  mov    %eax,(%esp)
0842826b +0xbd:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08428270 +0xc2:  jmp    0842828d <+0xdf>
08428272 +0xc4:  mov    %edx,%ebx
08428274 +0xc6:  mov    %eax,%esi
08428276 +0xc8:  lea    -0x10(%ebp),%eax
08428279 +0xcb:  mov    %eax,(%esp)
0842827c +0xce:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08428281 +0xd3:  mov    %esi,%eax
08428283 +0xd5:  mov    %ebx,%edx
08428285 +0xd7:  mov    %eax,(%esp)
08428288 +0xda:  call   08ae3750 <_Unwind_Resume>
0842828d +0xdf:  lea    -0x10(%ebp),%eax
08428290 +0xe2:  mov    %eax,(%esp)
08428293 +0xe5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08428298 +0xea:  add    $0x20,%esp
0842829b +0xed:  pop    %ebx
0842829c +0xee:  pop    %esi
0842829d +0xef:  pop    %ebp
0842829e +0xf0:  ret
0842829f +0xf1:  nop
```

## 反编译 C

```c
// DB_ForceSaveSimpleSSO::makeRequest @ 0x84281ae

/* DB_ForceSaveSimpleSSO::makeRequest(unsigned int, int) */

void DB_ForceSaveSimpleSSO::makeRequest(uint param_1,int param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x69b1);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08428200 to 0842826f has its CatchHandler @ 08428272 */
  CStreamGuard::operator<<(pCVar2,0xcf);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```

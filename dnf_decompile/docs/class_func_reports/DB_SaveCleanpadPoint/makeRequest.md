# makeRequest

`_ZN20DB_SaveCleanpadPoint11makeRequestEji`

`DB_SaveCleanpadPoint::makeRequest(unsigned int, int)`

| 类 | 地址 |
|---|---|
| `DB_SaveCleanpadPoint` | `0x08432fe2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08432fe2  _ZN20DB_SaveCleanpadPoint11makeRequestEji
#           DB_SaveCleanpadPoint::makeRequest(unsigned int, int)
# range [0x08432fe2, 0x084330d3]
08432fe2 +0x00:  push   %ebp
08432fe3 +0x01:  mov    %esp,%ebp
08432fe5 +0x03:  push   %esi
08432fe6 +0x04:  push   %ebx
08432fe7 +0x05:  sub    $0x20,%esp
08432fea +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08432fef +0x0d:  movl   $0x7aaa,0x8(%esp)
08432ff7 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
08432fff +0x1d:  mov    %eax,(%esp)
08433002 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08433007 +0x25:  movl   $0x1,0x8(%esp)
0843300f +0x2d:  mov    %eax,0x4(%esp)
08433013 +0x31:  lea    -0x10(%ebp),%eax
08433016 +0x34:  mov    %eax,(%esp)
08433019 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843301e +0x3c:  lea    -0x10(%ebp),%eax
08433021 +0x3f:  mov    %eax,(%esp)
08433024 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08433029 +0x47:  movl   $0x154,0x4(%esp)
08433031 +0x4f:  mov    %eax,(%esp)
08433034 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08433039 +0x57:  lea    -0x10(%ebp),%eax
0843303c +0x5a:  mov    %eax,(%esp)
0843303f +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08433044 +0x62:  movl   $0xffffffff,0x4(%esp)
0843304c +0x6a:  mov    %eax,(%esp)
0843304f +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08433054 +0x72:  lea    -0x10(%ebp),%eax
08433057 +0x75:  mov    %eax,(%esp)
0843305a +0x78:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843305f +0x7d:  mov    0x8(%ebp),%edx
08433062 +0x80:  mov    %edx,0x4(%esp)
08433066 +0x84:  mov    %eax,(%esp)
08433069 +0x87:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0843306e +0x8c:  lea    -0x10(%ebp),%eax
08433071 +0x8f:  mov    %eax,(%esp)
08433074 +0x92:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08433079 +0x97:  mov    0xc(%ebp),%edx
0843307c +0x9a:  mov    %edx,0x4(%esp)
08433080 +0x9e:  mov    %eax,(%esp)
08433083 +0xa1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08433088 +0xa6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843308d +0xab:  lea    -0x10(%ebp),%edx
08433090 +0xae:  mov    %edx,0x8(%esp)
08433094 +0xb2:  movl   $0x2,0x4(%esp)
0843309c +0xba:  mov    %eax,(%esp)
0843309f +0xbd:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084330a4 +0xc2:  jmp    084330c1 <+0xdf>
084330a6 +0xc4:  mov    %edx,%ebx
084330a8 +0xc6:  mov    %eax,%esi
084330aa +0xc8:  lea    -0x10(%ebp),%eax
084330ad +0xcb:  mov    %eax,(%esp)
084330b0 +0xce:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084330b5 +0xd3:  mov    %esi,%eax
084330b7 +0xd5:  mov    %ebx,%edx
084330b9 +0xd7:  mov    %eax,(%esp)
084330bc +0xda:  call   08ae3750 <_Unwind_Resume>
084330c1 +0xdf:  lea    -0x10(%ebp),%eax
084330c4 +0xe2:  mov    %eax,(%esp)
084330c7 +0xe5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084330cc +0xea:  add    $0x20,%esp
084330cf +0xed:  pop    %ebx
084330d0 +0xee:  pop    %esi
084330d1 +0xef:  pop    %ebp
084330d2 +0xf0:  ret
084330d3 +0xf1:  nop
```

## 反编译 C

```c
// DB_SaveCleanpadPoint::makeRequest @ 0x8432fe2

/* DB_SaveCleanpadPoint::makeRequest(unsigned int, int) */

void DB_SaveCleanpadPoint::makeRequest(uint param_1,int param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7aaa);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08433034 to 084330a3 has its CatchHandler @ 084330a6 */
  CStreamGuard::operator<<(pCVar2,0x154);
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

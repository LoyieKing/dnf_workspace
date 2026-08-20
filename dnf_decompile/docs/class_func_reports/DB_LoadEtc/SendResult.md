# SendResult

`_ZN10DB_LoadEtc10SendResultEiiP12SIG_LOAD_ETC`

`DB_LoadEtc::SendResult(int, int, SIG_LOAD_ETC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x08408766` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08408766  _ZN10DB_LoadEtc10SendResultEiiP12SIG_LOAD_ETC
#           DB_LoadEtc::SendResult(int, int, SIG_LOAD_ETC*)
# range [0x08408766, 0x08408843]
08408766 +0x00:  push   %ebp
08408767 +0x01:  mov    %esp,%ebp
08408769 +0x03:  push   %esi
0840876a +0x04:  push   %ebx
0840876b +0x05:  sub    $0x20,%esp
0840876e +0x08:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
08408773 +0x0d:  movl   $0x1f92,0x8(%esp)
0840877b +0x15:  movl   $"DBThread.cpp",0x4(%esp)
08408783 +0x1d:  mov    %eax,(%esp)
08408786 +0x20:  call   08290262 <_ZN13BigStreamPool7AcquireEPKci>  ; BigStreamPool::Acquire(char const*, int)
0840878b +0x25:  movl   $0x1,0x8(%esp)
08408793 +0x2d:  mov    %eax,0x4(%esp)
08408797 +0x31:  lea    -0x10(%ebp),%eax
0840879a +0x34:  mov    %eax,(%esp)
0840879d +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084087a2 +0x3c:  lea    -0x10(%ebp),%eax
084087a5 +0x3f:  mov    %eax,(%esp)
084087a8 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084087ad +0x47:  mov    0xc(%ebp),%edx
084087b0 +0x4a:  mov    %edx,0x4(%esp)
084087b4 +0x4e:  mov    %eax,(%esp)
084087b7 +0x51:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084087bc +0x56:  lea    -0x10(%ebp),%eax
084087bf +0x59:  mov    %eax,(%esp)
084087c2 +0x5c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084087c7 +0x61:  mov    0x10(%ebp),%edx
084087ca +0x64:  mov    %edx,0x4(%esp)
084087ce +0x68:  mov    %eax,(%esp)
084087d1 +0x6b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084087d6 +0x70:  lea    -0x10(%ebp),%eax
084087d9 +0x73:  mov    %eax,(%esp)
084087dc +0x76:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084087e1 +0x7b:  movl   $&_ZL14gUnicodeBuffer+0xa634,0x8(%esp)
084087e9 +0x83:  mov    0x14(%ebp),%edx
084087ec +0x86:  mov    %edx,0x4(%esp)
084087f0 +0x8a:  mov    %eax,(%esp)
084087f3 +0x8d:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084087f8 +0x92:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084087fd +0x97:  lea    -0x10(%ebp),%edx
08408800 +0x9a:  mov    %edx,0x8(%esp)
08408804 +0x9e:  movl   $0x1,0x4(%esp)
0840880c +0xa6:  mov    %eax,(%esp)
0840880f +0xa9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08408814 +0xae:  mov    $0x1,%ebx
08408819 +0xb3:  lea    -0x10(%ebp),%eax
0840881c +0xb6:  mov    %eax,(%esp)
0840881f +0xb9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08408824 +0xbe:  mov    %ebx,%eax
08408826 +0xc0:  add    $0x20,%esp
08408829 +0xc3:  pop    %ebx
0840882a +0xc4:  pop    %esi
0840882b +0xc5:  pop    %ebp
0840882c +0xc6:  ret
0840882d +0xc7:  mov    %edx,%ebx
0840882f +0xc9:  mov    %eax,%esi
08408831 +0xcb:  lea    -0x10(%ebp),%eax
08408834 +0xce:  mov    %eax,(%esp)
08408837 +0xd1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0840883c +0xd6:  mov    %esi,%eax
0840883e +0xd8:  mov    %ebx,%edx
08408840 +0xda:  mov    %eax,(%esp)
08408843 +0xdd:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// DB_LoadEtc::SendResult @ 0x8408766

/* DB_LoadEtc::SendResult(int, int, SIG_LOAD_ETC*) */

undefined4 __thiscall
DB_LoadEtc::SendResult(DB_LoadEtc *this,int param_1,int param_2,SIG_LOAD_ETC *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"DBThread.cpp",0x1f92);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 084087b7 to 08408813 has its CatchHandler @ 0840882d */
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar2,param_3,0x14b60);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}
```

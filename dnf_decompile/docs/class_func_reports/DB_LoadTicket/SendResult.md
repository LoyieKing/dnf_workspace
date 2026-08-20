# SendResult

`_ZN13DB_LoadTicket10SendResultEiiP15SIG_LOAD_TICKET`

`DB_LoadTicket::SendResult(int, int, SIG_LOAD_TICKET*)`

| 类 | 地址 |
|---|---|
| `DB_LoadTicket` | `0x08419770` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08419770  _ZN13DB_LoadTicket10SendResultEiiP15SIG_LOAD_TICKET
#           DB_LoadTicket::SendResult(int, int, SIG_LOAD_TICKET*)
# range [0x08419770, 0x0841984d]
08419770 +0x00:  push   %ebp
08419771 +0x01:  mov    %esp,%ebp
08419773 +0x03:  push   %esi
08419774 +0x04:  push   %ebx
08419775 +0x05:  sub    $0x20,%esp
08419778 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0841977d +0x0d:  movl   $0x4b17,0x8(%esp)
08419785 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0841978d +0x1d:  mov    %eax,(%esp)
08419790 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08419795 +0x25:  movl   $0x1,0x8(%esp)
0841979d +0x2d:  mov    %eax,0x4(%esp)
084197a1 +0x31:  lea    -0x10(%ebp),%eax
084197a4 +0x34:  mov    %eax,(%esp)
084197a7 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084197ac +0x3c:  lea    -0x10(%ebp),%eax
084197af +0x3f:  mov    %eax,(%esp)
084197b2 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084197b7 +0x47:  mov    0xc(%ebp),%edx
084197ba +0x4a:  mov    %edx,0x4(%esp)
084197be +0x4e:  mov    %eax,(%esp)
084197c1 +0x51:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084197c6 +0x56:  lea    -0x10(%ebp),%eax
084197c9 +0x59:  mov    %eax,(%esp)
084197cc +0x5c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084197d1 +0x61:  mov    0x10(%ebp),%edx
084197d4 +0x64:  mov    %edx,0x4(%esp)
084197d8 +0x68:  mov    %eax,(%esp)
084197db +0x6b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084197e0 +0x70:  lea    -0x10(%ebp),%eax
084197e3 +0x73:  mov    %eax,(%esp)
084197e6 +0x76:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084197eb +0x7b:  movl   $0x19c,0x8(%esp)
084197f3 +0x83:  mov    0x14(%ebp),%edx
084197f6 +0x86:  mov    %edx,0x4(%esp)
084197fa +0x8a:  mov    %eax,(%esp)
084197fd +0x8d:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08419802 +0x92:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08419807 +0x97:  lea    -0x10(%ebp),%edx
0841980a +0x9a:  mov    %edx,0x8(%esp)
0841980e +0x9e:  movl   $0x1,0x4(%esp)
08419816 +0xa6:  mov    %eax,(%esp)
08419819 +0xa9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0841981e +0xae:  mov    $0x1,%ebx
08419823 +0xb3:  lea    -0x10(%ebp),%eax
08419826 +0xb6:  mov    %eax,(%esp)
08419829 +0xb9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0841982e +0xbe:  mov    %ebx,%eax
08419830 +0xc0:  add    $0x20,%esp
08419833 +0xc3:  pop    %ebx
08419834 +0xc4:  pop    %esi
08419835 +0xc5:  pop    %ebp
08419836 +0xc6:  ret
08419837 +0xc7:  mov    %edx,%ebx
08419839 +0xc9:  mov    %eax,%esi
0841983b +0xcb:  lea    -0x10(%ebp),%eax
0841983e +0xce:  mov    %eax,(%esp)
08419841 +0xd1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08419846 +0xd6:  mov    %esi,%eax
08419848 +0xd8:  mov    %ebx,%edx
0841984a +0xda:  mov    %eax,(%esp)
0841984d +0xdd:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// DB_LoadTicket::SendResult @ 0x8419770

/* DB_LoadTicket::SendResult(int, int, SIG_LOAD_TICKET*) */

undefined4 __thiscall
DB_LoadTicket::SendResult(DB_LoadTicket *this,int param_1,int param_2,SIG_LOAD_TICKET *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x4b17);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 084197c1 to 0841981d has its CatchHandler @ 08419837 */
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar2,param_3,0x19c);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}
```

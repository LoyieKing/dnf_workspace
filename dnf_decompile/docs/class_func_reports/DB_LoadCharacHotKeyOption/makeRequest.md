# makeRequest

`_ZN25DB_LoadCharacHotKeyOption11makeRequestEiji`

`DB_LoadCharacHotKeyOption::makeRequest(int, unsigned int, int)`

| 类 | 地址 |
|---|---|
| `DB_LoadCharacHotKeyOption` | `0x0842f710` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842f710  _ZN25DB_LoadCharacHotKeyOption11makeRequestEiji
#           DB_LoadCharacHotKeyOption::makeRequest(int, unsigned int, int)
# range [0x0842f710, 0x0842f7f3]
0842f710 +0x00:  push   %ebp
0842f711 +0x01:  mov    %esp,%ebp
0842f713 +0x03:  push   %esi
0842f714 +0x04:  push   %ebx
0842f715 +0x05:  sub    $0x20,%esp
0842f718 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842f71d +0x0d:  movl   $0x749a,0x8(%esp)
0842f725 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0842f72d +0x1d:  mov    %eax,(%esp)
0842f730 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842f735 +0x25:  movl   $0x1,0x8(%esp)
0842f73d +0x2d:  mov    %eax,0x4(%esp)
0842f741 +0x31:  lea    -0x14(%ebp),%eax
0842f744 +0x34:  mov    %eax,(%esp)
0842f747 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842f74c +0x3c:  lea    -0x14(%ebp),%eax
0842f74f +0x3f:  mov    %eax,(%esp)
0842f752 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842f757 +0x47:  movl   $0x320,0x4(%esp)
0842f75f +0x4f:  mov    %eax,(%esp)
0842f762 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842f767 +0x57:  lea    -0x14(%ebp),%eax
0842f76a +0x5a:  mov    %eax,(%esp)
0842f76d +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842f772 +0x62:  mov    0x8(%ebp),%edx
0842f775 +0x65:  mov    %edx,0x4(%esp)
0842f779 +0x69:  mov    %eax,(%esp)
0842f77c +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842f781 +0x71:  lea    -0x14(%ebp),%eax
0842f784 +0x74:  mov    %eax,(%esp)
0842f787 +0x77:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0842f78c +0x7c:  mov    %eax,(%esp)
0842f78f +0x7f:  call   08452b42 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5758>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5758
0842f794 +0x84:  mov    %eax,-0xc(%ebp)
0842f797 +0x87:  mov    -0xc(%ebp),%eax
0842f79a +0x8a:  mov    0xc(%ebp),%edx
0842f79d +0x8d:  mov    %edx,(%eax)
0842f79f +0x8f:  mov    -0xc(%ebp),%eax
0842f7a2 +0x92:  mov    0x10(%ebp),%edx
0842f7a5 +0x95:  mov    %edx,0x4(%eax)
0842f7a8 +0x98:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842f7ad +0x9d:  lea    -0x14(%ebp),%edx
0842f7b0 +0xa0:  mov    %edx,0x8(%esp)
0842f7b4 +0xa4:  movl   $0x2,0x4(%esp)
0842f7bc +0xac:  mov    %eax,(%esp)
0842f7bf +0xaf:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842f7c4 +0xb4:  jmp    0842f7e1 <+0xd1>
0842f7c6 +0xb6:  mov    %edx,%ebx
0842f7c8 +0xb8:  mov    %eax,%esi
0842f7ca +0xba:  lea    -0x14(%ebp),%eax
0842f7cd +0xbd:  mov    %eax,(%esp)
0842f7d0 +0xc0:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842f7d5 +0xc5:  mov    %esi,%eax
0842f7d7 +0xc7:  mov    %ebx,%edx
0842f7d9 +0xc9:  mov    %eax,(%esp)
0842f7dc +0xcc:  call   08ae3750 <_Unwind_Resume>
0842f7e1 +0xd1:  lea    -0x14(%ebp),%eax
0842f7e4 +0xd4:  mov    %eax,(%esp)
0842f7e7 +0xd7:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842f7ec +0xdc:  add    $0x20,%esp
0842f7ef +0xdf:  pop    %ebx
0842f7f0 +0xe0:  pop    %esi
0842f7f1 +0xe1:  pop    %ebp
0842f7f2 +0xe2:  ret
0842f7f3 +0xe3:  nop
```

## 反编译 C

```c
// DB_LoadCharacHotKeyOption::makeRequest @ 0x842f710

/* DB_LoadCharacHotKeyOption::makeRequest(int, unsigned int, int) */

void DB_LoadCharacHotKeyOption::makeRequest(int param_1,uint param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_REQ_LOAD_CHARAC_HOTKEY_OPTION *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x749a);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842f762 to 0842f7c3 has its CatchHandler @ 0842f7c6 */
  CStreamGuard::operator<<(pCVar2,800);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_REQ_LOAD_CHARAC_HOTKEY_OPTION>(pCVar2);
  *(uint *)local_10 = param_2;
  *(int *)(local_10 + 4) = param_3;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```

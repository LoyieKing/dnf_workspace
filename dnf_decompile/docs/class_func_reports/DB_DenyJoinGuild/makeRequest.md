# makeRequest

`_ZN16DB_DenyJoinGuild11makeRequestEijj`

`DB_DenyJoinGuild::makeRequest(int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_DenyJoinGuild` | `0x0843df0e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843df0e  _ZN16DB_DenyJoinGuild11makeRequestEijj
#           DB_DenyJoinGuild::makeRequest(int, unsigned int, unsigned int)
# range [0x0843df0e, 0x0843dffd]
0843df0e +0x00:  push   %ebp
0843df0f +0x01:  mov    %esp,%ebp
0843df11 +0x03:  push   %esi
0843df12 +0x04:  push   %ebx
0843df13 +0x05:  sub    $0x20,%esp
0843df16 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843df1b +0x0d:  movl   $0x92b4,0x8(%esp)
0843df23 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0843df2b +0x1d:  mov    %eax,(%esp)
0843df2e +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843df33 +0x25:  movl   $0x1,0x8(%esp)
0843df3b +0x2d:  mov    %eax,0x4(%esp)
0843df3f +0x31:  lea    -0x10(%ebp),%eax
0843df42 +0x34:  mov    %eax,(%esp)
0843df45 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843df4a +0x3c:  lea    -0x10(%ebp),%eax
0843df4d +0x3f:  mov    %eax,(%esp)
0843df50 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843df55 +0x47:  movl   $0x21c,0x4(%esp)
0843df5d +0x4f:  mov    %eax,(%esp)
0843df60 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843df65 +0x57:  lea    -0x10(%ebp),%eax
0843df68 +0x5a:  mov    %eax,(%esp)
0843df6b +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843df70 +0x62:  mov    0x8(%ebp),%edx
0843df73 +0x65:  mov    %edx,0x4(%esp)
0843df77 +0x69:  mov    %eax,(%esp)
0843df7a +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843df7f +0x71:  lea    -0x10(%ebp),%eax
0843df82 +0x74:  mov    %eax,(%esp)
0843df85 +0x77:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843df8a +0x7c:  mov    0xc(%ebp),%edx
0843df8d +0x7f:  mov    %edx,0x4(%esp)
0843df91 +0x83:  mov    %eax,(%esp)
0843df94 +0x86:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0843df99 +0x8b:  lea    -0x10(%ebp),%eax
0843df9c +0x8e:  mov    %eax,(%esp)
0843df9f +0x91:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843dfa4 +0x96:  mov    0x10(%ebp),%edx
0843dfa7 +0x99:  mov    %edx,0x4(%esp)
0843dfab +0x9d:  mov    %eax,(%esp)
0843dfae +0xa0:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0843dfb3 +0xa5:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843dfb8 +0xaa:  lea    -0x10(%ebp),%edx
0843dfbb +0xad:  mov    %edx,0x8(%esp)
0843dfbf +0xb1:  movl   $0x2,0x4(%esp)
0843dfc7 +0xb9:  mov    %eax,(%esp)
0843dfca +0xbc:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843dfcf +0xc1:  jmp    0843dfec <+0xde>
0843dfd1 +0xc3:  mov    %edx,%ebx
0843dfd3 +0xc5:  mov    %eax,%esi
0843dfd5 +0xc7:  lea    -0x10(%ebp),%eax
0843dfd8 +0xca:  mov    %eax,(%esp)
0843dfdb +0xcd:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843dfe0 +0xd2:  mov    %esi,%eax
0843dfe2 +0xd4:  mov    %ebx,%edx
0843dfe4 +0xd6:  mov    %eax,(%esp)
0843dfe7 +0xd9:  call   08ae3750 <_Unwind_Resume>
0843dfec +0xde:  lea    -0x10(%ebp),%eax
0843dfef +0xe1:  mov    %eax,(%esp)
0843dff2 +0xe4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843dff7 +0xe9:  add    $0x20,%esp
0843dffa +0xec:  pop    %ebx
0843dffb +0xed:  pop    %esi
0843dffc +0xee:  pop    %ebp
0843dffd +0xef:  ret
```

## 反编译 C

```c
// DB_DenyJoinGuild::makeRequest @ 0x843df0e

/* DB_DenyJoinGuild::makeRequest(int, unsigned int, unsigned int) */

void DB_DenyJoinGuild::makeRequest(int param_1,uint param_2,uint param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x92b4);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843df60 to 0843dfce has its CatchHandler @ 0843dfd1 */
  CStreamGuard::operator<<(pCVar2,0x21c);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```

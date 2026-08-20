# makeRequest

`_ZN17DB_CheckJoinGuild11makeRequestEiP20SIG_CHECK_JOIN_GUILD`

`DB_CheckJoinGuild::makeRequest(int, SIG_CHECK_JOIN_GUILD*)`

| 类 | 地址 |
|---|---|
| `DB_CheckJoinGuild` | `0x0843cc06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843cc06  _ZN17DB_CheckJoinGuild11makeRequestEiP20SIG_CHECK_JOIN_GUILD
#           DB_CheckJoinGuild::makeRequest(int, SIG_CHECK_JOIN_GUILD*)
# range [0x0843cc06, 0x0843ccf1]
0843cc06 +0x00:  push   %ebp
0843cc07 +0x01:  mov    %esp,%ebp
0843cc09 +0x03:  push   %esi
0843cc0a +0x04:  push   %ebx
0843cc0b +0x05:  sub    $0x20,%esp
0843cc0e +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843cc13 +0x0d:  movl   $0x911a,0x8(%esp)
0843cc1b +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0843cc23 +0x1d:  mov    %eax,(%esp)
0843cc26 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843cc2b +0x25:  movl   $0x1,0x8(%esp)
0843cc33 +0x2d:  mov    %eax,0x4(%esp)
0843cc37 +0x31:  lea    -0x14(%ebp),%eax
0843cc3a +0x34:  mov    %eax,(%esp)
0843cc3d +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843cc42 +0x3c:  lea    -0x14(%ebp),%eax
0843cc45 +0x3f:  mov    %eax,(%esp)
0843cc48 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843cc4d +0x47:  movl   $0x216,0x4(%esp)
0843cc55 +0x4f:  mov    %eax,(%esp)
0843cc58 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843cc5d +0x57:  lea    -0x14(%ebp),%eax
0843cc60 +0x5a:  mov    %eax,(%esp)
0843cc63 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843cc68 +0x62:  mov    0x8(%ebp),%edx
0843cc6b +0x65:  mov    %edx,0x4(%esp)
0843cc6f +0x69:  mov    %eax,(%esp)
0843cc72 +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843cc77 +0x71:  lea    -0x14(%ebp),%eax
0843cc7a +0x74:  mov    %eax,(%esp)
0843cc7d +0x77:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0843cc82 +0x7c:  mov    %eax,(%esp)
0843cc85 +0x7f:  call   08453ae4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x66fa>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x66fa
0843cc8a +0x84:  mov    %eax,-0xc(%ebp)
0843cc8d +0x87:  movl   $0x1c,0x8(%esp)
0843cc95 +0x8f:  mov    0xc(%ebp),%eax
0843cc98 +0x92:  mov    %eax,0x4(%esp)
0843cc9c +0x96:  mov    -0xc(%ebp),%eax
0843cc9f +0x99:  mov    %eax,(%esp)
0843cca2 +0x9c:  call   0807d8a0 <_init+0x198>
0843cca7 +0xa1:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843ccac +0xa6:  lea    -0x14(%ebp),%edx
0843ccaf +0xa9:  mov    %edx,0x8(%esp)
0843ccb3 +0xad:  movl   $0x2,0x4(%esp)
0843ccbb +0xb5:  mov    %eax,(%esp)
0843ccbe +0xb8:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843ccc3 +0xbd:  jmp    0843cce0 <+0xda>
0843ccc5 +0xbf:  mov    %edx,%ebx
0843ccc7 +0xc1:  mov    %eax,%esi
0843ccc9 +0xc3:  lea    -0x14(%ebp),%eax
0843cccc +0xc6:  mov    %eax,(%esp)
0843cccf +0xc9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843ccd4 +0xce:  mov    %esi,%eax
0843ccd6 +0xd0:  mov    %ebx,%edx
0843ccd8 +0xd2:  mov    %eax,(%esp)
0843ccdb +0xd5:  call   08ae3750 <_Unwind_Resume>
0843cce0 +0xda:  lea    -0x14(%ebp),%eax
0843cce3 +0xdd:  mov    %eax,(%esp)
0843cce6 +0xe0:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843cceb +0xe5:  add    $0x20,%esp
0843ccee +0xe8:  pop    %ebx
0843ccef +0xe9:  pop    %esi
0843ccf0 +0xea:  pop    %ebp
0843ccf1 +0xeb:  ret
```

## 反编译 C

```c
// DB_CheckJoinGuild::makeRequest @ 0x843cc06

/* DB_CheckJoinGuild::makeRequest(int, SIG_CHECK_JOIN_GUILD*) */

void DB_CheckJoinGuild::makeRequest(int param_1,SIG_CHECK_JOIN_GUILD *param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_CHECK_JOIN_GUILD *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x911a);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0843cc58 to 0843ccc2 has its CatchHandler @ 0843ccc5 */
  CStreamGuard::operator<<(pCVar2,0x216);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_CHECK_JOIN_GUILD>(pCVar2);
  memcpy(local_10,param_2,0x1c);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```

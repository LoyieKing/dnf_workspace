# makeRequest

`_ZN19DB_RequestJoinGuild11makeRequestEiP22SIG_REQUEST_JOIN_GUILD`

`DB_RequestJoinGuild::makeRequest(int, SIG_REQUEST_JOIN_GUILD*)`

| 类 | 地址 |
|---|---|
| `DB_RequestJoinGuild` | `0x0843d19a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843d19a  _ZN19DB_RequestJoinGuild11makeRequestEiP22SIG_REQUEST_JOIN_GUILD
#           DB_RequestJoinGuild::makeRequest(int, SIG_REQUEST_JOIN_GUILD*)
# range [0x0843d19a, 0x0843d285]
0843d19a +0x00:  push   %ebp
0843d19b +0x01:  mov    %esp,%ebp
0843d19d +0x03:  push   %esi
0843d19e +0x04:  push   %ebx
0843d19f +0x05:  sub    $0x20,%esp
0843d1a2 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843d1a7 +0x0d:  movl   $0x91a8,0x8(%esp)
0843d1af +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0843d1b7 +0x1d:  mov    %eax,(%esp)
0843d1ba +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843d1bf +0x25:  movl   $0x1,0x8(%esp)
0843d1c7 +0x2d:  mov    %eax,0x4(%esp)
0843d1cb +0x31:  lea    -0x14(%ebp),%eax
0843d1ce +0x34:  mov    %eax,(%esp)
0843d1d1 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843d1d6 +0x3c:  lea    -0x14(%ebp),%eax
0843d1d9 +0x3f:  mov    %eax,(%esp)
0843d1dc +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843d1e1 +0x47:  movl   $0x217,0x4(%esp)
0843d1e9 +0x4f:  mov    %eax,(%esp)
0843d1ec +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843d1f1 +0x57:  lea    -0x14(%ebp),%eax
0843d1f4 +0x5a:  mov    %eax,(%esp)
0843d1f7 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843d1fc +0x62:  mov    0x8(%ebp),%edx
0843d1ff +0x65:  mov    %edx,0x4(%esp)
0843d203 +0x69:  mov    %eax,(%esp)
0843d206 +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843d20b +0x71:  lea    -0x14(%ebp),%eax
0843d20e +0x74:  mov    %eax,(%esp)
0843d211 +0x77:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0843d216 +0x7c:  mov    %eax,(%esp)
0843d219 +0x7f:  call   08453b64 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x677a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x677a
0843d21e +0x84:  mov    %eax,-0xc(%ebp)
0843d221 +0x87:  movl   $0x44,0x8(%esp)
0843d229 +0x8f:  mov    0xc(%ebp),%eax
0843d22c +0x92:  mov    %eax,0x4(%esp)
0843d230 +0x96:  mov    -0xc(%ebp),%eax
0843d233 +0x99:  mov    %eax,(%esp)
0843d236 +0x9c:  call   0807d8a0 <_init+0x198>
0843d23b +0xa1:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843d240 +0xa6:  lea    -0x14(%ebp),%edx
0843d243 +0xa9:  mov    %edx,0x8(%esp)
0843d247 +0xad:  movl   $0x2,0x4(%esp)
0843d24f +0xb5:  mov    %eax,(%esp)
0843d252 +0xb8:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843d257 +0xbd:  jmp    0843d274 <+0xda>
0843d259 +0xbf:  mov    %edx,%ebx
0843d25b +0xc1:  mov    %eax,%esi
0843d25d +0xc3:  lea    -0x14(%ebp),%eax
0843d260 +0xc6:  mov    %eax,(%esp)
0843d263 +0xc9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843d268 +0xce:  mov    %esi,%eax
0843d26a +0xd0:  mov    %ebx,%edx
0843d26c +0xd2:  mov    %eax,(%esp)
0843d26f +0xd5:  call   08ae3750 <_Unwind_Resume>
0843d274 +0xda:  lea    -0x14(%ebp),%eax
0843d277 +0xdd:  mov    %eax,(%esp)
0843d27a +0xe0:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843d27f +0xe5:  add    $0x20,%esp
0843d282 +0xe8:  pop    %ebx
0843d283 +0xe9:  pop    %esi
0843d284 +0xea:  pop    %ebp
0843d285 +0xeb:  ret
```

## 反编译 C

```c
// DB_RequestJoinGuild::makeRequest @ 0x843d19a

/* DB_RequestJoinGuild::makeRequest(int, SIG_REQUEST_JOIN_GUILD*) */

void DB_RequestJoinGuild::makeRequest(int param_1,SIG_REQUEST_JOIN_GUILD *param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_REQUEST_JOIN_GUILD *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x91a8);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0843d1ec to 0843d256 has its CatchHandler @ 0843d259 */
  CStreamGuard::operator<<(pCVar2,0x217);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_REQUEST_JOIN_GUILD>(pCVar2);
  memcpy(local_10,param_2,0x44);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```

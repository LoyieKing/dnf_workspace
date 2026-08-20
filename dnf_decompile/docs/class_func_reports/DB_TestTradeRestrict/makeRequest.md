# makeRequest

`_ZN20DB_TestTradeRestrict11makeRequestEj`

`DB_TestTradeRestrict::makeRequest(unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_TestTradeRestrict` | `0x0844a132` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844a132  _ZN20DB_TestTradeRestrict11makeRequestEj
#           DB_TestTradeRestrict::makeRequest(unsigned int)
# range [0x0844a132, 0x0844a209]
0844a132 +0x00:  push   %ebp
0844a133 +0x01:  mov    %esp,%ebp
0844a135 +0x03:  push   %esi
0844a136 +0x04:  push   %ebx
0844a137 +0x05:  sub    $0x20,%esp
0844a13a +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0844a13f +0x0d:  movl   $0xba73,0x8(%esp)
0844a147 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0844a14f +0x1d:  mov    %eax,(%esp)
0844a152 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0844a157 +0x25:  movl   $0x1,0x8(%esp)
0844a15f +0x2d:  mov    %eax,0x4(%esp)
0844a163 +0x31:  lea    -0x10(%ebp),%eax
0844a166 +0x34:  mov    %eax,(%esp)
0844a169 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0844a16e +0x3c:  lea    -0x10(%ebp),%eax
0844a171 +0x3f:  mov    %eax,(%esp)
0844a174 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844a179 +0x47:  movl   $0x31c,0x4(%esp)
0844a181 +0x4f:  mov    %eax,(%esp)
0844a184 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844a189 +0x57:  lea    -0x10(%ebp),%eax
0844a18c +0x5a:  mov    %eax,(%esp)
0844a18f +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844a194 +0x62:  movl   $0xffffffff,0x4(%esp)
0844a19c +0x6a:  mov    %eax,(%esp)
0844a19f +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844a1a4 +0x72:  lea    -0x10(%ebp),%eax
0844a1a7 +0x75:  mov    %eax,(%esp)
0844a1aa +0x78:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844a1af +0x7d:  mov    0x8(%ebp),%edx
0844a1b2 +0x80:  mov    %edx,0x4(%esp)
0844a1b6 +0x84:  mov    %eax,(%esp)
0844a1b9 +0x87:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0844a1be +0x8c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0844a1c3 +0x91:  lea    -0x10(%ebp),%edx
0844a1c6 +0x94:  mov    %edx,0x8(%esp)
0844a1ca +0x98:  movl   $0x2,0x4(%esp)
0844a1d2 +0xa0:  mov    %eax,(%esp)
0844a1d5 +0xa3:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0844a1da +0xa8:  jmp    0844a1f7 <+0xc5>
0844a1dc +0xaa:  mov    %edx,%ebx
0844a1de +0xac:  mov    %eax,%esi
0844a1e0 +0xae:  lea    -0x10(%ebp),%eax
0844a1e3 +0xb1:  mov    %eax,(%esp)
0844a1e6 +0xb4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844a1eb +0xb9:  mov    %esi,%eax
0844a1ed +0xbb:  mov    %ebx,%edx
0844a1ef +0xbd:  mov    %eax,(%esp)
0844a1f2 +0xc0:  call   08ae3750 <_Unwind_Resume>
0844a1f7 +0xc5:  lea    -0x10(%ebp),%eax
0844a1fa +0xc8:  mov    %eax,(%esp)
0844a1fd +0xcb:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844a202 +0xd0:  add    $0x20,%esp
0844a205 +0xd3:  pop    %ebx
0844a206 +0xd4:  pop    %esi
0844a207 +0xd5:  pop    %ebp
0844a208 +0xd6:  ret
0844a209 +0xd7:  nop
```

## 反编译 C

```c
// DB_TestTradeRestrict::makeRequest @ 0x844a132

/* DB_TestTradeRestrict::makeRequest(unsigned int) */

void DB_TestTradeRestrict::makeRequest(uint param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xba73);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0844a184 to 0844a1d9 has its CatchHandler @ 0844a1dc */
  CStreamGuard::operator<<(pCVar2,0x31c);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```

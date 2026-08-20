# makeRequest

`_ZN18DB_SavePuUserCheck11makeRequestEj`

`DB_SavePuUserCheck::makeRequest(unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_SavePuUserCheck` | `0x0844c098` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844c098  _ZN18DB_SavePuUserCheck11makeRequestEj
#           DB_SavePuUserCheck::makeRequest(unsigned int)
# range [0x0844c098, 0x0844c16f]
0844c098 +0x00:  push   %ebp
0844c099 +0x01:  mov    %esp,%ebp
0844c09b +0x03:  push   %esi
0844c09c +0x04:  push   %ebx
0844c09d +0x05:  sub    $0x20,%esp
0844c0a0 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0844c0a5 +0x0d:  movl   $0xbcf4,0x8(%esp)
0844c0ad +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0844c0b5 +0x1d:  mov    %eax,(%esp)
0844c0b8 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0844c0bd +0x25:  movl   $0x1,0x8(%esp)
0844c0c5 +0x2d:  mov    %eax,0x4(%esp)
0844c0c9 +0x31:  lea    -0x10(%ebp),%eax
0844c0cc +0x34:  mov    %eax,(%esp)
0844c0cf +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0844c0d4 +0x3c:  lea    -0x10(%ebp),%eax
0844c0d7 +0x3f:  mov    %eax,(%esp)
0844c0da +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844c0df +0x47:  movl   $0x2e2,0x4(%esp)
0844c0e7 +0x4f:  mov    %eax,(%esp)
0844c0ea +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844c0ef +0x57:  lea    -0x10(%ebp),%eax
0844c0f2 +0x5a:  mov    %eax,(%esp)
0844c0f5 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844c0fa +0x62:  movl   $0xffffffff,0x4(%esp)
0844c102 +0x6a:  mov    %eax,(%esp)
0844c105 +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844c10a +0x72:  lea    -0x10(%ebp),%eax
0844c10d +0x75:  mov    %eax,(%esp)
0844c110 +0x78:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844c115 +0x7d:  mov    0x8(%ebp),%edx
0844c118 +0x80:  mov    %edx,0x4(%esp)
0844c11c +0x84:  mov    %eax,(%esp)
0844c11f +0x87:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0844c124 +0x8c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0844c129 +0x91:  lea    -0x10(%ebp),%edx
0844c12c +0x94:  mov    %edx,0x8(%esp)
0844c130 +0x98:  movl   $0x2,0x4(%esp)
0844c138 +0xa0:  mov    %eax,(%esp)
0844c13b +0xa3:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0844c140 +0xa8:  jmp    0844c15d <+0xc5>
0844c142 +0xaa:  mov    %edx,%ebx
0844c144 +0xac:  mov    %eax,%esi
0844c146 +0xae:  lea    -0x10(%ebp),%eax
0844c149 +0xb1:  mov    %eax,(%esp)
0844c14c +0xb4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844c151 +0xb9:  mov    %esi,%eax
0844c153 +0xbb:  mov    %ebx,%edx
0844c155 +0xbd:  mov    %eax,(%esp)
0844c158 +0xc0:  call   08ae3750 <_Unwind_Resume>
0844c15d +0xc5:  lea    -0x10(%ebp),%eax
0844c160 +0xc8:  mov    %eax,(%esp)
0844c163 +0xcb:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844c168 +0xd0:  add    $0x20,%esp
0844c16b +0xd3:  pop    %ebx
0844c16c +0xd4:  pop    %esi
0844c16d +0xd5:  pop    %ebp
0844c16e +0xd6:  ret
0844c16f +0xd7:  nop
```

## 反编译 C

```c
// DB_SavePuUserCheck::makeRequest @ 0x844c098

/* DB_SavePuUserCheck::makeRequest(unsigned int) */

void DB_SavePuUserCheck::makeRequest(uint param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xbcf4);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0844c0ea to 0844c13f has its CatchHandler @ 0844c142 */
  CStreamGuard::operator<<(pCVar2,0x2e2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```

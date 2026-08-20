# makeRequest

`_ZN31DB_InsertRandomOptionItemInform11makeRequestEijh`

`DB_InsertRandomOptionItemInform::makeRequest(int, unsigned int, unsigned char)`

| 类 | 地址 |
|---|---|
| `DB_InsertRandomOptionItemInform` | `0x08442d70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08442d70  _ZN31DB_InsertRandomOptionItemInform11makeRequestEijh
#           DB_InsertRandomOptionItemInform::makeRequest(int, unsigned int, unsigned char)
# range [0x08442d70, 0x08442e67]
08442d70 +0x00:  push   %ebp
08442d71 +0x01:  mov    %esp,%ebp
08442d73 +0x03:  push   %esi
08442d74 +0x04:  push   %ebx
08442d75 +0x05:  sub    $0x30,%esp
08442d78 +0x08:  mov    0x10(%ebp),%eax
08442d7b +0x0b:  mov    %al,-0x1c(%ebp)
08442d7e +0x0e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08442d83 +0x13:  movl   $0xa488,0x8(%esp)
08442d8b +0x1b:  movl   $"DBThread.cpp",0x4(%esp)
08442d93 +0x23:  mov    %eax,(%esp)
08442d96 +0x26:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08442d9b +0x2b:  movl   $0x1,0x8(%esp)
08442da3 +0x33:  mov    %eax,0x4(%esp)
08442da7 +0x37:  lea    -0x10(%ebp),%eax
08442daa +0x3a:  mov    %eax,(%esp)
08442dad +0x3d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08442db2 +0x42:  lea    -0x10(%ebp),%eax
08442db5 +0x45:  mov    %eax,(%esp)
08442db8 +0x48:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08442dbd +0x4d:  movl   $0x299,0x4(%esp)
08442dc5 +0x55:  mov    %eax,(%esp)
08442dc8 +0x58:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08442dcd +0x5d:  lea    -0x10(%ebp),%eax
08442dd0 +0x60:  mov    %eax,(%esp)
08442dd3 +0x63:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08442dd8 +0x68:  mov    0x8(%ebp),%edx
08442ddb +0x6b:  mov    %edx,0x4(%esp)
08442ddf +0x6f:  mov    %eax,(%esp)
08442de2 +0x72:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08442de7 +0x77:  lea    -0x10(%ebp),%eax
08442dea +0x7a:  mov    %eax,(%esp)
08442ded +0x7d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08442df2 +0x82:  mov    0xc(%ebp),%edx
08442df5 +0x85:  mov    %edx,0x4(%esp)
08442df9 +0x89:  mov    %eax,(%esp)
08442dfc +0x8c:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08442e01 +0x91:  movzbl -0x1c(%ebp),%ebx
08442e05 +0x95:  lea    -0x10(%ebp),%eax
08442e08 +0x98:  mov    %eax,(%esp)
08442e0b +0x9b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08442e10 +0xa0:  mov    %ebx,0x4(%esp)
08442e14 +0xa4:  mov    %eax,(%esp)
08442e17 +0xa7:  call   0844d454 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6a
08442e1c +0xac:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08442e21 +0xb1:  lea    -0x10(%ebp),%edx
08442e24 +0xb4:  mov    %edx,0x8(%esp)
08442e28 +0xb8:  movl   $0x2,0x4(%esp)
08442e30 +0xc0:  mov    %eax,(%esp)
08442e33 +0xc3:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08442e38 +0xc8:  jmp    08442e55 <+0xe5>
08442e3a +0xca:  mov    %edx,%ebx
08442e3c +0xcc:  mov    %eax,%esi
08442e3e +0xce:  lea    -0x10(%ebp),%eax
08442e41 +0xd1:  mov    %eax,(%esp)
08442e44 +0xd4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08442e49 +0xd9:  mov    %esi,%eax
08442e4b +0xdb:  mov    %ebx,%edx
08442e4d +0xdd:  mov    %eax,(%esp)
08442e50 +0xe0:  call   08ae3750 <_Unwind_Resume>
08442e55 +0xe5:  lea    -0x10(%ebp),%eax
08442e58 +0xe8:  mov    %eax,(%esp)
08442e5b +0xeb:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08442e60 +0xf0:  add    $0x30,%esp
08442e63 +0xf3:  pop    %ebx
08442e64 +0xf4:  pop    %esi
08442e65 +0xf5:  pop    %ebp
08442e66 +0xf6:  ret
08442e67 +0xf7:  nop
```

## 反编译 C

```c
// DB_InsertRandomOptionItemInform::makeRequest @ 0x8442d70

/* DB_InsertRandomOptionItemInform::makeRequest(int, unsigned int, unsigned char) */

void DB_InsertRandomOptionItemInform::makeRequest(int param_1,uint param_2,uchar param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xa488);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08442dc8 to 08442e37 has its CatchHandler @ 08442e3a */
  CStreamGuard::operator<<(pCVar2,0x299);
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

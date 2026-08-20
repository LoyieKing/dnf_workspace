# makeRequest

`_ZN16DB_GuildJoinList11makeRequestEij17ENUM_SERVER_GROUP`

`DB_GuildJoinList::makeRequest(int, unsigned int, ENUM_SERVER_GROUP)`

| 类 | 地址 |
|---|---|
| `DB_GuildJoinList` | `0x0843dd7c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843dd7c  _ZN16DB_GuildJoinList11makeRequestEij17ENUM_SERVER_GROUP
#           DB_GuildJoinList::makeRequest(int, unsigned int, ENUM_SERVER_GROUP)
# range [0x0843dd7c, 0x0843de6b]
0843dd7c +0x00:  push   %ebp
0843dd7d +0x01:  mov    %esp,%ebp
0843dd7f +0x03:  push   %esi
0843dd80 +0x04:  push   %ebx
0843dd81 +0x05:  sub    $0x20,%esp
0843dd84 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843dd89 +0x0d:  movl   $0x9299,0x8(%esp)
0843dd91 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0843dd99 +0x1d:  mov    %eax,(%esp)
0843dd9c +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843dda1 +0x25:  movl   $0x1,0x8(%esp)
0843dda9 +0x2d:  mov    %eax,0x4(%esp)
0843ddad +0x31:  lea    -0x10(%ebp),%eax
0843ddb0 +0x34:  mov    %eax,(%esp)
0843ddb3 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843ddb8 +0x3c:  lea    -0x10(%ebp),%eax
0843ddbb +0x3f:  mov    %eax,(%esp)
0843ddbe +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843ddc3 +0x47:  movl   $0x21a,0x4(%esp)
0843ddcb +0x4f:  mov    %eax,(%esp)
0843ddce +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843ddd3 +0x57:  lea    -0x10(%ebp),%eax
0843ddd6 +0x5a:  mov    %eax,(%esp)
0843ddd9 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843ddde +0x62:  mov    0x8(%ebp),%edx
0843dde1 +0x65:  mov    %edx,0x4(%esp)
0843dde5 +0x69:  mov    %eax,(%esp)
0843dde8 +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843dded +0x71:  lea    -0x10(%ebp),%eax
0843ddf0 +0x74:  mov    %eax,(%esp)
0843ddf3 +0x77:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843ddf8 +0x7c:  mov    0xc(%ebp),%edx
0843ddfb +0x7f:  mov    %edx,0x4(%esp)
0843ddff +0x83:  mov    %eax,(%esp)
0843de02 +0x86:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0843de07 +0x8b:  mov    0x10(%ebp),%ebx
0843de0a +0x8e:  lea    -0x10(%ebp),%eax
0843de0d +0x91:  mov    %eax,(%esp)
0843de10 +0x94:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843de15 +0x99:  mov    %ebx,0x4(%esp)
0843de19 +0x9d:  mov    %eax,(%esp)
0843de1c +0xa0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843de21 +0xa5:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843de26 +0xaa:  lea    -0x10(%ebp),%edx
0843de29 +0xad:  mov    %edx,0x8(%esp)
0843de2d +0xb1:  movl   $0x2,0x4(%esp)
0843de35 +0xb9:  mov    %eax,(%esp)
0843de38 +0xbc:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843de3d +0xc1:  jmp    0843de5a <+0xde>
0843de3f +0xc3:  mov    %edx,%ebx
0843de41 +0xc5:  mov    %eax,%esi
0843de43 +0xc7:  lea    -0x10(%ebp),%eax
0843de46 +0xca:  mov    %eax,(%esp)
0843de49 +0xcd:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843de4e +0xd2:  mov    %esi,%eax
0843de50 +0xd4:  mov    %ebx,%edx
0843de52 +0xd6:  mov    %eax,(%esp)
0843de55 +0xd9:  call   08ae3750 <_Unwind_Resume>
0843de5a +0xde:  lea    -0x10(%ebp),%eax
0843de5d +0xe1:  mov    %eax,(%esp)
0843de60 +0xe4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843de65 +0xe9:  add    $0x20,%esp
0843de68 +0xec:  pop    %ebx
0843de69 +0xed:  pop    %esi
0843de6a +0xee:  pop    %ebp
0843de6b +0xef:  ret
```

## 反编译 C

```c
// DB_GuildJoinList::makeRequest @ 0x843dd7c

/* DB_GuildJoinList::makeRequest(int, unsigned int, ENUM_SERVER_GROUP) */

void DB_GuildJoinList::makeRequest(int param_1,uint param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x9299);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843ddce to 0843de3c has its CatchHandler @ 0843de3f */
  CStreamGuard::operator<<(pCVar2,0x21a);
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

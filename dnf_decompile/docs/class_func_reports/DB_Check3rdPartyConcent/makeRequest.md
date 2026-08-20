# makeRequest

`_ZN23DB_Check3rdPartyConcent11makeRequestEij`

`DB_Check3rdPartyConcent::makeRequest(int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_Check3rdPartyConcent` | `0x084460c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084460c0  _ZN23DB_Check3rdPartyConcent11makeRequestEij
#           DB_Check3rdPartyConcent::makeRequest(int, unsigned int)
# range [0x084460c0, 0x08446195]
084460c0 +0x00:  push   %ebp
084460c1 +0x01:  mov    %esp,%ebp
084460c3 +0x03:  push   %esi
084460c4 +0x04:  push   %ebx
084460c5 +0x05:  sub    $0x20,%esp
084460c8 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084460cd +0x0d:  movl   $0xada1,0x8(%esp)
084460d5 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
084460dd +0x1d:  mov    %eax,(%esp)
084460e0 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084460e5 +0x25:  movl   $0x1,0x8(%esp)
084460ed +0x2d:  mov    %eax,0x4(%esp)
084460f1 +0x31:  lea    -0x10(%ebp),%eax
084460f4 +0x34:  mov    %eax,(%esp)
084460f7 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084460fc +0x3c:  lea    -0x10(%ebp),%eax
084460ff +0x3f:  mov    %eax,(%esp)
08446102 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08446107 +0x47:  movl   $0x2b7,0x4(%esp)
0844610f +0x4f:  mov    %eax,(%esp)
08446112 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08446117 +0x57:  lea    -0x10(%ebp),%eax
0844611a +0x5a:  mov    %eax,(%esp)
0844611d +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08446122 +0x62:  mov    0x8(%ebp),%edx
08446125 +0x65:  mov    %edx,0x4(%esp)
08446129 +0x69:  mov    %eax,(%esp)
0844612c +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08446131 +0x71:  lea    -0x10(%ebp),%eax
08446134 +0x74:  mov    %eax,(%esp)
08446137 +0x77:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844613c +0x7c:  mov    0xc(%ebp),%edx
0844613f +0x7f:  mov    %edx,0x4(%esp)
08446143 +0x83:  mov    %eax,(%esp)
08446146 +0x86:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0844614b +0x8b:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08446150 +0x90:  lea    -0x10(%ebp),%edx
08446153 +0x93:  mov    %edx,0x8(%esp)
08446157 +0x97:  movl   $0x2,0x4(%esp)
0844615f +0x9f:  mov    %eax,(%esp)
08446162 +0xa2:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08446167 +0xa7:  jmp    08446184 <+0xc4>
08446169 +0xa9:  mov    %edx,%ebx
0844616b +0xab:  mov    %eax,%esi
0844616d +0xad:  lea    -0x10(%ebp),%eax
08446170 +0xb0:  mov    %eax,(%esp)
08446173 +0xb3:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08446178 +0xb8:  mov    %esi,%eax
0844617a +0xba:  mov    %ebx,%edx
0844617c +0xbc:  mov    %eax,(%esp)
0844617f +0xbf:  call   08ae3750 <_Unwind_Resume>
08446184 +0xc4:  lea    -0x10(%ebp),%eax
08446187 +0xc7:  mov    %eax,(%esp)
0844618a +0xca:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844618f +0xcf:  add    $0x20,%esp
08446192 +0xd2:  pop    %ebx
08446193 +0xd3:  pop    %esi
08446194 +0xd4:  pop    %ebp
08446195 +0xd5:  ret
```

## 反编译 C

```c
// DB_Check3rdPartyConcent::makeRequest @ 0x84460c0

/* DB_Check3rdPartyConcent::makeRequest(int, unsigned int) */

void DB_Check3rdPartyConcent::makeRequest(int param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xada1);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08446112 to 08446166 has its CatchHandler @ 08446169 */
  CStreamGuard::operator<<(pCVar2,0x2b7);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```

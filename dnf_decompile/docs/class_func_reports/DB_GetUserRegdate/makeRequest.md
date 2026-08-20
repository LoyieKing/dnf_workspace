# makeRequest

`_ZN17DB_GetUserRegdate11makeRequestEij`

`DB_GetUserRegdate::makeRequest(int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_GetUserRegdate` | `0x08442fae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08442fae  _ZN17DB_GetUserRegdate11makeRequestEij
#           DB_GetUserRegdate::makeRequest(int, unsigned int)
# range [0x08442fae, 0x0844309b]
08442fae +0x00:  push   %ebp
08442faf +0x01:  mov    %esp,%ebp
08442fb1 +0x03:  push   %esi
08442fb2 +0x04:  push   %ebx
08442fb3 +0x05:  sub    $0x20,%esp
08442fb6 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08442fbb +0x0d:  movl   $0xa4b2,0x8(%esp)
08442fc3 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
08442fcb +0x1d:  mov    %eax,(%esp)
08442fce +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08442fd3 +0x25:  movl   $0x1,0x8(%esp)
08442fdb +0x2d:  mov    %eax,0x4(%esp)
08442fdf +0x31:  lea    -0x14(%ebp),%eax
08442fe2 +0x34:  mov    %eax,(%esp)
08442fe5 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08442fea +0x3c:  lea    -0x14(%ebp),%eax
08442fed +0x3f:  mov    %eax,(%esp)
08442ff0 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08442ff5 +0x47:  movl   $0x2a1,0x4(%esp)
08442ffd +0x4f:  mov    %eax,(%esp)
08443000 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08443005 +0x57:  lea    -0x14(%ebp),%eax
08443008 +0x5a:  mov    %eax,(%esp)
0844300b +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08443010 +0x62:  mov    0x8(%ebp),%edx
08443013 +0x65:  mov    %edx,0x4(%esp)
08443017 +0x69:  mov    %eax,(%esp)
0844301a +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844301f +0x71:  lea    -0x14(%ebp),%eax
08443022 +0x74:  mov    %eax,(%esp)
08443025 +0x77:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0844302a +0x7c:  mov    %eax,(%esp)
0844302d +0x7f:  call   08453e72 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6a88>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6a88
08443032 +0x84:  mov    %eax,-0xc(%ebp)
08443035 +0x87:  mov    -0xc(%ebp),%eax
08443038 +0x8a:  mov    0xc(%ebp),%edx
0844303b +0x8d:  mov    %edx,(%eax)
0844303d +0x8f:  mov    -0xc(%ebp),%eax
08443040 +0x92:  movl   $0x0,0x8(%eax)
08443047 +0x99:  mov    -0xc(%ebp),%eax
0844304a +0x9c:  movl   $0x0,0x4(%eax)
08443051 +0xa3:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08443056 +0xa8:  lea    -0x14(%ebp),%edx
08443059 +0xab:  mov    %edx,0x8(%esp)
0844305d +0xaf:  movl   $0x2,0x4(%esp)
08443065 +0xb7:  mov    %eax,(%esp)
08443068 +0xba:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0844306d +0xbf:  jmp    0844308a <+0xdc>
0844306f +0xc1:  mov    %edx,%ebx
08443071 +0xc3:  mov    %eax,%esi
08443073 +0xc5:  lea    -0x14(%ebp),%eax
08443076 +0xc8:  mov    %eax,(%esp)
08443079 +0xcb:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844307e +0xd0:  mov    %esi,%eax
08443080 +0xd2:  mov    %ebx,%edx
08443082 +0xd4:  mov    %eax,(%esp)
08443085 +0xd7:  call   08ae3750 <_Unwind_Resume>
0844308a +0xdc:  lea    -0x14(%ebp),%eax
0844308d +0xdf:  mov    %eax,(%esp)
08443090 +0xe2:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08443095 +0xe7:  add    $0x20,%esp
08443098 +0xea:  pop    %ebx
08443099 +0xeb:  pop    %esi
0844309a +0xec:  pop    %ebp
0844309b +0xed:  ret
```

## 反编译 C

```c
// DB_GetUserRegdate::makeRequest @ 0x8442fae

/* DB_GetUserRegdate::makeRequest(int, unsigned int) */

void DB_GetUserRegdate::makeRequest(int param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_GET_USER_REGDATE *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xa4b2);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08443000 to 0844306c has its CatchHandler @ 0844306f */
  CStreamGuard::operator<<(pCVar2,0x2a1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_GET_USER_REGDATE>(pCVar2);
  *(uint *)local_10 = param_2;
  *(undefined4 *)(local_10 + 8) = 0;
  *(undefined4 *)(local_10 + 4) = 0;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```

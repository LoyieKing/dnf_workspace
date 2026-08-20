# makeRequest

`_ZN15DB_UpdateGMData11makeRequestEb`

`DB_UpdateGMData::makeRequest(bool)`

| 类 | 地址 |
|---|---|
| `DB_UpdateGMData` | `0x0843982c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843982c  _ZN15DB_UpdateGMData11makeRequestEb
#           DB_UpdateGMData::makeRequest(bool)
# range [0x0843982c, 0x08439909]
0843982c +0x00:  push   %ebp
0843982d +0x01:  mov    %esp,%ebp
0843982f +0x03:  push   %esi
08439830 +0x04:  push   %ebx
08439831 +0x05:  sub    $0x30,%esp
08439834 +0x08:  mov    0x8(%ebp),%eax
08439837 +0x0b:  mov    %al,-0x1c(%ebp)
0843983a +0x0e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843983f +0x13:  movl   $0x8761,0x8(%esp)
08439847 +0x1b:  movl   $"DBThread.cpp",0x4(%esp)
0843984f +0x23:  mov    %eax,(%esp)
08439852 +0x26:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08439857 +0x2b:  movl   $0x1,0x8(%esp)
0843985f +0x33:  mov    %eax,0x4(%esp)
08439863 +0x37:  lea    -0x10(%ebp),%eax
08439866 +0x3a:  mov    %eax,(%esp)
08439869 +0x3d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843986e +0x42:  lea    -0x10(%ebp),%eax
08439871 +0x45:  mov    %eax,(%esp)
08439874 +0x48:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08439879 +0x4d:  movl   $0x14a,0x4(%esp)
08439881 +0x55:  mov    %eax,(%esp)
08439884 +0x58:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08439889 +0x5d:  lea    -0x10(%ebp),%eax
0843988c +0x60:  mov    %eax,(%esp)
0843988f +0x63:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08439894 +0x68:  movl   $0xffffffff,0x4(%esp)
0843989c +0x70:  mov    %eax,(%esp)
0843989f +0x73:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084398a4 +0x78:  movzbl -0x1c(%ebp),%ebx
084398a8 +0x7c:  lea    -0x10(%ebp),%eax
084398ab +0x7f:  mov    %eax,(%esp)
084398ae +0x82:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084398b3 +0x87:  mov    %ebx,0x4(%esp)
084398b7 +0x8b:  mov    %eax,(%esp)
084398ba +0x8e:  call   0844d430 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x46>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x46
084398bf +0x93:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084398c4 +0x98:  lea    -0x10(%ebp),%edx
084398c7 +0x9b:  mov    %edx,0x8(%esp)
084398cb +0x9f:  movl   $0x2,0x4(%esp)
084398d3 +0xa7:  mov    %eax,(%esp)
084398d6 +0xaa:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084398db +0xaf:  jmp    084398f8 <+0xcc>
084398dd +0xb1:  mov    %edx,%ebx
084398df +0xb3:  mov    %eax,%esi
084398e1 +0xb5:  lea    -0x10(%ebp),%eax
084398e4 +0xb8:  mov    %eax,(%esp)
084398e7 +0xbb:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084398ec +0xc0:  mov    %esi,%eax
084398ee +0xc2:  mov    %ebx,%edx
084398f0 +0xc4:  mov    %eax,(%esp)
084398f3 +0xc7:  call   08ae3750 <_Unwind_Resume>
084398f8 +0xcc:  lea    -0x10(%ebp),%eax
084398fb +0xcf:  mov    %eax,(%esp)
084398fe +0xd2:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08439903 +0xd7:  add    $0x30,%esp
08439906 +0xda:  pop    %ebx
08439907 +0xdb:  pop    %esi
08439908 +0xdc:  pop    %ebp
08439909 +0xdd:  ret
```

## 反编译 C

```c
// DB_UpdateGMData::makeRequest @ 0x843982c

/* DB_UpdateGMData::makeRequest(bool) */

void DB_UpdateGMData::makeRequest(bool param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8761);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08439884 to 084398da has its CatchHandler @ 084398dd */
  CStreamGuard::operator<<(pCVar2,0x14a);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```

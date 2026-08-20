# makeRequest

`_ZN20DB_SecuServiceReward11makeRequestEjc`

`DB_SecuServiceReward::makeRequest(unsigned int, char)`

| 类 | 地址 |
|---|---|
| `DB_SecuServiceReward` | `0x08437844` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08437844  _ZN20DB_SecuServiceReward11makeRequestEjc
#           DB_SecuServiceReward::makeRequest(unsigned int, char)
# range [0x08437844, 0x0843792f]
08437844 +0x00:  push   %ebp
08437845 +0x01:  mov    %esp,%ebp
08437847 +0x03:  push   %esi
08437848 +0x04:  push   %ebx
08437849 +0x05:  sub    $0x30,%esp
0843784c +0x08:  mov    0xc(%ebp),%eax
0843784f +0x0b:  mov    %al,-0x1c(%ebp)
08437852 +0x0e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08437857 +0x13:  movl   $0x847c,0x8(%esp)
0843785f +0x1b:  movl   $"DBThread.cpp",0x4(%esp)
08437867 +0x23:  mov    %eax,(%esp)
0843786a +0x26:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843786f +0x2b:  movl   $0x1,0x8(%esp)
08437877 +0x33:  mov    %eax,0x4(%esp)
0843787b +0x37:  lea    -0x14(%ebp),%eax
0843787e +0x3a:  mov    %eax,(%esp)
08437881 +0x3d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08437886 +0x42:  lea    -0x14(%ebp),%eax
08437889 +0x45:  mov    %eax,(%esp)
0843788c +0x48:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08437891 +0x4d:  movl   $0x19d,0x4(%esp)
08437899 +0x55:  mov    %eax,(%esp)
0843789c +0x58:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084378a1 +0x5d:  lea    -0x14(%ebp),%eax
084378a4 +0x60:  mov    %eax,(%esp)
084378a7 +0x63:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084378ac +0x68:  movl   $0xffffffff,0x4(%esp)
084378b4 +0x70:  mov    %eax,(%esp)
084378b7 +0x73:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084378bc +0x78:  lea    -0x14(%ebp),%eax
084378bf +0x7b:  mov    %eax,(%esp)
084378c2 +0x7e:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084378c7 +0x83:  mov    %eax,(%esp)
084378ca +0x86:  call   084535d2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x61e8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x61e8
084378cf +0x8b:  mov    %eax,-0xc(%ebp)
084378d2 +0x8e:  mov    -0xc(%ebp),%eax
084378d5 +0x91:  mov    0x8(%ebp),%edx
084378d8 +0x94:  mov    %edx,(%eax)
084378da +0x96:  mov    -0xc(%ebp),%eax
084378dd +0x99:  movzbl -0x1c(%ebp),%edx
084378e1 +0x9d:  mov    %dl,0x4(%eax)
084378e4 +0xa0:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084378e9 +0xa5:  lea    -0x14(%ebp),%edx
084378ec +0xa8:  mov    %edx,0x8(%esp)
084378f0 +0xac:  movl   $0x2,0x4(%esp)
084378f8 +0xb4:  mov    %eax,(%esp)
084378fb +0xb7:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08437900 +0xbc:  jmp    0843791d <+0xd9>
08437902 +0xbe:  mov    %edx,%ebx
08437904 +0xc0:  mov    %eax,%esi
08437906 +0xc2:  lea    -0x14(%ebp),%eax
08437909 +0xc5:  mov    %eax,(%esp)
0843790c +0xc8:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08437911 +0xcd:  mov    %esi,%eax
08437913 +0xcf:  mov    %ebx,%edx
08437915 +0xd1:  mov    %eax,(%esp)
08437918 +0xd4:  call   08ae3750 <_Unwind_Resume>
0843791d +0xd9:  lea    -0x14(%ebp),%eax
08437920 +0xdc:  mov    %eax,(%esp)
08437923 +0xdf:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08437928 +0xe4:  add    $0x30,%esp
0843792b +0xe7:  pop    %ebx
0843792c +0xe8:  pop    %esi
0843792d +0xe9:  pop    %ebp
0843792e +0xea:  ret
0843792f +0xeb:  nop
```

## 反编译 C

```c
// DB_SecuServiceReward::makeRequest @ 0x8437844

/* DB_SecuServiceReward::makeRequest(unsigned int, char) */

void DB_SecuServiceReward::makeRequest(uint param_1,char param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SECU_SERVICE_REWARD *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x847c);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0843789c to 084378ff has its CatchHandler @ 08437902 */
  CStreamGuard::operator<<(pCVar2,0x19d);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SECU_SERVICE_REWARD>(pCVar2);
  *(uint *)local_10 = param_1;
  local_10[4] = (SIG_SECU_SERVICE_REWARD)param_2;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```

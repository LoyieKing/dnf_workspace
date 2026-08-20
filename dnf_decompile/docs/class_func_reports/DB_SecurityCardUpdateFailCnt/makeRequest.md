# makeRequest

`_ZN28DB_SecurityCardUpdateFailCnt11makeRequestEjj`

`DB_SecurityCardUpdateFailCnt::makeRequest(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_SecurityCardUpdateFailCnt` | `0x0842bfaa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842bfaa  _ZN28DB_SecurityCardUpdateFailCnt11makeRequestEjj
#           DB_SecurityCardUpdateFailCnt::makeRequest(unsigned int, unsigned int)
# range [0x0842bfaa, 0x0842c08d]
0842bfaa +0x00:  push   %ebp
0842bfab +0x01:  mov    %esp,%ebp
0842bfad +0x03:  push   %esi
0842bfae +0x04:  push   %ebx
0842bfaf +0x05:  sub    $0x20,%esp
0842bfb2 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842bfb7 +0x0d:  movl   $0x6f0b,0x8(%esp)
0842bfbf +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0842bfc7 +0x1d:  mov    %eax,(%esp)
0842bfca +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842bfcf +0x25:  movl   $0x1,0x8(%esp)
0842bfd7 +0x2d:  mov    %eax,0x4(%esp)
0842bfdb +0x31:  lea    -0x14(%ebp),%eax
0842bfde +0x34:  mov    %eax,(%esp)
0842bfe1 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842bfe6 +0x3c:  lea    -0x14(%ebp),%eax
0842bfe9 +0x3f:  mov    %eax,(%esp)
0842bfec +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842bff1 +0x47:  movl   $0x101,0x4(%esp)
0842bff9 +0x4f:  mov    %eax,(%esp)
0842bffc +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842c001 +0x57:  lea    -0x14(%ebp),%eax
0842c004 +0x5a:  mov    %eax,(%esp)
0842c007 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842c00c +0x62:  movl   $0xffffffff,0x4(%esp)
0842c014 +0x6a:  mov    %eax,(%esp)
0842c017 +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842c01c +0x72:  lea    -0x14(%ebp),%eax
0842c01f +0x75:  mov    %eax,(%esp)
0842c022 +0x78:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0842c027 +0x7d:  mov    %eax,(%esp)
0842c02a +0x80:  call   08451e1a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4a30>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4a30
0842c02f +0x85:  mov    %eax,-0xc(%ebp)
0842c032 +0x88:  mov    -0xc(%ebp),%eax
0842c035 +0x8b:  mov    0x8(%ebp),%edx
0842c038 +0x8e:  mov    %edx,(%eax)
0842c03a +0x90:  mov    -0xc(%ebp),%eax
0842c03d +0x93:  mov    0xc(%ebp),%edx
0842c040 +0x96:  mov    %edx,0x4(%eax)
0842c043 +0x99:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842c048 +0x9e:  lea    -0x14(%ebp),%edx
0842c04b +0xa1:  mov    %edx,0x8(%esp)
0842c04f +0xa5:  movl   $0x2,0x4(%esp)
0842c057 +0xad:  mov    %eax,(%esp)
0842c05a +0xb0:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842c05f +0xb5:  jmp    0842c07c <+0xd2>
0842c061 +0xb7:  mov    %edx,%ebx
0842c063 +0xb9:  mov    %eax,%esi
0842c065 +0xbb:  lea    -0x14(%ebp),%eax
0842c068 +0xbe:  mov    %eax,(%esp)
0842c06b +0xc1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842c070 +0xc6:  mov    %esi,%eax
0842c072 +0xc8:  mov    %ebx,%edx
0842c074 +0xca:  mov    %eax,(%esp)
0842c077 +0xcd:  call   08ae3750 <_Unwind_Resume>
0842c07c +0xd2:  lea    -0x14(%ebp),%eax
0842c07f +0xd5:  mov    %eax,(%esp)
0842c082 +0xd8:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842c087 +0xdd:  add    $0x20,%esp
0842c08a +0xe0:  pop    %ebx
0842c08b +0xe1:  pop    %esi
0842c08c +0xe2:  pop    %ebp
0842c08d +0xe3:  ret
```

## 反编译 C

```c
// DB_SecurityCardUpdateFailCnt::makeRequest @ 0x842bfaa

/* DB_SecurityCardUpdateFailCnt::makeRequest(unsigned int, unsigned int) */

void DB_SecurityCardUpdateFailCnt::makeRequest(uint param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SECURITY_CARD_UPDATE_FAIL_CNT *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6f0b);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842bffc to 0842c05e has its CatchHandler @ 0842c061 */
  CStreamGuard::operator<<(pCVar2,0x101);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SECURITY_CARD_UPDATE_FAIL_CNT>(pCVar2);
  *(uint *)local_10 = param_1;
  *(uint *)(local_10 + 4) = param_2;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```

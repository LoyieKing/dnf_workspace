# makeRequest

`_ZN19DB_ChangeLetterStat11makeRequestEiiiii`

`DB_ChangeLetterStat::makeRequest(int, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `DB_ChangeLetterStat` | `0x084261fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084261fc  _ZN19DB_ChangeLetterStat11makeRequestEiiiii
#           DB_ChangeLetterStat::makeRequest(int, int, int, int, int)
# range [0x084261fc, 0x084262e9]
084261fc +0x00:  push   %ebp
084261fd +0x01:  mov    %esp,%ebp
084261ff +0x03:  push   %esi
08426200 +0x04:  push   %ebx
08426201 +0x05:  sub    $0x20,%esp
08426204 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08426209 +0x0d:  movl   $0x6454,0x8(%esp)
08426211 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
08426219 +0x1d:  mov    %eax,(%esp)
0842621c +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08426221 +0x25:  movl   $0x1,0x8(%esp)
08426229 +0x2d:  mov    %eax,0x4(%esp)
0842622d +0x31:  lea    -0x14(%ebp),%eax
08426230 +0x34:  mov    %eax,(%esp)
08426233 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08426238 +0x3c:  lea    -0x14(%ebp),%eax
0842623b +0x3f:  mov    %eax,(%esp)
0842623e +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08426243 +0x47:  mov    0x8(%ebp),%edx
08426246 +0x4a:  mov    %edx,0x4(%esp)
0842624a +0x4e:  mov    %eax,(%esp)
0842624d +0x51:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08426252 +0x56:  lea    -0x14(%ebp),%eax
08426255 +0x59:  mov    %eax,(%esp)
08426258 +0x5c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842625d +0x61:  mov    0xc(%ebp),%edx
08426260 +0x64:  mov    %edx,0x4(%esp)
08426264 +0x68:  mov    %eax,(%esp)
08426267 +0x6b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842626c +0x70:  lea    -0x14(%ebp),%eax
0842626f +0x73:  mov    %eax,(%esp)
08426272 +0x76:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08426277 +0x7b:  mov    %eax,(%esp)
0842627a +0x7e:  call   08452054 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4c6a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4c6a
0842627f +0x83:  mov    %eax,-0xc(%ebp)
08426282 +0x86:  mov    -0xc(%ebp),%eax
08426285 +0x89:  mov    0x10(%ebp),%edx
08426288 +0x8c:  mov    %edx,(%eax)
0842628a +0x8e:  mov    0x14(%ebp),%edx
0842628d +0x91:  mov    -0xc(%ebp),%eax
08426290 +0x94:  mov    %edx,0x4(%eax)
08426293 +0x97:  mov    0x18(%ebp),%eax
08426296 +0x9a:  mov    %eax,%edx
08426298 +0x9c:  mov    -0xc(%ebp),%eax
0842629b +0x9f:  mov    %dx,0x8(%eax)
0842629f +0xa3:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084262a4 +0xa8:  lea    -0x14(%ebp),%edx
084262a7 +0xab:  mov    %edx,0x8(%esp)
084262ab +0xaf:  movl   $0x1,0x4(%esp)
084262b3 +0xb7:  mov    %eax,(%esp)
084262b6 +0xba:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084262bb +0xbf:  jmp    084262d8 <+0xdc>
084262bd +0xc1:  mov    %edx,%ebx
084262bf +0xc3:  mov    %eax,%esi
084262c1 +0xc5:  lea    -0x14(%ebp),%eax
084262c4 +0xc8:  mov    %eax,(%esp)
084262c7 +0xcb:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084262cc +0xd0:  mov    %esi,%eax
084262ce +0xd2:  mov    %ebx,%edx
084262d0 +0xd4:  mov    %eax,(%esp)
084262d3 +0xd7:  call   08ae3750 <_Unwind_Resume>
084262d8 +0xdc:  lea    -0x14(%ebp),%eax
084262db +0xdf:  mov    %eax,(%esp)
084262de +0xe2:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084262e3 +0xe7:  add    $0x20,%esp
084262e6 +0xea:  pop    %ebx
084262e7 +0xeb:  pop    %esi
084262e8 +0xec:  pop    %ebp
084262e9 +0xed:  ret
```

## 反编译 C

```c
// DB_ChangeLetterStat::makeRequest @ 0x84261fc

/* DB_ChangeLetterStat::makeRequest(int, int, int, int, int) */

void DB_ChangeLetterStat::makeRequest(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_LETTER_STAT *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6454);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842624d to 084262ba has its CatchHandler @ 084262bd */
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_LETTER_STAT>(pCVar2);
  *(int *)local_10 = param_3;
  *(int *)(local_10 + 4) = param_4;
  *(short *)(local_10 + 8) = (short)param_5;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```

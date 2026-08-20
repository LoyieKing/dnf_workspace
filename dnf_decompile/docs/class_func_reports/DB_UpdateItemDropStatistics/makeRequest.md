# makeRequest

`_ZN27DB_UpdateItemDropStatistics11makeRequestEiiPjS0_S0_S0_`

`DB_UpdateItemDropStatistics::makeRequest(int, int, unsigned int*, unsigned int*, unsigned int*, unsigned int*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateItemDropStatistics` | `0x0842894c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842894c  _ZN27DB_UpdateItemDropStatistics11makeRequestEiiPjS0_S0_S0_
#           DB_UpdateItemDropStatistics::makeRequest(int, int, unsigned int*, unsigned int*, unsigned int*, unsigned int*)
# range [0x0842894c, 0x08428b25]
0842894c +0x000:  push   %ebp
0842894d +0x001:  mov    %esp,%ebp
0842894f +0x003:  push   %esi
08428950 +0x004:  push   %ebx
08428951 +0x005:  sub    $0x30,%esp
08428954 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08428959 +0x00d:  movl   $0x6a14,0x8(%esp)
08428961 +0x015:  movl   $"DBThread.cpp",0x4(%esp)
08428969 +0x01d:  mov    %eax,(%esp)
0842896c +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08428971 +0x025:  movl   $0x1,0x8(%esp)
08428979 +0x02d:  mov    %eax,0x4(%esp)
0842897d +0x031:  lea    -0x20(%ebp),%eax
08428980 +0x034:  mov    %eax,(%esp)
08428983 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08428988 +0x03c:  lea    -0x20(%ebp),%eax
0842898b +0x03f:  mov    %eax,(%esp)
0842898e +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08428993 +0x047:  movl   $0xd2,0x4(%esp)
0842899b +0x04f:  mov    %eax,(%esp)
0842899e +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084289a3 +0x057:  lea    -0x20(%ebp),%eax
084289a6 +0x05a:  mov    %eax,(%esp)
084289a9 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084289ae +0x062:  movl   $0xffffffff,0x4(%esp)
084289b6 +0x06a:  mov    %eax,(%esp)
084289b9 +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084289be +0x072:  lea    -0x20(%ebp),%eax
084289c1 +0x075:  mov    %eax,(%esp)
084289c4 +0x078:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084289c9 +0x07d:  mov    0x8(%ebp),%edx
084289cc +0x080:  mov    %edx,0x4(%esp)
084289d0 +0x084:  mov    %eax,(%esp)
084289d3 +0x087:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084289d8 +0x08c:  lea    -0x20(%ebp),%eax
084289db +0x08f:  mov    %eax,(%esp)
084289de +0x092:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084289e3 +0x097:  mov    0xc(%ebp),%edx
084289e6 +0x09a:  mov    %edx,0x4(%esp)
084289ea +0x09e:  mov    %eax,(%esp)
084289ed +0x0a1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084289f2 +0x0a6:  movl   $0x0,-0x18(%ebp)
084289f9 +0x0ad:  jmp    08428a21 <+0xd5>
084289fb +0x0af:  mov    -0x18(%ebp),%eax
084289fe +0x0b2:  shl    $0x2,%eax
08428a01 +0x0b5:  add    0x10(%ebp),%eax
08428a04 +0x0b8:  mov    (%eax),%ebx
08428a06 +0x0ba:  lea    -0x20(%ebp),%eax
08428a09 +0x0bd:  mov    %eax,(%esp)
08428a0c +0x0c0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08428a11 +0x0c5:  mov    %ebx,0x4(%esp)
08428a15 +0x0c9:  mov    %eax,(%esp)
08428a18 +0x0cc:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08428a1d +0x0d1:  addl   $0x1,-0x18(%ebp)
08428a21 +0x0d5:  cmpl   $0x5,-0x18(%ebp)
08428a25 +0x0d9:  setle  %al
08428a28 +0x0dc:  test   %al,%al
08428a2a +0x0de:  jne    084289fb <+0xaf>
08428a2c +0x0e0:  movl   $0x0,-0x14(%ebp)
08428a33 +0x0e7:  jmp    08428a5b <+0x10f>
08428a35 +0x0e9:  mov    -0x14(%ebp),%eax
08428a38 +0x0ec:  shl    $0x2,%eax
08428a3b +0x0ef:  add    0x14(%ebp),%eax
08428a3e +0x0f2:  mov    (%eax),%ebx
08428a40 +0x0f4:  lea    -0x20(%ebp),%eax
08428a43 +0x0f7:  mov    %eax,(%esp)
08428a46 +0x0fa:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08428a4b +0x0ff:  mov    %ebx,0x4(%esp)
08428a4f +0x103:  mov    %eax,(%esp)
08428a52 +0x106:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08428a57 +0x10b:  addl   $0x1,-0x14(%ebp)
08428a5b +0x10f:  cmpl   $0x5,-0x14(%ebp)
08428a5f +0x113:  setle  %al
08428a62 +0x116:  test   %al,%al
08428a64 +0x118:  jne    08428a35 <+0xe9>
08428a66 +0x11a:  movl   $0x0,-0x10(%ebp)
08428a6d +0x121:  jmp    08428a95 <+0x149>
08428a6f +0x123:  mov    -0x10(%ebp),%eax
08428a72 +0x126:  shl    $0x2,%eax
08428a75 +0x129:  add    0x18(%ebp),%eax
08428a78 +0x12c:  mov    (%eax),%ebx
08428a7a +0x12e:  lea    -0x20(%ebp),%eax
08428a7d +0x131:  mov    %eax,(%esp)
08428a80 +0x134:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08428a85 +0x139:  mov    %ebx,0x4(%esp)
08428a89 +0x13d:  mov    %eax,(%esp)
08428a8c +0x140:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08428a91 +0x145:  addl   $0x1,-0x10(%ebp)
08428a95 +0x149:  cmpl   $0x5,-0x10(%ebp)
08428a99 +0x14d:  setle  %al
08428a9c +0x150:  test   %al,%al
08428a9e +0x152:  jne    08428a6f <+0x123>
08428aa0 +0x154:  movl   $0x0,-0xc(%ebp)
08428aa7 +0x15b:  jmp    08428acf <+0x183>
08428aa9 +0x15d:  mov    -0xc(%ebp),%eax
08428aac +0x160:  shl    $0x2,%eax
08428aaf +0x163:  add    0x1c(%ebp),%eax
08428ab2 +0x166:  mov    (%eax),%ebx
08428ab4 +0x168:  lea    -0x20(%ebp),%eax
08428ab7 +0x16b:  mov    %eax,(%esp)
08428aba +0x16e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08428abf +0x173:  mov    %ebx,0x4(%esp)
08428ac3 +0x177:  mov    %eax,(%esp)
08428ac6 +0x17a:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08428acb +0x17f:  addl   $0x1,-0xc(%ebp)
08428acf +0x183:  cmpl   $0x5,-0xc(%ebp)
08428ad3 +0x187:  setle  %al
08428ad6 +0x18a:  test   %al,%al
08428ad8 +0x18c:  jne    08428aa9 <+0x15d>
08428ada +0x18e:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08428adf +0x193:  lea    -0x20(%ebp),%edx
08428ae2 +0x196:  mov    %edx,0x8(%esp)
08428ae6 +0x19a:  movl   $0x4,0x4(%esp)
08428aee +0x1a2:  mov    %eax,(%esp)
08428af1 +0x1a5:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08428af6 +0x1aa:  jmp    08428b13 <+0x1c7>
08428af8 +0x1ac:  mov    %edx,%ebx
08428afa +0x1ae:  mov    %eax,%esi
08428afc +0x1b0:  lea    -0x20(%ebp),%eax
08428aff +0x1b3:  mov    %eax,(%esp)
08428b02 +0x1b6:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08428b07 +0x1bb:  mov    %esi,%eax
08428b09 +0x1bd:  mov    %ebx,%edx
08428b0b +0x1bf:  mov    %eax,(%esp)
08428b0e +0x1c2:  call   08ae3750 <_Unwind_Resume>
08428b13 +0x1c7:  lea    -0x20(%ebp),%eax
08428b16 +0x1ca:  mov    %eax,(%esp)
08428b19 +0x1cd:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08428b1e +0x1d2:  add    $0x30,%esp
08428b21 +0x1d5:  pop    %ebx
08428b22 +0x1d6:  pop    %esi
08428b23 +0x1d7:  pop    %ebp
08428b24 +0x1d8:  ret
08428b25 +0x1d9:  nop
```

## 反编译 C

```c
// DB_UpdateItemDropStatistics::makeRequest @ 0x842894c

/* DB_UpdateItemDropStatistics::makeRequest(int, int, unsigned int*, unsigned int*, unsigned int*,
   unsigned int*) */

void DB_UpdateItemDropStatistics::makeRequest
               (int param_1,int param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6)

{
  uint uVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  CStreamGuard local_24 [8];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6a14);
  CStreamGuard::CStreamGuard(local_24,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 0842899e to 08428af5 has its CatchHandler @ 08428af8 */
  CStreamGuard::operator<<(pCVar3,0xd2);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
  CStreamGuard::operator<<(pCVar3,-1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
  CStreamGuard::operator<<(pCVar3,param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
  CStreamGuard::operator<<(pCVar3,param_2);
  for (local_1c = 0; local_1c < 6; local_1c = local_1c + 1) {
    uVar1 = param_3[local_1c];
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar3,uVar1);
  }
  for (local_18 = 0; local_18 < 6; local_18 = local_18 + 1) {
    uVar1 = param_4[local_18];
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar3,uVar1);
  }
  for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
    uVar1 = param_5[local_14];
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar3,uVar1);
  }
  for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
    uVar1 = param_6[local_10];
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar3,uVar1);
  }
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_24);
  CStreamGuard::~CStreamGuard(local_24);
  return;
}
```

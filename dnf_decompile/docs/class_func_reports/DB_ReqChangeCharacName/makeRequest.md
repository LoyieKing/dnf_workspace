# makeRequest

`_ZN22DB_ReqChangeCharacName11makeRequestEiiPKci`

`DB_ReqChangeCharacName::makeRequest(int, int, char const*, int)`

| 类 | 地址 |
|---|---|
| `DB_ReqChangeCharacName` | `0x08426590` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08426590  _ZN22DB_ReqChangeCharacName11makeRequestEiiPKci
#           DB_ReqChangeCharacName::makeRequest(int, int, char const*, int)
# range [0x08426590, 0x084266a3]
08426590 +0x000:  push   %ebp
08426591 +0x001:  mov    %esp,%ebp
08426593 +0x003:  push   %esi
08426594 +0x004:  push   %ebx
08426595 +0x005:  sub    $0x20,%esp
08426598 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842659d +0x00d:  movl   $0x64de,0x8(%esp)
084265a5 +0x015:  movl   $"DBThread.cpp",0x4(%esp)
084265ad +0x01d:  mov    %eax,(%esp)
084265b0 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084265b5 +0x025:  movl   $0x1,0x8(%esp)
084265bd +0x02d:  mov    %eax,0x4(%esp)
084265c1 +0x031:  lea    -0x14(%ebp),%eax
084265c4 +0x034:  mov    %eax,(%esp)
084265c7 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084265cc +0x03c:  lea    -0x14(%ebp),%eax
084265cf +0x03f:  mov    %eax,(%esp)
084265d2 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084265d7 +0x047:  movl   $0xc3,0x4(%esp)
084265df +0x04f:  mov    %eax,(%esp)
084265e2 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084265e7 +0x057:  lea    -0x14(%ebp),%eax
084265ea +0x05a:  mov    %eax,(%esp)
084265ed +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084265f2 +0x062:  mov    0x8(%ebp),%edx
084265f5 +0x065:  mov    %edx,0x4(%esp)
084265f9 +0x069:  mov    %eax,(%esp)
084265fc +0x06c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08426601 +0x071:  lea    -0x14(%ebp),%eax
08426604 +0x074:  mov    %eax,(%esp)
08426607 +0x077:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0842660c +0x07c:  mov    %eax,(%esp)
0842660f +0x07f:  call   084520be <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4cd4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4cd4
08426614 +0x084:  mov    %eax,-0xc(%ebp)
08426617 +0x087:  mov    -0xc(%ebp),%eax
0842661a +0x08a:  mov    0xc(%ebp),%edx
0842661d +0x08d:  mov    %edx,(%eax)
0842661f +0x08f:  mov    -0xc(%ebp),%eax
08426622 +0x092:  lea    0x4(%eax),%edx
08426625 +0x095:  movl   $0x1d,0x8(%esp)
0842662d +0x09d:  mov    0x10(%ebp),%eax
08426630 +0x0a0:  mov    %eax,0x4(%esp)
08426634 +0x0a4:  mov    %edx,(%esp)
08426637 +0x0a7:  call   0807d8d0 <_init+0x1c8>
0842663c +0x0ac:  mov    0x14(%ebp),%edx
0842663f +0x0af:  mov    -0xc(%ebp),%eax
08426642 +0x0b2:  mov    %edx,0x24(%eax)
08426645 +0x0b5:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0842664a +0x0ba:  mov    0x378(%eax),%eax
08426650 +0x0c0:  mov    %eax,%edx
08426652 +0x0c2:  mov    -0xc(%ebp),%eax
08426655 +0x0c5:  mov    %dl,0x2c(%eax)
08426658 +0x0c8:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842665d +0x0cd:  lea    -0x14(%ebp),%edx
08426660 +0x0d0:  mov    %edx,0x8(%esp)
08426664 +0x0d4:  movl   $0x2,0x4(%esp)
0842666c +0x0dc:  mov    %eax,(%esp)
0842666f +0x0df:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08426674 +0x0e4:  jmp    08426691 <+0x101>
08426676 +0x0e6:  mov    %edx,%ebx
08426678 +0x0e8:  mov    %eax,%esi
0842667a +0x0ea:  lea    -0x14(%ebp),%eax
0842667d +0x0ed:  mov    %eax,(%esp)
08426680 +0x0f0:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08426685 +0x0f5:  mov    %esi,%eax
08426687 +0x0f7:  mov    %ebx,%edx
08426689 +0x0f9:  mov    %eax,(%esp)
0842668c +0x0fc:  call   08ae3750 <_Unwind_Resume>
08426691 +0x101:  lea    -0x14(%ebp),%eax
08426694 +0x104:  mov    %eax,(%esp)
08426697 +0x107:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842669c +0x10c:  add    $0x20,%esp
0842669f +0x10f:  pop    %ebx
084266a0 +0x110:  pop    %esi
084266a1 +0x111:  pop    %ebp
084266a2 +0x112:  ret
084266a3 +0x113:  nop
```

## 反编译 C

```c
// DB_ReqChangeCharacName::makeRequest @ 0x8426590

/* DB_ReqChangeCharacName::makeRequest(int, int, char const*, int) */

void DB_ReqChangeCharacName::makeRequest(int param_1,int param_2,char *param_3,int param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  CStreamGuard local_18 [8];
  SIG_CHANGE_CHARAC_NAME *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x64de);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 084265e2 to 08426673 has its CatchHandler @ 08426676 */
  CStreamGuard::operator<<(pCVar2,0xc3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_CHANGE_CHARAC_NAME>(pCVar2);
  *(int *)local_10 = param_2;
  strncpy((char *)(local_10 + 4),param_3,0x1d);
  *(int *)(local_10 + 0x24) = param_4;
  iVar3 = G_CEnvironment();
  local_10[0x2c] = SUB41(*(undefined4 *)(iVar3 + 0x378),0);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```

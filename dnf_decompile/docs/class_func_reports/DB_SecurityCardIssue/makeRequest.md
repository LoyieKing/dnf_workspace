# makeRequest

`_ZN20DB_SecurityCardIssue11makeRequestEijPKcS1_S1_S1_S1_`

`DB_SecurityCardIssue::makeRequest(int, unsigned int, char const*, char const*, char const*, char const*, char const*)`

| 类 | 地址 |
|---|---|
| `DB_SecurityCardIssue` | `0x0842b57a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842b57a  _ZN20DB_SecurityCardIssue11makeRequestEijPKcS1_S1_S1_S1_
#           DB_SecurityCardIssue::makeRequest(int, unsigned int, char const*, char const*, char const*, char const*, char const*)
# range [0x0842b57a, 0x0842b6e5]
0842b57a +0x000:  push   %ebp
0842b57b +0x001:  mov    %esp,%ebp
0842b57d +0x003:  push   %esi
0842b57e +0x004:  push   %ebx
0842b57f +0x005:  sub    $0x20,%esp
0842b582 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842b587 +0x00d:  movl   $0x6e0a,0x8(%esp)
0842b58f +0x015:  movl   $"DBThread.cpp",0x4(%esp)
0842b597 +0x01d:  mov    %eax,(%esp)
0842b59a +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842b59f +0x025:  movl   $0x1,0x8(%esp)
0842b5a7 +0x02d:  mov    %eax,0x4(%esp)
0842b5ab +0x031:  lea    -0x14(%ebp),%eax
0842b5ae +0x034:  mov    %eax,(%esp)
0842b5b1 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842b5b6 +0x03c:  lea    -0x14(%ebp),%eax
0842b5b9 +0x03f:  mov    %eax,(%esp)
0842b5bc +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842b5c1 +0x047:  movl   $0xfd,0x4(%esp)
0842b5c9 +0x04f:  mov    %eax,(%esp)
0842b5cc +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842b5d1 +0x057:  lea    -0x14(%ebp),%eax
0842b5d4 +0x05a:  mov    %eax,(%esp)
0842b5d7 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842b5dc +0x062:  mov    0x8(%ebp),%edx
0842b5df +0x065:  mov    %edx,0x4(%esp)
0842b5e3 +0x069:  mov    %eax,(%esp)
0842b5e6 +0x06c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842b5eb +0x071:  lea    -0x14(%ebp),%eax
0842b5ee +0x074:  mov    %eax,(%esp)
0842b5f1 +0x077:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0842b5f6 +0x07c:  mov    %eax,(%esp)
0842b5f9 +0x07f:  call   08452608 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x521e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x521e
0842b5fe +0x084:  mov    %eax,-0xc(%ebp)
0842b601 +0x087:  mov    -0xc(%ebp),%eax
0842b604 +0x08a:  mov    0xc(%ebp),%edx
0842b607 +0x08d:  mov    %edx,(%eax)
0842b609 +0x08f:  mov    -0xc(%ebp),%eax
0842b60c +0x092:  lea    0x31(%eax),%edx
0842b60f +0x095:  movl   $0x6,0x8(%esp)
0842b617 +0x09d:  mov    0x10(%ebp),%eax
0842b61a +0x0a0:  mov    %eax,0x4(%esp)
0842b61e +0x0a4:  mov    %edx,(%esp)
0842b621 +0x0a7:  call   0807d8d0 <_init+0x1c8>
0842b626 +0x0ac:  mov    -0xc(%ebp),%eax
0842b629 +0x0af:  lea    0x4(%eax),%edx
0842b62c +0x0b2:  movl   $0x21,0x8(%esp)
0842b634 +0x0ba:  mov    0x14(%ebp),%eax
0842b637 +0x0bd:  mov    %eax,0x4(%esp)
0842b63b +0x0c1:  mov    %edx,(%esp)
0842b63e +0x0c4:  call   0807d8d0 <_init+0x1c8>
0842b643 +0x0c9:  mov    -0xc(%ebp),%eax
0842b646 +0x0cc:  lea    0x25(%eax),%edx
0842b649 +0x0cf:  movl   $0xc,0x8(%esp)
0842b651 +0x0d7:  mov    0x18(%ebp),%eax
0842b654 +0x0da:  mov    %eax,0x4(%esp)
0842b658 +0x0de:  mov    %edx,(%esp)
0842b65b +0x0e1:  call   0807d8d0 <_init+0x1c8>
0842b660 +0x0e6:  mov    -0xc(%ebp),%eax
0842b663 +0x0e9:  lea    0x37(%eax),%edx
0842b666 +0x0ec:  movl   $0x27,0x8(%esp)
0842b66e +0x0f4:  mov    0x20(%ebp),%eax
0842b671 +0x0f7:  mov    %eax,0x4(%esp)
0842b675 +0x0fb:  mov    %edx,(%esp)
0842b678 +0x0fe:  call   0807d8d0 <_init+0x1c8>
0842b67d +0x103:  mov    -0xc(%ebp),%eax
0842b680 +0x106:  lea    0x63(%eax),%edx
0842b683 +0x109:  movl   $0x29,0x8(%esp)
0842b68b +0x111:  mov    0x1c(%ebp),%eax
0842b68e +0x114:  mov    %eax,0x4(%esp)
0842b692 +0x118:  mov    %edx,(%esp)
0842b695 +0x11b:  call   0807d8d0 <_init+0x1c8>
0842b69a +0x120:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842b69f +0x125:  lea    -0x14(%ebp),%edx
0842b6a2 +0x128:  mov    %edx,0x8(%esp)
0842b6a6 +0x12c:  movl   $0x2,0x4(%esp)
0842b6ae +0x134:  mov    %eax,(%esp)
0842b6b1 +0x137:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842b6b6 +0x13c:  jmp    0842b6d3 <+0x159>
0842b6b8 +0x13e:  mov    %edx,%ebx
0842b6ba +0x140:  mov    %eax,%esi
0842b6bc +0x142:  lea    -0x14(%ebp),%eax
0842b6bf +0x145:  mov    %eax,(%esp)
0842b6c2 +0x148:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842b6c7 +0x14d:  mov    %esi,%eax
0842b6c9 +0x14f:  mov    %ebx,%edx
0842b6cb +0x151:  mov    %eax,(%esp)
0842b6ce +0x154:  call   08ae3750 <_Unwind_Resume>
0842b6d3 +0x159:  lea    -0x14(%ebp),%eax
0842b6d6 +0x15c:  mov    %eax,(%esp)
0842b6d9 +0x15f:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842b6de +0x164:  add    $0x20,%esp
0842b6e1 +0x167:  pop    %ebx
0842b6e2 +0x168:  pop    %esi
0842b6e3 +0x169:  pop    %ebp
0842b6e4 +0x16a:  ret
0842b6e5 +0x16b:  nop
```

## 反编译 C

```c
// DB_SecurityCardIssue::makeRequest @ 0x842b57a

/* DB_SecurityCardIssue::makeRequest(int, unsigned int, char const*, char const*, char const*, char
   const*, char const*) */

void DB_SecurityCardIssue::makeRequest
               (int param_1,uint param_2,char *param_3,char *param_4,char *param_5,char *param_6,
               char *param_7)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SECURITY_CARD_ISSUE *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6e0a);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842b5cc to 0842b6b5 has its CatchHandler @ 0842b6b8 */
  CStreamGuard::operator<<(pCVar2,0xfd);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SECURITY_CARD_ISSUE>(pCVar2);
  *(uint *)local_10 = param_2;
  strncpy((char *)(local_10 + 0x31),param_3,6);
  strncpy((char *)(local_10 + 4),param_4,0x21);
  strncpy((char *)(local_10 + 0x25),param_5,0xc);
  strncpy((char *)(local_10 + 0x37),param_7,0x27);
  strncpy((char *)(local_10 + 99),param_6,0x29);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```

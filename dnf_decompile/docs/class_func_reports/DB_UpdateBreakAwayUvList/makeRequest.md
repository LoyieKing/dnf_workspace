# makeRequest

`_ZN24DB_UpdateBreakAwayUvList11makeRequestEjPc`

`DB_UpdateBreakAwayUvList::makeRequest(unsigned int, char*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateBreakAwayUvList` | `0x0843873a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843873a  _ZN24DB_UpdateBreakAwayUvList11makeRequestEjPc
#           DB_UpdateBreakAwayUvList::makeRequest(unsigned int, char*)
# range [0x0843873a, 0x08438841]
0843873a +0x000:  push   %ebp
0843873b +0x001:  mov    %esp,%ebp
0843873d +0x003:  push   %esi
0843873e +0x004:  push   %ebx
0843873f +0x005:  sub    $0x20,%esp
08438742 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08438747 +0x00d:  movl   $0x8622,0x8(%esp)
0843874f +0x015:  movl   $"DBThread.cpp",0x4(%esp)
08438757 +0x01d:  mov    %eax,(%esp)
0843875a +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843875f +0x025:  movl   $0x1,0x8(%esp)
08438767 +0x02d:  mov    %eax,0x4(%esp)
0843876b +0x031:  lea    -0x14(%ebp),%eax
0843876e +0x034:  mov    %eax,(%esp)
08438771 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08438776 +0x03c:  lea    -0x14(%ebp),%eax
08438779 +0x03f:  mov    %eax,(%esp)
0843877c +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08438781 +0x047:  movl   $0x147,0x4(%esp)
08438789 +0x04f:  mov    %eax,(%esp)
0843878c +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08438791 +0x057:  lea    -0x14(%ebp),%eax
08438794 +0x05a:  mov    %eax,(%esp)
08438797 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843879c +0x062:  movl   $0xffffffff,0x4(%esp)
084387a4 +0x06a:  mov    %eax,(%esp)
084387a7 +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084387ac +0x072:  lea    -0x14(%ebp),%eax
084387af +0x075:  mov    %eax,(%esp)
084387b2 +0x078:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084387b7 +0x07d:  mov    0x8(%ebp),%edx
084387ba +0x080:  mov    %edx,0x4(%esp)
084387be +0x084:  mov    %eax,(%esp)
084387c1 +0x087:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
084387c6 +0x08c:  lea    -0x14(%ebp),%eax
084387c9 +0x08f:  mov    %eax,(%esp)
084387cc +0x092:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084387d1 +0x097:  mov    %eax,(%esp)
084387d4 +0x09a:  call   084536d2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x62e8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x62e8
084387d9 +0x09f:  mov    %eax,-0xc(%ebp)
084387dc +0x0a2:  mov    -0xc(%ebp),%eax
084387df +0x0a5:  movl   $0x1f,0x8(%esp)
084387e7 +0x0ad:  mov    0xc(%ebp),%edx
084387ea +0x0b0:  mov    %edx,0x4(%esp)
084387ee +0x0b4:  mov    %eax,(%esp)
084387f1 +0x0b7:  call   0807d8d0 <_init+0x1c8>
084387f6 +0x0bc:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084387fb +0x0c1:  lea    -0x14(%ebp),%edx
084387fe +0x0c4:  mov    %edx,0x8(%esp)
08438802 +0x0c8:  movl   $0x2,0x4(%esp)
0843880a +0x0d0:  mov    %eax,(%esp)
0843880d +0x0d3:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08438812 +0x0d8:  jmp    0843882f <+0xf5>
08438814 +0x0da:  mov    %edx,%ebx
08438816 +0x0dc:  mov    %eax,%esi
08438818 +0x0de:  lea    -0x14(%ebp),%eax
0843881b +0x0e1:  mov    %eax,(%esp)
0843881e +0x0e4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08438823 +0x0e9:  mov    %esi,%eax
08438825 +0x0eb:  mov    %ebx,%edx
08438827 +0x0ed:  mov    %eax,(%esp)
0843882a +0x0f0:  call   08ae3750 <_Unwind_Resume>
0843882f +0x0f5:  lea    -0x14(%ebp),%eax
08438832 +0x0f8:  mov    %eax,(%esp)
08438835 +0x0fb:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843883a +0x100:  add    $0x20,%esp
0843883d +0x103:  pop    %ebx
0843883e +0x104:  pop    %esi
0843883f +0x105:  pop    %ebp
08438840 +0x106:  ret
08438841 +0x107:  nop
```

## 反编译 C

```c
// DB_UpdateBreakAwayUvList::makeRequest @ 0x843873a

/* DB_UpdateBreakAwayUvList::makeRequest(unsigned int, char*) */

void DB_UpdateBreakAwayUvList::makeRequest(uint param_1,char *param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_BREAK_AWAY_UV_LIST *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8622);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0843878c to 08438811 has its CatchHandler @ 08438814 */
  CStreamGuard::operator<<(pCVar2,0x147);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_BREAK_AWAY_UV_LIST>(pCVar2);
  strncpy((char *)local_10,param_2,0x1f);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```

# makeRequest

`_ZN18DB_SelectCharacMid11makeRequestEijPKcjjj`

`DB_SelectCharacMid::makeRequest(int, unsigned int, char const*, unsigned int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_SelectCharacMid` | `0x0844676c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844676c  _ZN18DB_SelectCharacMid11makeRequestEijPKcjjj
#           DB_SelectCharacMid::makeRequest(int, unsigned int, char const*, unsigned int, unsigned int, unsigned int)
# range [0x0844676c, 0x0844687d]
0844676c +0x000:  push   %ebp
0844676d +0x001:  mov    %esp,%ebp
0844676f +0x003:  push   %esi
08446770 +0x004:  push   %ebx
08446771 +0x005:  sub    $0x20,%esp
08446774 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08446779 +0x00d:  movl   $0xae42,0x8(%esp)
08446781 +0x015:  movl   $"DBThread.cpp",0x4(%esp)
08446789 +0x01d:  mov    %eax,(%esp)
0844678c +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08446791 +0x025:  movl   $0x1,0x8(%esp)
08446799 +0x02d:  mov    %eax,0x4(%esp)
0844679d +0x031:  lea    -0x14(%ebp),%eax
084467a0 +0x034:  mov    %eax,(%esp)
084467a3 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084467a8 +0x03c:  lea    -0x14(%ebp),%eax
084467ab +0x03f:  mov    %eax,(%esp)
084467ae +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084467b3 +0x047:  movl   $0x2b9,0x4(%esp)
084467bb +0x04f:  mov    %eax,(%esp)
084467be +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084467c3 +0x057:  lea    -0x14(%ebp),%eax
084467c6 +0x05a:  mov    %eax,(%esp)
084467c9 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084467ce +0x062:  mov    0x8(%ebp),%edx
084467d1 +0x065:  mov    %edx,0x4(%esp)
084467d5 +0x069:  mov    %eax,(%esp)
084467d8 +0x06c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084467dd +0x071:  lea    -0x14(%ebp),%eax
084467e0 +0x074:  mov    %eax,(%esp)
084467e3 +0x077:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084467e8 +0x07c:  mov    %eax,(%esp)
084467eb +0x07f:  call   08454306 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6f1c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6f1c
084467f0 +0x084:  mov    %eax,-0xc(%ebp)
084467f3 +0x087:  mov    -0xc(%ebp),%eax
084467f6 +0x08a:  mov    0xc(%ebp),%edx
084467f9 +0x08d:  mov    %edx,(%eax)
084467fb +0x08f:  mov    -0xc(%ebp),%eax
084467fe +0x092:  mov    0x14(%ebp),%edx
08446801 +0x095:  mov    %edx,0x4(%eax)
08446804 +0x098:  mov    -0xc(%ebp),%eax
08446807 +0x09b:  mov    0x18(%ebp),%edx
0844680a +0x09e:  mov    %edx,0x8(%eax)
0844680d +0x0a1:  mov    -0xc(%ebp),%eax
08446810 +0x0a4:  mov    0x1c(%ebp),%edx
08446813 +0x0a7:  mov    %edx,0xc(%eax)
08446816 +0x0aa:  mov    -0xc(%ebp),%eax
08446819 +0x0ad:  lea    0x10(%eax),%edx
0844681c +0x0b0:  movl   $0x1e,0x8(%esp)
08446824 +0x0b8:  mov    0x10(%ebp),%eax
08446827 +0x0bb:  mov    %eax,0x4(%esp)
0844682b +0x0bf:  mov    %edx,(%esp)
0844682e +0x0c2:  call   0807d8d0 <_init+0x1c8>
08446833 +0x0c7:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08446838 +0x0cc:  lea    -0x14(%ebp),%edx
0844683b +0x0cf:  mov    %edx,0x8(%esp)
0844683f +0x0d3:  movl   $0x2,0x4(%esp)
08446847 +0x0db:  mov    %eax,(%esp)
0844684a +0x0de:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0844684f +0x0e3:  jmp    0844686c <+0x100>
08446851 +0x0e5:  mov    %edx,%ebx
08446853 +0x0e7:  mov    %eax,%esi
08446855 +0x0e9:  lea    -0x14(%ebp),%eax
08446858 +0x0ec:  mov    %eax,(%esp)
0844685b +0x0ef:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08446860 +0x0f4:  mov    %esi,%eax
08446862 +0x0f6:  mov    %ebx,%edx
08446864 +0x0f8:  mov    %eax,(%esp)
08446867 +0x0fb:  call   08ae3750 <_Unwind_Resume>
0844686c +0x100:  lea    -0x14(%ebp),%eax
0844686f +0x103:  mov    %eax,(%esp)
08446872 +0x106:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08446877 +0x10b:  add    $0x20,%esp
0844687a +0x10e:  pop    %ebx
0844687b +0x10f:  pop    %esi
0844687c +0x110:  pop    %ebp
0844687d +0x111:  ret
```

## 反编译 C

```c
// DB_SelectCharacMid::makeRequest @ 0x844676c

/* DB_SelectCharacMid::makeRequest(int, unsigned int, char const*, unsigned int, unsigned int,
   unsigned int) */

void DB_SelectCharacMid::makeRequest
               (int param_1,uint param_2,char *param_3,uint param_4,uint param_5,uint param_6)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_CHECK_CHAR_MID *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xae42);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 084467be to 0844684e has its CatchHandler @ 08446851 */
  CStreamGuard::operator<<(pCVar2,0x2b9);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_CHECK_CHAR_MID>(pCVar2);
  *(uint *)local_10 = param_2;
  *(uint *)(local_10 + 4) = param_4;
  *(uint *)(local_10 + 8) = param_5;
  *(uint *)(local_10 + 0xc) = param_6;
  strncpy((char *)(local_10 + 0x10),param_3,0x1e);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```

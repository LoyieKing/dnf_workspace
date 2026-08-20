# makeRequest

`_ZN19DB_SaveUserHandicap11makeRequestEjiiiii`

`DB_SaveUserHandicap::makeRequest(unsigned int, int, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `DB_SaveUserHandicap` | `0x0842801a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842801a  _ZN19DB_SaveUserHandicap11makeRequestEjiiiii
#           DB_SaveUserHandicap::makeRequest(unsigned int, int, int, int, int, int)
# range [0x0842801a, 0x08428153]
0842801a +0x000:  push   %ebp
0842801b +0x001:  mov    %esp,%ebp
0842801d +0x003:  push   %esi
0842801e +0x004:  push   %ebx
0842801f +0x005:  sub    $0x30,%esp
08428022 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08428027 +0x00d:  movl   $0x698a,0x8(%esp)
0842802f +0x015:  movl   $"DBThread.cpp",0x4(%esp)
08428037 +0x01d:  mov    %eax,(%esp)
0842803a +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842803f +0x025:  movl   $0x1,0x8(%esp)
08428047 +0x02d:  mov    %eax,0x4(%esp)
0842804b +0x031:  lea    -0x14(%ebp),%eax
0842804e +0x034:  mov    %eax,(%esp)
08428051 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08428056 +0x03c:  lea    -0x14(%ebp),%eax
08428059 +0x03f:  mov    %eax,(%esp)
0842805c +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08428061 +0x047:  movl   $0xce,0x4(%esp)
08428069 +0x04f:  mov    %eax,(%esp)
0842806c +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08428071 +0x057:  lea    -0x14(%ebp),%eax
08428074 +0x05a:  mov    %eax,(%esp)
08428077 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842807c +0x062:  movl   $0xffffffff,0x4(%esp)
08428084 +0x06a:  mov    %eax,(%esp)
08428087 +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842808c +0x072:  lea    -0x14(%ebp),%eax
0842808f +0x075:  mov    %eax,(%esp)
08428092 +0x078:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08428097 +0x07d:  mov    %eax,(%esp)
0842809a +0x080:  call   0845228e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4ea4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4ea4
0842809f +0x085:  mov    %eax,-0xc(%ebp)
084280a2 +0x088:  mov    -0xc(%ebp),%eax
084280a5 +0x08b:  mov    0xc(%ebp),%edx
084280a8 +0x08e:  mov    %edx,(%eax)
084280aa +0x090:  mov    -0xc(%ebp),%eax
084280ad +0x093:  mov    0x8(%ebp),%edx
084280b0 +0x096:  mov    %edx,0x4(%eax)
084280b3 +0x099:  mov    0x10(%ebp),%edx
084280b6 +0x09c:  mov    -0xc(%ebp),%eax
084280b9 +0x09f:  mov    %edx,0x8(%eax)
084280bc +0x0a2:  mov    0x14(%ebp),%edx
084280bf +0x0a5:  mov    -0xc(%ebp),%eax
084280c2 +0x0a8:  mov    %edx,0xc(%eax)
084280c5 +0x0ab:  mov    0x18(%ebp),%edx
084280c8 +0x0ae:  mov    -0xc(%ebp),%eax
084280cb +0x0b1:  mov    %edx,0x10(%eax)
084280ce +0x0b4:  mov    -0xc(%ebp),%eax
084280d1 +0x0b7:  mov    0x1c(%ebp),%edx
084280d4 +0x0ba:  mov    %edx,0x14(%eax)
084280d7 +0x0bd:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084280dc +0x0c2:  lea    -0x14(%ebp),%edx
084280df +0x0c5:  mov    %edx,0x8(%esp)
084280e3 +0x0c9:  movl   $0x2,0x4(%esp)
084280eb +0x0d1:  mov    %eax,(%esp)
084280ee +0x0d4:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084280f3 +0x0d9:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084280fa +0x0e0:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084280ff +0x0e5:  mov    0x1c(%ebp),%edx
08428102 +0x0e8:  mov    %edx,0x10(%esp)
08428106 +0x0ec:  mov    %eax,0xc(%esp)
0842810a +0x0f0:  mov    0xc(%ebp),%eax
0842810d +0x0f3:  mov    %eax,0x8(%esp)
08428111 +0x0f7:  movl   $0x0,0x4(%esp)
08428119 +0x0ff:  mov    0x8(%ebp),%eax
0842811c +0x102:  mov    %eax,(%esp)
0842811f +0x105:  call   0841b2da <_ZN23DB_SaveFeaturedGoodsIdx11makeRequestEjiiii>  ; DB_SaveFeaturedGoodsIdx::makeRequest(unsigned int, int, int, int, int)
08428124 +0x10a:  jmp    08428141 <+0x127>
08428126 +0x10c:  mov    %edx,%ebx
08428128 +0x10e:  mov    %eax,%esi
0842812a +0x110:  lea    -0x14(%ebp),%eax
0842812d +0x113:  mov    %eax,(%esp)
08428130 +0x116:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08428135 +0x11b:  mov    %esi,%eax
08428137 +0x11d:  mov    %ebx,%edx
08428139 +0x11f:  mov    %eax,(%esp)
0842813c +0x122:  call   08ae3750 <_Unwind_Resume>
08428141 +0x127:  lea    -0x14(%ebp),%eax
08428144 +0x12a:  mov    %eax,(%esp)
08428147 +0x12d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842814c +0x132:  add    $0x30,%esp
0842814f +0x135:  pop    %ebx
08428150 +0x136:  pop    %esi
08428151 +0x137:  pop    %ebp
08428152 +0x138:  ret
08428153 +0x139:  nop
```

## 反编译 C

```c
// DB_SaveUserHandicap::makeRequest @ 0x842801a

/* DB_SaveUserHandicap::makeRequest(unsigned int, int, int, int, int, int) */

void DB_SaveUserHandicap::makeRequest
               (uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  CStreamGuard local_18 [8];
  SIG_UPDATE_USER_HANDICAP *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x698a);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842806c to 08428123 has its CatchHandler @ 08428126 */
  CStreamGuard::operator<<(pCVar2,0xce);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_UPDATE_USER_HANDICAP>(pCVar2);
  *(int *)local_10 = param_2;
  *(uint *)(local_10 + 4) = param_1;
  *(int *)(local_10 + 8) = param_3;
  *(int *)(local_10 + 0xc) = param_4;
  *(int *)(local_10 + 0x10) = param_5;
  *(int *)(local_10 + 0x14) = param_6;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  DB_SaveFeaturedGoodsIdx::makeRequest(param_1,0,param_2,iVar3,param_6);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```

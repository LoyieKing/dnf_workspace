# _saveData

`_ZN8fair_pvp13CFairPvPScore9_saveDataEP5CUser`

`fair_pvp::CFairPvPScore::_saveData(CUser*)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairPvPScore` | `0x084a57fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a57fe  _ZN8fair_pvp13CFairPvPScore9_saveDataEP5CUser
#           fair_pvp::CFairPvPScore::_saveData(CUser*)
# range [0x084a57fe, 0x084a593d]
084a57fe +0x000:  push   %ebp
084a57ff +0x001:  mov    %esp,%ebp
084a5801 +0x003:  push   %esi
084a5802 +0x004:  push   %ebx
084a5803 +0x005:  sub    $0x20,%esp
084a5806 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084a580b +0x00d:  movl   $0x10a,0x8(%esp)
084a5813 +0x015:  movl   $"FairPvPScore.cpp",0x4(%esp)
084a581b +0x01d:  mov    %eax,(%esp)
084a581e +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084a5823 +0x025:  movl   $0x1,0x8(%esp)
084a582b +0x02d:  mov    %eax,0x4(%esp)
084a582f +0x031:  lea    -0x14(%ebp),%eax
084a5832 +0x034:  mov    %eax,(%esp)
084a5835 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084a583a +0x03c:  lea    -0x14(%ebp),%eax
084a583d +0x03f:  mov    %eax,(%esp)
084a5840 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084a5845 +0x047:  movl   $0x261,0x4(%esp)
084a584d +0x04f:  mov    %eax,(%esp)
084a5850 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084a5855 +0x057:  mov    0xc(%ebp),%eax
084a5858 +0x05a:  mov    %eax,(%esp)
084a585b +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084a5860 +0x062:  mov    %eax,%ebx
084a5862 +0x064:  lea    -0x14(%ebp),%eax
084a5865 +0x067:  mov    %eax,(%esp)
084a5868 +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084a586d +0x06f:  mov    %ebx,0x4(%esp)
084a5871 +0x073:  mov    %eax,(%esp)
084a5874 +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084a5879 +0x07b:  lea    -0x14(%ebp),%eax
084a587c +0x07e:  mov    %eax,(%esp)
084a587f +0x081:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084a5884 +0x086:  mov    %eax,(%esp)
084a5887 +0x089:  call   084a67f2 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x7da>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x7da
084a588c +0x08e:  mov    %eax,-0xc(%ebp)
084a588f +0x091:  movl   $0x688,0x8(%esp)
084a5897 +0x099:  movl   $0x0,0x4(%esp)
084a589f +0x0a1:  mov    -0xc(%ebp),%eax
084a58a2 +0x0a4:  mov    %eax,(%esp)
084a58a5 +0x0a7:  call   0807dcc0 <_init+0x5b8>
084a58aa +0x0ac:  movl   $0xffffffff,0x4(%esp)
084a58b2 +0x0b4:  mov    0xc(%ebp),%eax
084a58b5 +0x0b7:  mov    %eax,(%esp)
084a58b8 +0x0ba:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084a58bd +0x0bf:  mov    %eax,%edx
084a58bf +0x0c1:  mov    -0xc(%ebp),%eax
084a58c2 +0x0c4:  mov    %edx,(%eax)
084a58c4 +0x0c6:  mov    0x8(%ebp),%eax
084a58c7 +0x0c9:  mov    (%eax),%eax
084a58c9 +0x0cb:  add    $0x8,%eax
084a58cc +0x0ce:  mov    (%eax),%edx
084a58ce +0x0d0:  mov    -0xc(%ebp),%eax
084a58d1 +0x0d3:  mov    %eax,0x4(%esp)
084a58d5 +0x0d7:  mov    0x8(%ebp),%eax
084a58d8 +0x0da:  mov    %eax,(%esp)
084a58db +0x0dd:  call   *%edx
084a58dd +0x0df:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084a58e4 +0x0e6:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084a58e9 +0x0eb:  mov    -0xc(%ebp),%edx
084a58ec +0x0ee:  mov    %eax,0x680(%edx)
084a58f2 +0x0f4:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084a58f7 +0x0f9:  lea    -0x14(%ebp),%edx
084a58fa +0x0fc:  mov    %edx,0x8(%esp)
084a58fe +0x100:  movl   $0x2,0x4(%esp)
084a5906 +0x108:  mov    %eax,(%esp)
084a5909 +0x10b:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084a590e +0x110:  mov    $0x1,%ebx
084a5913 +0x115:  lea    -0x14(%ebp),%eax
084a5916 +0x118:  mov    %eax,(%esp)
084a5919 +0x11b:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084a591e +0x120:  mov    %ebx,%eax
084a5920 +0x122:  add    $0x20,%esp
084a5923 +0x125:  pop    %ebx
084a5924 +0x126:  pop    %esi
084a5925 +0x127:  pop    %ebp
084a5926 +0x128:  ret
084a5927 +0x129:  mov    %edx,%ebx
084a5929 +0x12b:  mov    %eax,%esi
084a592b +0x12d:  lea    -0x14(%ebp),%eax
084a592e +0x130:  mov    %eax,(%esp)
084a5931 +0x133:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084a5936 +0x138:  mov    %esi,%eax
084a5938 +0x13a:  mov    %ebx,%edx
084a593a +0x13c:  mov    %eax,(%esp)
084a593d +0x13f:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// fair_pvp::CFairPvPScore::_saveData @ 0x84a57fe

/* fair_pvp::CFairPvPScore::_saveData(CUser*) */

undefined4 __thiscall fair_pvp::CFairPvPScore::_saveData(CFairPvPScore *this,CUser *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  CStreamGuard local_18 [8];
  SIG_FAIR_PVP_SCORE *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"FairPvPScore.cpp",0x10a);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 084a5850 to 084a590d has its CatchHandler @ 084a5927 */
  CStreamGuard::operator<<(pCVar2,0x261);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_FAIR_PVP_SCORE>(pCVar2);
  memset(local_10,0,0x688);
  uVar4 = CUser::get_charac_no(param_1,-1);
  *(undefined4 *)local_10 = uVar4;
  (**(code **)(*(int *)this + 8))(this,local_10);
  uVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(local_10 + 0x680) = uVar4;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}
```

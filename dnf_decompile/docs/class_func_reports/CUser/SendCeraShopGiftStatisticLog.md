# SendCeraShopGiftStatisticLog

`_ZN5CUser28SendCeraShopGiftStatisticLogEjjmj`

`CUser::SendCeraShopGiftStatisticLog(unsigned int, unsigned int, unsigned long, unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868a87a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868a87a  _ZN5CUser28SendCeraShopGiftStatisticLogEjjmj
#           CUser::SendCeraShopGiftStatisticLog(unsigned int, unsigned int, unsigned long, unsigned int)
# range [0x0868a87a, 0x0868a999]
0868a87a +0x000:  push   %ebp
0868a87b +0x001:  mov    %esp,%ebp
0868a87d +0x003:  push   %esi
0868a87e +0x004:  push   %ebx
0868a87f +0x005:  sub    $0x20,%esp
0868a882 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0868a887 +0x00d:  movl   $0xa2c0,0x8(%esp)
0868a88f +0x015:  movl   $"user.cpp",0x4(%esp)
0868a897 +0x01d:  mov    %eax,(%esp)
0868a89a +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0868a89f +0x025:  movl   $0x1,0x8(%esp)
0868a8a7 +0x02d:  mov    %eax,0x4(%esp)
0868a8ab +0x031:  lea    -0x14(%ebp),%eax
0868a8ae +0x034:  mov    %eax,(%esp)
0868a8b1 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0868a8b6 +0x03c:  lea    -0x14(%ebp),%eax
0868a8b9 +0x03f:  mov    %eax,(%esp)
0868a8bc +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0868a8c1 +0x047:  movl   $0x29c,0x4(%esp)
0868a8c9 +0x04f:  mov    %eax,(%esp)
0868a8cc +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0868a8d1 +0x057:  mov    0x8(%ebp),%eax
0868a8d4 +0x05a:  mov    %eax,(%esp)
0868a8d7 +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0868a8dc +0x062:  mov    %eax,%ebx
0868a8de +0x064:  lea    -0x14(%ebp),%eax
0868a8e1 +0x067:  mov    %eax,(%esp)
0868a8e4 +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0868a8e9 +0x06f:  mov    %ebx,0x4(%esp)
0868a8ed +0x073:  mov    %eax,(%esp)
0868a8f0 +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0868a8f5 +0x07b:  lea    -0x14(%ebp),%eax
0868a8f8 +0x07e:  mov    %eax,(%esp)
0868a8fb +0x081:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0868a900 +0x086:  mov    %eax,(%esp)
0868a903 +0x089:  call   0869c9c2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x9217>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x9217
0868a908 +0x08e:  mov    %eax,-0xc(%ebp)
0868a90b +0x091:  mov    0x8(%ebp),%eax
0868a90e +0x094:  mov    0x704ac(%eax),%edx
0868a914 +0x09a:  mov    -0xc(%ebp),%eax
0868a917 +0x09d:  mov    %edx,(%eax)
0868a919 +0x09f:  mov    0x8(%ebp),%eax
0868a91c +0x0a2:  mov    %eax,(%esp)
0868a91f +0x0a5:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0868a924 +0x0aa:  mov    -0xc(%ebp),%edx
0868a927 +0x0ad:  mov    %eax,0x4(%edx)
0868a92a +0x0b0:  mov    -0xc(%ebp),%eax
0868a92d +0x0b3:  mov    0xc(%ebp),%edx
0868a930 +0x0b6:  mov    %edx,0x8(%eax)
0868a933 +0x0b9:  mov    -0xc(%ebp),%eax
0868a936 +0x0bc:  mov    0x10(%ebp),%edx
0868a939 +0x0bf:  mov    %edx,0xc(%eax)
0868a93c +0x0c2:  mov    -0xc(%ebp),%eax
0868a93f +0x0c5:  mov    0x14(%ebp),%edx
0868a942 +0x0c8:  mov    %edx,0x10(%eax)
0868a945 +0x0cb:  mov    -0xc(%ebp),%eax
0868a948 +0x0ce:  mov    0x18(%ebp),%edx
0868a94b +0x0d1:  mov    %edx,0x14(%eax)
0868a94e +0x0d4:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0868a953 +0x0d9:  lea    -0x14(%ebp),%edx
0868a956 +0x0dc:  mov    %edx,0x8(%esp)
0868a95a +0x0e0:  movl   $0x4,0x4(%esp)
0868a962 +0x0e8:  mov    %eax,(%esp)
0868a965 +0x0eb:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0868a96a +0x0f0:  jmp    0868a987 <+0x10d>
0868a96c +0x0f2:  mov    %edx,%ebx
0868a96e +0x0f4:  mov    %eax,%esi
0868a970 +0x0f6:  lea    -0x14(%ebp),%eax
0868a973 +0x0f9:  mov    %eax,(%esp)
0868a976 +0x0fc:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0868a97b +0x101:  mov    %esi,%eax
0868a97d +0x103:  mov    %ebx,%edx
0868a97f +0x105:  mov    %eax,(%esp)
0868a982 +0x108:  call   08ae3750 <_Unwind_Resume>
0868a987 +0x10d:  lea    -0x14(%ebp),%eax
0868a98a +0x110:  mov    %eax,(%esp)
0868a98d +0x113:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0868a992 +0x118:  add    $0x20,%esp
0868a995 +0x11b:  pop    %ebx
0868a996 +0x11c:  pop    %esi
0868a997 +0x11d:  pop    %ebp
0868a998 +0x11e:  ret
0868a999 +0x11f:  nop
```

## 反编译 C

```c
// CUser::SendCeraShopGiftStatisticLog @ 0x868a87a

/* CUser::SendCeraShopGiftStatisticLog(unsigned int, unsigned int, unsigned long, unsigned int) */

void __thiscall
CUser::SendCeraShopGiftStatisticLog
          (CUser *this,uint param_1,uint param_2,ulong param_3,uint param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  CStreamGuard local_18 [8];
  SIG_STATISTIC_CERASHOP_GIFT_LOG *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0xa2c0);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0868a8cc to 0868a969 has its CatchHandler @ 0868a96c */
  CStreamGuard::operator<<(pCVar2,0x29c);
  iVar3 = GetUID(this);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_STATISTIC_CERASHOP_GIFT_LOG>(pCVar2);
  *(undefined4 *)local_10 = *(undefined4 *)(this + 0x704ac);
  uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
  *(undefined4 *)(local_10 + 4) = uVar4;
  *(uint *)(local_10 + 8) = param_1;
  *(uint *)(local_10 + 0xc) = param_2;
  *(ulong *)(local_10 + 0x10) = param_3;
  *(uint *)(local_10 + 0x14) = param_4;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```

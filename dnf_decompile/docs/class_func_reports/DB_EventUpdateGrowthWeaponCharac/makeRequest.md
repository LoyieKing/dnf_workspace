# makeRequest

`_ZN32DB_EventUpdateGrowthWeaponCharac11makeRequestEjjis`

`DB_EventUpdateGrowthWeaponCharac::makeRequest(unsigned int, unsigned int, int, short)`

| 类 | 地址 |
|---|---|
| `DB_EventUpdateGrowthWeaponCharac` | `0x084495c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084495c6  _ZN32DB_EventUpdateGrowthWeaponCharac11makeRequestEjjis
#           DB_EventUpdateGrowthWeaponCharac::makeRequest(unsigned int, unsigned int, int, short)
# range [0x084495c6, 0x084496f3]
084495c6 +0x000:  push   %ebp
084495c7 +0x001:  mov    %esp,%ebp
084495c9 +0x003:  push   %esi
084495ca +0x004:  push   %ebx
084495cb +0x005:  sub    $0x30,%esp
084495ce +0x008:  mov    0x14(%ebp),%eax
084495d1 +0x00b:  mov    %ax,-0x1c(%ebp)
084495d5 +0x00f:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084495da +0x014:  movl   $0xb914,0x8(%esp)
084495e2 +0x01c:  movl   $"DBThread.cpp",0x4(%esp)
084495ea +0x024:  mov    %eax,(%esp)
084495ed +0x027:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084495f2 +0x02c:  movl   $0x1,0x8(%esp)
084495fa +0x034:  mov    %eax,0x4(%esp)
084495fe +0x038:  lea    -0x10(%ebp),%eax
08449601 +0x03b:  mov    %eax,(%esp)
08449604 +0x03e:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08449609 +0x043:  lea    -0x10(%ebp),%eax
0844960c +0x046:  mov    %eax,(%esp)
0844960f +0x049:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08449614 +0x04e:  movl   $0x314,0x4(%esp)
0844961c +0x056:  mov    %eax,(%esp)
0844961f +0x059:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08449624 +0x05e:  lea    -0x10(%ebp),%eax
08449627 +0x061:  mov    %eax,(%esp)
0844962a +0x064:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844962f +0x069:  movl   $0xffffffff,0x4(%esp)
08449637 +0x071:  mov    %eax,(%esp)
0844963a +0x074:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844963f +0x079:  lea    -0x10(%ebp),%eax
08449642 +0x07c:  mov    %eax,(%esp)
08449645 +0x07f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844964a +0x084:  mov    0x8(%ebp),%edx
0844964d +0x087:  mov    %edx,0x4(%esp)
08449651 +0x08b:  mov    %eax,(%esp)
08449654 +0x08e:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08449659 +0x093:  lea    -0x10(%ebp),%eax
0844965c +0x096:  mov    %eax,(%esp)
0844965f +0x099:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08449664 +0x09e:  mov    0xc(%ebp),%edx
08449667 +0x0a1:  mov    %edx,0x4(%esp)
0844966b +0x0a5:  mov    %eax,(%esp)
0844966e +0x0a8:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08449673 +0x0ad:  lea    -0x10(%ebp),%eax
08449676 +0x0b0:  mov    %eax,(%esp)
08449679 +0x0b3:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844967e +0x0b8:  mov    0x10(%ebp),%edx
08449681 +0x0bb:  mov    %edx,0x4(%esp)
08449685 +0x0bf:  mov    %eax,(%esp)
08449688 +0x0c2:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844968d +0x0c7:  movswl -0x1c(%ebp),%ebx
08449691 +0x0cb:  lea    -0x10(%ebp),%eax
08449694 +0x0ce:  mov    %eax,(%esp)
08449697 +0x0d1:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844969c +0x0d6:  mov    %ebx,0x4(%esp)
084496a0 +0x0da:  mov    %eax,(%esp)
084496a3 +0x0dd:  call   0822ad66 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x410>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x410
084496a8 +0x0e2:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084496ad +0x0e7:  lea    -0x10(%ebp),%edx
084496b0 +0x0ea:  mov    %edx,0x8(%esp)
084496b4 +0x0ee:  movl   $0x2,0x4(%esp)
084496bc +0x0f6:  mov    %eax,(%esp)
084496bf +0x0f9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084496c4 +0x0fe:  jmp    084496e1 <+0x11b>
084496c6 +0x100:  mov    %edx,%ebx
084496c8 +0x102:  mov    %eax,%esi
084496ca +0x104:  lea    -0x10(%ebp),%eax
084496cd +0x107:  mov    %eax,(%esp)
084496d0 +0x10a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084496d5 +0x10f:  mov    %esi,%eax
084496d7 +0x111:  mov    %ebx,%edx
084496d9 +0x113:  mov    %eax,(%esp)
084496dc +0x116:  call   08ae3750 <_Unwind_Resume>
084496e1 +0x11b:  lea    -0x10(%ebp),%eax
084496e4 +0x11e:  mov    %eax,(%esp)
084496e7 +0x121:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084496ec +0x126:  add    $0x30,%esp
084496ef +0x129:  pop    %ebx
084496f0 +0x12a:  pop    %esi
084496f1 +0x12b:  pop    %ebp
084496f2 +0x12c:  ret
084496f3 +0x12d:  nop
```

## 反编译 C

```c
// DB_EventUpdateGrowthWeaponCharac::makeRequest @ 0x84495c6

/* DB_EventUpdateGrowthWeaponCharac::makeRequest(unsigned int, unsigned int, int, short) */

void DB_EventUpdateGrowthWeaponCharac::makeRequest
               (uint param_1,uint param_2,int param_3,short param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb914);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0844961f to 084496c3 has its CatchHandler @ 084496c6 */
  CStreamGuard::operator<<(pCVar2,0x314);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_4);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```

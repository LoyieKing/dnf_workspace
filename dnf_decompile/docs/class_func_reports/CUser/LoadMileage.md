# LoadMileage

`_ZN5CUser11LoadMileageEv`

`CUser::LoadMileage()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08650722` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08650722  _ZN5CUser11LoadMileageEv
#           CUser::LoadMileage()
# range [0x08650722, 0x08650829]
08650722 +0x000:  push   %ebp
08650723 +0x001:  mov    %esp,%ebp
08650725 +0x003:  push   %esi
08650726 +0x004:  push   %ebx
08650727 +0x005:  sub    $0x20,%esp
0865072a +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0865072f +0x00d:  movl   $0x18f2,0x8(%esp)
08650737 +0x015:  movl   $"user.cpp",0x4(%esp)
0865073f +0x01d:  mov    %eax,(%esp)
08650742 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08650747 +0x025:  movl   $0x1,0x8(%esp)
0865074f +0x02d:  mov    %eax,0x4(%esp)
08650753 +0x031:  lea    -0x14(%ebp),%eax
08650756 +0x034:  mov    %eax,(%esp)
08650759 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0865075e +0x03c:  lea    -0x14(%ebp),%eax
08650761 +0x03f:  mov    %eax,(%esp)
08650764 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08650769 +0x047:  movl   $0x1fd,0x4(%esp)
08650771 +0x04f:  mov    %eax,(%esp)
08650774 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08650779 +0x057:  mov    0x8(%ebp),%eax
0865077c +0x05a:  mov    %eax,(%esp)
0865077f +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08650784 +0x062:  mov    %eax,%ebx
08650786 +0x064:  lea    -0x14(%ebp),%eax
08650789 +0x067:  mov    %eax,(%esp)
0865078c +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08650791 +0x06f:  mov    %ebx,0x4(%esp)
08650795 +0x073:  mov    %eax,(%esp)
08650798 +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0865079d +0x07b:  lea    -0x14(%ebp),%eax
086507a0 +0x07e:  mov    %eax,(%esp)
086507a3 +0x081:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
086507a8 +0x086:  mov    %eax,(%esp)
086507ab +0x089:  call   08699246 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x5a9b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x5a9b
086507b0 +0x08e:  mov    %eax,-0xc(%ebp)
086507b3 +0x091:  mov    0x8(%ebp),%eax
086507b6 +0x094:  mov    %eax,(%esp)
086507b9 +0x097:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086507be +0x09c:  mov    -0xc(%ebp),%edx
086507c1 +0x09f:  mov    %eax,(%edx)
086507c3 +0x0a1:  mov    0x8(%ebp),%eax
086507c6 +0x0a4:  mov    %eax,(%esp)
086507c9 +0x0a7:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086507ce +0x0ac:  mov    -0xc(%ebp),%edx
086507d1 +0x0af:  mov    %eax,0x4(%edx)
086507d4 +0x0b2:  mov    -0xc(%ebp),%eax
086507d7 +0x0b5:  movl   $0x0,0x8(%eax)
086507de +0x0bc:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
086507e3 +0x0c1:  lea    -0x14(%ebp),%edx
086507e6 +0x0c4:  mov    %edx,0x8(%esp)
086507ea +0x0c8:  movl   $0x2,0x4(%esp)
086507f2 +0x0d0:  mov    %eax,(%esp)
086507f5 +0x0d3:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
086507fa +0x0d8:  jmp    08650817 <+0xf5>
086507fc +0x0da:  mov    %edx,%ebx
086507fe +0x0dc:  mov    %eax,%esi
08650800 +0x0de:  lea    -0x14(%ebp),%eax
08650803 +0x0e1:  mov    %eax,(%esp)
08650806 +0x0e4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0865080b +0x0e9:  mov    %esi,%eax
0865080d +0x0eb:  mov    %ebx,%edx
0865080f +0x0ed:  mov    %eax,(%esp)
08650812 +0x0f0:  call   08ae3750 <_Unwind_Resume>
08650817 +0x0f5:  lea    -0x14(%ebp),%eax
0865081a +0x0f8:  mov    %eax,(%esp)
0865081d +0x0fb:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08650822 +0x100:  add    $0x20,%esp
08650825 +0x103:  pop    %ebx
08650826 +0x104:  pop    %esi
08650827 +0x105:  pop    %ebp
08650828 +0x106:  ret
08650829 +0x107:  nop
```

## 反编译 C

```c
// CUser::LoadMileage @ 0x8650722

/* CUser::LoadMileage() */

void __thiscall CUser::LoadMileage(CUser *this)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  CStreamGuard local_18 [8];
  SIG_MILEAGE_STRUCT *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0x18f2);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08650774 to 086507f9 has its CatchHandler @ 086507fc */
  CStreamGuard::operator<<(pCVar2,0x1fd);
  iVar3 = GetUID(this);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_MILEAGE_STRUCT>(pCVar2);
  uVar4 = get_acc_id(this);
  *(undefined4 *)local_10 = uVar4;
  uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
  *(undefined4 *)(local_10 + 4) = uVar4;
  *(undefined4 *)(local_10 + 8) = 0;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```

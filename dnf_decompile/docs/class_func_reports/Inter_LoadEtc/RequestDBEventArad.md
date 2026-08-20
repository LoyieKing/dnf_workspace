# RequestDBEventArad

`_ZN13Inter_LoadEtc18RequestDBEventAradEP5CUser`

`Inter_LoadEtc::RequestDBEventArad(CUser*)`

| 类 | 地址 |
|---|---|
| `Inter_LoadEtc` | `0x084c266e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c266e  _ZN13Inter_LoadEtc18RequestDBEventAradEP5CUser
#           Inter_LoadEtc::RequestDBEventArad(CUser*)
# range [0x084c266e, 0x084c275b]
084c266e +0x00:  push   %ebp
084c266f +0x01:  mov    %esp,%ebp
084c2671 +0x03:  push   %esi
084c2672 +0x04:  push   %ebx
084c2673 +0x05:  sub    $0x70,%esp
084c2676 +0x08:  lea    -0x66(%ebp),%eax
084c2679 +0x0b:  mov    %eax,(%esp)
084c267c +0x0e:  call   08186686 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x50>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x50
084c2681 +0x13:  mov    0xc(%ebp),%eax
084c2684 +0x16:  mov    %eax,(%esp)
084c2687 +0x19:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084c268c +0x1e:  mov    %eax,0x4(%esp)
084c2690 +0x22:  lea    -0x66(%ebp),%eax
084c2693 +0x25:  mov    %eax,(%esp)
084c2696 +0x28:  call   081866b6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x80>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x80
084c269b +0x2d:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084c26a0 +0x32:  movl   $0x1193,0x8(%esp)
084c26a8 +0x3a:  movl   $"InterDispatcher.cpp",0x4(%esp)
084c26b0 +0x42:  mov    %eax,(%esp)
084c26b3 +0x45:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084c26b8 +0x4a:  movl   $0x1,0x8(%esp)
084c26c0 +0x52:  mov    %eax,0x4(%esp)
084c26c4 +0x56:  lea    -0x10(%ebp),%eax
084c26c7 +0x59:  mov    %eax,(%esp)
084c26ca +0x5c:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084c26cf +0x61:  mov    0xc(%ebp),%eax
084c26d2 +0x64:  mov    %eax,(%esp)
084c26d5 +0x67:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084c26da +0x6c:  mov    %eax,0x8(%esp)
084c26de +0x70:  movl   $0x26,0x4(%esp)
084c26e6 +0x78:  lea    -0x10(%ebp),%eax
084c26e9 +0x7b:  mov    %eax,(%esp)
084c26ec +0x7e:  call   081977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>  ; ARAD::DISPATCHER::make_internal_stream_jpn(CStreamGuard&, ARAD::ENUM_INTERNALPACKET_JPN, int)
084c26f1 +0x83:  lea    -0x10(%ebp),%eax
084c26f4 +0x86:  mov    %eax,(%esp)
084c26f7 +0x89:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084c26fc +0x8e:  movl   $0x56,0x8(%esp)
084c2704 +0x96:  lea    -0x66(%ebp),%edx
084c2707 +0x99:  mov    %edx,0x4(%esp)
084c270b +0x9d:  mov    %eax,(%esp)
084c270e +0xa0:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084c2713 +0xa5:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084c2718 +0xaa:  lea    -0x10(%ebp),%edx
084c271b +0xad:  mov    %edx,0x8(%esp)
084c271f +0xb1:  movl   $0x2,0x4(%esp)
084c2727 +0xb9:  mov    %eax,(%esp)
084c272a +0xbc:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084c272f +0xc1:  mov    %eax,%ebx
084c2731 +0xc3:  lea    -0x10(%ebp),%eax
084c2734 +0xc6:  mov    %eax,(%esp)
084c2737 +0xc9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084c273c +0xce:  mov    %ebx,%eax
084c273e +0xd0:  add    $0x70,%esp
084c2741 +0xd3:  pop    %ebx
084c2742 +0xd4:  pop    %esi
084c2743 +0xd5:  pop    %ebp
084c2744 +0xd6:  ret
084c2745 +0xd7:  mov    %edx,%ebx
084c2747 +0xd9:  mov    %eax,%esi
084c2749 +0xdb:  lea    -0x10(%ebp),%eax
084c274c +0xde:  mov    %eax,(%esp)
084c274f +0xe1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084c2754 +0xe6:  mov    %esi,%eax
084c2756 +0xe8:  mov    %ebx,%edx
084c2758 +0xea:  mov    %eax,(%esp)
084c275b +0xed:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// Inter_LoadEtc::RequestDBEventArad @ 0x84c266e

/* Inter_LoadEtc::RequestDBEventArad(CUser*) */

undefined4 __thiscall Inter_LoadEtc::RequestDBEventArad(Inter_LoadEtc *this,CUser *param_1)

{
  uint uVar1;
  Stream *pSVar2;
  undefined4 uVar3;
  CStreamGuard *this_00;
  SigLoadRewardEventItem local_6a [86];
  CStreamGuard local_14 [8];
  
  arad::SigLoadRewardEventItem::SigLoadRewardEventItem(local_6a);
  uVar1 = CUser::get_acc_id(param_1);
  arad::SigLoadRewardEventItem::set(local_6a,uVar1);
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0x1193);
  CStreamGuard::CStreamGuard(local_14,pSVar2,true);
  uVar3 = CUser::GetUID(param_1);
                    /* try { // try from 084c26ec to 084c272e has its CatchHandler @ 084c2745 */
  ARAD::DISPATCHER::make_internal_stream_jpn(local_14,0x26,uVar3);
  this_00 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(this_00,local_6a,0x56);
  uVar3 = MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return uVar3;
}
```

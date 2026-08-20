# _saveData

`_ZN19CMissionList_Charac9_saveDataEP5CUser`

`CMissionList_Charac::_saveData(CUser*)`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e4576` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e4576  _ZN19CMissionList_Charac9_saveDataEP5CUser
#           CMissionList_Charac::_saveData(CUser*)
# range [0x085e4576, 0x085e476b]
085e4576 +0x000:  push   %ebp
085e4577 +0x001:  mov    %esp,%ebp
085e4579 +0x003:  push   %esi
085e457a +0x004:  push   %ebx
085e457b +0x005:  sub    $0x20,%esp
085e457e +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
085e4583 +0x00d:  movl   $0x4a5,0x8(%esp)
085e458b +0x015:  movl   $"PvP_MissionSystem.cpp",0x4(%esp)
085e4593 +0x01d:  mov    %eax,(%esp)
085e4596 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
085e459b +0x025:  movl   $0x1,0x8(%esp)
085e45a3 +0x02d:  mov    %eax,0x4(%esp)
085e45a7 +0x031:  lea    -0x18(%ebp),%eax
085e45aa +0x034:  mov    %eax,(%esp)
085e45ad +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
085e45b2 +0x03c:  lea    -0x18(%ebp),%eax
085e45b5 +0x03f:  mov    %eax,(%esp)
085e45b8 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085e45bd +0x047:  movl   $0x263,0x4(%esp)
085e45c5 +0x04f:  mov    %eax,(%esp)
085e45c8 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085e45cd +0x057:  mov    0xc(%ebp),%eax
085e45d0 +0x05a:  mov    %eax,(%esp)
085e45d3 +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
085e45d8 +0x062:  mov    %eax,%ebx
085e45da +0x064:  lea    -0x18(%ebp),%eax
085e45dd +0x067:  mov    %eax,(%esp)
085e45e0 +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085e45e5 +0x06f:  mov    %ebx,0x4(%esp)
085e45e9 +0x073:  mov    %eax,(%esp)
085e45ec +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085e45f1 +0x07b:  lea    -0x18(%ebp),%eax
085e45f4 +0x07e:  mov    %eax,(%esp)
085e45f7 +0x081:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
085e45fc +0x086:  mov    %eax,(%esp)
085e45ff +0x089:  call   085e8056 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x17de>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x17de
085e4604 +0x08e:  mov    %eax,-0x10(%ebp)
085e4607 +0x091:  cmpl   $0x0,-0x10(%ebp)
085e460b +0x095:  jne    085e4617 <+0xa1>
085e460d +0x097:  mov    $0x0,%ebx
085e4612 +0x09c:  jmp    085e4757 <+0x1e1>
085e4617 +0x0a1:  movl   $0x14a,0x8(%esp)
085e461f +0x0a9:  movl   $0x0,0x4(%esp)
085e4627 +0x0b1:  mov    -0x10(%ebp),%eax
085e462a +0x0b4:  mov    %eax,(%esp)
085e462d +0x0b7:  call   0807dcc0 <_init+0x5b8>
085e4632 +0x0bc:  movl   $0xffffffff,0x4(%esp)
085e463a +0x0c4:  mov    0xc(%ebp),%eax
085e463d +0x0c7:  mov    %eax,(%esp)
085e4640 +0x0ca:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
085e4645 +0x0cf:  mov    %eax,%edx
085e4647 +0x0d1:  mov    -0x10(%ebp),%eax
085e464a +0x0d4:  mov    %edx,(%eax)
085e464c +0x0d6:  movl   $0x0,-0xc(%ebp)
085e4653 +0x0dd:  jmp    085e46b1 <+0x13b>
085e4655 +0x0df:  mov    -0xc(%ebp),%edx
085e4658 +0x0e2:  mov    -0xc(%ebp),%ecx
085e465b +0x0e5:  mov    0x8(%ebp),%eax
085e465e +0x0e8:  movzwl 0x7(%eax,%ecx,8),%ecx
085e4663 +0x0ed:  mov    -0x10(%ebp),%eax
085e4666 +0x0f0:  mov    %cx,0x6(%eax,%edx,8)
085e466b +0x0f5:  mov    -0xc(%ebp),%edx
085e466e +0x0f8:  mov    -0xc(%ebp),%ecx
085e4671 +0x0fb:  mov    0x8(%ebp),%eax
085e4674 +0x0fe:  movzwl 0x5(%eax,%ecx,8),%ecx
085e4679 +0x103:  mov    -0x10(%ebp),%eax
085e467c +0x106:  mov    %cx,0x4(%eax,%edx,8)
085e4681 +0x10b:  mov    -0xc(%ebp),%edx
085e4684 +0x10e:  mov    -0xc(%ebp),%ecx
085e4687 +0x111:  mov    0x8(%ebp),%eax
085e468a +0x114:  movzwl 0x9(%eax,%ecx,8),%ecx
085e468f +0x119:  mov    -0x10(%ebp),%eax
085e4692 +0x11c:  mov    %cx,0x8(%eax,%edx,8)
085e4697 +0x121:  mov    -0xc(%ebp),%edx
085e469a +0x124:  mov    -0xc(%ebp),%ecx
085e469d +0x127:  mov    0x8(%ebp),%eax
085e46a0 +0x12a:  movzwl 0xb(%eax,%ecx,8),%ecx
085e46a5 +0x12f:  mov    -0x10(%ebp),%eax
085e46a8 +0x132:  mov    %cx,0xa(%eax,%edx,8)
085e46ad +0x137:  addl   $0x1,-0xc(%ebp)
085e46b1 +0x13b:  cmpl   $0x23,-0xc(%ebp)
085e46b5 +0x13f:  setle  %al
085e46b8 +0x142:  test   %al,%al
085e46ba +0x144:  jne    085e4655 <+0xdf>
085e46bc +0x146:  mov    -0x10(%ebp),%eax
085e46bf +0x149:  lea    0x124(%eax),%edx
085e46c5 +0x14f:  mov    0x8(%ebp),%eax
085e46c8 +0x152:  add    $0x128,%eax
085e46cd +0x157:  mov    %edx,0x4(%esp)
085e46d1 +0x15b:  mov    %eax,(%esp)
085e46d4 +0x15e:  call   08a5a90a <_Z11BitsetToStrRKSt6bitsetILj256EEPh>  ; BitsetToStr(std::bitset<256u> const&, unsigned char*)
085e46d9 +0x163:  mov    0x8(%ebp),%eax
085e46dc +0x166:  movzwl 0x148(%eax),%eax
085e46e3 +0x16d:  mov    %eax,%edx
085e46e5 +0x16f:  mov    -0x10(%ebp),%eax
085e46e8 +0x172:  mov    %dx,0x144(%eax)
085e46ef +0x179:  mov    0x8(%ebp),%eax
085e46f2 +0x17c:  movzwl 0x14a(%eax),%eax
085e46f9 +0x183:  mov    %eax,%edx
085e46fb +0x185:  mov    -0x10(%ebp),%eax
085e46fe +0x188:  mov    %dx,0x146(%eax)
085e4705 +0x18f:  mov    0x8(%ebp),%eax
085e4708 +0x192:  movzwl 0x14c(%eax),%edx
085e470f +0x199:  mov    -0x10(%ebp),%eax
085e4712 +0x19c:  mov    %dx,0x148(%eax)
085e4719 +0x1a3:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
085e471e +0x1a8:  lea    -0x18(%ebp),%edx
085e4721 +0x1ab:  mov    %edx,0x8(%esp)
085e4725 +0x1af:  movl   $0x2,0x4(%esp)
085e472d +0x1b7:  mov    %eax,(%esp)
085e4730 +0x1ba:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
085e4735 +0x1bf:  mov    $0x1,%ebx
085e473a +0x1c4:  jmp    085e4757 <+0x1e1>
085e473c +0x1c6:  mov    %edx,%ebx
085e473e +0x1c8:  mov    %eax,%esi
085e4740 +0x1ca:  lea    -0x18(%ebp),%eax
085e4743 +0x1cd:  mov    %eax,(%esp)
085e4746 +0x1d0:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
085e474b +0x1d5:  mov    %esi,%eax
085e474d +0x1d7:  mov    %ebx,%edx
085e474f +0x1d9:  mov    %eax,(%esp)
085e4752 +0x1dc:  call   08ae3750 <_Unwind_Resume>
085e4757 +0x1e1:  lea    -0x18(%ebp),%eax
085e475a +0x1e4:  mov    %eax,(%esp)
085e475d +0x1e7:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
085e4762 +0x1ec:  mov    %ebx,%eax
085e4764 +0x1ee:  add    $0x20,%esp
085e4767 +0x1f1:  pop    %ebx
085e4768 +0x1f2:  pop    %esi
085e4769 +0x1f3:  pop    %ebp
085e476a +0x1f4:  ret
085e476b +0x1f5:  nop
```

## 反编译 C

```c
// CMissionList_Charac::_saveData @ 0x85e4576

/* CMissionList_Charac::_saveData(CUser*) */

undefined4 __thiscall CMissionList_Charac::_saveData(CMissionList_Charac *this,CUser *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  CStreamGuard local_1c [8];
  SIG_REQUEST_PVP_MISSION_LIST *local_14;
  int local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"PvP_MissionSystem.cpp",0x4a5);
  CStreamGuard::CStreamGuard(local_1c,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 085e45c8 to 085e4734 has its CatchHandler @ 085e473c */
  CStreamGuard::operator<<(pCVar2,0x263);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
  local_14 = CStreamGuard::GetInBuffer<SIG_REQUEST_PVP_MISSION_LIST>(pCVar2);
  if (local_14 == (SIG_REQUEST_PVP_MISSION_LIST *)0x0) {
    uVar4 = 0;
  }
  else {
    memset(local_14,0,0x14a);
    uVar4 = CUser::get_charac_no(param_1,-1);
    *(undefined4 *)local_14 = uVar4;
    for (local_10 = 0; local_10 < 0x24; local_10 = local_10 + 1) {
      *(undefined2 *)(local_14 + local_10 * 8 + 6) = *(undefined2 *)(this + local_10 * 8 + 7);
      *(undefined2 *)(local_14 + local_10 * 8 + 4) = *(undefined2 *)(this + local_10 * 8 + 5);
      *(undefined2 *)(local_14 + local_10 * 8 + 8) = *(undefined2 *)(this + local_10 * 8 + 9);
      *(undefined2 *)(local_14 + local_10 * 8 + 10) = *(undefined2 *)(this + local_10 * 8 + 0xb);
    }
    BitsetToStr((bitset *)(this + 0x128),(uchar *)(local_14 + 0x124));
    *(undefined2 *)(local_14 + 0x144) = *(undefined2 *)(this + 0x148);
    *(undefined2 *)(local_14 + 0x146) = *(undefined2 *)(this + 0x14a);
    *(undefined2 *)(local_14 + 0x148) = *(undefined2 *)(this + 0x14c);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
    uVar4 = 1;
  }
  CStreamGuard::~CStreamGuard(local_1c);
  return uVar4;
}
```

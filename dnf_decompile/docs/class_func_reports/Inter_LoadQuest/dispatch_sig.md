# dispatch_sig

`_ZN15Inter_LoadQuest12dispatch_sigEP5CUserPci`

`Inter_LoadQuest::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadQuest` | `0x084c5054` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c5054  _ZN15Inter_LoadQuest12dispatch_sigEP5CUserPci
#           Inter_LoadQuest::dispatch_sig(CUser*, char*, int)
# range [0x084c5054, 0x084c5151]
084c5054 +0x00:  push   %ebp
084c5055 +0x01:  mov    %esp,%ebp
084c5057 +0x03:  push   %ebx
084c5058 +0x04:  sub    $0x24,%esp
084c505b +0x07:  mov    0xc(%ebp),%eax
084c505e +0x0a:  mov    %eax,(%esp)
084c5061 +0x0d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084c5066 +0x12:  test   %eax,%eax
084c5068 +0x14:  sete   %al
084c506b +0x17:  test   %al,%al
084c506d +0x19:  je     084c5079 <+0x25>
084c506f +0x1b:  mov    $0x1a13,%eax
084c5074 +0x20:  jmp    084c514b <+0xf7>
084c5079 +0x25:  mov    0x10(%ebp),%eax
084c507c +0x28:  mov    %eax,-0x10(%ebp)
084c507f +0x2b:  mov    -0x10(%ebp),%eax
084c5082 +0x2e:  mov    0x4(%eax),%eax
084c5085 +0x31:  cmp    $0x1,%eax
084c5088 +0x34:  jne    084c5094 <+0x40>
084c508a +0x36:  mov    $0x1a1a,%eax
084c508f +0x3b:  jmp    084c514b <+0xf7>
084c5094 +0x40:  mov    0xc(%ebp),%eax
084c5097 +0x43:  mov    %eax,(%esp)
084c509a +0x46:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084c509f +0x4b:  test   %eax,%eax
084c50a1 +0x4d:  sete   %al
084c50a4 +0x50:  test   %al,%al
084c50a6 +0x52:  je     084c50b2 <+0x5e>
084c50a8 +0x54:  mov    $0x1a1d,%eax
084c50ad +0x59:  jmp    084c514b <+0xf7>
084c50b2 +0x5e:  mov    0xc(%ebp),%eax
084c50b5 +0x61:  mov    %eax,(%esp)
084c50b8 +0x64:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
084c50bd +0x69:  mov    %eax,-0xc(%ebp)
084c50c0 +0x6c:  mov    -0x10(%ebp),%eax
084c50c3 +0x6f:  mov    %eax,0x4(%esp)
084c50c7 +0x73:  mov    -0xc(%ebp),%eax
084c50ca +0x76:  mov    %eax,(%esp)
084c50cd +0x79:  call   086ab95c <_ZN9UserQuest9set_questEPK14SIG_LOAD_QUEST>  ; UserQuest::set_quest(SIG_LOAD_QUEST const*)
084c50d2 +0x7e:  mov    &_ZN10GlobalData11s_timeGate_E,%eax
084c50d7 +0x83:  mov    %eax,(%esp)
084c50da +0x86:  call   08234e1c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa4c6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa4c6
084c50df +0x8b:  test   %al,%al
084c50e1 +0x8d:  je     084c5133 <+0xdf>
084c50e3 +0x8f:  mov    &_ZN10GlobalData11s_timeGate_E,%eax
084c50e8 +0x94:  mov    %eax,(%esp)
084c50eb +0x97:  call   08234e2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa4d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa4d8
084c50f0 +0x9c:  mov    %eax,%ebx
084c50f2 +0x9e:  mov    0xc(%ebp),%eax
084c50f5 +0xa1:  mov    %eax,(%esp)
084c50f8 +0xa4:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
084c50fd +0xa9:  mov    %ebx,0x4(%esp)
084c5101 +0xad:  mov    %eax,(%esp)
084c5104 +0xb0:  call   086acffe <_ZNK9UserQuest12IsDoingQuestEi>  ; UserQuest::IsDoingQuest(int) const
084c5109 +0xb5:  test   %al,%al
084c510b +0xb7:  je     084c5133 <+0xdf>
084c510d +0xb9:  mov    &_ZN10GlobalData11s_timeGate_E,%eax
084c5112 +0xbe:  mov    %eax,(%esp)
084c5115 +0xc1:  call   08234e2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa4d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa4d8
084c511a +0xc6:  mov    %eax,%ebx
084c511c +0xc8:  mov    0xc(%ebp),%eax
084c511f +0xcb:  mov    %eax,(%esp)
084c5122 +0xce:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
084c5127 +0xd3:  mov    %ebx,0x4(%esp)
084c512b +0xd7:  mov    %eax,(%esp)
084c512e +0xda:  call   086ac532 <_ZN9UserQuest12giveup_questEi>  ; UserQuest::giveup_quest(int)
084c5133 +0xdf:  movl   $0x3,0x4(%esp)
084c513b +0xe7:  mov    0xc(%ebp),%eax
084c513e +0xea:  mov    %eax,(%esp)
084c5141 +0xed:  call   081253f4 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x157>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x157
084c5146 +0xf2:  mov    $0x0,%eax
084c514b +0xf7:  add    $0x24,%esp
084c514e +0xfa:  pop    %ebx
084c514f +0xfb:  pop    %ebp
084c5150 +0xfc:  ret
084c5151 +0xfd:  nop
```

## 反编译 C

```c
// Inter_LoadQuest::dispatch_sig @ 0x84c5054

/* Inter_LoadQuest::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadQuest::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  UserQuest *pUVar4;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 0) {
    uVar3 = 0x1a13;
  }
  else if (*(int *)(param_3 + 4) == 1) {
    uVar3 = 0x1a1a;
  }
  else {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 == 0) {
      uVar3 = 0x1a1d;
    }
    else {
      pUVar4 = (UserQuest *)CUser::getCurCharacQuestR((CUser *)param_2);
      UserQuest::set_quest(pUVar4,(SIG_LOAD_QUEST *)param_3);
      cVar1 = CTimeGate::isOpen(GlobalData::s_timeGate_);
      if (cVar1 != '\0') {
        iVar2 = CTimeGate::getQuestIndex(GlobalData::s_timeGate_);
        pUVar4 = (UserQuest *)CUser::getCurCharacQuestR((CUser *)param_2);
        cVar1 = UserQuest::IsDoingQuest(pUVar4,iVar2);
        if (cVar1 != '\0') {
          iVar2 = CTimeGate::getQuestIndex(GlobalData::s_timeGate_);
          pUVar4 = (UserQuest *)CUser::getCurCharacQuestW((CUser *)param_2);
          UserQuest::giveup_quest(pUVar4,iVar2);
        }
      }
      CUser::EnableCharacInfo((CUser *)param_2,3);
      uVar3 = 0;
    }
  }
  return uVar3;
}
```

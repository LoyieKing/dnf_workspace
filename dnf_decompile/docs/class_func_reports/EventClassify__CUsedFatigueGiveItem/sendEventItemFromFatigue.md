# sendEventItemFromFatigue

`_ZN13EventClassify20CUsedFatigueGiveItem24sendEventItemFromFatigueEP5CUserj`

`EventClassify::CUsedFatigueGiveItem::sendEventItemFromFatigue(CUser*, unsigned int)`

| 类 | 地址 |
|---|---|
| `EventClassify::CUsedFatigueGiveItem` | `0x081105f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081105f6  _ZN13EventClassify20CUsedFatigueGiveItem24sendEventItemFromFatigueEP5CUserj
#           EventClassify::CUsedFatigueGiveItem::sendEventItemFromFatigue(CUser*, unsigned int)
# range [0x081105f6, 0x08110755]
081105f6 +0x000:  push   %ebp
081105f7 +0x001:  mov    %esp,%ebp
081105f9 +0x003:  push   %esi
081105fa +0x004:  push   %ebx
081105fb +0x005:  sub    $0x30,%esp
081105fe +0x008:  mov    0x8(%ebp),%eax
08110601 +0x00b:  mov    0x1c(%eax),%eax
08110604 +0x00e:  mov    0x10(%eax),%eax
08110607 +0x011:  test   %eax,%eax
08110609 +0x013:  je     08110748 <+0x152>
0811060f +0x019:  mov    0xc(%ebp),%eax
08110612 +0x01c:  mov    %eax,(%esp)
08110615 +0x01f:  call   08110e6c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x37e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x37e
0811061a +0x024:  test   %eax,%eax
0811061c +0x026:  sete   %al
0811061f +0x029:  test   %al,%al
08110621 +0x02b:  jne    0811074b <+0x155>
08110627 +0x031:  mov    0xc(%ebp),%eax
0811062a +0x034:  mov    %eax,(%esp)
0811062d +0x037:  call   08110e6c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x37e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x37e
08110632 +0x03c:  sub    0x10(%ebp),%eax
08110635 +0x03f:  mov    %eax,-0x10(%ebp)
08110638 +0x042:  mov    0x8(%ebp),%eax
0811063b +0x045:  mov    0x1c(%eax),%eax
0811063e +0x048:  mov    0x1c(%eax),%eax
08110641 +0x04b:  test   %eax,%eax
08110643 +0x04d:  js     0811072d <+0x137>
08110649 +0x053:  mov    0x8(%ebp),%eax
0811064c +0x056:  mov    0x1c(%eax),%eax
0811064f +0x059:  mov    0x1c(%eax),%eax
08110652 +0x05c:  cmp    -0x10(%ebp),%eax
08110655 +0x05f:  ja     0811072d <+0x137>
0811065b +0x065:  jmp    0811074f <+0x159>
08110660 +0x06a:  mov    0x8(%ebp),%eax
08110663 +0x06d:  mov    0x1c(%eax),%eax
08110666 +0x070:  mov    0x1c(%eax),%eax
08110669 +0x073:  test   %eax,%eax
0811066b +0x075:  js     0811067f <+0x89>
0811066d +0x077:  mov    0x8(%ebp),%eax
08110670 +0x07a:  mov    0x1c(%eax),%eax
08110673 +0x07d:  mov    0x1c(%eax),%eax
08110676 +0x080:  cmp    -0x10(%ebp),%eax
08110679 +0x083:  jbe    0811074e <+0x158>
0811067f +0x089:  addl   $0x1,-0x10(%ebp)
08110683 +0x08d:  mov    0x8(%ebp),%eax
08110686 +0x090:  mov    0x1c(%eax),%eax
08110689 +0x093:  mov    0x10(%eax),%eax
0811068c +0x096:  mov    %eax,%ecx
0811068e +0x098:  mov    -0x10(%ebp),%eax
08110691 +0x09b:  mov    $0x0,%edx
08110696 +0x0a0:  div    %ecx
08110698 +0x0a2:  mov    %edx,%eax
0811069a +0x0a4:  test   %eax,%eax
0811069c +0x0a6:  jne    0811072d <+0x137>
081106a2 +0x0ac:  mov    0x8(%ebp),%eax
081106a5 +0x0af:  mov    0x1c(%eax),%eax
081106a8 +0x0b2:  add    $0x20,%eax
081106ab +0x0b5:  movl   $0x1,0xc(%esp)
081106b3 +0x0bd:  mov    %eax,0x8(%esp)
081106b7 +0x0c1:  mov    0xc(%ebp),%eax
081106ba +0x0c4:  mov    %eax,0x4(%esp)
081106be +0x0c8:  lea    -0x11(%ebp),%eax
081106c1 +0x0cb:  mov    %eax,(%esp)
081106c4 +0x0ce:  call   0810cf32 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb>  ; EventClassify::CEventActionMng::process_action_send_mail(CUser*, Action_SendMail&, bool)
081106c9 +0x0d3:  mov    %eax,-0xc(%ebp)
081106cc +0x0d6:  cmpl   $0x0,-0xc(%ebp)
081106d0 +0x0da:  je     0811072d <+0x137>
081106d2 +0x0dc:  mov    0x8(%ebp),%eax
081106d5 +0x0df:  mov    0x1c(%eax),%eax
081106d8 +0x0e2:  mov    0x40(%eax),%esi
081106db +0x0e5:  mov    0xc(%ebp),%eax
081106de +0x0e8:  mov    %eax,(%esp)
081106e1 +0x0eb:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081106e6 +0x0f0:  mov    %eax,%ebx
081106e8 +0x0f2:  mov    0xc(%ebp),%eax
081106eb +0x0f5:  mov    %eax,(%esp)
081106ee +0x0f8:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081106f3 +0x0fd:  mov    %esi,0x1c(%esp)
081106f7 +0x101:  mov    %ebx,0x18(%esp)
081106fb +0x105:  mov    %eax,0x14(%esp)
081106ff +0x109:  movl   $"CUsedFatigueGiveItem::sendEventItemFromFatigue(m_id:%d, charac_no:%d, reward:%d)",0x10(%esp)
08110707 +0x111:  movl   $0x83f,0xc(%esp)
0811070f +0x119:  movl   $&_ZZN13EventClassify20CUsedFatigueGiveItem24sendEventItemFromFatigueEP5CUserjE19__PRETTY_FUNCTION__,0x8(%esp)
08110717 +0x121:  movl   $"EventClassify.cpp",0x4(%esp)
0811071f +0x129:  movl   $0x1,(%esp)
08110726 +0x130:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0811072b +0x135:  jmp    0811074f <+0x159>
0811072d +0x137:  mov    0xc(%ebp),%eax
08110730 +0x13a:  mov    %eax,(%esp)
08110733 +0x13d:  call   08110e6c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x37e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x37e
08110738 +0x142:  cmp    -0x10(%ebp),%eax
0811073b +0x145:  seta   %al
0811073e +0x148:  test   %al,%al
08110740 +0x14a:  jne    08110660 <+0x6a>
08110746 +0x150:  jmp    0811074f <+0x159>
08110748 +0x152:  nop
08110749 +0x153:  jmp    0811074f <+0x159>
0811074b +0x155:  nop
0811074c +0x156:  jmp    0811074f <+0x159>
0811074e +0x158:  nop
0811074f +0x159:  add    $0x30,%esp
08110752 +0x15c:  pop    %ebx
08110753 +0x15d:  pop    %esi
08110754 +0x15e:  pop    %ebp
08110755 +0x15f:  ret
```

## 反编译 C

```c
// EventClassify::CUsedFatigueGiveItem::sendEventItemFromFatigue @ 0x81105f6

/* EventClassify::CUsedFatigueGiveItem::sendEventItemFromFatigue(CUser*, unsigned int) */

void __thiscall
EventClassify::CUsedFatigueGiveItem::sendEventItemFromFatigue
          (CUsedFatigueGiveItem *this,CUser *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  CEventActionMng local_15;
  uint local_14;
  int local_10;
  
  if ((*(int *)(*(int *)(this + 0x1c) + 0x10) != 0) &&
     (iVar2 = CUser::GetCurCharacUsedGiftFatigueQuantity(param_1), iVar2 != 0)) {
    iVar2 = CUser::GetCurCharacUsedGiftFatigueQuantity(param_1);
    local_14 = iVar2 - param_2;
    if ((*(int *)(*(int *)(this + 0x1c) + 0x1c) < 0) ||
       (local_14 < *(uint *)(*(int *)(this + 0x1c) + 0x1c))) {
      do {
        uVar5 = CUser::GetCurCharacUsedGiftFatigueQuantity(param_1);
        if (uVar5 <= local_14) {
          return;
        }
        if ((-1 < *(int *)(*(int *)(this + 0x1c) + 0x1c)) &&
           (*(uint *)(*(int *)(this + 0x1c) + 0x1c) <= local_14)) {
          return;
        }
        local_14 = local_14 + 1;
      } while ((local_14 % *(uint *)(*(int *)(this + 0x1c) + 0x10) != 0) ||
              (local_10 = CEventActionMng::process_action_send_mail
                                    (&local_15,param_1,
                                     (Action_SendMail *)(*(int *)(this + 0x1c) + 0x20),true),
              local_10 == 0));
      uVar1 = *(undefined4 *)(*(int *)(this + 0x1c) + 0x40);
      uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      uVar4 = CUser::get_acc_id(param_1);
      LogManager::logFormat
                (1,"EventClassify.cpp",
                 "void EventClassify::CUsedFatigueGiveItem::sendEventItemFromFatigue(CUser*, unsigned int)"
                 ,0x83f,
                 "CUsedFatigueGiveItem::sendEventItemFromFatigue(m_id:%d, charac_no:%d, reward:%d)",
                 uVar4,uVar3,uVar1);
    }
  }
  return;
}
```

# verifyCharacVillage

`_ZN13Inter_LoadEtc19verifyCharacVillageEP5CUser`

`Inter_LoadEtc::verifyCharacVillage(CUser*)`

| 类 | 地址 |
|---|---|
| `Inter_LoadEtc` | `0x084e866c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e866c  _ZN13Inter_LoadEtc19verifyCharacVillageEP5CUser
#           Inter_LoadEtc::verifyCharacVillage(CUser*)
# range [0x084e866c, 0x084e87dd]
084e866c +0x000:  push   %ebp
084e866d +0x001:  mov    %esp,%ebp
084e866f +0x003:  push   %ebx
084e8670 +0x004:  sub    $0x24,%esp
084e8673 +0x007:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084e8678 +0x00c:  mov    %eax,(%esp)
084e867b +0x00f:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
084e8680 +0x014:  test   %al,%al
084e8682 +0x016:  jne    084e87d7 <+0x16b>
084e8688 +0x01c:  mov    0xc(%ebp),%eax
084e868b +0x01f:  mov    %eax,(%esp)
084e868e +0x022:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
084e8693 +0x027:  movsbl %al,%eax
084e8696 +0x02a:  mov    %eax,-0x14(%ebp)
084e8699 +0x02d:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084e869e +0x032:  mov    -0x14(%ebp),%edx
084e86a1 +0x035:  mov    %edx,0x4(%esp)
084e86a5 +0x039:  mov    %eax,(%esp)
084e86a8 +0x03c:  call   086d1764 <_ZN9GameWorld10GetVillageEi>  ; GameWorld::GetVillage(int)
084e86ad +0x041:  mov    %eax,-0x10(%ebp)
084e86b0 +0x044:  cmpl   $0x0,-0x10(%ebp)
084e86b4 +0x048:  jne    084e86ce <+0x62>
084e86b6 +0x04a:  mov    0xc(%ebp),%eax
084e86b9 +0x04d:  movl   $0x1,0x4(%esp)
084e86c1 +0x055:  mov    %eax,(%esp)
084e86c4 +0x058:  call   086455bc <_ZN15CUserCharacInfo16setCurCharacVillEc>  ; CUserCharacInfo::setCurCharacVill(char)
084e86c9 +0x05d:  jmp    084e87d8 <+0x16c>
084e86ce +0x062:  movb   $0x0,-0x9(%ebp)
084e86d2 +0x066:  mov    0xc(%ebp),%eax
084e86d5 +0x069:  mov    %eax,(%esp)
084e86d8 +0x06c:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
084e86dd +0x071:  mov    -0x10(%ebp),%edx
084e86e0 +0x074:  mov    0x2c(%edx),%edx
084e86e3 +0x077:  cmp    %edx,%eax
084e86e5 +0x079:  setl   %al
084e86e8 +0x07c:  test   %al,%al
084e86ea +0x07e:  je     084e86f0 <+0x84>
084e86ec +0x080:  movb   $0x1,-0x9(%ebp)
084e86f0 +0x084:  mov    -0x10(%ebp),%eax
084e86f3 +0x087:  mov    0x30(%eax),%eax
084e86f6 +0x08a:  test   %eax,%eax
084e86f8 +0x08c:  je     084e8722 <+0xb6>
084e86fa +0x08e:  mov    -0x10(%ebp),%eax
084e86fd +0x091:  mov    0x30(%eax),%ebx
084e8700 +0x094:  mov    0xc(%ebp),%eax
084e8703 +0x097:  mov    %eax,(%esp)
084e8706 +0x09a:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
084e870b +0x09f:  mov    %ebx,0x4(%esp)
084e870f +0x0a3:  mov    %eax,(%esp)
084e8712 +0x0a6:  call   086ab920 <_ZNK9UserQuest12isClearQuestEi>  ; UserQuest::isClearQuest(int) const
084e8717 +0x0ab:  xor    $0x1,%eax
084e871a +0x0ae:  test   %al,%al
084e871c +0x0b0:  je     084e8722 <+0xb6>
084e871e +0x0b2:  movb   $0x1,-0x9(%ebp)
084e8722 +0x0b6:  cmpb   $0x0,-0x9(%ebp)
084e8726 +0x0ba:  je     084e87d8 <+0x16c>
084e872c +0x0c0:  cmpl   $0xb,-0x14(%ebp)
084e8730 +0x0c4:  ja     084e87d8 <+0x16c>
084e8736 +0x0ca:  mov    -0x14(%ebp),%eax
084e8739 +0x0cd:  shl    $0x2,%eax
084e873c +0x0d0:  mov    &data#666da148(.rodata)(%eax),%eax
084e8742 +0x0d6:  jmp    *%eax
084e8744 +0x0d8:  mov    0xc(%ebp),%eax
084e8747 +0x0db:  movl   $0x1,0x4(%esp)
084e874f +0x0e3:  mov    %eax,(%esp)
084e8752 +0x0e6:  call   086455bc <_ZN15CUserCharacInfo16setCurCharacVillEc>  ; CUserCharacInfo::setCurCharacVill(char)
084e8757 +0x0eb:  jmp    084e87d8 <+0x16c>
084e8759 +0x0ed:  mov    0xc(%ebp),%eax
084e875c +0x0f0:  movl   $0x2,0x4(%esp)
084e8764 +0x0f8:  mov    %eax,(%esp)
084e8767 +0x0fb:  call   086455bc <_ZN15CUserCharacInfo16setCurCharacVillEc>  ; CUserCharacInfo::setCurCharacVill(char)
084e876c +0x100:  jmp    084e87d8 <+0x16c>
084e876e +0x102:  mov    0xc(%ebp),%eax
084e8771 +0x105:  movl   $0x1,0x4(%esp)
084e8779 +0x10d:  mov    %eax,(%esp)
084e877c +0x110:  call   086455bc <_ZN15CUserCharacInfo16setCurCharacVillEc>  ; CUserCharacInfo::setCurCharacVill(char)
084e8781 +0x115:  jmp    084e87d8 <+0x16c>
084e8783 +0x117:  mov    0xc(%ebp),%eax
084e8786 +0x11a:  movl   $0x2,0x4(%esp)
084e878e +0x122:  mov    %eax,(%esp)
084e8791 +0x125:  call   086455bc <_ZN15CUserCharacInfo16setCurCharacVillEc>  ; CUserCharacInfo::setCurCharacVill(char)
084e8796 +0x12a:  jmp    084e87d8 <+0x16c>
084e8798 +0x12c:  mov    0xc(%ebp),%eax
084e879b +0x12f:  movl   $0x3,0x4(%esp)
084e87a3 +0x137:  mov    %eax,(%esp)
084e87a6 +0x13a:  call   086455bc <_ZN15CUserCharacInfo16setCurCharacVillEc>  ; CUserCharacInfo::setCurCharacVill(char)
084e87ab +0x13f:  jmp    084e87d8 <+0x16c>
084e87ad +0x141:  mov    0xc(%ebp),%eax
084e87b0 +0x144:  movl   $0x3,0x4(%esp)
084e87b8 +0x14c:  mov    %eax,(%esp)
084e87bb +0x14f:  call   086455bc <_ZN15CUserCharacInfo16setCurCharacVillEc>  ; CUserCharacInfo::setCurCharacVill(char)
084e87c0 +0x154:  jmp    084e87d8 <+0x16c>
084e87c2 +0x156:  mov    0xc(%ebp),%eax
084e87c5 +0x159:  movl   $0x2,0x4(%esp)
084e87cd +0x161:  mov    %eax,(%esp)
084e87d0 +0x164:  call   086455bc <_ZN15CUserCharacInfo16setCurCharacVillEc>  ; CUserCharacInfo::setCurCharacVill(char)
084e87d5 +0x169:  jmp    084e87d8 <+0x16c>
084e87d7 +0x16b:  nop
084e87d8 +0x16c:  add    $0x24,%esp
084e87db +0x16f:  pop    %ebx
084e87dc +0x170:  pop    %ebp
084e87dd +0x171:  ret
```

## 反编译 C

```c
// Inter_LoadEtc::verifyCharacVillage @ 0x84e866c

/* Inter_LoadEtc::verifyCharacVillage(CUser*) */

void __thiscall Inter_LoadEtc::verifyCharacVillage(Inter_LoadEtc *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  GameWorld *pGVar4;
  int iVar5;
  int iVar6;
  UserQuest *this_00;
  
  pGVar4 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsPVPChannel(pGVar4);
  if (cVar2 == '\0') {
    cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    pGVar4 = (GameWorld *)G_GameWorld();
    iVar5 = GameWorld::GetVillage(pGVar4,(int)cVar2);
    if (iVar5 == 0) {
      CUserCharacInfo::setCurCharacVill((CUserCharacInfo *)param_1,'\x01');
    }
    else {
      iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      bVar1 = iVar6 < *(int *)(iVar5 + 0x2c);
      if (*(int *)(iVar5 + 0x30) != 0) {
        iVar5 = *(int *)(iVar5 + 0x30);
        this_00 = (UserQuest *)CUser::getCurCharacQuestR(param_1);
        cVar3 = UserQuest::isClearQuest(this_00,iVar5);
        if (cVar3 != '\x01') {
          bVar1 = true;
        }
      }
      if (bVar1) {
        switch((int)cVar2) {
        case 2:
          CUserCharacInfo::setCurCharacVill((CUserCharacInfo *)param_1,'\x01');
          break;
        case 3:
          CUserCharacInfo::setCurCharacVill((CUserCharacInfo *)param_1,'\x02');
          break;
        case 4:
          CUserCharacInfo::setCurCharacVill((CUserCharacInfo *)param_1,'\x01');
          break;
        case 5:
          CUserCharacInfo::setCurCharacVill((CUserCharacInfo *)param_1,'\x02');
          break;
        case 6:
          CUserCharacInfo::setCurCharacVill((CUserCharacInfo *)param_1,'\x03');
          break;
        case 9:
          CUserCharacInfo::setCurCharacVill((CUserCharacInfo *)param_1,'\x03');
          break;
        case 0xb:
          CUserCharacInfo::setCurCharacVill((CUserCharacInfo *)param_1,'\x02');
        }
      }
    }
  }
  return;
}
```

# _forceReset

`_ZN12CAchievement11_forceResetEj`

`CAchievement::_forceReset(unsigned int)`

| 类 | 地址 |
|---|---|
| `CAchievement` | `0x0828ce40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828ce40  _ZN12CAchievement11_forceResetEj
#           CAchievement::_forceReset(unsigned int)
# range [0x0828ce40, 0x0828d091]
0828ce40 +0x000:  push   %ebp
0828ce41 +0x001:  mov    %esp,%ebp
0828ce43 +0x003:  push   %esi
0828ce44 +0x004:  push   %ebx
0828ce45 +0x005:  sub    $0x40,%esp
0828ce48 +0x008:  mov    0xc(%ebp),%eax
0828ce4b +0x00b:  mov    %eax,%ebx
0828ce4d +0x00d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0828ce52 +0x012:  mov    %ebx,0x4(%esp)
0828ce56 +0x016:  mov    %eax,(%esp)
0828ce59 +0x019:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
0828ce5e +0x01e:  mov    %eax,-0x18(%ebp)
0828ce61 +0x021:  cmpl   $0x0,-0x18(%ebp)
0828ce65 +0x025:  je     0828d078 <+0x238>
0828ce6b +0x02b:  mov    -0x18(%ebp),%eax
0828ce6e +0x02e:  mov    0x8(%eax),%eax
0828ce71 +0x031:  cmp    $0x7,%eax
0828ce74 +0x034:  jne    0828d07b <+0x23b>
0828ce7a +0x03a:  mov    -0x18(%ebp),%eax
0828ce7d +0x03d:  mov    %eax,(%esp)
0828ce80 +0x040:  call   08353082 <_ZNK5Quest16get_title_rewardEv>  ; Quest::get_title_reward() const
0828ce85 +0x045:  mov    %eax,-0x14(%ebp)
0828ce88 +0x048:  cmpl   $0x0,-0x14(%ebp)
0828ce8c +0x04c:  je     0828d07e <+0x23e>
0828ce92 +0x052:  mov    0xc(%ebp),%eax
0828ce95 +0x055:  mov    %eax,0x4(%esp)
0828ce99 +0x059:  mov    0x8(%ebp),%eax
0828ce9c +0x05c:  mov    %eax,(%esp)
0828ce9f +0x05f:  call   0828cbe4 <_ZN12CAchievement20isClearedAchievementEj>  ; CAchievement::isClearedAchievement(unsigned int)
0828cea4 +0x064:  test   %al,%al
0828cea6 +0x066:  je     0828cf7c <+0x13c>
0828ceac +0x06c:  mov    0x8(%ebp),%eax
0828ceaf +0x06f:  lea    0xc(%eax),%ecx
0828ceb2 +0x072:  lea    -0x28(%ebp),%eax
0828ceb5 +0x075:  lea    0xc(%ebp),%edx
0828ceb8 +0x078:  mov    %edx,0x8(%esp)
0828cebc +0x07c:  mov    %ecx,0x4(%esp)
0828cec0 +0x080:  mov    %eax,(%esp)
0828cec3 +0x083:  call   0828ddbe <_GLOBAL__I__ZN12CAchievementC2Ev+0x56b>  ; global constructors keyed to CAchievement::CAchievement()+0x56b
0828cec8 +0x088:  sub    $0x4,%esp
0828cecb +0x08b:  mov    0x8(%ebp),%eax
0828cece +0x08e:  lea    0xc(%eax),%edx
0828ced1 +0x091:  lea    -0x1c(%ebp),%eax
0828ced4 +0x094:  mov    %edx,0x4(%esp)
0828ced8 +0x098:  mov    %eax,(%esp)
0828cedb +0x09b:  call   0828ddea <_GLOBAL__I__ZN12CAchievementC2Ev+0x597>  ; global constructors keyed to CAchievement::CAchievement()+0x597
0828cee0 +0x0a0:  sub    $0x4,%esp
0828cee3 +0x0a3:  lea    -0x1c(%ebp),%eax
0828cee6 +0x0a6:  mov    %eax,0x4(%esp)
0828ceea +0x0aa:  lea    -0x28(%ebp),%eax
0828ceed +0x0ad:  mov    %eax,(%esp)
0828cef0 +0x0b0:  call   0828de10 <_GLOBAL__I__ZN12CAchievementC2Ev+0x5bd>  ; global constructors keyed to CAchievement::CAchievement()+0x5bd
0828cef5 +0x0b5:  test   %al,%al
0828cef7 +0x0b7:  je     0828cf71 <+0x131>
0828cef9 +0x0b9:  lea    -0x34(%ebp),%eax
0828cefc +0x0bc:  mov    %eax,(%esp)
0828ceff +0x0bf:  call   0828d870 <_GLOBAL__I__ZN12CAchievementC2Ev+0x1d>  ; global constructors keyed to CAchievement::CAchievement()+0x1d
0828cf04 +0x0c4:  lea    -0x34(%ebp),%eax
0828cf07 +0x0c7:  add    $0x8,%eax
0828cf0a +0x0ca:  mov    %eax,0xc(%esp)
0828cf0e +0x0ce:  lea    -0x34(%ebp),%eax
0828cf11 +0x0d1:  add    $0x6,%eax
0828cf14 +0x0d4:  mov    %eax,0x8(%esp)
0828cf18 +0x0d8:  lea    -0x34(%ebp),%eax
0828cf1b +0x0db:  add    $0x4,%eax
0828cf1e +0x0de:  mov    %eax,0x4(%esp)
0828cf22 +0x0e2:  mov    -0x18(%ebp),%eax
0828cf25 +0x0e5:  mov    %eax,(%esp)
0828cf28 +0x0e8:  call   08352fb4 <_ZNK5Quest28get_init_achievement_triggerERtS0_S0_>  ; Quest::get_init_achievement_trigger(unsigned short&, unsigned short&, unsigned short&) const
0828cf2d +0x0ed:  xor    $0x1,%eax
0828cf30 +0x0f0:  test   %al,%al
0828cf32 +0x0f2:  jne    0828d081 <+0x241>
0828cf38 +0x0f8:  lea    -0x28(%ebp),%eax
0828cf3b +0x0fb:  mov    %eax,(%esp)
0828cf3e +0x0fe:  call   0828de24 <_GLOBAL__I__ZN12CAchievementC2Ev+0x5d1>  ; global constructors keyed to CAchievement::CAchievement()+0x5d1
0828cf43 +0x103:  movzwl -0x30(%ebp),%edx
0828cf47 +0x107:  mov    %dx,0x8(%eax)
0828cf4b +0x10b:  lea    -0x28(%ebp),%eax
0828cf4e +0x10e:  mov    %eax,(%esp)
0828cf51 +0x111:  call   0828de24 <_GLOBAL__I__ZN12CAchievementC2Ev+0x5d1>  ; global constructors keyed to CAchievement::CAchievement()+0x5d1
0828cf56 +0x116:  movzwl -0x2e(%ebp),%edx
0828cf5a +0x11a:  mov    %dx,0xa(%eax)
0828cf5e +0x11e:  lea    -0x28(%ebp),%eax
0828cf61 +0x121:  mov    %eax,(%esp)
0828cf64 +0x124:  call   0828de24 <_GLOBAL__I__ZN12CAchievementC2Ev+0x5d1>  ; global constructors keyed to CAchievement::CAchievement()+0x5d1
0828cf69 +0x129:  movzwl -0x2c(%ebp),%edx
0828cf6d +0x12d:  mov    %dx,0xc(%eax)
0828cf71 +0x131:  mov    0x8(%ebp),%eax
0828cf74 +0x134:  mov    %eax,(%esp)
0828cf77 +0x137:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
0828cf7c +0x13c:  movl   $0x4,-0x20(%ebp)
0828cf83 +0x143:  movl   $0x0,-0x24(%ebp)
0828cf8a +0x14a:  mov    0x8(%ebp),%eax
0828cf8d +0x14d:  mov    0x8(%eax),%eax
0828cf90 +0x150:  movl   $0xe,0x4(%esp)
0828cf98 +0x158:  mov    %eax,(%esp)
0828cf9b +0x15b:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0828cfa0 +0x160:  lea    -0x24(%ebp),%eax
0828cfa3 +0x163:  mov    %eax,0x8(%esp)
0828cfa7 +0x167:  lea    -0x20(%ebp),%eax
0828cfaa +0x16a:  mov    %eax,0x4(%esp)
0828cfae +0x16e:  mov    -0x14(%ebp),%eax
0828cfb1 +0x171:  mov    %eax,(%esp)
0828cfb4 +0x174:  call   08642baa <_ZN10CTitleBook11_getFitSlotEiR24ENUM_TITLE_BOOK_CATEGORYRi>  ; CTitleBook::_getFitSlot(int, ENUM_TITLE_BOOK_CATEGORY&, int&)
0828cfb9 +0x179:  mov    -0x24(%ebp),%esi
0828cfbc +0x17c:  mov    -0x20(%ebp),%ebx
0828cfbf +0x17f:  mov    0x8(%ebp),%eax
0828cfc2 +0x182:  mov    0x8(%eax),%eax
0828cfc5 +0x185:  movl   $0xe,0x4(%esp)
0828cfcd +0x18d:  mov    %eax,(%esp)
0828cfd0 +0x190:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0828cfd5 +0x195:  mov    %esi,0x8(%esp)
0828cfd9 +0x199:  mov    %ebx,0x4(%esp)
0828cfdd +0x19d:  mov    %eax,(%esp)
0828cfe0 +0x1a0:  call   086416d8 <_ZN10CTitleBook12getTitleSlotE24ENUM_TITLE_BOOK_CATEGORYi>  ; CTitleBook::getTitleSlot(ENUM_TITLE_BOOK_CATEGORY, int)
0828cfe5 +0x1a5:  mov    %eax,-0x10(%ebp)
0828cfe8 +0x1a8:  cmpl   $0x0,-0x10(%ebp)
0828cfec +0x1ac:  je     0828d084 <+0x244>
0828cff2 +0x1b2:  mov    -0x10(%ebp),%eax
0828cff5 +0x1b5:  mov    0x2(%eax),%eax
0828cff8 +0x1b8:  test   %eax,%eax
0828cffa +0x1ba:  je     0828d009 <+0x1c9>
0828cffc +0x1bc:  mov    -0x10(%ebp),%eax
0828cfff +0x1bf:  mov    %eax,(%esp)
0828d002 +0x1c2:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
0828d007 +0x1c7:  jmp    0828d088 <+0x248>
0828d009 +0x1c9:  mov    0x8(%ebp),%eax
0828d00c +0x1cc:  mov    0x8(%eax),%eax
0828d00f +0x1cf:  mov    %eax,(%esp)
0828d012 +0x1d2:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0828d017 +0x1d7:  movl   $0xb,0x8(%esp)
0828d01f +0x1df:  movl   $0x0,0x4(%esp)
0828d027 +0x1e7:  mov    %eax,(%esp)
0828d02a +0x1ea:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
0828d02f +0x1ef:  mov    %eax,-0xc(%ebp)
0828d032 +0x1f2:  cmpl   $0x0,-0xc(%ebp)
0828d036 +0x1f6:  je     0828d087 <+0x247>
0828d038 +0x1f8:  mov    -0xc(%ebp),%eax
0828d03b +0x1fb:  mov    0x2(%eax),%edx
0828d03e +0x1fe:  mov    -0x14(%ebp),%eax
0828d041 +0x201:  cmp    %eax,%edx
0828d043 +0x203:  jne    0828d088 <+0x248>
0828d045 +0x205:  mov    -0xc(%ebp),%eax
0828d048 +0x208:  mov    %eax,(%esp)
0828d04b +0x20b:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
0828d050 +0x210:  mov    0x8(%ebp),%eax
0828d053 +0x213:  mov    0x8(%eax),%eax
0828d056 +0x216:  movl   $0xb,0xc(%esp)
0828d05e +0x21e:  movl   $0x0,0x8(%esp)
0828d066 +0x226:  movl   $0x1,0x4(%esp)
0828d06e +0x22e:  mov    %eax,(%esp)
0828d071 +0x231:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0828d076 +0x236:  jmp    0828d088 <+0x248>
0828d078 +0x238:  nop
0828d079 +0x239:  jmp    0828d088 <+0x248>
0828d07b +0x23b:  nop
0828d07c +0x23c:  jmp    0828d088 <+0x248>
0828d07e +0x23e:  nop
0828d07f +0x23f:  jmp    0828d088 <+0x248>
0828d081 +0x241:  nop
0828d082 +0x242:  jmp    0828d088 <+0x248>
0828d084 +0x244:  nop
0828d085 +0x245:  jmp    0828d088 <+0x248>
0828d087 +0x247:  nop
0828d088 +0x248:  lea    -0x8(%ebp),%esp
0828d08b +0x24b:  add    $0x0,%esp
0828d08e +0x24e:  pop    %ebx
0828d08f +0x24f:  pop    %esi
0828d090 +0x250:  pop    %ebp
0828d091 +0x251:  ret
```

## 反编译 C

```c
// CAchievement::_forceReset @ 0x828ce40

/* CAchievement::_forceReset(unsigned int) */

void CAchievement::_forceReset(uint param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  CTitleBook *pCVar4;
  CInventory *this;
  stAchievement local_38 [4];
  ushort local_34;
  ushort local_32;
  ushort local_30 [2];
  _Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>> local_2c [4];
  int local_28;
  undefined4 local_24;
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  local_20 [4];
  Quest *local_1c;
  int local_18;
  Inven_Item *local_14;
  Inven_Item *local_10;
  
  iVar3 = G_CDataManager();
  local_1c = (Quest *)CDataManager::find_quest(iVar3);
  if (((local_1c != (Quest *)0x0) && (*(int *)(local_1c + 8) == 7)) &&
     (local_18 = Quest::get_title_reward(local_1c), local_18 != 0)) {
    cVar2 = isClearedAchievement(param_1);
    if (cVar2 != '\0') {
      std::
      map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
      ::find((uint *)local_2c);
      std::
      map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
      ::end(local_20);
      cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator!=
                        (local_2c,(_Rb_tree_iterator *)local_20);
      if (cVar2 != '\0') {
        stAchievement::stAchievement(local_38);
        cVar2 = Quest::get_init_achievement_trigger(local_1c,&local_34,&local_32,local_30);
        if (cVar2 != '\x01') {
          return;
        }
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                          (local_2c);
        *(ushort *)(iVar3 + 8) = local_34;
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                          (local_2c);
        *(ushort *)(iVar3 + 10) = local_32;
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                          (local_2c);
        *(ushort *)(iVar3 + 0xc) = local_30[0];
      }
      charac_expand::CData::alter((CData *)param_1);
    }
    local_24 = 4;
    local_28 = 0;
    CUser::GetCharacExpandData(*(CUser **)(param_1 + 8),0xe);
    CTitleBook::_getFitSlot(local_18,(ENUM_TITLE_BOOK_CATEGORY *)&local_24,&local_28);
    uVar1 = local_24;
    iVar3 = local_28;
    pCVar4 = (CTitleBook *)CUser::GetCharacExpandData(*(CUser **)(param_1 + 8),0xe);
    local_14 = (Inven_Item *)CTitleBook::getTitleSlot(pCVar4,uVar1,iVar3);
    if (local_14 != (Inven_Item *)0x0) {
      if (*(int *)(local_14 + 2) == 0) {
        this = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(param_1 + 8))
        ;
        local_10 = (Inven_Item *)CInventory::GetInvenRef(this,0,0xb);
        if ((local_10 != (Inven_Item *)0x0) && (*(int *)(local_10 + 2) == local_18)) {
          Inven_Item::reset(local_10);
          CUser::SendUpdateItem(*(CUser **)(param_1 + 8),1,0,0xb);
        }
      }
      else {
        Inven_Item::reset(local_14);
      }
    }
  }
  return;
}
```

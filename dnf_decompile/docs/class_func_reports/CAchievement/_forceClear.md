# _forceClear

`_ZN12CAchievement11_forceClearEj`

`CAchievement::_forceClear(unsigned int)`

| 类 | 地址 |
|---|---|
| `CAchievement` | `0x0828cc56` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828cc56  _ZN12CAchievement11_forceClearEj
#           CAchievement::_forceClear(unsigned int)
# range [0x0828cc56, 0x0828ce3f]
0828cc56 +0x000:  push   %ebp
0828cc57 +0x001:  mov    %esp,%ebp
0828cc59 +0x003:  push   %esi
0828cc5a +0x004:  push   %ebx
0828cc5b +0x005:  sub    $0xc0,%esp
0828cc61 +0x00b:  mov    0xc(%ebp),%ebx
0828cc64 +0x00e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0828cc69 +0x013:  mov    %ebx,0x4(%esp)
0828cc6d +0x017:  mov    %eax,(%esp)
0828cc70 +0x01a:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
0828cc75 +0x01f:  mov    %eax,-0x10(%ebp)
0828cc78 +0x022:  cmpl   $0x0,-0x10(%ebp)
0828cc7c +0x026:  je     0828ce2f <+0x1d9>
0828cc82 +0x02c:  mov    -0x10(%ebp),%eax
0828cc85 +0x02f:  mov    0x8(%eax),%eax
0828cc88 +0x032:  cmp    $0x7,%eax
0828cc8b +0x035:  jne    0828ce32 <+0x1dc>
0828cc91 +0x03b:  mov    -0x10(%ebp),%eax
0828cc94 +0x03e:  mov    %eax,(%esp)
0828cc97 +0x041:  call   08353082 <_ZNK5Quest16get_title_rewardEv>  ; Quest::get_title_reward() const
0828cc9c +0x046:  mov    %eax,-0xc(%ebp)
0828cc9f +0x049:  cmpl   $0x0,-0xc(%ebp)
0828cca3 +0x04d:  je     0828ce35 <+0x1df>
0828cca9 +0x053:  mov    0xc(%ebp),%eax
0828ccac +0x056:  mov    %eax,0x4(%esp)
0828ccb0 +0x05a:  mov    0x8(%ebp),%eax
0828ccb3 +0x05d:  mov    %eax,(%esp)
0828ccb6 +0x060:  call   0828cbe4 <_ZN12CAchievement20isClearedAchievementEj>  ; CAchievement::isClearedAchievement(unsigned int)
0828ccbb +0x065:  xor    $0x1,%eax
0828ccbe +0x068:  test   %al,%al
0828ccc0 +0x06a:  je     0828cd47 <+0xf1>
0828ccc6 +0x070:  lea    -0x1c(%ebp),%eax
0828ccc9 +0x073:  mov    %eax,(%esp)
0828cccc +0x076:  call   0828d870 <_GLOBAL__I__ZN12CAchievementC2Ev+0x1d>  ; global constructors keyed to CAchievement::CAchievement()+0x1d
0828ccd1 +0x07b:  lea    -0x1c(%ebp),%eax
0828ccd4 +0x07e:  add    $0x8,%eax
0828ccd7 +0x081:  mov    %eax,0xc(%esp)
0828ccdb +0x085:  lea    -0x1c(%ebp),%eax
0828ccde +0x088:  add    $0x6,%eax
0828cce1 +0x08b:  mov    %eax,0x8(%esp)
0828cce5 +0x08f:  lea    -0x1c(%ebp),%eax
0828cce8 +0x092:  add    $0x4,%eax
0828cceb +0x095:  mov    %eax,0x4(%esp)
0828ccef +0x099:  mov    -0x10(%ebp),%eax
0828ccf2 +0x09c:  mov    %eax,(%esp)
0828ccf5 +0x09f:  call   08352fb4 <_ZNK5Quest28get_init_achievement_triggerERtS0_S0_>  ; Quest::get_init_achievement_trigger(unsigned short&, unsigned short&, unsigned short&) const
0828ccfa +0x0a4:  movzwl -0x14(%ebp),%eax
0828ccfe +0x0a8:  movzwl %ax,%ecx
0828cd01 +0x0ab:  movzwl -0x16(%ebp),%eax
0828cd05 +0x0af:  movzwl %ax,%edx
0828cd08 +0x0b2:  movzwl -0x18(%ebp),%eax
0828cd0c +0x0b6:  movzwl %ax,%eax
0828cd0f +0x0b9:  mov    %ecx,0x10(%esp)
0828cd13 +0x0bd:  mov    %edx,0xc(%esp)
0828cd17 +0x0c1:  mov    %eax,0x8(%esp)
0828cd1b +0x0c5:  mov    0xc(%ebp),%eax
0828cd1e +0x0c8:  mov    %eax,0x4(%esp)
0828cd22 +0x0cc:  mov    0x8(%ebp),%eax
0828cd25 +0x0cf:  mov    %eax,(%esp)
0828cd28 +0x0d2:  call   0828b896 <_ZN12CAchievement11_setTriggerEjttt>  ; CAchievement::_setTrigger(unsigned int, unsigned short, unsigned short, unsigned short)
0828cd2d +0x0d7:  mov    0x8(%ebp),%eax
0828cd30 +0x0da:  mov    0x8(%eax),%eax
0828cd33 +0x0dd:  mov    -0xc(%ebp),%edx
0828cd36 +0x0e0:  mov    %edx,0x4(%esp)
0828cd3a +0x0e4:  mov    %eax,(%esp)
0828cd3d +0x0e7:  call   08641e60 <_ZN10CTitleBook12putTitleOnlyEP5CUseri>  ; CTitleBook::putTitleOnly(CUser*, int)
0828cd42 +0x0ec:  jmp    0828ce22 <+0x1cc>
0828cd47 +0x0f1:  movl   $0x4,-0x20(%ebp)
0828cd4e +0x0f8:  movl   $0x0,-0x24(%ebp)
0828cd55 +0x0ff:  mov    0x8(%ebp),%eax
0828cd58 +0x102:  mov    0x8(%eax),%eax
0828cd5b +0x105:  movl   $0xe,0x4(%esp)
0828cd63 +0x10d:  mov    %eax,(%esp)
0828cd66 +0x110:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0828cd6b +0x115:  lea    -0x24(%ebp),%eax
0828cd6e +0x118:  mov    %eax,0x8(%esp)
0828cd72 +0x11c:  lea    -0x20(%ebp),%eax
0828cd75 +0x11f:  mov    %eax,0x4(%esp)
0828cd79 +0x123:  mov    -0xc(%ebp),%eax
0828cd7c +0x126:  mov    %eax,(%esp)
0828cd7f +0x129:  call   08642baa <_ZN10CTitleBook11_getFitSlotEiR24ENUM_TITLE_BOOK_CATEGORYRi>  ; CTitleBook::_getFitSlot(int, ENUM_TITLE_BOOK_CATEGORY&, int&)
0828cd84 +0x12e:  mov    -0x24(%ebp),%esi
0828cd87 +0x131:  mov    -0x20(%ebp),%ebx
0828cd8a +0x134:  mov    0x8(%ebp),%eax
0828cd8d +0x137:  mov    0x8(%eax),%eax
0828cd90 +0x13a:  movl   $0xe,0x4(%esp)
0828cd98 +0x142:  mov    %eax,(%esp)
0828cd9b +0x145:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0828cda0 +0x14a:  mov    %eax,%edx
0828cda2 +0x14c:  lea    -0x61(%ebp),%eax
0828cda5 +0x14f:  mov    %esi,0xc(%esp)
0828cda9 +0x153:  mov    %ebx,0x8(%esp)
0828cdad +0x157:  mov    %edx,0x4(%esp)
0828cdb1 +0x15b:  mov    %eax,(%esp)
0828cdb4 +0x15e:  call   086416a4 <_ZN10CTitleBook13getTitleSlotRE24ENUM_TITLE_BOOK_CATEGORYi>  ; CTitleBook::getTitleSlotR(ENUM_TITLE_BOOK_CATEGORY, int)
0828cdb9 +0x163:  sub    $0x4,%esp
0828cdbc +0x166:  mov    -0x5f(%ebp),%eax
0828cdbf +0x169:  test   %eax,%eax
0828cdc1 +0x16b:  jne    0828ce22 <+0x1cc>
0828cdc3 +0x16d:  mov    0x8(%ebp),%eax
0828cdc6 +0x170:  mov    0x8(%eax),%eax
0828cdc9 +0x173:  mov    %eax,(%esp)
0828cdcc +0x176:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0828cdd1 +0x17b:  lea    -0x9e(%ebp),%edx
0828cdd7 +0x181:  movl   $0xb,0xc(%esp)
0828cddf +0x189:  movl   $0x0,0x8(%esp)
0828cde7 +0x191:  mov    %eax,0x4(%esp)
0828cdeb +0x195:  mov    %edx,(%esp)
0828cdee +0x198:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0828cdf3 +0x19d:  sub    $0x4,%esp
0828cdf6 +0x1a0:  mov    -0x9c(%ebp),%eax
0828cdfc +0x1a6:  test   %eax,%eax
0828cdfe +0x1a8:  je     0828ce0d <+0x1b7>
0828ce00 +0x1aa:  mov    -0x9c(%ebp),%edx
0828ce06 +0x1b0:  mov    -0xc(%ebp),%eax
0828ce09 +0x1b3:  cmp    %eax,%edx
0828ce0b +0x1b5:  je     0828ce22 <+0x1cc>
0828ce0d +0x1b7:  mov    0x8(%ebp),%eax
0828ce10 +0x1ba:  mov    0x8(%eax),%eax
0828ce13 +0x1bd:  mov    -0xc(%ebp),%edx
0828ce16 +0x1c0:  mov    %edx,0x4(%esp)
0828ce1a +0x1c4:  mov    %eax,(%esp)
0828ce1d +0x1c7:  call   08641e60 <_ZN10CTitleBook12putTitleOnlyEP5CUseri>  ; CTitleBook::putTitleOnly(CUser*, int)
0828ce22 +0x1cc:  mov    0x8(%ebp),%eax
0828ce25 +0x1cf:  mov    %eax,(%esp)
0828ce28 +0x1d2:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
0828ce2d +0x1d7:  jmp    0828ce36 <+0x1e0>
0828ce2f +0x1d9:  nop
0828ce30 +0x1da:  jmp    0828ce36 <+0x1e0>
0828ce32 +0x1dc:  nop
0828ce33 +0x1dd:  jmp    0828ce36 <+0x1e0>
0828ce35 +0x1df:  nop
0828ce36 +0x1e0:  lea    -0x8(%ebp),%esp
0828ce39 +0x1e3:  add    $0x0,%esp
0828ce3c +0x1e6:  pop    %ebx
0828ce3d +0x1e7:  pop    %esi
0828ce3e +0x1e8:  pop    %ebp
0828ce3f +0x1e9:  ret
```

## 反编译 C

```c
// CAchievement::_forceClear @ 0x828cc56

/* CAchievement::_forceClear(unsigned int) */

void __thiscall CAchievement::_forceClear(CAchievement *this,uint param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_a2 [2];
  int local_a0;
  undefined1 local_65 [2];
  int local_63;
  int local_28;
  undefined4 local_24;
  stAchievement local_20 [4];
  ushort local_1c;
  ushort local_1a;
  ushort local_18 [2];
  Quest *local_14;
  int local_10;
  
  iVar3 = G_CDataManager();
  local_14 = (Quest *)CDataManager::find_quest(iVar3);
  if (((local_14 != (Quest *)0x0) && (*(int *)(local_14 + 8) == 7)) &&
     (local_10 = Quest::get_title_reward(local_14), local_10 != 0)) {
    cVar2 = isClearedAchievement((uint)this);
    if (cVar2 == '\x01') {
      local_24 = 4;
      local_28 = 0;
      CUser::GetCharacExpandData(*(CUser **)(this + 8),0xe);
      CTitleBook::_getFitSlot(local_10,(ENUM_TITLE_BOOK_CATEGORY *)&local_24,&local_28);
      uVar1 = local_24;
      iVar3 = local_28;
      uVar4 = CUser::GetCharacExpandData(*(CUser **)(this + 8),0xe);
      CTitleBook::getTitleSlotR(local_65,uVar4,uVar1,iVar3);
      if (local_63 == 0) {
        iVar3 = CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 8));
        CInventory::GetInvenSlot((int)local_a2,iVar3);
        if ((local_a0 == 0) || (local_a0 != local_10)) {
          CTitleBook::putTitleOnly(*(CUser **)(this + 8),local_10);
        }
      }
    }
    else {
      stAchievement::stAchievement(local_20);
      Quest::get_init_achievement_trigger(local_14,&local_1c,&local_1a,local_18);
      _setTrigger(this,param_1,local_1c,local_1a,local_18[0]);
      CTitleBook::putTitleOnly(*(CUser **)(this + 8),local_10);
    }
    charac_expand::CData::alter((CData *)this);
  }
  return;
}
```

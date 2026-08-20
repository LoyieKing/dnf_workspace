# adjust

`_ZN12CAchievement6adjustEv`

`CAchievement::adjust()`

| 类 | 地址 |
|---|---|
| `CAchievement` | `0x0828c976` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828c976  _ZN12CAchievement6adjustEv
#           CAchievement::adjust()
# range [0x0828c976, 0x0828cbe3]
0828c976 +0x000:  push   %ebp
0828c977 +0x001:  mov    %esp,%ebp
0828c979 +0x003:  push   %ebx
0828c97a +0x004:  sub    $0x64,%esp
0828c97d +0x007:  movl   $0x0,-0x20(%ebp)
0828c984 +0x00e:  movl   $0x0,-0x1c(%ebp)
0828c98b +0x015:  movl   $0x0,-0x18(%ebp)
0828c992 +0x01c:  movl   $0x0,-0x24(%ebp)
0828c999 +0x023:  movl   $0x0,-0x28(%ebp)
0828c9a0 +0x02a:  movl   $0x0,-0x14(%ebp)
0828c9a7 +0x031:  jmp    0828cadf <+0x169>
0828c9ac +0x036:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0828c9b1 +0x03b:  lea    0xa7c4(%eax),%edx
0828c9b7 +0x041:  mov    -0x14(%ebp),%eax
0828c9ba +0x044:  mov    %eax,0x4(%esp)
0828c9be +0x048:  mov    %edx,(%esp)
0828c9c1 +0x04b:  call   0828e218 <_GLOBAL__I__ZN12CAchievementC2Ev+0x9c5>  ; global constructors keyed to CAchievement::CAchievement()+0x9c5
0828c9c6 +0x050:  mov    (%eax),%eax
0828c9c8 +0x052:  mov    %eax,-0x20(%ebp)
0828c9cb +0x055:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0828c9d0 +0x05a:  lea    0xa7c4(%eax),%edx
0828c9d6 +0x060:  mov    -0x14(%ebp),%eax
0828c9d9 +0x063:  mov    %eax,0x4(%esp)
0828c9dd +0x067:  mov    %edx,(%esp)
0828c9e0 +0x06a:  call   0828e218 <_GLOBAL__I__ZN12CAchievementC2Ev+0x9c5>  ; global constructors keyed to CAchievement::CAchievement()+0x9c5
0828c9e5 +0x06f:  mov    0x8(%eax),%eax
0828c9e8 +0x072:  mov    %eax,-0x18(%ebp)
0828c9eb +0x075:  mov    -0x20(%ebp),%ebx
0828c9ee +0x078:  mov    0x8(%ebp),%eax
0828c9f1 +0x07b:  mov    0x8(%eax),%eax
0828c9f4 +0x07e:  mov    %eax,(%esp)
0828c9f7 +0x081:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
0828c9fc +0x086:  add    $0x4,%eax
0828c9ff +0x089:  mov    %ebx,0x4(%esp)
0828ca03 +0x08d:  mov    %eax,(%esp)
0828ca06 +0x090:  call   0808bae0 <_ZNK8WongWork11CQuestClear14isClearedQuestEj>  ; WongWork::CQuestClear::isClearedQuest(unsigned int) const
0828ca0b +0x095:  test   %al,%al
0828ca0d +0x097:  je     0828cadb <+0x165>
0828ca13 +0x09d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0828ca18 +0x0a2:  mov    -0x18(%ebp),%edx
0828ca1b +0x0a5:  mov    %edx,0x4(%esp)
0828ca1f +0x0a9:  mov    %eax,(%esp)
0828ca22 +0x0ac:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
0828ca27 +0x0b1:  mov    %eax,-0x10(%ebp)
0828ca2a +0x0b4:  cmpl   $0x0,-0x10(%ebp)
0828ca2e +0x0b8:  je     0828cad7 <+0x161>
0828ca34 +0x0be:  mov    -0x10(%ebp),%eax
0828ca37 +0x0c1:  mov    0x8(%eax),%eax
0828ca3a +0x0c4:  cmp    $0x7,%eax
0828ca3d +0x0c7:  jne    0828cada <+0x164>
0828ca43 +0x0cd:  lea    -0x34(%ebp),%eax
0828ca46 +0x0d0:  mov    %eax,(%esp)
0828ca49 +0x0d3:  call   0828d870 <_GLOBAL__I__ZN12CAchievementC2Ev+0x1d>  ; global constructors keyed to CAchievement::CAchievement()+0x1d
0828ca4e +0x0d8:  lea    -0x34(%ebp),%eax
0828ca51 +0x0db:  add    $0x8,%eax
0828ca54 +0x0de:  mov    %eax,0xc(%esp)
0828ca58 +0x0e2:  lea    -0x34(%ebp),%eax
0828ca5b +0x0e5:  add    $0x6,%eax
0828ca5e +0x0e8:  mov    %eax,0x8(%esp)
0828ca62 +0x0ec:  lea    -0x34(%ebp),%eax
0828ca65 +0x0ef:  add    $0x4,%eax
0828ca68 +0x0f2:  mov    %eax,0x4(%esp)
0828ca6c +0x0f6:  mov    -0x10(%ebp),%eax
0828ca6f +0x0f9:  mov    %eax,(%esp)
0828ca72 +0x0fc:  call   08352fb4 <_ZNK5Quest28get_init_achievement_triggerERtS0_S0_>  ; Quest::get_init_achievement_trigger(unsigned short&, unsigned short&, unsigned short&) const
0828ca77 +0x101:  movzwl -0x2c(%ebp),%eax
0828ca7b +0x105:  movzwl %ax,%ebx
0828ca7e +0x108:  movzwl -0x2e(%ebp),%eax
0828ca82 +0x10c:  movzwl %ax,%ecx
0828ca85 +0x10f:  movzwl -0x30(%ebp),%eax
0828ca89 +0x113:  movzwl %ax,%edx
0828ca8c +0x116:  mov    -0x18(%ebp),%eax
0828ca8f +0x119:  mov    %ebx,0x10(%esp)
0828ca93 +0x11d:  mov    %ecx,0xc(%esp)
0828ca97 +0x121:  mov    %edx,0x8(%esp)
0828ca9b +0x125:  mov    %eax,0x4(%esp)
0828ca9f +0x129:  mov    0x8(%ebp),%eax
0828caa2 +0x12c:  mov    %eax,(%esp)
0828caa5 +0x12f:  call   0828b896 <_ZN12CAchievement11_setTriggerEjttt>  ; CAchievement::_setTrigger(unsigned int, unsigned short, unsigned short, unsigned short)
0828caaa +0x134:  mov    -0x10(%ebp),%eax
0828caad +0x137:  mov    %eax,(%esp)
0828cab0 +0x13a:  call   08353082 <_ZNK5Quest16get_title_rewardEv>  ; Quest::get_title_reward() const
0828cab5 +0x13f:  mov    0x8(%ebp),%edx
0828cab8 +0x142:  mov    0x8(%edx),%edx
0828cabb +0x145:  lea    -0x24(%ebp),%ecx
0828cabe +0x148:  mov    %ecx,0xc(%esp)
0828cac2 +0x14c:  lea    -0x28(%ebp),%ecx
0828cac5 +0x14f:  mov    %ecx,0x8(%esp)
0828cac9 +0x153:  mov    %eax,0x4(%esp)
0828cacd +0x157:  mov    %edx,(%esp)
0828cad0 +0x15a:  call   08641e88 <_ZN10CTitleBook12putTitleOnlyEP5CUseriR24ENUM_TITLE_BOOK_CATEGORYRi>  ; CTitleBook::putTitleOnly(CUser*, int, ENUM_TITLE_BOOK_CATEGORY&, int&)
0828cad5 +0x15f:  jmp    0828cadb <+0x165>
0828cad7 +0x161:  nop
0828cad8 +0x162:  jmp    0828cadb <+0x165>
0828cada +0x164:  nop
0828cadb +0x165:  addl   $0x1,-0x14(%ebp)
0828cadf +0x169:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0828cae4 +0x16e:  add    $0xa7c4,%eax
0828cae9 +0x173:  mov    %eax,(%esp)
0828caec +0x176:  call   0828e1f6 <_GLOBAL__I__ZN12CAchievementC2Ev+0x9a3>  ; global constructors keyed to CAchievement::CAchievement()+0x9a3
0828caf1 +0x17b:  cmp    -0x14(%ebp),%eax
0828caf4 +0x17e:  seta   %al
0828caf7 +0x181:  test   %al,%al
0828caf9 +0x183:  jne    0828c9ac <+0x36>
0828caff +0x189:  mov    0x8(%ebp),%eax
0828cb02 +0x18c:  mov    0x8(%eax),%eax
0828cb05 +0x18f:  mov    %eax,(%esp)
0828cb08 +0x192:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0828cb0d +0x197:  cmp    $0x46,%eax
0828cb10 +0x19a:  sete   %al
0828cb13 +0x19d:  test   %al,%al
0828cb15 +0x19f:  je     0828cbd0 <+0x25a>
0828cb1b +0x1a5:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0828cb20 +0x1aa:  movl   $0x1983,0x4(%esp)
0828cb28 +0x1b2:  mov    %eax,(%esp)
0828cb2b +0x1b5:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
0828cb30 +0x1ba:  mov    %eax,-0xc(%ebp)
0828cb33 +0x1bd:  cmpl   $0x0,-0xc(%ebp)
0828cb37 +0x1c1:  je     0828cbdd <+0x267>
0828cb3d +0x1c7:  lea    -0x40(%ebp),%eax
0828cb40 +0x1ca:  mov    %eax,(%esp)
0828cb43 +0x1cd:  call   0828d870 <_GLOBAL__I__ZN12CAchievementC2Ev+0x1d>  ; global constructors keyed to CAchievement::CAchievement()+0x1d
0828cb48 +0x1d2:  lea    -0x40(%ebp),%eax
0828cb4b +0x1d5:  add    $0x8,%eax
0828cb4e +0x1d8:  mov    %eax,0xc(%esp)
0828cb52 +0x1dc:  lea    -0x40(%ebp),%eax
0828cb55 +0x1df:  add    $0x6,%eax
0828cb58 +0x1e2:  mov    %eax,0x8(%esp)
0828cb5c +0x1e6:  lea    -0x40(%ebp),%eax
0828cb5f +0x1e9:  add    $0x4,%eax
0828cb62 +0x1ec:  mov    %eax,0x4(%esp)
0828cb66 +0x1f0:  mov    -0xc(%ebp),%eax
0828cb69 +0x1f3:  mov    %eax,(%esp)
0828cb6c +0x1f6:  call   08352fb4 <_ZNK5Quest28get_init_achievement_triggerERtS0_S0_>  ; Quest::get_init_achievement_trigger(unsigned short&, unsigned short&, unsigned short&) const
0828cb71 +0x1fb:  movzwl -0x38(%ebp),%eax
0828cb75 +0x1ff:  movzwl %ax,%ecx
0828cb78 +0x202:  movzwl -0x3a(%ebp),%eax
0828cb7c +0x206:  movzwl %ax,%edx
0828cb7f +0x209:  movzwl -0x3c(%ebp),%eax
0828cb83 +0x20d:  movzwl %ax,%eax
0828cb86 +0x210:  mov    %ecx,0x10(%esp)
0828cb8a +0x214:  mov    %edx,0xc(%esp)
0828cb8e +0x218:  mov    %eax,0x8(%esp)
0828cb92 +0x21c:  movl   $0x1983,0x4(%esp)
0828cb9a +0x224:  mov    0x8(%ebp),%eax
0828cb9d +0x227:  mov    %eax,(%esp)
0828cba0 +0x22a:  call   0828b896 <_ZN12CAchievement11_setTriggerEjttt>  ; CAchievement::_setTrigger(unsigned int, unsigned short, unsigned short, unsigned short)
0828cba5 +0x22f:  mov    -0xc(%ebp),%eax
0828cba8 +0x232:  mov    %eax,(%esp)
0828cbab +0x235:  call   08353082 <_ZNK5Quest16get_title_rewardEv>  ; Quest::get_title_reward() const
0828cbb0 +0x23a:  mov    0x8(%ebp),%edx
0828cbb3 +0x23d:  mov    0x8(%edx),%edx
0828cbb6 +0x240:  lea    -0x24(%ebp),%ecx
0828cbb9 +0x243:  mov    %ecx,0xc(%esp)
0828cbbd +0x247:  lea    -0x28(%ebp),%ecx
0828cbc0 +0x24a:  mov    %ecx,0x8(%esp)
0828cbc4 +0x24e:  mov    %eax,0x4(%esp)
0828cbc8 +0x252:  mov    %edx,(%esp)
0828cbcb +0x255:  call   08641e88 <_ZN10CTitleBook12putTitleOnlyEP5CUseriR24ENUM_TITLE_BOOK_CATEGORYRi>  ; CTitleBook::putTitleOnly(CUser*, int, ENUM_TITLE_BOOK_CATEGORY&, int&)
0828cbd0 +0x25a:  mov    0x8(%ebp),%eax
0828cbd3 +0x25d:  mov    %eax,(%esp)
0828cbd6 +0x260:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
0828cbdb +0x265:  jmp    0828cbde <+0x268>
0828cbdd +0x267:  nop
0828cbde +0x268:  add    $0x64,%esp
0828cbe1 +0x26b:  pop    %ebx
0828cbe2 +0x26c:  pop    %ebp
0828cbe3 +0x26d:  ret
```

## 反编译 C

```c
// CAchievement::adjust @ 0x828c976

/* CAchievement::adjust() */

void __thiscall CAchievement::adjust(CAchievement *this)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  stAchievement local_44 [4];
  ushort local_40;
  ushort local_3e;
  ushort local_3c [2];
  stAchievement local_38 [4];
  ushort local_34;
  ushort local_32;
  ushort local_30 [2];
  undefined4 local_2c;
  int local_28;
  uint local_24;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  Quest *local_14;
  Quest *local_10;
  
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_28 = 0;
  local_2c = 0;
  local_18 = 0;
  while( true ) {
    iVar3 = G_CDataManager();
    uVar4 = std::vector<stAdjust,std::allocator<stAdjust>>::size
                      ((vector<stAdjust,std::allocator<stAdjust>> *)(iVar3 + 0xa7c4));
    if (uVar4 <= local_18) break;
    iVar3 = G_CDataManager();
    puVar2 = (uint *)std::vector<stAdjust,std::allocator<stAdjust>>::operator[]
                               ((vector<stAdjust,std::allocator<stAdjust>> *)(iVar3 + 0xa7c4),
                                local_18);
    local_24 = *puVar2;
    iVar3 = G_CDataManager();
    iVar3 = std::vector<stAdjust,std::allocator<stAdjust>>::operator[]
                      ((vector<stAdjust,std::allocator<stAdjust>> *)(iVar3 + 0xa7c4),local_18);
    uVar4 = local_24;
    local_1c = *(uint *)(iVar3 + 8);
    iVar3 = CUser::getCurCharacQuestR(*(CUser **)(this + 8));
    cVar1 = WongWork::CQuestClear::isClearedQuest((CQuestClear *)(iVar3 + 4),uVar4);
    if (cVar1 != '\0') {
      iVar3 = G_CDataManager();
      local_14 = (Quest *)CDataManager::find_quest(iVar3);
      if ((local_14 != (Quest *)0x0) && (*(int *)(local_14 + 8) == 7)) {
        stAchievement::stAchievement(local_38);
        Quest::get_init_achievement_trigger(local_14,&local_34,&local_32,local_30);
        _setTrigger(this,local_1c,local_34,local_32,local_30[0]);
        iVar3 = Quest::get_title_reward(local_14);
        CTitleBook::putTitleOnly
                  (*(CUser **)(this + 8),iVar3,(ENUM_TITLE_BOOK_CATEGORY *)&local_2c,&local_28);
      }
    }
    local_18 = local_18 + 1;
  }
  iVar3 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)(this + 8));
  if (iVar3 == 0x46) {
    iVar3 = G_CDataManager();
    local_10 = (Quest *)CDataManager::find_quest(iVar3);
    if (local_10 == (Quest *)0x0) {
      return;
    }
    stAchievement::stAchievement(local_44);
    Quest::get_init_achievement_trigger(local_10,&local_40,&local_3e,local_3c);
    _setTrigger(this,0x1983,local_40,local_3e,local_3c[0]);
    iVar3 = Quest::get_title_reward(local_10);
    CTitleBook::putTitleOnly
              (*(CUser **)(this + 8),iVar3,(ENUM_TITLE_BOOK_CATEGORY *)&local_2c,&local_28);
  }
  charac_expand::CData::alter((CData *)this);
  return;
}
```

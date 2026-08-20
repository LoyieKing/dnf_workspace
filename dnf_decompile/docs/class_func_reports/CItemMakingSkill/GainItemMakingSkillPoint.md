# GainItemMakingSkillPoint

`_ZN16CItemMakingSkill24GainItemMakingSkillPointEPK14CStackableItemP5CUser`

`CItemMakingSkill::GainItemMakingSkillPoint(CStackableItem const*, CUser*)`

| 类 | 地址 |
|---|---|
| `CItemMakingSkill` | `0x085453e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085453e0  _ZN16CItemMakingSkill24GainItemMakingSkillPointEPK14CStackableItemP5CUser
#           CItemMakingSkill::GainItemMakingSkillPoint(CStackableItem const*, CUser*)
# range [0x085453e0, 0x0854571b]
085453e0 +0x000:  push   %ebp
085453e1 +0x001:  mov    %esp,%ebp
085453e3 +0x003:  push   %esi
085453e4 +0x004:  push   %ebx
085453e5 +0x005:  sub    $0x60,%esp
085453e8 +0x008:  mov    0xc(%ebp),%eax
085453eb +0x00b:  mov    %eax,(%esp)
085453ee +0x00e:  call   08545fcc <_GLOBAL__I__ZN16CItemMakingSkillC2Ev+0x1d>  ; global constructors keyed to CItemMakingSkill::CItemMakingSkill()+0x1d
085453f3 +0x013:  mov    %eax,-0x28(%ebp)
085453f6 +0x016:  mov    0xc(%ebp),%eax
085453f9 +0x019:  mov    %eax,(%esp)
085453fc +0x01c:  call   08545fda <_GLOBAL__I__ZN16CItemMakingSkillC2Ev+0x2b>  ; global constructors keyed to CItemMakingSkill::CItemMakingSkill()+0x2b
08545401 +0x021:  mov    %eax,-0x24(%ebp)
08545404 +0x024:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08545409 +0x029:  mov    %eax,(%esp)
0854540c +0x02c:  call   08365ece <_ZNK12CDataManager18GetItemMakingSkillEv>  ; CDataManager::GetItemMakingSkill() const
08545411 +0x031:  mov    %eax,-0x20(%ebp)
08545414 +0x034:  mov    0x10(%ebp),%eax
08545417 +0x037:  mov    %eax,0x8(%esp)
0854541b +0x03b:  mov    0xc(%ebp),%eax
0854541e +0x03e:  mov    %eax,0x4(%esp)
08545422 +0x042:  mov    0x8(%ebp),%eax
08545425 +0x045:  mov    %eax,(%esp)
08545428 +0x048:  call   08545cf4 <_ZN16CItemMakingSkill23GetItemMakingSkillLevelEPK14CStackableItemP5CUser>  ; CItemMakingSkill::GetItemMakingSkillLevel(CStackableItem const*, CUser*)
0854542d +0x04d:  mov    %eax,-0x1c(%ebp)
08545430 +0x050:  mov    0x8(%ebp),%eax
08545433 +0x053:  mov    0x1c(%eax),%eax
08545436 +0x056:  mov    %eax,(%esp)
08545439 +0x059:  call   080cba46 <_GLOBAL__I__ZN10BingoEventC2Ev+0x893>  ; global constructors keyed to BingoEvent::BingoEvent()+0x893
0854543e +0x05e:  mov    -0x20(%ebp),%edx
08545441 +0x061:  mov    0x28(%edx),%edx
08545444 +0x064:  mov    %edx,%ecx
08545446 +0x066:  mov    $0x0,%edx
0854544b +0x06b:  div    %ecx
0854544d +0x06d:  mov    -0x20(%ebp),%eax
08545450 +0x070:  mov    0x24(%eax),%eax
08545453 +0x073:  lea    (%edx,%eax,1),%eax
08545456 +0x076:  mov    %eax,-0x18(%ebp)
08545459 +0x079:  movl   $0x0,-0x14(%ebp)
08545460 +0x080:  mov    -0x24(%ebp),%eax
08545463 +0x083:  mov    -0x1c(%ebp),%edx
08545466 +0x086:  sub    %eax,%edx
08545468 +0x088:  mov    -0x20(%ebp),%eax
0854546b +0x08b:  mov    0x2c(%eax),%eax
0854546e +0x08e:  cmp    %eax,%edx
08545470 +0x090:  jl     08545480 <+0xa0>
08545472 +0x092:  movl   $0xd,-0x14(%ebp)
08545479 +0x099:  movl   $0x0,-0x18(%ebp)
08545480 +0x0a0:  mov    -0x20(%ebp),%eax
08545483 +0x0a3:  lea    0x18(%eax),%edx
08545486 +0x0a6:  lea    -0x34(%ebp),%eax
08545489 +0x0a9:  mov    %edx,0x4(%esp)
0854548d +0x0ad:  mov    %eax,(%esp)
08545490 +0x0b0:  call   08546040 <_GLOBAL__I__ZN16CItemMakingSkillC2Ev+0x91>  ; global constructors keyed to CItemMakingSkill::CItemMakingSkill()+0x91
08545495 +0x0b5:  sub    $0x4,%esp
08545498 +0x0b8:  mov    -0x20(%ebp),%eax
0854549b +0x0bb:  lea    0x18(%eax),%edx
0854549e +0x0be:  lea    -0x30(%ebp),%eax
085454a1 +0x0c1:  mov    %edx,0x4(%esp)
085454a5 +0x0c5:  mov    %eax,(%esp)
085454a8 +0x0c8:  call   08545ffe <_GLOBAL__I__ZN16CItemMakingSkillC2Ev+0x4f>  ; global constructors keyed to CItemMakingSkill::CItemMakingSkill()+0x4f
085454ad +0x0cd:  sub    $0x4,%esp
085454b0 +0x0d0:  lea    -0x34(%ebp),%eax
085454b3 +0x0d3:  mov    %eax,0x4(%esp)
085454b7 +0x0d7:  lea    -0x30(%ebp),%eax
085454ba +0x0da:  mov    %eax,(%esp)
085454bd +0x0dd:  call   08546081 <_GLOBAL__I__ZN16CItemMakingSkillC2Ev+0xd2>  ; global constructors keyed to CItemMakingSkill::CItemMakingSkill()+0xd2
085454c2 +0x0e2:  test   %al,%al
085454c4 +0x0e4:  jne    08545711 <+0x331>
085454ca +0x0ea:  mov    0x10(%ebp),%eax
085454cd +0x0ed:  mov    %eax,(%esp)
085454d0 +0x0f0:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085454d5 +0x0f5:  cmp    $0x46,%eax
085454d8 +0x0f8:  sete   %al
085454db +0x0fb:  test   %al,%al
085454dd +0x0fd:  je     08545532 <+0x152>
085454df +0x0ff:  mov    -0x28(%ebp),%edx
085454e2 +0x102:  mov    0x8(%ebp),%eax
085454e5 +0x105:  movzwl 0x6(%eax,%edx,2),%eax
085454ea +0x10a:  movswl %ax,%ebx
085454ed +0x10d:  mov    -0x20(%ebp),%eax
085454f0 +0x110:  lea    0x18(%eax),%edx
085454f3 +0x113:  lea    -0x2c(%ebp),%eax
085454f6 +0x116:  mov    %edx,0x4(%esp)
085454fa +0x11a:  mov    %eax,(%esp)
085454fd +0x11d:  call   08545ffe <_GLOBAL__I__ZN16CItemMakingSkillC2Ev+0x4f>  ; global constructors keyed to CItemMakingSkill::CItemMakingSkill()+0x4f
08545502 +0x122:  sub    $0x4,%esp
08545505 +0x125:  lea    -0x2c(%ebp),%eax
08545508 +0x128:  mov    %eax,(%esp)
0854550b +0x12b:  call   085460c6 <_GLOBAL__I__ZN16CItemMakingSkillC2Ev+0x117>  ; global constructors keyed to CItemMakingSkill::CItemMakingSkill()+0x117
08545510 +0x130:  mov    (%eax),%eax
08545512 +0x132:  cmp    %eax,%ebx
08545514 +0x134:  setge  %al
08545517 +0x137:  test   %al,%al
08545519 +0x139:  je     085455c7 <+0x1e7>
0854551f +0x13f:  movl   $0x16,-0x14(%ebp)
08545526 +0x146:  movl   $0x0,-0x18(%ebp)
0854552d +0x14d:  jmp    085455c7 <+0x1e7>
08545532 +0x152:  movl   $0x0,-0xc(%ebp)
08545539 +0x159:  jmp    085455ab <+0x1cb>
0854553b +0x15b:  mov    0x10(%ebp),%eax
0854553e +0x15e:  mov    %eax,(%esp)
08545541 +0x161:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08545546 +0x166:  mov    %eax,%ebx
08545548 +0x168:  mov    -0x20(%ebp),%eax
0854554b +0x16b:  lea    0x18(%eax),%edx
0854554e +0x16e:  mov    -0xc(%ebp),%eax
08545551 +0x171:  mov    %eax,0x4(%esp)
08545555 +0x175:  mov    %edx,(%esp)
08545558 +0x178:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
0854555d +0x17d:  mov    0x4(%eax),%eax
08545560 +0x180:  cmp    %eax,%ebx
08545562 +0x182:  setl   %al
08545565 +0x185:  test   %al,%al
08545567 +0x187:  je     085455a7 <+0x1c7>
08545569 +0x189:  mov    -0x28(%ebp),%edx
0854556c +0x18c:  mov    0x8(%ebp),%eax
0854556f +0x18f:  movzwl 0x6(%eax,%edx,2),%eax
08545574 +0x194:  movswl %ax,%ebx
08545577 +0x197:  mov    -0x20(%ebp),%eax
0854557a +0x19a:  lea    0x18(%eax),%edx
0854557d +0x19d:  mov    -0xc(%ebp),%eax
08545580 +0x1a0:  mov    %eax,0x4(%esp)
08545584 +0x1a4:  mov    %edx,(%esp)
08545587 +0x1a7:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
0854558c +0x1ac:  mov    (%eax),%eax
0854558e +0x1ae:  cmp    %eax,%ebx
08545590 +0x1b0:  setge  %al
08545593 +0x1b3:  test   %al,%al
08545595 +0x1b5:  je     085455a7 <+0x1c7>
08545597 +0x1b7:  movl   $0x16,-0x14(%ebp)
0854559e +0x1be:  movl   $0x0,-0x18(%ebp)
085455a5 +0x1c5:  jmp    085455c7 <+0x1e7>
085455a7 +0x1c7:  addl   $0x1,-0xc(%ebp)
085455ab +0x1cb:  mov    -0x20(%ebp),%eax
085455ae +0x1ce:  add    $0x18,%eax
085455b1 +0x1d1:  mov    %eax,(%esp)
085455b4 +0x1d4:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
085455b9 +0x1d9:  cmp    -0xc(%ebp),%eax
085455bc +0x1dc:  seta   %al
085455bf +0x1df:  test   %al,%al
085455c1 +0x1e1:  jne    0854553b <+0x15b>
085455c7 +0x1e7:  mov    -0x28(%ebp),%edx
085455ca +0x1ea:  mov    0x8(%ebp),%eax
085455cd +0x1ed:  movzwl 0x6(%eax,%edx,2),%eax
085455d2 +0x1f2:  cmp    $0x3e7,%ax
085455d6 +0x1f6:  jle    085455e6 <+0x206>
085455d8 +0x1f8:  movl   $0x5f,-0x14(%ebp)
085455df +0x1ff:  movl   $0x0,-0x18(%ebp)
085455e6 +0x206:  mov    -0x28(%ebp),%edx
085455e9 +0x209:  mov    0x8(%ebp),%eax
085455ec +0x20c:  movzwl 0x6(%eax,%edx,2),%eax
085455f1 +0x211:  mov    %ax,-0xe(%ebp)
085455f5 +0x215:  mov    0x10(%ebp),%eax
085455f8 +0x218:  mov    %eax,0xc(%esp)
085455fc +0x21c:  mov    -0x18(%ebp),%eax
085455ff +0x21f:  mov    %eax,0x8(%esp)
08545603 +0x223:  mov    -0x28(%ebp),%eax
08545606 +0x226:  mov    %eax,0x4(%esp)
0854560a +0x22a:  mov    0x8(%ebp),%eax
0854560d +0x22d:  mov    %eax,(%esp)
08545610 +0x230:  call   0854571c <_ZN16CItemMakingSkill12UpSkillLevelE21ENUM_ITEM_MAKING_TYPEiP5CUser>  ; CItemMakingSkill::UpSkillLevel(ENUM_ITEM_MAKING_TYPE, int, CUser*)
08545615 +0x235:  mov    -0x28(%ebp),%edx
08545618 +0x238:  mov    0x8(%ebp),%eax
0854561b +0x23b:  movzwl 0x6(%eax,%edx,2),%eax
08545620 +0x240:  movswl %ax,%edx
08545623 +0x243:  movswl -0xe(%ebp),%eax
08545627 +0x247:  mov    %edx,%ecx
08545629 +0x249:  sub    %eax,%ecx
0854562b +0x24b:  mov    %ecx,%eax
0854562d +0x24d:  mov    %eax,-0x18(%ebp)
08545630 +0x250:  lea    -0x40(%ebp),%eax
08545633 +0x253:  mov    %eax,(%esp)
08545636 +0x256:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0854563b +0x25b:  movl   $0x15f,0x8(%esp)
08545643 +0x263:  movl   $0x0,0x4(%esp)
0854564b +0x26b:  lea    -0x40(%ebp),%eax
0854564e +0x26e:  mov    %eax,(%esp)
08545651 +0x271:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08545656 +0x276:  mov    -0x14(%ebp),%eax
08545659 +0x279:  mov    %eax,0x4(%esp)
0854565d +0x27d:  lea    -0x40(%ebp),%eax
08545660 +0x280:  mov    %eax,(%esp)
08545663 +0x283:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08545668 +0x288:  mov    -0x28(%ebp),%eax
0854566b +0x28b:  mov    %eax,0x4(%esp)
0854566f +0x28f:  lea    -0x40(%ebp),%eax
08545672 +0x292:  mov    %eax,(%esp)
08545675 +0x295:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0854567a +0x29a:  mov    -0x18(%ebp),%eax
0854567d +0x29d:  mov    %eax,0x4(%esp)
08545681 +0x2a1:  lea    -0x40(%ebp),%eax
08545684 +0x2a4:  mov    %eax,(%esp)
08545687 +0x2a7:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0854568c +0x2ac:  movl   $0x1,0x4(%esp)
08545694 +0x2b4:  lea    -0x40(%ebp),%eax
08545697 +0x2b7:  mov    %eax,(%esp)
0854569a +0x2ba:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0854569f +0x2bf:  lea    -0x40(%ebp),%eax
085456a2 +0x2c2:  mov    %eax,0x4(%esp)
085456a6 +0x2c6:  mov    0x10(%ebp),%eax
085456a9 +0x2c9:  mov    %eax,(%esp)
085456ac +0x2cc:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085456b1 +0x2d1:  mov    -0x28(%ebp),%edx
085456b4 +0x2d4:  mov    0x8(%ebp),%eax
085456b7 +0x2d7:  movzwl 0x6(%eax,%edx,2),%eax
085456bc +0x2dc:  cwtl
085456bd +0x2dd:  mov    0x10(%ebp),%edx
085456c0 +0x2e0:  add    $0x79700,%edx
085456c6 +0x2e6:  mov    %eax,0x10(%esp)
085456ca +0x2ea:  mov    -0x18(%ebp),%eax
085456cd +0x2ed:  mov    %eax,0xc(%esp)
085456d1 +0x2f1:  mov    -0x14(%ebp),%eax
085456d4 +0x2f4:  mov    %eax,0x8(%esp)
085456d8 +0x2f8:  mov    -0x28(%ebp),%eax
085456db +0x2fb:  mov    %eax,0x4(%esp)
085456df +0x2ff:  mov    %edx,(%esp)
085456e2 +0x302:  call   08686a88 <_ZN15cUserHistoryLog18ItemMakingSkillAddE21ENUM_ITEM_MAKING_TYPEiis>  ; cUserHistoryLog::ItemMakingSkillAdd(ENUM_ITEM_MAKING_TYPE, int, int, short)
085456e7 +0x307:  jmp    08545704 <+0x324>
085456e9 +0x309:  mov    %edx,%ebx
085456eb +0x30b:  mov    %eax,%esi
085456ed +0x30d:  lea    -0x40(%ebp),%eax
085456f0 +0x310:  mov    %eax,(%esp)
085456f3 +0x313:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085456f8 +0x318:  mov    %esi,%eax
085456fa +0x31a:  mov    %ebx,%edx
085456fc +0x31c:  mov    %eax,(%esp)
085456ff +0x31f:  call   08ae3750 <_Unwind_Resume>
08545704 +0x324:  lea    -0x40(%ebp),%eax
08545707 +0x327:  mov    %eax,(%esp)
0854570a +0x32a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0854570f +0x32f:  jmp    08545712 <+0x332>
08545711 +0x331:  nop
08545712 +0x332:  lea    -0x8(%ebp),%esp
08545715 +0x335:  add    $0x0,%esp
08545718 +0x338:  pop    %ebx
08545719 +0x339:  pop    %esi
0854571a +0x33a:  pop    %ebp
0854571b +0x33b:  ret
```

## 反编译 C

```c
// CItemMakingSkill::GainItemMakingSkillPoint @ 0x85453e0

/* CItemMakingSkill::GainItemMakingSkillPoint(CStackableItem const*, CUser*) */

void __thiscall
CItemMakingSkill::GainItemMakingSkillPoint
          (CItemMakingSkill *this,CStackableItem *param_1,CUser *param_2)

{
  short sVar1;
  bool bVar2;
  CDataManager *this_00;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  PacketGuard local_44 [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_38 [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_34 [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_30 [4];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  short local_12;
  uint local_10;
  
  local_2c = CItem::GetUpSkillType((CItem *)param_1);
  local_28 = CItem::GetNeedLevel((CItem *)param_1);
  this_00 = (CDataManager *)G_CDataManager();
  local_24 = CDataManager::GetItemMakingSkill(this_00);
  local_20 = GetItemMakingSkillLevel(this,param_1,param_2);
  uVar3 = CMTRand::randInt(*(CMTRand **)(this + 0x1c));
  local_1c = uVar3 % *(uint *)(local_24 + 0x28) + *(int *)(local_24 + 0x24);
  local_18 = 0;
  if (*(int *)(local_24 + 0x2c) <= local_20 - local_28) {
    local_18 = 0xd;
    local_1c = 0;
  }
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::rend(local_38);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::rbegin(local_34);
  bVar2 = std::operator==((reverse_iterator *)local_34,(reverse_iterator *)local_38);
  if (!bVar2) {
    iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
    if (iVar4 == 0x46) {
      sVar1 = *(short *)(this + local_2c * 2 + 6);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::rbegin(local_30);
      piVar5 = (int *)std::
                      reverse_iterator<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
                      ::operator->((reverse_iterator<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
                                    *)local_30);
      if (*piVar5 <= (int)sVar1) {
        local_18 = 0x16;
        local_1c = 0;
      }
    }
    else {
      local_10 = 0;
      while( true ) {
        uVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                          ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                           (local_24 + 0x18));
        if (uVar3 <= local_10) break;
        iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
        iVar6 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                          ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                           (local_24 + 0x18),local_10);
        if (iVar4 < *(int *)(iVar6 + 4)) {
          sVar1 = *(short *)(this + local_2c * 2 + 6);
          piVar5 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                          operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                      *)(local_24 + 0x18),local_10);
          if (*piVar5 <= (int)sVar1) {
            local_18 = 0x16;
            local_1c = 0;
            break;
          }
        }
        local_10 = local_10 + 1;
      }
    }
    if (999 < *(short *)(this + local_2c * 2 + 6)) {
      local_18 = 0x5f;
      local_1c = 0;
    }
    local_12 = *(short *)(this + local_2c * 2 + 6);
    UpSkillLevel(this,local_2c,local_1c,param_2);
    local_1c = (int)*(short *)(this + local_2c * 2 + 6) - (int)local_12;
    PacketGuard::PacketGuard(local_44);
                    /* try { // try from 08545651 to 085456e6 has its CatchHandler @ 085456e9 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_44,0,0x15f);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_44,local_18);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_44,local_2c);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_44,local_1c);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_44,true);
    CUser::Send(param_2,local_44);
    cUserHistoryLog::ItemMakingSkillAdd
              ((cUserHistoryLog *)(param_2 + 0x79700),local_2c,local_18,local_1c,
               (int)*(short *)(this + local_2c * 2 + 6));
    PacketGuard::~PacketGuard(local_44);
  }
  return;
}
```

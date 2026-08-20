# UpSkillLevel

`_ZN16CItemMakingSkill12UpSkillLevelE21ENUM_ITEM_MAKING_TYPEiP5CUser`

`CItemMakingSkill::UpSkillLevel(ENUM_ITEM_MAKING_TYPE, int, CUser*)`

| 类 | 地址 |
|---|---|
| `CItemMakingSkill` | `0x0854571c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854571c  _ZN16CItemMakingSkill12UpSkillLevelE21ENUM_ITEM_MAKING_TYPEiP5CUser
#           CItemMakingSkill::UpSkillLevel(ENUM_ITEM_MAKING_TYPE, int, CUser*)
# range [0x0854571c, 0x08545a61]
0854571c +0x000:  push   %ebp
0854571d +0x001:  mov    %esp,%ebp
0854571f +0x003:  push   %esi
08545720 +0x004:  push   %ebx
08545721 +0x005:  sub    $0x60,%esp
08545724 +0x008:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08545729 +0x00d:  mov    %eax,(%esp)
0854572c +0x010:  call   08365ece <_ZNK12CDataManager18GetItemMakingSkillEv>  ; CDataManager::GetItemMakingSkill() const
08545731 +0x015:  mov    %eax,-0x10(%ebp)
08545734 +0x018:  mov    0xc(%ebp),%eax
08545737 +0x01b:  cmp    $0xa,%eax
0854573a +0x01e:  jg     08545a51 <+0x335>
08545740 +0x024:  mov    -0x10(%ebp),%eax
08545743 +0x027:  lea    0x18(%eax),%edx
08545746 +0x02a:  lea    -0x54(%ebp),%eax
08545749 +0x02d:  mov    %edx,0x4(%esp)
0854574d +0x031:  mov    %eax,(%esp)
08545750 +0x034:  call   08546040 <_GLOBAL__I__ZN16CItemMakingSkillC2Ev+0x91>  ; global constructors keyed to CItemMakingSkill::CItemMakingSkill()+0x91
08545755 +0x039:  sub    $0x4,%esp
08545758 +0x03c:  mov    -0x10(%ebp),%eax
0854575b +0x03f:  lea    0x18(%eax),%edx
0854575e +0x042:  lea    -0x50(%ebp),%eax
08545761 +0x045:  mov    %edx,0x4(%esp)
08545765 +0x049:  mov    %eax,(%esp)
08545768 +0x04c:  call   08545ffe <_GLOBAL__I__ZN16CItemMakingSkillC2Ev+0x4f>  ; global constructors keyed to CItemMakingSkill::CItemMakingSkill()+0x4f
0854576d +0x051:  sub    $0x4,%esp
08545770 +0x054:  lea    -0x54(%ebp),%eax
08545773 +0x057:  mov    %eax,0x4(%esp)
08545777 +0x05b:  lea    -0x50(%ebp),%eax
0854577a +0x05e:  mov    %eax,(%esp)
0854577d +0x061:  call   08546081 <_GLOBAL__I__ZN16CItemMakingSkillC2Ev+0xd2>  ; global constructors keyed to CItemMakingSkill::CItemMakingSkill()+0xd2
08545782 +0x066:  test   %al,%al
08545784 +0x068:  jne    08545a54 <+0x338>
0854578a +0x06e:  cmpl   $0x0,0x10(%ebp)
0854578e +0x072:  jle    085457c5 <+0xa9>
08545790 +0x074:  mov    -0x10(%ebp),%eax
08545793 +0x077:  mov    0x28(%eax),%eax
08545796 +0x07a:  cmp    0x10(%ebp),%eax
08545799 +0x07d:  jl     085457c5 <+0xa9>
0854579b +0x07f:  mov    -0x10(%ebp),%eax
0854579e +0x082:  lea    0x18(%eax),%edx
085457a1 +0x085:  lea    -0x4c(%ebp),%eax
085457a4 +0x088:  mov    %edx,0x4(%esp)
085457a8 +0x08c:  mov    %eax,(%esp)
085457ab +0x08f:  call   08545ffe <_GLOBAL__I__ZN16CItemMakingSkillC2Ev+0x4f>  ; global constructors keyed to CItemMakingSkill::CItemMakingSkill()+0x4f
085457b0 +0x094:  sub    $0x4,%esp
085457b3 +0x097:  lea    -0x4c(%ebp),%eax
085457b6 +0x09a:  mov    %eax,(%esp)
085457b9 +0x09d:  call   085460c6 <_GLOBAL__I__ZN16CItemMakingSkillC2Ev+0x117>  ; global constructors keyed to CItemMakingSkill::CItemMakingSkill()+0x117
085457be +0x0a2:  mov    (%eax),%eax
085457c0 +0x0a4:  cmp    0x10(%ebp),%eax
085457c3 +0x0a7:  jge    085457cc <+0xb0>
085457c5 +0x0a9:  mov    $0x1,%eax
085457ca +0x0ae:  jmp    085457d1 <+0xb5>
085457cc +0x0b0:  mov    $0x0,%eax
085457d1 +0x0b5:  test   %al,%al
085457d3 +0x0b7:  jne    08545a57 <+0x33b>
085457d9 +0x0bd:  mov    0xc(%ebp),%edx
085457dc +0x0c0:  mov    0xc(%ebp),%ecx
085457df +0x0c3:  mov    0x8(%ebp),%eax
085457e2 +0x0c6:  movzwl 0x6(%eax,%ecx,2),%eax
085457e7 +0x0cb:  mov    %eax,%ecx
085457e9 +0x0cd:  mov    0x10(%ebp),%eax
085457ec +0x0d0:  lea    (%ecx,%eax,1),%eax
085457ef +0x0d3:  mov    %eax,%ecx
085457f1 +0x0d5:  mov    0x8(%ebp),%eax
085457f4 +0x0d8:  mov    %cx,0x6(%eax,%edx,2)
085457f9 +0x0dd:  mov    0x14(%ebp),%eax
085457fc +0x0e0:  mov    %eax,(%esp)
085457ff +0x0e3:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08545804 +0x0e8:  cmp    $0x46,%eax
08545807 +0x0eb:  sete   %al
0854580a +0x0ee:  test   %al,%al
0854580c +0x0f0:  je     085458d8 <+0x1bc>
08545812 +0x0f6:  mov    0xc(%ebp),%edx
08545815 +0x0f9:  mov    0x8(%ebp),%eax
08545818 +0x0fc:  movzwl 0x6(%eax,%edx,2),%eax
0854581d +0x101:  movswl %ax,%ebx
08545820 +0x104:  mov    -0x10(%ebp),%eax
08545823 +0x107:  lea    0x18(%eax),%edx
08545826 +0x10a:  lea    -0x48(%ebp),%eax
08545829 +0x10d:  mov    %edx,0x4(%esp)
0854582d +0x111:  mov    %eax,(%esp)
08545830 +0x114:  call   08545ffe <_GLOBAL__I__ZN16CItemMakingSkillC2Ev+0x4f>  ; global constructors keyed to CItemMakingSkill::CItemMakingSkill()+0x4f
08545835 +0x119:  sub    $0x4,%esp
08545838 +0x11c:  lea    -0x48(%ebp),%eax
0854583b +0x11f:  mov    %eax,(%esp)
0854583e +0x122:  call   085460c6 <_GLOBAL__I__ZN16CItemMakingSkillC2Ev+0x117>  ; global constructors keyed to CItemMakingSkill::CItemMakingSkill()+0x117
08545843 +0x127:  mov    (%eax),%eax
08545845 +0x129:  cmp    %eax,%ebx
08545847 +0x12b:  setg   %al
0854584a +0x12e:  test   %al,%al
0854584c +0x130:  je     085459d7 <+0x2bb>
08545852 +0x136:  mov    0xc(%ebp),%edx
08545855 +0x139:  mov    0x8(%ebp),%eax
08545858 +0x13c:  movzwl 0x6(%eax,%edx,2),%eax
0854585d +0x141:  movswl %ax,%esi
08545860 +0x144:  mov    0xc(%ebp),%ebx
08545863 +0x147:  movl   $0x0,0xc(%esp)
0854586b +0x14f:  movl   $0xb5,0x8(%esp)
08545873 +0x157:  movl   $&_ZZN16CItemMakingSkill12UpSkillLevelE21ENUM_ITEM_MAKING_TYPEiP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
0854587b +0x15f:  lea    -0x44(%ebp),%eax
0854587e +0x162:  mov    %eax,(%esp)
08545881 +0x165:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08545886 +0x16a:  mov    %esi,0xc(%esp)
0854588a +0x16e:  mov    %ebx,0x8(%esp)
0854588e +0x172:  movl   $"CHARACTER_LEVEL_CURRENT_MAX :item_making_skill_[%d] = %d",0x4(%esp)
08545896 +0x17a:  lea    -0x44(%ebp),%eax
08545899 +0x17d:  mov    %eax,(%esp)
0854589c +0x180:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085458a1 +0x185:  mov    0xc(%ebp),%ebx
085458a4 +0x188:  mov    -0x10(%ebp),%eax
085458a7 +0x18b:  lea    0x18(%eax),%edx
085458aa +0x18e:  lea    -0x34(%ebp),%eax
085458ad +0x191:  mov    %edx,0x4(%esp)
085458b1 +0x195:  mov    %eax,(%esp)
085458b4 +0x198:  call   08545ffe <_GLOBAL__I__ZN16CItemMakingSkillC2Ev+0x4f>  ; global constructors keyed to CItemMakingSkill::CItemMakingSkill()+0x4f
085458b9 +0x19d:  sub    $0x4,%esp
085458bc +0x1a0:  lea    -0x34(%ebp),%eax
085458bf +0x1a3:  mov    %eax,(%esp)
085458c2 +0x1a6:  call   085460c6 <_GLOBAL__I__ZN16CItemMakingSkillC2Ev+0x117>  ; global constructors keyed to CItemMakingSkill::CItemMakingSkill()+0x117
085458c7 +0x1ab:  mov    (%eax),%eax
085458c9 +0x1ad:  mov    %eax,%edx
085458cb +0x1af:  mov    0x8(%ebp),%eax
085458ce +0x1b2:  mov    %dx,0x6(%eax,%ebx,2)
085458d3 +0x1b7:  jmp    085459d7 <+0x2bb>
085458d8 +0x1bc:  movl   $0x0,-0xc(%ebp)
085458df +0x1c3:  jmp    085459bb <+0x29f>
085458e4 +0x1c8:  mov    0x14(%ebp),%eax
085458e7 +0x1cb:  mov    %eax,(%esp)
085458ea +0x1ce:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085458ef +0x1d3:  mov    %eax,%ebx
085458f1 +0x1d5:  mov    -0x10(%ebp),%eax
085458f4 +0x1d8:  lea    0x18(%eax),%edx
085458f7 +0x1db:  mov    -0xc(%ebp),%eax
085458fa +0x1de:  mov    %eax,0x4(%esp)
085458fe +0x1e2:  mov    %edx,(%esp)
08545901 +0x1e5:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
08545906 +0x1ea:  mov    0x4(%eax),%eax
08545909 +0x1ed:  cmp    %eax,%ebx
0854590b +0x1ef:  setl   %al
0854590e +0x1f2:  test   %al,%al
08545910 +0x1f4:  je     085459b7 <+0x29b>
08545916 +0x1fa:  mov    0xc(%ebp),%edx
08545919 +0x1fd:  mov    0x8(%ebp),%eax
0854591c +0x200:  movzwl 0x6(%eax,%edx,2),%eax
08545921 +0x205:  movswl %ax,%ebx
08545924 +0x208:  mov    -0x10(%ebp),%eax
08545927 +0x20b:  lea    0x18(%eax),%edx
0854592a +0x20e:  mov    -0xc(%ebp),%eax
0854592d +0x211:  mov    %eax,0x4(%esp)
08545931 +0x215:  mov    %edx,(%esp)
08545934 +0x218:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
08545939 +0x21d:  mov    (%eax),%eax
0854593b +0x21f:  cmp    %eax,%ebx
0854593d +0x221:  setg   %al
08545940 +0x224:  test   %al,%al
08545942 +0x226:  je     085459b7 <+0x29b>
08545944 +0x228:  mov    0xc(%ebp),%edx
08545947 +0x22b:  mov    0x8(%ebp),%eax
0854594a +0x22e:  movzwl 0x6(%eax,%edx,2),%eax
0854594f +0x233:  movswl %ax,%esi
08545952 +0x236:  mov    0xc(%ebp),%ebx
08545955 +0x239:  movl   $0x0,0xc(%esp)
0854595d +0x241:  movl   $0xc5,0x8(%esp)
08545965 +0x249:  movl   $&_ZZN16CItemMakingSkill12UpSkillLevelE21ENUM_ITEM_MAKING_TYPEiP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
0854596d +0x251:  lea    -0x30(%ebp),%eax
08545970 +0x254:  mov    %eax,(%esp)
08545973 +0x257:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08545978 +0x25c:  mov    %esi,0xc(%esp)
0854597c +0x260:  mov    %ebx,0x8(%esp)
08545980 +0x264:  movl   $"NO CHARACTER_LEVEL_CURRENT_MAX : item_making_skill_[%d] = %d",0x4(%esp)
08545988 +0x26c:  lea    -0x30(%ebp),%eax
0854598b +0x26f:  mov    %eax,(%esp)
0854598e +0x272:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08545993 +0x277:  mov    0xc(%ebp),%ebx
08545996 +0x27a:  mov    -0x10(%ebp),%eax
08545999 +0x27d:  lea    0x18(%eax),%edx
0854599c +0x280:  mov    -0xc(%ebp),%eax
0854599f +0x283:  mov    %eax,0x4(%esp)
085459a3 +0x287:  mov    %edx,(%esp)
085459a6 +0x28a:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
085459ab +0x28f:  mov    (%eax),%eax
085459ad +0x291:  mov    %eax,%edx
085459af +0x293:  mov    0x8(%ebp),%eax
085459b2 +0x296:  mov    %dx,0x6(%eax,%ebx,2)
085459b7 +0x29b:  addl   $0x1,-0xc(%ebp)
085459bb +0x29f:  mov    -0x10(%ebp),%eax
085459be +0x2a2:  add    $0x18,%eax
085459c1 +0x2a5:  mov    %eax,(%esp)
085459c4 +0x2a8:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
085459c9 +0x2ad:  cmp    -0xc(%ebp),%eax
085459cc +0x2b0:  seta   %al
085459cf +0x2b3:  test   %al,%al
085459d1 +0x2b5:  jne    085458e4 <+0x1c8>
085459d7 +0x2bb:  mov    0xc(%ebp),%edx
085459da +0x2be:  mov    0x8(%ebp),%eax
085459dd +0x2c1:  movzwl 0x6(%eax,%edx,2),%eax
085459e2 +0x2c6:  cmp    $0x3e8,%ax
085459e6 +0x2ca:  jle    08545a44 <+0x328>
085459e8 +0x2cc:  mov    0xc(%ebp),%edx
085459eb +0x2cf:  mov    0x8(%ebp),%eax
085459ee +0x2d2:  movzwl 0x6(%eax,%edx,2),%eax
085459f3 +0x2d7:  movswl %ax,%esi
085459f6 +0x2da:  mov    0xc(%ebp),%ebx
085459f9 +0x2dd:  movl   $0x0,0xc(%esp)
08545a01 +0x2e5:  movl   $0xce,0x8(%esp)
08545a09 +0x2ed:  movl   $&_ZZN16CItemMakingSkill12UpSkillLevelE21ENUM_ITEM_MAKING_TYPEiP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
08545a11 +0x2f5:  lea    -0x20(%ebp),%eax
08545a14 +0x2f8:  mov    %eax,(%esp)
08545a17 +0x2fb:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08545a1c +0x300:  mov    %esi,0xc(%esp)
08545a20 +0x304:  mov    %ebx,0x8(%esp)
08545a24 +0x308:  movl   $"ITEM_MAKING_SKILL_LEVEL_LIMIT : item_making_skill_[%d] = %d",0x4(%esp)
08545a2c +0x310:  lea    -0x20(%ebp),%eax
08545a2f +0x313:  mov    %eax,(%esp)
08545a32 +0x316:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08545a37 +0x31b:  mov    0xc(%ebp),%edx
08545a3a +0x31e:  mov    0x8(%ebp),%eax
08545a3d +0x321:  movw   $0x3e8,0x6(%eax,%edx,2)
08545a44 +0x328:  mov    0x8(%ebp),%eax
08545a47 +0x32b:  mov    %eax,(%esp)
08545a4a +0x32e:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
08545a4f +0x333:  jmp    08545a58 <+0x33c>
08545a51 +0x335:  nop
08545a52 +0x336:  jmp    08545a58 <+0x33c>
08545a54 +0x338:  nop
08545a55 +0x339:  jmp    08545a58 <+0x33c>
08545a57 +0x33b:  nop
08545a58 +0x33c:  lea    -0x8(%ebp),%esp
08545a5b +0x33f:  add    $0x0,%esp
08545a5e +0x342:  pop    %ebx
08545a5f +0x343:  pop    %esi
08545a60 +0x344:  pop    %ebp
08545a61 +0x345:  ret
```

## 反编译 C

```c
// CItemMakingSkill::UpSkillLevel @ 0x854571c

/* CItemMakingSkill::UpSkillLevel(ENUM_ITEM_MAKING_TYPE, int, CUser*) */

void __thiscall
CItemMakingSkill::UpSkillLevel
          (CItemMakingSkill *this,int param_2,int param_3,CUserCharacInfo *param_4)

{
  short sVar1;
  bool bVar2;
  CDataManager *this_00;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_58 [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_54 [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_50 [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_4c [4];
  cMyTrace local_48 [16];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_38 [4];
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  int local_14;
  uint local_10;
  
  this_00 = (CDataManager *)G_CDataManager();
  local_14 = CDataManager::GetItemMakingSkill(this_00);
  if (10 < param_2) {
    return;
  }
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::rend(local_58);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::rbegin(local_54);
  bVar2 = std::operator==((reverse_iterator *)local_54,(reverse_iterator *)local_58);
  if (bVar2) {
    return;
  }
  if ((0 < param_3) && (param_3 <= *(int *)(local_14 + 0x28))) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::rbegin(local_50);
    piVar3 = (int *)std::
                    reverse_iterator<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
                    ::operator->((reverse_iterator<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
                                  *)local_50);
    if (param_3 <= *piVar3) {
      bVar2 = false;
      goto LAB_085457d1;
    }
  }
  bVar2 = true;
LAB_085457d1:
  if (!bVar2) {
    *(short *)(this + param_2 * 2 + 6) = *(short *)(this + param_2 * 2 + 6) + (short)param_3;
    iVar4 = CUserCharacInfo::get_charac_level(param_4);
    if (iVar4 == 0x46) {
      sVar1 = *(short *)(this + param_2 * 2 + 6);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::rbegin(local_4c);
      piVar3 = (int *)std::
                      reverse_iterator<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
                      ::operator->((reverse_iterator<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
                                    *)local_4c);
      if (*piVar3 < (int)sVar1) {
        sVar1 = *(short *)(this + param_2 * 2 + 6);
        cMyTrace::cMyTrace(local_48,
                           "void CItemMakingSkill::UpSkillLevel(ENUM_ITEM_MAKING_TYPE, int, CUser*)"
                           ,0xb5,0);
        cMyTrace::operator()
                  (local_48,"CHARACTER_LEVEL_CURRENT_MAX :item_making_skill_[%d] = %d",param_2,
                   (int)sVar1);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::rbegin(local_38);
        puVar5 = (undefined4 *)
                 std::
                 reverse_iterator<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
                 ::operator->((reverse_iterator<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
                               *)local_38);
        *(short *)(this + param_2 * 2 + 6) = (short)*puVar5;
      }
    }
    else {
      local_10 = 0;
      while (uVar7 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                               ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                (local_14 + 0x18)), local_10 < uVar7) {
        iVar4 = CUserCharacInfo::get_charac_level(param_4);
        iVar6 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                          ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                           (local_14 + 0x18),local_10);
        if ((iVar4 < *(int *)(iVar6 + 4)) &&
           (sVar1 = *(short *)(this + param_2 * 2 + 6),
           piVar3 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                           operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                       *)(local_14 + 0x18),local_10), *piVar3 < (int)sVar1)) {
          sVar1 = *(short *)(this + param_2 * 2 + 6);
          cMyTrace::cMyTrace(local_34,
                             "void CItemMakingSkill::UpSkillLevel(ENUM_ITEM_MAKING_TYPE, int, CUser*)"
                             ,0xc5,0);
          cMyTrace::operator()
                    (local_34,"NO CHARACTER_LEVEL_CURRENT_MAX : item_making_skill_[%d] = %d",param_2
                     ,(int)sVar1);
          puVar5 = (undefined4 *)
                   std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                             ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                              (local_14 + 0x18),local_10);
          *(short *)(this + param_2 * 2 + 6) = (short)*puVar5;
        }
        local_10 = local_10 + 1;
      }
    }
    if (1000 < *(short *)(this + param_2 * 2 + 6)) {
      sVar1 = *(short *)(this + param_2 * 2 + 6);
      cMyTrace::cMyTrace(local_24,
                         "void CItemMakingSkill::UpSkillLevel(ENUM_ITEM_MAKING_TYPE, int, CUser*)",
                         0xce,0);
      cMyTrace::operator()
                (local_24,"ITEM_MAKING_SKILL_LEVEL_LIMIT : item_making_skill_[%d] = %d",param_2,
                 (int)sVar1);
      *(undefined2 *)(this + param_2 * 2 + 6) = 1000;
    }
    charac_expand::CData::alter((CData *)this);
  }
  return;
}
```

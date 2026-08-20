# extraction

`_ZN17expert_extraction20CEnchanterExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE`

`expert_extraction::CEnchanterExtraction::extraction(CUser*, short, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)`

| 类 | 地址 |
|---|---|
| `expert_extraction::CEnchanterExtraction` | `0x084a37c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a37c6  _ZN17expert_extraction20CEnchanterExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE
#           expert_extraction::CEnchanterExtraction::extraction(CUser*, short, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
# range [0x084a37c6, 0x084a3b33]
084a37c6 +0x000:  push   %ebp
084a37c7 +0x001:  mov    %esp,%ebp
084a37c9 +0x003:  push   %ebx
084a37ca +0x004:  sub    $0x114,%esp
084a37d0 +0x00a:  mov    0x10(%ebp),%eax
084a37d3 +0x00d:  mov    %ax,-0xbc(%ebp)
084a37da +0x014:  mov    0xc(%ebp),%eax
084a37dd +0x017:  mov    %eax,(%esp)
084a37e0 +0x01a:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
084a37e5 +0x01f:  mov    %eax,-0x2c(%ebp)
084a37e8 +0x022:  movswl -0xbc(%ebp),%edx
084a37ef +0x029:  lea    -0xa9(%ebp),%eax
084a37f5 +0x02f:  mov    %edx,0xc(%esp)
084a37f9 +0x033:  movl   $0x1,0x8(%esp)
084a3801 +0x03b:  mov    -0x2c(%ebp),%edx
084a3804 +0x03e:  mov    %edx,0x4(%esp)
084a3808 +0x042:  mov    %eax,(%esp)
084a380b +0x045:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
084a3810 +0x04a:  sub    $0x4,%esp
084a3813 +0x04d:  mov    -0xa7(%ebp),%eax
084a3819 +0x053:  mov    %eax,%ebx
084a381b +0x055:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a3820 +0x05a:  mov    %ebx,0x4(%esp)
084a3824 +0x05e:  mov    %eax,(%esp)
084a3827 +0x061:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084a382c +0x066:  mov    %eax,-0x28(%ebp)
084a382f +0x069:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a3834 +0x06e:  movl   $0x1,0x4(%esp)
084a383c +0x076:  mov    %eax,(%esp)
084a383f +0x079:  call   0822b5f2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9c
084a3844 +0x07e:  mov    %eax,-0x24(%ebp)
084a3847 +0x081:  mov    -0x24(%ebp),%eax
084a384a +0x084:  mov    %eax,(%esp)
084a384d +0x087:  call   084a462e <_GLOBAL__I__ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE+0x195>  ; global constructors keyed to expert_extraction::GetExtracterType(ENUM_EXPERT_JOB_TYPE)+0x195
084a3852 +0x08c:  mov    %eax,-0x20(%ebp)
084a3855 +0x08f:  mov    -0x20(%ebp),%eax
084a3858 +0x092:  mov    (%eax),%eax
084a385a +0x094:  mov    %eax,-0x1c(%ebp)
084a385d +0x097:  mov    -0x1c(%ebp),%eax
084a3860 +0x09a:  sub    $0x1,%eax
084a3863 +0x09d:  mov    %eax,-0x6c(%ebp)
084a3866 +0x0a0:  mov    0x8(%ebp),%eax
084a3869 +0x0a3:  mov    0x4(%eax),%eax
084a386c +0x0a6:  lea    -0x6c(%ebp),%edx
084a386f +0x0a9:  mov    %edx,0x4(%esp)
084a3873 +0x0ad:  mov    %eax,(%esp)
084a3876 +0x0b0:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
084a387b +0x0b5:  mov    %eax,-0x18(%ebp)
084a387e +0x0b8:  addl   $0x1,-0x18(%ebp)
084a3882 +0x0bc:  mov    -0x20(%ebp),%eax
084a3885 +0x0bf:  add    $0x4,%eax
084a3888 +0x0c2:  mov    %eax,-0x14(%ebp)
084a388b +0x0c5:  mov    -0x14(%ebp),%eax
084a388e +0x0c8:  mov    %eax,(%esp)
084a3891 +0x0cb:  call   082370b6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc760>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc760
084a3896 +0x0d0:  test   %eax,%eax
084a3898 +0x0d2:  sete   %al
084a389b +0x0d5:  test   %al,%al
084a389d +0x0d7:  je     084a38f0 <+0x12a>
084a389f +0x0d9:  mov    -0x14(%ebp),%eax
084a38a2 +0x0dc:  mov    %eax,(%esp)
084a38a5 +0x0df:  call   082370b6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc760>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc760
084a38aa +0x0e4:  mov    %eax,%ebx
084a38ac +0x0e6:  movl   $0x5,0xc(%esp)
084a38b4 +0x0ee:  movl   $0x169,0x8(%esp)
084a38bc +0x0f6:  movl   $&_ZZN17expert_extraction20CEnchanterExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EEE19__PRETTY_FUNCTION__,0x4(%esp)
084a38c4 +0x0fe:  lea    -0x68(%ebp),%eax
084a38c7 +0x101:  mov    %eax,(%esp)
084a38ca +0x104:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084a38cf +0x109:  mov    %ebx,0x8(%esp)
084a38d3 +0x10d:  movl   $"CEnchanterExtraction::extraction ERROR : size(%d)",0x4(%esp)
084a38db +0x115:  lea    -0x68(%ebp),%eax
084a38de +0x118:  mov    %eax,(%esp)
084a38e1 +0x11b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084a38e6 +0x120:  mov    $0x0,%eax
084a38eb +0x125:  jmp    084a3b2f <+0x369>
084a38f0 +0x12a:  mov    -0x14(%ebp),%eax
084a38f3 +0x12d:  mov    %eax,(%esp)
084a38f6 +0x130:  call   082370b6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc760>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc760
084a38fb +0x135:  test   %eax,%eax
084a38fd +0x137:  je     084a390c <+0x146>
084a38ff +0x139:  cmpl   $0x0,-0x1c(%ebp)
084a3903 +0x13d:  jne    084a390c <+0x146>
084a3905 +0x13f:  mov    $0x1,%eax
084a390a +0x144:  jmp    084a3911 <+0x14b>
084a390c +0x146:  mov    $0x0,%eax
084a3911 +0x14b:  test   %al,%al
084a3913 +0x14d:  je     084a396d <+0x1a7>
084a3915 +0x14f:  mov    -0x14(%ebp),%eax
084a3918 +0x152:  mov    %eax,(%esp)
084a391b +0x155:  call   082370b6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc760>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc760
084a3920 +0x15a:  mov    %eax,%ebx
084a3922 +0x15c:  movl   $0x5,0xc(%esp)
084a392a +0x164:  movl   $0x16e,0x8(%esp)
084a3932 +0x16c:  movl   $&_ZZN17expert_extraction20CEnchanterExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EEE19__PRETTY_FUNCTION__,0x4(%esp)
084a393a +0x174:  lea    -0x58(%ebp),%eax
084a393d +0x177:  mov    %eax,(%esp)
084a3940 +0x17a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084a3945 +0x17f:  mov    -0x1c(%ebp),%eax
084a3948 +0x182:  mov    %eax,0xc(%esp)
084a394c +0x186:  mov    %ebx,0x8(%esp)
084a3950 +0x18a:  movl   $"CEnchanterExtraction::extraction ERROR : size(%d), sum(%d)",0x4(%esp)
084a3958 +0x192:  lea    -0x58(%ebp),%eax
084a395b +0x195:  mov    %eax,(%esp)
084a395e +0x198:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084a3963 +0x19d:  mov    $0x0,%eax
084a3968 +0x1a2:  jmp    084a3b2f <+0x369>
084a396d +0x1a7:  movl   $0x0,-0x10(%ebp)
084a3974 +0x1ae:  movl   $0x0,-0xc(%ebp)
084a397b +0x1b5:  jmp    084a3ac5 <+0x2ff>
084a3980 +0x1ba:  mov    -0x10(%ebp),%eax
084a3983 +0x1bd:  cmp    -0x18(%ebp),%eax
084a3986 +0x1c0:  jge    084a39b0 <+0x1ea>
084a3988 +0x1c2:  mov    -0xc(%ebp),%eax
084a398b +0x1c5:  mov    %eax,0x4(%esp)
084a398f +0x1c9:  mov    -0x14(%ebp),%eax
084a3992 +0x1cc:  mov    %eax,(%esp)
084a3995 +0x1cf:  call   084a4690 <_GLOBAL__I__ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE+0x1f7>  ; global constructors keyed to expert_extraction::GetExtracterType(ENUM_EXPERT_JOB_TYPE)+0x1f7
084a399a +0x1d4:  movzwl 0x4(%eax),%eax
084a399e +0x1d8:  movzwl %ax,%eax
084a39a1 +0x1db:  add    -0x10(%ebp),%eax
084a39a4 +0x1de:  cmp    -0x18(%ebp),%eax
084a39a7 +0x1e1:  jl     084a39b0 <+0x1ea>
084a39a9 +0x1e3:  mov    $0x1,%eax
084a39ae +0x1e8:  jmp    084a39b5 <+0x1ef>
084a39b0 +0x1ea:  mov    $0x0,%eax
084a39b5 +0x1ef:  test   %al,%al
084a39b7 +0x1f1:  je     084a3aa5 <+0x2df>
084a39bd +0x1f7:  mov    0x8(%ebp),%eax
084a39c0 +0x1fa:  mov    (%eax),%eax
084a39c2 +0x1fc:  add    $0x18,%eax
084a39c5 +0x1ff:  mov    (%eax),%edx
084a39c7 +0x201:  mov    -0xa9(%ebp),%eax
084a39cd +0x207:  mov    %eax,0x4(%esp)
084a39d1 +0x20b:  mov    -0xa5(%ebp),%eax
084a39d7 +0x211:  mov    %eax,0x8(%esp)
084a39db +0x215:  mov    -0xa1(%ebp),%eax
084a39e1 +0x21b:  mov    %eax,0xc(%esp)
084a39e5 +0x21f:  mov    -0x9d(%ebp),%eax
084a39eb +0x225:  mov    %eax,0x10(%esp)
084a39ef +0x229:  mov    -0x99(%ebp),%eax
084a39f5 +0x22f:  mov    %eax,0x14(%esp)
084a39f9 +0x233:  mov    -0x95(%ebp),%eax
084a39ff +0x239:  mov    %eax,0x18(%esp)
084a3a03 +0x23d:  mov    -0x91(%ebp),%eax
084a3a09 +0x243:  mov    %eax,0x1c(%esp)
084a3a0d +0x247:  mov    -0x8d(%ebp),%eax
084a3a13 +0x24d:  mov    %eax,0x20(%esp)
084a3a17 +0x251:  mov    -0x89(%ebp),%eax
084a3a1d +0x257:  mov    %eax,0x24(%esp)
084a3a21 +0x25b:  mov    -0x85(%ebp),%eax
084a3a27 +0x261:  mov    %eax,0x28(%esp)
084a3a2b +0x265:  mov    -0x81(%ebp),%eax
084a3a31 +0x26b:  mov    %eax,0x2c(%esp)
084a3a35 +0x26f:  mov    -0x7d(%ebp),%eax
084a3a38 +0x272:  mov    %eax,0x30(%esp)
084a3a3c +0x276:  mov    -0x79(%ebp),%eax
084a3a3f +0x279:  mov    %eax,0x34(%esp)
084a3a43 +0x27d:  mov    -0x75(%ebp),%eax
084a3a46 +0x280:  mov    %eax,0x38(%esp)
084a3a4a +0x284:  mov    -0x71(%ebp),%eax
084a3a4d +0x287:  mov    %eax,0x3c(%esp)
084a3a51 +0x28b:  movzbl -0x6d(%ebp),%eax
084a3a55 +0x28f:  mov    %al,0x40(%esp)
084a3a59 +0x293:  mov    0x8(%ebp),%eax
084a3a5c +0x296:  mov    %eax,(%esp)
084a3a5f +0x299:  call   *%edx
084a3a61 +0x29b:  mov    %eax,-0x40(%ebp)
084a3a64 +0x29e:  mov    -0xc(%ebp),%eax
084a3a67 +0x2a1:  mov    %eax,0x4(%esp)
084a3a6b +0x2a5:  mov    -0x14(%ebp),%eax
084a3a6e +0x2a8:  mov    %eax,(%esp)
084a3a71 +0x2ab:  call   084a4690 <_GLOBAL__I__ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE+0x1f7>  ; global constructors keyed to expert_extraction::GetExtracterType(ENUM_EXPERT_JOB_TYPE)+0x1f7
084a3a76 +0x2b0:  mov    %eax,%edx
084a3a78 +0x2b2:  lea    -0x48(%ebp),%eax
084a3a7b +0x2b5:  lea    -0x40(%ebp),%ecx
084a3a7e +0x2b8:  mov    %ecx,0x8(%esp)
084a3a82 +0x2bc:  mov    %edx,0x4(%esp)
084a3a86 +0x2c0:  mov    %eax,(%esp)
084a3a89 +0x2c3:  call   080dd799 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x2e2>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x2e2
084a3a8e +0x2c8:  sub    $0x4,%esp
084a3a91 +0x2cb:  lea    -0x48(%ebp),%eax
084a3a94 +0x2ce:  mov    %eax,0x4(%esp)
084a3a98 +0x2d2:  mov    0x14(%ebp),%eax
084a3a9b +0x2d5:  mov    %eax,(%esp)
084a3a9e +0x2d8:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
084a3aa3 +0x2dd:  jmp    084a3ade <+0x318>
084a3aa5 +0x2df:  mov    -0xc(%ebp),%eax
084a3aa8 +0x2e2:  mov    %eax,0x4(%esp)
084a3aac +0x2e6:  mov    -0x14(%ebp),%eax
084a3aaf +0x2e9:  mov    %eax,(%esp)
084a3ab2 +0x2ec:  call   084a4690 <_GLOBAL__I__ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE+0x1f7>  ; global constructors keyed to expert_extraction::GetExtracterType(ENUM_EXPERT_JOB_TYPE)+0x1f7
084a3ab7 +0x2f1:  movzwl 0x4(%eax),%eax
084a3abb +0x2f5:  movzwl %ax,%eax
084a3abe +0x2f8:  add    %eax,-0x10(%ebp)
084a3ac1 +0x2fb:  addl   $0x1,-0xc(%ebp)
084a3ac5 +0x2ff:  mov    -0x14(%ebp),%eax
084a3ac8 +0x302:  mov    %eax,(%esp)
084a3acb +0x305:  call   082370b6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc760>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc760
084a3ad0 +0x30a:  cmp    -0xc(%ebp),%eax
084a3ad3 +0x30d:  seta   %al
084a3ad6 +0x310:  test   %al,%al
084a3ad8 +0x312:  jne    084a3980 <+0x1ba>
084a3ade +0x318:  mov    0x14(%ebp),%eax
084a3ae1 +0x31b:  mov    %eax,(%esp)
084a3ae4 +0x31e:  call   0811119a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6ac>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6ac
084a3ae9 +0x323:  test   %al,%al
084a3aeb +0x325:  je     084a3b2a <+0x364>
084a3aed +0x327:  movl   $0x5,0xc(%esp)
084a3af5 +0x32f:  movl   $0x17f,0x8(%esp)
084a3afd +0x337:  movl   $&_ZZN17expert_extraction20CEnchanterExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EEE19__PRETTY_FUNCTION__,0x4(%esp)
084a3b05 +0x33f:  lea    -0x3c(%ebp),%eax
084a3b08 +0x342:  mov    %eax,(%esp)
084a3b0b +0x345:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084a3b10 +0x34a:  movl   $"CEnchanterExtraction::extraction ERROR : result is empty",0x4(%esp)
084a3b18 +0x352:  lea    -0x3c(%ebp),%eax
084a3b1b +0x355:  mov    %eax,(%esp)
084a3b1e +0x358:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084a3b23 +0x35d:  mov    $0x0,%eax
084a3b28 +0x362:  jmp    084a3b2f <+0x369>
084a3b2a +0x364:  mov    $0x1,%eax
084a3b2f +0x369:  mov    -0x4(%ebp),%ebx
084a3b32 +0x36c:  leave
084a3b33 +0x36d:  ret
```

## 反编译 C

```c
// expert_extraction::CEnchanterExtraction::extraction @ 0x84a37c6

/* expert_extraction::CEnchanterExtraction::extraction(CUser*, short, std::vector<std::pair<int,
   int>, std::allocator<std::pair<int, int> > >&) */

undefined4 __thiscall
expert_extraction::CEnchanterExtraction::extraction
          (CEnchanterExtraction *this,CUser *param_1,short param_2,vector *param_3)

{
  bool bVar1;
  char cVar2;
  CDataManager *this_00;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  undefined2 local_ad;
  undefined2 uStack_ab;
  undefined2 uStack_a9;
  undefined2 uStack_a7;
  undefined4 local_a5;
  undefined4 local_a1;
  undefined4 local_9d;
  undefined4 local_99;
  undefined4 local_95;
  undefined4 local_91;
  undefined4 local_8d;
  undefined4 local_89;
  undefined4 local_85;
  undefined4 local_81;
  undefined4 local_7d;
  undefined4 local_79;
  undefined4 local_75;
  undefined1 local_71;
  ulong local_70;
  cMyTrace local_6c [16];
  cMyTrace local_5c [16];
  int local_4c [2];
  undefined4 local_44;
  cMyTrace local_40 [16];
  int local_30;
  undefined4 local_2c;
  STExpertJobScript *local_28;
  int *local_24;
  int local_20;
  int local_1c;
  vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
  *local_18;
  int local_14;
  uint local_10;
  
  local_30 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  CInventory::GetInvenSlot((int)&local_ad,local_30);
  iVar3 = CONCAT22(uStack_a9,uStack_ab);
  this_00 = (CDataManager *)G_CDataManager();
  local_2c = CDataManager::find_item(this_00,iVar3);
  iVar3 = G_CDataManager();
  local_28 = (STExpertJobScript *)CDataManager::GetExpertJobScript(iVar3);
  local_24 = (int *)STExpertJobScript::GetEnchanterExtractionResultInfo(local_28);
  local_20 = *local_24;
  local_70 = local_20 - 1;
  local_1c = CMTRand::randInt(*(CMTRand **)(this + 4),&local_70);
  local_1c = local_1c + 1;
  local_18 = (vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
              *)(local_24 + 1);
  iVar3 = std::
          vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
          ::size(local_18);
  if (iVar3 == 0) {
    uVar4 = std::
            vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
            ::size(local_18);
    cMyTrace::cMyTrace(local_6c,
                       "virtual bool expert_extraction::CEnchanterExtraction::extraction(CUser*, short int, IntPairVector&)"
                       ,0x169,5);
    cMyTrace::operator()(local_6c,"CEnchanterExtraction::extraction ERROR : size(%d)",uVar4);
    uVar4 = 0;
  }
  else {
    iVar3 = std::
            vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
            ::size(local_18);
    if ((iVar3 == 0) || (local_20 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = std::
              vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
              ::size(local_18);
      cMyTrace::cMyTrace(local_5c,
                         "virtual bool expert_extraction::CEnchanterExtraction::extraction(CUser*, short int, IntPairVector&)"
                         ,0x16e,5);
      cMyTrace::operator()
                (local_5c,"CEnchanterExtraction::extraction ERROR : size(%d), sum(%d)",uVar4,
                 local_20);
      uVar4 = 0;
    }
    else {
      local_14 = 0;
      local_10 = 0;
      while( true ) {
        uVar6 = std::
                vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
                ::size(local_18);
        if (uVar6 <= local_10) break;
        if (local_14 < local_1c) {
          iVar3 = std::
                  vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
                  ::operator[](local_18,local_10);
          if ((int)((uint)*(ushort *)(iVar3 + 4) + local_14) < local_1c) goto LAB_084a39b0;
          bVar1 = true;
        }
        else {
LAB_084a39b0:
          bVar1 = false;
        }
        if (bVar1) {
          local_44 = (**(code **)(*(int *)this + 0x18))
                               (this,CONCAT22(uStack_ab,local_ad),CONCAT22(uStack_a7,uStack_a9),
                                local_a5,local_a1,local_9d,local_99,local_95,local_91,local_8d,
                                local_89,local_85,local_81,local_7d,local_79,local_75,local_71);
          piVar5 = (int *)std::
                          vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
                          ::operator[](local_18,local_10);
          std::make_pair<int&,int>(local_4c,piVar5);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_3,
                     (pair *)local_4c);
          break;
        }
        iVar3 = std::
                vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
                ::operator[](local_18,local_10);
        local_14 = local_14 + (uint)*(ushort *)(iVar3 + 4);
        local_10 = local_10 + 1;
      }
      cVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
      if (cVar2 == '\0') {
        uVar4 = 1;
      }
      else {
        cMyTrace::cMyTrace(local_40,
                           "virtual bool expert_extraction::CEnchanterExtraction::extraction(CUser*, short int, IntPairVector&)"
                           ,0x17f,5);
        cMyTrace::operator()(local_40,"CEnchanterExtraction::extraction ERROR : result is empty");
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}
```

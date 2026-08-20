# add_monster_APC_AI

`_ZN13CBattle_Field18add_monster_APC_AIERi`

`CBattle_Field::add_monster_APC_AI(int&)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08301d76` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08301d76  _ZN13CBattle_Field18add_monster_APC_AIERi
#           CBattle_Field::add_monster_APC_AI(int&)
# range [0x08301d76, 0x083020b5]
08301d76 +0x000:  push   %ebp
08301d77 +0x001:  mov    %esp,%ebp
08301d79 +0x003:  push   %esi
08301d7a +0x004:  push   %ebx
08301d7b +0x005:  sub    $0x6e0,%esp
08301d81 +0x00b:  mov    0x8(%ebp),%eax
08301d84 +0x00e:  mov    0x108(%eax),%eax
08301d8a +0x014:  test   %eax,%eax
08301d8c +0x016:  je     083020a8 <+0x332>
08301d92 +0x01c:  mov    0x8(%ebp),%eax
08301d95 +0x01f:  mov    0x188(%eax),%eax
08301d9b +0x025:  test   %eax,%eax
08301d9d +0x027:  je     083020ab <+0x335>
08301da3 +0x02d:  movl   $0x0,-0x18(%ebp)
08301daa +0x034:  mov    0x8(%ebp),%eax
08301dad +0x037:  mov    0x108(%eax),%eax
08301db3 +0x03d:  mov    %eax,(%esp)
08301db6 +0x040:  call   081508fc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x231>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x231
08301dbb +0x045:  mov    %eax,-0x14(%ebp)
08301dbe +0x048:  mov    -0x14(%ebp),%eax
08301dc1 +0x04b:  mov    %eax,(%esp)
08301dc4 +0x04e:  call   081526de <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2013>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2013
08301dc9 +0x053:  xor    $0x1,%eax
08301dcc +0x056:  test   %al,%al
08301dce +0x058:  je     083020ac <+0x336>
08301dd4 +0x05e:  lea    -0x6b8(%ebp),%eax
08301dda +0x064:  mov    %eax,(%esp)
08301ddd +0x067:  call   081511c8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xafd>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xafd
08301de2 +0x06c:  movl   $0x0,-0x18(%ebp)
08301de9 +0x073:  lea    -0x368(%ebp),%eax
08301def +0x079:  mov    -0x14(%ebp),%edx
08301df2 +0x07c:  mov    %edx,0x4(%esp)
08301df6 +0x080:  mov    %eax,(%esp)
08301df9 +0x083:  call   08152722 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2057>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2057
08301dfe +0x088:  sub    $0x4,%esp
08301e01 +0x08b:  lea    -0x36c(%ebp),%eax
08301e07 +0x091:  mov    -0x14(%ebp),%edx
08301e0a +0x094:  mov    %edx,0x4(%esp)
08301e0e +0x098:  mov    %eax,(%esp)
08301e11 +0x09b:  call   0815274e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2083>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2083
08301e16 +0x0a0:  sub    $0x4,%esp
08301e19 +0x0a3:  jmp    08302058 <+0x2e2>
08301e1e +0x0a8:  lea    -0x368(%ebp),%eax
08301e24 +0x0ae:  mov    %eax,(%esp)
08301e27 +0x0b1:  call   081527bc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x20f1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x20f1
08301e2c +0x0b6:  mov    %eax,-0x10(%ebp)
08301e2f +0x0b9:  mov    -0x10(%ebp),%eax
08301e32 +0x0bc:  mov    (%eax),%eax
08301e34 +0x0be:  mov    %eax,%ebx
08301e36 +0x0c0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08301e3b +0x0c5:  mov    0x869c(%eax),%eax
08301e41 +0x0cb:  mov    %ebx,0x4(%esp)
08301e45 +0x0cf:  mov    %eax,(%esp)
08301e48 +0x0d2:  call   0834a9d2 <_ZN16CAICharacterList3getEj>  ; CAICharacterList::get(unsigned int)
08301e4d +0x0d7:  mov    %eax,-0xc(%ebp)
08301e50 +0x0da:  cmpl   $0x0,-0xc(%ebp)
08301e54 +0x0de:  jne    08301ee8 <+0x172>
08301e5a +0x0e4:  mov    0x8(%ebp),%eax
08301e5d +0x0e7:  mov    %eax,(%esp)
08301e60 +0x0ea:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08301e65 +0x0ef:  movzbl 0xe8(%eax),%eax
08301e6c +0x0f6:  test   %al,%al
08301e6e +0x0f8:  je     08301e77 <+0x101>
08301e70 +0x0fa:  mov    $"layeredMap",%eax
08301e75 +0x0ff:  jmp    08301e7c <+0x106>
08301e77 +0x101:  mov    $"generalMap",%eax
08301e7c +0x106:  mov    %eax,%esi
08301e7e +0x108:  mov    0x8(%ebp),%eax
08301e81 +0x10b:  mov    0x108(%eax),%eax
08301e87 +0x111:  mov    %eax,(%esp)
08301e8a +0x114:  call   08134776 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x37d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x37d
08301e8f +0x119:  mov    %eax,%ebx
08301e91 +0x11b:  mov    0x8(%ebp),%eax
08301e94 +0x11e:  mov    0x188(%eax),%eax
08301e9a +0x124:  mov    %eax,(%esp)
08301e9d +0x127:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
08301ea2 +0x12c:  mov    -0x10(%ebp),%edx
08301ea5 +0x12f:  mov    (%edx),%edx
08301ea7 +0x131:  mov    %esi,0x20(%esp)
08301eab +0x135:  mov    %ebx,0x1c(%esp)
08301eaf +0x139:  mov    %eax,0x18(%esp)
08301eb3 +0x13d:  mov    %edx,0x14(%esp)
08301eb7 +0x141:  movl   $"Unknown APC Type(%d). In Dungeon(%d), Map(%d) [Map Kind : %s]",0x10(%esp)
08301ebf +0x149:  movl   $0x649,0xc(%esp)
08301ec7 +0x151:  movl   $&_ZZN13CBattle_Field18add_monster_APC_AIERiE19__PRETTY_FUNCTION__,0x8(%esp)
08301ecf +0x159:  movl   $"battle_field.cpp",0x4(%esp)
08301ed7 +0x161:  movl   $0x1,(%esp)
08301ede +0x168:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08301ee3 +0x16d:  jmp    0830204a <+0x2d4>
08301ee8 +0x172:  movl   $0x34c,0x8(%esp)
08301ef0 +0x17a:  movl   $0x0,0x4(%esp)
08301ef8 +0x182:  lea    -0x6b8(%ebp),%eax
08301efe +0x188:  mov    %eax,(%esp)
08301f01 +0x18b:  call   0807dcc0 <_init+0x5b8>
08301f06 +0x190:  mov    -0x18(%ebp),%eax
08301f09 +0x193:  mov    %eax,-0x6b8(%ebp)
08301f0f +0x199:  mov    -0x10(%ebp),%eax
08301f12 +0x19c:  mov    (%eax),%eax
08301f14 +0x19e:  mov    %eax,-0x6ac(%ebp)
08301f1a +0x1a4:  mov    0xc(%ebp),%eax
08301f1d +0x1a7:  mov    (%eax),%eax
08301f1f +0x1a9:  mov    %eax,-0x6b4(%ebp)
08301f25 +0x1af:  lea    0x1(%eax),%edx
08301f28 +0x1b2:  mov    0xc(%ebp),%eax
08301f2b +0x1b5:  mov    %edx,(%eax)
08301f2d +0x1b7:  mov    -0x10(%ebp),%eax
08301f30 +0x1ba:  mov    0x14(%eax),%eax
08301f33 +0x1bd:  mov    %al,-0x6b0(%ebp)
08301f39 +0x1c3:  movzbl -0x6b0(%ebp),%eax
08301f40 +0x1ca:  cmp    $0x8,%al
08301f42 +0x1cc:  jne    08301f61 <+0x1eb>
08301f44 +0x1ce:  mov    0x8(%ebp),%eax
08301f47 +0x1d1:  mov    %eax,(%esp)
08301f4a +0x1d4:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08301f4f +0x1d9:  movzbl 0x45(%eax),%eax
08301f53 +0x1dd:  xor    $0x1,%eax
08301f56 +0x1e0:  test   %al,%al
08301f58 +0x1e2:  je     08301f61 <+0x1eb>
08301f5a +0x1e4:  mov    $0x1,%eax
08301f5f +0x1e9:  jmp    08301f66 <+0x1f0>
08301f61 +0x1eb:  mov    $0x0,%eax
08301f66 +0x1f0:  test   %al,%al
08301f68 +0x1f2:  je     08301f87 <+0x211>
08301f6a +0x1f4:  mov    0x8(%ebp),%eax
08301f6d +0x1f7:  add    $0x118,%eax
08301f72 +0x1fc:  lea    -0x6b8(%ebp),%edx
08301f78 +0x202:  add    $0x4,%edx
08301f7b +0x205:  mov    %edx,0x4(%esp)
08301f7f +0x209:  mov    %eax,(%esp)
08301f82 +0x20c:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
08301f87 +0x211:  mov    0x8(%ebp),%eax
08301f8a +0x214:  mov    0x188(%eax),%eax
08301f90 +0x21a:  mov    %eax,(%esp)
08301f93 +0x21d:  call   0826b938 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x206>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x206
08301f98 +0x222:  test   %al,%al
08301f9a +0x224:  setg   %al
08301f9d +0x227:  test   %al,%al
08301f9f +0x229:  je     08301fb2 <+0x23c>
08301fa1 +0x22b:  mov    0x8(%ebp),%eax
08301fa4 +0x22e:  mov    0x238(%eax),%eax
08301faa +0x234:  mov    %al,-0x6a8(%ebp)
08301fb0 +0x23a:  jmp    08301fc3 <+0x24d>
08301fb2 +0x23c:  mov    -0xc(%ebp),%eax
08301fb5 +0x23f:  mov    %eax,(%esp)
08301fb8 +0x242:  call   0815085a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18f
08301fbd +0x247:  mov    %al,-0x6a8(%ebp)
08301fc3 +0x24d:  mov    -0x10(%ebp),%eax
08301fc6 +0x250:  mov    0x10(%eax),%eax
08301fc9 +0x253:  mov    %eax,-0x68c(%ebp)
08301fcf +0x259:  mov    -0x10(%ebp),%eax
08301fd2 +0x25c:  movzbl 0x19(%eax),%eax
08301fd6 +0x260:  mov    %al,-0x6a7(%ebp)
08301fdc +0x266:  mov    -0x10(%ebp),%eax
08301fdf +0x269:  movzbl 0x18(%eax),%eax
08301fe3 +0x26d:  mov    %al,-0x6a6(%ebp)
08301fe9 +0x273:  lea    -0x6b8(%ebp),%eax
08301fef +0x279:  mov    %eax,0x4(%esp)
08301ff3 +0x27d:  lea    -0x364(%ebp),%eax
08301ff9 +0x283:  mov    %eax,(%esp)
08301ffc +0x286:  call   08151aea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x141f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x141f
08302001 +0x28b:  mov    0x8(%ebp),%eax
08302004 +0x28e:  mov    %eax,(%esp)
08302007 +0x291:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830200c +0x296:  lea    -0x364(%ebp),%edx
08302012 +0x29c:  mov    %edx,0x4(%esp)
08302016 +0x2a0:  mov    %eax,(%esp)
08302019 +0x2a3:  call   08151612 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xf47>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xf47
0830201e +0x2a8:  jmp    08302038 <+0x2c2>
08302020 +0x2aa:  mov    %edx,%ebx
08302022 +0x2ac:  mov    %eax,%esi
08302024 +0x2ae:  lea    -0x364(%ebp),%eax
0830202a +0x2b4:  mov    %eax,(%esp)
0830202d +0x2b7:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
08302032 +0x2bc:  mov    %esi,%eax
08302034 +0x2be:  mov    %ebx,%edx
08302036 +0x2c0:  jmp    0830207a <+0x304>
08302038 +0x2c2:  lea    -0x364(%ebp),%eax
0830203e +0x2c8:  mov    %eax,(%esp)
08302041 +0x2cb:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
08302046 +0x2d0:  addl   $0x1,-0x18(%ebp)
0830204a +0x2d4:  lea    -0x368(%ebp),%eax
08302050 +0x2da:  mov    %eax,(%esp)
08302053 +0x2dd:  call   081527a6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x20db>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x20db
08302058 +0x2e2:  lea    -0x36c(%ebp),%eax
0830205e +0x2e8:  mov    %eax,0x4(%esp)
08302062 +0x2ec:  lea    -0x368(%ebp),%eax
08302068 +0x2f2:  mov    %eax,(%esp)
0830206b +0x2f5:  call   0815277a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x20af>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x20af
08302070 +0x2fa:  test   %al,%al
08302072 +0x2fc:  jne    08301e1e <+0xa8>
08302078 +0x302:  jmp    08302098 <+0x322>
0830207a +0x304:  mov    %edx,%ebx
0830207c +0x306:  mov    %eax,%esi
0830207e +0x308:  lea    -0x6b8(%ebp),%eax
08302084 +0x30e:  mov    %eax,(%esp)
08302087 +0x311:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
0830208c +0x316:  mov    %esi,%eax
0830208e +0x318:  mov    %ebx,%edx
08302090 +0x31a:  mov    %eax,(%esp)
08302093 +0x31d:  call   08ae3750 <_Unwind_Resume>
08302098 +0x322:  lea    -0x6b8(%ebp),%eax
0830209e +0x328:  mov    %eax,(%esp)
083020a1 +0x32b:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
083020a6 +0x330:  jmp    083020ac <+0x336>
083020a8 +0x332:  nop
083020a9 +0x333:  jmp    083020ac <+0x336>
083020ab +0x335:  nop
083020ac +0x336:  lea    -0x8(%ebp),%esp
083020af +0x339:  add    $0x0,%esp
083020b2 +0x33c:  pop    %ebx
083020b3 +0x33d:  pop    %esi
083020b4 +0x33e:  pop    %ebp
083020b5 +0x33f:  ret
```

## 反编译 C

```c
// CBattle_Field::add_monster_APC_AI @ 0x8301d76

/* CBattle_Field::add_monster_APC_AI(int&) */

void __thiscall CBattle_Field::add_monster_APC_AI(CBattle_Field *this,int *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  MapInfo *pMVar8;
  int local_6bc;
  int local_6b8;
  char local_6b4;
  uint local_6b0;
  undefined1 local_6ac;
  undefined1 local_6ab;
  undefined1 local_6aa;
  uint local_690;
  __normal_iterator local_370 [4];
  __normal_iterator<STAICharacterMapArrangeData_const*,std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>>
  local_36c [4];
  map_monster local_368 [844];
  int local_1c;
  undefined4 local_18;
  uint *local_14;
  CAICharacter *local_10;
  
  if ((*(int *)(this + 0x108) != 0) && (*(int *)(this + 0x188) != 0)) {
    local_1c = 0;
    local_18 = CMap::getAICharacters(*(CMap **)(this + 0x108));
    cVar2 = std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>::
            empty();
    if (cVar2 != '\x01') {
      map_monster::map_monster((map_monster *)&local_6bc);
      local_1c = 0;
                    /* try { // try from 08301df9 to 08302000 has its CatchHandler @ 0830207a */
      std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>::begin();
      std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>::end();
      while (bVar3 = __gnu_cxx::operator!=(local_36c,local_370), bVar3) {
        local_14 = (uint *)__gnu_cxx::
                           __normal_iterator<STAICharacterMapArrangeData_const*,std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>>
                           ::operator*(local_36c);
        uVar1 = *local_14;
        iVar4 = G_CDataManager();
        local_10 = (CAICharacter *)
                   CAICharacterList::get(*(CAICharacterList **)(iVar4 + 0x869c),uVar1);
        if (local_10 == (CAICharacter *)0x0) {
          iVar4 = GetCurrentMapInfo(this);
          if (*(char *)(iVar4 + 0xe8) == '\0') {
            pcVar5 = "generalMap";
          }
          else {
            pcVar5 = "layeredMap";
          }
          uVar6 = CMap::get_index(*(CMap **)(this + 0x108));
          uVar7 = CDungeon::get_index(*(CDungeon **)(this + 0x188));
          LogManager::logFormat
                    (1,"battle_field.cpp","void CBattle_Field::add_monster_APC_AI(int&)",0x649,
                     "Unknown APC Type(%d). In Dungeon(%d), Map(%d) [Map Kind : %s]",*local_14,uVar7
                     ,uVar6,pcVar5);
        }
        else {
          memset(&local_6bc,0,0x34c);
          local_6bc = local_1c;
          local_6b0 = *local_14;
          local_6b8 = *param_1;
          *param_1 = local_6b8 + 1;
          local_6b4 = (char)local_14[5];
          if ((local_6b4 == '\b') &&
             (iVar4 = GetCurrentMapInfo(this), *(char *)(iVar4 + 0x45) != '\x01')) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if (bVar3) {
            std::vector<int,std::allocator<int>>::push_back
                      ((vector<int,std::allocator<int>> *)(this + 0x118),&local_6b8);
          }
          cVar2 = CDungeon::get_dimension_possible(*(CDungeon **)(this + 0x188));
          if (cVar2 < '\x01') {
            local_6ac = CAICharacter::getLevel(local_10);
          }
          else {
            local_6ac = (undefined1)*(undefined4 *)(this + 0x238);
          }
          local_690 = local_14[4];
          local_6ab = *(undefined1 *)((int)local_14 + 0x19);
          local_6aa = (undefined1)local_14[6];
          map_monster::map_monster(local_368,(map_monster *)&local_6bc);
                    /* try { // try from 08302007 to 0830201d has its CatchHandler @ 08302020 */
          pMVar8 = (MapInfo *)GetCurrentMapInfo(this);
          MapInfo::Add_Mob(pMVar8,local_368);
                    /* try { // try from 08302041 to 0830206f has its CatchHandler @ 0830207a */
          map_monster::~map_monster(local_368);
          local_1c = local_1c + 1;
        }
        __gnu_cxx::
        __normal_iterator<STAICharacterMapArrangeData_const*,std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>>
        ::operator++(local_36c);
      }
      map_monster::~map_monster((map_monster *)&local_6bc);
    }
  }
  return;
}
```

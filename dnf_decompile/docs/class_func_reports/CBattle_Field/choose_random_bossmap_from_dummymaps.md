# choose_random_bossmap_from_dummymaps

`_ZN13CBattle_Field36choose_random_bossmap_from_dummymapsEPK8CDungeonPK10GridScriptRiRbiii`

`CBattle_Field::choose_random_bossmap_from_dummymaps(CDungeon const*, GridScript const*, int&, bool&, int, int, int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08307eca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08307eca  _ZN13CBattle_Field36choose_random_bossmap_from_dummymapsEPK8CDungeonPK10GridScriptRiRbiii
#           CBattle_Field::choose_random_bossmap_from_dummymaps(CDungeon const*, GridScript const*, int&, bool&, int, int, int)
# range [0x08307eca, 0x08308213]
08307eca +0x000:  push   %ebp
08307ecb +0x001:  mov    %esp,%ebp
08307ecd +0x003:  push   %ebx
08307ece +0x004:  sub    $0x34,%esp
08307ed1 +0x007:  cmpl   $0x0,0xc(%ebp)
08307ed5 +0x00b:  je     08308207 <+0x33d>
08307edb +0x011:  cmpl   $0x0,0x10(%ebp)
08307edf +0x015:  je     0830820a <+0x340>
08307ee5 +0x01b:  mov    0x8(%ebp),%eax
08307ee8 +0x01e:  mov    0x74(%eax),%eax
08307eeb +0x021:  test   %eax,%eax
08307eed +0x023:  je     0830820d <+0x343>
08307ef3 +0x029:  mov    0xc(%ebp),%eax
08307ef6 +0x02c:  mov    %eax,(%esp)
08307ef9 +0x02f:  call   0830e610 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1f5>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1f5
08307efe +0x034:  test   %al,%al
08307f00 +0x036:  je     0830813c <+0x272>
08307f06 +0x03c:  mov    0x8(%ebp),%eax
08307f09 +0x03f:  mov    0xc(%eax),%eax
08307f0c +0x042:  cmp    0x1c(%ebp),%eax
08307f0f +0x045:  jne    0830820e <+0x344>
08307f15 +0x04b:  mov    0x8(%ebp),%eax
08307f18 +0x04e:  mov    0x10(%eax),%eax
08307f1b +0x051:  cmp    0x20(%ebp),%eax
08307f1e +0x054:  jne    0830820e <+0x344>
08307f24 +0x05a:  mov    0x8(%ebp),%eax
08307f27 +0x05d:  mov    0xcc(%eax),%eax
08307f2d +0x063:  mov    %eax,%ebx
08307f2f +0x065:  mov    0x8(%ebp),%eax
08307f32 +0x068:  add    $0xc0,%eax
08307f37 +0x06d:  mov    %eax,(%esp)
08307f3a +0x070:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08307f3f +0x075:  cmp    %eax,%ebx
08307f41 +0x077:  setb   %al
08307f44 +0x07a:  test   %al,%al
08307f46 +0x07c:  je     083080e5 <+0x21b>
08307f4c +0x082:  mov    0x8(%ebp),%eax
08307f4f +0x085:  mov    0xcc(%eax),%eax
08307f55 +0x08b:  mov    0x8(%ebp),%edx
08307f58 +0x08e:  add    $0xc0,%edx
08307f5e +0x094:  mov    %eax,0x4(%esp)
08307f62 +0x098:  mov    %edx,(%esp)
08307f65 +0x09b:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08307f6a +0x0a0:  mov    0x4(%eax),%edx
08307f6d +0x0a3:  mov    (%eax),%eax
08307f6f +0x0a5:  mov    %eax,-0x18(%ebp)
08307f72 +0x0a8:  mov    %edx,-0x14(%ebp)
08307f75 +0x0ab:  mov    -0x18(%ebp),%edx
08307f78 +0x0ae:  mov    0x8(%ebp),%eax
08307f7b +0x0b1:  mov    %edx,0xc(%eax)
08307f7e +0x0b4:  mov    -0x14(%ebp),%edx
08307f81 +0x0b7:  mov    0x8(%ebp),%eax
08307f84 +0x0ba:  mov    %edx,0x10(%eax)
08307f87 +0x0bd:  mov    0x8(%ebp),%eax
08307f8a +0x0c0:  mov    0x10(%eax),%edx
08307f8d +0x0c3:  mov    0x8(%ebp),%eax
08307f90 +0x0c6:  mov    0xc(%eax),%eax
08307f93 +0x0c9:  movl   $0x0,0xc(%esp)
08307f9b +0x0d1:  mov    %edx,0x8(%esp)
08307f9f +0x0d5:  mov    %eax,0x4(%esp)
08307fa3 +0x0d9:  mov    0x8(%ebp),%eax
08307fa6 +0x0dc:  mov    %eax,(%esp)
08307fa9 +0x0df:  call   0822cc48 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x22f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x22f2
08307fae +0x0e4:  movzbl 0x1(%eax),%eax
08307fb2 +0x0e8:  test   %al,%al
08307fb4 +0x0ea:  je     0830800c <+0x142>
08307fb6 +0x0ec:  mov    0x8(%ebp),%eax
08307fb9 +0x0ef:  mov    0x10(%eax),%edx
08307fbc +0x0f2:  mov    0x8(%ebp),%eax
08307fbf +0x0f5:  mov    0xc(%eax),%eax
08307fc2 +0x0f8:  movl   $0x0,0xc(%esp)
08307fca +0x100:  mov    %edx,0x8(%esp)
08307fce +0x104:  mov    %eax,0x4(%esp)
08307fd2 +0x108:  mov    0x8(%ebp),%eax
08307fd5 +0x10b:  mov    %eax,(%esp)
08307fd8 +0x10e:  call   0822cc48 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x22f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x22f2
08307fdd +0x113:  movb   $0x0,0x1(%eax)
08307fe1 +0x117:  mov    0x8(%ebp),%eax
08307fe4 +0x11a:  mov    0x10(%eax),%edx
08307fe7 +0x11d:  mov    0x8(%ebp),%eax
08307fea +0x120:  mov    0xc(%eax),%eax
08307fed +0x123:  movl   $0x0,0xc(%esp)
08307ff5 +0x12b:  mov    %edx,0x8(%esp)
08307ff9 +0x12f:  mov    %eax,0x4(%esp)
08307ffd +0x133:  mov    0x8(%ebp),%eax
08308000 +0x136:  mov    %eax,(%esp)
08308003 +0x139:  call   0822cc48 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x22f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x22f2
08308008 +0x13e:  movb   $0x2,0x44(%eax)
0830800c +0x142:  movl   $0xffffffff,-0x1c(%ebp)
08308013 +0x149:  movl   $0xffffffff,-0x20(%ebp)
0830801a +0x150:  lea    -0x20(%ebp),%eax
0830801d +0x153:  mov    %eax,0x8(%esp)
08308021 +0x157:  lea    -0x1c(%ebp),%eax
08308024 +0x15a:  mov    %eax,0x4(%esp)
08308028 +0x15e:  mov    0x8(%ebp),%eax
0830802b +0x161:  mov    %eax,(%esp)
0830802e +0x164:  call   08300da6 <_ZN13CBattle_Field11getCurPosXYERiS0_>  ; CBattle_Field::getCurPosXY(int&, int&)
08308033 +0x169:  mov    0x8(%ebp),%eax
08308036 +0x16c:  mov    0xc(%eax),%edx
08308039 +0x16f:  mov    -0x1c(%ebp),%eax
0830803c +0x172:  cmp    %eax,%edx
0830803e +0x174:  jne    0830807e <+0x1b4>
08308040 +0x176:  mov    0x8(%ebp),%eax
08308043 +0x179:  mov    0x10(%eax),%edx
08308046 +0x17c:  mov    -0x20(%ebp),%eax
08308049 +0x17f:  cmp    %eax,%edx
0830804b +0x181:  jne    0830807e <+0x1b4>
0830804d +0x183:  mov    0x18(%ebp),%eax
08308050 +0x186:  movb   $0x0,(%eax)
08308053 +0x189:  mov    0x8(%ebp),%eax
08308056 +0x18c:  mov    0x10(%eax),%edx
08308059 +0x18f:  mov    0x8(%ebp),%eax
0830805c +0x192:  mov    0xc(%eax),%eax
0830805f +0x195:  movl   $0x0,0xc(%esp)
08308067 +0x19d:  mov    %edx,0x8(%esp)
0830806b +0x1a1:  mov    %eax,0x4(%esp)
0830806f +0x1a5:  mov    0x8(%ebp),%eax
08308072 +0x1a8:  mov    %eax,(%esp)
08308075 +0x1ab:  call   0822cc48 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x22f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x22f2
0830807a +0x1b0:  movb   $0x2,0x44(%eax)
0830807e +0x1b4:  mov    0x10(%ebp),%eax
08308081 +0x1b7:  mov    (%eax),%eax
08308083 +0x1b9:  mov    0x24(%ebp),%edx
08308086 +0x1bc:  mov    %edx,0xc(%esp)
0830808a +0x1c0:  mov    %eax,0x8(%esp)
0830808e +0x1c4:  movl   $0x2,0x4(%esp)
08308096 +0x1cc:  mov    0xc(%ebp),%eax
08308099 +0x1cf:  mov    %eax,(%esp)
0830809c +0x1d2:  call   0834bf56 <_ZNK8CDungeon15ChooseRandomMapEiii>  ; CDungeon::ChooseRandomMap(int, int, int) const
083080a1 +0x1d7:  mov    0x14(%ebp),%edx
083080a4 +0x1da:  mov    %eax,(%edx)
083080a6 +0x1dc:  movl   $0x0,0xc(%esp)
083080ae +0x1e4:  mov    0x20(%ebp),%eax
083080b1 +0x1e7:  mov    %eax,0x8(%esp)
083080b5 +0x1eb:  mov    0x1c(%ebp),%eax
083080b8 +0x1ee:  mov    %eax,0x4(%esp)
083080bc +0x1f2:  mov    0x8(%ebp),%eax
083080bf +0x1f5:  mov    %eax,(%esp)
083080c2 +0x1f8:  call   0822cc48 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x22f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x22f2
083080c7 +0x1fd:  movb   $0x1,0x45(%eax)
083080cb +0x201:  mov    0x8(%ebp),%eax
083080ce +0x204:  mov    0xcc(%eax),%eax
083080d4 +0x20a:  lea    0x1(%eax),%edx
083080d7 +0x20d:  mov    0x8(%ebp),%eax
083080da +0x210:  mov    %edx,0xcc(%eax)
083080e0 +0x216:  jmp    0830820e <+0x344>
083080e5 +0x21b:  movl   $0x0,0xc(%esp)
083080ed +0x223:  mov    0x20(%ebp),%eax
083080f0 +0x226:  mov    %eax,0x8(%esp)
083080f4 +0x22a:  mov    0x1c(%ebp),%eax
083080f7 +0x22d:  mov    %eax,0x4(%esp)
083080fb +0x231:  mov    0x8(%ebp),%eax
083080fe +0x234:  mov    %eax,(%esp)
08308101 +0x237:  call   0822cc48 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x22f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x22f2
08308106 +0x23c:  movzbl 0x45(%eax),%eax
0830810a +0x240:  test   %al,%al
0830810c +0x242:  je     0830820e <+0x344>
08308112 +0x248:  movl   $0x0,0xc(%esp)
0830811a +0x250:  mov    0x20(%ebp),%eax
0830811d +0x253:  mov    %eax,0x8(%esp)
08308121 +0x257:  mov    0x1c(%ebp),%eax
08308124 +0x25a:  mov    %eax,0x4(%esp)
08308128 +0x25e:  mov    0x8(%ebp),%eax
0830812b +0x261:  mov    %eax,(%esp)
0830812e +0x264:  call   0822cc48 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x22f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x22f2
08308133 +0x269:  movb   $0x0,0x45(%eax)
08308137 +0x26d:  jmp    0830820e <+0x344>
0830813c +0x272:  mov    0xc(%ebp),%eax
0830813f +0x275:  movzbl 0x85c(%eax),%eax
08308146 +0x27c:  test   %al,%al
08308148 +0x27e:  je     0830820e <+0x344>
0830814e +0x284:  mov    0x8(%ebp),%eax
08308151 +0x287:  mov    0x74(%eax),%eax
08308154 +0x28a:  add    $0x20,%eax
08308157 +0x28d:  mov    %eax,(%esp)
0830815a +0x290:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0830815f +0x295:  mov    %eax,-0x10(%ebp)
08308162 +0x298:  movl   $0x0,-0xc(%ebp)
08308169 +0x29f:  jmp    083081f4 <+0x32a>
0830816e +0x2a4:  mov    -0xc(%ebp),%eax
08308171 +0x2a7:  mov    0x8(%ebp),%edx
08308174 +0x2aa:  mov    0x74(%edx),%edx
08308177 +0x2ad:  add    $0x20,%edx
0830817a +0x2b0:  mov    %eax,0x4(%esp)
0830817e +0x2b4:  mov    %edx,(%esp)
08308181 +0x2b7:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08308186 +0x2bc:  mov    (%eax),%eax
08308188 +0x2be:  cmp    0x1c(%ebp),%eax
0830818b +0x2c1:  jne    083081b4 <+0x2ea>
0830818d +0x2c3:  mov    -0xc(%ebp),%eax
08308190 +0x2c6:  mov    0x8(%ebp),%edx
08308193 +0x2c9:  mov    0x74(%edx),%edx
08308196 +0x2cc:  add    $0x20,%edx
08308199 +0x2cf:  mov    %eax,0x4(%esp)
0830819d +0x2d3:  mov    %edx,(%esp)
083081a0 +0x2d6:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
083081a5 +0x2db:  mov    0x4(%eax),%eax
083081a8 +0x2de:  cmp    0x20(%ebp),%eax
083081ab +0x2e1:  jne    083081b4 <+0x2ea>
083081ad +0x2e3:  mov    $0x1,%eax
083081b2 +0x2e8:  jmp    083081b9 <+0x2ef>
083081b4 +0x2ea:  mov    $0x0,%eax
083081b9 +0x2ef:  test   %al,%al
083081bb +0x2f1:  je     083081f0 <+0x326>
083081bd +0x2f3:  mov    0x8(%ebp),%eax
083081c0 +0x2f6:  mov    0x1c(%ebp),%edx
083081c3 +0x2f9:  mov    %edx,0xc(%eax)
083081c6 +0x2fc:  mov    0x8(%ebp),%eax
083081c9 +0x2ff:  mov    0x20(%ebp),%edx
083081cc +0x302:  mov    %edx,0x10(%eax)
083081cf +0x305:  mov    0x8(%ebp),%eax
083081d2 +0x308:  mov    0x74(%eax),%eax
083081d5 +0x30b:  mov    0x20(%ebp),%edx
083081d8 +0x30e:  mov    %edx,0x8(%esp)
083081dc +0x312:  mov    0x1c(%ebp),%edx
083081df +0x315:  mov    %edx,0x4(%esp)
083081e3 +0x319:  mov    %eax,(%esp)
083081e6 +0x31c:  call   0822adc2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x46c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x46c
083081eb +0x321:  mov    %eax,0x10(%ebp)
083081ee +0x324:  jmp    0830820e <+0x344>
083081f0 +0x326:  addl   $0x1,-0xc(%ebp)
083081f4 +0x32a:  mov    -0xc(%ebp),%eax
083081f7 +0x32d:  cmp    -0x10(%ebp),%eax
083081fa +0x330:  setl   %al
083081fd +0x333:  test   %al,%al
083081ff +0x335:  jne    0830816e <+0x2a4>
08308205 +0x33b:  jmp    0830820e <+0x344>
08308207 +0x33d:  nop
08308208 +0x33e:  jmp    0830820e <+0x344>
0830820a +0x340:  nop
0830820b +0x341:  jmp    0830820e <+0x344>
0830820d +0x343:  nop
0830820e +0x344:  add    $0x34,%esp
08308211 +0x347:  pop    %ebx
08308212 +0x348:  pop    %ebp
08308213 +0x349:  ret
```

## 反编译 C

```c
// CBattle_Field::choose_random_bossmap_from_dummymaps @ 0x8307eca

/* CBattle_Field::choose_random_bossmap_from_dummymaps(CDungeon const*, GridScript const*, int&,
   bool&, int, int, int) */

void __thiscall
CBattle_Field::choose_random_bossmap_from_dummymaps
          (CBattle_Field *this,CDungeon *param_1,GridScript *param_2,int *param_3,bool *param_4,
          int param_5,int param_6,int param_7)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  uint local_10;
  
  if (((param_1 != (CDungeon *)0x0) && (param_2 != (GridScript *)0x0)) &&
     (*(int *)(this + 0x74) != 0)) {
    cVar3 = CDungeon::IsHaveDummyMap(param_1);
    if (cVar3 == '\0') {
      if (param_1[0x85c] != (CDungeon)0x0) {
        local_14 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                             ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                              (*(int *)(this + 0x74) + 0x20));
        for (local_10 = 0; (int)local_10 < local_14; local_10 = local_10 + 1) {
          piVar7 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                          operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                      *)(*(int *)(this + 0x74) + 0x20),local_10);
          if ((*piVar7 == param_5) &&
             (iVar6 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                 (*(int *)(this + 0x74) + 0x20),local_10),
             *(int *)(iVar6 + 4) == param_6)) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (bVar2) {
            *(int *)(this + 0xc) = param_5;
            *(int *)(this + 0x10) = param_6;
            MazeScript::getGridR(*(MazeScript **)(this + 0x74),param_5,param_6);
            return;
          }
        }
      }
    }
    else if ((*(int *)(this + 0xc) == param_5) && (*(int *)(this + 0x10) == param_6)) {
      uVar1 = *(uint *)(this + 0xcc);
      uVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                         (this + 0xc0));
      if (uVar1 < uVar4) {
        puVar5 = (undefined4 *)
                 std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                           ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                            (this + 0xc0),*(uint *)(this + 0xcc));
        local_18 = puVar5[1];
        local_1c = *puVar5;
        *(undefined4 *)(this + 0xc) = local_1c;
        *(undefined4 *)(this + 0x10) = local_18;
        iVar6 = GetMapInfoFromPos(this,*(int *)(this + 0xc),*(int *)(this + 0x10),false);
        if (*(char *)(iVar6 + 1) != '\0') {
          iVar6 = GetMapInfoFromPos(this,*(int *)(this + 0xc),*(int *)(this + 0x10),false);
          *(undefined1 *)(iVar6 + 1) = 0;
          iVar6 = GetMapInfoFromPos(this,*(int *)(this + 0xc),*(int *)(this + 0x10),false);
          *(undefined1 *)(iVar6 + 0x44) = 2;
        }
        local_20 = -1;
        local_24 = -1;
        getCurPosXY(this,&local_20,&local_24);
        if ((*(int *)(this + 0xc) == local_20) && (*(int *)(this + 0x10) == local_24)) {
          *param_4 = false;
          iVar6 = GetMapInfoFromPos(this,*(int *)(this + 0xc),*(int *)(this + 0x10),false);
          *(undefined1 *)(iVar6 + 0x44) = 2;
        }
        iVar6 = CDungeon::ChooseRandomMap(param_1,2,*(int *)param_2,param_7);
        *param_3 = iVar6;
        iVar6 = GetMapInfoFromPos(this,param_5,param_6,false);
        *(undefined1 *)(iVar6 + 0x45) = 1;
        *(int *)(this + 0xcc) = *(int *)(this + 0xcc) + 1;
      }
      else {
        iVar6 = GetMapInfoFromPos(this,param_5,param_6,false);
        if (*(char *)(iVar6 + 0x45) != '\0') {
          iVar6 = GetMapInfoFromPos(this,param_5,param_6,false);
          *(undefined1 *)(iVar6 + 0x45) = 0;
        }
      }
    }
  }
  return;
}
```

# add_monster_APC_AI_by_rate

`_ZN13CBattle_Field26add_monster_APC_AI_by_rateER11map_monsterRiii`

`CBattle_Field::add_monster_APC_AI_by_rate(map_monster&, int&, int, int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x083020b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083020b6  _ZN13CBattle_Field26add_monster_APC_AI_by_rateER11map_monsterRiii
#           CBattle_Field::add_monster_APC_AI_by_rate(map_monster&, int&, int, int)
# range [0x083020b6, 0x083022a7]
083020b6 +0x000:  push   %ebp
083020b7 +0x001:  mov    %esp,%ebp
083020b9 +0x003:  push   %esi
083020ba +0x004:  push   %ebx
083020bb +0x005:  sub    $0x370,%esp
083020c1 +0x00b:  mov    0x8(%ebp),%eax
083020c4 +0x00e:  mov    0x188(%eax),%eax
083020ca +0x014:  test   %eax,%eax
083020cc +0x016:  je     0830229c <+0x1e6>
083020d2 +0x01c:  movl   $0x40,-0x10(%ebp)
083020d9 +0x023:  mov    0x8(%ebp),%eax
083020dc +0x026:  mov    0xc(%eax),%eax
083020df +0x029:  cmp    0x14(%ebp),%eax
083020e2 +0x02c:  jne    083020f3 <+0x3d>
083020e4 +0x02e:  mov    0x8(%ebp),%eax
083020e7 +0x031:  mov    0x10(%eax),%eax
083020ea +0x034:  cmp    0x18(%ebp),%eax
083020ed +0x037:  je     0830229d <+0x1e7>
083020f3 +0x03d:  mov    0x8(%ebp),%eax
083020f6 +0x040:  mov    0x4(%eax),%eax
083020f9 +0x043:  cmp    0x14(%ebp),%eax
083020fc +0x046:  jne    0830210d <+0x57>
083020fe +0x048:  mov    0x8(%ebp),%eax
08302101 +0x04b:  mov    0x8(%eax),%eax
08302104 +0x04e:  cmp    0x18(%ebp),%eax
08302107 +0x051:  je     0830229d <+0x1e7>
0830210d +0x057:  mov    0x8(%ebp),%eax
08302110 +0x05a:  mov    0x188(%eax),%eax
08302116 +0x060:  mov    %eax,(%esp)
08302119 +0x063:  call   0830e5f6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1db>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1db
0830211e +0x068:  test   %eax,%eax
08302120 +0x06a:  setne  %al
08302123 +0x06d:  test   %al,%al
08302125 +0x06f:  je     0830229d <+0x1e7>
0830212b +0x075:  mov    0x8(%ebp),%eax
0830212e +0x078:  mov    0x188(%eax),%eax
08302134 +0x07e:  mov    %eax,(%esp)
08302137 +0x081:  call   0830e5f6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1db>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1db
0830213c +0x086:  mov    %eax,%ebx
0830213e +0x088:  movl   $0x64,(%esp)
08302145 +0x08f:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0830214a +0x094:  cmp    %eax,%ebx
0830214c +0x096:  setg   %al
0830214f +0x099:  test   %al,%al
08302151 +0x09b:  je     0830229d <+0x1e7>
08302157 +0x0a1:  mov    0x8(%ebp),%eax
0830215a +0x0a4:  mov    0x188(%eax),%eax
08302160 +0x0aa:  mov    %eax,(%esp)
08302163 +0x0ad:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
08302168 +0x0b2:  mov    %eax,%ebx
0830216a +0x0b4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830216f +0x0b9:  mov    0x869c(%eax),%eax
08302175 +0x0bf:  mov    %ebx,0x4(%esp)
08302179 +0x0c3:  mov    %eax,(%esp)
0830217c +0x0c6:  call   0834aa60 <_ZN16CAICharacterList10getByLevelEj>  ; CAICharacterList::getByLevel(unsigned int)
08302181 +0x0cb:  mov    %eax,-0xc(%ebp)
08302184 +0x0ce:  cmpl   $0x0,-0xc(%ebp)
08302188 +0x0d2:  je     0830229d <+0x1e7>
0830218e +0x0d8:  movl   $0x34c,0x8(%esp)
08302196 +0x0e0:  movl   $0x0,0x4(%esp)
0830219e +0x0e8:  mov    0xc(%ebp),%eax
083021a1 +0x0eb:  mov    %eax,(%esp)
083021a4 +0x0ee:  call   0807dcc0 <_init+0x5b8>
083021a9 +0x0f3:  mov    0xc(%ebp),%eax
083021ac +0x0f6:  mov    -0x10(%ebp),%edx
083021af +0x0f9:  mov    %edx,(%eax)
083021b1 +0x0fb:  mov    -0xc(%ebp),%eax
083021b4 +0x0fe:  mov    %eax,(%esp)
083021b7 +0x101:  call   08150850 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x185>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x185
083021bc +0x106:  mov    %eax,%edx
083021be +0x108:  mov    0xc(%ebp),%eax
083021c1 +0x10b:  mov    %edx,0xc(%eax)
083021c4 +0x10e:  mov    0x10(%ebp),%eax
083021c7 +0x111:  mov    (%eax),%eax
083021c9 +0x113:  mov    0xc(%ebp),%edx
083021cc +0x116:  mov    %eax,0x4(%edx)
083021cf +0x119:  lea    0x1(%eax),%edx
083021d2 +0x11c:  mov    0x10(%ebp),%eax
083021d5 +0x11f:  mov    %edx,(%eax)
083021d7 +0x121:  mov    0xc(%ebp),%eax
083021da +0x124:  movb   $0x5,0x8(%eax)
083021de +0x128:  mov    0x8(%ebp),%eax
083021e1 +0x12b:  mov    0x188(%eax),%eax
083021e7 +0x131:  mov    %eax,(%esp)
083021ea +0x134:  call   0826b938 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x206>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x206
083021ef +0x139:  test   %al,%al
083021f1 +0x13b:  setg   %al
083021f4 +0x13e:  test   %al,%al
083021f6 +0x140:  je     0830220b <+0x155>
083021f8 +0x142:  mov    0x8(%ebp),%eax
083021fb +0x145:  mov    0x238(%eax),%eax
08302201 +0x14b:  mov    %eax,%edx
08302203 +0x14d:  mov    0xc(%ebp),%eax
08302206 +0x150:  mov    %dl,0x10(%eax)
08302209 +0x153:  jmp    0830221e <+0x168>
0830220b +0x155:  mov    -0xc(%ebp),%eax
0830220e +0x158:  mov    %eax,(%esp)
08302211 +0x15b:  call   0815085a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18f
08302216 +0x160:  mov    %eax,%edx
08302218 +0x162:  mov    0xc(%ebp),%eax
0830221b +0x165:  mov    %dl,0x10(%eax)
0830221e +0x168:  mov    0xc(%ebp),%eax
08302221 +0x16b:  movl   $0x64,0x2c(%eax)
08302228 +0x172:  mov    0xc(%ebp),%eax
0830222b +0x175:  movb   $0x0,0x11(%eax)
0830222f +0x179:  mov    0xc(%ebp),%eax
08302232 +0x17c:  movb   $0x0,0x12(%eax)
08302236 +0x180:  mov    0xc(%ebp),%eax
08302239 +0x183:  mov    %eax,0x4(%esp)
0830223d +0x187:  lea    -0x35c(%ebp),%eax
08302243 +0x18d:  mov    %eax,(%esp)
08302246 +0x190:  call   08151aea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x141f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x141f
0830224b +0x195:  mov    0x8(%ebp),%eax
0830224e +0x198:  mov    %eax,(%esp)
08302251 +0x19b:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08302256 +0x1a0:  lea    -0x35c(%ebp),%edx
0830225c +0x1a6:  mov    %edx,0x4(%esp)
08302260 +0x1aa:  mov    %eax,(%esp)
08302263 +0x1ad:  call   08151612 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xf47>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xf47
08302268 +0x1b2:  jmp    08302288 <+0x1d2>
0830226a +0x1b4:  mov    %edx,%ebx
0830226c +0x1b6:  mov    %eax,%esi
0830226e +0x1b8:  lea    -0x35c(%ebp),%eax
08302274 +0x1be:  mov    %eax,(%esp)
08302277 +0x1c1:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
0830227c +0x1c6:  mov    %esi,%eax
0830227e +0x1c8:  mov    %ebx,%edx
08302280 +0x1ca:  mov    %eax,(%esp)
08302283 +0x1cd:  call   08ae3750 <_Unwind_Resume>
08302288 +0x1d2:  lea    -0x35c(%ebp),%eax
0830228e +0x1d8:  mov    %eax,(%esp)
08302291 +0x1db:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
08302296 +0x1e0:  addl   $0x1,-0x10(%ebp)
0830229a +0x1e4:  jmp    0830229d <+0x1e7>
0830229c +0x1e6:  nop
0830229d +0x1e7:  add    $0x370,%esp
083022a3 +0x1ed:  pop    %ebx
083022a4 +0x1ee:  pop    %esi
083022a5 +0x1ef:  pop    %ebp
083022a6 +0x1f0:  ret
083022a7 +0x1f1:  nop
```

## 反编译 C

```c
// CBattle_Field::add_monster_APC_AI_by_rate @ 0x83020b6

/* CBattle_Field::add_monster_APC_AI_by_rate(map_monster&, int&, int, int) */

void __thiscall
CBattle_Field::add_monster_APC_AI_by_rate
          (CBattle_Field *this,map_monster *param_1,int *param_2,int param_3,int param_4)

{
  char cVar1;
  map_monster mVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  MapInfo *pMVar7;
  map_monster local_360 [844];
  undefined4 local_14;
  CAICharacter *local_10;
  
  if (((*(int *)(this + 0x188) != 0) &&
      ((local_14 = 0x40, *(int *)(this + 0xc) != param_3 || (*(int *)(this + 0x10) != param_4)))) &&
     ((*(int *)(this + 4) != param_3 || (*(int *)(this + 8) != param_4)))) {
    iVar3 = CDungeon::getAICharacterAppearRate(*(CDungeon **)(this + 0x188));
    if (iVar3 != 0) {
      iVar3 = CDungeon::getAICharacterAppearRate(*(CDungeon **)(this + 0x188));
      iVar4 = get_rand_int(100);
      if (iVar4 < iVar3) {
        uVar5 = CDungeon::get_standard_level(*(CDungeon **)(this + 0x188));
        iVar3 = G_CDataManager();
        local_10 = (CAICharacter *)
                   CAICharacterList::getByLevel(*(CAICharacterList **)(iVar3 + 0x869c),uVar5);
        if (local_10 != (CAICharacter *)0x0) {
          memset(param_1,0,0x34c);
          *(undefined4 *)param_1 = local_14;
          uVar6 = CAICharacter::getIdx(local_10);
          *(undefined4 *)(param_1 + 0xc) = uVar6;
          iVar3 = *param_2;
          *(int *)(param_1 + 4) = iVar3;
          *param_2 = iVar3 + 1;
          param_1[8] = (map_monster)0x5;
          cVar1 = CDungeon::get_dimension_possible(*(CDungeon **)(this + 0x188));
          if (cVar1 < '\x01') {
            mVar2 = (map_monster)CAICharacter::getLevel(local_10);
            param_1[0x10] = mVar2;
          }
          else {
            param_1[0x10] = SUB41(*(undefined4 *)(this + 0x238),0);
          }
          *(undefined4 *)(param_1 + 0x2c) = 100;
          param_1[0x11] = (map_monster)0x0;
          param_1[0x12] = (map_monster)0x0;
          map_monster::map_monster(local_360,param_1);
                    /* try { // try from 08302251 to 08302267 has its CatchHandler @ 0830226a */
          pMVar7 = (MapInfo *)GetCurrentMapInfo(this);
          MapInfo::Add_Mob(pMVar7,local_360);
          map_monster::~map_monster(local_360);
        }
      }
    }
  }
  return;
}
```

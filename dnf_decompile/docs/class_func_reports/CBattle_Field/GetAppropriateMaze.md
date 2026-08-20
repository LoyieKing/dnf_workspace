# GetAppropriateMaze

`_ZNK13CBattle_Field18GetAppropriateMazeE23ENUM_DUNGEON_DIFFICULTY`

`CBattle_Field::GetAppropriateMaze(ENUM_DUNGEON_DIFFICULTY) const`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x082ff128` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ff128  _ZNK13CBattle_Field18GetAppropriateMazeE23ENUM_DUNGEON_DIFFICULTY
#           CBattle_Field::GetAppropriateMaze(ENUM_DUNGEON_DIFFICULTY) const
# range [0x082ff128, 0x082ff3eb]
082ff128 +0x000:  push   %ebp
082ff129 +0x001:  mov    %esp,%ebp
082ff12b +0x003:  push   %esi
082ff12c +0x004:  push   %ebx
082ff12d +0x005:  sub    $0x50,%esp
082ff130 +0x008:  movl   $0x0,-0x1c(%ebp)
082ff137 +0x00f:  jmp    082ff3ad <+0x285>
082ff13c +0x014:  mov    0x8(%ebp),%eax
082ff13f +0x017:  mov    0x188(%eax),%eax
082ff145 +0x01d:  mov    -0x1c(%ebp),%edx
082ff148 +0x020:  mov    %edx,0x4(%esp)
082ff14c +0x024:  mov    %eax,(%esp)
082ff14f +0x027:  call   0830e69e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x283>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x283
082ff154 +0x02c:  mov    %eax,-0x18(%ebp)
082ff157 +0x02f:  cmpl   $0x0,-0x18(%ebp)
082ff15b +0x033:  je     082ff176 <+0x4e>
082ff15d +0x035:  mov    -0x18(%ebp),%eax
082ff160 +0x038:  mov    %eax,(%esp)
082ff163 +0x03b:  call   0830f8cc <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x14b1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x14b1
082ff168 +0x040:  xor    $0x1,%eax
082ff16b +0x043:  test   %al,%al
082ff16d +0x045:  je     082ff176 <+0x4e>
082ff16f +0x047:  mov    $0x1,%eax
082ff174 +0x04c:  jmp    082ff17b <+0x53>
082ff176 +0x04e:  mov    $0x0,%eax
082ff17b +0x053:  test   %al,%al
082ff17d +0x055:  je     082ff3a9 <+0x281>
082ff183 +0x05b:  lea    -0x30(%ebp),%eax
082ff186 +0x05e:  mov    %eax,(%esp)
082ff189 +0x061:  call   0830f910 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x14f5>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x14f5
082ff18e +0x066:  lea    -0x34(%ebp),%eax
082ff191 +0x069:  mov    -0x18(%ebp),%edx
082ff194 +0x06c:  mov    %edx,0x4(%esp)
082ff198 +0x070:  mov    %eax,(%esp)
082ff19b +0x073:  call   0830f982 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1567>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1567
082ff1a0 +0x078:  sub    $0x4,%esp
082ff1a3 +0x07b:  lea    -0x38(%ebp),%eax
082ff1a6 +0x07e:  mov    -0x18(%ebp),%edx
082ff1a9 +0x081:  mov    %edx,0x4(%esp)
082ff1ad +0x085:  mov    %eax,(%esp)
082ff1b0 +0x088:  call   0830f9a6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x158b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x158b
082ff1b5 +0x08d:  sub    $0x4,%esp
082ff1b8 +0x090:  jmp    082ff2d7 <+0x1af>
082ff1bd +0x095:  lea    -0x34(%ebp),%eax
082ff1c0 +0x098:  mov    %eax,(%esp)
082ff1c3 +0x09b:  call   0830fa0e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x15f3>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x15f3
082ff1c8 +0x0a0:  mov    %eax,-0x14(%ebp)
082ff1cb +0x0a3:  mov    0x8(%ebp),%eax
082ff1ce +0x0a6:  mov    0x1b4(%eax),%eax
082ff1d4 +0x0ac:  cmp    $0x1,%eax
082ff1d7 +0x0af:  je     082ff2c5 <+0x19d>
082ff1dd +0x0b5:  mov    0x8(%ebp),%eax
082ff1e0 +0x0b8:  movzbl 0x1b8(%eax),%eax
082ff1e7 +0x0bf:  test   %al,%al
082ff1e9 +0x0c1:  je     082ff1fa <+0xd2>
082ff1eb +0x0c3:  mov    -0x14(%ebp),%eax
082ff1ee +0x0c6:  movzbl 0x70(%eax),%eax
082ff1f2 +0x0ca:  test   %al,%al
082ff1f4 +0x0cc:  jne    082ff2c8 <+0x1a0>
082ff1fa +0x0d2:  mov    0x8(%ebp),%eax
082ff1fd +0x0d5:  mov    (%eax),%eax
082ff1ff +0x0d7:  test   %eax,%eax
082ff201 +0x0d9:  je     082ff22c <+0x104>
082ff203 +0x0db:  mov    -0x14(%ebp),%eax
082ff206 +0x0de:  mov    0x50(%eax),%edx
082ff209 +0x0e1:  mov    0x8(%ebp),%eax
082ff20c +0x0e4:  mov    (%eax),%eax
082ff20e +0x0e6:  mov    -0x1c(%ebp),%ecx
082ff211 +0x0e9:  mov    %ecx,0x8(%esp)
082ff215 +0x0ed:  mov    %edx,0x4(%esp)
082ff219 +0x0f1:  mov    %eax,(%esp)
082ff21c +0x0f4:  call   085b6478 <_ZN6CParty20CheckQuestConnectionEi20ENUM_MAZE_QUEST_TYPE>  ; CParty::CheckQuestConnection(int, ENUM_MAZE_QUEST_TYPE)
082ff221 +0x0f9:  test   %al,%al
082ff223 +0x0fb:  je     082ff22c <+0x104>
082ff225 +0x0fd:  mov    $0x1,%eax
082ff22a +0x102:  jmp    082ff231 <+0x109>
082ff22c +0x104:  mov    $0x0,%eax
082ff231 +0x109:  test   %al,%al
082ff233 +0x10b:  je     082ff2cc <+0x1a4>
082ff239 +0x111:  mov    -0x14(%ebp),%eax
082ff23c +0x114:  mov    0x50(%eax),%ebx
082ff23f +0x117:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082ff244 +0x11c:  mov    %ebx,0x4(%esp)
082ff248 +0x120:  mov    %eax,(%esp)
082ff24b +0x123:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
082ff250 +0x128:  mov    %eax,-0x10(%ebp)
082ff253 +0x12b:  cmpl   $0x0,-0x10(%ebp)
082ff257 +0x12f:  je     082ff27e <+0x156>
082ff259 +0x131:  mov    -0x10(%ebp),%eax
082ff25c +0x134:  movzbl 0x120(%eax),%eax
082ff263 +0x13b:  cmp    $0x1,%al
082ff265 +0x13d:  jne    082ff27e <+0x156>
082ff267 +0x13f:  mov    0x8(%ebp),%eax
082ff26a +0x142:  mov    (%eax),%eax
082ff26c +0x144:  mov    %eax,(%esp)
082ff26f +0x147:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
082ff274 +0x14c:  cmp    $0x1,%eax
082ff277 +0x14f:  setg   %al
082ff27a +0x152:  test   %al,%al
082ff27c +0x154:  jne    082ff2cb <+0x1a3>
082ff27e +0x156:  cmpl   $0x0,-0x1c(%ebp)
082ff282 +0x15a:  jne    082ff2ab <+0x183>
082ff284 +0x15c:  mov    0xc(%ebp),%edx
082ff287 +0x15f:  mov    -0x14(%ebp),%eax
082ff28a +0x162:  mov    0x54(%eax),%eax
082ff28d +0x165:  cmp    %eax,%edx
082ff28f +0x167:  jl     082ff2cc <+0x1a4>
082ff291 +0x169:  mov    -0x14(%ebp),%eax
082ff294 +0x16c:  mov    %eax,-0x24(%ebp)
082ff297 +0x16f:  lea    -0x24(%ebp),%eax
082ff29a +0x172:  mov    %eax,0x4(%esp)
082ff29e +0x176:  lea    -0x30(%ebp),%eax
082ff2a1 +0x179:  mov    %eax,(%esp)
082ff2a4 +0x17c:  call   0830fa18 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x15fd>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x15fd
082ff2a9 +0x181:  jmp    082ff2cc <+0x1a4>
082ff2ab +0x183:  mov    -0x14(%ebp),%eax
082ff2ae +0x186:  mov    %eax,-0x20(%ebp)
082ff2b1 +0x189:  lea    -0x20(%ebp),%eax
082ff2b4 +0x18c:  mov    %eax,0x4(%esp)
082ff2b8 +0x190:  lea    -0x30(%ebp),%eax
082ff2bb +0x193:  mov    %eax,(%esp)
082ff2be +0x196:  call   0830fa18 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x15fd>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x15fd
082ff2c3 +0x19b:  jmp    082ff2cc <+0x1a4>
082ff2c5 +0x19d:  nop
082ff2c6 +0x19e:  jmp    082ff2cc <+0x1a4>
082ff2c8 +0x1a0:  nop
082ff2c9 +0x1a1:  jmp    082ff2cc <+0x1a4>
082ff2cb +0x1a3:  nop
082ff2cc +0x1a4:  lea    -0x34(%ebp),%eax
082ff2cf +0x1a7:  mov    %eax,(%esp)
082ff2d2 +0x1aa:  call   0830f9f8 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x15dd>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x15dd
082ff2d7 +0x1af:  lea    -0x38(%ebp),%eax
082ff2da +0x1b2:  mov    %eax,0x4(%esp)
082ff2de +0x1b6:  lea    -0x34(%ebp),%eax
082ff2e1 +0x1b9:  mov    %eax,(%esp)
082ff2e4 +0x1bc:  call   0830f9cc <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x15b1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x15b1
082ff2e9 +0x1c1:  test   %al,%al
082ff2eb +0x1c3:  jne    082ff1bd <+0x95>
082ff2f1 +0x1c9:  lea    -0x30(%ebp),%eax
082ff2f4 +0x1cc:  mov    %eax,(%esp)
082ff2f7 +0x1cf:  call   0830fa42 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1627>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1627
082ff2fc +0x1d4:  cmp    $0x1,%eax
082ff2ff +0x1d7:  sete   %al
082ff302 +0x1da:  test   %al,%al
082ff304 +0x1dc:  je     082ff322 <+0x1fa>
082ff306 +0x1de:  movl   $0x0,0x4(%esp)
082ff30e +0x1e6:  lea    -0x30(%ebp),%eax
082ff311 +0x1e9:  mov    %eax,(%esp)
082ff314 +0x1ec:  call   0830fa5e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1643>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1643
082ff319 +0x1f1:  mov    (%eax),%esi
082ff31b +0x1f3:  mov    $0x0,%ebx
082ff320 +0x1f8:  jmp    082ff39a <+0x272>
082ff322 +0x1fa:  lea    -0x30(%ebp),%eax
082ff325 +0x1fd:  mov    %eax,(%esp)
082ff328 +0x200:  call   0830fa42 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1627>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1627
082ff32d +0x205:  cmp    $0x1,%eax
082ff330 +0x208:  seta   %al
082ff333 +0x20b:  test   %al,%al
082ff335 +0x20d:  je     082ff378 <+0x250>
082ff337 +0x20f:  call   0807dca0 <_init+0x598>
082ff33c +0x214:  mov    %eax,%ebx
082ff33e +0x216:  lea    -0x30(%ebp),%eax
082ff341 +0x219:  mov    %eax,(%esp)
082ff344 +0x21c:  call   0830fa42 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1627>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1627
082ff349 +0x221:  mov    %eax,-0x3c(%ebp)
082ff34c +0x224:  mov    %ebx,%eax
082ff34e +0x226:  mov    $0x0,%edx
082ff353 +0x22b:  divl   -0x3c(%ebp)
082ff356 +0x22e:  mov    %edx,%ecx
082ff358 +0x230:  mov    %ecx,%eax
082ff35a +0x232:  mov    %eax,-0xc(%ebp)
082ff35d +0x235:  mov    -0xc(%ebp),%eax
082ff360 +0x238:  mov    %eax,0x4(%esp)
082ff364 +0x23c:  lea    -0x30(%ebp),%eax
082ff367 +0x23f:  mov    %eax,(%esp)
082ff36a +0x242:  call   0830fa5e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1643>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1643
082ff36f +0x247:  mov    (%eax),%esi
082ff371 +0x249:  mov    $0x0,%ebx
082ff376 +0x24e:  jmp    082ff39a <+0x272>
082ff378 +0x250:  mov    $0x1,%ebx
082ff37d +0x255:  jmp    082ff39a <+0x272>
082ff37f +0x257:  mov    %edx,%ebx
082ff381 +0x259:  mov    %eax,%esi
082ff383 +0x25b:  lea    -0x30(%ebp),%eax
082ff386 +0x25e:  mov    %eax,(%esp)
082ff389 +0x261:  call   0830f924 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1509>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1509
082ff38e +0x266:  mov    %esi,%eax
082ff390 +0x268:  mov    %ebx,%edx
082ff392 +0x26a:  mov    %eax,(%esp)
082ff395 +0x26d:  call   08ae3750 <_Unwind_Resume>
082ff39a +0x272:  lea    -0x30(%ebp),%eax
082ff39d +0x275:  mov    %eax,(%esp)
082ff3a0 +0x278:  call   0830f924 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1509>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1509
082ff3a5 +0x27d:  test   %ebx,%ebx
082ff3a7 +0x27f:  je     082ff3e0 <+0x2b8>
082ff3a9 +0x281:  addl   $0x1,-0x1c(%ebp)
082ff3ad +0x285:  cmpl   $0x1,-0x1c(%ebp)
082ff3b1 +0x289:  setle  %al
082ff3b4 +0x28c:  test   %al,%al
082ff3b6 +0x28e:  jne    082ff13c <+0x14>
082ff3bc +0x294:  mov    0x8(%ebp),%eax
082ff3bf +0x297:  mov    (%eax),%eax
082ff3c1 +0x299:  mov    %eax,(%esp)
082ff3c4 +0x29c:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
082ff3c9 +0x2a1:  mov    0x8(%ebp),%edx
082ff3cc +0x2a4:  mov    0x188(%edx),%edx
082ff3d2 +0x2aa:  mov    %eax,0x4(%esp)
082ff3d6 +0x2ae:  mov    %edx,(%esp)
082ff3d9 +0x2b1:  call   0834d06c <_ZNK8CDungeon23GetRandMazebyPartyCountEi>  ; CDungeon::GetRandMazebyPartyCount(int) const
082ff3de +0x2b6:  mov    %eax,%esi
082ff3e0 +0x2b8:  mov    %esi,%eax
082ff3e2 +0x2ba:  lea    -0x8(%ebp),%esp
082ff3e5 +0x2bd:  add    $0x0,%esp
082ff3e8 +0x2c0:  pop    %ebx
082ff3e9 +0x2c1:  pop    %esi
082ff3ea +0x2c2:  pop    %ebp
082ff3eb +0x2c3:  ret
```

## 反编译 C

```c
// CBattle_Field::GetAppropriateMaze @ 0x82ff128

/* CBattle_Field::GetAppropriateMaze(ENUM_DUNGEON_DIFFICULTY) const */

undefined4 __thiscall CBattle_Field::GetAppropriateMaze(CBattle_Field *this,int param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  __normal_iterator local_3c [4];
  __normal_iterator<MazeScript*,std::vector<MazeScript,std::allocator<MazeScript>>> local_38 [4];
  vector<MazeScript*,std::allocator<MazeScript*>> local_34 [12];
  MazeScript *local_28;
  MazeScript *local_24;
  int local_20;
  int local_1c;
  MazeScript *local_18;
  int local_14;
  uint local_10;
  
  local_20 = 0;
  do {
    if (1 < local_20) {
      iVar5 = CParty::get_member_count(*(CParty **)this);
      uVar6 = CDungeon::GetRandMazebyPartyCount(*(CDungeon **)(this + 0x188),iVar5);
      return uVar6;
    }
    local_1c = CDungeon::GetQuestMazeScriptVector(*(CDungeon **)(this + 0x188),local_20);
    if ((local_1c == 0) ||
       (cVar1 = std::vector<MazeScript,std::allocator<MazeScript>>::empty(), cVar1 == '\x01')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      std::vector<MazeScript*,std::allocator<MazeScript*>>::vector(local_34);
                    /* try { // try from 082ff19b to 082ff2e8 has its CatchHandler @ 082ff37f */
      std::vector<MazeScript,std::allocator<MazeScript>>::begin();
      std::vector<MazeScript,std::allocator<MazeScript>>::end();
      while (bVar2 = __gnu_cxx::operator!=(local_38,local_3c), bVar2) {
        local_18 = (MazeScript *)
                   __gnu_cxx::
                   __normal_iterator<MazeScript*,std::vector<MazeScript,std::allocator<MazeScript>>>
                   ::operator*(local_38);
        if ((*(int *)(this + 0x1b4) != 1) &&
           ((this[0x1b8] == (CBattle_Field)0x0 || (local_18[0x70] == (MazeScript)0x0)))) {
          if ((*(int *)this == 0) ||
             (cVar1 = CParty::CheckQuestConnection
                                (*(CParty **)this,*(undefined4 *)(local_18 + 0x50),local_20),
             cVar1 == '\0')) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            iVar5 = G_CDataManager();
            local_14 = CDataManager::find_quest(iVar5);
            if (((local_14 == 0) || (*(char *)(local_14 + 0x120) != '\x01')) ||
               (iVar5 = CParty::get_member_count(*(CParty **)this), iVar5 < 2)) {
              if (local_20 == 0) {
                if (*(int *)(local_18 + 0x54) <= param_2) {
                  local_28 = local_18;
                  std::vector<MazeScript*,std::allocator<MazeScript*>>::push_back
                            (local_34,&local_28);
                }
              }
              else {
                local_24 = local_18;
                std::vector<MazeScript*,std::allocator<MazeScript*>>::push_back(local_34,&local_24);
              }
            }
          }
        }
        __gnu_cxx::__normal_iterator<MazeScript*,std::vector<MazeScript,std::allocator<MazeScript>>>
        ::operator++(local_38);
      }
      iVar5 = std::vector<MazeScript*,std::allocator<MazeScript*>>::size(local_34);
      if (iVar5 == 1) {
        puVar3 = (undefined4 *)
                 std::vector<MazeScript*,std::allocator<MazeScript*>>::operator[](local_34,0);
        unaff_ESI = *puVar3;
        bVar2 = false;
      }
      else {
        uVar4 = std::vector<MazeScript*,std::allocator<MazeScript*>>::size(local_34);
        if (uVar4 < 2) {
          bVar2 = true;
        }
        else {
          uVar4 = rand();
          local_10 = std::vector<MazeScript*,std::allocator<MazeScript*>>::size(local_34);
          local_10 = uVar4 % local_10;
          puVar3 = (undefined4 *)
                   std::vector<MazeScript*,std::allocator<MazeScript*>>::operator[]
                             (local_34,local_10);
          unaff_ESI = *puVar3;
          bVar2 = false;
        }
      }
      std::vector<MazeScript*,std::allocator<MazeScript*>>::~vector(local_34);
      if (!bVar2) {
        return unaff_ESI;
      }
    }
    local_20 = local_20 + 1;
  } while( true );
}
```

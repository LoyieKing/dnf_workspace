# check_random_appear_hell_dungeon

`_ZN13CBattle_Field32check_random_appear_hell_dungeonEPK8CDungeon17ENUM_DUNGEON_MODE17ENUM_DUNGEON_TYPERb`

`CBattle_Field::check_random_appear_hell_dungeon(CDungeon const*, ENUM_DUNGEON_MODE, ENUM_DUNGEON_TYPE, bool&)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830a862` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830a862  _ZN13CBattle_Field32check_random_appear_hell_dungeonEPK8CDungeon17ENUM_DUNGEON_MODE17ENUM_DUNGEON_TYPERb
#           CBattle_Field::check_random_appear_hell_dungeon(CDungeon const*, ENUM_DUNGEON_MODE, ENUM_DUNGEON_TYPE, bool&)
# range [0x0830a862, 0x0830aa45]
0830a862 +0x000:  push   %ebp
0830a863 +0x001:  mov    %esp,%ebp
0830a865 +0x003:  sub    $0x38,%esp
0830a868 +0x006:  mov    0x8(%ebp),%eax
0830a86b +0x009:  mov    (%eax),%eax
0830a86d +0x00b:  mov    0x1868(%eax),%eax
0830a873 +0x011:  test   %eax,%eax
0830a875 +0x013:  je     0830aa43 <+0x1e1>
0830a87b +0x019:  call   0830ed07 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x8ec>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x8ec
0830a880 +0x01e:  test   %al,%al
0830a882 +0x020:  je     0830aa26 <+0x1c4>
0830a888 +0x026:  mov    0x8(%ebp),%eax
0830a88b +0x029:  mov    (%eax),%eax
0830a88d +0x02b:  mov    0x1868(%eax),%eax
0830a893 +0x031:  test   %eax,%eax
0830a895 +0x033:  je     0830aa26 <+0x1c4>
0830a89b +0x039:  mov    0x8(%ebp),%eax
0830a89e +0x03c:  mov    (%eax),%eax
0830a8a0 +0x03e:  mov    0x1868(%eax),%eax
0830a8a6 +0x044:  mov    %eax,(%esp)
0830a8a9 +0x047:  call   0830e6ba <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x29f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x29f
0830a8ae +0x04c:  test   %al,%al
0830a8b0 +0x04e:  je     0830aa26 <+0x1c4>
0830a8b6 +0x054:  movl   $0x1,-0x1c(%ebp)
0830a8bd +0x05b:  movl   $0xc8,-0x18(%ebp)
0830a8c4 +0x062:  movl   $0x0,-0x14(%ebp)
0830a8cb +0x069:  movl   $0x0,-0x10(%ebp)
0830a8d2 +0x070:  movl   $0x0,-0xc(%ebp)
0830a8d9 +0x077:  jmp    0830a97c <+0x11a>
0830a8de +0x07c:  mov    0x8(%ebp),%eax
0830a8e1 +0x07f:  mov    (%eax),%eax
0830a8e3 +0x081:  mov    -0xc(%ebp),%edx
0830a8e6 +0x084:  mov    %edx,0x4(%esp)
0830a8ea +0x088:  mov    %eax,(%esp)
0830a8ed +0x08b:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
0830a8f2 +0x090:  xor    $0x1,%eax
0830a8f5 +0x093:  test   %al,%al
0830a8f7 +0x095:  jne    0830a977 <+0x115>
0830a8f9 +0x097:  mov    0x8(%ebp),%eax
0830a8fc +0x09a:  mov    (%eax),%eax
0830a8fe +0x09c:  mov    -0xc(%ebp),%edx
0830a901 +0x09f:  mov    %edx,0x4(%esp)
0830a905 +0x0a3:  mov    %eax,(%esp)
0830a908 +0x0a6:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
0830a90d +0x0ab:  mov    %eax,(%esp)
0830a910 +0x0ae:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0830a915 +0x0b3:  test   %eax,%eax
0830a917 +0x0b5:  setne  %al
0830a91a +0x0b8:  test   %al,%al
0830a91c +0x0ba:  je     0830a944 <+0xe2>
0830a91e +0x0bc:  mov    0x8(%ebp),%eax
0830a921 +0x0bf:  mov    (%eax),%eax
0830a923 +0x0c1:  mov    -0xc(%ebp),%edx
0830a926 +0x0c4:  mov    %edx,0x4(%esp)
0830a92a +0x0c8:  mov    %eax,(%esp)
0830a92d +0x0cb:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
0830a932 +0x0d0:  mov    %eax,(%esp)
0830a935 +0x0d3:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0830a93a +0x0d8:  movzwl 0x27(%eax),%eax
0830a93e +0x0dc:  cwtl
0830a93f +0x0dd:  mov    %eax,-0x14(%ebp)
0830a942 +0x0e0:  jmp    0830a94b <+0xe9>
0830a944 +0x0e2:  movl   $0x1,-0x14(%ebp)
0830a94b +0x0e9:  mov    -0x1c(%ebp),%eax
0830a94e +0x0ec:  cmp    -0x14(%ebp),%eax
0830a951 +0x0ef:  jle    0830a958 <+0xf6>
0830a953 +0x0f1:  mov    -0x1c(%ebp),%eax
0830a956 +0x0f4:  jmp    0830a95b <+0xf9>
0830a958 +0x0f6:  mov    -0x14(%ebp),%eax
0830a95b +0x0f9:  mov    %eax,-0x1c(%ebp)
0830a95e +0x0fc:  mov    -0x18(%ebp),%eax
0830a961 +0x0ff:  cmp    -0x14(%ebp),%eax
0830a964 +0x102:  jge    0830a96b <+0x109>
0830a966 +0x104:  mov    -0x18(%ebp),%eax
0830a969 +0x107:  jmp    0830a96e <+0x10c>
0830a96b +0x109:  mov    -0x14(%ebp),%eax
0830a96e +0x10c:  mov    %eax,-0x18(%ebp)
0830a971 +0x10f:  addl   $0x1,-0x10(%ebp)
0830a975 +0x113:  jmp    0830a978 <+0x116>
0830a977 +0x115:  nop
0830a978 +0x116:  addl   $0x1,-0xc(%ebp)
0830a97c +0x11a:  cmpl   $0x3,-0xc(%ebp)
0830a980 +0x11e:  setle  %al
0830a983 +0x121:  test   %al,%al
0830a985 +0x123:  jne    0830a8de <+0x7c>
0830a98b +0x129:  mov    0xc(%ebp),%eax
0830a98e +0x12c:  mov    %eax,(%esp)
0830a991 +0x12f:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
0830a996 +0x134:  mov    -0x1c(%ebp),%edx
0830a999 +0x137:  mov    %edx,%ecx
0830a99b +0x139:  sub    %eax,%ecx
0830a99d +0x13b:  mov    %ecx,%eax
0830a99f +0x13d:  cmp    $0x5,%eax
0830a9a2 +0x140:  setle  %al
0830a9a5 +0x143:  test   %al,%al
0830a9a7 +0x145:  je     0830a9ce <+0x16c>
0830a9a9 +0x147:  cmpl   $0x1,-0x10(%ebp)
0830a9ad +0x14b:  jle    0830a9c8 <+0x166>
0830a9af +0x14d:  mov    -0x18(%ebp),%eax
0830a9b2 +0x150:  mov    -0x1c(%ebp),%edx
0830a9b5 +0x153:  mov    %edx,%ecx
0830a9b7 +0x155:  sub    %eax,%ecx
0830a9b9 +0x157:  mov    %ecx,%eax
0830a9bb +0x159:  cmp    $0x8,%eax
0830a9be +0x15c:  jg     0830a9ce <+0x16c>
0830a9c0 +0x15e:  mov    0x18(%ebp),%eax
0830a9c3 +0x161:  movb   $0x1,(%eax)
0830a9c6 +0x164:  jmp    0830a9ce <+0x16c>
0830a9c8 +0x166:  mov    0x18(%ebp),%eax
0830a9cb +0x169:  movb   $0x1,(%eax)
0830a9ce +0x16c:  mov    -0x18(%ebp),%eax
0830a9d1 +0x16f:  mov    -0x1c(%ebp),%edx
0830a9d4 +0x172:  mov    %edx,%ecx
0830a9d6 +0x174:  sub    %eax,%ecx
0830a9d8 +0x176:  mov    %ecx,%eax
0830a9da +0x178:  cmp    $0x8,%eax
0830a9dd +0x17b:  jle    0830a9e5 <+0x183>
0830a9df +0x17d:  cmpl   $0x1,-0x10(%ebp)
0830a9e3 +0x181:  jg     0830aa17 <+0x1b5>
0830a9e5 +0x183:  mov    0x8(%ebp),%eax
0830a9e8 +0x186:  mov    (%eax),%eax
0830a9ea +0x188:  movzbl 0x1864(%eax),%eax
0830a9f1 +0x18f:  xor    $0x1,%eax
0830a9f4 +0x192:  test   %al,%al
0830a9f6 +0x194:  je     0830a9fe <+0x19c>
0830a9f8 +0x196:  cmpl   $0x1,0x14(%ebp)
0830a9fc +0x19a:  je     0830aa17 <+0x1b5>
0830a9fe +0x19c:  mov    0x8(%ebp),%eax
0830aa01 +0x19f:  mov    (%eax),%eax
0830aa03 +0x1a1:  movzbl 0x1865(%eax),%eax
0830aa0a +0x1a8:  xor    $0x1,%eax
0830aa0d +0x1ab:  test   %al,%al
0830aa0f +0x1ad:  je     0830aa26 <+0x1c4>
0830aa11 +0x1af:  cmpl   $0x1,0x14(%ebp)
0830aa15 +0x1b3:  jne    0830aa26 <+0x1c4>
0830aa17 +0x1b5:  mov    0x8(%ebp),%eax
0830aa1a +0x1b8:  mov    (%eax),%eax
0830aa1c +0x1ba:  movl   $0x0,0x1868(%eax)
0830aa26 +0x1c4:  cmpl   $0x1,0x10(%ebp)
0830aa2a +0x1c8:  jne    0830aa44 <+0x1e2>
0830aa2c +0x1ca:  mov    0x8(%ebp),%eax
0830aa2f +0x1cd:  mov    (%eax),%eax
0830aa31 +0x1cf:  movl   $0x0,0x1868(%eax)
0830aa3b +0x1d9:  mov    0x18(%ebp),%eax
0830aa3e +0x1dc:  movb   $0x0,(%eax)
0830aa41 +0x1df:  jmp    0830aa44 <+0x1e2>
0830aa43 +0x1e1:  nop
0830aa44 +0x1e2:  leave
0830aa45 +0x1e3:  ret
```

## 反编译 C

```c
// CBattle_Field::check_random_appear_hell_dungeon @ 0x830a862

/* CBattle_Field::check_random_appear_hell_dungeon(CDungeon const*, ENUM_DUNGEON_MODE,
   ENUM_DUNGEON_TYPE, bool&) */

void __thiscall
CBattle_Field::check_random_appear_hell_dungeon
          (CBattle_Field *this,CDungeon *param_1,int param_3,int param_4,undefined1 *param_5)

{
  char cVar1;
  CUserCharacInfo *pCVar2;
  int iVar3;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (*(int *)(*(int *)this + 0x1868) != 0) {
    cVar1 = IsEnableHellDungeon();
    if (((cVar1 != '\0') && (*(int *)(*(int *)this + 0x1868) != 0)) &&
       (cVar1 = CWorldMap::IsInHellDungeon(*(CWorldMap **)(*(int *)this + 0x1868)), cVar1 != '\0'))
    {
      local_20 = 1;
      local_1c = 200;
      local_14 = 0;
      for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
        cVar1 = CParty::checkValidUser(*(CParty **)this,local_10);
        if (cVar1 == '\x01') {
          pCVar2 = (CUserCharacInfo *)CParty::get_user(*(CParty **)this,local_10);
          iVar3 = CUserCharacInfo::getCurCharacR(pCVar2);
          if (iVar3 == 0) {
            local_18 = 1;
          }
          else {
            pCVar2 = (CUserCharacInfo *)CParty::get_user(*(CParty **)this,local_10);
            iVar3 = CUserCharacInfo::getCurCharacR(pCVar2);
            local_18 = (int)*(short *)(iVar3 + 0x27);
          }
          iVar3 = local_18;
          if (local_18 < local_20) {
            iVar3 = local_20;
          }
          if (local_1c < local_18) {
            local_18 = local_1c;
          }
          local_14 = local_14 + 1;
          local_20 = iVar3;
          local_1c = local_18;
        }
      }
      iVar3 = CDungeon::get_standard_level(param_1);
      if (local_20 - iVar3 < 6) {
        if (local_14 < 2) {
          *param_5 = 1;
        }
        else if (local_20 - local_1c < 9) {
          *param_5 = 1;
        }
      }
      if ((((8 < local_20 - local_1c) && (1 < local_14)) ||
          ((*(char *)(*(int *)this + 0x1864) != '\x01' && (param_4 == 1)))) ||
         ((*(char *)(*(int *)this + 0x1865) != '\x01' && (param_4 == 1)))) {
        *(undefined4 *)(*(int *)this + 0x1868) = 0;
      }
    }
    if (param_3 == 1) {
      *(undefined4 *)(*(int *)this + 0x1868) = 0;
      *param_5 = 0;
    }
  }
  return;
}
```

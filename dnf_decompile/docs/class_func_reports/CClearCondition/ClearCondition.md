# ClearCondition

`_ZN15CClearCondition14ClearConditionE33ENUM_DUNGEON_CLEAR_CONDITION_TYPEi`

`CClearCondition::ClearCondition(ENUM_DUNGEON_CLEAR_CONDITION_TYPE, int)`

| 类 | 地址 |
|---|---|
| `CClearCondition` | `0x082fefce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082fefce  _ZN15CClearCondition14ClearConditionE33ENUM_DUNGEON_CLEAR_CONDITION_TYPEi
#           CClearCondition::ClearCondition(ENUM_DUNGEON_CLEAR_CONDITION_TYPE, int)
# range [0x082fefce, 0x082ff127]
082fefce +0x000:  push   %ebp
082fefcf +0x001:  mov    %esp,%ebp
082fefd1 +0x003:  sub    $0x38,%esp
082fefd4 +0x006:  mov    0xc(%ebp),%eax
082fefd7 +0x009:  test   %eax,%eax
082fefd9 +0x00b:  js     082fefe3 <+0x15>
082fefdb +0x00d:  mov    0xc(%ebp),%eax
082fefde +0x010:  cmp    $0x4,%eax
082fefe1 +0x013:  jle    082fefed <+0x1f>
082fefe3 +0x015:  mov    $0x0,%eax
082fefe8 +0x01a:  jmp    082ff126 <+0x158>
082fefed +0x01f:  mov    0x8(%ebp),%eax
082feff0 +0x022:  mov    0x14(%eax),%edx
082feff3 +0x025:  lea    -0x14(%ebp),%eax
082feff6 +0x028:  mov    %edx,0x4(%esp)
082feffa +0x02c:  mov    %eax,(%esp)
082feffd +0x02f:  call   0830f836 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x141b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x141b
082ff002 +0x034:  sub    $0x4,%esp
082ff005 +0x037:  mov    0x8(%ebp),%eax
082ff008 +0x03a:  mov    0x14(%eax),%edx
082ff00b +0x03d:  lea    -0x18(%ebp),%eax
082ff00e +0x040:  mov    %edx,0x4(%esp)
082ff012 +0x044:  mov    %eax,(%esp)
082ff015 +0x047:  call   0830f85a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x143f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x143f
082ff01a +0x04c:  sub    $0x4,%esp
082ff01d +0x04f:  mov    0x8(%ebp),%eax
082ff020 +0x052:  lea    0x8(%eax),%edx
082ff023 +0x055:  lea    -0x1c(%ebp),%eax
082ff026 +0x058:  mov    %edx,0x4(%esp)
082ff02a +0x05c:  mov    %eax,(%esp)
082ff02d +0x05f:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
082ff032 +0x064:  sub    $0x4,%esp
082ff035 +0x067:  mov    0x8(%ebp),%eax
082ff038 +0x06a:  lea    0x8(%eax),%edx
082ff03b +0x06d:  lea    -0x20(%ebp),%eax
082ff03e +0x070:  mov    %edx,0x4(%esp)
082ff042 +0x074:  mov    %eax,(%esp)
082ff045 +0x077:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
082ff04a +0x07c:  sub    $0x4,%esp
082ff04d +0x07f:  jmp    082ff0cb <+0xfd>
082ff04f +0x081:  lea    -0x14(%ebp),%eax
082ff052 +0x084:  mov    %eax,(%esp)
082ff055 +0x087:  call   0830f8c2 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x14a7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x14a7
082ff05a +0x08c:  mov    %eax,-0x10(%ebp)
082ff05d +0x08f:  lea    -0x1c(%ebp),%eax
082ff060 +0x092:  mov    %eax,(%esp)
082ff063 +0x095:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
082ff068 +0x09a:  mov    %eax,-0xc(%ebp)
082ff06b +0x09d:  mov    -0x10(%ebp),%eax
082ff06e +0x0a0:  mov    (%eax),%eax
082ff070 +0x0a2:  cmp    0xc(%ebp),%eax
082ff073 +0x0a5:  jne    082ff0b5 <+0xe7>
082ff075 +0x0a7:  mov    -0x10(%ebp),%eax
082ff078 +0x0aa:  mov    0x4(%eax),%eax
082ff07b +0x0ad:  cmp    0x10(%ebp),%eax
082ff07e +0x0b0:  jne    082ff0b5 <+0xe7>
082ff080 +0x0b2:  mov    -0x10(%ebp),%eax
082ff083 +0x0b5:  mov    0x8(%eax),%edx
082ff086 +0x0b8:  mov    -0xc(%ebp),%eax
082ff089 +0x0bb:  mov    (%eax),%eax
082ff08b +0x0bd:  cmp    %eax,%edx
082ff08d +0x0bf:  jg     082ff099 <+0xcb>
082ff08f +0x0c1:  mov    $0x0,%eax
082ff094 +0x0c6:  jmp    082ff126 <+0x158>
082ff099 +0x0cb:  mov    -0xc(%ebp),%eax
082ff09c +0x0ce:  mov    (%eax),%eax
082ff09e +0x0d0:  lea    0x1(%eax),%edx
082ff0a1 +0x0d3:  mov    -0xc(%ebp),%eax
082ff0a4 +0x0d6:  mov    %edx,(%eax)
082ff0a6 +0x0d8:  mov    0x8(%ebp),%eax
082ff0a9 +0x0db:  mov    0x4(%eax),%eax
082ff0ac +0x0de:  lea    0x1(%eax),%edx
082ff0af +0x0e1:  mov    0x8(%ebp),%eax
082ff0b2 +0x0e4:  mov    %edx,0x4(%eax)
082ff0b5 +0x0e7:  lea    -0x14(%ebp),%eax
082ff0b8 +0x0ea:  mov    %eax,(%esp)
082ff0bb +0x0ed:  call   0830f8ac <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1491>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1491
082ff0c0 +0x0f2:  lea    -0x1c(%ebp),%eax
082ff0c3 +0x0f5:  mov    %eax,(%esp)
082ff0c6 +0x0f8:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
082ff0cb +0x0fd:  lea    -0x18(%ebp),%eax
082ff0ce +0x100:  mov    %eax,0x4(%esp)
082ff0d2 +0x104:  lea    -0x14(%ebp),%eax
082ff0d5 +0x107:  mov    %eax,(%esp)
082ff0d8 +0x10a:  call   0830f880 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1465>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1465
082ff0dd +0x10f:  test   %al,%al
082ff0df +0x111:  je     082ff0fe <+0x130>
082ff0e1 +0x113:  lea    -0x20(%ebp),%eax
082ff0e4 +0x116:  mov    %eax,0x4(%esp)
082ff0e8 +0x11a:  lea    -0x1c(%ebp),%eax
082ff0eb +0x11d:  mov    %eax,(%esp)
082ff0ee +0x120:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
082ff0f3 +0x125:  test   %al,%al
082ff0f5 +0x127:  je     082ff0fe <+0x130>
082ff0f7 +0x129:  mov    $0x1,%eax
082ff0fc +0x12e:  jmp    082ff103 <+0x135>
082ff0fe +0x130:  mov    $0x0,%eax
082ff103 +0x135:  test   %al,%al
082ff105 +0x137:  jne    082ff04f <+0x81>
082ff10b +0x13d:  mov    0x8(%ebp),%eax
082ff10e +0x140:  mov    (%eax),%edx
082ff110 +0x142:  mov    0x8(%ebp),%eax
082ff113 +0x145:  mov    0x4(%eax),%eax
082ff116 +0x148:  cmp    %eax,%edx
082ff118 +0x14a:  jg     082ff121 <+0x153>
082ff11a +0x14c:  mov    $0x1,%eax
082ff11f +0x151:  jmp    082ff126 <+0x158>
082ff121 +0x153:  mov    $0x0,%eax
082ff126 +0x158:  leave
082ff127 +0x159:  ret
```

## 反编译 C

```c
// CClearCondition::ClearCondition @ 0x82fefce

/* CClearCondition::ClearCondition(ENUM_DUNGEON_CLEAR_CONDITION_TYPE, int) */

undefined4 __thiscall CClearCondition::ClearCondition(CClearCondition *this,int param_2,int param_3)

{
  bool bVar1;
  __normal_iterator local_24 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_20 [4];
  __normal_iterator local_1c [4];
  __normal_iterator<DungeonClearCondition*,std::vector<DungeonClearCondition,std::allocator<DungeonClearCondition>>>
  local_18 [4];
  int *local_14;
  int *local_10;
  
  if ((-1 < param_2) && (param_2 < 5)) {
    std::vector<DungeonClearCondition,std::allocator<DungeonClearCondition>>::begin();
    std::vector<DungeonClearCondition,std::allocator<DungeonClearCondition>>::end();
    std::vector<int,std::allocator<int>>::begin();
    std::vector<int,std::allocator<int>>::end();
    while( true ) {
      bVar1 = __gnu_cxx::operator!=(local_18,local_1c);
      if ((bVar1) && (bVar1 = __gnu_cxx::operator!=(local_20,local_24), bVar1)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) break;
      local_14 = (int *)__gnu_cxx::
                        __normal_iterator<DungeonClearCondition*,std::vector<DungeonClearCondition,std::allocator<DungeonClearCondition>>>
                        ::operator*(local_18);
      local_10 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_20);
      if ((*local_14 == param_2) && (local_14[1] == param_3)) {
        if (local_14[2] <= *local_10) {
          return 0;
        }
        *local_10 = *local_10 + 1;
        *(int *)(this + 4) = *(int *)(this + 4) + 1;
      }
      __gnu_cxx::
      __normal_iterator<DungeonClearCondition*,std::vector<DungeonClearCondition,std::allocator<DungeonClearCondition>>>
      ::operator++(local_18);
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++(local_20);
    }
    if (*(int *)this <= *(int *)(this + 4)) {
      return 1;
    }
    return 0;
  }
  return 0;
}
```

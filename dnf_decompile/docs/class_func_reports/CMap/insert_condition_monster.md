# insert_condition_monster

`_ZN4CMap24insert_condition_monsterE15STAssignMonster`

`CMap::insert_condition_monster(STAssignMonster)`

| 类 | 地址 |
|---|---|
| `CMap` | `0x0834ead4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834ead4  _ZN4CMap24insert_condition_monsterE15STAssignMonster
#           CMap::insert_condition_monster(STAssignMonster)
# range [0x0834ead4, 0x0834eb93]
0834ead4 +0x00:  push   %ebp
0834ead5 +0x01:  mov    %esp,%ebp
0834ead7 +0x03:  push   %esi
0834ead8 +0x04:  push   %ebx
0834ead9 +0x05:  sub    $0x50,%esp
0834eadc +0x08:  lea    -0x48(%ebp),%eax
0834eadf +0x0b:  mov    %eax,(%esp)
0834eae2 +0x0e:  call   0830e4fc <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xe1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xe1
0834eae7 +0x13:  mov    0xc(%ebp),%eax
0834eaea +0x16:  mov    (%eax),%eax
0834eaec +0x18:  mov    %eax,-0x48(%ebp)
0834eaef +0x1b:  mov    0xc(%ebp),%eax
0834eaf2 +0x1e:  movzbl 0x4(%eax),%eax
0834eaf6 +0x22:  mov    %al,-0x44(%ebp)
0834eaf9 +0x25:  mov    0xc(%ebp),%eax
0834eafc +0x28:  mov    0x8(%eax),%eax
0834eaff +0x2b:  mov    %eax,-0x40(%ebp)
0834eb02 +0x2e:  mov    0xc(%ebp),%eax
0834eb05 +0x31:  mov    0x20(%eax),%eax
0834eb08 +0x34:  mov    %eax,-0x3c(%ebp)
0834eb0b +0x37:  mov    0xc(%ebp),%eax
0834eb0e +0x3a:  mov    0x1c(%eax),%eax
0834eb11 +0x3d:  mov    %eax,-0x38(%ebp)
0834eb14 +0x40:  mov    0xc(%ebp),%eax
0834eb17 +0x43:  mov    0x18(%eax),%eax
0834eb1a +0x46:  mov    %eax,-0x34(%ebp)
0834eb1d +0x49:  mov    0xc(%ebp),%eax
0834eb20 +0x4c:  mov    0x24(%eax),%eax
0834eb23 +0x4f:  mov    %eax,-0x30(%ebp)
0834eb26 +0x52:  mov    0xc(%ebp),%eax
0834eb29 +0x55:  mov    0x14(%eax),%ecx
0834eb2c +0x58:  mov    $0x66666667,%edx
0834eb31 +0x5d:  mov    %ecx,%eax
0834eb33 +0x5f:  imul   %edx
0834eb35 +0x61:  sar    $0x2,%edx
0834eb38 +0x64:  mov    %ecx,%eax
0834eb3a +0x66:  sar    $0x1f,%eax
0834eb3d +0x69:  mov    %edx,%ecx
0834eb3f +0x6b:  sub    %eax,%ecx
0834eb41 +0x6d:  mov    %ecx,%eax
0834eb43 +0x6f:  mov    %eax,-0x24(%ebp)
0834eb46 +0x72:  mov    0xc(%ebp),%eax
0834eb49 +0x75:  mov    0x50(%eax),%eax
0834eb4c +0x78:  mov    %eax,-0x1c(%ebp)
0834eb4f +0x7b:  mov    0x8(%ebp),%eax
0834eb52 +0x7e:  lea    0x14(%eax),%edx
0834eb55 +0x81:  lea    -0x48(%ebp),%eax
0834eb58 +0x84:  mov    %eax,0x4(%esp)
0834eb5c +0x88:  mov    %edx,(%esp)
0834eb5f +0x8b:  call   08139882 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5489>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5489
0834eb64 +0x90:  jmp    0834eb81 <+0xad>
0834eb66 +0x92:  mov    %edx,%ebx
0834eb68 +0x94:  mov    %eax,%esi
0834eb6a +0x96:  lea    -0x48(%ebp),%eax
0834eb6d +0x99:  mov    %eax,(%esp)
0834eb70 +0x9c:  call   081398c6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x54cd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x54cd
0834eb75 +0xa1:  mov    %esi,%eax
0834eb77 +0xa3:  mov    %ebx,%edx
0834eb79 +0xa5:  mov    %eax,(%esp)
0834eb7c +0xa8:  call   08ae3750 <_Unwind_Resume>
0834eb81 +0xad:  lea    -0x48(%ebp),%eax
0834eb84 +0xb0:  mov    %eax,(%esp)
0834eb87 +0xb3:  call   081398c6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x54cd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x54cd
0834eb8c +0xb8:  add    $0x50,%esp
0834eb8f +0xbb:  pop    %ebx
0834eb90 +0xbc:  pop    %esi
0834eb91 +0xbd:  pop    %ebp
0834eb92 +0xbe:  ret
0834eb93 +0xbf:  nop
```

## 反编译 C

```c
// CMap::insert_condition_monster @ 0x834ead4

/* CMap::insert_condition_monster(STAssignMonster) */

void __thiscall CMap::insert_condition_monster(CMap *this,undefined4 *param_2)

{
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_28;
  undefined4 local_20;
  
  _mapMonster::_mapMonster((_mapMonster *)&local_4c);
  local_4c = *param_2;
  local_48 = *(undefined1 *)(param_2 + 1);
  local_44 = param_2[2];
  local_40 = param_2[8];
  local_3c = param_2[7];
  local_38 = param_2[6];
  local_34 = param_2[9];
  local_28 = (int)param_2[5] / 10;
  local_20 = param_2[0x14];
                    /* try { // try from 0834eb5f to 0834eb63 has its CatchHandler @ 0834eb66 */
  std::list<_mapMonster,std::allocator<_mapMonster>>::push_back
            ((list<_mapMonster,std::allocator<_mapMonster>> *)(this + 0x14),(_mapMonster *)&local_4c
            );
  _mapMonster::~_mapMonster((_mapMonster *)&local_4c);
  return;
}
```

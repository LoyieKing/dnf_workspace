# insert_monster

`_ZN4CMap14insert_monsterE15STAssignMonsteri`

`CMap::insert_monster(STAssignMonster, int)`

| 类 | 地址 |
|---|---|
| `CMap` | `0x0834e9d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834e9d4  _ZN4CMap14insert_monsterE15STAssignMonsteri
#           CMap::insert_monster(STAssignMonster, int)
# range [0x0834e9d4, 0x0834ead3]
0834e9d4 +0x00:  push   %ebp
0834e9d5 +0x01:  mov    %esp,%ebp
0834e9d7 +0x03:  push   %esi
0834e9d8 +0x04:  push   %ebx
0834e9d9 +0x05:  sub    $0x50,%esp
0834e9dc +0x08:  lea    -0x48(%ebp),%eax
0834e9df +0x0b:  mov    %eax,(%esp)
0834e9e2 +0x0e:  call   0830e4fc <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xe1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xe1
0834e9e7 +0x13:  mov    0xc(%ebp),%eax
0834e9ea +0x16:  mov    (%eax),%eax
0834e9ec +0x18:  mov    %eax,-0x48(%ebp)
0834e9ef +0x1b:  mov    0xc(%ebp),%eax
0834e9f2 +0x1e:  movzbl 0x4(%eax),%eax
0834e9f6 +0x22:  mov    %al,-0x44(%ebp)
0834e9f9 +0x25:  mov    0xc(%ebp),%eax
0834e9fc +0x28:  mov    0x8(%eax),%eax
0834e9ff +0x2b:  mov    %eax,-0x40(%ebp)
0834ea02 +0x2e:  mov    0xc(%ebp),%eax
0834ea05 +0x31:  mov    0x20(%eax),%eax
0834ea08 +0x34:  mov    %eax,-0x3c(%ebp)
0834ea0b +0x37:  mov    0xc(%ebp),%eax
0834ea0e +0x3a:  mov    0x1c(%eax),%eax
0834ea11 +0x3d:  mov    %eax,-0x38(%ebp)
0834ea14 +0x40:  mov    0xc(%ebp),%eax
0834ea17 +0x43:  mov    0x18(%eax),%eax
0834ea1a +0x46:  mov    %eax,-0x34(%ebp)
0834ea1d +0x49:  mov    0xc(%ebp),%eax
0834ea20 +0x4c:  mov    0x24(%eax),%eax
0834ea23 +0x4f:  mov    %eax,-0x30(%ebp)
0834ea26 +0x52:  mov    0xc(%ebp),%eax
0834ea29 +0x55:  mov    0x14(%eax),%ecx
0834ea2c +0x58:  mov    $0x66666667,%edx
0834ea31 +0x5d:  mov    %ecx,%eax
0834ea33 +0x5f:  imul   %edx
0834ea35 +0x61:  sar    $0x2,%edx
0834ea38 +0x64:  mov    %ecx,%eax
0834ea3a +0x66:  sar    $0x1f,%eax
0834ea3d +0x69:  mov    %edx,%ecx
0834ea3f +0x6b:  sub    %eax,%ecx
0834ea41 +0x6d:  mov    %ecx,%eax
0834ea43 +0x6f:  mov    %eax,-0x24(%ebp)
0834ea46 +0x72:  mov    0xc(%ebp),%eax
0834ea49 +0x75:  mov    0x50(%eax),%eax
0834ea4c +0x78:  mov    %eax,-0x1c(%ebp)
0834ea4f +0x7b:  mov    0xc(%ebp),%eax
0834ea52 +0x7e:  mov    0x4c(%eax),%eax
0834ea55 +0x81:  mov    %eax,-0x20(%ebp)
0834ea58 +0x84:  mov    0xc(%ebp),%eax
0834ea5b +0x87:  movzbl 0x54(%eax),%eax
0834ea5f +0x8b:  mov    %al,-0x18(%ebp)
0834ea62 +0x8e:  mov    0xc(%ebp),%eax
0834ea65 +0x91:  add    $0x28,%eax
0834ea68 +0x94:  mov    %eax,0x4(%esp)
0834ea6c +0x98:  lea    -0x48(%ebp),%eax
0834ea6f +0x9b:  add    $0x34,%eax
0834ea72 +0x9e:  mov    %eax,(%esp)
0834ea75 +0xa1:  call   080ccfd2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1e1f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1e1f
0834ea7a +0xa6:  cmpl   $0xffffffff,0x10(%ebp)
0834ea7e +0xaa:  je     0834ea8a <+0xb6>
0834ea80 +0xac:  movb   $0x1,-0x2c(%ebp)
0834ea84 +0xb0:  mov    0x10(%ebp),%eax
0834ea87 +0xb3:  mov    %eax,-0x28(%ebp)
0834ea8a +0xb6:  mov    0x8(%ebp),%eax
0834ea8d +0xb9:  lea    0xc(%eax),%edx
0834ea90 +0xbc:  lea    -0x48(%ebp),%eax
0834ea93 +0xbf:  mov    %eax,0x4(%esp)
0834ea97 +0xc3:  mov    %edx,(%esp)
0834ea9a +0xc6:  call   08139882 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5489>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5489
0834ea9f +0xcb:  mov    $0x1,%ebx
0834eaa4 +0xd0:  lea    -0x48(%ebp),%eax
0834eaa7 +0xd3:  mov    %eax,(%esp)
0834eaaa +0xd6:  call   081398c6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x54cd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x54cd
0834eaaf +0xdb:  mov    %ebx,%eax
0834eab1 +0xdd:  add    $0x50,%esp
0834eab4 +0xe0:  pop    %ebx
0834eab5 +0xe1:  pop    %esi
0834eab6 +0xe2:  pop    %ebp
0834eab7 +0xe3:  ret
0834eab8 +0xe4:  mov    %edx,%ebx
0834eaba +0xe6:  mov    %eax,%esi
0834eabc +0xe8:  lea    -0x48(%ebp),%eax
0834eabf +0xeb:  mov    %eax,(%esp)
0834eac2 +0xee:  call   081398c6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x54cd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x54cd
0834eac7 +0xf3:  mov    %esi,%eax
0834eac9 +0xf5:  mov    %ebx,%edx
0834eacb +0xf7:  mov    %eax,(%esp)
0834eace +0xfa:  call   08ae3750 <_Unwind_Resume>
0834ead3 +0xff:  nop
```

## 反编译 C

```c
// CMap::insert_monster @ 0x834e9d4

/* CMap::insert_monster(STAssignMonster, int) */

undefined4 __thiscall CMap::insert_monster(CMap *this,undefined4 *param_2,int param_3)

{
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  vector<int,std::allocator<int>> avStack_18 [12];
  
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
  local_24 = param_2[0x13];
  local_1c = *(undefined1 *)(param_2 + 0x15);
                    /* try { // try from 0834ea75 to 0834ea9e has its CatchHandler @ 0834eab8 */
  std::vector<int,std::allocator<int>>::operator=(avStack_18,(vector *)(param_2 + 10));
  if (param_3 != -1) {
    local_30 = 1;
    local_2c = param_3;
  }
  std::list<_mapMonster,std::allocator<_mapMonster>>::push_back
            ((list<_mapMonster,std::allocator<_mapMonster>> *)(this + 0xc),(_mapMonster *)&local_4c)
  ;
  _mapMonster::~_mapMonster((_mapMonster *)&local_4c);
  return 1;
}
```

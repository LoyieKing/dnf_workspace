# get_blood_spawn_cnt_of_small_round

`_ZN13CBattle_Field34get_blood_spawn_cnt_of_small_roundEs`

`CBattle_Field::get_blood_spawn_cnt_of_small_round(short)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08306670` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08306670  _ZN13CBattle_Field34get_blood_spawn_cnt_of_small_roundEs
#           CBattle_Field::get_blood_spawn_cnt_of_small_round(short)
# range [0x08306670, 0x083066e9]
08306670 +0x00:  push   %ebp
08306671 +0x01:  mov    %esp,%ebp
08306673 +0x03:  sub    $0x38,%esp
08306676 +0x06:  mov    0xc(%ebp),%eax
08306679 +0x09:  mov    %ax,-0x1c(%ebp)
0830667d +0x0d:  mov    0x8(%ebp),%eax
08306680 +0x10:  add    $0x24c,%eax
08306685 +0x15:  mov    %eax,(%esp)
08306688 +0x18:  call   0831179c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3381>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3381
0830668d +0x1d:  test   %al,%al
0830668f +0x1f:  jne    083066ae <+0x3e>
08306691 +0x21:  mov    0x8(%ebp),%eax
08306694 +0x24:  add    $0x24c,%eax
08306699 +0x29:  mov    %eax,(%esp)
0830669c +0x2c:  call   0830ffee <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1bd3>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1bd3
083066a1 +0x31:  cmp    -0x1c(%ebp),%ax
083066a5 +0x35:  jle    083066ae <+0x3e>
083066a7 +0x37:  cmpw   $0x0,-0x1c(%ebp)
083066ac +0x3c:  jns    083066b5 <+0x45>
083066ae +0x3e:  mov    $0x1,%eax
083066b3 +0x43:  jmp    083066ba <+0x4a>
083066b5 +0x45:  mov    $0x0,%eax
083066ba +0x4a:  test   %al,%al
083066bc +0x4c:  je     083066c5 <+0x55>
083066be +0x4e:  mov    $0xffffffff,%eax
083066c3 +0x53:  jmp    083066e7 <+0x77>
083066c5 +0x55:  movswl -0x1c(%ebp),%eax
083066c9 +0x59:  mov    0x8(%ebp),%edx
083066cc +0x5c:  add    $0x24c,%edx
083066d2 +0x62:  mov    %eax,0x4(%esp)
083066d6 +0x66:  mov    %edx,(%esp)
083066d9 +0x69:  call   08311960 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3545>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3545
083066de +0x6e:  mov    0x14(%eax),%eax
083066e1 +0x71:  mov    %eax,-0xc(%ebp)
083066e4 +0x74:  mov    -0xc(%ebp),%eax
083066e7 +0x77:  leave
083066e8 +0x78:  ret
083066e9 +0x79:  nop
```

## 反编译 C

```c
// CBattle_Field::get_blood_spawn_cnt_of_small_round @ 0x8306670

/* CBattle_Field::get_blood_spawn_cnt_of_small_round(short) */

undefined4 __thiscall
CBattle_Field::get_blood_spawn_cnt_of_small_round(CBattle_Field *this,short param_1)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  
  cVar2 = std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>::empty();
  if (cVar2 == '\0') {
    sVar3 = std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>::size
                      ((vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>> *)
                       (this + 0x24c));
    if ((param_1 < sVar3) && (-1 < param_1)) {
      bVar1 = false;
      goto LAB_083066ba;
    }
  }
  bVar1 = true;
LAB_083066ba:
  if (bVar1) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar5 = std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>::operator[]
                      ((vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>> *)
                       (this + 0x24c),(int)param_1);
    uVar4 = *(undefined4 *)(iVar5 + 0x14);
  }
  return uVar4;
}
```

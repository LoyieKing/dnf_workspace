# get_blood_round_of_small_round

`_ZN13CBattle_Field30get_blood_round_of_small_roundEs`

`CBattle_Field::get_blood_round_of_small_round(short)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x083065f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083065f8  _ZN13CBattle_Field30get_blood_round_of_small_roundEs
#           CBattle_Field::get_blood_round_of_small_round(short)
# range [0x083065f8, 0x0830666f]
083065f8 +0x00:  push   %ebp
083065f9 +0x01:  mov    %esp,%ebp
083065fb +0x03:  sub    $0x38,%esp
083065fe +0x06:  mov    0xc(%ebp),%eax
08306601 +0x09:  mov    %ax,-0x1c(%ebp)
08306605 +0x0d:  mov    0x8(%ebp),%eax
08306608 +0x10:  add    $0x24c,%eax
0830660d +0x15:  mov    %eax,(%esp)
08306610 +0x18:  call   0831179c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3381>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3381
08306615 +0x1d:  test   %al,%al
08306617 +0x1f:  jne    08306636 <+0x3e>
08306619 +0x21:  mov    0x8(%ebp),%eax
0830661c +0x24:  add    $0x24c,%eax
08306621 +0x29:  mov    %eax,(%esp)
08306624 +0x2c:  call   0830ffee <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1bd3>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1bd3
08306629 +0x31:  cmp    -0x1c(%ebp),%ax
0830662d +0x35:  jle    08306636 <+0x3e>
0830662f +0x37:  cmpw   $0x0,-0x1c(%ebp)
08306634 +0x3c:  jns    0830663d <+0x45>
08306636 +0x3e:  mov    $0x1,%eax
0830663b +0x43:  jmp    08306642 <+0x4a>
0830663d +0x45:  mov    $0x0,%eax
08306642 +0x4a:  test   %al,%al
08306644 +0x4c:  je     0830664d <+0x55>
08306646 +0x4e:  mov    $0xffffffff,%eax
0830664b +0x53:  jmp    0830666e <+0x76>
0830664d +0x55:  movswl -0x1c(%ebp),%eax
08306651 +0x59:  mov    0x8(%ebp),%edx
08306654 +0x5c:  add    $0x24c,%edx
0830665a +0x62:  mov    %eax,0x4(%esp)
0830665e +0x66:  mov    %edx,(%esp)
08306661 +0x69:  call   08311960 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3545>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3545
08306666 +0x6e:  mov    (%eax),%eax
08306668 +0x70:  mov    %eax,-0xc(%ebp)
0830666b +0x73:  mov    -0xc(%ebp),%eax
0830666e +0x76:  leave
0830666f +0x77:  ret
```

## 反编译 C

```c
// CBattle_Field::get_blood_round_of_small_round @ 0x83065f8

/* CBattle_Field::get_blood_round_of_small_round(short) */

undefined4 __thiscall
CBattle_Field::get_blood_round_of_small_round(CBattle_Field *this,short param_1)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  cVar2 = std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>::empty();
  if (cVar2 == '\0') {
    sVar3 = std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>::size
                      ((vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>> *)
                       (this + 0x24c));
    if ((param_1 < sVar3) && (-1 < param_1)) {
      bVar1 = false;
      goto LAB_08306642;
    }
  }
  bVar1 = true;
LAB_08306642:
  if (bVar1) {
    uVar4 = 0xffffffff;
  }
  else {
    puVar5 = (undefined4 *)
             std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>::operator[]
                       ((vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>> *)
                        (this + 0x24c),(int)param_1);
    uVar4 = *puVar5;
  }
  return uVar4;
}
```

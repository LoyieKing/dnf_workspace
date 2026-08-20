# get_blood_round_difficylty_of_small_round

`_ZN13CBattle_Field41get_blood_round_difficylty_of_small_roundEs`

`CBattle_Field::get_blood_round_difficylty_of_small_round(short)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x083062fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083062fe  _ZN13CBattle_Field41get_blood_round_difficylty_of_small_roundEs
#           CBattle_Field::get_blood_round_difficylty_of_small_round(short)
# range [0x083062fe, 0x0830637b]
083062fe +0x00:  push   %ebp
083062ff +0x01:  mov    %esp,%ebp
08306301 +0x03:  sub    $0x38,%esp
08306304 +0x06:  mov    0xc(%ebp),%eax
08306307 +0x09:  mov    %ax,-0x1c(%ebp)
0830630b +0x0d:  mov    0x8(%ebp),%eax
0830630e +0x10:  add    $0x24c,%eax
08306313 +0x15:  mov    %eax,(%esp)
08306316 +0x18:  call   0831179c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3381>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3381
0830631b +0x1d:  test   %al,%al
0830631d +0x1f:  jne    0830633c <+0x3e>
0830631f +0x21:  mov    0x8(%ebp),%eax
08306322 +0x24:  add    $0x24c,%eax
08306327 +0x29:  mov    %eax,(%esp)
0830632a +0x2c:  call   0830ffee <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1bd3>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1bd3
0830632f +0x31:  cmp    -0x1c(%ebp),%ax
08306333 +0x35:  jle    0830633c <+0x3e>
08306335 +0x37:  cmpw   $0x0,-0x1c(%ebp)
0830633a +0x3c:  jns    08306343 <+0x45>
0830633c +0x3e:  mov    $0x1,%eax
08306341 +0x43:  jmp    08306348 <+0x4a>
08306343 +0x45:  mov    $0x0,%eax
08306348 +0x4a:  test   %al,%al
0830634a +0x4c:  je     08306353 <+0x55>
0830634c +0x4e:  mov    $0xffffffff,%eax
08306351 +0x53:  jmp    08306379 <+0x7b>
08306353 +0x55:  movswl -0x1c(%ebp),%eax
08306357 +0x59:  mov    0x8(%ebp),%edx
0830635a +0x5c:  add    $0x24c,%edx
08306360 +0x62:  mov    %eax,0x4(%esp)
08306364 +0x66:  mov    %edx,(%esp)
08306367 +0x69:  call   08311960 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3545>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3545
0830636c +0x6e:  movzbl 0x18(%eax),%eax
08306370 +0x72:  movsbl %al,%eax
08306373 +0x75:  mov    %eax,-0xc(%ebp)
08306376 +0x78:  mov    -0xc(%ebp),%eax
08306379 +0x7b:  leave
0830637a +0x7c:  ret
0830637b +0x7d:  nop
```

## 反编译 C

```c
// CBattle_Field::get_blood_round_difficylty_of_small_round @ 0x83062fe

/* CBattle_Field::get_blood_round_difficylty_of_small_round(short) */

int __thiscall
CBattle_Field::get_blood_round_difficylty_of_small_round(CBattle_Field *this,short param_1)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  
  cVar2 = std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>::empty();
  if (cVar2 == '\0') {
    sVar3 = std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>::size
                      ((vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>> *)
                       (this + 0x24c));
    if ((param_1 < sVar3) && (-1 < param_1)) {
      bVar1 = false;
      goto LAB_08306348;
    }
  }
  bVar1 = true;
LAB_08306348:
  if (bVar1) {
    iVar4 = -1;
  }
  else {
    iVar4 = std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>::operator[]
                      ((vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>> *)
                       (this + 0x24c),(int)param_1);
    iVar4 = (int)*(char *)(iVar4 + 0x18);
  }
  return iVar4;
}
```

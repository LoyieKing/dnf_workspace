# get_blood_spawn_small_round_interval

`_ZN13CBattle_Field36get_blood_spawn_small_round_intervalEs`

`CBattle_Field::get_blood_spawn_small_round_interval(short)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x083066ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083066ea  _ZN13CBattle_Field36get_blood_spawn_small_round_intervalEs
#           CBattle_Field::get_blood_spawn_small_round_interval(short)
# range [0x083066ea, 0x08306769]
083066ea +0x00:  push   %ebp
083066eb +0x01:  mov    %esp,%ebp
083066ed +0x03:  sub    $0x38,%esp
083066f0 +0x06:  mov    0xc(%ebp),%eax
083066f3 +0x09:  mov    %ax,-0x1c(%ebp)
083066f7 +0x0d:  mov    0x8(%ebp),%eax
083066fa +0x10:  add    $0x24c,%eax
083066ff +0x15:  mov    %eax,(%esp)
08306702 +0x18:  call   0831179c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3381>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3381
08306707 +0x1d:  test   %al,%al
08306709 +0x1f:  je     08306712 <+0x28>
0830670b +0x21:  mov    $0xffffffff,%eax
08306710 +0x26:  jmp    08306768 <+0x7e>
08306712 +0x28:  mov    0x8(%ebp),%eax
08306715 +0x2b:  add    $0x24c,%eax
0830671a +0x30:  mov    %eax,(%esp)
0830671d +0x33:  call   0830ffee <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1bd3>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1bd3
08306722 +0x38:  cmp    -0x1c(%ebp),%ax
08306726 +0x3c:  jle    0830672f <+0x45>
08306728 +0x3e:  cmpw   $0x0,-0x1c(%ebp)
0830672d +0x43:  jns    08306736 <+0x4c>
0830672f +0x45:  mov    $0x1,%eax
08306734 +0x4a:  jmp    0830673b <+0x51>
08306736 +0x4c:  mov    $0x0,%eax
0830673b +0x51:  test   %al,%al
0830673d +0x53:  je     08306746 <+0x5c>
0830673f +0x55:  mov    $0xffffffff,%eax
08306744 +0x5a:  jmp    08306768 <+0x7e>
08306746 +0x5c:  movswl -0x1c(%ebp),%eax
0830674a +0x60:  mov    0x8(%ebp),%edx
0830674d +0x63:  add    $0x24c,%edx
08306753 +0x69:  mov    %eax,0x4(%esp)
08306757 +0x6d:  mov    %edx,(%esp)
0830675a +0x70:  call   08311960 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3545>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3545
0830675f +0x75:  mov    0x8(%eax),%eax
08306762 +0x78:  mov    %eax,-0xc(%ebp)
08306765 +0x7b:  mov    -0xc(%ebp),%eax
08306768 +0x7e:  leave
08306769 +0x7f:  ret
```

## 反编译 C

```c
// CBattle_Field::get_blood_spawn_small_round_interval @ 0x83066ea

/* CBattle_Field::get_blood_spawn_small_round_interval(short) */

undefined4 __thiscall
CBattle_Field::get_blood_spawn_small_round_interval(CBattle_Field *this,short param_1)

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
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = 0xffffffff;
    }
    else {
      iVar5 = std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>::operator[]
                        ((vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>> *)
                         (this + 0x24c),(int)param_1);
      uVar4 = *(undefined4 *)(iVar5 + 8);
    }
  }
  else {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}
```

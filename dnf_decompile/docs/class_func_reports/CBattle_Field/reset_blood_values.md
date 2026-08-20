# reset_blood_values

`_ZN13CBattle_Field18reset_blood_valuesEv`

`CBattle_Field::reset_blood_values()`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08306d86` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08306d86  _ZN13CBattle_Field18reset_blood_valuesEv
#           CBattle_Field::reset_blood_values()
# range [0x08306d86, 0x08306e31]
08306d86 +0x00:  push   %ebp
08306d87 +0x01:  mov    %esp,%ebp
08306d89 +0x03:  sub    $0x18,%esp
08306d8c +0x06:  mov    0x8(%ebp),%eax
08306d8f +0x09:  add    $0x240,%eax
08306d94 +0x0e:  mov    %eax,(%esp)
08306d97 +0x11:  call   0830f38e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xf73>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xf73
08306d9c +0x16:  mov    0x8(%ebp),%eax
08306d9f +0x19:  add    $0x24c,%eax
08306da4 +0x1e:  mov    %eax,(%esp)
08306da7 +0x21:  call   0830f3aa <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xf8f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xf8f
08306dac +0x26:  mov    0x8(%ebp),%eax
08306daf +0x29:  add    $0x258,%eax
08306db4 +0x2e:  mov    %eax,(%esp)
08306db7 +0x31:  call   0816eeb2 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x1a0>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x1a0
08306dbc +0x36:  mov    0x8(%ebp),%eax
08306dbf +0x39:  add    $0x264,%eax
08306dc4 +0x3e:  mov    %eax,(%esp)
08306dc7 +0x41:  call   0814abba <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x959>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x959
08306dcc +0x46:  mov    0x8(%ebp),%eax
08306dcf +0x49:  add    $0x278,%eax
08306dd4 +0x4e:  movl   $0x16,0x8(%esp)
08306ddc +0x56:  movl   $0x0,0x4(%esp)
08306de4 +0x5e:  mov    %eax,(%esp)
08306de7 +0x61:  call   0807dcc0 <_init+0x5b8>
08306dec +0x66:  mov    0x8(%ebp),%eax
08306def +0x69:  add    $0x28e,%eax
08306df4 +0x6e:  movl   $0x16,0x8(%esp)
08306dfc +0x76:  movl   $0x0,0x4(%esp)
08306e04 +0x7e:  mov    %eax,(%esp)
08306e07 +0x81:  call   0807dcc0 <_init+0x5b8>
08306e0c +0x86:  mov    0x8(%ebp),%eax
08306e0f +0x89:  movw   $0xffff,0x2a8(%eax)
08306e18 +0x92:  mov    0x8(%ebp),%eax
08306e1b +0x95:  movl   $0x0,0x2a4(%eax)
08306e25 +0x9f:  mov    0x8(%ebp),%eax
08306e28 +0xa2:  movb   $0x0,0x2aa(%eax)
08306e2f +0xa9:  leave
08306e30 +0xaa:  ret
08306e31 +0xab:  nop
```

## 反编译 C

```c
// CBattle_Field::reset_blood_values @ 0x8306d86

/* CBattle_Field::reset_blood_values() */

void __thiscall CBattle_Field::reset_blood_values(CBattle_Field *this)

{
  std::vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>>::clear
            ((vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>> *)(this + 0x240));
  std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>::clear
            ((vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>> *)(this + 0x24c)
            );
  std::vector<short,std::allocator<short>>::clear
            ((vector<short,std::allocator<short>> *)(this + 600));
  std::vector<bool,std::allocator<bool>>::clear((vector<bool,std::allocator<bool>> *)(this + 0x264))
  ;
  memset(this + 0x278,0,0x16);
  memset(this + 0x28e,0,0x16);
  *(undefined2 *)(this + 0x2a8) = 0xffff;
  *(undefined4 *)(this + 0x2a4) = 0;
  this[0x2aa] = (CBattle_Field)0x0;
  return;
}
```

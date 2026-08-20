# SetRating

`_ZN18online_preliminary22COnlinePreliminaryTeam9SetRatingEf`

`online_preliminary::COnlinePreliminaryTeam::SetRating(float)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryTeam` | `0x08588436` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08588436  _ZN18online_preliminary22COnlinePreliminaryTeam9SetRatingEf
#           online_preliminary::COnlinePreliminaryTeam::SetRating(float)
# range [0x08588436, 0x0858844b]
08588436 +0x00:  push   %ebp
08588437 +0x01:  mov    %esp,%ebp
08588439 +0x03:  mov    0x8(%ebp),%eax
0858843c +0x06:  mov    0xc(%ebp),%edx
0858843f +0x09:  mov    %edx,0x8(%eax)
08588442 +0x0c:  mov    0x8(%ebp),%eax
08588445 +0x0f:  movb   $0x1,0x3c(%eax)
08588449 +0x13:  pop    %ebp
0858844a +0x14:  ret
0858844b +0x15:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryTeam::SetRating @ 0x8588436

/* online_preliminary::COnlinePreliminaryTeam::SetRating(float) */

void __thiscall
online_preliminary::COnlinePreliminaryTeam::SetRating(COnlinePreliminaryTeam *this,float param_1)

{
  *(float *)(this + 8) = param_1;
  this[0x3c] = (COnlinePreliminaryTeam)0x1;
  return;
}
```

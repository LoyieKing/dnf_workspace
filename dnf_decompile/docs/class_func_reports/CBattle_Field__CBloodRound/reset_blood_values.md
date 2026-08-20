# reset_blood_values

`_ZN13CBattle_Field11CBloodRound18reset_blood_valuesEv`

`CBattle_Field::CBloodRound::reset_blood_values()`

| 类 | 地址 |
|---|---|
| `CBattle_Field::CBloodRound` | `0x08306d66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08306d66  _ZN13CBattle_Field11CBloodRound18reset_blood_valuesEv
#           CBattle_Field::CBloodRound::reset_blood_values()
# range [0x08306d66, 0x08306d85]
08306d66 +0x00:  push   %ebp
08306d67 +0x01:  mov    %esp,%ebp
08306d69 +0x03:  mov    0x8(%ebp),%eax
08306d6c +0x06:  movw   $0x0,0x6(%eax)
08306d72 +0x0c:  mov    0x8(%ebp),%eax
08306d75 +0x0f:  movw   $0x0,0x2(%eax)
08306d7b +0x15:  mov    0x8(%ebp),%eax
08306d7e +0x18:  movw   $0x0,0x4(%eax)
08306d84 +0x1e:  pop    %ebp
08306d85 +0x1f:  ret
```

## 反编译 C

```c
// CBattle_Field::CBloodRound::reset_blood_values @ 0x8306d66

/* CBattle_Field::CBloodRound::reset_blood_values() */

void __thiscall CBattle_Field::CBloodRound::reset_blood_values(CBloodRound *this)

{
  *(undefined2 *)(this + 6) = 0;
  *(undefined2 *)(this + 2) = 0;
  *(undefined2 *)(this + 4) = 0;
  return;
}
```

# default_value

`_ZN17Arad_Mileage_Data13default_valueEv`

`Arad_Mileage_Data::default_value()`

| 类 | 地址 |
|---|---|
| `Arad_Mileage_Data` | `0x081a36f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a36f0  _ZN17Arad_Mileage_Data13default_valueEv
#           Arad_Mileage_Data::default_value()
# range [0x081a36f0, 0x081a36fb]
081a36f0 +0x00:  push   %ebp
081a36f1 +0x01:  mov    %esp,%ebp
081a36f3 +0x03:  mov    0x8(%ebp),%eax
081a36f6 +0x06:  mov    0x4(%eax),%eax
081a36f9 +0x09:  pop    %ebp
081a36fa +0x0a:  ret
081a36fb +0x0b:  nop
```

## 反编译 C

```c
// Arad_Mileage_Data::default_value @ 0x81a36f0

/* Arad_Mileage_Data::default_value() */

undefined4 __thiscall Arad_Mileage_Data::default_value(Arad_Mileage_Data *this)

{
  return *(undefined4 *)(this + 4);
}
```

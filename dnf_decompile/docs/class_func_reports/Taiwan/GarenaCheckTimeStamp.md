# GarenaCheckTimeStamp

`_ZN6Taiwan20GarenaCheckTimeStampEjjjj`

`Taiwan::GarenaCheckTimeStamp(unsigned int, unsigned int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Taiwan` | `0x08173080` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08173080  _ZN6Taiwan20GarenaCheckTimeStampEjjjj
#           Taiwan::GarenaCheckTimeStamp(unsigned int, unsigned int, unsigned int, unsigned int)
# range [0x08173080, 0x081730c1]
08173080 +0x00:  push   %ebp
08173081 +0x01:  mov    %esp,%ebp
08173083 +0x03:  mov    0x8(%ebp),%eax
08173086 +0x06:  add    $0x12c,%eax
0817308b +0x0b:  cmp    0xc(%ebp),%eax
0817308e +0x0e:  ja     081730ba <+0x3a>
08173090 +0x10:  mov    0x8(%ebp),%eax
08173093 +0x13:  cmp    0x10(%ebp),%eax
08173096 +0x16:  jne    081730b3 <+0x33>
08173098 +0x18:  mov    0x14(%ebp),%eax
0817309b +0x1b:  add    $0x12c,%eax
081730a0 +0x20:  cmp    0xc(%ebp),%eax
081730a3 +0x23:  jb     081730ac <+0x2c>
081730a5 +0x25:  mov    $0x1,%eax
081730aa +0x2a:  jmp    081730bf <+0x3f>
081730ac +0x2c:  mov    $0x0,%eax
081730b1 +0x31:  jmp    081730bf <+0x3f>
081730b3 +0x33:  mov    $0x0,%eax
081730b8 +0x38:  jmp    081730bf <+0x3f>
081730ba +0x3a:  mov    $0x1,%eax
081730bf +0x3f:  pop    %ebp
081730c0 +0x40:  ret
081730c1 +0x41:  nop
```

## 反编译 C

```c
// Taiwan::GarenaCheckTimeStamp @ 0x8173080

/* Taiwan::GarenaCheckTimeStamp(unsigned int, unsigned int, unsigned int, unsigned int) */

undefined4 Taiwan::GarenaCheckTimeStamp(uint param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  
  if (param_2 < param_1 + 300) {
    uVar1 = 1;
  }
  else if (param_1 == param_3) {
    if (param_4 + 300 < param_2) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```

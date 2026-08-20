# GetCoinNoPerDay

`_ZN16CCoinEventPerDay15GetCoinNoPerDayEi`

`CCoinEventPerDay::GetCoinNoPerDay(int)`

| 类 | 地址 |
|---|---|
| `CCoinEventPerDay` | `0x0810ad16` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810ad16  _ZN16CCoinEventPerDay15GetCoinNoPerDayEi
#           CCoinEventPerDay::GetCoinNoPerDay(int)
# range [0x0810ad16, 0x0810ad48]
0810ad16 +0x00:  push   %ebp
0810ad17 +0x01:  mov    %esp,%ebp
0810ad19 +0x03:  cmpl   $0x11,0xc(%ebp)
0810ad1d +0x07:  jg     0810ad2b <+0x15>
0810ad1f +0x09:  mov    0x8(%ebp),%eax
0810ad22 +0x0c:  movzbl 0x9(%eax),%eax
0810ad26 +0x10:  movzbl %al,%eax
0810ad29 +0x13:  jmp    0810ad47 <+0x31>
0810ad2b +0x15:  cmpl   $0x1a,0xc(%ebp)
0810ad2f +0x19:  jg     0810ad3d <+0x27>
0810ad31 +0x1b:  mov    0x8(%ebp),%eax
0810ad34 +0x1e:  movzbl 0xa(%eax),%eax
0810ad38 +0x22:  movzbl %al,%eax
0810ad3b +0x25:  jmp    0810ad47 <+0x31>
0810ad3d +0x27:  mov    0x8(%ebp),%eax
0810ad40 +0x2a:  movzbl 0xb(%eax),%eax
0810ad44 +0x2e:  movzbl %al,%eax
0810ad47 +0x31:  pop    %ebp
0810ad48 +0x32:  ret
```

## 反编译 C

```c
// CCoinEventPerDay::GetCoinNoPerDay @ 0x810ad16

/* CCoinEventPerDay::GetCoinNoPerDay(int) */

CCoinEventPerDay __thiscall CCoinEventPerDay::GetCoinNoPerDay(CCoinEventPerDay *this,int param_1)

{
  CCoinEventPerDay CVar1;
  
  if (param_1 < 0x12) {
    CVar1 = this[9];
  }
  else if (param_1 < 0x1b) {
    CVar1 = this[10];
  }
  else {
    CVar1 = this[0xb];
  }
  return CVar1;
}
```

# CheckSeat

`_ZN8fair_pvp10CFairMatch9CheckSeatEi`

`fair_pvp::CFairMatch::CheckSeat(int)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08562b78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08562b78  _ZN8fair_pvp10CFairMatch9CheckSeatEi
#           fair_pvp::CFairMatch::CheckSeat(int)
# range [0x08562b78, 0x08562b8f]
08562b78 +0x00:  push   %ebp
08562b79 +0x01:  mov    %esp,%ebp
08562b7b +0x03:  cmpl   $0x2,0xc(%ebp)
08562b7f +0x07:  jne    08562b88 <+0x10>
08562b81 +0x09:  mov    $0x0,%eax
08562b86 +0x0e:  jmp    08562b8d <+0x15>
08562b88 +0x10:  mov    $0x1,%eax
08562b8d +0x15:  pop    %ebp
08562b8e +0x16:  ret
08562b8f +0x17:  nop
```

## 反编译 C

```c
// fair_pvp::CFairMatch::CheckSeat @ 0x8562b78

/* fair_pvp::CFairMatch::CheckSeat(int) */

bool __thiscall fair_pvp::CFairMatch::CheckSeat(CFairMatch *this,int param_1)

{
  return param_1 != 2;
}
```

# GetHp

`_ZN11pvp_assault10CAssaulter5GetHpEv`

`pvp_assault::CAssaulter::GetHp()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaulter` | `0x082e6688` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e6688  _ZN11pvp_assault10CAssaulter5GetHpEv
#           pvp_assault::CAssaulter::GetHp()
# range [0x082e6688, 0x082e6693]
082e6688 +0x00:  push   %ebp
082e6689 +0x01:  mov    %esp,%ebp
082e668b +0x03:  mov    0x8(%ebp),%eax
082e668e +0x06:  mov    0x10(%eax),%eax
082e6691 +0x09:  pop    %ebp
082e6692 +0x0a:  ret
082e6693 +0x0b:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaulter::GetHp @ 0x82e6688

/* pvp_assault::CAssaulter::GetHp() */

undefined4 __thiscall pvp_assault::CAssaulter::GetHp(CAssaulter *this)

{
  return *(undefined4 *)(this + 0x10);
}
```

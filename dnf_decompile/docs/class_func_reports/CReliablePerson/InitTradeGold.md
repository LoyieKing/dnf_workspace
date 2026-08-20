# InitTradeGold

`_ZN15CReliablePerson13InitTradeGoldEjjj`

`CReliablePerson::InitTradeGold(unsigned int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CReliablePerson` | `0x086453b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086453b8  _ZN15CReliablePerson13InitTradeGoldEjjj
#           CReliablePerson::InitTradeGold(unsigned int, unsigned int, unsigned int)
# range [0x086453b8, 0x086453d7]
086453b8 +0x00:  push   %ebp
086453b9 +0x01:  mov    %esp,%ebp
086453bb +0x03:  mov    0x8(%ebp),%eax
086453be +0x06:  mov    0xc(%ebp),%edx
086453c1 +0x09:  mov    %edx,(%eax)
086453c3 +0x0b:  mov    0x8(%ebp),%eax
086453c6 +0x0e:  mov    0x10(%ebp),%edx
086453c9 +0x11:  mov    %edx,0x4(%eax)
086453cc +0x14:  mov    0x8(%ebp),%eax
086453cf +0x17:  mov    0x14(%ebp),%edx
086453d2 +0x1a:  mov    %edx,0x8(%eax)
086453d5 +0x1d:  pop    %ebp
086453d6 +0x1e:  ret
086453d7 +0x1f:  nop
```

## 反编译 C

```c
// CReliablePerson::InitTradeGold @ 0x86453b8

/* CReliablePerson::InitTradeGold(unsigned int, unsigned int, unsigned int) */

void __thiscall
CReliablePerson::InitTradeGold(CReliablePerson *this,uint param_1,uint param_2,uint param_3)

{
  *(uint *)this = param_1;
  *(uint *)(this + 4) = param_2;
  *(uint *)(this + 8) = param_3;
  return;
}
```

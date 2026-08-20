# ~stStackableBoosterItemInfo_t

`_ZN28stStackableBoosterItemInfo_tD1Ev`

`stStackableBoosterItemInfo_t::~stStackableBoosterItemInfo_t()`

| 类 | 地址 |
|---|---|
| `stStackableBoosterItemInfo_t` | `0x08328062` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08328062  _ZN28stStackableBoosterItemInfo_tD1Ev
#           stStackableBoosterItemInfo_t::~stStackableBoosterItemInfo_t()
# range [0x08328062, 0x08328066]
08328062 +0x00:  push   %ebp
08328063 +0x01:  mov    %esp,%ebp
08328065 +0x03:  pop    %ebp
08328066 +0x04:  ret
```

## 反编译 C

```c
// stStackableBoosterItemInfo_t::~stStackableBoosterItemInfo_t @ 0x8328062

/* stStackableBoosterItemInfo_t::~stStackableBoosterItemInfo_t() */

void __thiscall
stStackableBoosterItemInfo_t::~stStackableBoosterItemInfo_t(stStackableBoosterItemInfo_t *this)

{
  return;
}
```

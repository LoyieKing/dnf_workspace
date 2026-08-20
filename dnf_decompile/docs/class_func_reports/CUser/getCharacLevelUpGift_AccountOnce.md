# getCharacLevelUpGift_AccountOnce

`_ZN5CUser32getCharacLevelUpGift_AccountOnceEv`

`CUser::getCharacLevelUpGift_AccountOnce()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08691e5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08691e5c  _ZN5CUser32getCharacLevelUpGift_AccountOnceEv
#           CUser::getCharacLevelUpGift_AccountOnce()
# range [0x08691e5c, 0x08691e69]
08691e5c +0x00:  push   %ebp
08691e5d +0x01:  mov    %esp,%ebp
08691e5f +0x03:  mov    0x8(%ebp),%eax
08691e62 +0x06:  add    $0x8ec04,%eax
08691e67 +0x0b:  pop    %ebp
08691e68 +0x0c:  ret
08691e69 +0x0d:  nop
```

## 反编译 C

```c
// CUser::getCharacLevelUpGift_AccountOnce @ 0x8691e5c

/* CUser::getCharacLevelUpGift_AccountOnce() */

CUser * __thiscall CUser::getCharacLevelUpGift_AccountOnce(CUser *this)

{
  return this + 0x8ec04;
}
```

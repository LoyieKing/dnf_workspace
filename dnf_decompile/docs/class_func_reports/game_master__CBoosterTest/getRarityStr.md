# getRarityStr

`_ZN11game_master12CBoosterTest12getRarityStrE11ENUM_RARITY`

`game_master::CBoosterTest::getRarityStr(ENUM_RARITY)`

| 类 | 地址 |
|---|---|
| `game_master::CBoosterTest` | `0x084aea80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084aea80  _ZN11game_master12CBoosterTest12getRarityStrE11ENUM_RARITY
#           game_master::CBoosterTest::getRarityStr(ENUM_RARITY)
# range [0x084aea80, 0x084aeac5]
084aea80 +0x00:  push   %ebp
084aea81 +0x01:  mov    %esp,%ebp
084aea83 +0x03:  mov    0x8(%ebp),%eax
084aea86 +0x06:  cmp    $0x5,%eax
084aea89 +0x09:  ja     084aeabe <+0x3e>
084aea8b +0x0b:  mov    &data#2e5b361c(.rodata)(,%eax,4),%eax
084aea92 +0x12:  jmp    *%eax
084aea94 +0x14:  mov    $"common",%eax
084aea99 +0x19:  jmp    084aeac3 <+0x43>
084aea9b +0x1b:  mov    $"uncommon",%eax
084aeaa0 +0x20:  jmp    084aeac3 <+0x43>
084aeaa2 +0x22:  mov    $"rare",%eax
084aeaa7 +0x27:  jmp    084aeac3 <+0x43>
084aeaa9 +0x29:  mov    $"unique",%eax
084aeaae +0x2e:  jmp    084aeac3 <+0x43>
084aeab0 +0x30:  mov    $"epic",%eax
084aeab5 +0x35:  jmp    084aeac3 <+0x43>
084aeab7 +0x37:  mov    $"chronicle",%eax
084aeabc +0x3c:  jmp    084aeac3 <+0x43>
084aeabe +0x3e:  mov    $"unknown",%eax
084aeac3 +0x43:  pop    %ebp
084aeac4 +0x44:  ret
084aeac5 +0x45:  nop
```

## 反编译 C

```c
// game_master::CBoosterTest::getRarityStr @ 0x84aea80

/* game_master::CBoosterTest::getRarityStr(ENUM_RARITY) */

char * game_master::CBoosterTest::getRarityStr(undefined4 param_1)

{
  char *pcVar1;
  
  switch(param_1) {
  case 0:
    pcVar1 = "common";
    break;
  case 1:
    pcVar1 = "uncommon";
    break;
  case 2:
    pcVar1 = "rare";
    break;
  case 3:
    pcVar1 = "unique";
    break;
  case 4:
    pcVar1 = "epic";
    break;
  case 5:
    pcVar1 = "chronicle";
    break;
  default:
    pcVar1 = "unknown";
  }
  return pcVar1;
}
```

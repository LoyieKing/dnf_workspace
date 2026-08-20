# isValidLevel

`_ZN12advancealtar14BuyUpgradeData12isValidLevelEi`

`advancealtar::BuyUpgradeData::isValidLevel(int)`

| 类 | 地址 |
|---|---|
| `advancealtar::BuyUpgradeData` | `0x088a345e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088a345e  _ZN12advancealtar14BuyUpgradeData12isValidLevelEi
#           advancealtar::BuyUpgradeData::isValidLevel(int)
# range [0x088a345e, 0x088a34a1]
088a345e +0x00:  push   %ebp
088a345f +0x01:  mov    %esp,%ebp
088a3461 +0x03:  sub    $0x28,%esp
088a3464 +0x06:  movb   $0x1,-0x9(%ebp)
088a3468 +0x0a:  mov    0x8(%ebp),%eax
088a346b +0x0d:  mov    %eax,(%esp)
088a346e +0x10:  call   088a33c0 <_ZNK12advancealtar14BuyUpgradeData11getMinLevelEv>  ; advancealtar::BuyUpgradeData::getMinLevel() const
088a3473 +0x15:  cmp    0xc(%ebp),%eax
088a3476 +0x18:  jg     088a3488 <+0x2a>
088a3478 +0x1a:  mov    0x8(%ebp),%eax
088a347b +0x1d:  mov    %eax,(%esp)
088a347e +0x20:  call   088a3322 <_ZNK12advancealtar14BuyUpgradeData11getMaxLevelEv>  ; advancealtar::BuyUpgradeData::getMaxLevel() const
088a3483 +0x25:  cmp    0xc(%ebp),%eax
088a3486 +0x28:  jge    088a348f <+0x31>
088a3488 +0x2a:  mov    $0x1,%eax
088a348d +0x2f:  jmp    088a3494 <+0x36>
088a348f +0x31:  mov    $0x0,%eax
088a3494 +0x36:  test   %al,%al
088a3496 +0x38:  je     088a349c <+0x3e>
088a3498 +0x3a:  movb   $0x0,-0x9(%ebp)
088a349c +0x3e:  movzbl -0x9(%ebp),%eax
088a34a0 +0x42:  leave
088a34a1 +0x43:  ret
```

## 反编译 C

```c
// advancealtar::BuyUpgradeData::isValidLevel @ 0x88a345e

/* advancealtar::BuyUpgradeData::isValidLevel(int) */

bool __thiscall advancealtar::BuyUpgradeData::isValidLevel(BuyUpgradeData *this,int param_1)

{
  int iVar1;
  bool local_d;
  
  iVar1 = getMinLevel();
  if ((param_1 < iVar1) || (iVar1 = getMaxLevel(), iVar1 < param_1)) {
    local_d = true;
  }
  else {
    local_d = false;
  }
  local_d = !local_d;
  return local_d;
}
```

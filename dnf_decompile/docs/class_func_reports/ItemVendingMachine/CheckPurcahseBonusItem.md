# CheckPurcahseBonusItem

`_ZN18ItemVendingMachine22CheckPurcahseBonusItemEm`

`ItemVendingMachine::CheckPurcahseBonusItem(unsigned long)`

| 类 | 地址 |
|---|---|
| `ItemVendingMachine` | `0x08179ed8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08179ed8  _ZN18ItemVendingMachine22CheckPurcahseBonusItemEm
#           ItemVendingMachine::CheckPurcahseBonusItem(unsigned long)
# range [0x08179ed8, 0x08179f07]
08179ed8 +0x00:  push   %ebp
08179ed9 +0x01:  mov    %esp,%ebp
08179edb +0x03:  sub    $0x18,%esp
08179ede +0x06:  mov    0xc(%ebp),%eax
08179ee1 +0x09:  mov    0x8(%ebp),%edx
08179ee4 +0x0c:  add    $0x8,%edx
08179ee7 +0x0f:  mov    %eax,0x4(%esp)
08179eeb +0x13:  mov    %edx,(%esp)
08179eee +0x16:  call   081abff0 <_ZN4ARAD26CeraShopPurcahseCountBonus14CheckBonusItemEi>  ; ARAD::CeraShopPurcahseCountBonus::CheckBonusItem(int)
08179ef3 +0x1b:  xor    $0x1,%eax
08179ef6 +0x1e:  test   %al,%al
08179ef8 +0x20:  je     08179f01 <+0x29>
08179efa +0x22:  mov    $0x0,%eax
08179eff +0x27:  jmp    08179f06 <+0x2e>
08179f01 +0x29:  mov    $0x1,%eax
08179f06 +0x2e:  leave
08179f07 +0x2f:  ret
```

## 反编译 C

```c
// ItemVendingMachine::CheckPurcahseBonusItem @ 0x8179ed8

/* ItemVendingMachine::CheckPurcahseBonusItem(unsigned long) */

bool ItemVendingMachine::CheckPurcahseBonusItem(ulong param_1)

{
  char cVar1;
  
  cVar1 = ARAD::CeraShopPurcahseCountBonus::CheckBonusItem(param_1 + 8);
  return cVar1 == '\x01';
}
```

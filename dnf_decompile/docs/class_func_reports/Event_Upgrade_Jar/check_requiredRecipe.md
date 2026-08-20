# check_requiredRecipe

`_ZNK17Event_Upgrade_Jar20check_requiredRecipeERK10Inven_Item`

`Event_Upgrade_Jar::check_requiredRecipe(Inven_Item const&) const`

| 类 | 地址 |
|---|---|
| `Event_Upgrade_Jar` | `0x080f4bb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f4bb0  _ZNK17Event_Upgrade_Jar20check_requiredRecipeERK10Inven_Item
#           Event_Upgrade_Jar::check_requiredRecipe(Inven_Item const&) const
# range [0x080f4bb0, 0x080f4bdf]
080f4bb0 +0x00:  push   %ebp
080f4bb1 +0x01:  mov    %esp,%ebp
080f4bb3 +0x03:  mov    0xc(%ebp),%eax
080f4bb6 +0x06:  mov    0x2(%eax),%eax
080f4bb9 +0x09:  cmp    $0x28be7d,%eax
080f4bbe +0x0e:  je     080f4bc7 <+0x17>
080f4bc0 +0x10:  mov    $0x0,%eax
080f4bc5 +0x15:  jmp    080f4bdd <+0x2d>
080f4bc7 +0x17:  mov    0xc(%ebp),%eax
080f4bca +0x1a:  mov    0x7(%eax),%eax
080f4bcd +0x1d:  test   %eax,%eax
080f4bcf +0x1f:  jg     080f4bd8 <+0x28>
080f4bd1 +0x21:  mov    $0x0,%eax
080f4bd6 +0x26:  jmp    080f4bdd <+0x2d>
080f4bd8 +0x28:  mov    $0x1,%eax
080f4bdd +0x2d:  pop    %ebp
080f4bde +0x2e:  ret
080f4bdf +0x2f:  nop
```

## 反编译 C

```c
// Event_Upgrade_Jar::check_requiredRecipe @ 0x80f4bb0

/* Event_Upgrade_Jar::check_requiredRecipe(Inven_Item const&) const */

undefined4 __thiscall
Event_Upgrade_Jar::check_requiredRecipe(Event_Upgrade_Jar *this,Inven_Item *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 2) == 0x28be7d) {
    if (*(int *)(param_1 + 7) < 1) {
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

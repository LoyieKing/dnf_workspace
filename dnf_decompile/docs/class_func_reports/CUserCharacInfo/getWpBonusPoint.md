# getWpBonusPoint

`_ZN15CUserCharacInfo15getWpBonusPointER18WpBonusPointResult`

`CUserCharacInfo::getWpBonusPoint(WpBonusPointResult&)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0868ee26` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868ee26  _ZN15CUserCharacInfo15getWpBonusPointER18WpBonusPointResult
#           CUserCharacInfo::getWpBonusPoint(WpBonusPointResult&)
# range [0x0868ee26, 0x0868ee4f]
0868ee26 +0x00:  push   %ebp
0868ee27 +0x01:  mov    %esp,%ebp
0868ee29 +0x03:  mov    0x8(%ebp),%eax
0868ee2c +0x06:  mov    0x10(%eax),%eax
0868ee2f +0x09:  test   %eax,%eax
0868ee31 +0x0b:  je     0868ee4d <+0x27>
0868ee33 +0x0d:  mov    0x8(%ebp),%eax
0868ee36 +0x10:  mov    0x10(%eax),%eax
0868ee39 +0x13:  mov    0xc(%ebp),%ecx
0868ee3c +0x16:  mov    0x12a1(%eax),%edx
0868ee42 +0x1c:  mov    0x129d(%eax),%eax
0868ee48 +0x22:  mov    %eax,(%ecx)
0868ee4a +0x24:  mov    %edx,0x4(%ecx)
0868ee4d +0x27:  pop    %ebp
0868ee4e +0x28:  ret
0868ee4f +0x29:  nop
```

## 反编译 C

```c
// CUserCharacInfo::getWpBonusPoint @ 0x868ee26

/* CUserCharacInfo::getWpBonusPoint(WpBonusPointResult&) */

void __thiscall CUserCharacInfo::getWpBonusPoint(CUserCharacInfo *this,WpBonusPointResult *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x10) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(this + 0x10) + 0x12a1);
    *(undefined4 *)param_1 = *(undefined4 *)(*(int *)(this + 0x10) + 0x129d);
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  return;
}
```

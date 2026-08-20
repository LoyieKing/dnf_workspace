# getExpBonusPoint

`_ZN15CUserCharacInfo16getExpBonusPointER19ExpBonusPointResult`

`CUserCharacInfo::getExpBonusPoint(ExpBonusPointResult&)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0868ee50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868ee50  _ZN15CUserCharacInfo16getExpBonusPointER19ExpBonusPointResult
#           CUserCharacInfo::getExpBonusPoint(ExpBonusPointResult&)
# range [0x0868ee50, 0x0868ee79]
0868ee50 +0x00:  push   %ebp
0868ee51 +0x01:  mov    %esp,%ebp
0868ee53 +0x03:  mov    0x8(%ebp),%eax
0868ee56 +0x06:  mov    0x10(%eax),%eax
0868ee59 +0x09:  test   %eax,%eax
0868ee5b +0x0b:  je     0868ee77 <+0x27>
0868ee5d +0x0d:  mov    0x8(%ebp),%eax
0868ee60 +0x10:  mov    0x10(%eax),%eax
0868ee63 +0x13:  mov    0xc(%ebp),%ecx
0868ee66 +0x16:  mov    0x12a9(%eax),%edx
0868ee6c +0x1c:  mov    0x12a5(%eax),%eax
0868ee72 +0x22:  mov    %eax,(%ecx)
0868ee74 +0x24:  mov    %edx,0x4(%ecx)
0868ee77 +0x27:  pop    %ebp
0868ee78 +0x28:  ret
0868ee79 +0x29:  nop
```

## 反编译 C

```c
// CUserCharacInfo::getExpBonusPoint @ 0x868ee50

/* CUserCharacInfo::getExpBonusPoint(ExpBonusPointResult&) */

void __thiscall
CUserCharacInfo::getExpBonusPoint(CUserCharacInfo *this,ExpBonusPointResult *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x10) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(this + 0x10) + 0x12a9);
    *(undefined4 *)param_1 = *(undefined4 *)(*(int *)(this + 0x10) + 0x12a5);
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  return;
}
```

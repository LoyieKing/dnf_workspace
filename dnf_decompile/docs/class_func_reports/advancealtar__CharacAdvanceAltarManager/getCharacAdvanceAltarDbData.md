# getCharacAdvanceAltarDbData

`_ZNK12advancealtar25CharacAdvanceAltarManager27getCharacAdvanceAltarDbDataERNS_25_CharacAdvanceAltarDbDataE`

`advancealtar::CharacAdvanceAltarManager::getCharacAdvanceAltarDbData(advancealtar::_CharacAdvanceAltarDbData&) const`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x08131710` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08131710  _ZNK12advancealtar25CharacAdvanceAltarManager27getCharacAdvanceAltarDbDataERNS_25_CharacAdvanceAltarDbDataE
#           advancealtar::CharacAdvanceAltarManager::getCharacAdvanceAltarDbData(advancealtar::_CharacAdvanceAltarDbData&) const
# range [0x08131710, 0x08131759]
08131710 +0x00:  push   %ebp
08131711 +0x01:  mov    %esp,%ebp
08131713 +0x03:  sub    $0x28,%esp
08131716 +0x06:  movl   $0x0,-0xc(%ebp)
0813171d +0x0d:  jmp    0813174d <+0x3d>
0813171f +0x0f:  mov    -0xc(%ebp),%eax
08131722 +0x12:  imul   $0x518,%eax,%eax
08131728 +0x18:  add    0xc(%ebp),%eax
0813172b +0x1b:  lea    0x4(%eax),%edx
0813172e +0x1e:  mov    -0xc(%ebp),%eax
08131731 +0x21:  imul   $0xd0,%eax,%eax
08131737 +0x27:  add    0x8(%ebp),%eax
0813173a +0x2a:  add    $0x4,%eax
0813173d +0x2d:  mov    %edx,0x4(%esp)
08131741 +0x31:  mov    %eax,(%esp)
08131744 +0x34:  call   088996d8 <_ZNK12advancealtar16AdvanceAltarData3getERNS_19_AdvanceAltarDbDataE>  ; advancealtar::AdvanceAltarData::get(advancealtar::_AdvanceAltarDbData&) const
08131749 +0x39:  addl   $0x1,-0xc(%ebp)
0813174d +0x3d:  cmpl   $0x0,-0xc(%ebp)
08131751 +0x41:  setle  %al
08131754 +0x44:  test   %al,%al
08131756 +0x46:  jne    0813171f <+0xf>
08131758 +0x48:  leave
08131759 +0x49:  ret
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::getCharacAdvanceAltarDbData @ 0x8131710

/* advancealtar::CharacAdvanceAltarManager::getCharacAdvanceAltarDbData(advancealtar::_CharacAdvanceAltarDbData&)
   const */

void __thiscall
advancealtar::CharacAdvanceAltarManager::getCharacAdvanceAltarDbData
          (CharacAdvanceAltarManager *this,_CharacAdvanceAltarDbData *param_1)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 1; local_10 = local_10 + 1) {
    AdvanceAltarData::get
              ((AdvanceAltarData *)(this + local_10 * 0xd0 + 4),
               (_AdvanceAltarDbData *)(param_1 + local_10 * 0x518 + 4));
  }
  return;
}
```

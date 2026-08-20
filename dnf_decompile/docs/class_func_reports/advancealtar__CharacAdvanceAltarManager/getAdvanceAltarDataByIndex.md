# getAdvanceAltarDataByIndex

`_ZN12advancealtar25CharacAdvanceAltarManager26getAdvanceAltarDataByIndexEi`

`advancealtar::CharacAdvanceAltarManager::getAdvanceAltarDataByIndex(int)`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x081316e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081316e8  _ZN12advancealtar25CharacAdvanceAltarManager26getAdvanceAltarDataByIndexEi
#           advancealtar::CharacAdvanceAltarManager::getAdvanceAltarDataByIndex(int)
# range [0x081316e8, 0x0813170f]
081316e8 +0x00:  push   %ebp
081316e9 +0x01:  mov    %esp,%ebp
081316eb +0x03:  cmpl   $0x0,0xc(%ebp)
081316ef +0x07:  js     081316f7 <+0xf>
081316f1 +0x09:  cmpl   $0x0,0xc(%ebp)
081316f5 +0x0d:  jle    081316fe <+0x16>
081316f7 +0x0f:  mov    $0x0,%eax
081316fc +0x14:  jmp    0813170d <+0x25>
081316fe +0x16:  mov    0xc(%ebp),%eax
08131701 +0x19:  imul   $0xd0,%eax,%eax
08131707 +0x1f:  add    0x8(%ebp),%eax
0813170a +0x22:  add    $0x4,%eax
0813170d +0x25:  pop    %ebp
0813170e +0x26:  ret
0813170f +0x27:  nop
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::getAdvanceAltarDataByIndex @ 0x81316e8

/* advancealtar::CharacAdvanceAltarManager::getAdvanceAltarDataByIndex(int) */

CharacAdvanceAltarManager * __thiscall
advancealtar::CharacAdvanceAltarManager::getAdvanceAltarDataByIndex
          (CharacAdvanceAltarManager *this,int param_1)

{
  CharacAdvanceAltarManager *pCVar1;
  
  if ((param_1 < 0) || (0 < param_1)) {
    pCVar1 = (CharacAdvanceAltarManager *)0x0;
  }
  else {
    pCVar1 = this + param_1 * 0xd0 + 4;
  }
  return pCVar1;
}
```

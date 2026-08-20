# getCurrentRidableId

`_ZNK12advancealtar25CharacAdvanceAltarManager19getCurrentRidableIdEv`

`advancealtar::CharacAdvanceAltarManager::getCurrentRidableId() const`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x081312d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081312d0  _ZNK12advancealtar25CharacAdvanceAltarManager19getCurrentRidableIdEv
#           advancealtar::CharacAdvanceAltarManager::getCurrentRidableId() const
# range [0x081312d0, 0x081312eb]
081312d0 +0x00:  push   %ebp
081312d1 +0x01:  mov    %esp,%ebp
081312d3 +0x03:  mov    0x8(%ebp),%eax
081312d6 +0x06:  mov    (%eax),%eax
081312d8 +0x08:  test   %eax,%eax
081312da +0x0a:  jne    081312e3 <+0x13>
081312dc +0x0c:  mov    $0x0,%eax
081312e1 +0x11:  jmp    081312ea <+0x1a>
081312e3 +0x13:  mov    0x8(%ebp),%eax
081312e6 +0x16:  mov    (%eax),%eax
081312e8 +0x18:  mov    (%eax),%eax
081312ea +0x1a:  pop    %ebp
081312eb +0x1b:  ret
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::getCurrentRidableId @ 0x81312d0

/* advancealtar::CharacAdvanceAltarManager::getCurrentRidableId() const */

undefined4 __thiscall
advancealtar::CharacAdvanceAltarManager::getCurrentRidableId(CharacAdvanceAltarManager *this)

{
  undefined4 uVar1;
  
  if (*(int *)this == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = **(undefined4 **)this;
  }
  return uVar1;
}
```

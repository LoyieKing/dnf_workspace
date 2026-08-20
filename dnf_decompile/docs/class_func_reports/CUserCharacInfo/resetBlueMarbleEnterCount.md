# resetBlueMarbleEnterCount

`_ZN15CUserCharacInfo25resetBlueMarbleEnterCountEv`

`CUserCharacInfo::resetBlueMarbleEnterCount()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08690ed8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08690ed8  _ZN15CUserCharacInfo25resetBlueMarbleEnterCountEv
#           CUserCharacInfo::resetBlueMarbleEnterCount()
# range [0x08690ed8, 0x08690ef3]
08690ed8 +0x00:  push   %ebp
08690ed9 +0x01:  mov    %esp,%ebp
08690edb +0x03:  mov    0x8(%ebp),%eax
08690ede +0x06:  mov    0x10(%eax),%eax
08690ee1 +0x09:  test   %eax,%eax
08690ee3 +0x0b:  je     08690ef2 <+0x1a>
08690ee5 +0x0d:  mov    0x8(%ebp),%eax
08690ee8 +0x10:  mov    0x10(%eax),%eax
08690eeb +0x13:  movb   $0x0,0x14bd(%eax)
08690ef2 +0x1a:  pop    %ebp
08690ef3 +0x1b:  ret
```

## 反编译 C

```c
// CUserCharacInfo::resetBlueMarbleEnterCount @ 0x8690ed8

/* CUserCharacInfo::resetBlueMarbleEnterCount() */

void __thiscall CUserCharacInfo::resetBlueMarbleEnterCount(CUserCharacInfo *this)

{
  if (*(int *)(this + 0x10) != 0) {
    *(undefined1 *)(*(int *)(this + 0x10) + 0x14bd) = 0;
  }
  return;
}
```

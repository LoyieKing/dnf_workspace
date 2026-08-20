# increaseBlueMarbleEnterCount

`_ZN15CUserCharacInfo28increaseBlueMarbleEnterCountEv`

`CUserCharacInfo::increaseBlueMarbleEnterCount()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08690f1c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08690f1c  _ZN15CUserCharacInfo28increaseBlueMarbleEnterCountEv
#           CUserCharacInfo::increaseBlueMarbleEnterCount()
# range [0x08690f1c, 0x08690f41]
08690f1c +0x00:  push   %ebp
08690f1d +0x01:  mov    %esp,%ebp
08690f1f +0x03:  mov    0x8(%ebp),%eax
08690f22 +0x06:  mov    0x10(%eax),%eax
08690f25 +0x09:  test   %eax,%eax
08690f27 +0x0b:  je     08690f3f <+0x23>
08690f29 +0x0d:  mov    0x8(%ebp),%eax
08690f2c +0x10:  mov    0x10(%eax),%eax
08690f2f +0x13:  movzbl 0x14bd(%eax),%edx
08690f36 +0x1a:  add    $0x1,%edx
08690f39 +0x1d:  mov    %dl,0x14bd(%eax)
08690f3f +0x23:  pop    %ebp
08690f40 +0x24:  ret
08690f41 +0x25:  nop
```

## 反编译 C

```c
// CUserCharacInfo::increaseBlueMarbleEnterCount @ 0x8690f1c

/* CUserCharacInfo::increaseBlueMarbleEnterCount() */

void __thiscall CUserCharacInfo::increaseBlueMarbleEnterCount(CUserCharacInfo *this)

{
  if (*(int *)(this + 0x10) != 0) {
    *(char *)(*(int *)(this + 0x10) + 0x14bd) = *(char *)(*(int *)(this + 0x10) + 0x14bd) + '\x01';
  }
  return;
}
```

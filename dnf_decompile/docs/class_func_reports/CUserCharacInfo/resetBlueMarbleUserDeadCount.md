# resetBlueMarbleUserDeadCount

`_ZN15CUserCharacInfo28resetBlueMarbleUserDeadCountEv`

`CUserCharacInfo::resetBlueMarbleUserDeadCount()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08690f66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08690f66  _ZN15CUserCharacInfo28resetBlueMarbleUserDeadCountEv
#           CUserCharacInfo::resetBlueMarbleUserDeadCount()
# range [0x08690f66, 0x08690f85]
08690f66 +0x00:  push   %ebp
08690f67 +0x01:  mov    %esp,%ebp
08690f69 +0x03:  mov    0x8(%ebp),%eax
08690f6c +0x06:  mov    0x10(%eax),%eax
08690f6f +0x09:  test   %eax,%eax
08690f71 +0x0b:  je     08690f83 <+0x1d>
08690f73 +0x0d:  mov    0x8(%ebp),%eax
08690f76 +0x10:  mov    0x10(%eax),%eax
08690f79 +0x13:  movl   $0x0,0x14be(%eax)
08690f83 +0x1d:  pop    %ebp
08690f84 +0x1e:  ret
08690f85 +0x1f:  nop
```

## 反编译 C

```c
// CUserCharacInfo::resetBlueMarbleUserDeadCount @ 0x8690f66

/* CUserCharacInfo::resetBlueMarbleUserDeadCount() */

void __thiscall CUserCharacInfo::resetBlueMarbleUserDeadCount(CUserCharacInfo *this)

{
  if (*(int *)(this + 0x10) != 0) {
    *(undefined4 *)(*(int *)(this + 0x10) + 0x14be) = 0;
  }
  return;
}
```

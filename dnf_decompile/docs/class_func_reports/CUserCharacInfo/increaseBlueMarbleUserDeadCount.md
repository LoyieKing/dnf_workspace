# increaseBlueMarbleUserDeadCount

`_ZN15CUserCharacInfo31increaseBlueMarbleUserDeadCountEv`

`CUserCharacInfo::increaseBlueMarbleUserDeadCount()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08690f86` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08690f86  _ZN15CUserCharacInfo31increaseBlueMarbleUserDeadCountEv
#           CUserCharacInfo::increaseBlueMarbleUserDeadCount()
# range [0x08690f86, 0x08690fa9]
08690f86 +0x00:  push   %ebp
08690f87 +0x01:  mov    %esp,%ebp
08690f89 +0x03:  mov    0x8(%ebp),%eax
08690f8c +0x06:  mov    0x10(%eax),%eax
08690f8f +0x09:  test   %eax,%eax
08690f91 +0x0b:  je     08690fa8 <+0x22>
08690f93 +0x0d:  mov    0x8(%ebp),%eax
08690f96 +0x10:  mov    0x10(%eax),%eax
08690f99 +0x13:  mov    0x14be(%eax),%edx
08690f9f +0x19:  add    $0x1,%edx
08690fa2 +0x1c:  mov    %edx,0x14be(%eax)
08690fa8 +0x22:  pop    %ebp
08690fa9 +0x23:  ret
```

## 反编译 C

```c
// CUserCharacInfo::increaseBlueMarbleUserDeadCount @ 0x8690f86

/* CUserCharacInfo::increaseBlueMarbleUserDeadCount() */

void __thiscall CUserCharacInfo::increaseBlueMarbleUserDeadCount(CUserCharacInfo *this)

{
  if (*(int *)(this + 0x10) != 0) {
    *(int *)(*(int *)(this + 0x10) + 0x14be) = *(int *)(*(int *)(this + 0x10) + 0x14be) + 1;
  }
  return;
}
```

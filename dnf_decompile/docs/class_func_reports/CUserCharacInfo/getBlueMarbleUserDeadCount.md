# getBlueMarbleUserDeadCount

`_ZNK15CUserCharacInfo26getBlueMarbleUserDeadCountEv`

`CUserCharacInfo::getBlueMarbleUserDeadCount() const`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08690faa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08690faa  _ZNK15CUserCharacInfo26getBlueMarbleUserDeadCountEv
#           CUserCharacInfo::getBlueMarbleUserDeadCount() const
# range [0x08690faa, 0x08690fcb]
08690faa +0x00:  push   %ebp
08690fab +0x01:  mov    %esp,%ebp
08690fad +0x03:  mov    0x8(%ebp),%eax
08690fb0 +0x06:  mov    0x10(%eax),%eax
08690fb3 +0x09:  test   %eax,%eax
08690fb5 +0x0b:  je     08690fc5 <+0x1b>
08690fb7 +0x0d:  mov    0x8(%ebp),%eax
08690fba +0x10:  mov    0x10(%eax),%eax
08690fbd +0x13:  mov    0x14be(%eax),%eax
08690fc3 +0x19:  jmp    08690fca <+0x20>
08690fc5 +0x1b:  mov    $0x0,%eax
08690fca +0x20:  pop    %ebp
08690fcb +0x21:  ret
```

## 反编译 C

```c
// CUserCharacInfo::getBlueMarbleUserDeadCount @ 0x8690faa

/* CUserCharacInfo::getBlueMarbleUserDeadCount() const */

undefined4 __thiscall CUserCharacInfo::getBlueMarbleUserDeadCount(CUserCharacInfo *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(this + 0x10) + 0x14be);
  }
  return uVar1;
}
```

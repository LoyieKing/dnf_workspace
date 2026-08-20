# GetCurCharacMaxEquipLevel

`_ZNK15CUserCharacInfo25GetCurCharacMaxEquipLevelEv`

`CUserCharacInfo::GetCurCharacMaxEquipLevel() const`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x086467a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086467a0  _ZNK15CUserCharacInfo25GetCurCharacMaxEquipLevelEv
#           CUserCharacInfo::GetCurCharacMaxEquipLevel() const
# range [0x086467a0, 0x086467c1]
086467a0 +0x00:  push   %ebp
086467a1 +0x01:  mov    %esp,%ebp
086467a3 +0x03:  mov    0x8(%ebp),%eax
086467a6 +0x06:  mov    0x10(%eax),%eax
086467a9 +0x09:  test   %eax,%eax
086467ab +0x0b:  je     086467bb <+0x1b>
086467ad +0x0d:  mov    0x8(%ebp),%eax
086467b0 +0x10:  mov    0x10(%eax),%eax
086467b3 +0x13:  mov    0x14c2(%eax),%eax
086467b9 +0x19:  jmp    086467c0 <+0x20>
086467bb +0x1b:  mov    $0x0,%eax
086467c0 +0x20:  pop    %ebp
086467c1 +0x21:  ret
```

## 反编译 C

```c
// CUserCharacInfo::GetCurCharacMaxEquipLevel @ 0x86467a0

/* CUserCharacInfo::GetCurCharacMaxEquipLevel() const */

undefined4 __thiscall CUserCharacInfo::GetCurCharacMaxEquipLevel(CUserCharacInfo *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(this + 0x10) + 0x14c2);
  }
  return uVar1;
}
```

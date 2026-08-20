# get_charac_level_before_dungeon

`_ZNK15CUserCharacInfo31get_charac_level_before_dungeonEv`

`CUserCharacInfo::get_charac_level_before_dungeon() const`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08645d52` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08645d52  _ZNK15CUserCharacInfo31get_charac_level_before_dungeonEv
#           CUserCharacInfo::get_charac_level_before_dungeon() const
# range [0x08645d52, 0x08645d95]
08645d52 +0x00:  push   %ebp
08645d53 +0x01:  mov    %esp,%ebp
08645d55 +0x03:  mov    0x8(%ebp),%eax
08645d58 +0x06:  mov    0x10(%eax),%eax
08645d5b +0x09:  test   %eax,%eax
08645d5d +0x0b:  je     08645d8e <+0x3c>
08645d5f +0x0d:  mov    0x8(%ebp),%eax
08645d62 +0x10:  mov    0x10(%eax),%eax
08645d65 +0x13:  movzwl 0xdfc(%eax),%eax
08645d6c +0x1a:  test   %ax,%ax
08645d6f +0x1d:  je     08645d81 <+0x2f>
08645d71 +0x1f:  mov    0x8(%ebp),%eax
08645d74 +0x22:  mov    0x10(%eax),%eax
08645d77 +0x25:  movzwl 0xdfc(%eax),%eax
08645d7e +0x2c:  cwtl
08645d7f +0x2d:  jmp    08645d93 <+0x41>
08645d81 +0x2f:  mov    0x8(%ebp),%eax
08645d84 +0x32:  mov    0x10(%eax),%eax
08645d87 +0x35:  movzwl 0x27(%eax),%eax
08645d8b +0x39:  cwtl
08645d8c +0x3a:  jmp    08645d93 <+0x41>
08645d8e +0x3c:  mov    $0x0,%eax
08645d93 +0x41:  pop    %ebp
08645d94 +0x42:  ret
08645d95 +0x43:  nop
```

## 反编译 C

```c
// CUserCharacInfo::get_charac_level_before_dungeon @ 0x8645d52

/* CUserCharacInfo::get_charac_level_before_dungeon() const */

int __thiscall CUserCharacInfo::get_charac_level_before_dungeon(CUserCharacInfo *this)

{
  int iVar1;
  
  if (*(int *)(this + 0x10) == 0) {
    iVar1 = 0;
  }
  else if (*(short *)(*(int *)(this + 0x10) + 0xdfc) == 0) {
    iVar1 = (int)*(short *)(*(int *)(this + 0x10) + 0x27);
  }
  else {
    iVar1 = (int)*(short *)(*(int *)(this + 0x10) + 0xdfc);
  }
  return iVar1;
}
```

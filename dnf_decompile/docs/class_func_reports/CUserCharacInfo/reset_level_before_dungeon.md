# reset_level_before_dungeon

`_ZN15CUserCharacInfo26reset_level_before_dungeonEv`

`CUserCharacInfo::reset_level_before_dungeon()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08645d96` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08645d96  _ZN15CUserCharacInfo26reset_level_before_dungeonEv
#           CUserCharacInfo::reset_level_before_dungeon()
# range [0x08645d96, 0x08645db3]
08645d96 +0x00:  push   %ebp
08645d97 +0x01:  mov    %esp,%ebp
08645d99 +0x03:  mov    0x8(%ebp),%eax
08645d9c +0x06:  mov    0x10(%eax),%eax
08645d9f +0x09:  test   %eax,%eax
08645da1 +0x0b:  je     08645db2 <+0x1c>
08645da3 +0x0d:  mov    0x8(%ebp),%eax
08645da6 +0x10:  mov    0x10(%eax),%eax
08645da9 +0x13:  movw   $0x0,0xdfc(%eax)
08645db2 +0x1c:  pop    %ebp
08645db3 +0x1d:  ret
```

## 反编译 C

```c
// CUserCharacInfo::reset_level_before_dungeon @ 0x8645d96

/* CUserCharacInfo::reset_level_before_dungeon() */

void __thiscall CUserCharacInfo::reset_level_before_dungeon(CUserCharacInfo *this)

{
  if (*(int *)(this + 0x10) != 0) {
    *(undefined2 *)(*(int *)(this + 0x10) + 0xdfc) = 0;
  }
  return;
}
```

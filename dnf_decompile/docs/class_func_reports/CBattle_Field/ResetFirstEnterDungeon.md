# ResetFirstEnterDungeon

`_ZN13CBattle_Field22ResetFirstEnterDungeonEv`

`CBattle_Field::ResetFirstEnterDungeon()`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08307662` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08307662  _ZN13CBattle_Field22ResetFirstEnterDungeonEv
#           CBattle_Field::ResetFirstEnterDungeon()
# range [0x08307662, 0x0830766d]
08307662 +0x00:  push   %ebp
08307663 +0x01:  mov    %esp,%ebp
08307665 +0x03:  mov    0x8(%ebp),%eax
08307668 +0x06:  movb   $0x0,0x5c(%eax)
0830766c +0x0a:  pop    %ebp
0830766d +0x0b:  ret
```

## 反编译 C

```c
// CBattle_Field::ResetFirstEnterDungeon @ 0x8307662

/* CBattle_Field::ResetFirstEnterDungeon() */

void __thiscall CBattle_Field::ResetFirstEnterDungeon(CBattle_Field *this)

{
  this[0x5c] = (CBattle_Field)0x0;
  return;
}
```

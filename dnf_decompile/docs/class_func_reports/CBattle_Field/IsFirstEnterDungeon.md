# IsFirstEnterDungeon

`_ZN13CBattle_Field19IsFirstEnterDungeonEv`

`CBattle_Field::IsFirstEnterDungeon()`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08307656` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08307656  _ZN13CBattle_Field19IsFirstEnterDungeonEv
#           CBattle_Field::IsFirstEnterDungeon()
# range [0x08307656, 0x08307661]
08307656 +0x00:  push   %ebp
08307657 +0x01:  mov    %esp,%ebp
08307659 +0x03:  mov    0x8(%ebp),%eax
0830765c +0x06:  movzbl 0x5c(%eax),%eax
08307660 +0x0a:  pop    %ebp
08307661 +0x0b:  ret
```

## 反编译 C

```c
// CBattle_Field::IsFirstEnterDungeon @ 0x8307656

/* CBattle_Field::IsFirstEnterDungeon() */

CBattle_Field __thiscall CBattle_Field::IsFirstEnterDungeon(CBattle_Field *this)

{
  return this[0x5c];
}
```

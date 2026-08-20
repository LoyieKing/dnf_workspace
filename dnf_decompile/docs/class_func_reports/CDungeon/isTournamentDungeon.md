# isTournamentDungeon

`_ZNK8CDungeon19isTournamentDungeonEv`

`CDungeon::isTournamentDungeon() const`

| 类 | 地址 |
|---|---|
| `CDungeon` | `0x0836520a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0836520a  _ZNK8CDungeon19isTournamentDungeonEv
#           CDungeon::isTournamentDungeon() const
# range [0x0836520a, 0x08365237]
0836520a +0x00:  push   %ebp
0836520b +0x01:  mov    %esp,%ebp
0836520d +0x03:  mov    0x8(%ebp),%eax
08365210 +0x06:  movzbl 0x8a8(%eax),%eax
08365217 +0x0d:  test   %al,%al
08365219 +0x0f:  je     08365230 <+0x26>
0836521b +0x11:  mov    0x8(%ebp),%eax
0836521e +0x14:  movzbl 0x8a8(%eax),%eax
08365225 +0x1b:  cmp    $0x1,%al
08365227 +0x1d:  jg     08365230 <+0x26>
08365229 +0x1f:  mov    $0x1,%eax
0836522e +0x24:  jmp    08365235 <+0x2b>
08365230 +0x26:  mov    $0x0,%eax
08365235 +0x2b:  pop    %ebp
08365236 +0x2c:  ret
08365237 +0x2d:  nop
```

## 反编译 C

```c
// CDungeon::isTournamentDungeon @ 0x836520a

/* CDungeon::isTournamentDungeon() const */

undefined4 __thiscall CDungeon::isTournamentDungeon(CDungeon *this)

{
  undefined4 uVar1;
  
  if ((this[0x8a8] == (CDungeon)0x0) || ('\x01' < (char)this[0x8a8])) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```

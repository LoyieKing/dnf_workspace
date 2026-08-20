# getPlayingDungeonIndex

`_ZN5CUser22getPlayingDungeonIndexEv`

`CUser::getPlayingDungeonIndex()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867cb82` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867cb82  _ZN5CUser22getPlayingDungeonIndexEv
#           CUser::getPlayingDungeonIndex()
# range [0x0867cb82, 0x0867cb8f]
0867cb82 +0x00:  push   %ebp
0867cb83 +0x01:  mov    %esp,%ebp
0867cb85 +0x03:  mov    0x8(%ebp),%eax
0867cb88 +0x06:  mov    0x8cf04(%eax),%eax
0867cb8e +0x0c:  pop    %ebp
0867cb8f +0x0d:  ret
```

## 反编译 C

```c
// CUser::getPlayingDungeonIndex @ 0x867cb82

/* CUser::getPlayingDungeonIndex() */

undefined4 __thiscall CUser::getPlayingDungeonIndex(CUser *this)

{
  return *(undefined4 *)(this + 0x8cf04);
}
```

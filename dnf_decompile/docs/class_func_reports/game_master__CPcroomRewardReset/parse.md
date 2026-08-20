# parse

`_ZN11game_master18CPcroomRewardReset5parseEv`

`game_master::CPcroomRewardReset::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CPcroomRewardReset` | `0x084b3d12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b3d12  _ZN11game_master18CPcroomRewardReset5parseEv
#           game_master::CPcroomRewardReset::parse()
# range [0x084b3d12, 0x084b3d1f]
084b3d12 +0x00:  push   %ebp
084b3d13 +0x01:  mov    %esp,%ebp
084b3d15 +0x03:  mov    0x8(%ebp),%eax
084b3d18 +0x06:  mov    0x4(%eax),%eax
084b3d1b +0x09:  test   %eax,%eax
084b3d1d +0x0b:  pop    %ebp
084b3d1e +0x0c:  ret
084b3d1f +0x0d:  nop
```

## 反编译 C

```c
// game_master::CPcroomRewardReset::parse @ 0x84b3d12

/* game_master::CPcroomRewardReset::parse() */

undefined4 __thiscall game_master::CPcroomRewardReset::parse(CPcroomRewardReset *this)

{
  return *(undefined4 *)(this + 4);
}
```

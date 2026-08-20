# reset

`_ZN16HeroMissionValue5resetEv`

`HeroMissionValue::reset()`

| 类 | 地址 |
|---|---|
| `HeroMissionValue` | `0x08164bb2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08164bb2  _ZN16HeroMissionValue5resetEv
#           HeroMissionValue::reset()
# range [0x08164bb2, 0x08164bc9]
08164bb2 +0x00:  push   %ebp
08164bb3 +0x01:  mov    %esp,%ebp
08164bb5 +0x03:  mov    0x8(%ebp),%eax
08164bb8 +0x06:  movw   $0x0,0x4(%eax)
08164bbe +0x0c:  mov    0x8(%ebp),%eax
08164bc1 +0x0f:  movw   $0x0,0x6(%eax)
08164bc7 +0x15:  pop    %ebp
08164bc8 +0x16:  ret
08164bc9 +0x17:  nop
```

## 反编译 C

```c
// HeroMissionValue::reset @ 0x8164bb2

/* HeroMissionValue::reset() */

void __thiscall HeroMissionValue::reset(HeroMissionValue *this)

{
  *(undefined2 *)(this + 4) = 0;
  *(undefined2 *)(this + 6) = 0;
  return;
}
```

# clear

`_ZN16HeroMissionValue5clearEv`

`HeroMissionValue::clear()`

| 类 | 地址 |
|---|---|
| `HeroMissionValue` | `0x08164b80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08164b80  _ZN16HeroMissionValue5clearEv
#           HeroMissionValue::clear()
# range [0x08164b80, 0x08164bb1]
08164b80 +0x00:  push   %ebp
08164b81 +0x01:  mov    %esp,%ebp
08164b83 +0x03:  mov    0x8(%ebp),%eax
08164b86 +0x06:  movl   $0x0,(%eax)
08164b8c +0x0c:  mov    0x8(%ebp),%eax
08164b8f +0x0f:  movw   $0x0,0x4(%eax)
08164b95 +0x15:  mov    0x8(%ebp),%eax
08164b98 +0x18:  movw   $0x0,0x6(%eax)
08164b9e +0x1e:  mov    0x8(%ebp),%eax
08164ba1 +0x21:  movw   $0x0,0x8(%eax)
08164ba7 +0x27:  mov    0x8(%ebp),%eax
08164baa +0x2a:  movw   $0x0,0xa(%eax)
08164bb0 +0x30:  pop    %ebp
08164bb1 +0x31:  ret
```

## 反编译 C

```c
// HeroMissionValue::clear @ 0x8164b80

/* HeroMissionValue::clear() */

void __thiscall HeroMissionValue::clear(HeroMissionValue *this)

{
  *(undefined4 *)this = 0;
  *(undefined2 *)(this + 4) = 0;
  *(undefined2 *)(this + 6) = 0;
  *(undefined2 *)(this + 8) = 0;
  *(undefined2 *)(this + 10) = 0;
  return;
}
```

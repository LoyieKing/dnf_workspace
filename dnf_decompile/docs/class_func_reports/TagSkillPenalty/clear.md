# clear

`_ZN15TagSkillPenalty5clearEv`

`TagSkillPenalty::clear()`

| 类 | 地址 |
|---|---|
| `TagSkillPenalty` | `0x08a9d77c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a9d77c  _ZN15TagSkillPenalty5clearEv
#           TagSkillPenalty::clear()
# range [0x08a9d77c, 0x08a9d7a5]
08a9d77c +0x00:  push   %ebp
08a9d77d +0x01:  mov    %esp,%ebp
08a9d77f +0x03:  mov    0x8(%ebp),%eax
08a9d782 +0x06:  movl   $0x0,(%eax)
08a9d788 +0x0c:  mov    0x8(%ebp),%eax
08a9d78b +0x0f:  movl   $0x0,0x4(%eax)
08a9d792 +0x16:  mov    0x8(%ebp),%eax
08a9d795 +0x19:  movb   $0x0,0x8(%eax)
08a9d799 +0x1d:  mov    0x8(%ebp),%eax
08a9d79c +0x20:  movl   $0x0,0xc(%eax)
08a9d7a3 +0x27:  pop    %ebp
08a9d7a4 +0x28:  ret
08a9d7a5 +0x29:  nop
```

## 反编译 C

```c
// TagSkillPenalty::clear @ 0x8a9d77c

/* TagSkillPenalty::clear() */

void __thiscall TagSkillPenalty::clear(TagSkillPenalty *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  this[8] = (TagSkillPenalty)0x0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}
```

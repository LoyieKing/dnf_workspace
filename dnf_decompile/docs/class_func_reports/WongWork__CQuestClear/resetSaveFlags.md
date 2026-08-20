# resetSaveFlags

`_ZN8WongWork11CQuestClear14resetSaveFlagsEv`

`WongWork::CQuestClear::resetSaveFlags()`

| 类 | 地址 |
|---|---|
| `WongWork::CQuestClear` | `0x0808bb4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808bb4e  _ZN8WongWork11CQuestClear14resetSaveFlagsEv
#           WongWork::CQuestClear::resetSaveFlags()
# range [0x0808bb4e, 0x0808bb5d]
0808bb4e +0x00:  push   %ebp
0808bb4f +0x01:  mov    %esp,%ebp
0808bb51 +0x03:  mov    0x8(%ebp),%eax
0808bb54 +0x06:  movb   $0x0,0x7530(%eax)
0808bb5b +0x0d:  pop    %ebp
0808bb5c +0x0e:  ret
0808bb5d +0x0f:  nop
```

## 反编译 C

```c
// WongWork::CQuestClear::resetSaveFlags @ 0x808bb4e

/* WongWork::CQuestClear::resetSaveFlags() */

void __thiscall WongWork::CQuestClear::resetSaveFlags(CQuestClear *this)

{
  this[30000] = (CQuestClear)0x0;
  return;
}
```

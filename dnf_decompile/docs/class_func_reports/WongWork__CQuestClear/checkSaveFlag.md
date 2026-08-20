# checkSaveFlag

`_ZNK8WongWork11CQuestClear13checkSaveFlagEv`

`WongWork::CQuestClear::checkSaveFlag() const`

| 类 | 地址 |
|---|---|
| `WongWork::CQuestClear` | `0x0808bb3e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808bb3e  _ZNK8WongWork11CQuestClear13checkSaveFlagEv
#           WongWork::CQuestClear::checkSaveFlag() const
# range [0x0808bb3e, 0x0808bb4d]
0808bb3e +0x00:  push   %ebp
0808bb3f +0x01:  mov    %esp,%ebp
0808bb41 +0x03:  mov    0x8(%ebp),%eax
0808bb44 +0x06:  movzbl 0x7530(%eax),%eax
0808bb4b +0x0d:  pop    %ebp
0808bb4c +0x0e:  ret
0808bb4d +0x0f:  nop
```

## 反编译 C

```c
// WongWork::CQuestClear::checkSaveFlag @ 0x808bb3e

/* WongWork::CQuestClear::checkSaveFlag() const */

CQuestClear __thiscall WongWork::CQuestClear::checkSaveFlag(CQuestClear *this)

{
  return this[30000];
}
```

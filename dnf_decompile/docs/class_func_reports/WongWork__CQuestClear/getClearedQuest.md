# getClearedQuest

`_ZNK8WongWork11CQuestClear15getClearedQuestEv`

`WongWork::CQuestClear::getClearedQuest() const`

| 类 | 地址 |
|---|---|
| `WongWork::CQuestClear` | `0x0808bb80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808bb80  _ZNK8WongWork11CQuestClear15getClearedQuestEv
#           WongWork::CQuestClear::getClearedQuest() const
# range [0x0808bb80, 0x0808bb87]
0808bb80 +0x00:  push   %ebp
0808bb81 +0x01:  mov    %esp,%ebp
0808bb83 +0x03:  mov    0x8(%ebp),%eax
0808bb86 +0x06:  pop    %ebp
0808bb87 +0x07:  ret
```

## 反编译 C

```c
// WongWork::CQuestClear::getClearedQuest @ 0x808bb80

/* WongWork::CQuestClear::getClearedQuest() const */

CQuestClear * __thiscall WongWork::CQuestClear::getClearedQuest(CQuestClear *this)

{
  return this;
}
```

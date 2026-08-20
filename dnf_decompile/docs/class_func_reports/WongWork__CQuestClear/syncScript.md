# syncScript

`_ZN8WongWork11CQuestClear10syncScriptEv`

`WongWork::CQuestClear::syncScript()`

| 类 | 地址 |
|---|---|
| `WongWork::CQuestClear` | `0x0808bb34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808bb34  _ZN8WongWork11CQuestClear10syncScriptEv
#           WongWork::CQuestClear::syncScript()
# range [0x0808bb34, 0x0808bb3d]
0808bb34 +0x00:  push   %ebp
0808bb35 +0x01:  mov    %esp,%ebp
0808bb37 +0x03:  mov    $0x1,%eax
0808bb3c +0x08:  pop    %ebp
0808bb3d +0x09:  ret
```

## 反编译 C

```c
// WongWork::CQuestClear::syncScript @ 0x808bb34

/* WongWork::CQuestClear::syncScript() */

undefined4 WongWork::CQuestClear::syncScript(void)

{
  return 1;
}
```

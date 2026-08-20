# clearScript

`_ZN20GlobalScriptTutorial11clearScriptEv`

`GlobalScriptTutorial::clearScript()`

| 类 | 地址 |
|---|---|
| `GlobalScriptTutorial` | `0x08ab9718` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab9718  _ZN20GlobalScriptTutorial11clearScriptEv
#           GlobalScriptTutorial::clearScript()
# range [0x08ab9718, 0x08ab971d]
08ab9718 +0x00:  push   %ebp
08ab9719 +0x01:  mov    %esp,%ebp
08ab971b +0x03:  pop    %ebp
08ab971c +0x04:  ret
08ab971d +0x05:  nop
```

## 反编译 C

```c
// GlobalScriptTutorial::clearScript @ 0x8ab9718

/* GlobalScriptTutorial::clearScript() */

void GlobalScriptTutorial::clearScript(void)

{
  return;
}
```

# ClearScript

`_ZN19CerashopAddRestrict12ScriptLoader11ClearScriptEv`

`CerashopAddRestrict::ScriptLoader::ClearScript()`

| 类 | 地址 |
|---|---|
| `CerashopAddRestrict::ScriptLoader` | `0x08abf704` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08abf704  _ZN19CerashopAddRestrict12ScriptLoader11ClearScriptEv
#           CerashopAddRestrict::ScriptLoader::ClearScript()
# range [0x08abf704, 0x08abf709]
08abf704 +0x00:  push   %ebp
08abf705 +0x01:  mov    %esp,%ebp
08abf707 +0x03:  pop    %ebp
08abf708 +0x04:  ret
08abf709 +0x05:  nop
```

## 反编译 C

```c
// CerashopAddRestrict::ScriptLoader::ClearScript @ 0x8abf704

/* CerashopAddRestrict::ScriptLoader::ClearScript() */

void CerashopAddRestrict::ScriptLoader::ClearScript(void)

{
  return;
}
```

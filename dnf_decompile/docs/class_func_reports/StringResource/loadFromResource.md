# loadFromResource

`_ZN14StringResource16loadFromResourceEPviP10CharString`

`StringResource::loadFromResource(void*, int, CharString*)`

| 类 | 地址 |
|---|---|
| `StringResource` | `0x08ad4dfa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad4dfa  _ZN14StringResource16loadFromResourceEPviP10CharString
#           StringResource::loadFromResource(void*, int, CharString*)
# range [0x08ad4dfa, 0x08ad4e03]
08ad4dfa +0x00:  push   %ebp
08ad4dfb +0x01:  mov    %esp,%ebp
08ad4dfd +0x03:  mov    $0x0,%eax
08ad4e02 +0x08:  pop    %ebp
08ad4e03 +0x09:  ret
```

## 反编译 C

```c
// StringResource::loadFromResource @ 0x8ad4dfa

/* StringResource::loadFromResource(void*, int, CharString*) */

undefined4 StringResource::loadFromResource(void *param_1,int param_2,CharString *param_3)

{
  return 0;
}
```

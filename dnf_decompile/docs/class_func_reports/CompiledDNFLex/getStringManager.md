# getStringManager

`_ZN14CompiledDNFLex16getStringManagerEv`

`CompiledDNFLex::getStringManager()`

| 类 | 地址 |
|---|---|
| `CompiledDNFLex` | `0x08ad0070` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad0070  _ZN14CompiledDNFLex16getStringManagerEv
#           CompiledDNFLex::getStringManager()
# range [0x08ad0070, 0x08ad007c]
08ad0070 +0x00:  push   %ebp
08ad0071 +0x01:  mov    %esp,%ebp
08ad0073 +0x03:  mov    0x8(%ebp),%eax
08ad0076 +0x06:  pop    %ebp
08ad0077 +0x07:  mov    0x10(%eax),%eax
08ad007a +0x0a:  ret
08ad007b +0x0b:  nop
08ad007c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// CompiledDNFLex::getStringManager @ 0x8ad0070

/* DWARF original prototype: ScriptStringManager * getStringManager(CompiledDNFLex * this) */

ScriptStringManager * __thiscall CompiledDNFLex::getStringManager(CompiledDNFLex *this)

{
  return this->stringManager_;
}
```

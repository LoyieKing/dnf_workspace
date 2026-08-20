# getStringFileList

`_ZN23RDARScriptStringManager17getStringFileListEv`

`RDARScriptStringManager::getStringFileList()`

| 类 | 地址 |
|---|---|
| `RDARScriptStringManager` | `0x08aa50b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08aa50b4  _ZN23RDARScriptStringManager17getStringFileListEv
#           RDARScriptStringManager::getStringFileList()
# range [0x08aa50b4, 0x08aa50bb]
08aa50b4 +0x00:  push   %ebp
08aa50b5 +0x01:  mov    %esp,%ebp
08aa50b7 +0x03:  mov    0x8(%ebp),%eax
08aa50ba +0x06:  pop    %ebp
08aa50bb +0x07:  ret
```

## 反编译 C

```c
// RDARScriptStringManager::getStringFileList @ 0x8aa50b4

/* RDARScriptStringManager::getStringFileList() */

RDARScriptStringManager * __thiscall
RDARScriptStringManager::getStringFileList(RDARScriptStringManager *this)

{
  return this;
}
```

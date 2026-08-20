# CEventCharacterHandler

`_ZN22CEventCharacterHandlerC1Ev`

`CEventCharacterHandler::CEventCharacterHandler()`

| 类 | 地址 |
|---|---|
| `CEventCharacterHandler` | `0x0848e29e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848e29e  _ZN22CEventCharacterHandlerC1Ev
#           CEventCharacterHandler::CEventCharacterHandler()
# range [0x0848e29e, 0x0848e2a3]
0848e29e +0x00:  push   %ebp
0848e29f +0x01:  mov    %esp,%ebp
0848e2a1 +0x03:  pop    %ebp
0848e2a2 +0x04:  ret
0848e2a3 +0x05:  nop
```

## 反编译 C

```c
// CEventCharacterHandler::CEventCharacterHandler @ 0x848e29e

/* CEventCharacterHandler::CEventCharacterHandler() */

void __thiscall CEventCharacterHandler::CEventCharacterHandler(CEventCharacterHandler *this)

{
  return;
}
```

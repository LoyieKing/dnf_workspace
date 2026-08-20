# VisitExit

`_ZN12TiXmlPrinter9VisitExitERK13TiXmlDocument`

`TiXmlPrinter::VisitExit(TiXmlDocument const&)`

| 类 | 地址 |
|---|---|
| `TiXmlPrinter` | `0x087e01e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e01e0  _ZN12TiXmlPrinter9VisitExitERK13TiXmlDocument
#           TiXmlPrinter::VisitExit(TiXmlDocument const&)
# range [0x087e01e0, 0x087e01ea]
087e01e0 +0x00:  push   %ebp
087e01e1 +0x01:  mov    $0x1,%eax
087e01e6 +0x06:  mov    %esp,%ebp
087e01e8 +0x08:  pop    %ebp
087e01e9 +0x09:  ret
087e01ea +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TiXmlPrinter::VisitExit @ 0x87e01e0

/* TiXmlPrinter::VisitExit(TiXmlDocument const&) */

undefined4 TiXmlPrinter::VisitExit(TiXmlDocument *param_1)

{
  return 1;
}
```

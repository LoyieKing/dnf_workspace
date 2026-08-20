# VisitEnter

`_ZN12TiXmlPrinter10VisitEnterERK13TiXmlDocument`

`TiXmlPrinter::VisitEnter(TiXmlDocument const&)`

| 类 | 地址 |
|---|---|
| `TiXmlPrinter` | `0x087e01d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e01d0  _ZN12TiXmlPrinter10VisitEnterERK13TiXmlDocument
#           TiXmlPrinter::VisitEnter(TiXmlDocument const&)
# range [0x087e01d0, 0x087e01da]
087e01d0 +0x00:  push   %ebp
087e01d1 +0x01:  mov    $0x1,%eax
087e01d6 +0x06:  mov    %esp,%ebp
087e01d8 +0x08:  pop    %ebp
087e01d9 +0x09:  ret
087e01da +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TiXmlPrinter::VisitEnter @ 0x87e01d0

/* TiXmlPrinter::VisitEnter(TiXmlDocument const&) */

undefined4 TiXmlPrinter::VisitEnter(TiXmlDocument *param_1)

{
  return 1;
}
```

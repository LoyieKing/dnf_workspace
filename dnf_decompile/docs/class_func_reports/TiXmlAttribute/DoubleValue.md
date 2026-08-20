# DoubleValue

`_ZNK14TiXmlAttribute11DoubleValueEv`

`TiXmlAttribute::DoubleValue() const`

| 类 | 地址 |
|---|---|
| `TiXmlAttribute` | `0x087e08b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e08b0  _ZNK14TiXmlAttribute11DoubleValueEv
#           TiXmlAttribute::DoubleValue() const
# range [0x087e08b0, 0x087e08ce]
087e08b0 +0x00:  push   %ebp
087e08b1 +0x01:  mov    %esp,%ebp
087e08b3 +0x03:  sub    $0x18,%esp
087e08b6 +0x06:  mov    0x8(%ebp),%eax
087e08b9 +0x09:  movl   $0x0,0x4(%esp)
087e08c1 +0x11:  mov    0x18(%eax),%eax
087e08c4 +0x14:  mov    %eax,(%esp)
087e08c7 +0x17:  call   0807e370 <_init+0xc68>
087e08cc +0x1c:  leave
087e08cd +0x1d:  ret
087e08ce +0x1e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TiXmlAttribute::DoubleValue @ 0x87e08b0

/* TiXmlAttribute::DoubleValue() const */

longdouble __thiscall TiXmlAttribute::DoubleValue(TiXmlAttribute *this)

{
  double dVar1;
  
  dVar1 = strtod(*(char **)(this + 0x18),(char **)0x0);
  return (longdouble)dVar1;
}
```

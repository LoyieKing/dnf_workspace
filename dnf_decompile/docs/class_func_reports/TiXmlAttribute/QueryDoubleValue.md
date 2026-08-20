# QueryDoubleValue

`_ZNK14TiXmlAttribute16QueryDoubleValueEPd`

`TiXmlAttribute::QueryDoubleValue(double*) const`

| 类 | 地址 |
|---|---|
| `TiXmlAttribute` | `0x087e0900` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e0900  _ZNK14TiXmlAttribute16QueryDoubleValueEPd
#           TiXmlAttribute::QueryDoubleValue(double*) const
# range [0x087e0900, 0x087e092f]
087e0900 +0x00:  push   %ebp
087e0901 +0x01:  mov    %esp,%ebp
087e0903 +0x03:  sub    $0x18,%esp
087e0906 +0x06:  mov    0xc(%ebp),%eax
087e0909 +0x09:  movl   $"%lf",0x4(%esp)
087e0911 +0x11:  mov    %eax,0x8(%esp)
087e0915 +0x15:  mov    0x8(%ebp),%eax
087e0918 +0x18:  mov    0x18(%eax),%eax
087e091b +0x1b:  mov    %eax,(%esp)
087e091e +0x1e:  call   0807d9e0 <_init+0x2d8>
087e0923 +0x23:  leave
087e0924 +0x24:  cmp    $0x1,%eax
087e0927 +0x27:  setne  %al
087e092a +0x2a:  movzbl %al,%eax
087e092d +0x2d:  add    %eax,%eax
087e092f +0x2f:  ret
```

## 反编译 C

```c
// TiXmlAttribute::QueryDoubleValue @ 0x87e0900

/* TiXmlAttribute::QueryDoubleValue(double*) const */

char __thiscall TiXmlAttribute::QueryDoubleValue(TiXmlAttribute *this,double *param_1)

{
  int iVar1;
  
  iVar1 = sscanf(*(char **)(this + 0x18),"%lf",param_1);
  return (iVar1 != 1) * '\x02';
}
```

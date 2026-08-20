# QueryIntValue

`_ZNK14TiXmlAttribute13QueryIntValueEPi`

`TiXmlAttribute::QueryIntValue(int*) const`

| 类 | 地址 |
|---|---|
| `TiXmlAttribute` | `0x087e0930` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e0930  _ZNK14TiXmlAttribute13QueryIntValueEPi
#           TiXmlAttribute::QueryIntValue(int*) const
# range [0x087e0930, 0x087e095f]
087e0930 +0x00:  push   %ebp
087e0931 +0x01:  mov    %esp,%ebp
087e0933 +0x03:  sub    $0x18,%esp
087e0936 +0x06:  mov    0xc(%ebp),%eax
087e0939 +0x09:  movl   $"%d",0x4(%esp)
087e0941 +0x11:  mov    %eax,0x8(%esp)
087e0945 +0x15:  mov    0x8(%ebp),%eax
087e0948 +0x18:  mov    0x18(%eax),%eax
087e094b +0x1b:  mov    %eax,(%esp)
087e094e +0x1e:  call   0807d9e0 <_init+0x2d8>
087e0953 +0x23:  leave
087e0954 +0x24:  cmp    $0x1,%eax
087e0957 +0x27:  setne  %al
087e095a +0x2a:  movzbl %al,%eax
087e095d +0x2d:  add    %eax,%eax
087e095f +0x2f:  ret
```

## 反编译 C

```c
// TiXmlAttribute::QueryIntValue @ 0x87e0930

/* TiXmlAttribute::QueryIntValue(int*) const */

char __thiscall TiXmlAttribute::QueryIntValue(TiXmlAttribute *this,int *param_1)

{
  int iVar1;
  
  iVar1 = sscanf(*(char **)(this + 0x18),"%d",param_1);
  return (iVar1 != 1) * '\x02';
}
```

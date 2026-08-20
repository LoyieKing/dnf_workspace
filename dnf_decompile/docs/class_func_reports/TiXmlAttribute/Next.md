# Next

`_ZNK14TiXmlAttribute4NextEv`

`TiXmlAttribute::Next() const`

| 类 | 地址 |
|---|---|
| `TiXmlAttribute` | `0x087e0020` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e0020  _ZNK14TiXmlAttribute4NextEv
#           TiXmlAttribute::Next() const
# range [0x087e0020, 0x087e0049]
087e0020 +0x00:  push   %ebp
087e0021 +0x01:  mov    %esp,%ebp
087e0023 +0x03:  mov    0x8(%ebp),%eax
087e0026 +0x06:  mov    0x20(%eax),%eax
087e0029 +0x09:  mov    0x18(%eax),%edx
087e002c +0x0c:  mov    -0xc(%edx),%ecx
087e002f +0x0f:  test   %ecx,%ecx
087e0031 +0x11:  jne    087e0043 <+0x23>
087e0033 +0x13:  mov    0x14(%eax),%edx
087e0036 +0x16:  mov    -0xc(%edx),%edx
087e0039 +0x19:  test   %edx,%edx
087e003b +0x1b:  mov    $0x0,%edx
087e0040 +0x20:  cmove  %edx,%eax
087e0043 +0x23:  pop    %ebp
087e0044 +0x24:  ret
087e0045 +0x25:  nop
087e0046 +0x26:  lea    0x0(%esi),%esi
087e0049 +0x29:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlAttribute::Next @ 0x87e0020

/* TiXmlAttribute::Next() const */

int __thiscall TiXmlAttribute::Next(TiXmlAttribute *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x20);
  if ((*(int *)(*(int *)(iVar1 + 0x18) + -0xc) == 0) &&
     (*(int *)(*(int *)(iVar1 + 0x14) + -0xc) == 0)) {
    iVar1 = 0;
  }
  return iVar1;
}
```

# Previous

`_ZNK14TiXmlAttribute8PreviousEv`

`TiXmlAttribute::Previous() const`

| 类 | 地址 |
|---|---|
| `TiXmlAttribute` | `0x087e0050` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e0050  _ZNK14TiXmlAttribute8PreviousEv
#           TiXmlAttribute::Previous() const
# range [0x087e0050, 0x087e0079]
087e0050 +0x00:  push   %ebp
087e0051 +0x01:  mov    %esp,%ebp
087e0053 +0x03:  mov    0x8(%ebp),%eax
087e0056 +0x06:  mov    0x1c(%eax),%eax
087e0059 +0x09:  mov    0x18(%eax),%edx
087e005c +0x0c:  mov    -0xc(%edx),%ecx
087e005f +0x0f:  test   %ecx,%ecx
087e0061 +0x11:  jne    087e0073 <+0x23>
087e0063 +0x13:  mov    0x14(%eax),%edx
087e0066 +0x16:  mov    -0xc(%edx),%edx
087e0069 +0x19:  test   %edx,%edx
087e006b +0x1b:  mov    $0x0,%edx
087e0070 +0x20:  cmove  %edx,%eax
087e0073 +0x23:  pop    %ebp
087e0074 +0x24:  ret
087e0075 +0x25:  nop
087e0076 +0x26:  lea    0x0(%esi),%esi
087e0079 +0x29:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlAttribute::Previous @ 0x87e0050

/* TiXmlAttribute::Previous() const */

int __thiscall TiXmlAttribute::Previous(TiXmlAttribute *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x1c);
  if ((*(int *)(*(int *)(iVar1 + 0x18) + -0xc) == 0) &&
     (*(int *)(*(int *)(iVar1 + 0x14) + -0xc) == 0)) {
    iVar1 = 0;
  }
  return iVar1;
}
```

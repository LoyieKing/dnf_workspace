# QueryDoubleAttribute

`_ZNK12TiXmlElement20QueryDoubleAttributeEPKcPd`

`TiXmlElement::QueryDoubleAttribute(char const*, double*) const`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087e15c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e15c0  _ZNK12TiXmlElement20QueryDoubleAttributeEPKcPd
#           TiXmlElement::QueryDoubleAttribute(char const*, double*) const
# range [0x087e15c0, 0x087e1639]
087e15c0 +0x00:  push   %ebp
087e15c1 +0x01:  mov    %esp,%ebp
087e15c3 +0x03:  push   %edi
087e15c4 +0x04:  push   %esi
087e15c5 +0x05:  push   %ebx
087e15c6 +0x06:  sub    $0x1c,%esp
087e15c9 +0x09:  mov    0x8(%ebp),%esi
087e15cc +0x0c:  mov    0xc(%ebp),%edi
087e15cf +0x0f:  mov    0x4c(%esi),%ebx
087e15d2 +0x12:  add    $0x2c,%esi
087e15d5 +0x15:  cmp    %ebx,%esi
087e15d7 +0x17:  jne    087e15e7 <+0x27>
087e15d9 +0x19:  jmp    087e1628 <+0x68>
087e15db +0x1b:  nop
087e15dc +0x1c:  lea    0x0(%esi,%eiz,1),%esi
087e15e0 +0x20:  mov    0x20(%ebx),%ebx
087e15e3 +0x23:  cmp    %ebx,%esi
087e15e5 +0x25:  je     087e1628 <+0x68>
087e15e7 +0x27:  mov    0x14(%ebx),%eax
087e15ea +0x2a:  mov    %edi,0x4(%esp)
087e15ee +0x2e:  mov    %eax,(%esp)
087e15f1 +0x31:  call   0807e4e0 <_init+0xdd8>
087e15f6 +0x36:  test   %eax,%eax
087e15f8 +0x38:  jne    087e15e0 <+0x20>
087e15fa +0x3a:  mov    0x10(%ebp),%eax
087e15fd +0x3d:  movl   $"%lf",0x4(%esp)
087e1605 +0x45:  mov    %eax,0x8(%esp)
087e1609 +0x49:  mov    0x18(%ebx),%eax
087e160c +0x4c:  mov    %eax,(%esp)
087e160f +0x4f:  call   0807d9e0 <_init+0x2d8>
087e1614 +0x54:  cmp    $0x1,%eax
087e1617 +0x57:  setne  %al
087e161a +0x5a:  add    $0x1c,%esp
087e161d +0x5d:  movzbl %al,%eax
087e1620 +0x60:  add    %eax,%eax
087e1622 +0x62:  pop    %ebx
087e1623 +0x63:  pop    %esi
087e1624 +0x64:  pop    %edi
087e1625 +0x65:  pop    %ebp
087e1626 +0x66:  ret
087e1627 +0x67:  nop
087e1628 +0x68:  add    $0x1c,%esp
087e162b +0x6b:  mov    $0x1,%eax
087e1630 +0x70:  pop    %ebx
087e1631 +0x71:  pop    %esi
087e1632 +0x72:  pop    %edi
087e1633 +0x73:  pop    %ebp
087e1634 +0x74:  ret
087e1635 +0x75:  nop
087e1636 +0x76:  lea    0x0(%esi),%esi
087e1639 +0x79:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlElement::QueryDoubleAttribute @ 0x87e15c0

/* TiXmlElement::QueryDoubleAttribute(char const*, double*) const */

char __thiscall TiXmlElement::QueryDoubleAttribute(TiXmlElement *this,char *param_1,double *param_2)

{
  TiXmlElement *pTVar1;
  int iVar2;
  
  pTVar1 = *(TiXmlElement **)(this + 0x4c);
  while( true ) {
    if (this + 0x2c == pTVar1) {
      return '\x01';
    }
    iVar2 = strcmp(*(char **)(pTVar1 + 0x14),param_1);
    if (iVar2 == 0) break;
    pTVar1 = *(TiXmlElement **)(pTVar1 + 0x20);
  }
  iVar2 = sscanf(*(char **)(pTVar1 + 0x18),"%lf",param_2);
  return (iVar2 != 1) * '\x02';
}
```

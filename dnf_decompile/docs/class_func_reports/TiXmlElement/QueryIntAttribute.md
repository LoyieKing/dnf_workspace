# QueryIntAttribute

`_ZNK12TiXmlElement17QueryIntAttributeEPKcPi`

`TiXmlElement::QueryIntAttribute(char const*, int*) const`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087e1350` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e1350  _ZNK12TiXmlElement17QueryIntAttributeEPKcPi
#           TiXmlElement::QueryIntAttribute(char const*, int*) const
# range [0x087e1350, 0x087e13c9]
087e1350 +0x00:  push   %ebp
087e1351 +0x01:  mov    %esp,%ebp
087e1353 +0x03:  push   %edi
087e1354 +0x04:  push   %esi
087e1355 +0x05:  push   %ebx
087e1356 +0x06:  sub    $0x1c,%esp
087e1359 +0x09:  mov    0x8(%ebp),%esi
087e135c +0x0c:  mov    0xc(%ebp),%edi
087e135f +0x0f:  mov    0x4c(%esi),%ebx
087e1362 +0x12:  add    $0x2c,%esi
087e1365 +0x15:  cmp    %ebx,%esi
087e1367 +0x17:  jne    087e1377 <+0x27>
087e1369 +0x19:  jmp    087e13b8 <+0x68>
087e136b +0x1b:  nop
087e136c +0x1c:  lea    0x0(%esi,%eiz,1),%esi
087e1370 +0x20:  mov    0x20(%ebx),%ebx
087e1373 +0x23:  cmp    %ebx,%esi
087e1375 +0x25:  je     087e13b8 <+0x68>
087e1377 +0x27:  mov    0x14(%ebx),%eax
087e137a +0x2a:  mov    %edi,0x4(%esp)
087e137e +0x2e:  mov    %eax,(%esp)
087e1381 +0x31:  call   0807e4e0 <_init+0xdd8>
087e1386 +0x36:  test   %eax,%eax
087e1388 +0x38:  jne    087e1370 <+0x20>
087e138a +0x3a:  mov    0x10(%ebp),%eax
087e138d +0x3d:  movl   $"%d",0x4(%esp)
087e1395 +0x45:  mov    %eax,0x8(%esp)
087e1399 +0x49:  mov    0x18(%ebx),%eax
087e139c +0x4c:  mov    %eax,(%esp)
087e139f +0x4f:  call   0807d9e0 <_init+0x2d8>
087e13a4 +0x54:  cmp    $0x1,%eax
087e13a7 +0x57:  setne  %al
087e13aa +0x5a:  add    $0x1c,%esp
087e13ad +0x5d:  movzbl %al,%eax
087e13b0 +0x60:  add    %eax,%eax
087e13b2 +0x62:  pop    %ebx
087e13b3 +0x63:  pop    %esi
087e13b4 +0x64:  pop    %edi
087e13b5 +0x65:  pop    %ebp
087e13b6 +0x66:  ret
087e13b7 +0x67:  nop
087e13b8 +0x68:  add    $0x1c,%esp
087e13bb +0x6b:  mov    $0x1,%eax
087e13c0 +0x70:  pop    %ebx
087e13c1 +0x71:  pop    %esi
087e13c2 +0x72:  pop    %edi
087e13c3 +0x73:  pop    %ebp
087e13c4 +0x74:  ret
087e13c5 +0x75:  nop
087e13c6 +0x76:  lea    0x0(%esi),%esi
087e13c9 +0x79:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlElement::QueryIntAttribute @ 0x87e1350

/* TiXmlElement::QueryIntAttribute(char const*, int*) const */

char __thiscall TiXmlElement::QueryIntAttribute(TiXmlElement *this,char *param_1,int *param_2)

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
  iVar2 = sscanf(*(char **)(pTVar1 + 0x18),"%d",param_2);
  return (iVar2 != 1) * '\x02';
}
```

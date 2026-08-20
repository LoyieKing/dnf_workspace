# QueryUnsignedAttribute

`_ZNK12TiXmlElement22QueryUnsignedAttributeEPKcPj`

`TiXmlElement::QueryUnsignedAttribute(char const*, unsigned int*) const`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087e12c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e12c0  _ZNK12TiXmlElement22QueryUnsignedAttributeEPKcPj
#           TiXmlElement::QueryUnsignedAttribute(char const*, unsigned int*) const
# range [0x087e12c0, 0x087e1349]
087e12c0 +0x00:  push   %ebp
087e12c1 +0x01:  mov    %esp,%ebp
087e12c3 +0x03:  push   %edi
087e12c4 +0x04:  push   %esi
087e12c5 +0x05:  push   %ebx
087e12c6 +0x06:  sub    $0x2c,%esp
087e12c9 +0x09:  mov    0x8(%ebp),%esi
087e12cc +0x0c:  mov    0xc(%ebp),%edi
087e12cf +0x0f:  mov    0x4c(%esi),%ebx
087e12d2 +0x12:  add    $0x2c,%esi
087e12d5 +0x15:  cmp    %ebx,%esi
087e12d7 +0x17:  jne    087e12e7 <+0x27>
087e12d9 +0x19:  jmp    087e1338 <+0x78>
087e12db +0x1b:  nop
087e12dc +0x1c:  lea    0x0(%esi,%eiz,1),%esi
087e12e0 +0x20:  mov    0x20(%ebx),%ebx
087e12e3 +0x23:  cmp    %ebx,%esi
087e12e5 +0x25:  je     087e1338 <+0x78>
087e12e7 +0x27:  mov    0x14(%ebx),%eax
087e12ea +0x2a:  mov    %edi,0x4(%esp)
087e12ee +0x2e:  mov    %eax,(%esp)
087e12f1 +0x31:  call   0807e4e0 <_init+0xdd8>
087e12f6 +0x36:  test   %eax,%eax
087e12f8 +0x38:  jne    087e12e0 <+0x20>
087e12fa +0x3a:  lea    -0x1c(%ebp),%eax
087e12fd +0x3d:  mov    %eax,0x8(%esp)
087e1301 +0x41:  movl   $"%d",0x4(%esp)
087e1309 +0x49:  mov    0x18(%ebx),%eax
087e130c +0x4c:  movl   $0x0,-0x1c(%ebp)
087e1313 +0x53:  mov    %eax,(%esp)
087e1316 +0x56:  call   0807d9e0 <_init+0x2d8>
087e131b +0x5b:  mov    -0x1c(%ebp),%ecx
087e131e +0x5e:  mov    0x10(%ebp),%edx
087e1321 +0x61:  mov    %ecx,(%edx)
087e1323 +0x63:  cmp    $0x1,%eax
087e1326 +0x66:  setne  %al
087e1329 +0x69:  add    $0x2c,%esp
087e132c +0x6c:  movzbl %al,%eax
087e132f +0x6f:  add    %eax,%eax
087e1331 +0x71:  pop    %ebx
087e1332 +0x72:  pop    %esi
087e1333 +0x73:  pop    %edi
087e1334 +0x74:  pop    %ebp
087e1335 +0x75:  ret
087e1336 +0x76:  xchg   %ax,%ax
087e1338 +0x78:  add    $0x2c,%esp
087e133b +0x7b:  mov    $0x1,%eax
087e1340 +0x80:  pop    %ebx
087e1341 +0x81:  pop    %esi
087e1342 +0x82:  pop    %edi
087e1343 +0x83:  pop    %ebp
087e1344 +0x84:  ret
087e1345 +0x85:  nop
087e1346 +0x86:  lea    0x0(%esi),%esi
087e1349 +0x89:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlElement::QueryUnsignedAttribute @ 0x87e12c0

/* TiXmlElement::QueryUnsignedAttribute(char const*, unsigned int*) const */

char __thiscall TiXmlElement::QueryUnsignedAttribute(TiXmlElement *this,char *param_1,uint *param_2)

{
  TiXmlElement *pTVar1;
  int iVar2;
  uint local_20 [4];
  
  pTVar1 = *(TiXmlElement **)(this + 0x4c);
  while( true ) {
    if (this + 0x2c == pTVar1) {
      return '\x01';
    }
    iVar2 = strcmp(*(char **)(pTVar1 + 0x14),param_1);
    if (iVar2 == 0) break;
    pTVar1 = *(TiXmlElement **)(pTVar1 + 0x20);
  }
  local_20[0] = 0;
  iVar2 = sscanf(*(char **)(pTVar1 + 0x18),"%d",local_20);
  *param_2 = local_20[0];
  return (iVar2 != 1) * '\x02';
}
```

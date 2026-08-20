# Attribute

`_ZNK12TiXmlElement9AttributeEPKcPi`

`TiXmlElement::Attribute(char const*, int*) const`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087e13d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e13d0  _ZNK12TiXmlElement9AttributeEPKcPi
#           TiXmlElement::Attribute(char const*, int*) const
# range [0x087e13d0, 0x087e144a]
087e13d0 +0x00:  push   %ebp
087e13d1 +0x01:  mov    %esp,%ebp
087e13d3 +0x03:  push   %edi
087e13d4 +0x04:  push   %esi
087e13d5 +0x05:  push   %ebx
087e13d6 +0x06:  sub    $0x1c,%esp
087e13d9 +0x09:  mov    0x8(%ebp),%esi
087e13dc +0x0c:  mov    0xc(%ebp),%edi
087e13df +0x0f:  mov    0x4c(%esi),%ebx
087e13e2 +0x12:  add    $0x2c,%esi
087e13e5 +0x15:  cmp    %esi,%ebx
087e13e7 +0x17:  jne    087e13f7 <+0x27>
087e13e9 +0x19:  jmp    087e1438 <+0x68>
087e13eb +0x1b:  nop
087e13ec +0x1c:  lea    0x0(%esi,%eiz,1),%esi
087e13f0 +0x20:  mov    0x20(%ebx),%ebx
087e13f3 +0x23:  cmp    %esi,%ebx
087e13f5 +0x25:  je     087e1438 <+0x68>
087e13f7 +0x27:  mov    0x14(%ebx),%eax
087e13fa +0x2a:  mov    %edi,0x4(%esp)
087e13fe +0x2e:  mov    %eax,(%esp)
087e1401 +0x31:  call   0807e4e0 <_init+0xdd8>
087e1406 +0x36:  test   %eax,%eax
087e1408 +0x38:  jne    087e13f0 <+0x20>
087e140a +0x3a:  mov    0x10(%ebp),%edx
087e140d +0x3d:  mov    0x18(%ebx),%ebx
087e1410 +0x40:  test   %edx,%edx
087e1412 +0x42:  je     087e142b <+0x5b>
087e1414 +0x44:  mov    0x10(%ebp),%eax
087e1417 +0x47:  movl   $"%d",0x4(%esp)
087e141f +0x4f:  mov    %ebx,(%esp)
087e1422 +0x52:  mov    %eax,0x8(%esp)
087e1426 +0x56:  call   0807d9e0 <_init+0x2d8>
087e142b +0x5b:  add    $0x1c,%esp
087e142e +0x5e:  mov    %ebx,%eax
087e1430 +0x60:  pop    %ebx
087e1431 +0x61:  pop    %esi
087e1432 +0x62:  pop    %edi
087e1433 +0x63:  pop    %ebp
087e1434 +0x64:  ret
087e1435 +0x65:  lea    0x0(%esi),%esi
087e1438 +0x68:  xor    %ebx,%ebx
087e143a +0x6a:  add    $0x1c,%esp
087e143d +0x6d:  mov    %ebx,%eax
087e143f +0x6f:  pop    %ebx
087e1440 +0x70:  pop    %esi
087e1441 +0x71:  pop    %edi
087e1442 +0x72:  pop    %ebp
087e1443 +0x73:  ret
087e1444 +0x74:  lea    0x0(%esi),%esi
087e144a +0x7a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TiXmlElement::Attribute @ 0x87e13d0

/* TiXmlElement::Attribute(char const*, int*) const */

char * __thiscall TiXmlElement::Attribute(TiXmlElement *this,char *param_1,int *param_2)

{
  TiXmlElement *pTVar1;
  char *__s;
  int iVar2;
  
  pTVar1 = *(TiXmlElement **)(this + 0x4c);
  while( true ) {
    if (pTVar1 == this + 0x2c) {
      return (char *)0x0;
    }
    iVar2 = strcmp(*(char **)(pTVar1 + 0x14),param_1);
    if (iVar2 == 0) break;
    pTVar1 = *(TiXmlElement **)(pTVar1 + 0x20);
  }
  __s = *(char **)(pTVar1 + 0x18);
  if (param_2 != (int *)0x0) {
    sscanf(__s,"%d",param_2);
  }
  return __s;
}
```

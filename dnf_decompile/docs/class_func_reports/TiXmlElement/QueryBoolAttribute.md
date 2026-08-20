# QueryBoolAttribute

`_ZNK12TiXmlElement18QueryBoolAttributeEPKcPb`

`TiXmlElement::QueryBoolAttribute(char const*, bool*) const`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087e1450` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e1450  _ZNK12TiXmlElement18QueryBoolAttributeEPKcPb
#           TiXmlElement::QueryBoolAttribute(char const*, bool*) const
# range [0x087e1450, 0x087e15b9]
087e1450 +0x000:  push   %ebp
087e1451 +0x001:  mov    %esp,%ebp
087e1453 +0x003:  push   %edi
087e1454 +0x004:  push   %esi
087e1455 +0x005:  push   %ebx
087e1456 +0x006:  sub    $0x1c,%esp
087e1459 +0x009:  mov    0x8(%ebp),%esi
087e145c +0x00c:  mov    0xc(%ebp),%edi
087e145f +0x00f:  mov    0x4c(%esi),%ebx
087e1462 +0x012:  add    $0x2c,%esi
087e1465 +0x015:  cmp    %ebx,%esi
087e1467 +0x017:  jne    087e1477 <+0x27>
087e1469 +0x019:  jmp    087e14c8 <+0x78>
087e146b +0x01b:  nop
087e146c +0x01c:  lea    0x0(%esi,%eiz,1),%esi
087e1470 +0x020:  mov    0x20(%ebx),%ebx
087e1473 +0x023:  cmp    %ebx,%esi
087e1475 +0x025:  je     087e14c8 <+0x78>
087e1477 +0x027:  mov    0x14(%ebx),%eax
087e147a +0x02a:  mov    %edi,0x4(%esp)
087e147e +0x02e:  mov    %eax,(%esp)
087e1481 +0x031:  call   0807e4e0 <_init+0xdd8>
087e1486 +0x036:  test   %eax,%eax
087e1488 +0x038:  jne    087e1470 <+0x20>
087e148a +0x03a:  movl   $0x0,0xc(%esp)
087e1492 +0x042:  movl   $0x1,0x8(%esp)
087e149a +0x04a:  movl   $"true",0x4(%esp)
087e14a2 +0x052:  mov    0x18(%ebx),%eax
087e14a5 +0x055:  mov    %eax,(%esp)
087e14a8 +0x058:  call   087e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>  ; TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding)
087e14ad +0x05d:  test   %al,%al
087e14af +0x05f:  je     087e14d8 <+0x88>
087e14b1 +0x061:  mov    0x10(%ebp),%eax
087e14b4 +0x064:  movb   $0x1,(%eax)
087e14b7 +0x067:  add    $0x1c,%esp
087e14ba +0x06a:  xor    %eax,%eax
087e14bc +0x06c:  pop    %ebx
087e14bd +0x06d:  pop    %esi
087e14be +0x06e:  pop    %edi
087e14bf +0x06f:  pop    %ebp
087e14c0 +0x070:  ret
087e14c1 +0x071:  lea    0x0(%esi,%eiz,1),%esi
087e14c8 +0x078:  mov    $0x1,%eax
087e14cd +0x07d:  add    $0x1c,%esp
087e14d0 +0x080:  pop    %ebx
087e14d1 +0x081:  pop    %esi
087e14d2 +0x082:  pop    %edi
087e14d3 +0x083:  pop    %ebp
087e14d4 +0x084:  ret
087e14d5 +0x085:  lea    0x0(%esi),%esi
087e14d8 +0x088:  movl   $0x0,0xc(%esp)
087e14e0 +0x090:  movl   $0x1,0x8(%esp)
087e14e8 +0x098:  movl   $"yes",0x4(%esp)
087e14f0 +0x0a0:  mov    0x18(%ebx),%eax
087e14f3 +0x0a3:  mov    %eax,(%esp)
087e14f6 +0x0a6:  call   087e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>  ; TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding)
087e14fb +0x0ab:  test   %al,%al
087e14fd +0x0ad:  jne    087e14b1 <+0x61>
087e14ff +0x0af:  movl   $0x0,0xc(%esp)
087e1507 +0x0b7:  movl   $0x1,0x8(%esp)
087e150f +0x0bf:  movl   $"1",0x4(%esp)
087e1517 +0x0c7:  mov    0x18(%ebx),%eax
087e151a +0x0ca:  mov    %eax,(%esp)
087e151d +0x0cd:  call   087e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>  ; TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding)
087e1522 +0x0d2:  test   %al,%al
087e1524 +0x0d4:  jne    087e14b1 <+0x61>
087e1526 +0x0d6:  movl   $0x0,0xc(%esp)
087e152e +0x0de:  movl   $0x1,0x8(%esp)
087e1536 +0x0e6:  movl   $"false",0x4(%esp)
087e153e +0x0ee:  mov    0x18(%ebx),%eax
087e1541 +0x0f1:  mov    %eax,(%esp)
087e1544 +0x0f4:  call   087e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>  ; TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding)
087e1549 +0x0f9:  test   %al,%al
087e154b +0x0fb:  je     087e155a <+0x10a>
087e154d +0x0fd:  mov    0x10(%ebp),%eax
087e1550 +0x100:  movb   $0x0,(%eax)
087e1553 +0x103:  xor    %eax,%eax
087e1555 +0x105:  jmp    087e14cd <+0x7d>
087e155a +0x10a:  movl   $0x0,0xc(%esp)
087e1562 +0x112:  movl   $0x1,0x8(%esp)
087e156a +0x11a:  movl   $"no",0x4(%esp)
087e1572 +0x122:  mov    0x18(%ebx),%eax
087e1575 +0x125:  mov    %eax,(%esp)
087e1578 +0x128:  call   087e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>  ; TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding)
087e157d +0x12d:  test   %al,%al
087e157f +0x12f:  jne    087e154d <+0xfd>
087e1581 +0x131:  movl   $0x0,0xc(%esp)
087e1589 +0x139:  movl   $0x1,0x8(%esp)
087e1591 +0x141:  movl   $"0",0x4(%esp)
087e1599 +0x149:  mov    0x18(%ebx),%eax
087e159c +0x14c:  mov    %eax,(%esp)
087e159f +0x14f:  call   087e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>  ; TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding)
087e15a4 +0x154:  mov    %eax,%edx
087e15a6 +0x156:  mov    $0x2,%eax
087e15ab +0x15b:  test   %dl,%dl
087e15ad +0x15d:  je     087e14cd <+0x7d>
087e15b3 +0x163:  jmp    087e154d <+0xfd>
087e15b5 +0x165:  nop
087e15b6 +0x166:  lea    0x0(%esi),%esi
087e15b9 +0x169:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlElement::QueryBoolAttribute @ 0x87e1450

/* TiXmlElement::QueryBoolAttribute(char const*, bool*) const */

undefined4 __thiscall
TiXmlElement::QueryBoolAttribute(TiXmlElement *this,char *param_1,bool *param_2)

{
  TiXmlElement *pTVar1;
  char cVar2;
  int iVar3;
  
  pTVar1 = *(TiXmlElement **)(this + 0x4c);
  while( true ) {
    if (this + 0x2c == pTVar1) {
      return 1;
    }
    iVar3 = strcmp(*(char **)(pTVar1 + 0x14),param_1);
    if (iVar3 == 0) break;
    pTVar1 = *(TiXmlElement **)(pTVar1 + 0x20);
  }
  cVar2 = TiXmlBase::StringEqual(*(undefined4 *)(pTVar1 + 0x18),&DAT_08d0118c,1,0);
  if (((cVar2 == '\0') &&
      (cVar2 = TiXmlBase::StringEqual(*(undefined4 *)(pTVar1 + 0x18),&DAT_08de0ed6,1,0),
      cVar2 == '\0')) &&
     (cVar2 = TiXmlBase::StringEqual(*(undefined4 *)(pTVar1 + 0x18),"1",1,0), cVar2 == '\0')) {
    cVar2 = TiXmlBase::StringEqual(*(undefined4 *)(pTVar1 + 0x18),"false",1,0);
    if (((cVar2 == '\0') &&
        (cVar2 = TiXmlBase::StringEqual(*(undefined4 *)(pTVar1 + 0x18),&DAT_08de0eda,1,0),
        cVar2 == '\0')) &&
       (cVar2 = TiXmlBase::StringEqual(*(undefined4 *)(pTVar1 + 0x18),&DAT_08d0456d,1,0),
       cVar2 == '\0')) {
      return 2;
    }
    *param_2 = false;
    return 0;
  }
  *param_2 = true;
  return 0;
}
```

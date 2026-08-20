# ~TiXmlElement

`_ZN12TiXmlElementD1Ev`

`TiXmlElement::~TiXmlElement()`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087e3490` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e3490  _ZN12TiXmlElementD1Ev
#           TiXmlElement::~TiXmlElement()
# range [0x087e3490, 0x087e354a]
087e3490 +0x00:  push   %ebp
087e3491 +0x01:  mov    %esp,%ebp
087e3493 +0x03:  push   %edi
087e3494 +0x04:  push   %esi
087e3495 +0x05:  push   %ebx
087e3496 +0x06:  sub    $0x2c,%esp
087e3499 +0x09:  mov    0x8(%ebp),%edi
087e349c +0x0c:  mov    0x18(%edi),%eax
087e349f +0x0f:  movl   $&_ZTV12TiXmlElement+0x8,(%edi)
087e34a5 +0x15:  test   %eax,%eax
087e34a7 +0x17:  je     087e34cc <+0x3c>
087e34a9 +0x19:  lea    0x2c(%edi),%edx
087e34ac +0x1c:  mov    %edx,-0x1c(%ebp)
087e34af +0x1f:  mov    %edx,%esi
087e34b1 +0x21:  jmp    087e34bd <+0x2d>
087e34b3 +0x23:  nop
087e34b4 +0x24:  lea    0x0(%esi,%eiz,1),%esi
087e34b8 +0x28:  mov    -0x1c(%ebp),%esi
087e34bb +0x2b:  mov    %ebx,%eax
087e34bd +0x2d:  mov    (%eax),%edx
087e34bf +0x2f:  mov    0x28(%eax),%ebx
087e34c2 +0x32:  mov    %eax,(%esp)
087e34c5 +0x35:  call   *0x4(%edx)
087e34c8 +0x38:  test   %ebx,%ebx
087e34ca +0x3a:  jne    087e34b8 <+0x28>
087e34cc +0x3c:  mov    0x4c(%edi),%eax
087e34cf +0x3f:  lea    0x2c(%edi),%esi
087e34d2 +0x42:  movl   $0x0,0x18(%edi)
087e34d9 +0x49:  movl   $0x0,0x1c(%edi)
087e34e0 +0x50:  cmp    %esi,%eax
087e34e2 +0x52:  je     087e3514 <+0x84>
087e34e4 +0x54:  test   %eax,%eax
087e34e6 +0x56:  je     087e3514 <+0x84>
087e34e8 +0x58:  mov    0x1c(%eax),%edx
087e34eb +0x5b:  mov    0x20(%eax),%ecx
087e34ee +0x5e:  mov    %ecx,0x20(%edx)
087e34f1 +0x61:  mov    0x20(%eax),%ecx
087e34f4 +0x64:  movl   $0x0,0x20(%eax)
087e34fb +0x6b:  mov    %edx,0x1c(%ecx)
087e34fe +0x6e:  mov    (%eax),%edx
087e3500 +0x70:  movl   $0x0,0x1c(%eax)
087e3507 +0x77:  mov    %eax,(%esp)
087e350a +0x7a:  call   *0x4(%edx)
087e350d +0x7d:  mov    0x4c(%edi),%eax
087e3510 +0x80:  cmp    %esi,%eax
087e3512 +0x82:  jne    087e34e4 <+0x54>
087e3514 +0x84:  mov    %esi,(%esp)
087e3517 +0x87:  call   087e1cd0 <_ZN17TiXmlAttributeSetD1Ev>  ; TiXmlAttributeSet::~TiXmlAttributeSet()
087e351c +0x8c:  mov    %edi,0x8(%ebp)
087e351f +0x8f:  add    $0x2c,%esp
087e3522 +0x92:  pop    %ebx
087e3523 +0x93:  pop    %esi
087e3524 +0x94:  pop    %edi
087e3525 +0x95:  pop    %ebp
087e3526 +0x96:  jmp    087e2b70 <_ZN9TiXmlNodeD1Ev>  ; TiXmlNode::~TiXmlNode()
087e352b +0x9b:  mov    %eax,%ebx
087e352d +0x9d:  mov    %esi,(%esp)
087e3530 +0xa0:  call   087e1cd0 <_ZN17TiXmlAttributeSetD1Ev>  ; TiXmlAttributeSet::~TiXmlAttributeSet()
087e3535 +0xa5:  mov    %edi,(%esp)
087e3538 +0xa8:  call   087e2b70 <_ZN9TiXmlNodeD1Ev>  ; TiXmlNode::~TiXmlNode()
087e353d +0xad:  mov    %ebx,(%esp)
087e3540 +0xb0:  call   08ae3750 <_Unwind_Resume>
087e3545 +0xb5:  mov    %eax,%ebx
087e3547 +0xb7:  jmp    087e3535 <+0xa5>
087e3549 +0xb9:  nop
087e354a +0xba:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TiXmlElement::~TiXmlElement @ 0x87e3490

/* TiXmlElement::~TiXmlElement() */

void __thiscall TiXmlElement::~TiXmlElement(TiXmlElement *this)

{
  int *piVar1;
  TiXmlAttributeSet *pTVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  *(undefined ***)this = &PTR__TiXmlElement_08de1228;
  piVar5 = *(int **)(this + 0x18);
  while (piVar5 != (int *)0x0) {
    piVar1 = (int *)piVar5[10];
                    /* try { // try from 087e34c5 to 087e350c has its CatchHandler @ 087e352b */
    (**(code **)(*piVar5 + 4))(piVar5);
    piVar5 = piVar1;
  }
  pTVar2 = *(TiXmlAttributeSet **)(this + 0x4c);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  while ((pTVar2 != (TiXmlAttributeSet *)(this + 0x2c) && (pTVar2 != (TiXmlAttributeSet *)0x0))) {
    iVar3 = *(int *)(pTVar2 + 0x1c);
    *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(pTVar2 + 0x20);
    iVar4 = *(int *)(pTVar2 + 0x20);
    *(undefined4 *)(pTVar2 + 0x20) = 0;
    *(int *)(iVar4 + 0x1c) = iVar3;
    *(undefined4 *)(pTVar2 + 0x1c) = 0;
    (**(code **)(*(int *)pTVar2 + 4))(pTVar2);
    pTVar2 = *(TiXmlAttributeSet **)(this + 0x4c);
  }
                    /* try { // try from 087e3517 to 087e351b has its CatchHandler @ 087e3545 */
  TiXmlAttributeSet::~TiXmlAttributeSet((TiXmlAttributeSet *)(this + 0x2c));
  TiXmlNode::~TiXmlNode((TiXmlNode *)this);
  return;
}
```

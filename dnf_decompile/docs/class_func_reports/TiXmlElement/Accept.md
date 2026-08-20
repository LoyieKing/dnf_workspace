# Accept

`_ZNK12TiXmlElement6AcceptEP12TiXmlVisitor`

`TiXmlElement::Accept(TiXmlVisitor*) const`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087dff10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087dff10  _ZNK12TiXmlElement6AcceptEP12TiXmlVisitor
#           TiXmlElement::Accept(TiXmlVisitor*) const
# range [0x087dff10, 0x087dff8a]
087dff10 +0x00:  push   %ebp
087dff11 +0x01:  mov    %esp,%ebp
087dff13 +0x03:  push   %edi
087dff14 +0x04:  push   %esi
087dff15 +0x05:  push   %ebx
087dff16 +0x06:  sub    $0x1c,%esp
087dff19 +0x09:  mov    0xc(%ebp),%esi
087dff1c +0x0c:  mov    0x8(%ebp),%edi
087dff1f +0x0f:  mov    (%esi),%eax
087dff21 +0x11:  lea    0x2c(%edi),%ecx
087dff24 +0x14:  mov    0x10(%eax),%edx
087dff27 +0x17:  mov    0x4c(%edi),%eax
087dff2a +0x1a:  mov    %edi,0x4(%esp)
087dff2e +0x1e:  mov    %esi,(%esp)
087dff31 +0x21:  cmp    %ecx,%eax
087dff33 +0x23:  mov    $0x0,%ecx
087dff38 +0x28:  cmove  %ecx,%eax
087dff3b +0x2b:  mov    %eax,0x8(%esp)
087dff3f +0x2f:  call   *%edx
087dff41 +0x31:  test   %al,%al
087dff43 +0x33:  je     087dff6f <+0x5f>
087dff45 +0x35:  mov    0x18(%edi),%ebx
087dff48 +0x38:  test   %ebx,%ebx
087dff4a +0x3a:  jne    087dff5f <+0x4f>
087dff4c +0x3c:  lea    0x0(%esi,%eiz,1),%esi
087dff50 +0x40:  jmp    087dff6f <+0x5f>
087dff52 +0x42:  lea    0x0(%esi),%esi
087dff58 +0x48:  mov    0x28(%ebx),%ebx
087dff5b +0x4b:  test   %ebx,%ebx
087dff5d +0x4d:  je     087dff6f <+0x5f>
087dff5f +0x4f:  mov    (%ebx),%eax
087dff61 +0x51:  mov    %esi,0x4(%esp)
087dff65 +0x55:  mov    %ebx,(%esp)
087dff68 +0x58:  call   *0x44(%eax)
087dff6b +0x5b:  test   %al,%al
087dff6d +0x5d:  jne    087dff58 <+0x48>
087dff6f +0x5f:  mov    (%esi),%eax
087dff71 +0x61:  mov    %edi,0xc(%ebp)
087dff74 +0x64:  mov    %esi,0x8(%ebp)
087dff77 +0x67:  mov    0x14(%eax),%eax
087dff7a +0x6a:  add    $0x1c,%esp
087dff7d +0x6d:  pop    %ebx
087dff7e +0x6e:  pop    %esi
087dff7f +0x6f:  pop    %edi
087dff80 +0x70:  pop    %ebp
087dff81 +0x71:  jmp    *%eax
087dff83 +0x73:  nop
087dff84 +0x74:  lea    0x0(%esi),%esi
087dff8a +0x7a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TiXmlElement::Accept @ 0x87dff10

/* TiXmlElement::Accept(TiXmlVisitor*) const */

void __thiscall TiXmlElement::Accept(TiXmlElement *this,TiXmlVisitor *param_1)

{
  int *piVar1;
  char cVar2;
  TiXmlElement *pTVar3;
  
  pTVar3 = *(TiXmlElement **)(this + 0x4c);
  if (pTVar3 == this + 0x2c) {
    pTVar3 = (TiXmlElement *)0x0;
  }
  cVar2 = (**(code **)(*(int *)param_1 + 0x10))(param_1,this,pTVar3);
  if (cVar2 != '\0') {
    piVar1 = *(int **)(this + 0x18);
    while ((piVar1 != (int *)0x0 &&
           (cVar2 = (**(code **)(*piVar1 + 0x44))(piVar1,param_1), cVar2 != '\0'))) {
      piVar1 = (int *)piVar1[10];
    }
  }
                    /* WARNING: Could not recover jumptable at 0x087dff81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)param_1 + 0x14))();
  return;
}
```

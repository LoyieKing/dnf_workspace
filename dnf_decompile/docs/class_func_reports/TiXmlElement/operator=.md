# operator=

`_ZN12TiXmlElementaSERKS_`

`TiXmlElement::operator=(TiXmlElement const&)`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087e3e50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e3e50  _ZN12TiXmlElementaSERKS_
#           TiXmlElement::operator=(TiXmlElement const&)
# range [0x087e3e50, 0x087e3eda]
087e3e50 +0x00:  push   %ebp
087e3e51 +0x01:  mov    %esp,%ebp
087e3e53 +0x03:  push   %esi
087e3e54 +0x04:  push   %ebx
087e3e55 +0x05:  sub    $0x10,%esp
087e3e58 +0x08:  mov    0x8(%ebp),%esi
087e3e5b +0x0b:  mov    0x18(%esi),%edx
087e3e5e +0x0e:  test   %edx,%edx
087e3e60 +0x10:  jne    087e3e6a <+0x1a>
087e3e62 +0x12:  jmp    087e3e79 <+0x29>
087e3e64 +0x14:  lea    0x0(%esi,%eiz,1),%esi
087e3e68 +0x18:  mov    %ebx,%edx
087e3e6a +0x1a:  mov    0x28(%edx),%ebx
087e3e6d +0x1d:  mov    (%edx),%ecx
087e3e6f +0x1f:  mov    %edx,(%esp)
087e3e72 +0x22:  call   *0x4(%ecx)
087e3e75 +0x25:  test   %ebx,%ebx
087e3e77 +0x27:  jne    087e3e68 <+0x18>
087e3e79 +0x29:  mov    0x4c(%esi),%edx
087e3e7c +0x2c:  lea    0x2c(%esi),%ebx
087e3e7f +0x2f:  movl   $0x0,0x18(%esi)
087e3e86 +0x36:  movl   $0x0,0x1c(%esi)
087e3e8d +0x3d:  cmp    %ebx,%edx
087e3e8f +0x3f:  je     087e3ec1 <+0x71>
087e3e91 +0x41:  test   %edx,%edx
087e3e93 +0x43:  je     087e3ec1 <+0x71>
087e3e95 +0x45:  mov    0x1c(%edx),%eax
087e3e98 +0x48:  mov    0x20(%edx),%ecx
087e3e9b +0x4b:  mov    %ecx,0x20(%eax)
087e3e9e +0x4e:  mov    0x20(%edx),%ecx
087e3ea1 +0x51:  movl   $0x0,0x20(%edx)
087e3ea8 +0x58:  mov    %eax,0x1c(%ecx)
087e3eab +0x5b:  mov    (%edx),%eax
087e3ead +0x5d:  movl   $0x0,0x1c(%edx)
087e3eb4 +0x64:  mov    %edx,(%esp)
087e3eb7 +0x67:  call   *0x4(%eax)
087e3eba +0x6a:  mov    0x4c(%esi),%edx
087e3ebd +0x6d:  cmp    %ebx,%edx
087e3ebf +0x6f:  jne    087e3e91 <+0x41>
087e3ec1 +0x71:  mov    0xc(%ebp),%eax
087e3ec4 +0x74:  mov    %esi,0x4(%esp)
087e3ec8 +0x78:  mov    %eax,(%esp)
087e3ecb +0x7b:  call   087e3c20 <_ZNK12TiXmlElement6CopyToEPS_>  ; TiXmlElement::CopyTo(TiXmlElement*) const
087e3ed0 +0x80:  add    $0x10,%esp
087e3ed3 +0x83:  mov    %esi,%eax
087e3ed5 +0x85:  pop    %ebx
087e3ed6 +0x86:  pop    %esi
087e3ed7 +0x87:  pop    %ebp
087e3ed8 +0x88:  ret
087e3ed9 +0x89:  nop
087e3eda +0x8a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TiXmlElement::operator= @ 0x87e3e50

/* TiXmlElement::TEMPNAMEPLACEHOLDERVALUE(TiXmlElement const&) */

TiXmlElement * __thiscall TiXmlElement::operator=(TiXmlElement *this,TiXmlElement *param_1)

{
  int *piVar1;
  TiXmlElement *pTVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = *(int **)(this + 0x18);
  while (piVar5 != (int *)0x0) {
    piVar1 = (int *)piVar5[10];
    (**(code **)(*piVar5 + 4))(piVar5);
    piVar5 = piVar1;
  }
  pTVar2 = *(TiXmlElement **)(this + 0x4c);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  while ((pTVar2 != this + 0x2c && (pTVar2 != (TiXmlElement *)0x0))) {
    iVar3 = *(int *)(pTVar2 + 0x1c);
    *(int *)(iVar3 + 0x20) = *(int *)(pTVar2 + 0x20);
    iVar4 = *(int *)(pTVar2 + 0x20);
    *(int *)(pTVar2 + 0x20) = 0;
    *(int *)(iVar4 + 0x1c) = iVar3;
    *(int *)(pTVar2 + 0x1c) = 0;
    (**(code **)(*(int *)pTVar2 + 4))(pTVar2);
    pTVar2 = *(TiXmlElement **)(this + 0x4c);
  }
  CopyTo(param_1,this);
  return this;
}
```

# QueryDoubleAttribute

`_ZNK12TiXmlElement20QueryDoubleAttributeERKSsPd`

`TiXmlElement::QueryDoubleAttribute(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, double*) const`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087e1bc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e1bc0  _ZNK12TiXmlElement20QueryDoubleAttributeERKSsPd
#           TiXmlElement::QueryDoubleAttribute(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, double*) const
# range [0x087e1bc0, 0x087e1c3e]
087e1bc0 +0x00:  push   %ebp
087e1bc1 +0x01:  mov    %esp,%ebp
087e1bc3 +0x03:  push   %edi
087e1bc4 +0x04:  push   %esi
087e1bc5 +0x05:  push   %ebx
087e1bc6 +0x06:  sub    $0x3c,%esp
087e1bc9 +0x09:  mov    0x8(%ebp),%ebx
087e1bcc +0x0c:  mov    0x4c(%ebx),%eax
087e1bcf +0x0f:  add    $0x2c,%ebx
087e1bd2 +0x12:  cmp    %ebx,%eax
087e1bd4 +0x14:  je     087e1c30 <+0x70>
087e1bd6 +0x16:  mov    0xc(%ebp),%edx
087e1bd9 +0x19:  mov    %ebx,-0x2c(%ebp)
087e1bdc +0x1c:  mov    (%edx),%edx
087e1bde +0x1e:  mov    %edx,-0x1c(%ebp)
087e1be1 +0x21:  mov    -0xc(%edx),%edx
087e1be4 +0x24:  jmp    087e1bf0 <+0x30>
087e1be6 +0x26:  xchg   %ax,%ax
087e1be8 +0x28:  mov    0x20(%eax),%eax
087e1beb +0x2b:  cmp    %eax,-0x2c(%ebp)
087e1bee +0x2e:  je     087e1c30 <+0x70>
087e1bf0 +0x30:  mov    0x14(%eax),%esi
087e1bf3 +0x33:  cmp    %edx,-0xc(%esi)
087e1bf6 +0x36:  jne    087e1be8 <+0x28>
087e1bf8 +0x38:  mov    -0x1c(%ebp),%edi
087e1bfb +0x3b:  cmp    %edx,%edx
087e1bfd +0x3d:  mov    %edx,%ecx
087e1bff +0x3f:  repz cmpsb %es:(%edi),%ds:(%esi)
087e1c01 +0x41:  jne    087e1be8 <+0x28>
087e1c03 +0x43:  mov    0x10(%ebp),%edx
087e1c06 +0x46:  movl   $"%lf",0x4(%esp)
087e1c0e +0x4e:  mov    %edx,0x8(%esp)
087e1c12 +0x52:  mov    0x18(%eax),%eax
087e1c15 +0x55:  mov    %eax,(%esp)
087e1c18 +0x58:  call   0807d9e0 <_init+0x2d8>
087e1c1d +0x5d:  cmp    $0x1,%eax
087e1c20 +0x60:  setne  %al
087e1c23 +0x63:  add    $0x3c,%esp
087e1c26 +0x66:  movzbl %al,%eax
087e1c29 +0x69:  add    %eax,%eax
087e1c2b +0x6b:  pop    %ebx
087e1c2c +0x6c:  pop    %esi
087e1c2d +0x6d:  pop    %edi
087e1c2e +0x6e:  pop    %ebp
087e1c2f +0x6f:  ret
087e1c30 +0x70:  add    $0x3c,%esp
087e1c33 +0x73:  mov    $0x1,%eax
087e1c38 +0x78:  pop    %ebx
087e1c39 +0x79:  pop    %esi
087e1c3a +0x7a:  pop    %edi
087e1c3b +0x7b:  pop    %ebp
087e1c3c +0x7c:  ret
087e1c3d +0x7d:  nop
087e1c3e +0x7e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TiXmlElement::QueryDoubleAttribute @ 0x87e1bc0

/* TiXmlElement::QueryDoubleAttribute(std::string const&, double*) const */

char __thiscall
TiXmlElement::QueryDoubleAttribute(TiXmlElement *this,string *param_1,double *param_2)

{
  TiXmlElement *pTVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  pTVar1 = *(TiXmlElement **)(this + 0x4c);
  if (pTVar1 != this + 0x2c) {
    iVar2 = *(int *)(*(char **)param_1 + -0xc);
    do {
      if (*(int *)(*(char **)(pTVar1 + 0x14) + -0xc) == iVar2) {
        bVar6 = true;
        iVar3 = iVar2;
        pcVar4 = *(char **)(pTVar1 + 0x14);
        pcVar5 = *(char **)param_1;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar6 = *pcVar4 == *pcVar5;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar5 + 1;
        } while (bVar6);
        if (bVar6) {
          iVar2 = sscanf(*(char **)(pTVar1 + 0x18),"%lf",param_2);
          return (iVar2 != 1) * '\x02';
        }
      }
      pTVar1 = *(TiXmlElement **)(pTVar1 + 0x20);
    } while (this + 0x2c != pTVar1);
  }
  return '\x01';
}
```

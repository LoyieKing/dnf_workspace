# Attribute

`_ZNK12TiXmlElement9AttributeERKSsPd`

`TiXmlElement::Attribute(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, double*) const`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087e1c40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e1c40  _ZNK12TiXmlElement9AttributeERKSsPd
#           TiXmlElement::Attribute(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, double*) const
# range [0x087e1c40, 0x087e1cca]
087e1c40 +0x00:  push   %ebp
087e1c41 +0x01:  mov    %esp,%ebp
087e1c43 +0x03:  push   %edi
087e1c44 +0x04:  push   %esi
087e1c45 +0x05:  push   %ebx
087e1c46 +0x06:  sub    $0x3c,%esp
087e1c49 +0x09:  mov    0x8(%ebp),%ebx
087e1c4c +0x0c:  mov    0x4c(%ebx),%edx
087e1c4f +0x0f:  add    $0x2c,%ebx
087e1c52 +0x12:  cmp    %ebx,%edx
087e1c54 +0x14:  je     087e1cb8 <+0x78>
087e1c56 +0x16:  mov    0xc(%ebp),%eax
087e1c59 +0x19:  mov    %ebx,-0x2c(%ebp)
087e1c5c +0x1c:  mov    (%eax),%eax
087e1c5e +0x1e:  mov    %eax,-0x1c(%ebp)
087e1c61 +0x21:  mov    -0xc(%eax),%eax
087e1c64 +0x24:  jmp    087e1c70 <+0x30>
087e1c66 +0x26:  xchg   %ax,%ax
087e1c68 +0x28:  mov    0x20(%edx),%edx
087e1c6b +0x2b:  cmp    %edx,-0x2c(%ebp)
087e1c6e +0x2e:  je     087e1cb8 <+0x78>
087e1c70 +0x30:  mov    0x14(%edx),%esi
087e1c73 +0x33:  cmp    %eax,-0xc(%esi)
087e1c76 +0x36:  jne    087e1c68 <+0x28>
087e1c78 +0x38:  mov    -0x1c(%ebp),%edi
087e1c7b +0x3b:  cmp    %eax,%eax
087e1c7d +0x3d:  mov    %eax,%ecx
087e1c7f +0x3f:  repz cmpsb %es:(%edi),%ds:(%esi)
087e1c81 +0x41:  jne    087e1c68 <+0x28>
087e1c83 +0x43:  mov    0x10(%ebp),%edi
087e1c86 +0x46:  lea    0x18(%edx),%ebx
087e1c89 +0x49:  test   %edi,%edi
087e1c8b +0x4b:  je     087e1ca7 <+0x67>
087e1c8d +0x4d:  mov    0x10(%ebp),%eax
087e1c90 +0x50:  movl   $"%lf",0x4(%esp)
087e1c98 +0x58:  mov    %eax,0x8(%esp)
087e1c9c +0x5c:  mov    0x18(%edx),%eax
087e1c9f +0x5f:  mov    %eax,(%esp)
087e1ca2 +0x62:  call   0807d9e0 <_init+0x2d8>
087e1ca7 +0x67:  add    $0x3c,%esp
087e1caa +0x6a:  mov    %ebx,%eax
087e1cac +0x6c:  pop    %ebx
087e1cad +0x6d:  pop    %esi
087e1cae +0x6e:  pop    %edi
087e1caf +0x6f:  pop    %ebp
087e1cb0 +0x70:  ret
087e1cb1 +0x71:  lea    0x0(%esi,%eiz,1),%esi
087e1cb8 +0x78:  xor    %ebx,%ebx
087e1cba +0x7a:  add    $0x3c,%esp
087e1cbd +0x7d:  mov    %ebx,%eax
087e1cbf +0x7f:  pop    %ebx
087e1cc0 +0x80:  pop    %esi
087e1cc1 +0x81:  pop    %edi
087e1cc2 +0x82:  pop    %ebp
087e1cc3 +0x83:  ret
087e1cc4 +0x84:  lea    0x0(%esi),%esi
087e1cca +0x8a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TiXmlElement::Attribute @ 0x87e1c40

/* TiXmlElement::Attribute(std::string const&, double*) const */

TiXmlElement * __thiscall
TiXmlElement::Attribute(TiXmlElement *this,string *param_1,double *param_2)

{
  int iVar1;
  int iVar2;
  TiXmlElement *pTVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  pTVar3 = *(TiXmlElement **)(this + 0x4c);
  if (pTVar3 != this + 0x2c) {
    iVar1 = *(int *)(*(char **)param_1 + -0xc);
    do {
      if (*(int *)(*(char **)(pTVar3 + 0x14) + -0xc) == iVar1) {
        bVar6 = true;
        iVar2 = iVar1;
        pcVar4 = *(char **)(pTVar3 + 0x14);
        pcVar5 = *(char **)param_1;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar6 = *pcVar4 == *pcVar5;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar5 + 1;
        } while (bVar6);
        if (bVar6) {
          if (param_2 != (double *)0x0) {
            sscanf(*(char **)(pTVar3 + 0x18),"%lf",param_2);
          }
          return pTVar3 + 0x18;
        }
      }
      pTVar3 = *(TiXmlElement **)(pTVar3 + 0x20);
    } while (this + 0x2c != pTVar3);
  }
  return (TiXmlElement *)0x0;
}
```

# Attribute

`_ZNK12TiXmlElement9AttributeERKSsPi`

`TiXmlElement::Attribute(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int*) const`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087e1ad0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e1ad0  _ZNK12TiXmlElement9AttributeERKSsPi
#           TiXmlElement::Attribute(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int*) const
# range [0x087e1ad0, 0x087e1b5a]
087e1ad0 +0x00:  push   %ebp
087e1ad1 +0x01:  mov    %esp,%ebp
087e1ad3 +0x03:  push   %edi
087e1ad4 +0x04:  push   %esi
087e1ad5 +0x05:  push   %ebx
087e1ad6 +0x06:  sub    $0x3c,%esp
087e1ad9 +0x09:  mov    0x8(%ebp),%ebx
087e1adc +0x0c:  mov    0x4c(%ebx),%edx
087e1adf +0x0f:  add    $0x2c,%ebx
087e1ae2 +0x12:  cmp    %ebx,%edx
087e1ae4 +0x14:  je     087e1b48 <+0x78>
087e1ae6 +0x16:  mov    0xc(%ebp),%eax
087e1ae9 +0x19:  mov    %ebx,-0x2c(%ebp)
087e1aec +0x1c:  mov    (%eax),%eax
087e1aee +0x1e:  mov    %eax,-0x1c(%ebp)
087e1af1 +0x21:  mov    -0xc(%eax),%eax
087e1af4 +0x24:  jmp    087e1b00 <+0x30>
087e1af6 +0x26:  xchg   %ax,%ax
087e1af8 +0x28:  mov    0x20(%edx),%edx
087e1afb +0x2b:  cmp    %edx,-0x2c(%ebp)
087e1afe +0x2e:  je     087e1b48 <+0x78>
087e1b00 +0x30:  mov    0x14(%edx),%esi
087e1b03 +0x33:  cmp    %eax,-0xc(%esi)
087e1b06 +0x36:  jne    087e1af8 <+0x28>
087e1b08 +0x38:  mov    -0x1c(%ebp),%edi
087e1b0b +0x3b:  cmp    %eax,%eax
087e1b0d +0x3d:  mov    %eax,%ecx
087e1b0f +0x3f:  repz cmpsb %es:(%edi),%ds:(%esi)
087e1b11 +0x41:  jne    087e1af8 <+0x28>
087e1b13 +0x43:  mov    0x10(%ebp),%esi
087e1b16 +0x46:  lea    0x18(%edx),%ebx
087e1b19 +0x49:  test   %esi,%esi
087e1b1b +0x4b:  je     087e1b37 <+0x67>
087e1b1d +0x4d:  mov    0x10(%ebp),%eax
087e1b20 +0x50:  movl   $"%d",0x4(%esp)
087e1b28 +0x58:  mov    %eax,0x8(%esp)
087e1b2c +0x5c:  mov    0x18(%edx),%eax
087e1b2f +0x5f:  mov    %eax,(%esp)
087e1b32 +0x62:  call   0807d9e0 <_init+0x2d8>
087e1b37 +0x67:  add    $0x3c,%esp
087e1b3a +0x6a:  mov    %ebx,%eax
087e1b3c +0x6c:  pop    %ebx
087e1b3d +0x6d:  pop    %esi
087e1b3e +0x6e:  pop    %edi
087e1b3f +0x6f:  pop    %ebp
087e1b40 +0x70:  ret
087e1b41 +0x71:  lea    0x0(%esi,%eiz,1),%esi
087e1b48 +0x78:  xor    %ebx,%ebx
087e1b4a +0x7a:  add    $0x3c,%esp
087e1b4d +0x7d:  mov    %ebx,%eax
087e1b4f +0x7f:  pop    %ebx
087e1b50 +0x80:  pop    %esi
087e1b51 +0x81:  pop    %edi
087e1b52 +0x82:  pop    %ebp
087e1b53 +0x83:  ret
087e1b54 +0x84:  lea    0x0(%esi),%esi
087e1b5a +0x8a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TiXmlElement::Attribute @ 0x87e1ad0

/* TiXmlElement::Attribute(std::string const&, int*) const */

TiXmlElement * __thiscall TiXmlElement::Attribute(TiXmlElement *this,string *param_1,int *param_2)

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
          if (param_2 != (int *)0x0) {
            sscanf(*(char **)(pTVar3 + 0x18),"%d",param_2);
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

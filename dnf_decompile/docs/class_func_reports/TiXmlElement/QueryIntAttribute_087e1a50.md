# QueryIntAttribute

`_ZNK12TiXmlElement17QueryIntAttributeERKSsPi`

`TiXmlElement::QueryIntAttribute(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int*) const`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087e1a50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e1a50  _ZNK12TiXmlElement17QueryIntAttributeERKSsPi
#           TiXmlElement::QueryIntAttribute(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int*) const
# range [0x087e1a50, 0x087e1ace]
087e1a50 +0x00:  push   %ebp
087e1a51 +0x01:  mov    %esp,%ebp
087e1a53 +0x03:  push   %edi
087e1a54 +0x04:  push   %esi
087e1a55 +0x05:  push   %ebx
087e1a56 +0x06:  sub    $0x3c,%esp
087e1a59 +0x09:  mov    0x8(%ebp),%ebx
087e1a5c +0x0c:  mov    0x4c(%ebx),%eax
087e1a5f +0x0f:  add    $0x2c,%ebx
087e1a62 +0x12:  cmp    %ebx,%eax
087e1a64 +0x14:  je     087e1ac0 <+0x70>
087e1a66 +0x16:  mov    0xc(%ebp),%edx
087e1a69 +0x19:  mov    %ebx,-0x2c(%ebp)
087e1a6c +0x1c:  mov    (%edx),%edx
087e1a6e +0x1e:  mov    %edx,-0x1c(%ebp)
087e1a71 +0x21:  mov    -0xc(%edx),%edx
087e1a74 +0x24:  jmp    087e1a80 <+0x30>
087e1a76 +0x26:  xchg   %ax,%ax
087e1a78 +0x28:  mov    0x20(%eax),%eax
087e1a7b +0x2b:  cmp    %eax,-0x2c(%ebp)
087e1a7e +0x2e:  je     087e1ac0 <+0x70>
087e1a80 +0x30:  mov    0x14(%eax),%esi
087e1a83 +0x33:  cmp    %edx,-0xc(%esi)
087e1a86 +0x36:  jne    087e1a78 <+0x28>
087e1a88 +0x38:  mov    -0x1c(%ebp),%edi
087e1a8b +0x3b:  cmp    %edx,%edx
087e1a8d +0x3d:  mov    %edx,%ecx
087e1a8f +0x3f:  repz cmpsb %es:(%edi),%ds:(%esi)
087e1a91 +0x41:  jne    087e1a78 <+0x28>
087e1a93 +0x43:  mov    0x10(%ebp),%edx
087e1a96 +0x46:  movl   $"%d",0x4(%esp)
087e1a9e +0x4e:  mov    %edx,0x8(%esp)
087e1aa2 +0x52:  mov    0x18(%eax),%eax
087e1aa5 +0x55:  mov    %eax,(%esp)
087e1aa8 +0x58:  call   0807d9e0 <_init+0x2d8>
087e1aad +0x5d:  cmp    $0x1,%eax
087e1ab0 +0x60:  setne  %al
087e1ab3 +0x63:  add    $0x3c,%esp
087e1ab6 +0x66:  movzbl %al,%eax
087e1ab9 +0x69:  add    %eax,%eax
087e1abb +0x6b:  pop    %ebx
087e1abc +0x6c:  pop    %esi
087e1abd +0x6d:  pop    %edi
087e1abe +0x6e:  pop    %ebp
087e1abf +0x6f:  ret
087e1ac0 +0x70:  add    $0x3c,%esp
087e1ac3 +0x73:  mov    $0x1,%eax
087e1ac8 +0x78:  pop    %ebx
087e1ac9 +0x79:  pop    %esi
087e1aca +0x7a:  pop    %edi
087e1acb +0x7b:  pop    %ebp
087e1acc +0x7c:  ret
087e1acd +0x7d:  nop
087e1ace +0x7e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TiXmlElement::QueryIntAttribute @ 0x87e1a50

/* TiXmlElement::QueryIntAttribute(std::string const&, int*) const */

char __thiscall TiXmlElement::QueryIntAttribute(TiXmlElement *this,string *param_1,int *param_2)

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
          iVar2 = sscanf(*(char **)(pTVar1 + 0x18),"%d",param_2);
          return (iVar2 != 1) * '\x02';
        }
      }
      pTVar1 = *(TiXmlElement **)(pTVar1 + 0x20);
    } while (this + 0x2c != pTVar1);
  }
  return '\x01';
}
```

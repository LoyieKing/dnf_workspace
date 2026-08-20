# Attribute

`_ZNK12TiXmlElement9AttributeERKSs`

`TiXmlElement::Attribute(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087e1b60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e1b60  _ZNK12TiXmlElement9AttributeERKSs
#           TiXmlElement::Attribute(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
# range [0x087e1b60, 0x087e1bba]
087e1b60 +0x00:  push   %ebp
087e1b61 +0x01:  mov    %esp,%ebp
087e1b63 +0x03:  push   %edi
087e1b64 +0x04:  push   %esi
087e1b65 +0x05:  push   %ebx
087e1b66 +0x06:  sub    $0x8,%esp
087e1b69 +0x09:  mov    0x8(%ebp),%ebx
087e1b6c +0x0c:  mov    0x4c(%ebx),%eax
087e1b6f +0x0f:  add    $0x2c,%ebx
087e1b72 +0x12:  cmp    %ebx,%eax
087e1b74 +0x14:  je     087e1bb0 <+0x50>
087e1b76 +0x16:  mov    0xc(%ebp),%edx
087e1b79 +0x19:  mov    %ebx,-0x14(%ebp)
087e1b7c +0x1c:  mov    (%edx),%edx
087e1b7e +0x1e:  mov    %edx,-0x10(%ebp)
087e1b81 +0x21:  mov    -0xc(%edx),%edx
087e1b84 +0x24:  jmp    087e1b90 <+0x30>
087e1b86 +0x26:  xchg   %ax,%ax
087e1b88 +0x28:  mov    0x20(%eax),%eax
087e1b8b +0x2b:  cmp    %eax,-0x14(%ebp)
087e1b8e +0x2e:  je     087e1bb0 <+0x50>
087e1b90 +0x30:  mov    0x14(%eax),%esi
087e1b93 +0x33:  cmp    %edx,-0xc(%esi)
087e1b96 +0x36:  jne    087e1b88 <+0x28>
087e1b98 +0x38:  mov    -0x10(%ebp),%edi
087e1b9b +0x3b:  cmp    %edx,%edx
087e1b9d +0x3d:  mov    %edx,%ecx
087e1b9f +0x3f:  repz cmpsb %es:(%edi),%ds:(%esi)
087e1ba1 +0x41:  jne    087e1b88 <+0x28>
087e1ba3 +0x43:  add    $0x8,%esp
087e1ba6 +0x46:  add    $0x18,%eax
087e1ba9 +0x49:  pop    %ebx
087e1baa +0x4a:  pop    %esi
087e1bab +0x4b:  pop    %edi
087e1bac +0x4c:  pop    %ebp
087e1bad +0x4d:  ret
087e1bae +0x4e:  xchg   %ax,%ax
087e1bb0 +0x50:  add    $0x8,%esp
087e1bb3 +0x53:  xor    %eax,%eax
087e1bb5 +0x55:  pop    %ebx
087e1bb6 +0x56:  pop    %esi
087e1bb7 +0x57:  pop    %edi
087e1bb8 +0x58:  pop    %ebp
087e1bb9 +0x59:  ret
087e1bba +0x5a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TiXmlElement::Attribute @ 0x87e1b60

/* TiXmlElement::Attribute(std::string const&) const */

TiXmlElement * __thiscall TiXmlElement::Attribute(TiXmlElement *this,string *param_1)

{
  int iVar1;
  TiXmlElement *pTVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  pTVar2 = *(TiXmlElement **)(this + 0x4c);
  if (pTVar2 != this + 0x2c) {
    iVar1 = *(int *)(*(char **)param_1 + -0xc);
    do {
      if (*(int *)(*(char **)(pTVar2 + 0x14) + -0xc) == iVar1) {
        bVar6 = true;
        iVar3 = iVar1;
        pcVar4 = *(char **)(pTVar2 + 0x14);
        pcVar5 = *(char **)param_1;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar6 = *pcVar4 == *pcVar5;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar5 + 1;
        } while (bVar6);
        if (bVar6) {
          return pTVar2 + 0x18;
        }
      }
      pTVar2 = *(TiXmlElement **)(pTVar2 + 0x20);
    } while (this + 0x2c != pTVar2);
  }
  return (TiXmlElement *)0x0;
}
```

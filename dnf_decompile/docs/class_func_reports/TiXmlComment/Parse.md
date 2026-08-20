# Parse

`_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding`

`TiXmlComment::Parse(char const*, TiXmlParsingData*, TiXmlEncoding)`

| 类 | 地址 |
|---|---|
| `TiXmlComment` | `0x087e7b20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e7b20  _ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding
#           TiXmlComment::Parse(char const*, TiXmlParsingData*, TiXmlEncoding)
# range [0x087e7b20, 0x087e7d49]
087e7b20 +0x000:  push   %ebp
087e7b21 +0x001:  mov    %esp,%ebp
087e7b23 +0x003:  push   %edi
087e7b24 +0x004:  push   %esi
087e7b25 +0x005:  push   %ebx
087e7b26 +0x006:  sub    $0x3c,%esp
087e7b29 +0x009:  mov    0x8(%ebp),%eax
087e7b2c +0x00c:  mov    0xc(%ebp),%esi
087e7b2f +0x00f:  mov    0x14(%ebp),%edi
087e7b32 +0x012:  mov    %eax,(%esp)
087e7b35 +0x015:  call   087dfed0 <_ZNK9TiXmlNode11GetDocumentEv>  ; TiXmlNode::GetDocument() const
087e7b3a +0x01a:  mov    0x8(%ebp),%ecx
087e7b3d +0x01d:  movl   $0x0,0x8(%esp)
087e7b45 +0x025:  movl   $&data#2fb52a47(.rodata),0x4(%esp)
087e7b4d +0x02d:  add    $0x20,%ecx
087e7b50 +0x030:  mov    %ecx,-0x1c(%ebp)
087e7b53 +0x033:  mov    %eax,-0x20(%ebp)
087e7b56 +0x036:  mov    %ecx,(%esp)
087e7b59 +0x039:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e7b5e +0x03e:  test   %esi,%esi
087e7b60 +0x040:  jne    087e7bf0 <+0xd0>
087e7b66 +0x046:  mov    0x10(%ebp),%ebx
087e7b69 +0x049:  test   %ebx,%ebx
087e7b6b +0x04b:  je     087e7b91 <+0x71>
087e7b6d +0x04d:  mov    0x10(%ebp),%eax
087e7b70 +0x050:  mov    %edi,0x8(%esp)
087e7b74 +0x054:  mov    %esi,0x4(%esp)
087e7b78 +0x058:  mov    %eax,(%esp)
087e7b7b +0x05b:  call   087e6020 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding>  ; TiXmlParsingData::Stamp(char const*, TiXmlEncoding)
087e7b80 +0x060:  mov    0x10(%ebp),%ecx
087e7b83 +0x063:  mov    0x4(%ecx),%edx
087e7b86 +0x066:  mov    (%ecx),%eax
087e7b88 +0x068:  mov    0x8(%ebp),%ecx
087e7b8b +0x06b:  mov    %eax,0x4(%ecx)
087e7b8e +0x06e:  mov    %edx,0x8(%ecx)
087e7b91 +0x071:  mov    %edi,0xc(%esp)
087e7b95 +0x075:  movl   $0x0,0x8(%esp)
087e7b9d +0x07d:  movl   $"<!--",0x4(%esp)
087e7ba5 +0x085:  mov    %esi,(%esp)
087e7ba8 +0x088:  call   087e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>  ; TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding)
087e7bad +0x08d:  test   %al,%al
087e7baf +0x08f:  je     087e7c68 <+0x148>
087e7bb5 +0x095:  mov    -0x1c(%ebp),%eax
087e7bb8 +0x098:  lea    0x4(%esi),%ebx
087e7bbb +0x09b:  movl   $0x0,0x8(%esp)
087e7bc3 +0x0a3:  movl   $&data#2fb52a47(.rodata),0x4(%esp)
087e7bcb +0x0ab:  mov    %eax,(%esp)
087e7bce +0x0ae:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e7bd3 +0x0b3:  test   %ebx,%ebx
087e7bd5 +0x0b5:  je     087e7be1 <+0xc1>
087e7bd7 +0x0b7:  cmpb   $0x0,0x4(%esi)
087e7bdb +0x0bb:  jne    087e7cc8 <+0x1a8>
087e7be1 +0x0c1:  add    $0x3c,%esp
087e7be4 +0x0c4:  mov    %ebx,%eax
087e7be6 +0x0c6:  pop    %ebx
087e7be7 +0x0c7:  pop    %esi
087e7be8 +0x0c8:  pop    %edi
087e7be9 +0x0c9:  pop    %ebp
087e7bea +0x0ca:  ret
087e7beb +0x0cb:  nop
087e7bec +0x0cc:  lea    0x0(%esi,%eiz,1),%esi
087e7bf0 +0x0d0:  movzbl (%esi),%ebx
087e7bf3 +0x0d3:  test   %bl,%bl
087e7bf5 +0x0d5:  je     087e7d40 <+0x220>
087e7bfb +0x0db:  cmp    $0x1,%edi
087e7bfe +0x0de:  je     087e7c3e <+0x11e>
087e7c00 +0x0e0:  movzbl %bl,%eax
087e7c03 +0x0e3:  mov    %eax,(%esp)
087e7c06 +0x0e6:  call   0807e280 <_init+0xb78>
087e7c0b +0x0eb:  cmp    $0xa,%bl
087e7c0e +0x0ee:  je     087e7c20 <+0x100>
087e7c10 +0x0f0:  test   %eax,%eax
087e7c12 +0x0f2:  jne    087e7c20 <+0x100>
087e7c14 +0x0f4:  cmp    $0xd,%bl
087e7c17 +0x0f7:  jne    087e7b66 <+0x46>
087e7c1d +0x0fd:  lea    0x0(%esi),%esi
087e7c20 +0x100:  add    $0x1,%esi
087e7c23 +0x103:  movzbl (%esi),%ebx
087e7c26 +0x106:  test   %bl,%bl
087e7c28 +0x108:  je     087e7b66 <+0x46>
087e7c2e +0x10e:  jmp    087e7c00 <+0xe0>
087e7c30 +0x110:  add    $0x1,%esi
087e7c33 +0x113:  movzbl (%esi),%ebx
087e7c36 +0x116:  test   %bl,%bl
087e7c38 +0x118:  je     087e7b66 <+0x46>
087e7c3e +0x11e:  cmpb   $0xef,(%esi)
087e7c41 +0x121:  je     087e7ca0 <+0x180>
087e7c43 +0x123:  movzbl %bl,%eax
087e7c46 +0x126:  mov    %eax,(%esp)
087e7c49 +0x129:  call   0807e280 <_init+0xb78>
087e7c4e +0x12e:  test   %eax,%eax
087e7c50 +0x130:  jne    087e7c30 <+0x110>
087e7c52 +0x132:  cmp    $0xa,%bl
087e7c55 +0x135:  je     087e7c30 <+0x110>
087e7c57 +0x137:  cmp    $0xd,%bl
087e7c5a +0x13a:  jne    087e7b66 <+0x46>
087e7c60 +0x140:  jmp    087e7c30 <+0x110>
087e7c62 +0x142:  lea    0x0(%esi),%esi
087e7c68 +0x148:  mov    -0x20(%ebp),%ecx
087e7c6b +0x14b:  xor    %ebx,%ebx
087e7c6d +0x14d:  test   %ecx,%ecx
087e7c6f +0x14f:  je     087e7be1 <+0xc1>
087e7c75 +0x155:  mov    0x10(%ebp),%eax
087e7c78 +0x158:  mov    -0x20(%ebp),%ecx
087e7c7b +0x15b:  mov    %edi,0x10(%esp)
087e7c7f +0x15f:  mov    %esi,0x8(%esp)
087e7c83 +0x163:  mov    %eax,0xc(%esp)
087e7c87 +0x167:  movl   $0xa,0x4(%esp)
087e7c8f +0x16f:  mov    %ecx,(%esp)
087e7c92 +0x172:  call   087e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>  ; TiXmlDocument::SetError(int, char const*, TiXmlParsingData*, TiXmlEncoding)
087e7c97 +0x177:  jmp    087e7be1 <+0xc1>
087e7c9c +0x17c:  lea    0x0(%esi,%eiz,1),%esi
087e7ca0 +0x180:  movzbl 0x1(%esi),%eax
087e7ca4 +0x184:  cmp    $0xbb,%al
087e7ca6 +0x186:  je     087e7d31 <+0x211>
087e7cac +0x18c:  cmp    $0xbf,%al
087e7cae +0x18e:  xchg   %ax,%ax
087e7cb0 +0x190:  jne    087e7c43 <+0x123>
087e7cb2 +0x192:  movzbl 0x2(%esi),%eax
087e7cb6 +0x196:  cmp    $0xbe,%al
087e7cb8 +0x198:  je     087e7cbe <+0x19e>
087e7cba +0x19a:  cmp    $0xbf,%al
087e7cbc +0x19c:  jne    087e7c43 <+0x123>
087e7cbe +0x19e:  add    $0x3,%esi
087e7cc1 +0x1a1:  jmp    087e7c33 <+0x113>
087e7cc6 +0x1a6:  xchg   %ax,%ax
087e7cc8 +0x1a8:  mov    -0x1c(%ebp),%esi
087e7ccb +0x1ab:  nop
087e7ccc +0x1ac:  lea    0x0(%esi,%eiz,1),%esi
087e7cd0 +0x1b0:  mov    %edi,0xc(%esp)
087e7cd4 +0x1b4:  movl   $0x0,0x8(%esp)
087e7cdc +0x1bc:  movl   $"-->",0x4(%esp)
087e7ce4 +0x1c4:  mov    %ebx,(%esp)
087e7ce7 +0x1c7:  call   087e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>  ; TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding)
087e7cec +0x1cc:  test   %al,%al
087e7cee +0x1ce:  jne    087e7d20 <+0x200>
087e7cf0 +0x1d0:  mov    %ebx,0x4(%esp)
087e7cf4 +0x1d4:  movl   $0x1,0x8(%esp)
087e7cfc +0x1dc:  mov    %esi,(%esp)
087e7cff +0x1df:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e7d04 +0x1e4:  add    $0x1,%ebx
087e7d07 +0x1e7:  je     087e7be1 <+0xc1>
087e7d0d +0x1ed:  cmpb   $0x0,(%ebx)
087e7d10 +0x1f0:  jne    087e7cd0 <+0x1b0>
087e7d12 +0x1f2:  add    $0x3c,%esp
087e7d15 +0x1f5:  mov    %ebx,%eax
087e7d17 +0x1f7:  pop    %ebx
087e7d18 +0x1f8:  pop    %esi
087e7d19 +0x1f9:  pop    %edi
087e7d1a +0x1fa:  pop    %ebp
087e7d1b +0x1fb:  ret
087e7d1c +0x1fc:  lea    0x0(%esi,%eiz,1),%esi
087e7d20 +0x200:  cmpb   $0x0,(%ebx)
087e7d23 +0x203:  je     087e7be1 <+0xc1>
087e7d29 +0x209:  add    $0x3,%ebx
087e7d2c +0x20c:  jmp    087e7be1 <+0xc1>
087e7d31 +0x211:  cmpb   $0xbf,0x2(%esi)
087e7d35 +0x215:  jne    087e7c43 <+0x123>
087e7d3b +0x21b:  jmp    087e7cbe <+0x19e>
087e7d3d +0x21d:  lea    0x0(%esi),%esi
087e7d40 +0x220:  xor    %esi,%esi
087e7d42 +0x222:  jmp    087e7b66 <+0x46>
087e7d47 +0x227:  nop
087e7d48 +0x228:  nop
087e7d49 +0x229:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TiXmlComment::Parse @ 0x87e7b20

/* TiXmlComment::Parse(char const*, TiXmlParsingData*, TiXmlEncoding) */

byte * __thiscall
TiXmlComment::Parse(TiXmlComment *this,byte *param_1,TiXmlParsingData *param_2,int param_4)

{
  undefined4 uVar1;
  char cVar2;
  TiXmlDocument *pTVar3;
  int iVar4;
  string *this_00;
  byte bVar5;
  byte *pbVar6;
  
  pTVar3 = (TiXmlDocument *)TiXmlNode::GetDocument((TiXmlNode *)this);
  this_00 = (string *)(this + 0x20);
  std::string::assign(this_00,"",0);
  if (param_1 != (byte *)0x0) {
    bVar5 = *param_1;
    if (bVar5 == 0) {
      param_1 = (byte *)0x0;
    }
    else if (param_4 == 1) {
      do {
        if (*param_1 == 0xef) {
          if (param_1[1] == 0xbb) {
            if (param_1[2] == 0xbf) goto LAB_087e7cbe;
            goto LAB_087e7c43;
          }
          if ((param_1[1] != 0xbf) || ((param_1[2] != 0xbe && (param_1[2] != 0xbf))))
          goto LAB_087e7c43;
LAB_087e7cbe:
          param_1 = param_1 + 3;
        }
        else {
LAB_087e7c43:
          iVar4 = isspace((uint)bVar5);
          if (((iVar4 == 0) && (bVar5 != 10)) && (bVar5 != 0xd)) break;
          param_1 = param_1 + 1;
        }
        bVar5 = *param_1;
      } while (bVar5 != 0);
    }
    else {
      do {
        iVar4 = isspace((uint)bVar5);
        if (((bVar5 != 10) && (iVar4 == 0)) && (bVar5 != 0xd)) break;
        param_1 = param_1 + 1;
        bVar5 = *param_1;
      } while (bVar5 != 0);
    }
  }
  if (param_2 != (TiXmlParsingData *)0x0) {
    TiXmlParsingData::Stamp(param_2,param_1,param_4);
    uVar1 = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(this + 4) = *(undefined4 *)param_2;
    *(undefined4 *)(this + 8) = uVar1;
  }
  cVar2 = TiXmlBase::StringEqual(param_1,&DAT_08d0cfd6,0,param_4);
  if (cVar2 == '\0') {
    pbVar6 = (byte *)0x0;
    if (pTVar3 != (TiXmlDocument *)0x0) {
      TiXmlDocument::SetError(pTVar3,10,param_1,param_2,param_4);
    }
  }
  else {
    pbVar6 = param_1 + 4;
    std::string::assign(this_00,"",0);
    if ((pbVar6 != (byte *)0x0) && (param_1[4] != 0)) {
      while (cVar2 = TiXmlBase::StringEqual(pbVar6,&DAT_08de0e87,0,param_4), cVar2 == '\0') {
        std::string::append(this_00,(char *)pbVar6,1);
        pbVar6 = pbVar6 + 1;
        if (pbVar6 == (byte *)0x0) {
          return (byte *)0x0;
        }
        if (*pbVar6 == 0) {
          return pbVar6;
        }
      }
      if (*pbVar6 != 0) {
        pbVar6 = pbVar6 + 3;
      }
    }
  }
  return pbVar6;
}
```

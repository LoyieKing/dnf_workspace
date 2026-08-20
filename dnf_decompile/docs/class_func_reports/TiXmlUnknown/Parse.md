# Parse

`_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding`

`TiXmlUnknown::Parse(char const*, TiXmlParsingData*, TiXmlEncoding)`

| 类 | 地址 |
|---|---|
| `TiXmlUnknown` | `0x087e78b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e78b0  _ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding
#           TiXmlUnknown::Parse(char const*, TiXmlParsingData*, TiXmlEncoding)
# range [0x087e78b0, 0x087e7b19]
087e78b0 +0x000:  push   %ebp
087e78b1 +0x001:  mov    %esp,%ebp
087e78b3 +0x003:  push   %edi
087e78b4 +0x004:  push   %esi
087e78b5 +0x005:  push   %ebx
087e78b6 +0x006:  sub    $0x5c,%esp
087e78b9 +0x009:  mov    0x8(%ebp),%esi
087e78bc +0x00c:  mov    0xc(%ebp),%edi
087e78bf +0x00f:  mov    %esi,(%esp)
087e78c2 +0x012:  call   087dfed0 <_ZNK9TiXmlNode11GetDocumentEv>  ; TiXmlNode::GetDocument() const
087e78c7 +0x017:  test   %edi,%edi
087e78c9 +0x019:  mov    %eax,-0x24(%ebp)
087e78cc +0x01c:  jne    087e7a20 <+0x170>
087e78d2 +0x022:  mov    0x10(%ebp),%edx
087e78d5 +0x025:  test   %edx,%edx
087e78d7 +0x027:  je     087e78fd <+0x4d>
087e78d9 +0x029:  mov    0x14(%ebp),%eax
087e78dc +0x02c:  mov    0x10(%ebp),%edx
087e78df +0x02f:  mov    %edi,0x4(%esp)
087e78e3 +0x033:  mov    %eax,0x8(%esp)
087e78e7 +0x037:  mov    %edx,(%esp)
087e78ea +0x03a:  call   087e6020 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding>  ; TiXmlParsingData::Stamp(char const*, TiXmlEncoding)
087e78ef +0x03f:  mov    0x10(%ebp),%ecx
087e78f2 +0x042:  mov    (%ecx),%eax
087e78f4 +0x044:  mov    0x4(%ecx),%edx
087e78f7 +0x047:  mov    %eax,0x4(%esi)
087e78fa +0x04a:  mov    %edx,0x8(%esi)
087e78fd +0x04d:  test   %edi,%edi
087e78ff +0x04f:  je     087e7a10 <+0x160>
087e7905 +0x055:  movzbl (%edi),%eax
087e7908 +0x058:  test   %al,%al
087e790a +0x05a:  je     087e7a10 <+0x160>
087e7910 +0x060:  cmp    $0x3c,%al
087e7912 +0x062:  jne    087e7a10 <+0x160>
087e7918 +0x068:  lea    0x20(%esi),%ecx
087e791b +0x06b:  lea    0x1(%edi),%ebx
087e791e +0x06e:  mov    %ecx,-0x20(%ebp)
087e7921 +0x071:  movl   $0x0,0x8(%esp)
087e7929 +0x079:  movl   $&data#2fb52a47(.rodata),0x4(%esp)
087e7931 +0x081:  mov    %ecx,(%esp)
087e7934 +0x084:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e7939 +0x089:  test   %ebx,%ebx
087e793b +0x08b:  je     087e79d0 <+0x120>
087e7941 +0x091:  movzbl 0x1(%edi),%eax
087e7945 +0x095:  test   %al,%al
087e7947 +0x097:  je     087e79c3 <+0x113>
087e7949 +0x099:  cmp    $0x3e,%al
087e794b +0x09b:  je     087e7ab8 <+0x208>
087e7951 +0x0a1:  mov    %esi,-0x3c(%ebp)
087e7954 +0x0a4:  mov    %esi,%ecx
087e7956 +0x0a6:  jmp    087e7963 <+0xb3>
087e7958 +0x0a8:  cmp    $0x3e,%al
087e795a +0x0aa:  je     087e7ab8 <+0x208>
087e7960 +0x0b0:  mov    -0x3c(%ebp),%ecx
087e7963 +0x0b3:  mov    0x20(%ecx),%edx
087e7966 +0x0b6:  mov    -0xc(%edx),%ecx
087e7969 +0x0b9:  lea    -0xc(%edx),%esi
087e796c +0x0bc:  mov    %esi,-0x1c(%ebp)
087e796f +0x0bf:  lea    0x1(%ecx),%edi
087e7972 +0x0c2:  cmp    0x4(%esi),%edi
087e7975 +0x0c5:  mov    %edi,-0x2c(%ebp)
087e7978 +0x0c8:  jbe    087e7ac8 <+0x218>
087e797e +0x0ce:  mov    -0x20(%ebp),%edx
087e7981 +0x0d1:  mov    -0x2c(%ebp),%edi
087e7984 +0x0d4:  mov    %al,-0x28(%ebp)
087e7987 +0x0d7:  mov    %edx,(%esp)
087e798a +0x0da:  mov    %edi,0x4(%esp)
087e798e +0x0de:  call   08707d10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1920>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1920
087e7993 +0x0e3:  mov    -0x3c(%ebp),%ecx
087e7996 +0x0e6:  movzbl -0x28(%ebp),%eax
087e799a +0x0ea:  mov    0x20(%ecx),%edx
087e799d +0x0ed:  mov    -0xc(%edx),%ecx
087e79a0 +0x0f0:  mov    %al,(%edx,%ecx,1)
087e79a3 +0x0f3:  mov    -0x3c(%ebp),%esi
087e79a6 +0x0f6:  mov    0x20(%esi),%edx
087e79a9 +0x0f9:  lea    -0xc(%edx),%eax
087e79ac +0x0fc:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087e79b1 +0x101:  jne    087e7aff <+0x24f>
087e79b7 +0x107:  add    $0x1,%ebx
087e79ba +0x10a:  je     087e79d0 <+0x120>
087e79bc +0x10c:  movzbl (%ebx),%eax
087e79bf +0x10f:  test   %al,%al
087e79c1 +0x111:  jne    087e7958 <+0xa8>
087e79c3 +0x113:  add    $0x5c,%esp
087e79c6 +0x116:  mov    %ebx,%eax
087e79c8 +0x118:  pop    %ebx
087e79c9 +0x119:  pop    %esi
087e79ca +0x11a:  pop    %edi
087e79cb +0x11b:  pop    %ebp
087e79cc +0x11c:  ret
087e79cd +0x11d:  lea    0x0(%esi),%esi
087e79d0 +0x120:  mov    -0x24(%ebp),%ecx
087e79d3 +0x123:  test   %ecx,%ecx
087e79d5 +0x125:  je     087e7a1b <+0x16b>
087e79d7 +0x127:  mov    0x14(%ebp),%eax
087e79da +0x12a:  movl   $0x0,0xc(%esp)
087e79e2 +0x132:  movl   $0x0,0x8(%esp)
087e79ea +0x13a:  mov    %eax,0x10(%esp)
087e79ee +0x13e:  mov    -0x24(%ebp),%edx
087e79f1 +0x141:  xor    %ebx,%ebx
087e79f3 +0x143:  movl   $0x9,0x4(%esp)
087e79fb +0x14b:  mov    %edx,(%esp)
087e79fe +0x14e:  call   087e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>  ; TiXmlDocument::SetError(int, char const*, TiXmlParsingData*, TiXmlEncoding)
087e7a03 +0x153:  add    $0x5c,%esp
087e7a06 +0x156:  mov    %ebx,%eax
087e7a08 +0x158:  pop    %ebx
087e7a09 +0x159:  pop    %esi
087e7a0a +0x15a:  pop    %edi
087e7a0b +0x15b:  pop    %ebp
087e7a0c +0x15c:  ret
087e7a0d +0x15d:  lea    0x0(%esi),%esi
087e7a10 +0x160:  mov    -0x24(%ebp),%eax
087e7a13 +0x163:  test   %eax,%eax
087e7a15 +0x165:  jne    087e7ae8 <+0x238>
087e7a1b +0x16b:  xor    %ebx,%ebx
087e7a1d +0x16d:  jmp    087e79c3 <+0x113>
087e7a1f +0x16f:  nop
087e7a20 +0x170:  movzbl (%edi),%ebx
087e7a23 +0x173:  test   %bl,%bl
087e7a25 +0x175:  je     087e7ae0 <+0x230>
087e7a2b +0x17b:  cmpl   $0x1,0x14(%ebp)
087e7a2f +0x17f:  je     087e7a6e <+0x1be>
087e7a31 +0x181:  movzbl %bl,%eax
087e7a34 +0x184:  mov    %eax,(%esp)
087e7a37 +0x187:  call   0807e280 <_init+0xb78>
087e7a3c +0x18c:  cmp    $0xa,%bl
087e7a3f +0x18f:  je     087e7a50 <+0x1a0>
087e7a41 +0x191:  test   %eax,%eax
087e7a43 +0x193:  jne    087e7a50 <+0x1a0>
087e7a45 +0x195:  cmp    $0xd,%bl
087e7a48 +0x198:  jne    087e78d2 <+0x22>
087e7a4e +0x19e:  xchg   %ax,%ax
087e7a50 +0x1a0:  add    $0x1,%edi
087e7a53 +0x1a3:  movzbl (%edi),%ebx
087e7a56 +0x1a6:  test   %bl,%bl
087e7a58 +0x1a8:  je     087e78d2 <+0x22>
087e7a5e +0x1ae:  jmp    087e7a31 <+0x181>
087e7a60 +0x1b0:  add    $0x1,%edi
087e7a63 +0x1b3:  movzbl (%edi),%ebx
087e7a66 +0x1b6:  test   %bl,%bl
087e7a68 +0x1b8:  je     087e78d2 <+0x22>
087e7a6e +0x1be:  cmpb   $0xef,(%edi)
087e7a71 +0x1c1:  je     087e7a98 <+0x1e8>
087e7a73 +0x1c3:  movzbl %bl,%eax
087e7a76 +0x1c6:  mov    %eax,(%esp)
087e7a79 +0x1c9:  call   0807e280 <_init+0xb78>
087e7a7e +0x1ce:  test   %eax,%eax
087e7a80 +0x1d0:  jne    087e7a60 <+0x1b0>
087e7a82 +0x1d2:  cmp    $0xa,%bl
087e7a85 +0x1d5:  je     087e7a60 <+0x1b0>
087e7a87 +0x1d7:  cmp    $0xd,%bl
087e7a8a +0x1da:  jne    087e78d2 <+0x22>
087e7a90 +0x1e0:  jmp    087e7a60 <+0x1b0>
087e7a92 +0x1e2:  lea    0x0(%esi),%esi
087e7a98 +0x1e8:  movzbl 0x1(%edi),%eax
087e7a9c +0x1ec:  cmp    $0xbb,%al
087e7a9e +0x1ee:  xchg   %ax,%ax
087e7aa0 +0x1f0:  je     087e7ac0 <+0x210>
087e7aa2 +0x1f2:  cmp    $0xbf,%al
087e7aa4 +0x1f4:  jne    087e7a73 <+0x1c3>
087e7aa6 +0x1f6:  movzbl 0x2(%edi),%eax
087e7aaa +0x1fa:  cmp    $0xbe,%al
087e7aac +0x1fc:  je     087e7ab2 <+0x202>
087e7aae +0x1fe:  cmp    $0xbf,%al
087e7ab0 +0x200:  jne    087e7a73 <+0x1c3>
087e7ab2 +0x202:  add    $0x3,%edi
087e7ab5 +0x205:  jmp    087e7a63 <+0x1b3>
087e7ab7 +0x207:  nop
087e7ab8 +0x208:  add    $0x1,%ebx
087e7abb +0x20b:  jmp    087e79c3 <+0x113>
087e7ac0 +0x210:  cmpb   $0xbf,0x2(%edi)
087e7ac4 +0x214:  jne    087e7a73 <+0x1c3>
087e7ac6 +0x216:  jmp    087e7ab2 <+0x202>
087e7ac8 +0x218:  mov    -0x1c(%ebp),%esi
087e7acb +0x21b:  mov    0x8(%esi),%esi
087e7ace +0x21e:  test   %esi,%esi
087e7ad0 +0x220:  jg     087e797e <+0xce>
087e7ad6 +0x226:  jmp    087e79a0 <+0xf0>
087e7adb +0x22b:  nop
087e7adc +0x22c:  lea    0x0(%esi,%eiz,1),%esi
087e7ae0 +0x230:  xor    %edi,%edi
087e7ae2 +0x232:  jmp    087e78d2 <+0x22>
087e7ae7 +0x237:  nop
087e7ae8 +0x238:  mov    0x14(%ebp),%esi
087e7aeb +0x23b:  mov    0x10(%ebp),%eax
087e7aee +0x23e:  mov    %edi,0x8(%esp)
087e7af2 +0x242:  mov    %esi,0x10(%esp)
087e7af6 +0x246:  mov    %eax,0xc(%esp)
087e7afa +0x24a:  jmp    087e79ee <+0x13e>
087e7aff +0x24f:  mov    -0x2c(%ebp),%edi
087e7b02 +0x252:  movl   $0x0,0x8(%eax)
087e7b09 +0x259:  mov    %edi,-0xc(%edx)
087e7b0c +0x25c:  movb   $0x0,0xc(%eax,%edi,1)
087e7b11 +0x261:  jmp    087e79b7 <+0x107>
087e7b16 +0x266:  lea    0x0(%esi),%esi
087e7b19 +0x269:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlUnknown::Parse @ 0x87e78b0

/* TiXmlUnknown::Parse(char const*, TiXmlParsingData*, TiXmlEncoding) */

byte * __thiscall
TiXmlUnknown::Parse(TiXmlUnknown *this,byte *param_1,TiXmlParsingData *param_2,int param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  TiXmlDocument *pTVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  
  pTVar4 = (TiXmlDocument *)TiXmlNode::GetDocument((TiXmlNode *)this);
  if (param_1 != (byte *)0x0) {
    uVar8 = (uint)*param_1;
    if (*param_1 == 0) {
      param_1 = (byte *)0x0;
    }
    else if (param_4 == 1) {
      do {
        if (*param_1 == 0xef) {
          if (param_1[1] == 0xbb) {
            if (param_1[2] == 0xbf) goto LAB_087e7ab2;
            goto LAB_087e7a73;
          }
          if ((param_1[1] != 0xbf) || ((param_1[2] != 0xbe && (param_1[2] != 0xbf))))
          goto LAB_087e7a73;
LAB_087e7ab2:
          param_1 = param_1 + 3;
        }
        else {
LAB_087e7a73:
          iVar5 = isspace(uVar8);
          if (((iVar5 == 0) && ((char)uVar8 != '\n')) && ((char)uVar8 != '\r')) break;
          param_1 = param_1 + 1;
        }
        uVar8 = (uint)*param_1;
      } while (*param_1 != 0);
    }
    else {
      do {
        iVar5 = isspace(uVar8);
        if ((((char)uVar8 != '\n') && (iVar5 == 0)) && ((char)uVar8 != '\r')) break;
        param_1 = param_1 + 1;
        uVar8 = (uint)*param_1;
      } while (*param_1 != 0);
    }
  }
  if (param_2 != (TiXmlParsingData *)0x0) {
    TiXmlParsingData::Stamp(param_2,param_1,param_4);
    uVar2 = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(this + 4) = *(undefined4 *)param_2;
    *(undefined4 *)(this + 8) = uVar2;
  }
  if (((param_1 == (byte *)0x0) || (*param_1 == 0)) || (*param_1 != 0x3c)) {
    if (pTVar4 != (TiXmlDocument *)0x0) goto LAB_087e79ee;
  }
  else {
    pbVar7 = param_1 + 1;
    std::string::assign((string *)(this + 0x20),"",0);
    if (pbVar7 != (byte *)0x0) {
      bVar1 = param_1[1];
      while( true ) {
        if (bVar1 == 0) {
          return pbVar7;
        }
        if (bVar1 == 0x3e) {
          return pbVar7 + 1;
        }
        iVar5 = *(int *)(this + 0x20);
        iVar6 = *(int *)(iVar5 + -0xc);
        uVar8 = iVar6 + 1;
        if ((*(uint *)(iVar5 + -8) < uVar8) || (0 < *(int *)(iVar5 + -4))) {
          std::string::reserve((string *)(this + 0x20),uVar8);
          iVar5 = *(int *)(this + 0x20);
          iVar6 = *(int *)(iVar5 + -0xc);
        }
        *(byte *)(iVar5 + iVar6) = bVar1;
        puVar3 = *(undefined1 **)(this + 0x20);
        if (puVar3 != &DAT_0948ccfc) {
          *(undefined4 *)(puVar3 + -4) = 0;
          *(uint *)(puVar3 + -0xc) = uVar8;
          puVar3[uVar8] = 0;
        }
        pbVar7 = pbVar7 + 1;
        if (pbVar7 == (byte *)0x0) break;
        bVar1 = *pbVar7;
      }
    }
    if (pTVar4 != (TiXmlDocument *)0x0) {
      param_2 = (TiXmlParsingData *)0x0;
      param_1 = (byte *)0x0;
LAB_087e79ee:
      TiXmlDocument::SetError(pTVar4,9,param_1,param_2,param_4);
      return (byte *)0x0;
    }
  }
  return (byte *)0x0;
}
```

# Parse

`_ZN9TiXmlText5ParseEPKcP16TiXmlParsingData13TiXmlEncoding`

`TiXmlText::Parse(char const*, TiXmlParsingData*, TiXmlEncoding)`

| 类 | 地址 |
|---|---|
| `TiXmlText` | `0x087e6e00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e6e00  _ZN9TiXmlText5ParseEPKcP16TiXmlParsingData13TiXmlEncoding
#           TiXmlText::Parse(char const*, TiXmlParsingData*, TiXmlEncoding)
# range [0x087e6e00, 0x087e7079]
087e6e00 +0x000:  push   %ebp
087e6e01 +0x001:  mov    %esp,%ebp
087e6e03 +0x003:  push   %edi
087e6e04 +0x004:  push   %esi
087e6e05 +0x005:  push   %ebx
087e6e06 +0x006:  sub    $0x6c,%esp
087e6e09 +0x009:  mov    0x8(%ebp),%esi
087e6e0c +0x00c:  mov    0x10(%ebp),%ebx
087e6e0f +0x00f:  mov    0xc(%ebp),%edi
087e6e12 +0x012:  movl   $0x0,0x8(%esp)
087e6e1a +0x01a:  lea    0x20(%esi),%eax
087e6e1d +0x01d:  mov    %eax,-0x30(%ebp)
087e6e20 +0x020:  movl   $&data#2fb52a47(.rodata),0x4(%esp)
087e6e28 +0x028:  mov    %eax,(%esp)
087e6e2b +0x02b:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e6e30 +0x030:  mov    %esi,(%esp)
087e6e33 +0x033:  call   087dfed0 <_ZNK9TiXmlNode11GetDocumentEv>  ; TiXmlNode::GetDocument() const
087e6e38 +0x038:  test   %ebx,%ebx
087e6e3a +0x03a:  mov    %eax,-0x2c(%ebp)
087e6e3d +0x03d:  je     087e6e5d <+0x5d>
087e6e3f +0x03f:  mov    0x14(%ebp),%edx
087e6e42 +0x042:  mov    %edi,0x4(%esp)
087e6e46 +0x046:  mov    %ebx,(%esp)
087e6e49 +0x049:  mov    %edx,0x8(%esp)
087e6e4d +0x04d:  call   087e6020 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding>  ; TiXmlParsingData::Stamp(char const*, TiXmlEncoding)
087e6e52 +0x052:  mov    (%ebx),%eax
087e6e54 +0x054:  mov    0x4(%ebx),%edx
087e6e57 +0x057:  mov    %eax,0x4(%esi)
087e6e5a +0x05a:  mov    %edx,0x8(%esi)
087e6e5d +0x05d:  cmpb   $0x0,0x2c(%esi)
087e6e61 +0x061:  je     087e6f80 <+0x180>
087e6e67 +0x067:  mov    0x14(%ebp),%eax
087e6e6a +0x06a:  movb   $0x1,0x2c(%esi)
087e6e6e +0x06e:  movl   $0x0,0x8(%esp)
087e6e76 +0x076:  movl   $"<![CDATA[",0x4(%esp)
087e6e7e +0x07e:  mov    %eax,0xc(%esp)
087e6e82 +0x082:  mov    %edi,(%esp)
087e6e85 +0x085:  call   087e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>  ; TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding)
087e6e8a +0x08a:  test   %al,%al
087e6e8c +0x08c:  je     087e6fd9 <+0x1d9>
087e6e92 +0x092:  mov    %edi,%ebx
087e6e94 +0x094:  add    $0x9,%ebx
087e6e97 +0x097:  je     087e6ec8 <+0xc8>
087e6e99 +0x099:  cmpb   $0x0,0x9(%edi)
087e6e9d +0x09d:  je     087e6ec8 <+0xc8>
087e6e9f +0x09f:  nop
087e6ea0 +0x0a0:  mov    0x14(%ebp),%eax
087e6ea3 +0x0a3:  movl   $0x0,0x8(%esp)
087e6eab +0x0ab:  movl   $"]]>",0x4(%esp)
087e6eb3 +0x0b3:  mov    %ebx,(%esp)
087e6eb6 +0x0b6:  mov    %eax,0xc(%esp)
087e6eba +0x0ba:  call   087e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>  ; TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding)
087e6ebf +0x0bf:  test   %al,%al
087e6ec1 +0x0c1:  je     087e6f08 <+0x108>
087e6ec3 +0x0c3:  nop
087e6ec4 +0x0c4:  lea    0x0(%esi,%eiz,1),%esi
087e6ec8 +0x0c8:  mov    0x14(%ebp),%eax
087e6ecb +0x0cb:  lea    -0x20(%ebp),%esi
087e6ece +0x0ce:  xor    %ecx,%ecx
087e6ed0 +0x0d0:  mov    %esi,%edx
087e6ed2 +0x0d2:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,-0x20(%ebp)
087e6ed9 +0x0d9:  movl   $"]]>",(%esp)
087e6ee0 +0x0e0:  mov    %eax,0x4(%esp)
087e6ee4 +0x0e4:  mov    %ebx,%eax
087e6ee6 +0x0e6:  call   087e6850 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2>  ; TiXmlBase::ReadText(char const*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*, bool, char const*, bool, TiXmlEncoding) [clone .clone.2]
087e6eeb +0x0eb:  mov    -0x20(%ebp),%edx
087e6eee +0x0ee:  sub    $0xc,%edx
087e6ef1 +0x0f1:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edx
087e6ef7 +0x0f7:  jne    087e7027 <+0x227>
087e6efd +0x0fd:  add    $0x6c,%esp
087e6f00 +0x100:  pop    %ebx
087e6f01 +0x101:  pop    %esi
087e6f02 +0x102:  pop    %edi
087e6f03 +0x103:  pop    %ebp
087e6f04 +0x104:  ret
087e6f05 +0x105:  lea    0x0(%esi),%esi
087e6f08 +0x108:  movzbl (%ebx),%edx
087e6f0b +0x10b:  mov    0x20(%esi),%eax
087e6f0e +0x10e:  mov    %dl,-0x49(%ebp)
087e6f11 +0x111:  mov    -0xc(%eax),%edx
087e6f14 +0x114:  lea    -0xc(%eax),%ecx
087e6f17 +0x117:  mov    %ecx,-0x3c(%ebp)
087e6f1a +0x11a:  lea    0x1(%edx),%edi
087e6f1d +0x11d:  cmp    0x4(%ecx),%edi
087e6f20 +0x120:  mov    %edi,-0x2c(%ebp)
087e6f23 +0x123:  jbe    087e6f70 <+0x170>
087e6f25 +0x125:  lea    0x0(%esi),%esi
087e6f28 +0x128:  mov    -0x2c(%ebp),%eax
087e6f2b +0x12b:  mov    -0x30(%ebp),%edx
087e6f2e +0x12e:  mov    %eax,0x4(%esp)
087e6f32 +0x132:  mov    %edx,(%esp)
087e6f35 +0x135:  call   08707d10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1920>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1920
087e6f3a +0x13a:  mov    0x20(%esi),%eax
087e6f3d +0x13d:  mov    -0xc(%eax),%edx
087e6f40 +0x140:  movzbl -0x49(%ebp),%ecx
087e6f44 +0x144:  mov    %cl,(%eax,%edx,1)
087e6f47 +0x147:  mov    0x20(%esi),%edx
087e6f4a +0x14a:  lea    -0xc(%edx),%eax
087e6f4d +0x14d:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087e6f52 +0x152:  jne    087e7010 <+0x210>
087e6f58 +0x158:  add    $0x1,%ebx
087e6f5b +0x15b:  je     087e6ec8 <+0xc8>
087e6f61 +0x161:  cmpb   $0x0,(%ebx)
087e6f64 +0x164:  je     087e6ec8 <+0xc8>
087e6f6a +0x16a:  jmp    087e6ea0 <+0xa0>
087e6f6f +0x16f:  nop
087e6f70 +0x170:  mov    -0x3c(%ebp),%edi
087e6f73 +0x173:  mov    0x8(%edi),%ecx
087e6f76 +0x176:  test   %ecx,%ecx
087e6f78 +0x178:  jg     087e6f28 <+0x128>
087e6f7a +0x17a:  jmp    087e6f40 <+0x140>
087e6f7c +0x17c:  lea    0x0(%esi,%eiz,1),%esi
087e6f80 +0x180:  mov    0x14(%ebp),%ecx
087e6f83 +0x183:  movl   $0x0,0x8(%esp)
087e6f8b +0x18b:  movl   $"<![CDATA[",0x4(%esp)
087e6f93 +0x193:  mov    %edi,(%esp)
087e6f96 +0x196:  mov    %ecx,0xc(%esp)
087e6f9a +0x19a:  call   087e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>  ; TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding)
087e6f9f +0x19f:  test   %al,%al
087e6fa1 +0x1a1:  jne    087e6e67 <+0x67>
087e6fa7 +0x1a7:  mov    0x14(%ebp),%edx
087e6faa +0x1aa:  mov    $0x1,%ecx
087e6faf +0x1af:  mov    %edi,%eax
087e6fb1 +0x1b1:  movl   $"<",(%esp)
087e6fb8 +0x1b8:  mov    %edx,0x4(%esp)
087e6fbc +0x1bc:  mov    -0x30(%ebp),%edx
087e6fbf +0x1bf:  call   087e6850 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2>  ; TiXmlBase::ReadText(char const*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*, bool, char const*, bool, TiXmlEncoding) [clone .clone.2]
087e6fc4 +0x1c4:  test   %eax,%eax
087e6fc6 +0x1c6:  je     087e6efd <+0xfd>
087e6fcc +0x1cc:  cmpb   $0x0,(%eax)
087e6fcf +0x1cf:  je     087e6fe0 <+0x1e0>
087e6fd1 +0x1d1:  sub    $0x1,%eax
087e6fd4 +0x1d4:  jmp    087e6efd <+0xfd>
087e6fd9 +0x1d9:  mov    -0x2c(%ebp),%esi
087e6fdc +0x1dc:  test   %esi,%esi
087e6fde +0x1de:  jne    087e6fe7 <+0x1e7>
087e6fe0 +0x1e0:  xor    %eax,%eax
087e6fe2 +0x1e2:  jmp    087e6efd <+0xfd>
087e6fe7 +0x1e7:  mov    0x14(%ebp),%edx
087e6fea +0x1ea:  mov    -0x2c(%ebp),%ecx
087e6fed +0x1ed:  mov    %ebx,0xc(%esp)
087e6ff1 +0x1f1:  mov    %edi,0x8(%esp)
087e6ff5 +0x1f5:  mov    %edx,0x10(%esp)
087e6ff9 +0x1f9:  movl   $0xe,0x4(%esp)
087e7001 +0x201:  mov    %ecx,(%esp)
087e7004 +0x204:  call   087e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>  ; TiXmlDocument::SetError(int, char const*, TiXmlParsingData*, TiXmlEncoding)
087e7009 +0x209:  xor    %eax,%eax
087e700b +0x20b:  jmp    087e6efd <+0xfd>
087e7010 +0x210:  mov    -0x2c(%ebp),%edi
087e7013 +0x213:  movl   $0x0,0x8(%eax)
087e701a +0x21a:  mov    %edi,-0xc(%edx)
087e701d +0x21d:  movb   $0x0,0xc(%eax,%edi,1)
087e7022 +0x222:  jmp    087e6f58 <+0x158>
087e7027 +0x227:  mov    $&data#bb92cc41(.plt),%ecx
087e702c +0x22c:  test   %ecx,%ecx
087e702e +0x22e:  je     087e706c <+0x26c>
087e7030 +0x230:  or     $0xffffffff,%ecx
087e7033 +0x233:  lock xadd %ecx,0x8(%edx)
087e7038 +0x238:  test   %ecx,%ecx
087e703a +0x23a:  jg     087e6efd <+0xfd>
087e7040 +0x240:  lea    -0x19(%ebp),%ecx
087e7043 +0x243:  mov    %eax,-0x34(%ebp)
087e7046 +0x246:  mov    %ecx,0x4(%esp)
087e704a +0x24a:  mov    %edx,(%esp)
087e704d +0x24d:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087e7052 +0x252:  mov    -0x34(%ebp),%eax
087e7055 +0x255:  jmp    087e6efd <+0xfd>
087e705a +0x25a:  mov    %eax,%ebx
087e705c +0x25c:  mov    %esi,(%esp)
087e705f +0x25f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087e7064 +0x264:  mov    %ebx,(%esp)
087e7067 +0x267:  call   08ae3750 <_Unwind_Resume>
087e706c +0x26c:  mov    0x8(%edx),%ecx
087e706f +0x26f:  lea    -0x1(%ecx),%ebx
087e7072 +0x272:  mov    %ebx,0x8(%edx)
087e7075 +0x275:  jmp    087e7038 <+0x238>
087e7077 +0x277:  nop
087e7078 +0x278:  nop
087e7079 +0x279:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TiXmlText::Parse @ 0x87e6e00

/* WARNING: Removing unreachable block (ram,0x087e706c) */
/* TiXmlText::Parse(char const*, TiXmlParsingData*, TiXmlEncoding) */

char * __thiscall
TiXmlText::Parse(TiXmlText *this,int param_1,TiXmlParsingData *param_2,undefined4 param_4)

{
  string *this_00;
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  char cVar5;
  TiXmlDocument *pTVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined1 *local_24 [5];
  
  this_00 = (string *)(this + 0x20);
  std::string::assign(this_00,"",0);
  pTVar6 = (TiXmlDocument *)TiXmlNode::GetDocument((TiXmlNode *)this);
  if (param_2 != (TiXmlParsingData *)0x0) {
    TiXmlParsingData::Stamp(param_2,param_1,param_4);
    uVar3 = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(this + 4) = *(undefined4 *)param_2;
    *(undefined4 *)(this + 8) = uVar3;
  }
  if ((this[0x2c] == (TiXmlText)0x0) &&
     (cVar5 = TiXmlBase::StringEqual(param_1,&DAT_08d0cfdb,0,param_4), cVar5 == '\0')) {
    pcVar9 = (char *)TiXmlBase::ReadText(param_1,this_00,1,&DAT_08d0c9b8,param_4);
    if (pcVar9 == (char *)0x0) {
      return (char *)0x0;
    }
    if (*pcVar9 != '\0') {
      return pcVar9 + -1;
    }
  }
  else {
    this[0x2c] = (TiXmlText)0x1;
    cVar5 = TiXmlBase::StringEqual(param_1,&DAT_08d0cfdb,0,param_4);
    if (cVar5 != '\0') {
      pcVar9 = (char *)(param_1 + 9);
      if ((pcVar9 != (char *)0x0) && (*(char *)(param_1 + 9) != '\0')) {
        while (cVar5 = TiXmlBase::StringEqual(pcVar9,&DAT_08de0fad,0,param_4), cVar5 == '\0') {
          cVar5 = *pcVar9;
          iVar7 = *(int *)(this + 0x20);
          iVar8 = *(int *)(iVar7 + -0xc);
          uVar1 = iVar8 + 1;
          if ((*(uint *)(iVar7 + -8) < uVar1) || (0 < *(int *)(iVar7 + -4))) {
            std::string::reserve(this_00,uVar1);
            iVar7 = *(int *)(this + 0x20);
            iVar8 = *(int *)(iVar7 + -0xc);
          }
          *(char *)(iVar7 + iVar8) = cVar5;
          puVar4 = *(undefined1 **)(this + 0x20);
          if (puVar4 != &DAT_0948ccfc) {
            *(undefined4 *)(puVar4 + -4) = 0;
            *(uint *)(puVar4 + -0xc) = uVar1;
            puVar4[uVar1] = 0;
          }
          pcVar9 = pcVar9 + 1;
          if ((pcVar9 == (char *)0x0) || (*pcVar9 == '\0')) break;
        }
      }
      local_24[0] = &DAT_0948ccfc;
                    /* try { // try from 087e6ee6 to 087e6eea has its CatchHandler @ 087e705a */
      pcVar9 = (char *)TiXmlBase::ReadText(pcVar9,local_24,0,&DAT_08de0fad,param_4);
      if ((allocator *)(local_24[0] + -0xc) == (allocator *)&std::string::_Rep::_S_empty_rep_storage
         ) {
        return pcVar9;
      }
      LOCK();
      piVar2 = (int *)(local_24[0] + -4);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (0 < iVar7) {
        return pcVar9;
      }
      std::string::_Rep::_M_destroy((allocator *)(local_24[0] + -0xc));
      return pcVar9;
    }
    if (pTVar6 != (TiXmlDocument *)0x0) {
      TiXmlDocument::SetError(pTVar6,0xe,param_1,param_2,param_4);
      return (char *)0x0;
    }
  }
  return (char *)0x0;
}
```

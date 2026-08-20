# ReadValue

`_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding`

`TiXmlElement::ReadValue(char const*, TiXmlParsingData*, TiXmlEncoding)`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087e7500` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e7500  _ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding
#           TiXmlElement::ReadValue(char const*, TiXmlParsingData*, TiXmlEncoding)
# range [0x087e7500, 0x087e78aa]
087e7500 +0x000:  push   %ebp
087e7501 +0x001:  mov    %esp,%ebp
087e7503 +0x003:  push   %edi
087e7504 +0x004:  push   %esi
087e7505 +0x005:  push   %ebx
087e7506 +0x006:  sub    $0x3c,%esp
087e7509 +0x009:  mov    0x8(%ebp),%eax
087e750c +0x00c:  mov    0xc(%ebp),%edi
087e750f +0x00f:  mov    %eax,(%esp)
087e7512 +0x012:  call   087dfed0 <_ZNK9TiXmlNode11GetDocumentEv>  ; TiXmlNode::GetDocument() const
087e7517 +0x017:  test   %edi,%edi
087e7519 +0x019:  mov    %eax,-0x28(%ebp)
087e751c +0x01c:  jne    087e7556 <+0x56>
087e751e +0x01e:  cmpl   $0x0,-0x28(%ebp)
087e7522 +0x022:  je     087e787a <+0x37a>
087e7528 +0x028:  mov    0x14(%ebp),%eax
087e752b +0x02b:  xor    %esi,%esi
087e752d +0x02d:  mov    -0x28(%ebp),%edx
087e7530 +0x030:  movl   $0x0,0xc(%esp)
087e7538 +0x038:  movl   $0x0,0x8(%esp)
087e7540 +0x040:  mov    %eax,0x10(%esp)
087e7544 +0x044:  movl   $0x5,0x4(%esp)
087e754c +0x04c:  mov    %edx,(%esp)
087e754f +0x04f:  call   087e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>  ; TiXmlDocument::SetError(int, char const*, TiXmlParsingData*, TiXmlEncoding)
087e7554 +0x054:  jmp    087e75c4 <+0xc4>
087e7556 +0x056:  movzbl (%edi),%ebx
087e7559 +0x059:  test   %bl,%bl
087e755b +0x05b:  je     087e751e <+0x1e>
087e755d +0x05d:  cmpl   $0x1,0x14(%ebp)
087e7561 +0x061:  mov    %edi,%esi
087e7563 +0x063:  je     087e7594 <+0x94>
087e7565 +0x065:  movzbl %bl,%eax
087e7568 +0x068:  mov    %eax,(%esp)
087e756b +0x06b:  call   0807e280 <_init+0xb78>
087e7570 +0x070:  cmp    $0xa,%bl
087e7573 +0x073:  je     087e757e <+0x7e>
087e7575 +0x075:  test   %eax,%eax
087e7577 +0x077:  jne    087e757e <+0x7e>
087e7579 +0x079:  cmp    $0xd,%bl
087e757c +0x07c:  jne    087e75b6 <+0xb6>
087e757e +0x07e:  add    $0x1,%esi
087e7581 +0x081:  movzbl (%esi),%ebx
087e7584 +0x084:  test   %bl,%bl
087e7586 +0x086:  je     087e75b6 <+0xb6>
087e7588 +0x088:  jmp    087e7565 <+0x65>
087e758a +0x08a:  add    $0x1,%esi
087e758d +0x08d:  movzbl (%esi),%ebx
087e7590 +0x090:  test   %bl,%bl
087e7592 +0x092:  je     087e75b6 <+0xb6>
087e7594 +0x094:  cmpb   $0xef,(%esi)
087e7597 +0x097:  je     087e7844 <+0x344>
087e759d +0x09d:  movzbl %bl,%eax
087e75a0 +0x0a0:  mov    %eax,(%esp)
087e75a3 +0x0a3:  call   0807e280 <_init+0xb78>
087e75a8 +0x0a8:  test   %eax,%eax
087e75aa +0x0aa:  jne    087e758a <+0x8a>
087e75ac +0x0ac:  cmp    $0xa,%bl
087e75af +0x0af:  je     087e758a <+0x8a>
087e75b1 +0x0b1:  cmp    $0xd,%bl
087e75b4 +0x0b4:  je     087e758a <+0x8a>
087e75b6 +0x0b6:  test   %esi,%esi
087e75b8 +0x0b8:  je     087e751e <+0x1e>
087e75be +0x0be:  xchg   %ax,%ax
087e75c0 +0x0c0:  test   %bl,%bl
087e75c2 +0x0c2:  jne    087e75d0 <+0xd0>
087e75c4 +0x0c4:  add    $0x3c,%esp
087e75c7 +0x0c7:  mov    %esi,%eax
087e75c9 +0x0c9:  pop    %ebx
087e75ca +0x0ca:  pop    %esi
087e75cb +0x0cb:  pop    %edi
087e75cc +0x0cc:  pop    %ebp
087e75cd +0x0cd:  ret
087e75ce +0x0ce:  xchg   %ax,%ax
087e75d0 +0x0d0:  cmp    $0x3c,%bl
087e75d3 +0x0d3:  je     087e7780 <+0x280>
087e75d9 +0x0d9:  movl   $0x30,(%esp)
087e75e0 +0x0e0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
087e75e5 +0x0e5:  movl   $0x4,0x4(%esp)
087e75ed +0x0ed:  mov    %eax,%ebx
087e75ef +0x0ef:  mov    %eax,(%esp)
087e75f2 +0x0f2:  call   087dfd90 <_ZN9TiXmlNodeC1ENS_8NodeTypeE>  ; TiXmlNode::TiXmlNode(TiXmlNode::NodeType)
087e75f7 +0x0f7:  movl   $&_ZTV9TiXmlText+0x8,(%ebx)
087e75fd +0x0fd:  lea    0x20(%ebx),%eax
087e7600 +0x100:  movl   $0x0,0x8(%esp)
087e7608 +0x108:  movl   $&data#2fb52a47(.rodata),0x4(%esp)
087e7610 +0x110:  mov    %eax,(%esp)
087e7613 +0x113:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e7618 +0x118:  test   %ebx,%ebx
087e761a +0x11a:  movb   $0x0,0x2c(%ebx)
087e761e +0x11e:  je     087e787a <+0x37a>
087e7624 +0x124:  cmpb   $0x0,&_ZN9TiXmlBase18condenseWhiteSpaceE
087e762b +0x12b:  je     087e7758 <+0x258>
087e7631 +0x131:  mov    0x14(%ebp),%edx
087e7634 +0x134:  mov    (%ebx),%eax
087e7636 +0x136:  mov    %esi,0x4(%esp)
087e763a +0x13a:  mov    %ebx,(%esp)
087e763d +0x13d:  mov    %edx,0xc(%esp)
087e7641 +0x141:  mov    0x10(%ebp),%edx
087e7644 +0x144:  mov    %edx,0x8(%esp)
087e7648 +0x148:  call   *0xc(%eax)
087e764b +0x14b:  mov    %eax,-0x24(%ebp)
087e764e +0x14e:  mov    0x20(%ebx),%esi
087e7651 +0x151:  mov    -0xc(%esi),%eax
087e7654 +0x154:  test   %eax,%eax
087e7656 +0x156:  mov    %eax,-0x20(%ebp)
087e7659 +0x159:  je     087e7749 <+0x249>
087e765f +0x15f:  xor    %edi,%edi
087e7661 +0x161:  mov    %ebx,-0x1c(%ebp)
087e7664 +0x164:  lea    0x0(%esi,%eiz,1),%esi
087e7668 +0x168:  movzbl (%esi,%edi,1),%ebx
087e766c +0x16c:  movzbl %bl,%eax
087e766f +0x16f:  mov    %eax,(%esp)
087e7672 +0x172:  call   0807e280 <_init+0xb78>
087e7677 +0x177:  cmp    $0xa,%bl
087e767a +0x17a:  je     087e7738 <+0x238>
087e7680 +0x180:  test   %eax,%eax
087e7682 +0x182:  jne    087e7738 <+0x238>
087e7688 +0x188:  cmp    $0xd,%bl
087e768b +0x18b:  je     087e7738 <+0x238>
087e7691 +0x191:  mov    -0x1c(%ebp),%ebx
087e7694 +0x194:  mov    0x8(%ebp),%edx
087e7697 +0x197:  mov    %ebx,0x4(%esp)
087e769b +0x19b:  mov    %edx,(%esp)
087e769e +0x19e:  call   087e2150 <_ZN9TiXmlNode12LinkEndChildEPS_>  ; TiXmlNode::LinkEndChild(TiXmlNode*)
087e76a3 +0x1a3:  mov    -0x24(%ebp),%edx
087e76a6 +0x1a6:  test   %edx,%edx
087e76a8 +0x1a8:  je     087e751e <+0x1e>
087e76ae +0x1ae:  mov    -0x24(%ebp),%edx
087e76b1 +0x1b1:  movzbl (%edx),%ebx
087e76b4 +0x1b4:  test   %bl,%bl
087e76b6 +0x1b6:  je     087e751e <+0x1e>
087e76bc +0x1bc:  cmpl   $0x1,0x14(%ebp)
087e76c0 +0x1c0:  mov    %edx,%esi
087e76c2 +0x1c2:  je     087e770a <+0x20a>
087e76c4 +0x1c4:  movzbl %bl,%eax
087e76c7 +0x1c7:  mov    %eax,(%esp)
087e76ca +0x1ca:  call   0807e280 <_init+0xb78>
087e76cf +0x1cf:  cmp    $0xa,%bl
087e76d2 +0x1d2:  je     087e77f8 <+0x2f8>
087e76d8 +0x1d8:  test   %eax,%eax
087e76da +0x1da:  jne    087e77f8 <+0x2f8>
087e76e0 +0x1e0:  cmp    $0xd,%bl
087e76e3 +0x1e3:  je     087e77f8 <+0x2f8>
087e76e9 +0x1e9:  test   %esi,%esi
087e76eb +0x1eb:  je     087e751e <+0x1e>
087e76f1 +0x1f1:  mov    -0x24(%ebp),%edi
087e76f4 +0x1f4:  jmp    087e75c0 <+0xc0>
087e76f9 +0x1f9:  lea    0x0(%esi,%eiz,1),%esi
087e7700 +0x200:  add    $0x1,%esi
087e7703 +0x203:  movzbl (%esi),%ebx
087e7706 +0x206:  test   %bl,%bl
087e7708 +0x208:  je     087e76e9 <+0x1e9>
087e770a +0x20a:  cmpb   $0xef,(%esi)
087e770d +0x20d:  je     087e7810 <+0x310>
087e7713 +0x213:  movzbl %bl,%eax
087e7716 +0x216:  mov    %eax,(%esp)
087e7719 +0x219:  call   0807e280 <_init+0xb78>
087e771e +0x21e:  test   %eax,%eax
087e7720 +0x220:  jne    087e7700 <+0x200>
087e7722 +0x222:  cmp    $0xa,%bl
087e7725 +0x225:  je     087e7700 <+0x200>
087e7727 +0x227:  cmp    $0xd,%bl
087e772a +0x22a:  jne    087e76e9 <+0x1e9>
087e772c +0x22c:  lea    0x0(%esi,%eiz,1),%esi
087e7730 +0x230:  jmp    087e7700 <+0x200>
087e7732 +0x232:  lea    0x0(%esi),%esi
087e7738 +0x238:  add    $0x1,%edi
087e773b +0x23b:  cmp    -0x20(%ebp),%edi
087e773e +0x23e:  xchg   %ax,%ax
087e7740 +0x240:  jb     087e7668 <+0x168>
087e7746 +0x246:  mov    -0x1c(%ebp),%ebx
087e7749 +0x249:  mov    (%ebx),%eax
087e774b +0x24b:  mov    %ebx,(%esp)
087e774e +0x24e:  call   *0x4(%eax)
087e7751 +0x251:  jmp    087e76a3 <+0x1a3>
087e7756 +0x256:  xchg   %ax,%ax
087e7758 +0x258:  mov    0x14(%ebp),%edx
087e775b +0x25b:  mov    (%ebx),%eax
087e775d +0x25d:  mov    %edi,0x4(%esp)
087e7761 +0x261:  mov    %ebx,(%esp)
087e7764 +0x264:  mov    %edx,0xc(%esp)
087e7768 +0x268:  mov    0x10(%ebp),%edx
087e776b +0x26b:  mov    %edx,0x8(%esp)
087e776f +0x26f:  call   *0xc(%eax)
087e7772 +0x272:  mov    %eax,-0x24(%ebp)
087e7775 +0x275:  jmp    087e764e <+0x14e>
087e777a +0x27a:  lea    0x0(%esi),%esi
087e7780 +0x280:  mov    0x14(%ebp),%eax
087e7783 +0x283:  movl   $0x0,0x8(%esp)
087e778b +0x28b:  movl   $"</",0x4(%esp)
087e7793 +0x293:  mov    %esi,(%esp)
087e7796 +0x296:  mov    %eax,0xc(%esp)
087e779a +0x29a:  call   087e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>  ; TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding)
087e779f +0x29f:  test   %al,%al
087e77a1 +0x2a1:  jne    087e75c4 <+0xc4>
087e77a7 +0x2a7:  mov    0x14(%ebp),%edx
087e77aa +0x2aa:  mov    0x8(%ebp),%eax
087e77ad +0x2ad:  mov    %esi,0x4(%esp)
087e77b1 +0x2b1:  mov    %edx,0x8(%esp)
087e77b5 +0x2b5:  mov    %eax,(%esp)
087e77b8 +0x2b8:  call   087e7230 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding>  ; TiXmlNode::Identify(char const*, TiXmlEncoding)
087e77bd +0x2bd:  test   %eax,%eax
087e77bf +0x2bf:  mov    %eax,%ebx
087e77c1 +0x2c1:  je     087e787a <+0x37a>
087e77c7 +0x2c7:  mov    0x14(%ebp),%edx
087e77ca +0x2ca:  mov    (%eax),%eax
087e77cc +0x2cc:  mov    %esi,0x4(%esp)
087e77d0 +0x2d0:  mov    %ebx,(%esp)
087e77d3 +0x2d3:  mov    %edx,0xc(%esp)
087e77d7 +0x2d7:  mov    0x10(%ebp),%edx
087e77da +0x2da:  mov    %edx,0x8(%esp)
087e77de +0x2de:  call   *0xc(%eax)
087e77e1 +0x2e1:  mov    %ebx,0x4(%esp)
087e77e5 +0x2e5:  mov    %eax,-0x24(%ebp)
087e77e8 +0x2e8:  mov    0x8(%ebp),%eax
087e77eb +0x2eb:  mov    %eax,(%esp)
087e77ee +0x2ee:  call   087e2150 <_ZN9TiXmlNode12LinkEndChildEPS_>  ; TiXmlNode::LinkEndChild(TiXmlNode*)
087e77f3 +0x2f3:  jmp    087e76a3 <+0x1a3>
087e77f8 +0x2f8:  add    $0x1,%esi
087e77fb +0x2fb:  movzbl (%esi),%ebx
087e77fe +0x2fe:  test   %bl,%bl
087e7800 +0x300:  je     087e76e9 <+0x1e9>
087e7806 +0x306:  jmp    087e76c4 <+0x1c4>
087e780b +0x30b:  nop
087e780c +0x30c:  lea    0x0(%esi,%eiz,1),%esi
087e7810 +0x310:  movzbl 0x1(%esi),%eax
087e7814 +0x314:  cmp    $0xbb,%al
087e7816 +0x316:  je     087e7838 <+0x338>
087e7818 +0x318:  cmp    $0xbf,%al
087e781a +0x31a:  jne    087e7713 <+0x213>
087e7820 +0x320:  movzbl 0x2(%esi),%eax
087e7824 +0x324:  cmp    $0xbe,%al
087e7826 +0x326:  je     087e7830 <+0x330>
087e7828 +0x328:  cmp    $0xbf,%al
087e782a +0x32a:  jne    087e7713 <+0x213>
087e7830 +0x330:  add    $0x3,%esi
087e7833 +0x333:  jmp    087e7703 <+0x203>
087e7838 +0x338:  cmpb   $0xbf,0x2(%esi)
087e783c +0x33c:  jne    087e7713 <+0x213>
087e7842 +0x342:  jmp    087e7830 <+0x330>
087e7844 +0x344:  movzbl 0x1(%esi),%eax
087e7848 +0x348:  cmp    $0xbb,%al
087e784a +0x34a:  je     087e786e <+0x36e>
087e784c +0x34c:  cmp    $0xbf,%al
087e784e +0x34e:  xchg   %ax,%ax
087e7850 +0x350:  jne    087e759d <+0x9d>
087e7856 +0x356:  movzbl 0x2(%esi),%eax
087e785a +0x35a:  cmp    $0xbe,%al
087e785c +0x35c:  je     087e7866 <+0x366>
087e785e +0x35e:  cmp    $0xbf,%al
087e7860 +0x360:  jne    087e759d <+0x9d>
087e7866 +0x366:  add    $0x3,%esi
087e7869 +0x369:  jmp    087e758d <+0x8d>
087e786e +0x36e:  cmpb   $0xbf,0x2(%esi)
087e7872 +0x372:  jne    087e759d <+0x9d>
087e7878 +0x378:  jmp    087e7866 <+0x366>
087e787a +0x37a:  xor    %esi,%esi
087e787c +0x37c:  lea    0x0(%esi,%eiz,1),%esi
087e7880 +0x380:  jmp    087e75c4 <+0xc4>
087e7885 +0x385:  mov    %eax,%esi
087e7887 +0x387:  mov    %ebx,(%esp)
087e788a +0x38a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
087e788f +0x38f:  mov    %esi,(%esp)
087e7892 +0x392:  call   08ae3750 <_Unwind_Resume>
087e7897 +0x397:  mov    %eax,%esi
087e7899 +0x399:  mov    %ebx,(%esp)
087e789c +0x39c:  call   087e2b70 <_ZN9TiXmlNodeD1Ev>  ; TiXmlNode::~TiXmlNode()
087e78a1 +0x3a1:  jmp    087e7887 <+0x387>
087e78a3 +0x3a3:  nop
087e78a4 +0x3a4:  lea    0x0(%esi),%esi
087e78aa +0x3aa:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TiXmlElement::ReadValue @ 0x87e7500

/* TiXmlElement::ReadValue(char const*, TiXmlParsingData*, TiXmlEncoding) */

byte * __thiscall
TiXmlElement::ReadValue(TiXmlElement *this,byte *param_1,undefined4 param_2,int param_4)

{
  uint uVar1;
  char cVar2;
  TiXmlDocument *pTVar3;
  int iVar4;
  TiXmlNode *pTVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  byte *local_28;
  
  pTVar3 = (TiXmlDocument *)TiXmlNode::GetDocument((TiXmlNode *)this);
  if ((param_1 != (byte *)0x0) && (bVar7 = *param_1, bVar7 != 0)) {
    local_28 = param_1;
    if (param_4 == 1) {
      do {
        if (*local_28 == 0xef) {
          if (local_28[1] == 0xbb) {
            if (local_28[2] == 0xbf) goto LAB_087e7866;
            goto LAB_087e759d;
          }
          if ((local_28[1] != 0xbf) || ((local_28[2] != 0xbe && (local_28[2] != 0xbf))))
          goto LAB_087e759d;
LAB_087e7866:
          local_28 = local_28 + 3;
        }
        else {
LAB_087e759d:
          iVar4 = isspace((uint)bVar7);
          if (((iVar4 == 0) && (bVar7 != 10)) && (bVar7 != 0xd)) break;
          local_28 = local_28 + 1;
        }
        bVar7 = *local_28;
      } while (bVar7 != 0);
    }
    else {
      do {
        iVar4 = isspace((uint)bVar7);
        if (((bVar7 != 10) && (iVar4 == 0)) && (bVar7 != 0xd)) break;
        local_28 = local_28 + 1;
        bVar7 = *local_28;
      } while (bVar7 != 0);
    }
joined_r0x087e75b8:
    if (local_28 != (byte *)0x0) {
      if (bVar7 == 0) {
        return local_28;
      }
      if (bVar7 == 0x3c) {
        cVar2 = TiXmlBase::StringEqual(local_28,&DAT_08de0f50,0,param_4);
        if (cVar2 != '\0') {
          return local_28;
        }
        pTVar5 = (TiXmlNode *)TiXmlNode::Identify((TiXmlNode *)this,local_28,param_4);
        if (pTVar5 == (TiXmlNode *)0x0) {
          return (byte *)0x0;
        }
        local_28 = (byte *)(**(code **)(*(int *)pTVar5 + 0xc))(pTVar5,local_28,param_2,param_4);
        TiXmlNode::LinkEndChild((TiXmlNode *)this,pTVar5);
      }
      else {
        pTVar5 = operator_new(0x30);
                    /* try { // try from 087e75f2 to 087e75f6 has its CatchHandler @ 087e7885 */
        TiXmlNode::TiXmlNode(pTVar5,4);
        *(undefined ***)pTVar5 = &PTR__TiXmlText_08de1168;
                    /* try { // try from 087e7613 to 087e7617 has its CatchHandler @ 087e7897 */
        std::string::assign((string *)(pTVar5 + 0x20),"",0);
        pTVar5[0x2c] = (TiXmlNode)0x0;
        if (pTVar5 == (TiXmlNode *)0x0) {
          return (byte *)0x0;
        }
        if (TiXmlBase::condenseWhiteSpace == '\0') {
          local_28 = (byte *)(**(code **)(*(int *)pTVar5 + 0xc))(pTVar5,param_1,param_2,param_4);
        }
        else {
          local_28 = (byte *)(**(code **)(*(int *)pTVar5 + 0xc))(pTVar5,local_28,param_2,param_4);
        }
        iVar4 = *(int *)(pTVar5 + 0x20);
        uVar1 = *(uint *)(iVar4 + -0xc);
        if (uVar1 != 0) {
          uVar8 = 0;
          do {
            bVar7 = *(byte *)(iVar4 + uVar8);
            iVar6 = isspace((uint)bVar7);
            if (((bVar7 != 10) && (iVar6 == 0)) && (bVar7 != 0xd)) {
              TiXmlNode::LinkEndChild((TiXmlNode *)this,pTVar5);
              goto LAB_087e76a3;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar1);
        }
        (**(code **)(*(int *)pTVar5 + 4))(pTVar5);
      }
LAB_087e76a3:
      if ((local_28 == (byte *)0x0) || (bVar7 = *local_28, bVar7 == 0)) goto LAB_087e751e;
      param_1 = local_28;
      if (param_4 == 1) {
        do {
          if (*local_28 == 0xef) {
            if (local_28[1] == 0xbb) {
              if (local_28[2] == 0xbf) goto LAB_087e7830;
              goto LAB_087e7713;
            }
            if ((local_28[1] != 0xbf) || ((local_28[2] != 0xbe && (local_28[2] != 0xbf))))
            goto LAB_087e7713;
LAB_087e7830:
            local_28 = local_28 + 3;
          }
          else {
LAB_087e7713:
            iVar4 = isspace((uint)bVar7);
            if (((iVar4 == 0) && (bVar7 != 10)) && (bVar7 != 0xd)) break;
            local_28 = local_28 + 1;
          }
          bVar7 = *local_28;
        } while (bVar7 != 0);
      }
      else {
        do {
          iVar4 = isspace((uint)bVar7);
          if (((bVar7 != 10) && (iVar4 == 0)) && (bVar7 != 0xd)) break;
          local_28 = local_28 + 1;
          bVar7 = *local_28;
        } while (bVar7 != 0);
      }
      goto joined_r0x087e75b8;
    }
  }
LAB_087e751e:
  if (pTVar3 != (TiXmlDocument *)0x0) {
    TiXmlDocument::SetError(pTVar3,5,0,0,param_4);
  }
  return (byte *)0x0;
}
```

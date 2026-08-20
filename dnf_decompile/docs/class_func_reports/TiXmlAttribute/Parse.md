# Parse

`_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding`

`TiXmlAttribute::Parse(char const*, TiXmlParsingData*, TiXmlEncoding)`

| 类 | 地址 |
|---|---|
| `TiXmlAttribute` | `0x087e8430` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e8430  _ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding
#           TiXmlAttribute::Parse(char const*, TiXmlParsingData*, TiXmlEncoding)
# range [0x087e8430, 0x087e883c]
087e8430 +0x000:  push   %ebp
087e8431 +0x001:  mov    %esp,%ebp
087e8433 +0x003:  push   %edi
087e8434 +0x004:  push   %esi
087e8435 +0x005:  push   %ebx
087e8436 +0x006:  sub    $0x4c,%esp
087e8439 +0x009:  mov    0xc(%ebp),%ebx
087e843c +0x00c:  mov    0x10(%ebp),%eax
087e843f +0x00f:  mov    0x14(%ebp),%edx
087e8442 +0x012:  mov    0x8(%ebp),%esi
087e8445 +0x015:  test   %ebx,%ebx
087e8447 +0x017:  mov    %eax,-0x20(%ebp)
087e844a +0x01a:  mov    %edx,-0x1c(%ebp)
087e844d +0x01d:  jne    087e8460 <+0x30>
087e844f +0x01f:  add    $0x4c,%esp
087e8452 +0x022:  mov    %ebx,%eax
087e8454 +0x024:  pop    %ebx
087e8455 +0x025:  pop    %esi
087e8456 +0x026:  pop    %edi
087e8457 +0x027:  pop    %ebp
087e8458 +0x028:  ret
087e8459 +0x029:  lea    0x0(%esi,%eiz,1),%esi
087e8460 +0x030:  movzbl (%ebx),%edx
087e8463 +0x033:  test   %dl,%dl
087e8465 +0x035:  je     087e8673 <+0x243>
087e846b +0x03b:  cmpl   $0x1,-0x1c(%ebp)
087e846f +0x03f:  je     087e8680 <+0x250>
087e8475 +0x045:  mov    %ebx,%edi
087e8477 +0x047:  mov    %edx,%ebx
087e8479 +0x049:  movzbl %bl,%eax
087e847c +0x04c:  mov    %eax,(%esp)
087e847f +0x04f:  call   0807e280 <_init+0xb78>
087e8484 +0x054:  cmp    $0xa,%bl
087e8487 +0x057:  je     087e86d8 <+0x2a8>
087e848d +0x05d:  test   %eax,%eax
087e848f +0x05f:  jne    087e86d8 <+0x2a8>
087e8495 +0x065:  cmp    $0xd,%bl
087e8498 +0x068:  je     087e86d8 <+0x2a8>
087e849e +0x06e:  test   %edi,%edi
087e84a0 +0x070:  mov    %ebx,%edx
087e84a2 +0x072:  mov    %edi,%ebx
087e84a4 +0x074:  je     087e844f <+0x1f>
087e84a6 +0x076:  test   %dl,%dl
087e84a8 +0x078:  je     087e8673 <+0x243>
087e84ae +0x07e:  mov    -0x20(%ebp),%eax
087e84b1 +0x081:  test   %eax,%eax
087e84b3 +0x083:  je     087e84d9 <+0xa9>
087e84b5 +0x085:  mov    -0x1c(%ebp),%ecx
087e84b8 +0x088:  mov    -0x20(%ebp),%eax
087e84bb +0x08b:  mov    %edi,0x4(%esp)
087e84bf +0x08f:  mov    %ecx,0x8(%esp)
087e84c3 +0x093:  mov    %eax,(%esp)
087e84c6 +0x096:  call   087e6020 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding>  ; TiXmlParsingData::Stamp(char const*, TiXmlEncoding)
087e84cb +0x09b:  mov    -0x20(%ebp),%ecx
087e84ce +0x09e:  mov    (%ecx),%eax
087e84d0 +0x0a0:  mov    0x4(%ecx),%edx
087e84d3 +0x0a3:  mov    %eax,0x4(%esi)
087e84d6 +0x0a6:  mov    %edx,0x8(%esi)
087e84d9 +0x0a9:  mov    -0x1c(%ebp),%eax
087e84dc +0x0ac:  mov    %ebx,(%esp)
087e84df +0x0af:  mov    %eax,0x8(%esp)
087e84e3 +0x0b3:  lea    0x14(%esi),%eax
087e84e6 +0x0b6:  mov    %eax,0x4(%esp)
087e84ea +0x0ba:  call   087e6c30 <_ZN9TiXmlBase8ReadNameEPKcPSs13TiXmlEncoding>  ; TiXmlBase::ReadName(char const*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*, TiXmlEncoding)
087e84ef +0x0bf:  test   %eax,%eax
087e84f1 +0x0c1:  mov    %eax,%edi
087e84f3 +0x0c3:  je     087e8668 <+0x238>
087e84f9 +0x0c9:  movzbl (%eax),%edx
087e84fc +0x0cc:  test   %dl,%dl
087e84fe +0x0ce:  je     087e8668 <+0x238>
087e8504 +0x0d4:  cmpl   $0x1,-0x1c(%ebp)
087e8508 +0x0d8:  mov    %edx,%ebx
087e850a +0x0da:  je     087e8740 <+0x310>
087e8510 +0x0e0:  movzbl %bl,%eax
087e8513 +0x0e3:  mov    %eax,(%esp)
087e8516 +0x0e6:  call   0807e280 <_init+0xb78>
087e851b +0x0eb:  cmp    $0xa,%bl
087e851e +0x0ee:  je     087e86f8 <+0x2c8>
087e8524 +0x0f4:  test   %eax,%eax
087e8526 +0x0f6:  jne    087e86f8 <+0x2c8>
087e852c +0x0fc:  cmp    $0xd,%bl
087e852f +0x0ff:  nop
087e8530 +0x100:  je     087e86f8 <+0x2c8>
087e8536 +0x106:  test   %bl,%bl
087e8538 +0x108:  mov    %ebx,%edx
087e853a +0x10a:  je     087e8706 <+0x2d6>
087e8540 +0x110:  cmp    $0x3d,%dl
087e8543 +0x113:  jne    087e8706 <+0x2d6>
087e8549 +0x119:  mov    -0x1c(%ebp),%eax
087e854c +0x11c:  add    $0x1,%edi
087e854f +0x11f:  mov    %edi,(%esp)
087e8552 +0x122:  mov    %eax,0x4(%esp)
087e8556 +0x126:  call   087e6480 <_ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding>  ; TiXmlBase::SkipWhiteSpace(char const*, TiXmlEncoding)
087e855b +0x12b:  test   %eax,%eax
087e855d +0x12d:  mov    %eax,%ebx
087e855f +0x12f:  je     087e8668 <+0x238>
087e8565 +0x135:  movzbl (%eax),%eax
087e8568 +0x138:  test   %al,%al
087e856a +0x13a:  je     087e8668 <+0x238>
087e8570 +0x140:  cmp    $0x27,%al
087e8572 +0x142:  je     087e8800 <+0x3d0>
087e8578 +0x148:  cmp    $0x22,%al
087e857a +0x14a:  je     087e87a8 <+0x378>
087e8580 +0x150:  lea    0x18(%esi),%eax
087e8583 +0x153:  mov    %eax,-0x28(%ebp)
087e8586 +0x156:  movl   $&data#2fb52a47(.rodata),0x4(%esp)
087e858e +0x15e:  mov    %eax,(%esp)
087e8591 +0x161:  call   08708690 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x22a0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x22a0
087e8596 +0x166:  movzbl (%ebx),%edx
087e8599 +0x169:  test   %dl,%dl
087e859b +0x16b:  je     087e844f <+0x1f>
087e85a1 +0x171:  mov    %esi,-0x24(%ebp)
087e85a4 +0x174:  jmp    087e8616 <+0x1e6>
087e85a6 +0x176:  xchg   %ax,%ax
087e85a8 +0x178:  cmp    $0x27,%dl
087e85ab +0x17b:  je     087e865f <+0x22f>
087e85b1 +0x181:  mov    -0x24(%ebp),%ecx
087e85b4 +0x184:  mov    0x18(%ecx),%eax
087e85b7 +0x187:  mov    -0xc(%eax),%ecx
087e85ba +0x18a:  lea    -0xc(%eax),%edi
087e85bd +0x18d:  lea    0x1(%ecx),%esi
087e85c0 +0x190:  cmp    0x4(%edi),%esi
087e85c3 +0x193:  ja     087e85cc <+0x19c>
087e85c5 +0x195:  mov    0x8(%edi),%edi
087e85c8 +0x198:  test   %edi,%edi
087e85ca +0x19a:  jle    087e85eb <+0x1bb>
087e85cc +0x19c:  mov    -0x28(%ebp),%eax
087e85cf +0x19f:  mov    %dl,-0x2c(%ebp)
087e85d2 +0x1a2:  mov    %esi,0x4(%esp)
087e85d6 +0x1a6:  mov    %eax,(%esp)
087e85d9 +0x1a9:  call   08707d10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1920>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1920
087e85de +0x1ae:  mov    -0x24(%ebp),%ecx
087e85e1 +0x1b1:  movzbl -0x2c(%ebp),%edx
087e85e5 +0x1b5:  mov    0x18(%ecx),%eax
087e85e8 +0x1b8:  mov    -0xc(%eax),%ecx
087e85eb +0x1bb:  mov    %dl,(%eax,%ecx,1)
087e85ee +0x1be:  mov    -0x24(%ebp),%eax
087e85f1 +0x1c1:  mov    0x18(%eax),%edx
087e85f4 +0x1c4:  lea    -0xc(%edx),%eax
087e85f7 +0x1c7:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087e85fc +0x1cc:  jne    087e8827 <+0x3f7>
087e8602 +0x1d2:  add    $0x1,%ebx
087e8605 +0x1d5:  je     087e844f <+0x1f>
087e860b +0x1db:  movzbl (%ebx),%edx
087e860e +0x1de:  test   %dl,%dl
087e8610 +0x1e0:  je     087e844f <+0x1f>
087e8616 +0x1e6:  movzbl %dl,%eax
087e8619 +0x1e9:  mov    %eax,(%esp)
087e861c +0x1ec:  mov    %dl,-0x2c(%ebp)
087e861f +0x1ef:  call   0807e280 <_init+0xb78>
087e8624 +0x1f4:  movzbl -0x2c(%ebp),%edx
087e8628 +0x1f8:  cmp    $0xa,%dl
087e862b +0x1fb:  je     087e844f <+0x1f>
087e8631 +0x201:  test   %eax,%eax
087e8633 +0x203:  jne    087e844f <+0x1f>
087e8639 +0x209:  cmp    $0xd,%dl
087e863c +0x20c:  je     087e844f <+0x1f>
087e8642 +0x212:  cmp    $0x2f,%dl
087e8645 +0x215:  je     087e844f <+0x1f>
087e864b +0x21b:  cmp    $0x3e,%dl
087e864e +0x21e:  xchg   %ax,%ax
087e8650 +0x220:  je     087e844f <+0x1f>
087e8656 +0x226:  cmp    $0x22,%dl
087e8659 +0x229:  jne    087e85a8 <+0x178>
087e865f +0x22f:  mov    -0x24(%ebp),%esi
087e8662 +0x232:  lea    0x0(%esi),%esi
087e8668 +0x238:  mov    0x10(%esi),%eax
087e866b +0x23b:  test   %eax,%eax
087e866d +0x23d:  jne    087e87d0 <+0x3a0>
087e8673 +0x243:  xor    %ebx,%ebx
087e8675 +0x245:  jmp    087e844f <+0x1f>
087e867a +0x24a:  lea    0x0(%esi),%esi
087e8680 +0x250:  mov    %ebx,%edi
087e8682 +0x252:  mov    %edx,%ebx
087e8684 +0x254:  jmp    087e86b6 <+0x286>
087e8686 +0x256:  xchg   %ax,%ax
087e8688 +0x258:  movzbl %bl,%eax
087e868b +0x25b:  mov    %eax,(%esp)
087e868e +0x25e:  call   0807e280 <_init+0xb78>
087e8693 +0x263:  test   %eax,%eax
087e8695 +0x265:  jne    087e86a8 <+0x278>
087e8697 +0x267:  cmp    $0xa,%bl
087e869a +0x26a:  je     087e86a8 <+0x278>
087e869c +0x26c:  cmp    $0xd,%bl
087e869f +0x26f:  nop
087e86a0 +0x270:  jne    087e849e <+0x6e>
087e86a6 +0x276:  xchg   %ax,%ax
087e86a8 +0x278:  add    $0x1,%edi
087e86ab +0x27b:  movzbl (%edi),%ebx
087e86ae +0x27e:  test   %bl,%bl
087e86b0 +0x280:  je     087e849e <+0x6e>
087e86b6 +0x286:  cmpb   $0xef,(%edi)
087e86b9 +0x289:  jne    087e8688 <+0x258>
087e86bb +0x28b:  movzbl 0x1(%edi),%eax
087e86bf +0x28f:  cmp    $0xbb,%al
087e86c1 +0x291:  je     087e86f0 <+0x2c0>
087e86c3 +0x293:  cmp    $0xbf,%al
087e86c5 +0x295:  jne    087e8688 <+0x258>
087e86c7 +0x297:  movzbl 0x2(%edi),%eax
087e86cb +0x29b:  cmp    $0xbe,%al
087e86cd +0x29d:  je     087e86d3 <+0x2a3>
087e86cf +0x29f:  cmp    $0xbf,%al
087e86d1 +0x2a1:  jne    087e8688 <+0x258>
087e86d3 +0x2a3:  add    $0x3,%edi
087e86d6 +0x2a6:  jmp    087e86ab <+0x27b>
087e86d8 +0x2a8:  add    $0x1,%edi
087e86db +0x2ab:  movzbl (%edi),%ebx
087e86de +0x2ae:  test   %bl,%bl
087e86e0 +0x2b0:  je     087e849e <+0x6e>
087e86e6 +0x2b6:  jmp    087e8479 <+0x49>
087e86eb +0x2bb:  nop
087e86ec +0x2bc:  lea    0x0(%esi,%eiz,1),%esi
087e86f0 +0x2c0:  cmpb   $0xbf,0x2(%edi)
087e86f4 +0x2c4:  jne    087e8688 <+0x258>
087e86f6 +0x2c6:  jmp    087e86d3 <+0x2a3>
087e86f8 +0x2c8:  add    $0x1,%edi
087e86fb +0x2cb:  movzbl (%edi),%ebx
087e86fe +0x2ce:  test   %bl,%bl
087e8700 +0x2d0:  jne    087e8510 <+0xe0>
087e8706 +0x2d6:  mov    0x10(%esi),%eax
087e8709 +0x2d9:  test   %eax,%eax
087e870b +0x2db:  je     087e8673 <+0x243>
087e8711 +0x2e1:  mov    -0x1c(%ebp),%edx
087e8714 +0x2e4:  xor    %ebx,%ebx
087e8716 +0x2e6:  mov    -0x20(%ebp),%ecx
087e8719 +0x2e9:  mov    %edi,0x8(%esp)
087e871d +0x2ed:  movl   $0x6,0x4(%esp)
087e8725 +0x2f5:  mov    %edx,0x10(%esp)
087e8729 +0x2f9:  mov    %ecx,0xc(%esp)
087e872d +0x2fd:  mov    %eax,(%esp)
087e8730 +0x300:  call   087e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>  ; TiXmlDocument::SetError(int, char const*, TiXmlParsingData*, TiXmlEncoding)
087e8735 +0x305:  jmp    087e844f <+0x1f>
087e873a +0x30a:  lea    0x0(%esi),%esi
087e8740 +0x310:  mov    %edx,%ebx
087e8742 +0x312:  lea    0x0(%esi),%esi
087e8748 +0x318:  cmpb   $0xef,(%edi)
087e874b +0x31b:  je     087e8780 <+0x350>
087e874d +0x31d:  movzbl %bl,%eax
087e8750 +0x320:  mov    %eax,(%esp)
087e8753 +0x323:  call   0807e280 <_init+0xb78>
087e8758 +0x328:  test   %eax,%eax
087e875a +0x32a:  jne    087e8770 <+0x340>
087e875c +0x32c:  cmp    $0xa,%bl
087e875f +0x32f:  je     087e8770 <+0x340>
087e8761 +0x331:  cmp    $0xd,%bl
087e8764 +0x334:  je     087e8770 <+0x340>
087e8766 +0x336:  mov    %ebx,%edx
087e8768 +0x338:  jmp    087e8540 <+0x110>
087e876d +0x33d:  lea    0x0(%esi),%esi
087e8770 +0x340:  add    $0x1,%edi
087e8773 +0x343:  movzbl (%edi),%ebx
087e8776 +0x346:  test   %bl,%bl
087e8778 +0x348:  jne    087e8748 <+0x318>
087e877a +0x34a:  jmp    087e8706 <+0x2d6>
087e877c +0x34c:  lea    0x0(%esi,%eiz,1),%esi
087e8780 +0x350:  movzbl 0x1(%edi),%eax
087e8784 +0x354:  cmp    $0xbb,%al
087e8786 +0x356:  je     087e8818 <+0x3e8>
087e878c +0x35c:  cmp    $0xbf,%al
087e878e +0x35e:  xchg   %ax,%ax
087e8790 +0x360:  jne    087e874d <+0x31d>
087e8792 +0x362:  movzbl 0x2(%edi),%eax
087e8796 +0x366:  cmp    $0xbe,%al
087e8798 +0x368:  je     087e879e <+0x36e>
087e879a +0x36a:  cmp    $0xbf,%al
087e879c +0x36c:  jne    087e874d <+0x31d>
087e879e +0x36e:  add    $0x3,%edi
087e87a1 +0x371:  jmp    087e8773 <+0x343>
087e87a3 +0x373:  nop
087e87a4 +0x374:  lea    0x0(%esi,%eiz,1),%esi
087e87a8 +0x378:  mov    -0x1c(%ebp),%ecx
087e87ab +0x37b:  lea    0x1(%ebx),%eax
087e87ae +0x37e:  lea    0x18(%esi),%edx
087e87b1 +0x381:  movl   $"\"",0x8(%ebp)
087e87b8 +0x388:  mov    %ecx,0xc(%ebp)
087e87bb +0x38b:  add    $0x4c,%esp
087e87be +0x38e:  xor    %ecx,%ecx
087e87c0 +0x390:  pop    %ebx
087e87c1 +0x391:  pop    %esi
087e87c2 +0x392:  pop    %edi
087e87c3 +0x393:  pop    %ebp
087e87c4 +0x394:  jmp    087e6850 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2>  ; TiXmlBase::ReadText(char const*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*, bool, char const*, bool, TiXmlEncoding) [clone .clone.2]
087e87c9 +0x399:  lea    0x0(%esi,%eiz,1),%esi
087e87d0 +0x3a0:  mov    -0x1c(%ebp),%edx
087e87d3 +0x3a3:  mov    -0x20(%ebp),%ecx
087e87d6 +0x3a6:  mov    %ebx,0x8(%esp)
087e87da +0x3aa:  xor    %ebx,%ebx
087e87dc +0x3ac:  movl   $0x6,0x4(%esp)
087e87e4 +0x3b4:  mov    %edx,0x10(%esp)
087e87e8 +0x3b8:  mov    %ecx,0xc(%esp)
087e87ec +0x3bc:  mov    %eax,(%esp)
087e87ef +0x3bf:  call   087e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>  ; TiXmlDocument::SetError(int, char const*, TiXmlParsingData*, TiXmlEncoding)
087e87f4 +0x3c4:  jmp    087e844f <+0x1f>
087e87f9 +0x3c9:  lea    0x0(%esi,%eiz,1),%esi
087e8800 +0x3d0:  mov    -0x1c(%ebp),%ecx
087e8803 +0x3d3:  lea    0x1(%ebx),%eax
087e8806 +0x3d6:  lea    0x18(%esi),%edx
087e8809 +0x3d9:  movl   $"'",0x8(%ebp)
087e8810 +0x3e0:  mov    %ecx,0xc(%ebp)
087e8813 +0x3e3:  jmp    087e87bb <+0x38b>
087e8815 +0x3e5:  lea    0x0(%esi),%esi
087e8818 +0x3e8:  cmpb   $0xbf,0x2(%edi)
087e881c +0x3ec:  jne    087e874d <+0x31d>
087e8822 +0x3f2:  jmp    087e879e <+0x36e>
087e8827 +0x3f7:  movl   $0x0,0x8(%eax)
087e882e +0x3fe:  mov    %esi,-0xc(%edx)
087e8831 +0x401:  movb   $0x0,0xc(%eax,%esi,1)
087e8836 +0x406:  jmp    087e8602 <+0x1d2>
087e883b +0x40b:  nop
087e883c +0x40c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TiXmlAttribute::Parse @ 0x87e8430

/* TiXmlAttribute::Parse(char const*, TiXmlParsingData*, TiXmlEncoding) */

byte * __thiscall
TiXmlAttribute::Parse(TiXmlAttribute *this,byte *param_1,TiXmlParsingData *param_2,int param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  char cVar9;
  
  if (param_1 == (byte *)0x0) {
    return (byte *)0x0;
  }
  bVar8 = *param_1;
  if (bVar8 == 0) {
    return (byte *)0x0;
  }
  if (param_4 == 1) {
    do {
      if (*param_1 == 0xef) {
        if (param_1[1] == 0xbb) {
          bVar1 = param_1[2];
joined_r0x087e86f4:
          if (bVar1 != 0xbf) goto LAB_087e8688;
        }
        else {
          if (param_1[1] != 0xbf) goto LAB_087e8688;
          bVar1 = param_1[2];
          if (bVar1 != 0xbe) goto joined_r0x087e86f4;
        }
        param_1 = param_1 + 3;
      }
      else {
LAB_087e8688:
        iVar4 = isspace((uint)bVar8);
        if (((iVar4 == 0) && (bVar8 != 10)) && (bVar8 != 0xd)) break;
        param_1 = param_1 + 1;
      }
      bVar8 = *param_1;
    } while (bVar8 != 0);
  }
  else {
    do {
      iVar4 = isspace((uint)bVar8);
      if (((bVar8 != 10) && (iVar4 == 0)) && (bVar8 != 0xd)) break;
      param_1 = param_1 + 1;
      bVar8 = *param_1;
    } while (bVar8 != 0);
  }
  if (param_1 == (byte *)0x0) {
    return (byte *)0x0;
  }
  if (bVar8 == 0) {
    return (byte *)0x0;
  }
  if (param_2 != (TiXmlParsingData *)0x0) {
    TiXmlParsingData::Stamp(param_2,param_1,param_4);
    uVar2 = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(this + 4) = *(undefined4 *)param_2;
    *(undefined4 *)(this + 8) = uVar2;
  }
  pbVar5 = (byte *)TiXmlBase::ReadName(param_1,this + 0x14,param_4);
  if ((pbVar5 != (byte *)0x0) && (uVar7 = (uint)*pbVar5, *pbVar5 != 0)) {
    if (param_4 == 1) {
      do {
        if (*pbVar5 == 0xef) {
          if (pbVar5[1] == 0xbb) {
            if (pbVar5[2] == 0xbf) goto LAB_087e879e;
            goto LAB_087e874d;
          }
          if ((pbVar5[1] != 0xbf) || ((pbVar5[2] != 0xbe && (pbVar5[2] != 0xbf))))
          goto LAB_087e874d;
LAB_087e879e:
          pbVar5 = pbVar5 + 3;
        }
        else {
LAB_087e874d:
          iVar4 = isspace(uVar7);
          if (((iVar4 == 0) && (cVar9 = (char)uVar7, cVar9 != '\n')) && (cVar9 != '\r'))
          goto LAB_087e8540;
          pbVar5 = pbVar5 + 1;
        }
        uVar7 = (uint)*pbVar5;
      } while (*pbVar5 != 0);
    }
    else {
      do {
        iVar4 = isspace(uVar7);
        cVar9 = (char)uVar7;
        if (((cVar9 != '\n') && (iVar4 == 0)) && (cVar9 != '\r')) {
          if (cVar9 != '\0') goto LAB_087e8540;
          break;
        }
        pbVar5 = pbVar5 + 1;
        uVar7 = (uint)*pbVar5;
      } while (*pbVar5 != 0);
    }
    goto LAB_087e8706;
  }
LAB_087e8668:
  if (*(TiXmlDocument **)(this + 0x10) == (TiXmlDocument *)0x0) {
    return (byte *)0x0;
  }
  TiXmlDocument::SetError(*(TiXmlDocument **)(this + 0x10),6,param_1,param_2,param_4);
  return (byte *)0x0;
LAB_087e8540:
  if (cVar9 != '=') {
LAB_087e8706:
    if (*(TiXmlDocument **)(this + 0x10) == (TiXmlDocument *)0x0) {
      return (byte *)0x0;
    }
    TiXmlDocument::SetError(*(TiXmlDocument **)(this + 0x10),6,pbVar5,param_2,param_4);
    return (byte *)0x0;
  }
  param_1 = (byte *)TiXmlBase::SkipWhiteSpace(pbVar5 + 1,param_4);
  if ((param_1 != (byte *)0x0) && (bVar8 = *param_1, bVar8 != 0)) {
    if ((bVar8 == 0x27) || (bVar8 == 0x22)) {
      pbVar5 = (byte *)TiXmlBase::ReadText(param_1 + 1,this + 0x18,0);
      return pbVar5;
    }
    std::string::assign((string *)(this + 0x18),"");
    bVar8 = *param_1;
    if (bVar8 == 0) {
      return param_1;
    }
    while( true ) {
      iVar4 = isspace((uint)bVar8);
      if (bVar8 == 10) {
        return param_1;
      }
      if (iVar4 != 0) {
        return param_1;
      }
      if (bVar8 == 0xd) {
        return param_1;
      }
      if (bVar8 == 0x2f) {
        return param_1;
      }
      if (bVar8 == 0x3e) {
        return param_1;
      }
      if ((bVar8 == 0x22) || (bVar8 == 0x27)) break;
      iVar4 = *(int *)(this + 0x18);
      iVar6 = *(int *)(iVar4 + -0xc);
      uVar7 = iVar6 + 1;
      if ((*(uint *)(iVar4 + -8) < uVar7) || (0 < *(int *)(iVar4 + -4))) {
        std::string::reserve((string *)(this + 0x18),uVar7);
        iVar4 = *(int *)(this + 0x18);
        iVar6 = *(int *)(iVar4 + -0xc);
      }
      *(byte *)(iVar4 + iVar6) = bVar8;
      puVar3 = *(undefined1 **)(this + 0x18);
      if (puVar3 != &DAT_0948ccfc) {
        *(undefined4 *)(puVar3 + -4) = 0;
        *(uint *)(puVar3 + -0xc) = uVar7;
        puVar3[uVar7] = 0;
      }
      param_1 = param_1 + 1;
      if (param_1 == (byte *)0x0) {
        return (byte *)0x0;
      }
      bVar8 = *param_1;
      if (bVar8 == 0) {
        return param_1;
      }
    }
  }
  goto LAB_087e8668;
}
```

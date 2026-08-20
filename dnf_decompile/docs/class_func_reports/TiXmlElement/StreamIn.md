# StreamIn

`_ZN12TiXmlElement8StreamInEPSiPSs`

`TiXmlElement::StreamIn(std::basic_istream<char, std::char_traits<char> >*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087e9460` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e9460  _ZN12TiXmlElement8StreamInEPSiPSs
#           TiXmlElement::StreamIn(std::basic_istream<char, std::char_traits<char> >*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
# range [0x087e9460, 0x087e9959]
087e9460 +0x000:  push   %ebp
087e9461 +0x001:  mov    %esp,%ebp
087e9463 +0x003:  push   %edi
087e9464 +0x004:  push   %esi
087e9465 +0x005:  push   %ebx
087e9466 +0x006:  sub    $0x9c,%esp
087e946c +0x00c:  mov    0xc(%ebp),%ebx
087e946f +0x00f:  nop
087e9470 +0x010:  mov    (%ebx),%eax
087e9472 +0x012:  mov    -0xc(%eax),%eax
087e9475 +0x015:  mov    0x14(%ebx,%eax,1),%eax
087e9479 +0x019:  test   %eax,%eax
087e947b +0x01b:  jne    087e94dd <+0x7d>
087e947d +0x01d:  mov    %ebx,(%esp)
087e9480 +0x020:  call   086e5cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x5c50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x5c50
087e9485 +0x025:  test   %eax,%eax
087e9487 +0x027:  jle    087e95b0 <+0x150>
087e948d +0x02d:  mov    0x10(%ebp),%ecx
087e9490 +0x030:  mov    (%ecx),%edx
087e9492 +0x032:  mov    -0xc(%edx),%ecx
087e9495 +0x035:  lea    -0xc(%edx),%edi
087e9498 +0x038:  lea    0x1(%ecx),%esi
087e949b +0x03b:  cmp    0x4(%edi),%esi
087e949e +0x03e:  ja     087e94a7 <+0x47>
087e94a0 +0x040:  mov    0x8(%edi),%edi
087e94a3 +0x043:  test   %edi,%edi
087e94a5 +0x045:  jle    087e94c1 <+0x61>
087e94a7 +0x047:  mov    0x10(%ebp),%edi
087e94aa +0x04a:  mov    %eax,-0x70(%ebp)
087e94ad +0x04d:  mov    %esi,0x4(%esp)
087e94b1 +0x051:  mov    %edi,(%esp)
087e94b4 +0x054:  call   08707d10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1920>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1920
087e94b9 +0x059:  mov    (%edi),%edx
087e94bb +0x05b:  mov    -0x70(%ebp),%eax
087e94be +0x05e:  mov    -0xc(%edx),%ecx
087e94c1 +0x061:  mov    %al,(%edx,%ecx,1)
087e94c4 +0x064:  mov    0x10(%ebp),%edx
087e94c7 +0x067:  mov    (%edx),%ecx
087e94c9 +0x069:  lea    -0xc(%ecx),%edx
087e94cc +0x06c:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edx
087e94d2 +0x072:  jne    087e9858 <+0x3f8>
087e94d8 +0x078:  cmp    $0x3e,%eax
087e94db +0x07b:  jne    087e9470 <+0x10>
087e94dd +0x07d:  mov    0x10(%ebp),%ecx
087e94e0 +0x080:  mov    (%ecx),%edx
087e94e2 +0x082:  mov    -0xc(%edx),%eax
087e94e5 +0x085:  lea    -0xc(%edx),%ecx
087e94e8 +0x088:  cmp    $0x2,%eax
087e94eb +0x08b:  ja     087e94f8 <+0x98>
087e94ed +0x08d:  add    $0x9c,%esp
087e94f3 +0x093:  pop    %ebx
087e94f4 +0x094:  pop    %esi
087e94f5 +0x095:  pop    %edi
087e94f6 +0x096:  pop    %ebp
087e94f7 +0x097:  ret
087e94f8 +0x098:  mov    %eax,%esi
087e94fa +0x09a:  add    $0xffffffff,%esi
087e94fd +0x09d:  jae    087e9925 <+0x4c5>
087e9503 +0x0a3:  mov    0x8(%ecx),%edi
087e9506 +0x0a6:  test   %edi,%edi
087e9508 +0x0a8:  js     087e951d <+0xbd>
087e950a +0x0aa:  mov    0x10(%ebp),%edi
087e950d +0x0ad:  mov    %edi,(%esp)
087e9510 +0x0b0:  call   08708e00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2a10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2a10
087e9515 +0x0b5:  mov    (%edi),%edx
087e9517 +0x0b7:  mov    -0xc(%edx),%eax
087e951a +0x0ba:  lea    -0xc(%edx),%ecx
087e951d +0x0bd:  cmpb   $0x3e,(%edx,%esi,1)
087e9521 +0x0c1:  je     087e960e <+0x1ae>
087e9527 +0x0c7:  add    $0xffffffff,%eax
087e952a +0x0ca:  jae    087e9925 <+0x4c5>
087e9530 +0x0d0:  mov    0x8(%ecx),%ecx
087e9533 +0x0d3:  test   %ecx,%ecx
087e9535 +0x0d5:  js     087e954a <+0xea>
087e9537 +0x0d7:  mov    0x10(%ebp),%edi
087e953a +0x0da:  mov    %eax,-0x70(%ebp)
087e953d +0x0dd:  mov    %edi,(%esp)
087e9540 +0x0e0:  call   08708e00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2a10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2a10
087e9545 +0x0e5:  mov    (%edi),%edx
087e9547 +0x0e7:  mov    -0x70(%ebp),%eax
087e954a +0x0ea:  cmpb   $0x3e,(%edx,%eax,1)
087e954e +0x0ee:  jne    087e94ed <+0x8d>
087e9550 +0x0f0:  mov    0x10(%ebp),%eax
087e9553 +0x0f3:  mov    %ebx,(%esp)
087e9556 +0x0f6:  mov    %eax,0x4(%esp)
087e955a +0x0fa:  call   087e7140 <_ZN9TiXmlBase16StreamWhiteSpaceEPSiPSs>  ; TiXmlBase::StreamWhiteSpace(std::basic_istream<char, std::char_traits<char> >*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
087e955f +0x0ff:  mov    (%ebx),%eax
087e9561 +0x101:  mov    -0xc(%eax),%eax
087e9564 +0x104:  mov    0x14(%ebx,%eax,1),%eax
087e9568 +0x108:  test   %eax,%eax
087e956a +0x10a:  jne    087e94ed <+0x8d>
087e956c +0x10c:  mov    %ebx,(%esp)
087e956f +0x10f:  call   086e5f10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x5e70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x5e70
087e9574 +0x114:  cmp    $0x3c,%eax
087e9577 +0x117:  je     087e9639 <+0x1d9>
087e957d +0x11d:  lea    -0x48(%ebp),%eax
087e9580 +0x120:  call   087e6bd0 <_ZN9TiXmlTextC2EPKc.clone.0>  ; TiXmlText::TiXmlText(char const*) [clone .clone.0]
087e9585 +0x125:  mov    0x10(%ebp),%edx
087e9588 +0x128:  lea    -0x48(%ebp),%ecx
087e958b +0x12b:  mov    %ebx,0x4(%esp)
087e958f +0x12f:  mov    %ecx,(%esp)
087e9592 +0x132:  mov    %edx,0x8(%esp)
087e9596 +0x136:  call   087e8b40 <_ZN9TiXmlText8StreamInEPSiPSs>  ; TiXmlText::StreamIn(std::basic_istream<char, std::char_traits<char> >*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
087e959b +0x13b:  lea    -0x48(%ebp),%edi
087e959e +0x13e:  movl   $&_ZTV9TiXmlText+0x8,-0x48(%ebp)
087e95a5 +0x145:  mov    %edi,(%esp)
087e95a8 +0x148:  call   087e2b70 <_ZN9TiXmlNodeD1Ev>  ; TiXmlNode::~TiXmlNode()
087e95ad +0x14d:  jmp    087e9550 <+0xf0>
087e95af +0x14f:  nop
087e95b0 +0x150:  mov    0x8(%ebp),%eax
087e95b3 +0x153:  mov    %eax,(%esp)
087e95b6 +0x156:  call   087dfed0 <_ZNK9TiXmlNode11GetDocumentEv>  ; TiXmlNode::GetDocument() const
087e95bb +0x15b:  test   %eax,%eax
087e95bd +0x15d:  mov    %eax,%ebx
087e95bf +0x15f:  je     087e94ed <+0x8d>
087e95c5 +0x165:  cmpb   $0x0,0x2c(%eax)
087e95c9 +0x169:  jne    087e94ed <+0x8d>
087e95cf +0x16f:  mov    &_ZN9TiXmlBase11errorStringE+0x34,%esi
087e95d5 +0x175:  movb   $0x1,0x2c(%eax)
087e95d9 +0x179:  movl   $0xd,0x30(%eax)
087e95e0 +0x180:  mov    %esi,(%esp)
087e95e3 +0x183:  call   0807e3b0 <_init+0xca8>
087e95e8 +0x188:  mov    %esi,0x4(%esp)
087e95ec +0x18c:  mov    %eax,0x8(%esp)
087e95f0 +0x190:  lea    0x34(%ebx),%eax
087e95f3 +0x193:  mov    %eax,(%esp)
087e95f6 +0x196:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e95fb +0x19b:  movl   $0xffffffff,0x40(%ebx)
087e9602 +0x1a2:  movl   $0xffffffff,0x3c(%ebx)
087e9609 +0x1a9:  jmp    087e94ed <+0x8d>
087e960e +0x1ae:  sub    $0x2,%eax
087e9611 +0x1b1:  mov    %eax,0x4(%esp)
087e9615 +0x1b5:  mov    0x10(%ebp),%eax
087e9618 +0x1b8:  mov    %eax,(%esp)
087e961b +0x1bb:  call   08708e70 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2a80>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2a80
087e9620 +0x1c0:  cmpb   $0x2f,(%eax)
087e9623 +0x1c3:  je     087e94ed <+0x8d>
087e9629 +0x1c9:  mov    0x10(%ebp),%ecx
087e962c +0x1cc:  mov    (%ecx),%edx
087e962e +0x1ce:  lea    -0xc(%edx),%ecx
087e9631 +0x1d1:  mov    -0xc(%edx),%eax
087e9634 +0x1d4:  jmp    087e9527 <+0xc7>
087e9639 +0x1d9:  mov    (%ebx),%eax
087e963b +0x1db:  mov    -0xc(%eax),%eax
087e963e +0x1de:  mov    0x14(%ebx,%eax,1),%edi
087e9642 +0x1e2:  test   %edi,%edi
087e9644 +0x1e4:  jne    087e94ed <+0x8d>
087e964a +0x1ea:  mov    %ebx,(%esp)
087e964d +0x1ed:  call   086e5f10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x5e70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x5e70
087e9652 +0x1f2:  cmp    $0x3c,%eax
087e9655 +0x1f5:  jne    087e98e5 <+0x485>
087e965b +0x1fb:  mov    0x10(%ebp),%edx
087e965e +0x1fe:  movb   $0x0,-0x4a(%ebp)
087e9662 +0x202:  movb   $0x0,-0x68(%ebp)
087e9666 +0x206:  mov    (%edx),%eax
087e9668 +0x208:  mov    -0xc(%eax),%eax
087e966b +0x20b:  mov    %eax,-0x6c(%ebp)
087e966e +0x20e:  xchg   %ax,%ax
087e9670 +0x210:  mov    (%ebx),%eax
087e9672 +0x212:  mov    -0xc(%eax),%eax
087e9675 +0x215:  mov    0x14(%ebx,%eax,1),%esi
087e9679 +0x219:  test   %esi,%esi
087e967b +0x21b:  jne    087e94ed <+0x8d>
087e9681 +0x221:  mov    %ebx,(%esp)
087e9684 +0x224:  call   086e5f10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x5e70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x5e70
087e9689 +0x229:  test   %eax,%eax
087e968b +0x22b:  mov    %eax,%edx
087e968d +0x22d:  jle    087e9808 <+0x3a8>
087e9693 +0x233:  cmp    $0x3e,%eax
087e9696 +0x236:  je     087e9848 <+0x3e8>
087e969c +0x23c:  mov    0x10(%ebp),%edi
087e969f +0x23f:  mov    %al,-0x49(%ebp)
087e96a2 +0x242:  mov    (%edi),%eax
087e96a4 +0x244:  mov    -0xc(%eax),%ecx
087e96a7 +0x247:  lea    -0xc(%eax),%edi
087e96aa +0x24a:  mov    %ecx,%esi
087e96ac +0x24c:  add    $0x1,%esi
087e96af +0x24f:  cmp    0x4(%edi),%esi
087e96b2 +0x252:  mov    %ecx,-0x7c(%ebp)
087e96b5 +0x255:  ja     087e96be <+0x25e>
087e96b7 +0x257:  mov    0x8(%edi),%ecx
087e96ba +0x25a:  test   %ecx,%ecx
087e96bc +0x25c:  jle    087e96db <+0x27b>
087e96be +0x25e:  mov    0x10(%ebp),%edi
087e96c1 +0x261:  mov    %edx,-0x70(%ebp)
087e96c4 +0x264:  mov    %esi,0x4(%esp)
087e96c8 +0x268:  mov    %edi,(%esp)
087e96cb +0x26b:  call   08707d10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1920>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1920
087e96d0 +0x270:  mov    (%edi),%eax
087e96d2 +0x272:  mov    -0x70(%ebp),%edx
087e96d5 +0x275:  mov    -0xc(%eax),%ecx
087e96d8 +0x278:  mov    %ecx,-0x7c(%ebp)
087e96db +0x27b:  movzbl -0x49(%ebp),%ecx
087e96df +0x27f:  mov    -0x7c(%ebp),%edi
087e96e2 +0x282:  mov    %cl,(%eax,%edi,1)
087e96e5 +0x285:  mov    0x10(%ebp),%eax
087e96e8 +0x288:  mov    (%eax),%ecx
087e96ea +0x28a:  lea    -0xc(%ecx),%eax
087e96ed +0x28d:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087e96f2 +0x292:  jne    087e986c <+0x40c>
087e96f8 +0x298:  mov    %edx,-0x70(%ebp)
087e96fb +0x29b:  mov    %ebx,(%esp)
087e96fe +0x29e:  call   086e5cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x5c50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x5c50
087e9703 +0x2a3:  mov    -0x70(%ebp),%edx
087e9706 +0x2a6:  cmp    $0x5b,%edx
087e9709 +0x2a9:  je     087e9748 <+0x2e8>
087e970b +0x2ab:  cmpb   $0x0,-0x4a(%ebp)
087e970f +0x2af:  jne    087e9670 <+0x210>
087e9715 +0x2b5:  cmp    $0x3c,%edx
087e9718 +0x2b8:  je     087e9670 <+0x210>
087e971e +0x2be:  cmp    $0xff,%edx
087e9724 +0x2c4:  jle    087e97c0 <+0x360>
087e972a +0x2ca:  mov    (%ebx),%eax
087e972c +0x2cc:  movb   $0x1,-0x4a(%ebp)
087e9730 +0x2d0:  mov    -0xc(%eax),%eax
087e9733 +0x2d3:  mov    0x14(%ebx,%eax,1),%esi
087e9737 +0x2d7:  test   %esi,%esi
087e9739 +0x2d9:  je     087e9681 <+0x221>
087e973f +0x2df:  jmp    087e94ed <+0x8d>
087e9744 +0x2e4:  lea    0x0(%esi,%eiz,1),%esi
087e9748 +0x2e8:  mov    0x10(%ebp),%ecx
087e974b +0x2eb:  mov    (%ecx),%ecx
087e974d +0x2ed:  mov    %ecx,-0x7c(%ebp)
087e9750 +0x2f0:  mov    %ecx,%edi
087e9752 +0x2f2:  mov    -0xc(%ecx),%ecx
087e9755 +0x2f5:  cmp    $0x8,%ecx
087e9758 +0x2f8:  jbe    087e970b <+0x2ab>
087e975a +0x2fa:  lea    -0x9(%edi,%ecx,1),%esi
087e975e +0x2fe:  mov    $"<![CDATA[",%edi
087e9763 +0x303:  mov    $0xa,%ecx
087e9768 +0x308:  repz cmpsb %es:(%edi),%ds:(%esi)
087e976a +0x30a:  jne    087e970b <+0x2ab>
087e976c +0x30c:  cmpb   $0x0,-0x68(%ebp)
087e9770 +0x310:  mov    -0x7c(%ebp),%eax
087e9773 +0x313:  jne    087e98c1 <+0x461>
087e9779 +0x319:  mov    0x8(%ebp),%ecx
087e977c +0x31c:  add    -0x6c(%ebp),%eax
087e977f +0x31f:  movl   $0x0,0x8(%esp)
087e9787 +0x327:  mov    %eax,0x4(%esp)
087e978b +0x32b:  mov    %ecx,(%esp)
087e978e +0x32e:  call   087e7230 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding>  ; TiXmlNode::Identify(char const*, TiXmlEncoding)
087e9793 +0x333:  test   %eax,%eax
087e9795 +0x335:  mov    %eax,%esi
087e9797 +0x337:  je     087e94ed <+0x8d>
087e979d +0x33d:  mov    (%eax),%eax
087e979f +0x33f:  mov    0x10(%ebp),%edi
087e97a2 +0x342:  mov    %ebx,0x4(%esp)
087e97a6 +0x346:  mov    %esi,(%esp)
087e97a9 +0x349:  mov    %edi,0x8(%esp)
087e97ad +0x34d:  call   *0x48(%eax)
087e97b0 +0x350:  mov    (%esi),%eax
087e97b2 +0x352:  mov    %esi,(%esp)
087e97b5 +0x355:  call   *0x4(%eax)
087e97b8 +0x358:  jmp    087e9550 <+0xf0>
087e97bd +0x35d:  lea    0x0(%esi),%esi
087e97c0 +0x360:  movzbl -0x49(%ebp),%eax
087e97c4 +0x364:  mov    %edx,-0x70(%ebp)
087e97c7 +0x367:  mov    %eax,(%esp)
087e97ca +0x36a:  call   0807e280 <_init+0xb78>
087e97cf +0x36f:  mov    -0x70(%ebp),%edx
087e97d2 +0x372:  test   %eax,%eax
087e97d4 +0x374:  jne    087e9670 <+0x210>
087e97da +0x37a:  cmpb   $0xa,-0x49(%ebp)
087e97de +0x37e:  je     087e9670 <+0x210>
087e97e4 +0x384:  cmpb   $0xd,-0x49(%ebp)
087e97e8 +0x388:  je     087e9670 <+0x210>
087e97ee +0x38e:  cmp    $0x2f,%edx
087e97f1 +0x391:  movzbl -0x68(%ebp),%edx
087e97f5 +0x395:  mov    $0x1,%eax
087e97fa +0x39a:  cmove  %eax,%edx
087e97fd +0x39d:  mov    %dl,-0x68(%ebp)
087e9800 +0x3a0:  jmp    087e972a <+0x2ca>
087e9805 +0x3a5:  lea    0x0(%esi),%esi
087e9808 +0x3a8:  mov    0x8(%ebp),%ecx
087e980b +0x3ab:  mov    %ecx,(%esp)
087e980e +0x3ae:  call   087dfed0 <_ZNK9TiXmlNode11GetDocumentEv>  ; TiXmlNode::GetDocument() const
087e9813 +0x3b3:  test   %eax,%eax
087e9815 +0x3b5:  je     087e94ed <+0x8d>
087e981b +0x3bb:  movl   $0x0,0x10(%esp)
087e9823 +0x3c3:  movl   $0x0,0xc(%esp)
087e982b +0x3cb:  movl   $0x0,0x8(%esp)
087e9833 +0x3d3:  movl   $0xd,0x4(%esp)
087e983b +0x3db:  mov    %eax,(%esp)
087e983e +0x3de:  call   087e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>  ; TiXmlDocument::SetError(int, char const*, TiXmlParsingData*, TiXmlEncoding)
087e9843 +0x3e3:  jmp    087e94ed <+0x8d>
087e9848 +0x3e8:  cmpb   $0x0,-0x68(%ebp)
087e984c +0x3ec:  jne    087e9880 <+0x420>
087e984e +0x3ee:  mov    0x10(%ebp),%edx
087e9851 +0x3f1:  mov    (%edx),%eax
087e9853 +0x3f3:  jmp    087e9779 <+0x319>
087e9858 +0x3f8:  movl   $0x0,0x8(%edx)
087e985f +0x3ff:  mov    %esi,-0xc(%ecx)
087e9862 +0x402:  movb   $0x0,0xc(%edx,%esi,1)
087e9867 +0x407:  jmp    087e94d8 <+0x78>
087e986c +0x40c:  movl   $0x0,0x8(%eax)
087e9873 +0x413:  mov    %esi,-0xc(%ecx)
087e9876 +0x416:  movb   $0x0,0xc(%eax,%esi,1)
087e987b +0x41b:  jmp    087e96f8 <+0x298>
087e9880 +0x420:  mov    (%ebx),%eax
087e9882 +0x422:  mov    -0xc(%eax),%eax
087e9885 +0x425:  cmpl   $0x0,0x14(%ebx,%eax,1)
087e988a +0x42a:  jne    087e94ed <+0x8d>
087e9890 +0x430:  mov    %ebx,(%esp)
087e9893 +0x433:  call   086e5cf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x5c50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x5c50
087e9898 +0x438:  test   %eax,%eax
087e989a +0x43a:  jle    087e9808 <+0x3a8>
087e98a0 +0x440:  cmp    $0x3e,%eax
087e98a3 +0x443:  jne    087e9931 <+0x4d1>
087e98a9 +0x449:  mov    0x10(%ebp),%edi
087e98ac +0x44c:  movl   $0x3e,0x4(%esp)
087e98b4 +0x454:  mov    %edi,(%esp)
087e98b7 +0x457:  call   08707dc0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x19d0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x19d0
087e98bc +0x45c:  jmp    087e94ed <+0x8d>
087e98c1 +0x461:  movl   $&_ZZN12TiXmlElement8StreamInEPSiPSsE19__PRETTY_FUNCTION__,0xc(%esp)
087e98c9 +0x469:  movl   $0x3e0,0x8(%esp)
087e98d1 +0x471:  movl   $"tinyxmlparser.cpp",0x4(%esp)
087e98d9 +0x479:  movl   $"!closingTag",(%esp)
087e98e0 +0x480:  call   0807dc50 <_init+0x548>
087e98e5 +0x485:  movl   $&_ZZN12TiXmlElement8StreamInEPSiPSsE19__PRETTY_FUNCTION__,0xc(%esp)
087e98ed +0x48d:  movl   $0x3c0,0x8(%esp)
087e98f5 +0x495:  movl   $"tinyxmlparser.cpp",0x4(%esp)
087e98fd +0x49d:  movl   $"in->peek() == '<'",(%esp)
087e9904 +0x4a4:  call   0807dc50 <_init+0x548>
087e9909 +0x4a9:  mov    %eax,%ebx
087e990b +0x4ab:  lea    -0x48(%ebp),%eax
087e990e +0x4ae:  movl   $&_ZTV9TiXmlText+0x8,-0x48(%ebp)
087e9915 +0x4b5:  mov    %eax,(%esp)
087e9918 +0x4b8:  call   087e2b70 <_ZN9TiXmlNodeD1Ev>  ; TiXmlNode::~TiXmlNode()
087e991d +0x4bd:  mov    %ebx,(%esp)
087e9920 +0x4c0:  call   08ae3750 <_Unwind_Resume>
087e9925 +0x4c5:  movl   $"basic_string::at",(%esp)
087e992c +0x4cc:  call   086d9b70 <_ZSt20__throw_out_of_rangePKc>  ; std::__throw_out_of_range(char const*)
087e9931 +0x4d1:  movl   $&_ZZN12TiXmlElement8StreamInEPSiPSsE19__PRETTY_FUNCTION__,0xc(%esp)
087e9939 +0x4d9:  movl   $0x3fb,0x8(%esp)
087e9941 +0x4e1:  movl   $"tinyxmlparser.cpp",0x4(%esp)
087e9949 +0x4e9:  movl   $"c == '>'",(%esp)
087e9950 +0x4f0:  call   0807dc50 <_init+0x548>
087e9955 +0x4f5:  nop
087e9956 +0x4f6:  lea    0x0(%esi),%esi
087e9959 +0x4f9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlElement::StreamIn @ 0x87e9460

/* TiXmlElement::StreamIn(std::istream*, std::string*) */

void __thiscall TiXmlElement::StreamIn(TiXmlElement *this,istream *param_1,string *param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  bool bVar3;
  undefined4 __s;
  char cVar4;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  uint uVar8;
  int *piVar9;
  TiXmlDocument *pTVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  char *pcVar14;
  bool bVar15;
  byte bVar16;
  istream *this_00;
  string *psVar17;
  int local_80;
  undefined **local_4c [15];
  
  bVar16 = 0;
  do {
    if (*(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x14) != 0) break;
    iVar5 = std::istream::get(param_1);
    if (iVar5 < 1) {
      iVar5 = TiXmlNode::GetDocument((TiXmlNode *)this);
      __s = TiXmlBase::errorString._52_4_;
      if (iVar5 == 0) {
        return;
      }
      if (*(char *)(iVar5 + 0x2c) != '\0') {
        return;
      }
      *(undefined1 *)(iVar5 + 0x2c) = 1;
      *(undefined4 *)(iVar5 + 0x30) = 0xd;
      sVar6 = strlen((char *)__s);
      std::string::assign((string *)(iVar5 + 0x34),(char *)__s,sVar6);
      *(undefined4 *)(iVar5 + 0x40) = 0xffffffff;
      *(undefined4 *)(iVar5 + 0x3c) = 0xffffffff;
      return;
    }
    iVar12 = *(int *)param_2;
    iVar11 = *(int *)(iVar12 + -0xc);
    uVar8 = iVar11 + 1;
    if ((*(uint *)(iVar12 + -8) < uVar8) || (0 < *(int *)(iVar12 + -4))) {
      std::string::reserve(param_2,uVar8);
      iVar12 = *(int *)param_2;
      iVar11 = *(int *)(iVar12 + -0xc);
    }
    *(char *)(iVar12 + iVar11) = (char)iVar5;
    puVar1 = *(undefined1 **)param_2;
    if (puVar1 != &DAT_0948ccfc) {
      *(undefined4 *)(puVar1 + -4) = 0;
      *(uint *)(puVar1 + -0xc) = uVar8;
      puVar1[uVar8] = 0;
    }
  } while (iVar5 != 0x3e);
  iVar5 = *(int *)param_2;
  uVar8 = *(uint *)(iVar5 + -0xc);
  if (uVar8 < 3) {
    return;
  }
  iVar12 = uVar8 - 1;
  if (uVar8 != 0) {
    if (-1 < *(int *)(iVar5 + -4)) {
      std::string::_M_leak_hard(param_2);
      iVar5 = *(int *)param_2;
      uVar8 = *(uint *)(iVar5 + -0xc);
    }
    if (*(char *)(iVar5 + iVar12) == '>') {
      pcVar7 = (char *)std::string::at(param_2,uVar8 - 2);
      if (*pcVar7 == '/') {
        return;
      }
      iVar5 = *(int *)param_2;
      uVar8 = *(uint *)(iVar5 + -0xc);
    }
    if (uVar8 != 0) {
      if (-1 < *(int *)(iVar5 + -4)) {
        std::string::_M_leak_hard(param_2);
        iVar5 = *(int *)param_2;
      }
      if (*(char *)(iVar5 + (uVar8 - 1)) != '>') {
        return;
      }
LAB_087e9550:
      while( true ) {
        psVar17 = param_2;
        TiXmlBase::StreamWhiteSpace(param_1,param_2);
        if (*(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x14) != 0) {
          return;
        }
        this_00 = param_1;
        iVar5 = std::istream::peek(param_1);
        if (iVar5 == 0x3c) break;
        TiXmlText::TiXmlText((TiXmlText *)this_00,(char *)psVar17);
                    /* try { // try from 087e9596 to 087e959a has its CatchHandler @ 087e9909 */
        TiXmlText::StreamIn((TiXmlText *)local_4c,param_1,param_2);
        local_4c[0] = &PTR__TiXmlText_08de1168;
        TiXmlNode::~TiXmlNode((TiXmlNode *)local_4c);
      }
      if (*(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x14) != 0) {
        return;
      }
      iVar5 = std::istream::peek(param_1);
      if (iVar5 != 0x3c) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("in->peek() == \'<\'","tinyxmlparser.cpp",0x3c0,
                      "virtual void TiXmlElement::StreamIn(std::istream*, std::string*)");
      }
      bVar2 = false;
      bVar3 = false;
      iVar5 = *(int *)(*(int *)param_2 + -0xc);
LAB_087e9670:
      if (*(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x14) != 0) {
        return;
      }
      do {
        uVar8 = std::istream::peek(param_1);
        if ((int)uVar8 < 1) {
LAB_087e9808:
          pTVar10 = (TiXmlDocument *)TiXmlNode::GetDocument((TiXmlNode *)this);
          if (pTVar10 == (TiXmlDocument *)0x0) {
            return;
          }
          TiXmlDocument::SetError(pTVar10,0xd,0,0,0);
          return;
        }
        if (uVar8 == 0x3e) {
          if (bVar3) {
            if (*(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x14) != 0) {
              return;
            }
            iVar5 = std::istream::get(param_1);
            if (0 < iVar5) {
              if (iVar5 == 0x3e) {
                std::string::push_back(param_2,'>');
                return;
              }
                    /* WARNING: Subroutine does not return */
              __assert_fail("c == \'>\'","tinyxmlparser.cpp",0x3fb,
                            "virtual void TiXmlElement::StreamIn(std::istream*, std::string*)");
            }
            goto LAB_087e9808;
          }
          iVar12 = *(int *)param_2;
LAB_087e9779:
          piVar9 = (int *)TiXmlNode::Identify((TiXmlNode *)this,iVar12 + iVar5,0);
          if (piVar9 == (int *)0x0) {
            return;
          }
          (**(code **)(*piVar9 + 0x48))(piVar9,param_1,param_2);
          (**(code **)(*piVar9 + 4))(piVar9);
          goto LAB_087e9550;
        }
        cVar4 = (char)uVar8;
        iVar12 = *(int *)param_2;
        local_80 = *(int *)(iVar12 + -0xc);
        uVar13 = local_80 + 1;
        if ((*(uint *)(iVar12 + -8) < uVar13) || (0 < *(int *)(iVar12 + -4))) {
          std::string::reserve(param_2,uVar13);
          iVar12 = *(int *)param_2;
          local_80 = *(int *)(iVar12 + -0xc);
        }
        *(char *)(iVar12 + local_80) = cVar4;
        puVar1 = *(undefined1 **)param_2;
        if (puVar1 != &DAT_0948ccfc) {
          *(undefined4 *)(puVar1 + -4) = 0;
          *(uint *)(puVar1 + -0xc) = uVar13;
          puVar1[uVar13] = 0;
        }
        std::istream::get(param_1);
        if (uVar8 == 0x5b) {
          iVar12 = *(int *)param_2;
          uVar13 = *(uint *)(iVar12 + -0xc);
          bVar15 = uVar13 == 8;
          if (8 < uVar13) {
            iVar11 = 10;
            pcVar7 = (char *)(iVar12 + -9 + uVar13);
            pcVar14 = "<![CDATA[";
            do {
              if (iVar11 == 0) break;
              iVar11 = iVar11 + -1;
              bVar15 = *pcVar7 == *pcVar14;
              pcVar7 = pcVar7 + (uint)bVar16 * -2 + 1;
              pcVar14 = pcVar14 + (uint)bVar16 * -2 + 1;
            } while (bVar15);
            if (bVar15) {
              if (bVar3) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("!closingTag","tinyxmlparser.cpp",0x3e0,
                              "virtual void TiXmlElement::StreamIn(std::istream*, std::string*)");
              }
              goto LAB_087e9779;
            }
          }
        }
        if ((bVar2) || (uVar8 == 0x3c)) goto LAB_087e9670;
        if ((int)uVar8 < 0x100) {
          iVar12 = isspace(uVar8 & 0xff);
          if (((iVar12 != 0) || (cVar4 == '\n')) || (cVar4 == '\r')) goto LAB_087e9670;
          if (uVar8 == 0x2f) {
            bVar3 = true;
          }
        }
        bVar2 = true;
        if (*(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x14) != 0) {
          return;
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_out_of_range("basic_string::at");
}
```

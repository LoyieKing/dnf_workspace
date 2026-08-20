# allocator<char> >

`_ZSt7getlineIcSt11char_traitsIcESaIcEERSt13basic_istreamIT_T0_ES7_RSbIS4_S5_T1_ES4_`

`std::basic_istream<char, std::char_traits<char> >& std::getline<char, std::char_traits<char>, std::allocator<char> >(std::basic_istream<char, std::char_traits<char> >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, char)`

| 类 | 地址 |
|---|---|
| `std::basic_istream<char, std::char_traits<char> >& std::getline<char, std::char_traits<char>, std` | `0x086e8600` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086e8600  _ZSt7getlineIcSt11char_traitsIcESaIcEERSt13basic_istreamIT_T0_ES7_RSbIS4_S5_T1_ES4_
#           std::basic_istream<char, std::char_traits<char> >& std::getline<char, std::char_traits<char>, std::allocator<char> >(std::basic_istream<char, std::char_traits<char> >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, char)
# range [0x086e8600, 0x086ea33f]
086e8600 +0x0000:  push   %ebp
086e8601 +0x0001:  mov    %esp,%ebp
086e8603 +0x0003:  push   %edi
086e8604 +0x0004:  xor    %edi,%edi
086e8606 +0x0006:  push   %esi
086e8607 +0x0007:  push   %ebx
086e8608 +0x0008:  sub    $0x5c,%esp
086e860b +0x000b:  movzbl 0x10(%ebp),%eax
086e860f +0x000f:  mov    0x8(%ebp),%edx
086e8612 +0x0012:  movl   $0x1,0x8(%esp)
086e861a +0x001a:  mov    %al,-0x2c(%ebp)
086e861d +0x001d:  lea    -0x19(%ebp),%eax
086e8620 +0x0020:  mov    %eax,(%esp)
086e8623 +0x0023:  mov    %edx,0x4(%esp)
086e8627 +0x0027:  call   086e4760 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x46c0>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x46c0
086e862c +0x002c:  mov    $0x4,%eax
086e8631 +0x0031:  cmpb   $0x0,-0x19(%ebp)
086e8635 +0x0035:  jne    086e8660 <+0x60>
086e8637 +0x0037:  mov    0x8(%ebp),%ecx
086e863a +0x003a:  mov    (%ecx),%edx
086e863c +0x003c:  mov    -0xc(%edx),%edx
086e863f +0x003f:  add    %ecx,%edx
086e8641 +0x0041:  or     0x14(%edx),%eax
086e8644 +0x0044:  mov    %edx,(%esp)
086e8647 +0x0047:  mov    %eax,0x4(%esp)
086e864b +0x004b:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
086e8650 +0x0050:  mov    0x8(%ebp),%eax
086e8653 +0x0053:  add    $0x5c,%esp
086e8656 +0x0056:  pop    %ebx
086e8657 +0x0057:  pop    %esi
086e8658 +0x0058:  pop    %edi
086e8659 +0x0059:  pop    %ebp
086e865a +0x005a:  ret
086e865b +0x005b:  nop
086e865c +0x005c:  lea    0x0(%esi,%eiz,1),%esi
086e8660 +0x0060:  mov    0xc(%ebp),%ecx
086e8663 +0x0063:  movl   $0x0,0xc(%esp)
086e866b +0x006b:  mov    (%ecx),%eax
086e866d +0x006d:  mov    -0xc(%eax),%eax
086e8670 +0x0070:  movl   $0x0,0x4(%esp)
086e8678 +0x0078:  mov    %ecx,(%esp)
086e867b +0x007b:  mov    %eax,0x8(%esp)
086e867f +0x007f:  call   08708370 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1f80>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1f80
086e8684 +0x0084:  mov    0x8(%ebp),%edx
086e8687 +0x0087:  mov    (%edx),%eax
086e8689 +0x0089:  mov    -0xc(%eax),%eax
086e868c +0x008c:  mov    0x78(%edx,%eax,1),%esi
086e8690 +0x0090:  mov    0x8(%esi),%eax
086e8693 +0x0093:  cmp    0xc(%esi),%eax
086e8696 +0x0096:  jae    086e87fe <+0x1fe>
086e869c +0x009c:  movzbl (%eax),%ebx
086e869f +0x009f:  movzbl -0x2c(%ebp),%ecx
086e86a3 +0x00a3:  xor    %edi,%edi
086e86a5 +0x00a5:  movsbl -0x2c(%ebp),%eax
086e86a9 +0x00a9:  cmp    %ebx,%ecx
086e86ab +0x00ab:  mov    %ecx,-0x30(%ebp)
086e86ae +0x00ae:  mov    %eax,-0x2c(%ebp)
086e86b1 +0x00b1:  jne    086e86f6 <+0xf6>
086e86b3 +0x00b3:  nop
086e86b4 +0x00b4:  lea    0x0(%esi,%eiz,1),%esi
086e86b8 +0x00b8:  add    $0x1,%edi
086e86bb +0x00bb:  mov    %esi,(%esp)
086e86be +0x00be:  call   08705f60 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x116f4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x116f4
086e86c3 +0x00c3:  xor    %eax,%eax
086e86c5 +0x00c5:  lea    0x0(%esi),%esi
086e86c8 +0x00c8:  test   %edi,%edi
086e86ca +0x00ca:  je     086e884f <+0x24f>
086e86d0 +0x00d0:  test   %eax,%eax
086e86d2 +0x00d2:  jne    086e8637 <+0x37>
086e86d8 +0x00d8:  mov    0x8(%ebp),%eax
086e86db +0x00db:  add    $0x5c,%esp
086e86de +0x00de:  pop    %ebx
086e86df +0x00df:  pop    %esi
086e86e0 +0x00e0:  pop    %edi
086e86e1 +0x00e1:  pop    %ebp
086e86e2 +0x00e2:  ret
086e86e3 +0x00e3:  nop
086e86e4 +0x00e4:  lea    0x0(%esi,%eiz,1),%esi
086e86e8 +0x00e8:  cmp    $0xffffffff,%ebx
086e86eb +0x00eb:  je     086e8818 <+0x218>
086e86f1 +0x00f1:  cmp    %ebx,-0x30(%ebp)
086e86f4 +0x00f4:  je     086e86b8 <+0xb8>
086e86f6 +0x00f6:  mov    0x8(%esi),%edx
086e86f9 +0x00f9:  mov    $0x3ffffffc,%eax
086e86fe +0x00fe:  mov    0xc(%esi),%ecx
086e8701 +0x0101:  sub    %edi,%eax
086e8703 +0x0103:  sub    %edx,%ecx
086e8705 +0x0105:  cmp    %ecx,%eax
086e8707 +0x0107:  jle    086e870b <+0x10b>
086e8709 +0x0109:  mov    %ecx,%eax
086e870b +0x010b:  cmp    $0x1,%eax
086e870e +0x010e:  jle    086e8780 <+0x180>
086e8710 +0x0110:  mov    -0x2c(%ebp),%ecx
086e8713 +0x0113:  mov    %eax,%ebx
086e8715 +0x0115:  mov    %edx,(%esp)
086e8718 +0x0118:  mov    %eax,0x8(%esp)
086e871c +0x011c:  mov    %edx,-0x38(%ebp)
086e871f +0x011f:  mov    %ecx,0x4(%esp)
086e8723 +0x0123:  call   0807dec0 <_init+0x7b8>
086e8728 +0x0128:  mov    -0x38(%ebp),%edx
086e872b +0x012b:  test   %eax,%eax
086e872d +0x012d:  je     086e8733 <+0x133>
086e872f +0x012f:  mov    %eax,%ebx
086e8731 +0x0131:  sub    %edx,%ebx
086e8733 +0x0133:  mov    0xc(%ebp),%eax
086e8736 +0x0136:  mov    %ebx,0x8(%esp)
086e873a +0x013a:  mov    %edx,0x4(%esp)
086e873e +0x013e:  mov    %eax,(%esp)
086e8741 +0x0141:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
086e8746 +0x0146:  mov    0x8(%esi),%eax
086e8749 +0x0149:  add    %ebx,%edi
086e874b +0x014b:  add    %ebx,%eax
086e874d +0x014d:  cmp    0xc(%esi),%eax
086e8750 +0x0150:  mov    %eax,0x8(%esi)
086e8753 +0x0153:  jae    086e87ef <+0x1ef>
086e8759 +0x0159:  movzbl (%eax),%ebx
086e875c +0x015c:  cmp    $0x3ffffffb,%edi
086e8762 +0x0162:  jbe    086e86e8 <+0xe8>
086e8764 +0x0164:  cmp    $0xffffffff,%ebx
086e8767 +0x0167:  je     086e8818 <+0x218>
086e876d +0x016d:  cmp    %ebx,-0x30(%ebp)
086e8770 +0x0170:  mov    $0x4,%eax
086e8775 +0x0175:  jne    086e86c8 <+0xc8>
086e877b +0x017b:  jmp    086e86b8 <+0xb8>
086e8780 +0x0180:  mov    0xc(%ebp),%edx
086e8783 +0x0183:  mov    (%edx),%eax
086e8785 +0x0185:  mov    -0xc(%eax),%edx
086e8788 +0x0188:  lea    -0xc(%eax),%ecx
086e878b +0x018b:  mov    %ecx,-0x3c(%ebp)
086e878e +0x018e:  mov    %edx,-0x4c(%ebp)
086e8791 +0x0191:  add    $0x1,%edx
086e8794 +0x0194:  cmp    0x4(%ecx),%edx
086e8797 +0x0197:  mov    %edx,-0x34(%ebp)
086e879a +0x019a:  ja     086e87a3 <+0x1a3>
086e879c +0x019c:  mov    0x8(%ecx),%edx
086e879f +0x019f:  test   %edx,%edx
086e87a1 +0x01a1:  jle    086e87c0 <+0x1c0>
086e87a3 +0x01a3:  mov    -0x34(%ebp),%ecx
086e87a6 +0x01a6:  mov    0xc(%ebp),%eax
086e87a9 +0x01a9:  mov    %ecx,0x4(%esp)
086e87ad +0x01ad:  mov    %eax,(%esp)
086e87b0 +0x01b0:  call   08707d10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1920>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1920
086e87b5 +0x01b5:  mov    0xc(%ebp),%edx
086e87b8 +0x01b8:  mov    (%edx),%eax
086e87ba +0x01ba:  mov    -0xc(%eax),%ecx
086e87bd +0x01bd:  mov    %ecx,-0x4c(%ebp)
086e87c0 +0x01c0:  mov    -0x4c(%ebp),%edx
086e87c3 +0x01c3:  mov    %bl,(%eax,%edx,1)
086e87c6 +0x01c6:  mov    0xc(%ebp),%ecx
086e87c9 +0x01c9:  mov    (%ecx),%edx
086e87cb +0x01cb:  lea    -0xc(%edx),%eax
086e87ce +0x01ce:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
086e87d3 +0x01d3:  jne    086e8822 <+0x222>
086e87d5 +0x01d5:  mov    0x8(%esi),%eax
086e87d8 +0x01d8:  add    $0x1,%edi
086e87db +0x01db:  cmp    0xc(%esi),%eax
086e87de +0x01de:  jae    086e8836 <+0x236>
086e87e0 +0x01e0:  add    $0x1,%eax
086e87e3 +0x01e3:  mov    %eax,0x8(%esi)
086e87e6 +0x01e6:  cmp    %eax,0xc(%esi)
086e87e9 +0x01e9:  ja     086e8759 <+0x159>
086e87ef +0x01ef:  mov    (%esi),%eax
086e87f1 +0x01f1:  mov    %esi,(%esp)
086e87f4 +0x01f4:  call   *0x24(%eax)
086e87f7 +0x01f7:  mov    %eax,%ebx
086e87f9 +0x01f9:  jmp    086e875c <+0x15c>
086e87fe +0x01fe:  mov    (%esi),%eax
086e8800 +0x0200:  mov    %esi,(%esp)
086e8803 +0x0203:  call   *0x24(%eax)
086e8806 +0x0206:  xor    %edi,%edi
086e8808 +0x0208:  cmp    $0xffffffff,%eax
086e880b +0x020b:  mov    %eax,%ebx
086e880d +0x020d:  jne    086e869f <+0x9f>
086e8813 +0x0213:  nop
086e8814 +0x0214:  lea    0x0(%esi,%eiz,1),%esi
086e8818 +0x0218:  mov    $0x2,%eax
086e881d +0x021d:  jmp    086e86c8 <+0xc8>
086e8822 +0x0222:  mov    -0x34(%ebp),%ecx
086e8825 +0x0225:  movl   $0x0,0x8(%eax)
086e882c +0x022c:  mov    %ecx,-0xc(%edx)
086e882f +0x022f:  movb   $0x0,0xc(%eax,%ecx,1)
086e8834 +0x0234:  jmp    086e87d5 <+0x1d5>
086e8836 +0x0236:  mov    (%esi),%eax
086e8838 +0x0238:  mov    %esi,(%esp)
086e883b +0x023b:  call   *0x28(%eax)
086e883e +0x023e:  or     $0xffffffff,%ebx
086e8841 +0x0241:  cmp    $0xffffffff,%eax
086e8844 +0x0244:  je     086e875c <+0x15c>
086e884a +0x024a:  mov    0x8(%esi),%eax
086e884d +0x024d:  jmp    086e87e6 <+0x1e6>
086e884f +0x024f:  or     $0x4,%eax
086e8852 +0x0252:  jmp    086e8637 <+0x37>
086e8857 +0x0257:  cmp    $0x2,%edx
086e885a +0x025a:  je     086e888e <+0x28e>
086e885c +0x025c:  mov    %eax,(%esp)
086e885f +0x025f:  call   08725ce0 <__cxa_begin_catch>
086e8864 +0x0264:  mov    0x8(%ebp),%ecx
086e8867 +0x0267:  mov    (%ecx),%eax
086e8869 +0x0269:  mov    -0xc(%eax),%eax
086e886c +0x026c:  add    %ecx,%eax
086e886e +0x026e:  call   086e73d0 <_ZNSt9basic_iosIcSt11char_traitsIcEE11_M_setstateESt12_Ios_Iostate.clone.1>  ; std::basic_ios<char, std::char_traits<char> >::_M_setstate(std::_Ios_Iostate) [clone .clone.1]
086e8873 +0x0273:  call   08725c30 <__cxa_end_catch>
086e8878 +0x0278:  xor    %eax,%eax
086e887a +0x027a:  jmp    086e86c8 <+0xc8>
086e887f +0x027f:  mov    %eax,%ebx
086e8881 +0x0281:  call   08725c30 <__cxa_end_catch>
086e8886 +0x0286:  mov    %ebx,(%esp)
086e8889 +0x0289:  call   08ae3750 <_Unwind_Resume>
086e888e +0x028e:  mov    %eax,(%esp)
086e8891 +0x0291:  call   08725ce0 <__cxa_begin_catch>
086e8896 +0x0296:  mov    0x8(%ebp),%edx
086e8899 +0x0299:  mov    (%edx),%eax
086e889b +0x029b:  mov    -0xc(%eax),%eax
086e889e +0x029e:  add    %edx,%eax
086e88a0 +0x02a0:  call   086e73d0 <_ZNSt9basic_iosIcSt11char_traitsIcEE11_M_setstateESt12_Ios_Iostate.clone.1>  ; std::basic_ios<char, std::char_traits<char> >::_M_setstate(std::_Ios_Iostate) [clone .clone.1]
086e88a5 +0x02a5:  call   08724be0 <__cxa_rethrow>
086e88aa +0x02aa:  jmp    086e887f <+0x27f>
086e88ac +0x02ac:  nop
086e88ad +0x02ad:  nop
086e88ae +0x02ae:  nop
086e88af +0x02af:  nop
086e88b0 +0x02b0:  push   %ebp
086e88b1 +0x02b1:  mov    %esp,%ebp
086e88b3 +0x02b3:  sub    $0x8,%esp
086e88b6 +0x02b6:  mov    0x8(%ebp),%eax
086e88b9 +0x02b9:  mov    (%eax),%edx
086e88bb +0x02bb:  mov    0x8(%edx),%eax
086e88be +0x02be:  leave
086e88bf +0x02bf:  jmp    *%eax
086e88c1 +0x02c1:  nop
086e88c2 +0x02c2:  nop
086e88c3 +0x02c3:  nop
086e88c4 +0x02c4:  nop
086e88c5 +0x02c5:  nop
086e88c6 +0x02c6:  nop
086e88c7 +0x02c7:  nop
086e88c8 +0x02c8:  nop
086e88c9 +0x02c9:  nop
086e88ca +0x02ca:  nop
086e88cb +0x02cb:  nop
086e88cc +0x02cc:  nop
086e88cd +0x02cd:  nop
086e88ce +0x02ce:  nop
086e88cf +0x02cf:  nop
086e88d0 +0x02d0:  push   %ebp
086e88d1 +0x02d1:  mov    %esp,%ebp
086e88d3 +0x02d3:  sub    $0x8,%esp
086e88d6 +0x02d6:  mov    0x8(%ebp),%eax
086e88d9 +0x02d9:  mov    (%eax),%edx
086e88db +0x02db:  mov    0xc(%edx),%eax
086e88de +0x02de:  leave
086e88df +0x02df:  jmp    *%eax
086e88e1 +0x02e1:  nop
086e88e2 +0x02e2:  nop
086e88e3 +0x02e3:  nop
086e88e4 +0x02e4:  nop
086e88e5 +0x02e5:  nop
086e88e6 +0x02e6:  nop
086e88e7 +0x02e7:  nop
086e88e8 +0x02e8:  nop
086e88e9 +0x02e9:  nop
086e88ea +0x02ea:  nop
086e88eb +0x02eb:  nop
086e88ec +0x02ec:  nop
086e88ed +0x02ed:  nop
086e88ee +0x02ee:  nop
086e88ef +0x02ef:  nop
086e88f0 +0x02f0:  push   %ebp
086e88f1 +0x02f1:  mov    %esp,%ebp
086e88f3 +0x02f3:  push   %ebx
086e88f4 +0x02f4:  sub    $0x14,%esp
086e88f7 +0x02f7:  mov    0xc(%ebp),%eax
086e88fa +0x02fa:  mov    0x8(%ebp),%ebx
086e88fd +0x02fd:  mov    (%eax),%edx
086e88ff +0x02ff:  mov    %eax,0x4(%esp)
086e8903 +0x0303:  mov    %ebx,(%esp)
086e8906 +0x0306:  call   *0x10(%edx)
086e8909 +0x0309:  mov    %ebx,%eax
086e890b +0x030b:  mov    -0x4(%ebp),%ebx
086e890e +0x030e:  sub    $0x4,%esp
086e8911 +0x0311:  leave
086e8912 +0x0312:  ret    $0x4
086e8915 +0x0315:  nop
086e8916 +0x0316:  nop
086e8917 +0x0317:  nop
086e8918 +0x0318:  nop
086e8919 +0x0319:  nop
086e891a +0x031a:  nop
086e891b +0x031b:  nop
086e891c +0x031c:  nop
086e891d +0x031d:  nop
086e891e +0x031e:  nop
086e891f +0x031f:  nop
086e8920 +0x0320:  push   %ebp
086e8921 +0x0321:  mov    %esp,%ebp
086e8923 +0x0323:  push   %ebx
086e8924 +0x0324:  sub    $0x14,%esp
086e8927 +0x0327:  mov    0xc(%ebp),%eax
086e892a +0x032a:  mov    0x8(%ebp),%ebx
086e892d +0x032d:  mov    (%eax),%edx
086e892f +0x032f:  mov    %eax,0x4(%esp)
086e8933 +0x0333:  mov    %ebx,(%esp)
086e8936 +0x0336:  call   *0x14(%edx)
086e8939 +0x0339:  mov    %ebx,%eax
086e893b +0x033b:  mov    -0x4(%ebp),%ebx
086e893e +0x033e:  sub    $0x4,%esp
086e8941 +0x0341:  leave
086e8942 +0x0342:  ret    $0x4
086e8945 +0x0345:  nop
086e8946 +0x0346:  nop
086e8947 +0x0347:  nop
086e8948 +0x0348:  nop
086e8949 +0x0349:  nop
086e894a +0x034a:  nop
086e894b +0x034b:  nop
086e894c +0x034c:  nop
086e894d +0x034d:  nop
086e894e +0x034e:  nop
086e894f +0x034f:  nop
086e8950 +0x0350:  push   %ebp
086e8951 +0x0351:  mov    %esp,%ebp
086e8953 +0x0353:  push   %ebx
086e8954 +0x0354:  sub    $0x14,%esp
086e8957 +0x0357:  mov    0xc(%ebp),%eax
086e895a +0x035a:  mov    0x8(%ebp),%ebx
086e895d +0x035d:  mov    (%eax),%edx
086e895f +0x035f:  mov    %eax,0x4(%esp)
086e8963 +0x0363:  mov    %ebx,(%esp)
086e8966 +0x0366:  call   *0x18(%edx)
086e8969 +0x0369:  mov    %ebx,%eax
086e896b +0x036b:  mov    -0x4(%ebp),%ebx
086e896e +0x036e:  sub    $0x4,%esp
086e8971 +0x0371:  leave
086e8972 +0x0372:  ret    $0x4
086e8975 +0x0375:  nop
086e8976 +0x0376:  nop
086e8977 +0x0377:  nop
086e8978 +0x0378:  nop
086e8979 +0x0379:  nop
086e897a +0x037a:  nop
086e897b +0x037b:  nop
086e897c +0x037c:  nop
086e897d +0x037d:  nop
086e897e +0x037e:  nop
086e897f +0x037f:  nop
086e8980 +0x0380:  push   %ebp
086e8981 +0x0381:  mov    %esp,%ebp
086e8983 +0x0383:  push   %ebx
086e8984 +0x0384:  sub    $0x14,%esp
086e8987 +0x0387:  mov    0xc(%ebp),%eax
086e898a +0x038a:  mov    0x8(%ebp),%ebx
086e898d +0x038d:  mov    (%eax),%edx
086e898f +0x038f:  mov    %eax,0x4(%esp)
086e8993 +0x0393:  mov    %ebx,(%esp)
086e8996 +0x0396:  call   *0x1c(%edx)
086e8999 +0x0399:  mov    %ebx,%eax
086e899b +0x039b:  mov    -0x4(%ebp),%ebx
086e899e +0x039e:  sub    $0x4,%esp
086e89a1 +0x03a1:  leave
086e89a2 +0x03a2:  ret    $0x4
086e89a5 +0x03a5:  nop
086e89a6 +0x03a6:  nop
086e89a7 +0x03a7:  nop
086e89a8 +0x03a8:  nop
086e89a9 +0x03a9:  nop
086e89aa +0x03aa:  nop
086e89ab +0x03ab:  nop
086e89ac +0x03ac:  nop
086e89ad +0x03ad:  nop
086e89ae +0x03ae:  nop
086e89af +0x03af:  nop
086e89b0 +0x03b0:  push   %ebp
086e89b1 +0x03b1:  mov    %esp,%ebp
086e89b3 +0x03b3:  sub    $0x8,%esp
086e89b6 +0x03b6:  mov    0x8(%ebp),%eax
086e89b9 +0x03b9:  mov    (%eax),%edx
086e89bb +0x03bb:  mov    0x20(%edx),%eax
086e89be +0x03be:  leave
086e89bf +0x03bf:  jmp    *%eax
086e89c1 +0x03c1:  nop
086e89c2 +0x03c2:  nop
086e89c3 +0x03c3:  nop
086e89c4 +0x03c4:  nop
086e89c5 +0x03c5:  nop
086e89c6 +0x03c6:  nop
086e89c7 +0x03c7:  nop
086e89c8 +0x03c8:  nop
086e89c9 +0x03c9:  nop
086e89ca +0x03ca:  nop
086e89cb +0x03cb:  nop
086e89cc +0x03cc:  nop
086e89cd +0x03cd:  nop
086e89ce +0x03ce:  nop
086e89cf +0x03cf:  nop
086e89d0 +0x03d0:  push   %ebp
086e89d1 +0x03d1:  mov    %esp,%ebp
086e89d3 +0x03d3:  push   %ebx
086e89d4 +0x03d4:  sub    $0x14,%esp
086e89d7 +0x03d7:  mov    0xc(%ebp),%eax
086e89da +0x03da:  mov    0x8(%ebp),%ebx
086e89dd +0x03dd:  mov    (%eax),%edx
086e89df +0x03df:  mov    %eax,0x4(%esp)
086e89e3 +0x03e3:  mov    %ebx,(%esp)
086e89e6 +0x03e6:  call   *0x24(%edx)
086e89e9 +0x03e9:  mov    %ebx,%eax
086e89eb +0x03eb:  mov    -0x4(%ebp),%ebx
086e89ee +0x03ee:  sub    $0x4,%esp
086e89f1 +0x03f1:  leave
086e89f2 +0x03f2:  ret    $0x4
086e89f5 +0x03f5:  nop
086e89f6 +0x03f6:  nop
086e89f7 +0x03f7:  nop
086e89f8 +0x03f8:  nop
086e89f9 +0x03f9:  nop
086e89fa +0x03fa:  nop
086e89fb +0x03fb:  nop
086e89fc +0x03fc:  nop
086e89fd +0x03fd:  nop
086e89fe +0x03fe:  nop
086e89ff +0x03ff:  nop
086e8a00 +0x0400:  push   %ebp
086e8a01 +0x0401:  mov    %esp,%ebp
086e8a03 +0x0403:  push   %ebx
086e8a04 +0x0404:  sub    $0x14,%esp
086e8a07 +0x0407:  mov    0xc(%ebp),%eax
086e8a0a +0x040a:  mov    0x8(%ebp),%ebx
086e8a0d +0x040d:  mov    (%eax),%edx
086e8a0f +0x040f:  mov    %eax,0x4(%esp)
086e8a13 +0x0413:  mov    %ebx,(%esp)
086e8a16 +0x0416:  call   *0x28(%edx)
086e8a19 +0x0419:  mov    %ebx,%eax
086e8a1b +0x041b:  mov    -0x4(%ebp),%ebx
086e8a1e +0x041e:  sub    $0x4,%esp
086e8a21 +0x0421:  leave
086e8a22 +0x0422:  ret    $0x4
086e8a25 +0x0425:  nop
086e8a26 +0x0426:  nop
086e8a27 +0x0427:  nop
086e8a28 +0x0428:  nop
086e8a29 +0x0429:  nop
086e8a2a +0x042a:  nop
086e8a2b +0x042b:  nop
086e8a2c +0x042c:  nop
086e8a2d +0x042d:  nop
086e8a2e +0x042e:  nop
086e8a2f +0x042f:  nop
086e8a30 +0x0430:  push   %ebp
086e8a31 +0x0431:  mov    %esp,%ebp
086e8a33 +0x0433:  mov    0x8(%ebp),%eax
086e8a36 +0x0436:  pop    %ebp
086e8a37 +0x0437:  mov    0x8(%eax),%eax
086e8a3a +0x043a:  movzbl 0x11(%eax),%eax
086e8a3e +0x043e:  ret
086e8a3f +0x043f:  nop
086e8a40 +0x0440:  push   %ebp
086e8a41 +0x0441:  mov    %esp,%ebp
086e8a43 +0x0443:  mov    0x8(%ebp),%eax
086e8a46 +0x0446:  pop    %ebp
086e8a47 +0x0447:  mov    0x8(%eax),%eax
086e8a4a +0x044a:  movzbl 0x12(%eax),%eax
086e8a4e +0x044e:  ret
086e8a4f +0x044f:  nop
086e8a50 +0x0450:  push   %ebp
086e8a51 +0x0451:  mov    %esp,%ebp
086e8a53 +0x0453:  mov    0x8(%ebp),%eax
086e8a56 +0x0456:  pop    %ebp
086e8a57 +0x0457:  mov    0x8(%eax),%eax
086e8a5a +0x045a:  mov    0x2c(%eax),%eax
086e8a5d +0x045d:  ret
086e8a5e +0x045e:  nop
086e8a5f +0x045f:  nop
086e8a60 +0x0460:  push   %ebp
086e8a61 +0x0461:  mov    %esp,%ebp
086e8a63 +0x0463:  mov    0xc(%ebp),%edx
086e8a66 +0x0466:  mov    0x8(%ebp),%eax
086e8a69 +0x0469:  mov    0x8(%edx),%edx
086e8a6c +0x046c:  mov    0x30(%edx),%edx
086e8a6f +0x046f:  mov    %edx,(%eax)
086e8a71 +0x0471:  pop    %ebp
086e8a72 +0x0472:  ret    $0x4
086e8a75 +0x0475:  nop
086e8a76 +0x0476:  nop
086e8a77 +0x0477:  nop
086e8a78 +0x0478:  nop
086e8a79 +0x0479:  nop
086e8a7a +0x047a:  nop
086e8a7b +0x047b:  nop
086e8a7c +0x047c:  nop
086e8a7d +0x047d:  nop
086e8a7e +0x047e:  nop
086e8a7f +0x047f:  nop
086e8a80 +0x0480:  push   %ebp
086e8a81 +0x0481:  mov    %esp,%ebp
086e8a83 +0x0483:  mov    0xc(%ebp),%edx
086e8a86 +0x0486:  mov    0x8(%ebp),%eax
086e8a89 +0x0489:  mov    0x8(%edx),%edx
086e8a8c +0x048c:  mov    0x34(%edx),%edx
086e8a8f +0x048f:  mov    %edx,(%eax)
086e8a91 +0x0491:  pop    %ebp
086e8a92 +0x0492:  ret    $0x4
086e8a95 +0x0495:  nop
086e8a96 +0x0496:  nop
086e8a97 +0x0497:  nop
086e8a98 +0x0498:  nop
086e8a99 +0x0499:  nop
086e8a9a +0x049a:  nop
086e8a9b +0x049b:  nop
086e8a9c +0x049c:  nop
086e8a9d +0x049d:  nop
086e8a9e +0x049e:  nop
086e8a9f +0x049f:  nop
086e8aa0 +0x04a0:  push   %ebp
086e8aa1 +0x04a1:  mov    %esp,%ebp
086e8aa3 +0x04a3:  sub    $0x8,%esp
086e8aa6 +0x04a6:  mov    0x8(%ebp),%eax
086e8aa9 +0x04a9:  mov    (%eax),%edx
086e8aab +0x04ab:  mov    0x8(%edx),%eax
086e8aae +0x04ae:  leave
086e8aaf +0x04af:  jmp    *%eax
086e8ab1 +0x04b1:  nop
086e8ab2 +0x04b2:  nop
086e8ab3 +0x04b3:  nop
086e8ab4 +0x04b4:  nop
086e8ab5 +0x04b5:  nop
086e8ab6 +0x04b6:  nop
086e8ab7 +0x04b7:  nop
086e8ab8 +0x04b8:  nop
086e8ab9 +0x04b9:  nop
086e8aba +0x04ba:  nop
086e8abb +0x04bb:  nop
086e8abc +0x04bc:  nop
086e8abd +0x04bd:  nop
086e8abe +0x04be:  nop
086e8abf +0x04bf:  nop
086e8ac0 +0x04c0:  push   %ebp
086e8ac1 +0x04c1:  mov    %esp,%ebp
086e8ac3 +0x04c3:  sub    $0x8,%esp
086e8ac6 +0x04c6:  mov    0x8(%ebp),%eax
086e8ac9 +0x04c9:  mov    (%eax),%edx
086e8acb +0x04cb:  mov    0xc(%edx),%eax
086e8ace +0x04ce:  leave
086e8acf +0x04cf:  jmp    *%eax
086e8ad1 +0x04d1:  nop
086e8ad2 +0x04d2:  nop
086e8ad3 +0x04d3:  nop
086e8ad4 +0x04d4:  nop
086e8ad5 +0x04d5:  nop
086e8ad6 +0x04d6:  nop
086e8ad7 +0x04d7:  nop
086e8ad8 +0x04d8:  nop
086e8ad9 +0x04d9:  nop
086e8ada +0x04da:  nop
086e8adb +0x04db:  nop
086e8adc +0x04dc:  nop
086e8add +0x04dd:  nop
086e8ade +0x04de:  nop
086e8adf +0x04df:  nop
086e8ae0 +0x04e0:  push   %ebp
086e8ae1 +0x04e1:  mov    %esp,%ebp
086e8ae3 +0x04e3:  push   %ebx
086e8ae4 +0x04e4:  sub    $0x14,%esp
086e8ae7 +0x04e7:  mov    0xc(%ebp),%eax
086e8aea +0x04ea:  mov    0x8(%ebp),%ebx
086e8aed +0x04ed:  mov    (%eax),%edx
086e8aef +0x04ef:  mov    %eax,0x4(%esp)
086e8af3 +0x04f3:  mov    %ebx,(%esp)
086e8af6 +0x04f6:  call   *0x10(%edx)
086e8af9 +0x04f9:  mov    %ebx,%eax
086e8afb +0x04fb:  mov    -0x4(%ebp),%ebx
086e8afe +0x04fe:  sub    $0x4,%esp
086e8b01 +0x0501:  leave
086e8b02 +0x0502:  ret    $0x4
086e8b05 +0x0505:  nop
086e8b06 +0x0506:  nop
086e8b07 +0x0507:  nop
086e8b08 +0x0508:  nop
086e8b09 +0x0509:  nop
086e8b0a +0x050a:  nop
086e8b0b +0x050b:  nop
086e8b0c +0x050c:  nop
086e8b0d +0x050d:  nop
086e8b0e +0x050e:  nop
086e8b0f +0x050f:  nop
086e8b10 +0x0510:  push   %ebp
086e8b11 +0x0511:  mov    %esp,%ebp
086e8b13 +0x0513:  push   %ebx
086e8b14 +0x0514:  sub    $0x14,%esp
086e8b17 +0x0517:  mov    0xc(%ebp),%eax
086e8b1a +0x051a:  mov    0x8(%ebp),%ebx
086e8b1d +0x051d:  mov    (%eax),%edx
086e8b1f +0x051f:  mov    %eax,0x4(%esp)
086e8b23 +0x0523:  mov    %ebx,(%esp)
086e8b26 +0x0526:  call   *0x14(%edx)
086e8b29 +0x0529:  mov    %ebx,%eax
086e8b2b +0x052b:  mov    -0x4(%ebp),%ebx
086e8b2e +0x052e:  sub    $0x4,%esp
086e8b31 +0x0531:  leave
086e8b32 +0x0532:  ret    $0x4
086e8b35 +0x0535:  nop
086e8b36 +0x0536:  nop
086e8b37 +0x0537:  nop
086e8b38 +0x0538:  nop
086e8b39 +0x0539:  nop
086e8b3a +0x053a:  nop
086e8b3b +0x053b:  nop
086e8b3c +0x053c:  nop
086e8b3d +0x053d:  nop
086e8b3e +0x053e:  nop
086e8b3f +0x053f:  nop
086e8b40 +0x0540:  push   %ebp
086e8b41 +0x0541:  mov    %esp,%ebp
086e8b43 +0x0543:  push   %ebx
086e8b44 +0x0544:  sub    $0x14,%esp
086e8b47 +0x0547:  mov    0xc(%ebp),%eax
086e8b4a +0x054a:  mov    0x8(%ebp),%ebx
086e8b4d +0x054d:  mov    (%eax),%edx
086e8b4f +0x054f:  mov    %eax,0x4(%esp)
086e8b53 +0x0553:  mov    %ebx,(%esp)
086e8b56 +0x0556:  call   *0x18(%edx)
086e8b59 +0x0559:  mov    %ebx,%eax
086e8b5b +0x055b:  mov    -0x4(%ebp),%ebx
086e8b5e +0x055e:  sub    $0x4,%esp
086e8b61 +0x0561:  leave
086e8b62 +0x0562:  ret    $0x4
086e8b65 +0x0565:  nop
086e8b66 +0x0566:  nop
086e8b67 +0x0567:  nop
086e8b68 +0x0568:  nop
086e8b69 +0x0569:  nop
086e8b6a +0x056a:  nop
086e8b6b +0x056b:  nop
086e8b6c +0x056c:  nop
086e8b6d +0x056d:  nop
086e8b6e +0x056e:  nop
086e8b6f +0x056f:  nop
086e8b70 +0x0570:  push   %ebp
086e8b71 +0x0571:  mov    %esp,%ebp
086e8b73 +0x0573:  push   %ebx
086e8b74 +0x0574:  sub    $0x14,%esp
086e8b77 +0x0577:  mov    0xc(%ebp),%eax
086e8b7a +0x057a:  mov    0x8(%ebp),%ebx
086e8b7d +0x057d:  mov    (%eax),%edx
086e8b7f +0x057f:  mov    %eax,0x4(%esp)
086e8b83 +0x0583:  mov    %ebx,(%esp)
086e8b86 +0x0586:  call   *0x1c(%edx)
086e8b89 +0x0589:  mov    %ebx,%eax
086e8b8b +0x058b:  mov    -0x4(%ebp),%ebx
086e8b8e +0x058e:  sub    $0x4,%esp
086e8b91 +0x0591:  leave
086e8b92 +0x0592:  ret    $0x4
086e8b95 +0x0595:  nop
086e8b96 +0x0596:  nop
086e8b97 +0x0597:  nop
086e8b98 +0x0598:  nop
086e8b99 +0x0599:  nop
086e8b9a +0x059a:  nop
086e8b9b +0x059b:  nop
086e8b9c +0x059c:  nop
086e8b9d +0x059d:  nop
086e8b9e +0x059e:  nop
086e8b9f +0x059f:  nop
086e8ba0 +0x05a0:  push   %ebp
086e8ba1 +0x05a1:  mov    %esp,%ebp
086e8ba3 +0x05a3:  sub    $0x8,%esp
086e8ba6 +0x05a6:  mov    0x8(%ebp),%eax
086e8ba9 +0x05a9:  mov    (%eax),%edx
086e8bab +0x05ab:  mov    0x20(%edx),%eax
086e8bae +0x05ae:  leave
086e8baf +0x05af:  jmp    *%eax
086e8bb1 +0x05b1:  nop
086e8bb2 +0x05b2:  nop
086e8bb3 +0x05b3:  nop
086e8bb4 +0x05b4:  nop
086e8bb5 +0x05b5:  nop
086e8bb6 +0x05b6:  nop
086e8bb7 +0x05b7:  nop
086e8bb8 +0x05b8:  nop
086e8bb9 +0x05b9:  nop
086e8bba +0x05ba:  nop
086e8bbb +0x05bb:  nop
086e8bbc +0x05bc:  nop
086e8bbd +0x05bd:  nop
086e8bbe +0x05be:  nop
086e8bbf +0x05bf:  nop
086e8bc0 +0x05c0:  push   %ebp
086e8bc1 +0x05c1:  mov    %esp,%ebp
086e8bc3 +0x05c3:  push   %ebx
086e8bc4 +0x05c4:  sub    $0x14,%esp
086e8bc7 +0x05c7:  mov    0xc(%ebp),%eax
086e8bca +0x05ca:  mov    0x8(%ebp),%ebx
086e8bcd +0x05cd:  mov    (%eax),%edx
086e8bcf +0x05cf:  mov    %eax,0x4(%esp)
086e8bd3 +0x05d3:  mov    %ebx,(%esp)
086e8bd6 +0x05d6:  call   *0x24(%edx)
086e8bd9 +0x05d9:  mov    %ebx,%eax
086e8bdb +0x05db:  mov    -0x4(%ebp),%ebx
086e8bde +0x05de:  sub    $0x4,%esp
086e8be1 +0x05e1:  leave
086e8be2 +0x05e2:  ret    $0x4
086e8be5 +0x05e5:  nop
086e8be6 +0x05e6:  nop
086e8be7 +0x05e7:  nop
086e8be8 +0x05e8:  nop
086e8be9 +0x05e9:  nop
086e8bea +0x05ea:  nop
086e8beb +0x05eb:  nop
086e8bec +0x05ec:  nop
086e8bed +0x05ed:  nop
086e8bee +0x05ee:  nop
086e8bef +0x05ef:  nop
086e8bf0 +0x05f0:  push   %ebp
086e8bf1 +0x05f1:  mov    %esp,%ebp
086e8bf3 +0x05f3:  push   %ebx
086e8bf4 +0x05f4:  sub    $0x14,%esp
086e8bf7 +0x05f7:  mov    0xc(%ebp),%eax
086e8bfa +0x05fa:  mov    0x8(%ebp),%ebx
086e8bfd +0x05fd:  mov    (%eax),%edx
086e8bff +0x05ff:  mov    %eax,0x4(%esp)
086e8c03 +0x0603:  mov    %ebx,(%esp)
086e8c06 +0x0606:  call   *0x28(%edx)
086e8c09 +0x0609:  mov    %ebx,%eax
086e8c0b +0x060b:  mov    -0x4(%ebp),%ebx
086e8c0e +0x060e:  sub    $0x4,%esp
086e8c11 +0x0611:  leave
086e8c12 +0x0612:  ret    $0x4
086e8c15 +0x0615:  nop
086e8c16 +0x0616:  nop
086e8c17 +0x0617:  nop
086e8c18 +0x0618:  nop
086e8c19 +0x0619:  nop
086e8c1a +0x061a:  nop
086e8c1b +0x061b:  nop
086e8c1c +0x061c:  nop
086e8c1d +0x061d:  nop
086e8c1e +0x061e:  nop
086e8c1f +0x061f:  nop
086e8c20 +0x0620:  push   %ebp
086e8c21 +0x0621:  mov    %esp,%ebp
086e8c23 +0x0623:  mov    0x8(%ebp),%eax
086e8c26 +0x0626:  pop    %ebp
086e8c27 +0x0627:  mov    0x8(%eax),%eax
086e8c2a +0x062a:  movzbl 0x11(%eax),%eax
086e8c2e +0x062e:  ret
086e8c2f +0x062f:  nop
086e8c30 +0x0630:  push   %ebp
086e8c31 +0x0631:  mov    %esp,%ebp
086e8c33 +0x0633:  mov    0x8(%ebp),%eax
086e8c36 +0x0636:  pop    %ebp
086e8c37 +0x0637:  mov    0x8(%eax),%eax
086e8c3a +0x063a:  movzbl 0x12(%eax),%eax
086e8c3e +0x063e:  ret
086e8c3f +0x063f:  nop
086e8c40 +0x0640:  push   %ebp
086e8c41 +0x0641:  mov    %esp,%ebp
086e8c43 +0x0643:  mov    0x8(%ebp),%eax
086e8c46 +0x0646:  pop    %ebp
086e8c47 +0x0647:  mov    0x8(%eax),%eax
086e8c4a +0x064a:  mov    0x2c(%eax),%eax
086e8c4d +0x064d:  ret
086e8c4e +0x064e:  nop
086e8c4f +0x064f:  nop
086e8c50 +0x0650:  push   %ebp
086e8c51 +0x0651:  mov    %esp,%ebp
086e8c53 +0x0653:  mov    0xc(%ebp),%edx
086e8c56 +0x0656:  mov    0x8(%ebp),%eax
086e8c59 +0x0659:  mov    0x8(%edx),%edx
086e8c5c +0x065c:  mov    0x30(%edx),%edx
086e8c5f +0x065f:  mov    %edx,(%eax)
086e8c61 +0x0661:  pop    %ebp
086e8c62 +0x0662:  ret    $0x4
086e8c65 +0x0665:  nop
086e8c66 +0x0666:  nop
086e8c67 +0x0667:  nop
086e8c68 +0x0668:  nop
086e8c69 +0x0669:  nop
086e8c6a +0x066a:  nop
086e8c6b +0x066b:  nop
086e8c6c +0x066c:  nop
086e8c6d +0x066d:  nop
086e8c6e +0x066e:  nop
086e8c6f +0x066f:  nop
086e8c70 +0x0670:  push   %ebp
086e8c71 +0x0671:  mov    %esp,%ebp
086e8c73 +0x0673:  mov    0xc(%ebp),%edx
086e8c76 +0x0676:  mov    0x8(%ebp),%eax
086e8c79 +0x0679:  mov    0x8(%edx),%edx
086e8c7c +0x067c:  mov    0x34(%edx),%edx
086e8c7f +0x067f:  mov    %edx,(%eax)
086e8c81 +0x0681:  pop    %ebp
086e8c82 +0x0682:  ret    $0x4
086e8c85 +0x0685:  nop
086e8c86 +0x0686:  nop
086e8c87 +0x0687:  nop
086e8c88 +0x0688:  nop
086e8c89 +0x0689:  nop
086e8c8a +0x068a:  nop
086e8c8b +0x068b:  nop
086e8c8c +0x068c:  nop
086e8c8d +0x068d:  nop
086e8c8e +0x068e:  nop
086e8c8f +0x068f:  nop
086e8c90 +0x0690:  push   %ebp
086e8c91 +0x0691:  xor    %edx,%edx
086e8c93 +0x0693:  mov    %esp,%ebp
086e8c95 +0x0695:  mov    0x8(%ebp),%eax
086e8c98 +0x0698:  cmpl   $0x0,0xc(%ebp)
086e8c9c +0x069c:  setne  %dl
086e8c9f +0x069f:  mov    %edx,0x4(%eax)
086e8ca2 +0x06a2:  movl   $&_ZTVSt18__moneypunct_cacheIcLb0EE+0x8,(%eax)
086e8ca8 +0x06a8:  movl   $0x0,0x8(%eax)
086e8caf +0x06af:  movl   $0x0,0xc(%eax)
086e8cb6 +0x06b6:  movb   $0x0,0x10(%eax)
086e8cba +0x06ba:  movb   $0x0,0x11(%eax)
086e8cbe +0x06be:  movb   $0x0,0x12(%eax)
086e8cc2 +0x06c2:  movl   $0x0,0x14(%eax)
086e8cc9 +0x06c9:  movl   $0x0,0x18(%eax)
086e8cd0 +0x06d0:  movl   $0x0,0x1c(%eax)
086e8cd7 +0x06d7:  movl   $0x0,0x20(%eax)
086e8cde +0x06de:  movl   $0x0,0x24(%eax)
086e8ce5 +0x06e5:  movl   $0x0,0x28(%eax)
086e8cec +0x06ec:  movl   $0x0,0x2c(%eax)
086e8cf3 +0x06f3:  movb   $0x0,0x30(%eax)
086e8cf7 +0x06f7:  movb   $0x0,0x31(%eax)
086e8cfb +0x06fb:  movb   $0x0,0x32(%eax)
086e8cff +0x06ff:  movb   $0x0,0x33(%eax)
086e8d03 +0x0703:  movb   $0x0,0x34(%eax)
086e8d07 +0x0707:  movb   $0x0,0x35(%eax)
086e8d0b +0x070b:  movb   $0x0,0x36(%eax)
086e8d0f +0x070f:  movb   $0x0,0x37(%eax)
086e8d13 +0x0713:  movb   $0x0,0x43(%eax)
086e8d17 +0x0717:  pop    %ebp
086e8d18 +0x0718:  ret
086e8d19 +0x0719:  nop
086e8d1a +0x071a:  nop
086e8d1b +0x071b:  nop
086e8d1c +0x071c:  nop
086e8d1d +0x071d:  nop
086e8d1e +0x071e:  nop
086e8d1f +0x071f:  nop
086e8d20 +0x0720:  push   %ebp
086e8d21 +0x0721:  xor    %edx,%edx
086e8d23 +0x0723:  mov    %esp,%ebp
086e8d25 +0x0725:  mov    0x8(%ebp),%eax
086e8d28 +0x0728:  cmpl   $0x0,0xc(%ebp)
086e8d2c +0x072c:  setne  %dl
086e8d2f +0x072f:  mov    %edx,0x4(%eax)
086e8d32 +0x0732:  movl   $&_ZTVSt18__moneypunct_cacheIcLb1EE+0x8,(%eax)
086e8d38 +0x0738:  movl   $0x0,0x8(%eax)
086e8d3f +0x073f:  movl   $0x0,0xc(%eax)
086e8d46 +0x0746:  movb   $0x0,0x10(%eax)
086e8d4a +0x074a:  movb   $0x0,0x11(%eax)
086e8d4e +0x074e:  movb   $0x0,0x12(%eax)
086e8d52 +0x0752:  movl   $0x0,0x14(%eax)
086e8d59 +0x0759:  movl   $0x0,0x18(%eax)
086e8d60 +0x0760:  movl   $0x0,0x1c(%eax)
086e8d67 +0x0767:  movl   $0x0,0x20(%eax)
086e8d6e +0x076e:  movl   $0x0,0x24(%eax)
086e8d75 +0x0775:  movl   $0x0,0x28(%eax)
086e8d7c +0x077c:  movl   $0x0,0x2c(%eax)
086e8d83 +0x0783:  movb   $0x0,0x30(%eax)
086e8d87 +0x0787:  movb   $0x0,0x31(%eax)
086e8d8b +0x078b:  movb   $0x0,0x32(%eax)
086e8d8f +0x078f:  movb   $0x0,0x33(%eax)
086e8d93 +0x0793:  movb   $0x0,0x34(%eax)
086e8d97 +0x0797:  movb   $0x0,0x35(%eax)
086e8d9b +0x079b:  movb   $0x0,0x36(%eax)
086e8d9f +0x079f:  movb   $0x0,0x37(%eax)
086e8da3 +0x07a3:  movb   $0x0,0x43(%eax)
086e8da7 +0x07a7:  pop    %ebp
086e8da8 +0x07a8:  ret
086e8da9 +0x07a9:  nop
086e8daa +0x07aa:  nop
086e8dab +0x07ab:  nop
086e8dac +0x07ac:  nop
086e8dad +0x07ad:  nop
086e8dae +0x07ae:  nop
086e8daf +0x07af:  nop
086e8db0 +0x07b0:  push   %ebp
086e8db1 +0x07b1:  xor    %edx,%edx
086e8db3 +0x07b3:  mov    %esp,%ebp
086e8db5 +0x07b5:  mov    0x8(%ebp),%eax
086e8db8 +0x07b8:  cmpl   $0x0,0xc(%ebp)
086e8dbc +0x07bc:  setne  %dl
086e8dbf +0x07bf:  mov    %edx,0x4(%eax)
086e8dc2 +0x07c2:  movl   $&_ZTVSt9money_getIcSt19istreambuf_iteratorIcSt11char_traitsIcEEE+0x8,(%eax)
086e8dc8 +0x07c8:  pop    %ebp
086e8dc9 +0x07c9:  ret
086e8dca +0x07ca:  nop
086e8dcb +0x07cb:  nop
086e8dcc +0x07cc:  nop
086e8dcd +0x07cd:  nop
086e8dce +0x07ce:  nop
086e8dcf +0x07cf:  nop
086e8dd0 +0x07d0:  push   %ebp
086e8dd1 +0x07d1:  mov    %esp,%ebp
086e8dd3 +0x07d3:  sub    $0x48,%esp
086e8dd6 +0x07d6:  mov    0xc(%ebp),%eax
086e8dd9 +0x07d9:  mov    0x2c(%ebp),%ecx
086e8ddc +0x07dc:  mov    %ebx,-0xc(%ebp)
086e8ddf +0x07df:  mov    0x8(%ebp),%ebx
086e8de2 +0x07e2:  mov    %esi,-0x8(%ebp)
086e8de5 +0x07e5:  mov    0x18(%ebp),%esi
086e8de8 +0x07e8:  mov    %edi,-0x4(%ebp)
086e8deb +0x07eb:  mov    (%eax),%edx
086e8ded +0x07ed:  mov    %ecx,0x24(%esp)
086e8df1 +0x07f1:  mov    0x28(%ebp),%ecx
086e8df4 +0x07f4:  mov    0x1c(%ebp),%edi
086e8df7 +0x07f7:  mov    %esi,0x10(%esp)
086e8dfb +0x07fb:  mov    0x10(%ebp),%esi
086e8dfe +0x07fe:  mov    %eax,0x4(%esp)
086e8e02 +0x0802:  mov    %ecx,0x20(%esp)
086e8e06 +0x0806:  mov    0x24(%ebp),%ecx
086e8e09 +0x0809:  mov    %edi,0x14(%esp)
086e8e0d +0x080d:  mov    0x14(%ebp),%edi
086e8e10 +0x0810:  mov    %esi,0x8(%esp)
086e8e14 +0x0814:  mov    %ebx,(%esp)
086e8e17 +0x0817:  mov    %ecx,0x1c(%esp)
086e8e1b +0x081b:  movzbl 0x20(%ebp),%ecx
086e8e1f +0x081f:  mov    %edi,0xc(%esp)
086e8e23 +0x0823:  mov    %ecx,0x18(%esp)
086e8e27 +0x0827:  call   *0x8(%edx)
086e8e2a +0x082a:  mov    %ebx,%eax
086e8e2c +0x082c:  mov    -0x8(%ebp),%esi
086e8e2f +0x082f:  mov    -0xc(%ebp),%ebx
086e8e32 +0x0832:  mov    -0x4(%ebp),%edi
086e8e35 +0x0835:  sub    $0x4,%esp
086e8e38 +0x0838:  mov    %ebp,%esp
086e8e3a +0x083a:  pop    %ebp
086e8e3b +0x083b:  ret    $0x4
086e8e3e +0x083e:  nop
086e8e3f +0x083f:  nop
086e8e40 +0x0840:  push   %ebp
086e8e41 +0x0841:  mov    %esp,%ebp
086e8e43 +0x0843:  sub    $0x48,%esp
086e8e46 +0x0846:  mov    0xc(%ebp),%eax
086e8e49 +0x0849:  mov    0x2c(%ebp),%ecx
086e8e4c +0x084c:  mov    %ebx,-0xc(%ebp)
086e8e4f +0x084f:  mov    0x8(%ebp),%ebx
086e8e52 +0x0852:  mov    %esi,-0x8(%ebp)
086e8e55 +0x0855:  mov    0x18(%ebp),%esi
086e8e58 +0x0858:  mov    %edi,-0x4(%ebp)
086e8e5b +0x085b:  mov    (%eax),%edx
086e8e5d +0x085d:  mov    %ecx,0x24(%esp)
086e8e61 +0x0861:  mov    0x28(%ebp),%ecx
086e8e64 +0x0864:  mov    0x1c(%ebp),%edi
086e8e67 +0x0867:  mov    %esi,0x10(%esp)
086e8e6b +0x086b:  mov    0x10(%ebp),%esi
086e8e6e +0x086e:  mov    %eax,0x4(%esp)
086e8e72 +0x0872:  mov    %ecx,0x20(%esp)
086e8e76 +0x0876:  mov    0x24(%ebp),%ecx
086e8e79 +0x0879:  mov    %edi,0x14(%esp)
086e8e7d +0x087d:  mov    0x14(%ebp),%edi
086e8e80 +0x0880:  mov    %esi,0x8(%esp)
086e8e84 +0x0884:  mov    %ebx,(%esp)
086e8e87 +0x0887:  mov    %ecx,0x1c(%esp)
086e8e8b +0x088b:  movzbl 0x20(%ebp),%ecx
086e8e8f +0x088f:  mov    %edi,0xc(%esp)
086e8e93 +0x0893:  mov    %ecx,0x18(%esp)
086e8e97 +0x0897:  call   *0xc(%edx)
086e8e9a +0x089a:  mov    %ebx,%eax
086e8e9c +0x089c:  mov    -0x8(%ebp),%esi
086e8e9f +0x089f:  mov    -0xc(%ebp),%ebx
086e8ea2 +0x08a2:  mov    -0x4(%ebp),%edi
086e8ea5 +0x08a5:  sub    $0x4,%esp
086e8ea8 +0x08a8:  mov    %ebp,%esp
086e8eaa +0x08aa:  pop    %ebp
086e8eab +0x08ab:  ret    $0x4
086e8eae +0x08ae:  nop
086e8eaf +0x08af:  nop
086e8eb0 +0x08b0:  push   %ebp
086e8eb1 +0x08b1:  xor    %edx,%edx
086e8eb3 +0x08b3:  mov    %esp,%ebp
086e8eb5 +0x08b5:  mov    0x8(%ebp),%eax
086e8eb8 +0x08b8:  cmpl   $0x0,0xc(%ebp)
086e8ebc +0x08bc:  setne  %dl
086e8ebf +0x08bf:  mov    %edx,0x4(%eax)
086e8ec2 +0x08c2:  movl   $&_ZTVSt9money_putIcSt19ostreambuf_iteratorIcSt11char_traitsIcEEE+0x8,(%eax)
086e8ec8 +0x08c8:  pop    %ebp
086e8ec9 +0x08c9:  ret
086e8eca +0x08ca:  nop
086e8ecb +0x08cb:  nop
086e8ecc +0x08cc:  nop
086e8ecd +0x08cd:  nop
086e8ece +0x08ce:  nop
086e8ecf +0x08cf:  nop
086e8ed0 +0x08d0:  push   %ebp
086e8ed1 +0x08d1:  mov    %esp,%ebp
086e8ed3 +0x08d3:  sub    $0x48,%esp
086e8ed6 +0x08d6:  mov    0xc(%ebp),%eax
086e8ed9 +0x08d9:  movsbl 0x20(%ebp),%ecx
086e8edd +0x08dd:  mov    %ebx,-0xc(%ebp)
086e8ee0 +0x08e0:  mov    0x8(%ebp),%ebx
086e8ee3 +0x08e3:  mov    %esi,-0x8(%ebp)
086e8ee6 +0x08e6:  mov    0x10(%ebp),%esi
086e8ee9 +0x08e9:  mov    %edi,-0x4(%ebp)
086e8eec +0x08ec:  mov    (%eax),%edx
086e8eee +0x08ee:  mov    %ecx,0x18(%esp)
086e8ef2 +0x08f2:  mov    0x1c(%ebp),%ecx
086e8ef5 +0x08f5:  mov    0x14(%ebp),%edi
086e8ef8 +0x08f8:  fldt   0x24(%ebp)
086e8efb +0x08fb:  mov    %esi,0x8(%esp)
086e8eff +0x08ff:  mov    %ecx,0x14(%esp)
086e8f03 +0x0903:  movzbl 0x18(%ebp),%ecx
086e8f07 +0x0907:  mov    %edi,0xc(%esp)
086e8f0b +0x090b:  mov    %eax,0x4(%esp)
086e8f0f +0x090f:  mov    %ebx,(%esp)
086e8f12 +0x0912:  fstpt  0x1c(%esp)
086e8f16 +0x0916:  mov    %ecx,0x10(%esp)
086e8f1a +0x091a:  call   *0x8(%edx)
086e8f1d +0x091d:  mov    %ebx,%eax
086e8f1f +0x091f:  mov    -0x8(%ebp),%esi
086e8f22 +0x0922:  mov    -0xc(%ebp),%ebx
086e8f25 +0x0925:  mov    -0x4(%ebp),%edi
086e8f28 +0x0928:  sub    $0x4,%esp
086e8f2b +0x092b:  mov    %ebp,%esp
086e8f2d +0x092d:  pop    %ebp
086e8f2e +0x092e:  ret    $0x4
086e8f31 +0x0931:  nop
086e8f32 +0x0932:  nop
086e8f33 +0x0933:  nop
086e8f34 +0x0934:  nop
086e8f35 +0x0935:  nop
086e8f36 +0x0936:  nop
086e8f37 +0x0937:  nop
086e8f38 +0x0938:  nop
086e8f39 +0x0939:  nop
086e8f3a +0x093a:  nop
086e8f3b +0x093b:  nop
086e8f3c +0x093c:  nop
086e8f3d +0x093d:  nop
086e8f3e +0x093e:  nop
086e8f3f +0x093f:  nop
086e8f40 +0x0940:  push   %ebp
086e8f41 +0x0941:  mov    %esp,%ebp
086e8f43 +0x0943:  sub    $0x38,%esp
086e8f46 +0x0946:  mov    0xc(%ebp),%eax
086e8f49 +0x0949:  movsbl 0x20(%ebp),%ecx
086e8f4d +0x094d:  mov    %ebx,-0xc(%ebp)
086e8f50 +0x0950:  mov    0x8(%ebp),%ebx
086e8f53 +0x0953:  mov    %esi,-0x8(%ebp)
086e8f56 +0x0956:  mov    0x24(%ebp),%esi
086e8f59 +0x0959:  mov    %edi,-0x4(%ebp)
086e8f5c +0x095c:  mov    (%eax),%edx
086e8f5e +0x095e:  mov    %ecx,0x18(%esp)
086e8f62 +0x0962:  mov    0x1c(%ebp),%ecx
086e8f65 +0x0965:  mov    0x14(%ebp),%edi
086e8f68 +0x0968:  mov    %esi,0x1c(%esp)
086e8f6c +0x096c:  mov    0x10(%ebp),%esi
086e8f6f +0x096f:  mov    %eax,0x4(%esp)
086e8f73 +0x0973:  mov    %ecx,0x14(%esp)
086e8f77 +0x0977:  movzbl 0x18(%ebp),%ecx
086e8f7b +0x097b:  mov    %edi,0xc(%esp)
086e8f7f +0x097f:  mov    %esi,0x8(%esp)
086e8f83 +0x0983:  mov    %ebx,(%esp)
086e8f86 +0x0986:  mov    %ecx,0x10(%esp)
086e8f8a +0x098a:  call   *0xc(%edx)
086e8f8d +0x098d:  mov    %ebx,%eax
086e8f8f +0x098f:  mov    -0x8(%ebp),%esi
086e8f92 +0x0992:  mov    -0xc(%ebp),%ebx
086e8f95 +0x0995:  mov    -0x4(%ebp),%edi
086e8f98 +0x0998:  sub    $0x4,%esp
086e8f9b +0x099b:  mov    %ebp,%esp
086e8f9d +0x099d:  pop    %ebp
086e8f9e +0x099e:  ret    $0x4
086e8fa1 +0x09a1:  nop
086e8fa2 +0x09a2:  nop
086e8fa3 +0x09a3:  nop
086e8fa4 +0x09a4:  nop
086e8fa5 +0x09a5:  nop
086e8fa6 +0x09a6:  nop
086e8fa7 +0x09a7:  nop
086e8fa8 +0x09a8:  nop
086e8fa9 +0x09a9:  nop
086e8faa +0x09aa:  nop
086e8fab +0x09ab:  nop
086e8fac +0x09ac:  nop
086e8fad +0x09ad:  nop
086e8fae +0x09ae:  nop
086e8faf +0x09af:  nop
086e8fb0 +0x09b0:  push   %ebp
086e8fb1 +0x09b1:  mov    %esp,%ebp
086e8fb3 +0x09b3:  sub    $0x8,%esp
086e8fb6 +0x09b6:  mov    0x8(%ebp),%eax
086e8fb9 +0x09b9:  mov    (%eax),%edx
086e8fbb +0x09bb:  mov    0x8(%edx),%eax
086e8fbe +0x09be:  leave
086e8fbf +0x09bf:  jmp    *%eax
086e8fc1 +0x09c1:  nop
086e8fc2 +0x09c2:  nop
086e8fc3 +0x09c3:  nop
086e8fc4 +0x09c4:  nop
086e8fc5 +0x09c5:  nop
086e8fc6 +0x09c6:  nop
086e8fc7 +0x09c7:  nop
086e8fc8 +0x09c8:  nop
086e8fc9 +0x09c9:  nop
086e8fca +0x09ca:  nop
086e8fcb +0x09cb:  nop
086e8fcc +0x09cc:  nop
086e8fcd +0x09cd:  nop
086e8fce +0x09ce:  nop
086e8fcf +0x09cf:  nop
086e8fd0 +0x09d0:  push   %ebp
086e8fd1 +0x09d1:  mov    %esp,%ebp
086e8fd3 +0x09d3:  sub    $0x8,%esp
086e8fd6 +0x09d6:  mov    0x8(%ebp),%eax
086e8fd9 +0x09d9:  mov    (%eax),%edx
086e8fdb +0x09db:  mov    0xc(%edx),%eax
086e8fde +0x09de:  leave
086e8fdf +0x09df:  jmp    *%eax
086e8fe1 +0x09e1:  nop
086e8fe2 +0x09e2:  nop
086e8fe3 +0x09e3:  nop
086e8fe4 +0x09e4:  nop
086e8fe5 +0x09e5:  nop
086e8fe6 +0x09e6:  nop
086e8fe7 +0x09e7:  nop
086e8fe8 +0x09e8:  nop
086e8fe9 +0x09e9:  nop
086e8fea +0x09ea:  nop
086e8feb +0x09eb:  nop
086e8fec +0x09ec:  nop
086e8fed +0x09ed:  nop
086e8fee +0x09ee:  nop
086e8fef +0x09ef:  nop
086e8ff0 +0x09f0:  push   %ebp
086e8ff1 +0x09f1:  mov    %esp,%ebp
086e8ff3 +0x09f3:  push   %ebx
086e8ff4 +0x09f4:  sub    $0x14,%esp
086e8ff7 +0x09f7:  mov    0xc(%ebp),%eax
086e8ffa +0x09fa:  mov    0x8(%ebp),%ebx
086e8ffd +0x09fd:  mov    (%eax),%edx
086e8fff +0x09ff:  mov    %eax,0x4(%esp)
086e9003 +0x0a03:  mov    %ebx,(%esp)
086e9006 +0x0a06:  call   *0x10(%edx)
086e9009 +0x0a09:  mov    %ebx,%eax
086e900b +0x0a0b:  mov    -0x4(%ebp),%ebx
086e900e +0x0a0e:  sub    $0x4,%esp
086e9011 +0x0a11:  leave
086e9012 +0x0a12:  ret    $0x4
086e9015 +0x0a15:  nop
086e9016 +0x0a16:  nop
086e9017 +0x0a17:  nop
086e9018 +0x0a18:  nop
086e9019 +0x0a19:  nop
086e901a +0x0a1a:  nop
086e901b +0x0a1b:  nop
086e901c +0x0a1c:  nop
086e901d +0x0a1d:  nop
086e901e +0x0a1e:  nop
086e901f +0x0a1f:  nop
086e9020 +0x0a20:  push   %ebp
086e9021 +0x0a21:  mov    %esp,%ebp
086e9023 +0x0a23:  push   %ebx
086e9024 +0x0a24:  sub    $0x14,%esp
086e9027 +0x0a27:  mov    0xc(%ebp),%eax
086e902a +0x0a2a:  mov    0x8(%ebp),%ebx
086e902d +0x0a2d:  mov    (%eax),%edx
086e902f +0x0a2f:  mov    %eax,0x4(%esp)
086e9033 +0x0a33:  mov    %ebx,(%esp)
086e9036 +0x0a36:  call   *0x14(%edx)
086e9039 +0x0a39:  mov    %ebx,%eax
086e903b +0x0a3b:  mov    -0x4(%ebp),%ebx
086e903e +0x0a3e:  sub    $0x4,%esp
086e9041 +0x0a41:  leave
086e9042 +0x0a42:  ret    $0x4
086e9045 +0x0a45:  nop
086e9046 +0x0a46:  nop
086e9047 +0x0a47:  nop
086e9048 +0x0a48:  nop
086e9049 +0x0a49:  nop
086e904a +0x0a4a:  nop
086e904b +0x0a4b:  nop
086e904c +0x0a4c:  nop
086e904d +0x0a4d:  nop
086e904e +0x0a4e:  nop
086e904f +0x0a4f:  nop
086e9050 +0x0a50:  push   %ebp
086e9051 +0x0a51:  mov    %esp,%ebp
086e9053 +0x0a53:  push   %ebx
086e9054 +0x0a54:  sub    $0x14,%esp
086e9057 +0x0a57:  mov    0xc(%ebp),%eax
086e905a +0x0a5a:  mov    0x8(%ebp),%ebx
086e905d +0x0a5d:  mov    (%eax),%edx
086e905f +0x0a5f:  mov    %eax,0x4(%esp)
086e9063 +0x0a63:  mov    %ebx,(%esp)
086e9066 +0x0a66:  call   *0x18(%edx)
086e9069 +0x0a69:  mov    %ebx,%eax
086e906b +0x0a6b:  mov    -0x4(%ebp),%ebx
086e906e +0x0a6e:  sub    $0x4,%esp
086e9071 +0x0a71:  leave
086e9072 +0x0a72:  ret    $0x4
086e9075 +0x0a75:  nop
086e9076 +0x0a76:  nop
086e9077 +0x0a77:  nop
086e9078 +0x0a78:  nop
086e9079 +0x0a79:  nop
086e907a +0x0a7a:  nop
086e907b +0x0a7b:  nop
086e907c +0x0a7c:  nop
086e907d +0x0a7d:  nop
086e907e +0x0a7e:  nop
086e907f +0x0a7f:  nop
086e9080 +0x0a80:  push   %ebp
086e9081 +0x0a81:  mov    %esp,%ebp
086e9083 +0x0a83:  mov    0x8(%ebp),%eax
086e9086 +0x0a86:  pop    %ebp
086e9087 +0x0a87:  mov    0x8(%eax),%eax
086e908a +0x0a8a:  movzbl 0x24(%eax),%eax
086e908e +0x0a8e:  ret
086e908f +0x0a8f:  nop
086e9090 +0x0a90:  push   %ebp
086e9091 +0x0a91:  mov    %esp,%ebp
086e9093 +0x0a93:  mov    0x8(%ebp),%eax
086e9096 +0x0a96:  pop    %ebp
086e9097 +0x0a97:  mov    0x8(%eax),%eax
086e909a +0x0a9a:  movzbl 0x25(%eax),%eax
086e909e +0x0a9e:  ret
086e909f +0x0a9f:  nop
086e90a0 +0x0aa0:  push   %ebp
086e90a1 +0x0aa1:  xor    %edx,%edx
086e90a3 +0x0aa3:  mov    %esp,%ebp
086e90a5 +0x0aa5:  mov    0x8(%ebp),%eax
086e90a8 +0x0aa8:  cmpl   $0x0,0xc(%ebp)
086e90ac +0x0aac:  setne  %dl
086e90af +0x0aaf:  mov    %edx,0x4(%eax)
086e90b2 +0x0ab2:  movl   $&_ZTVSt16__numpunct_cacheIcE+0x8,(%eax)
086e90b8 +0x0ab8:  movl   $0x0,0x8(%eax)
086e90bf +0x0abf:  movl   $0x0,0xc(%eax)
086e90c6 +0x0ac6:  movb   $0x0,0x10(%eax)
086e90ca +0x0aca:  movl   $0x0,0x14(%eax)
086e90d1 +0x0ad1:  movl   $0x0,0x18(%eax)
086e90d8 +0x0ad8:  movl   $0x0,0x1c(%eax)
086e90df +0x0adf:  movl   $0x0,0x20(%eax)
086e90e6 +0x0ae6:  movb   $0x0,0x24(%eax)
086e90ea +0x0aea:  movb   $0x0,0x25(%eax)
086e90ee +0x0aee:  movb   $0x0,0x64(%eax)
086e90f2 +0x0af2:  pop    %ebp
086e90f3 +0x0af3:  ret
086e90f4 +0x0af4:  nop
086e90f5 +0x0af5:  nop
086e90f6 +0x0af6:  nop
086e90f7 +0x0af7:  nop
086e90f8 +0x0af8:  nop
086e90f9 +0x0af9:  nop
086e90fa +0x0afa:  nop
086e90fb +0x0afb:  nop
086e90fc +0x0afc:  nop
086e90fd +0x0afd:  nop
086e90fe +0x0afe:  nop
086e90ff +0x0aff:  nop
086e9100 +0x0b00:  push   %ebp
086e9101 +0x0b01:  xor    %edx,%edx
086e9103 +0x0b03:  mov    %esp,%ebp
086e9105 +0x0b05:  mov    0x8(%ebp),%eax
086e9108 +0x0b08:  cmpl   $0x0,0xc(%ebp)
086e910c +0x0b0c:  setne  %dl
086e910f +0x0b0f:  mov    %edx,0x4(%eax)
086e9112 +0x0b12:  movl   $&_ZTVSt7num_getIcSt19istreambuf_iteratorIcSt11char_traitsIcEEE+0x8,(%eax)
086e9118 +0x0b18:  pop    %ebp
086e9119 +0x0b19:  ret
086e911a +0x0b1a:  nop
086e911b +0x0b1b:  nop
086e911c +0x0b1c:  nop
086e911d +0x0b1d:  nop
086e911e +0x0b1e:  nop
086e911f +0x0b1f:  nop
086e9120 +0x0b20:  push   %ebp
086e9121 +0x0b21:  mov    %esp,%ebp
086e9123 +0x0b23:  sub    $0x48,%esp
086e9126 +0x0b26:  mov    0xc(%ebp),%eax
086e9129 +0x0b29:  mov    0x28(%ebp),%ecx
086e912c +0x0b2c:  mov    %ebx,-0xc(%ebp)
086e912f +0x0b2f:  mov    0x8(%ebp),%ebx
086e9132 +0x0b32:  mov    %esi,-0x8(%ebp)
086e9135 +0x0b35:  mov    0x18(%ebp),%esi
086e9138 +0x0b38:  mov    %edi,-0x4(%ebp)
086e913b +0x0b3b:  mov    0x1c(%ebp),%edi
086e913e +0x0b3e:  mov    (%eax),%edx
086e9140 +0x0b40:  mov    %ecx,0x20(%esp)
086e9144 +0x0b44:  mov    0x24(%ebp),%ecx
086e9147 +0x0b47:  mov    %esi,0x10(%esp)
086e914b +0x0b4b:  mov    0x10(%ebp),%esi
086e914e +0x0b4e:  mov    %edi,0x14(%esp)
086e9152 +0x0b52:  mov    0x14(%ebp),%edi
086e9155 +0x0b55:  mov    %eax,0x4(%esp)
086e9159 +0x0b59:  mov    %ecx,0x1c(%esp)
086e915d +0x0b5d:  mov    0x20(%ebp),%ecx
086e9160 +0x0b60:  mov    %esi,0x8(%esp)
086e9164 +0x0b64:  mov    %edi,0xc(%esp)
086e9168 +0x0b68:  mov    %ebx,(%esp)
086e916b +0x0b6b:  mov    %ecx,0x18(%esp)
086e916f +0x0b6f:  call   *0x8(%edx)
086e9172 +0x0b72:  mov    %ebx,%eax
086e9174 +0x0b74:  mov    -0x8(%ebp),%esi
086e9177 +0x0b77:  mov    -0xc(%ebp),%ebx
086e917a +0x0b7a:  mov    -0x4(%ebp),%edi
086e917d +0x0b7d:  sub    $0x4,%esp
086e9180 +0x0b80:  mov    %ebp,%esp
086e9182 +0x0b82:  pop    %ebp
086e9183 +0x0b83:  ret    $0x4
086e9186 +0x0b86:  nop
086e9187 +0x0b87:  nop
086e9188 +0x0b88:  nop
086e9189 +0x0b89:  nop
086e918a +0x0b8a:  nop
086e918b +0x0b8b:  nop
086e918c +0x0b8c:  nop
086e918d +0x0b8d:  nop
086e918e +0x0b8e:  nop
086e918f +0x0b8f:  nop
086e9190 +0x0b90:  push   %ebp
086e9191 +0x0b91:  mov    %esp,%ebp
086e9193 +0x0b93:  sub    $0x48,%esp
086e9196 +0x0b96:  mov    0xc(%ebp),%eax
086e9199 +0x0b99:  mov    0x28(%ebp),%ecx
086e919c +0x0b9c:  mov    %ebx,-0xc(%ebp)
086e919f +0x0b9f:  mov    0x8(%ebp),%ebx
086e91a2 +0x0ba2:  mov    %esi,-0x8(%ebp)
086e91a5 +0x0ba5:  mov    0x18(%ebp),%esi
086e91a8 +0x0ba8:  mov    %edi,-0x4(%ebp)
086e91ab +0x0bab:  mov    0x1c(%ebp),%edi
086e91ae +0x0bae:  mov    (%eax),%edx
086e91b0 +0x0bb0:  mov    %ecx,0x20(%esp)
086e91b4 +0x0bb4:  mov    0x24(%ebp),%ecx
086e91b7 +0x0bb7:  mov    %esi,0x10(%esp)
086e91bb +0x0bbb:  mov    0x10(%ebp),%esi
086e91be +0x0bbe:  mov    %edi,0x14(%esp)
086e91c2 +0x0bc2:  mov    0x14(%ebp),%edi
086e91c5 +0x0bc5:  mov    %eax,0x4(%esp)
086e91c9 +0x0bc9:  mov    %ecx,0x1c(%esp)
086e91cd +0x0bcd:  mov    0x20(%ebp),%ecx
086e91d0 +0x0bd0:  mov    %esi,0x8(%esp)
086e91d4 +0x0bd4:  mov    %edi,0xc(%esp)
086e91d8 +0x0bd8:  mov    %ebx,(%esp)
086e91db +0x0bdb:  mov    %ecx,0x18(%esp)
086e91df +0x0bdf:  call   *0xc(%edx)
086e91e2 +0x0be2:  mov    %ebx,%eax
086e91e4 +0x0be4:  mov    -0x8(%ebp),%esi
086e91e7 +0x0be7:  mov    -0xc(%ebp),%ebx
086e91ea +0x0bea:  mov    -0x4(%ebp),%edi
086e91ed +0x0bed:  sub    $0x4,%esp
086e91f0 +0x0bf0:  mov    %ebp,%esp
086e91f2 +0x0bf2:  pop    %ebp
086e91f3 +0x0bf3:  ret    $0x4
086e91f6 +0x0bf6:  nop
086e91f7 +0x0bf7:  nop
086e91f8 +0x0bf8:  nop
086e91f9 +0x0bf9:  nop
086e91fa +0x0bfa:  nop
086e91fb +0x0bfb:  nop
086e91fc +0x0bfc:  nop
086e91fd +0x0bfd:  nop
086e91fe +0x0bfe:  nop
086e91ff +0x0bff:  nop
086e9200 +0x0c00:  push   %ebp
086e9201 +0x0c01:  mov    %esp,%ebp
086e9203 +0x0c03:  sub    $0x48,%esp
086e9206 +0x0c06:  mov    0xc(%ebp),%eax
086e9209 +0x0c09:  mov    0x28(%ebp),%ecx
086e920c +0x0c0c:  mov    %ebx,-0xc(%ebp)
086e920f +0x0c0f:  mov    0x8(%ebp),%ebx
086e9212 +0x0c12:  mov    %esi,-0x8(%ebp)
086e9215 +0x0c15:  mov    0x18(%ebp),%esi
086e9218 +0x0c18:  mov    %edi,-0x4(%ebp)
086e921b +0x0c1b:  mov    0x1c(%ebp),%edi
086e921e +0x0c1e:  mov    (%eax),%edx
086e9220 +0x0c20:  mov    %ecx,0x20(%esp)
086e9224 +0x0c24:  mov    0x24(%ebp),%ecx
086e9227 +0x0c27:  mov    %esi,0x10(%esp)
086e922b +0x0c2b:  mov    0x10(%ebp),%esi
086e922e +0x0c2e:  mov    %edi,0x14(%esp)
086e9232 +0x0c32:  mov    0x14(%ebp),%edi
086e9235 +0x0c35:  mov    %eax,0x4(%esp)
086e9239 +0x0c39:  mov    %ecx,0x1c(%esp)
086e923d +0x0c3d:  mov    0x20(%ebp),%ecx
086e9240 +0x0c40:  mov    %esi,0x8(%esp)
086e9244 +0x0c44:  mov    %edi,0xc(%esp)
086e9248 +0x0c48:  mov    %ebx,(%esp)
086e924b +0x0c4b:  mov    %ecx,0x18(%esp)
086e924f +0x0c4f:  call   *0x10(%edx)
086e9252 +0x0c52:  mov    %ebx,%eax
086e9254 +0x0c54:  mov    -0x8(%ebp),%esi
086e9257 +0x0c57:  mov    -0xc(%ebp),%ebx
086e925a +0x0c5a:  mov    -0x4(%ebp),%edi
086e925d +0x0c5d:  sub    $0x4,%esp
086e9260 +0x0c60:  mov    %ebp,%esp
086e9262 +0x0c62:  pop    %ebp
086e9263 +0x0c63:  ret    $0x4
086e9266 +0x0c66:  nop
086e9267 +0x0c67:  nop
086e9268 +0x0c68:  nop
086e9269 +0x0c69:  nop
086e926a +0x0c6a:  nop
086e926b +0x0c6b:  nop
086e926c +0x0c6c:  nop
086e926d +0x0c6d:  nop
086e926e +0x0c6e:  nop
086e926f +0x0c6f:  nop
086e9270 +0x0c70:  push   %ebp
086e9271 +0x0c71:  mov    %esp,%ebp
086e9273 +0x0c73:  sub    $0x48,%esp
086e9276 +0x0c76:  mov    0xc(%ebp),%eax
086e9279 +0x0c79:  mov    0x28(%ebp),%ecx
086e927c +0x0c7c:  mov    %ebx,-0xc(%ebp)
086e927f +0x0c7f:  mov    0x8(%ebp),%ebx
086e9282 +0x0c82:  mov    %esi,-0x8(%ebp)
086e9285 +0x0c85:  mov    0x18(%ebp),%esi
086e9288 +0x0c88:  mov    %edi,-0x4(%ebp)
086e928b +0x0c8b:  mov    0x1c(%ebp),%edi
086e928e +0x0c8e:  mov    (%eax),%edx
086e9290 +0x0c90:  mov    %ecx,0x20(%esp)
086e9294 +0x0c94:  mov    0x24(%ebp),%ecx
086e9297 +0x0c97:  mov    %esi,0x10(%esp)
086e929b +0x0c9b:  mov    0x10(%ebp),%esi
086e929e +0x0c9e:  mov    %edi,0x14(%esp)
086e92a2 +0x0ca2:  mov    0x14(%ebp),%edi
086e92a5 +0x0ca5:  mov    %eax,0x4(%esp)
086e92a9 +0x0ca9:  mov    %ecx,0x1c(%esp)
086e92ad +0x0cad:  mov    0x20(%ebp),%ecx
086e92b0 +0x0cb0:  mov    %esi,0x8(%esp)
086e92b4 +0x0cb4:  mov    %edi,0xc(%esp)
086e92b8 +0x0cb8:  mov    %ebx,(%esp)
086e92bb +0x0cbb:  mov    %ecx,0x18(%esp)
086e92bf +0x0cbf:  call   *0x14(%edx)
086e92c2 +0x0cc2:  mov    %ebx,%eax
086e92c4 +0x0cc4:  mov    -0x8(%ebp),%esi
086e92c7 +0x0cc7:  mov    -0xc(%ebp),%ebx
086e92ca +0x0cca:  mov    -0x4(%ebp),%edi
086e92cd +0x0ccd:  sub    $0x4,%esp
086e92d0 +0x0cd0:  mov    %ebp,%esp
086e92d2 +0x0cd2:  pop    %ebp
086e92d3 +0x0cd3:  ret    $0x4
086e92d6 +0x0cd6:  nop
086e92d7 +0x0cd7:  nop
086e92d8 +0x0cd8:  nop
086e92d9 +0x0cd9:  nop
086e92da +0x0cda:  nop
086e92db +0x0cdb:  nop
086e92dc +0x0cdc:  nop
086e92dd +0x0cdd:  nop
086e92de +0x0cde:  nop
086e92df +0x0cdf:  nop
086e92e0 +0x0ce0:  push   %ebp
086e92e1 +0x0ce1:  mov    %esp,%ebp
086e92e3 +0x0ce3:  sub    $0x48,%esp
086e92e6 +0x0ce6:  mov    0xc(%ebp),%eax
086e92e9 +0x0ce9:  mov    0x28(%ebp),%ecx
086e92ec +0x0cec:  mov    %ebx,-0xc(%ebp)
086e92ef +0x0cef:  mov    0x8(%ebp),%ebx
086e92f2 +0x0cf2:  mov    %esi,-0x8(%ebp)
086e92f5 +0x0cf5:  mov    0x18(%ebp),%esi
086e92f8 +0x0cf8:  mov    %edi,-0x4(%ebp)
086e92fb +0x0cfb:  mov    0x1c(%ebp),%edi
086e92fe +0x0cfe:  mov    (%eax),%edx
086e9300 +0x0d00:  mov    %ecx,0x20(%esp)
086e9304 +0x0d04:  mov    0x24(%ebp),%ecx
086e9307 +0x0d07:  mov    %esi,0x10(%esp)
086e930b +0x0d0b:  mov    0x10(%ebp),%esi
086e930e +0x0d0e:  mov    %edi,0x14(%esp)
086e9312 +0x0d12:  mov    0x14(%ebp),%edi
086e9315 +0x0d15:  mov    %eax,0x4(%esp)
086e9319 +0x0d19:  mov    %ecx,0x1c(%esp)
086e931d +0x0d1d:  mov    0x20(%ebp),%ecx
086e9320 +0x0d20:  mov    %esi,0x8(%esp)
086e9324 +0x0d24:  mov    %edi,0xc(%esp)
086e9328 +0x0d28:  mov    %ebx,(%esp)
086e932b +0x0d2b:  mov    %ecx,0x18(%esp)
086e932f +0x0d2f:  call   *0x18(%edx)
086e9332 +0x0d32:  mov    %ebx,%eax
086e9334 +0x0d34:  mov    -0x8(%ebp),%esi
086e9337 +0x0d37:  mov    -0xc(%ebp),%ebx
086e933a +0x0d3a:  mov    -0x4(%ebp),%edi
086e933d +0x0d3d:  sub    $0x4,%esp
086e9340 +0x0d40:  mov    %ebp,%esp
086e9342 +0x0d42:  pop    %ebp
086e9343 +0x0d43:  ret    $0x4
086e9346 +0x0d46:  nop
086e9347 +0x0d47:  nop
086e9348 +0x0d48:  nop
086e9349 +0x0d49:  nop
086e934a +0x0d4a:  nop
086e934b +0x0d4b:  nop
086e934c +0x0d4c:  nop
086e934d +0x0d4d:  nop
086e934e +0x0d4e:  nop
086e934f +0x0d4f:  nop
086e9350 +0x0d50:  push   %ebp
086e9351 +0x0d51:  mov    %esp,%ebp
086e9353 +0x0d53:  sub    $0x48,%esp
086e9356 +0x0d56:  mov    0xc(%ebp),%eax
086e9359 +0x0d59:  mov    0x28(%ebp),%ecx
086e935c +0x0d5c:  mov    %ebx,-0xc(%ebp)
086e935f +0x0d5f:  mov    0x8(%ebp),%ebx
086e9362 +0x0d62:  mov    %esi,-0x8(%ebp)
086e9365 +0x0d65:  mov    0x18(%ebp),%esi
086e9368 +0x0d68:  mov    %edi,-0x4(%ebp)
086e936b +0x0d6b:  mov    0x1c(%ebp),%edi
086e936e +0x0d6e:  mov    (%eax),%edx
086e9370 +0x0d70:  mov    %ecx,0x20(%esp)
086e9374 +0x0d74:  mov    0x24(%ebp),%ecx
086e9377 +0x0d77:  mov    %esi,0x10(%esp)
086e937b +0x0d7b:  mov    0x10(%ebp),%esi
086e937e +0x0d7e:  mov    %edi,0x14(%esp)
086e9382 +0x0d82:  mov    0x14(%ebp),%edi
086e9385 +0x0d85:  mov    %eax,0x4(%esp)
086e9389 +0x0d89:  mov    %ecx,0x1c(%esp)
086e938d +0x0d8d:  mov    0x20(%ebp),%ecx
086e9390 +0x0d90:  mov    %esi,0x8(%esp)
086e9394 +0x0d94:  mov    %edi,0xc(%esp)
086e9398 +0x0d98:  mov    %ebx,(%esp)
086e939b +0x0d9b:  mov    %ecx,0x18(%esp)
086e939f +0x0d9f:  call   *0x1c(%edx)
086e93a2 +0x0da2:  mov    %ebx,%eax
086e93a4 +0x0da4:  mov    -0x8(%ebp),%esi
086e93a7 +0x0da7:  mov    -0xc(%ebp),%ebx
086e93aa +0x0daa:  mov    -0x4(%ebp),%edi
086e93ad +0x0dad:  sub    $0x4,%esp
086e93b0 +0x0db0:  mov    %ebp,%esp
086e93b2 +0x0db2:  pop    %ebp
086e93b3 +0x0db3:  ret    $0x4
086e93b6 +0x0db6:  nop
086e93b7 +0x0db7:  nop
086e93b8 +0x0db8:  nop
086e93b9 +0x0db9:  nop
086e93ba +0x0dba:  nop
086e93bb +0x0dbb:  nop
086e93bc +0x0dbc:  nop
086e93bd +0x0dbd:  nop
086e93be +0x0dbe:  nop
086e93bf +0x0dbf:  nop
086e93c0 +0x0dc0:  push   %ebp
086e93c1 +0x0dc1:  mov    %esp,%ebp
086e93c3 +0x0dc3:  sub    $0x48,%esp
086e93c6 +0x0dc6:  mov    0xc(%ebp),%eax
086e93c9 +0x0dc9:  mov    0x28(%ebp),%ecx
086e93cc +0x0dcc:  mov    %ebx,-0xc(%ebp)
086e93cf +0x0dcf:  mov    0x8(%ebp),%ebx
086e93d2 +0x0dd2:  mov    %esi,-0x8(%ebp)
086e93d5 +0x0dd5:  mov    0x18(%ebp),%esi
086e93d8 +0x0dd8:  mov    %edi,-0x4(%ebp)
086e93db +0x0ddb:  mov    0x1c(%ebp),%edi
086e93de +0x0dde:  mov    (%eax),%edx
086e93e0 +0x0de0:  mov    %ecx,0x20(%esp)
086e93e4 +0x0de4:  mov    0x24(%ebp),%ecx
086e93e7 +0x0de7:  mov    %esi,0x10(%esp)
086e93eb +0x0deb:  mov    0x10(%ebp),%esi
086e93ee +0x0dee:  mov    %edi,0x14(%esp)
086e93f2 +0x0df2:  mov    0x14(%ebp),%edi
086e93f5 +0x0df5:  mov    %eax,0x4(%esp)
086e93f9 +0x0df9:  mov    %ecx,0x1c(%esp)
086e93fd +0x0dfd:  mov    0x20(%ebp),%ecx
086e9400 +0x0e00:  mov    %esi,0x8(%esp)
086e9404 +0x0e04:  mov    %edi,0xc(%esp)
086e9408 +0x0e08:  mov    %ebx,(%esp)
086e940b +0x0e0b:  mov    %ecx,0x18(%esp)
086e940f +0x0e0f:  call   *0x20(%edx)
086e9412 +0x0e12:  mov    %ebx,%eax
086e9414 +0x0e14:  mov    -0x8(%ebp),%esi
086e9417 +0x0e17:  mov    -0xc(%ebp),%ebx
086e941a +0x0e1a:  mov    -0x4(%ebp),%edi
086e941d +0x0e1d:  sub    $0x4,%esp
086e9420 +0x0e20:  mov    %ebp,%esp
086e9422 +0x0e22:  pop    %ebp
086e9423 +0x0e23:  ret    $0x4
086e9426 +0x0e26:  nop
086e9427 +0x0e27:  nop
086e9428 +0x0e28:  nop
086e9429 +0x0e29:  nop
086e942a +0x0e2a:  nop
086e942b +0x0e2b:  nop
086e942c +0x0e2c:  nop
086e942d +0x0e2d:  nop
086e942e +0x0e2e:  nop
086e942f +0x0e2f:  nop
086e9430 +0x0e30:  push   %ebp
086e9431 +0x0e31:  mov    %esp,%ebp
086e9433 +0x0e33:  sub    $0x48,%esp
086e9436 +0x0e36:  mov    0xc(%ebp),%eax
086e9439 +0x0e39:  mov    0x28(%ebp),%ecx
086e943c +0x0e3c:  mov    %ebx,-0xc(%ebp)
086e943f +0x0e3f:  mov    0x8(%ebp),%ebx
086e9442 +0x0e42:  mov    %esi,-0x8(%ebp)
086e9445 +0x0e45:  mov    0x18(%ebp),%esi
086e9448 +0x0e48:  mov    %edi,-0x4(%ebp)
086e944b +0x0e4b:  mov    0x1c(%ebp),%edi
086e944e +0x0e4e:  mov    (%eax),%edx
086e9450 +0x0e50:  mov    %ecx,0x20(%esp)
086e9454 +0x0e54:  mov    0x24(%ebp),%ecx
086e9457 +0x0e57:  mov    %esi,0x10(%esp)
086e945b +0x0e5b:  mov    0x10(%ebp),%esi
086e945e +0x0e5e:  mov    %edi,0x14(%esp)
086e9462 +0x0e62:  mov    0x14(%ebp),%edi
086e9465 +0x0e65:  mov    %eax,0x4(%esp)
086e9469 +0x0e69:  mov    %ecx,0x1c(%esp)
086e946d +0x0e6d:  mov    0x20(%ebp),%ecx
086e9470 +0x0e70:  mov    %esi,0x8(%esp)
086e9474 +0x0e74:  mov    %edi,0xc(%esp)
086e9478 +0x0e78:  mov    %ebx,(%esp)
086e947b +0x0e7b:  mov    %ecx,0x18(%esp)
086e947f +0x0e7f:  call   *0x24(%edx)
086e9482 +0x0e82:  mov    %ebx,%eax
086e9484 +0x0e84:  mov    -0x8(%ebp),%esi
086e9487 +0x0e87:  mov    -0xc(%ebp),%ebx
086e948a +0x0e8a:  mov    -0x4(%ebp),%edi
086e948d +0x0e8d:  sub    $0x4,%esp
086e9490 +0x0e90:  mov    %ebp,%esp
086e9492 +0x0e92:  pop    %ebp
086e9493 +0x0e93:  ret    $0x4
086e9496 +0x0e96:  nop
086e9497 +0x0e97:  nop
086e9498 +0x0e98:  nop
086e9499 +0x0e99:  nop
086e949a +0x0e9a:  nop
086e949b +0x0e9b:  nop
086e949c +0x0e9c:  nop
086e949d +0x0e9d:  nop
086e949e +0x0e9e:  nop
086e949f +0x0e9f:  nop
086e94a0 +0x0ea0:  push   %ebp
086e94a1 +0x0ea1:  mov    %esp,%ebp
086e94a3 +0x0ea3:  sub    $0x48,%esp
086e94a6 +0x0ea6:  mov    0xc(%ebp),%eax
086e94a9 +0x0ea9:  mov    0x28(%ebp),%ecx
086e94ac +0x0eac:  mov    %ebx,-0xc(%ebp)
086e94af +0x0eaf:  mov    0x8(%ebp),%ebx
086e94b2 +0x0eb2:  mov    %esi,-0x8(%ebp)
086e94b5 +0x0eb5:  mov    0x18(%ebp),%esi
086e94b8 +0x0eb8:  mov    %edi,-0x4(%ebp)
086e94bb +0x0ebb:  mov    0x1c(%ebp),%edi
086e94be +0x0ebe:  mov    (%eax),%edx
086e94c0 +0x0ec0:  mov    %ecx,0x20(%esp)
086e94c4 +0x0ec4:  mov    0x24(%ebp),%ecx
086e94c7 +0x0ec7:  mov    %esi,0x10(%esp)
086e94cb +0x0ecb:  mov    0x10(%ebp),%esi
086e94ce +0x0ece:  mov    %edi,0x14(%esp)
086e94d2 +0x0ed2:  mov    0x14(%ebp),%edi
086e94d5 +0x0ed5:  mov    %eax,0x4(%esp)
086e94d9 +0x0ed9:  mov    %ecx,0x1c(%esp)
086e94dd +0x0edd:  mov    0x20(%ebp),%ecx
086e94e0 +0x0ee0:  mov    %esi,0x8(%esp)
086e94e4 +0x0ee4:  mov    %edi,0xc(%esp)
086e94e8 +0x0ee8:  mov    %ebx,(%esp)
086e94eb +0x0eeb:  mov    %ecx,0x18(%esp)
086e94ef +0x0eef:  call   *0x28(%edx)
086e94f2 +0x0ef2:  mov    %ebx,%eax
086e94f4 +0x0ef4:  mov    -0x8(%ebp),%esi
086e94f7 +0x0ef7:  mov    -0xc(%ebp),%ebx
086e94fa +0x0efa:  mov    -0x4(%ebp),%edi
086e94fd +0x0efd:  sub    $0x4,%esp
086e9500 +0x0f00:  mov    %ebp,%esp
086e9502 +0x0f02:  pop    %ebp
086e9503 +0x0f03:  ret    $0x4
086e9506 +0x0f06:  nop
086e9507 +0x0f07:  nop
086e9508 +0x0f08:  nop
086e9509 +0x0f09:  nop
086e950a +0x0f0a:  nop
086e950b +0x0f0b:  nop
086e950c +0x0f0c:  nop
086e950d +0x0f0d:  nop
086e950e +0x0f0e:  nop
086e950f +0x0f0f:  nop
086e9510 +0x0f10:  push   %ebp
086e9511 +0x0f11:  mov    %esp,%ebp
086e9513 +0x0f13:  sub    $0x48,%esp
086e9516 +0x0f16:  mov    0xc(%ebp),%eax
086e9519 +0x0f19:  mov    0x28(%ebp),%ecx
086e951c +0x0f1c:  mov    %ebx,-0xc(%ebp)
086e951f +0x0f1f:  mov    0x8(%ebp),%ebx
086e9522 +0x0f22:  mov    %esi,-0x8(%ebp)
086e9525 +0x0f25:  mov    0x18(%ebp),%esi
086e9528 +0x0f28:  mov    %edi,-0x4(%ebp)
086e952b +0x0f2b:  mov    0x1c(%ebp),%edi
086e952e +0x0f2e:  mov    (%eax),%edx
086e9530 +0x0f30:  mov    %ecx,0x20(%esp)
086e9534 +0x0f34:  mov    0x24(%ebp),%ecx
086e9537 +0x0f37:  mov    %esi,0x10(%esp)
086e953b +0x0f3b:  mov    0x10(%ebp),%esi
086e953e +0x0f3e:  mov    %edi,0x14(%esp)
086e9542 +0x0f42:  mov    0x14(%ebp),%edi
086e9545 +0x0f45:  mov    %eax,0x4(%esp)
086e9549 +0x0f49:  mov    %ecx,0x1c(%esp)
086e954d +0x0f4d:  mov    0x20(%ebp),%ecx
086e9550 +0x0f50:  mov    %esi,0x8(%esp)
086e9554 +0x0f54:  mov    %edi,0xc(%esp)
086e9558 +0x0f58:  mov    %ebx,(%esp)
086e955b +0x0f5b:  mov    %ecx,0x18(%esp)
086e955f +0x0f5f:  call   *0x2c(%edx)
086e9562 +0x0f62:  mov    %ebx,%eax
086e9564 +0x0f64:  mov    -0x8(%ebp),%esi
086e9567 +0x0f67:  mov    -0xc(%ebp),%ebx
086e956a +0x0f6a:  mov    -0x4(%ebp),%edi
086e956d +0x0f6d:  sub    $0x4,%esp
086e9570 +0x0f70:  mov    %ebp,%esp
086e9572 +0x0f72:  pop    %ebp
086e9573 +0x0f73:  ret    $0x4
086e9576 +0x0f76:  nop
086e9577 +0x0f77:  nop
086e9578 +0x0f78:  nop
086e9579 +0x0f79:  nop
086e957a +0x0f7a:  nop
086e957b +0x0f7b:  nop
086e957c +0x0f7c:  nop
086e957d +0x0f7d:  nop
086e957e +0x0f7e:  nop
086e957f +0x0f7f:  nop
086e9580 +0x0f80:  push   %ebp
086e9581 +0x0f81:  mov    %esp,%ebp
086e9583 +0x0f83:  sub    $0x48,%esp
086e9586 +0x0f86:  mov    0xc(%ebp),%eax
086e9589 +0x0f89:  mov    0x28(%ebp),%ecx
086e958c +0x0f8c:  mov    %ebx,-0xc(%ebp)
086e958f +0x0f8f:  mov    0x8(%ebp),%ebx
086e9592 +0x0f92:  mov    %esi,-0x8(%ebp)
086e9595 +0x0f95:  mov    0x18(%ebp),%esi
086e9598 +0x0f98:  mov    %edi,-0x4(%ebp)
086e959b +0x0f9b:  mov    0x1c(%ebp),%edi
086e959e +0x0f9e:  mov    (%eax),%edx
086e95a0 +0x0fa0:  mov    %ecx,0x20(%esp)
086e95a4 +0x0fa4:  mov    0x24(%ebp),%ecx
086e95a7 +0x0fa7:  mov    %esi,0x10(%esp)
086e95ab +0x0fab:  mov    0x10(%ebp),%esi
086e95ae +0x0fae:  mov    %edi,0x14(%esp)
086e95b2 +0x0fb2:  mov    0x14(%ebp),%edi
086e95b5 +0x0fb5:  mov    %eax,0x4(%esp)
086e95b9 +0x0fb9:  mov    %ecx,0x1c(%esp)
086e95bd +0x0fbd:  mov    0x20(%ebp),%ecx
086e95c0 +0x0fc0:  mov    %esi,0x8(%esp)
086e95c4 +0x0fc4:  mov    %edi,0xc(%esp)
086e95c8 +0x0fc8:  mov    %ebx,(%esp)
086e95cb +0x0fcb:  mov    %ecx,0x18(%esp)
086e95cf +0x0fcf:  call   *0x30(%edx)
086e95d2 +0x0fd2:  mov    %ebx,%eax
086e95d4 +0x0fd4:  mov    -0x8(%ebp),%esi
086e95d7 +0x0fd7:  mov    -0xc(%ebp),%ebx
086e95da +0x0fda:  mov    -0x4(%ebp),%edi
086e95dd +0x0fdd:  sub    $0x4,%esp
086e95e0 +0x0fe0:  mov    %ebp,%esp
086e95e2 +0x0fe2:  pop    %ebp
086e95e3 +0x0fe3:  ret    $0x4
086e95e6 +0x0fe6:  nop
086e95e7 +0x0fe7:  nop
086e95e8 +0x0fe8:  nop
086e95e9 +0x0fe9:  nop
086e95ea +0x0fea:  nop
086e95eb +0x0feb:  nop
086e95ec +0x0fec:  nop
086e95ed +0x0fed:  nop
086e95ee +0x0fee:  nop
086e95ef +0x0fef:  nop
086e95f0 +0x0ff0:  push   %ebp
086e95f1 +0x0ff1:  xor    %edx,%edx
086e95f3 +0x0ff3:  mov    %esp,%ebp
086e95f5 +0x0ff5:  mov    0x8(%ebp),%eax
086e95f8 +0x0ff8:  cmpl   $0x0,0xc(%ebp)
086e95fc +0x0ffc:  setne  %dl
086e95ff +0x0fff:  mov    %edx,0x4(%eax)
086e9602 +0x1002:  movl   $&_ZTVSt7num_putIcSt19ostreambuf_iteratorIcSt11char_traitsIcEEE+0x8,(%eax)
086e9608 +0x1008:  pop    %ebp
086e9609 +0x1009:  ret
086e960a +0x100a:  nop
086e960b +0x100b:  nop
086e960c +0x100c:  nop
086e960d +0x100d:  nop
086e960e +0x100e:  nop
086e960f +0x100f:  nop
086e9610 +0x1010:  push   %ebp
086e9611 +0x1011:  mov    %esp,%ebp
086e9613 +0x1013:  sub    $0x38,%esp
086e9616 +0x1016:  mov    %esi,-0x8(%ebp)
086e9619 +0x1019:  mov    0xc(%ebp),%eax
086e961c +0x101c:  movsbl 0x1c(%ebp),%ecx
086e9620 +0x1020:  movzbl 0x20(%ebp),%esi
086e9624 +0x1024:  mov    %ebx,-0xc(%ebp)
086e9627 +0x1027:  mov    0x8(%ebp),%ebx
086e962a +0x102a:  mov    %edi,-0x4(%ebp)
086e962d +0x102d:  mov    0x14(%ebp),%edi
086e9630 +0x1030:  mov    (%eax),%edx
086e9632 +0x1032:  mov    %esi,0x18(%esp)
086e9636 +0x1036:  mov    0x10(%ebp),%esi
086e9639 +0x1039:  mov    %ecx,0x14(%esp)
086e963d +0x103d:  mov    0x18(%ebp),%ecx
086e9640 +0x1040:  mov    %edi,0xc(%esp)
086e9644 +0x1044:  mov    %eax,0x4(%esp)
086e9648 +0x1048:  mov    %esi,0x8(%esp)
086e964c +0x104c:  mov    %ebx,(%esp)
086e964f +0x104f:  mov    %ecx,0x10(%esp)
086e9653 +0x1053:  call   *0x8(%edx)
086e9656 +0x1056:  mov    %ebx,%eax
086e9658 +0x1058:  mov    -0x8(%ebp),%esi
086e965b +0x105b:  mov    -0xc(%ebp),%ebx
086e965e +0x105e:  mov    -0x4(%ebp),%edi
086e9661 +0x1061:  sub    $0x4,%esp
086e9664 +0x1064:  mov    %ebp,%esp
086e9666 +0x1066:  pop    %ebp
086e9667 +0x1067:  ret    $0x4
086e966a +0x106a:  nop
086e966b +0x106b:  nop
086e966c +0x106c:  nop
086e966d +0x106d:  nop
086e966e +0x106e:  nop
086e966f +0x106f:  nop
086e9670 +0x1070:  push   %ebp
086e9671 +0x1071:  mov    %esp,%ebp
086e9673 +0x1073:  sub    $0x38,%esp
086e9676 +0x1076:  mov    %esi,-0x8(%ebp)
086e9679 +0x1079:  mov    0xc(%ebp),%eax
086e967c +0x107c:  movsbl 0x1c(%ebp),%ecx
086e9680 +0x1080:  mov    0x20(%ebp),%esi
086e9683 +0x1083:  mov    %ebx,-0xc(%ebp)
086e9686 +0x1086:  mov    0x8(%ebp),%ebx
086e9689 +0x1089:  mov    %edi,-0x4(%ebp)
086e968c +0x108c:  mov    0x14(%ebp),%edi
086e968f +0x108f:  mov    (%eax),%edx
086e9691 +0x1091:  mov    %esi,0x18(%esp)
086e9695 +0x1095:  mov    0x10(%ebp),%esi
086e9698 +0x1098:  mov    %ecx,0x14(%esp)
086e969c +0x109c:  mov    0x18(%ebp),%ecx
086e969f +0x109f:  mov    %edi,0xc(%esp)
086e96a3 +0x10a3:  mov    %eax,0x4(%esp)
086e96a7 +0x10a7:  mov    %esi,0x8(%esp)
086e96ab +0x10ab:  mov    %ebx,(%esp)
086e96ae +0x10ae:  mov    %ecx,0x10(%esp)
086e96b2 +0x10b2:  call   *0xc(%edx)
086e96b5 +0x10b5:  mov    %ebx,%eax
086e96b7 +0x10b7:  mov    -0x8(%ebp),%esi
086e96ba +0x10ba:  mov    -0xc(%ebp),%ebx
086e96bd +0x10bd:  mov    -0x4(%ebp),%edi
086e96c0 +0x10c0:  sub    $0x4,%esp
086e96c3 +0x10c3:  mov    %ebp,%esp
086e96c5 +0x10c5:  pop    %ebp
086e96c6 +0x10c6:  ret    $0x4
086e96c9 +0x10c9:  nop
086e96ca +0x10ca:  nop
086e96cb +0x10cb:  nop
086e96cc +0x10cc:  nop
086e96cd +0x10cd:  nop
086e96ce +0x10ce:  nop
086e96cf +0x10cf:  nop
086e96d0 +0x10d0:  push   %ebp
086e96d1 +0x10d1:  mov    %esp,%ebp
086e96d3 +0x10d3:  sub    $0x38,%esp
086e96d6 +0x10d6:  mov    %esi,-0x8(%ebp)
086e96d9 +0x10d9:  mov    0xc(%ebp),%eax
086e96dc +0x10dc:  movsbl 0x1c(%ebp),%ecx
086e96e0 +0x10e0:  mov    0x20(%ebp),%esi
086e96e3 +0x10e3:  mov    %ebx,-0xc(%ebp)
086e96e6 +0x10e6:  mov    0x8(%ebp),%ebx
086e96e9 +0x10e9:  mov    %edi,-0x4(%ebp)
086e96ec +0x10ec:  mov    0x14(%ebp),%edi
086e96ef +0x10ef:  mov    (%eax),%edx
086e96f1 +0x10f1:  mov    %esi,0x18(%esp)
086e96f5 +0x10f5:  mov    0x10(%ebp),%esi
086e96f8 +0x10f8:  mov    %ecx,0x14(%esp)
086e96fc +0x10fc:  mov    0x18(%ebp),%ecx
086e96ff +0x10ff:  mov    %edi,0xc(%esp)
086e9703 +0x1103:  mov    %eax,0x4(%esp)
086e9707 +0x1107:  mov    %esi,0x8(%esp)
086e970b +0x110b:  mov    %ebx,(%esp)
086e970e +0x110e:  mov    %ecx,0x10(%esp)
086e9712 +0x1112:  call   *0x10(%edx)
086e9715 +0x1115:  mov    %ebx,%eax
086e9717 +0x1117:  mov    -0x8(%ebp),%esi
086e971a +0x111a:  mov    -0xc(%ebp),%ebx
086e971d +0x111d:  mov    -0x4(%ebp),%edi
086e9720 +0x1120:  sub    $0x4,%esp
086e9723 +0x1123:  mov    %ebp,%esp
086e9725 +0x1125:  pop    %ebp
086e9726 +0x1126:  ret    $0x4
086e9729 +0x1129:  nop
086e972a +0x112a:  nop
086e972b +0x112b:  nop
086e972c +0x112c:  nop
086e972d +0x112d:  nop
086e972e +0x112e:  nop
086e972f +0x112f:  nop
086e9730 +0x1130:  push   %ebp
086e9731 +0x1131:  mov    %esp,%ebp
086e9733 +0x1133:  sub    $0x38,%esp
086e9736 +0x1136:  mov    %esi,-0x8(%ebp)
086e9739 +0x1139:  mov    0xc(%ebp),%eax
086e973c +0x113c:  mov    %edi,-0x4(%ebp)
086e973f +0x113f:  movsbl 0x1c(%ebp),%ecx
086e9743 +0x1143:  mov    0x20(%ebp),%esi
086e9746 +0x1146:  mov    0x24(%ebp),%edi
086e9749 +0x1149:  mov    %ebx,-0xc(%ebp)
086e974c +0x114c:  mov    0x8(%ebp),%ebx
086e974f +0x114f:  mov    (%eax),%edx
086e9751 +0x1151:  mov    %esi,0x18(%esp)
086e9755 +0x1155:  mov    0x10(%ebp),%esi
086e9758 +0x1158:  mov    %edi,0x1c(%esp)
086e975c +0x115c:  mov    0x14(%ebp),%edi
086e975f +0x115f:  mov    %ecx,0x14(%esp)
086e9763 +0x1163:  mov    0x18(%ebp),%ecx
086e9766 +0x1166:  mov    %eax,0x4(%esp)
086e976a +0x116a:  mov    %esi,0x8(%esp)
086e976e +0x116e:  mov    %edi,0xc(%esp)
086e9772 +0x1172:  mov    %ebx,(%esp)
086e9775 +0x1175:  mov    %ecx,0x10(%esp)
086e9779 +0x1179:  call   *0x14(%edx)
086e977c +0x117c:  mov    %ebx,%eax
086e977e +0x117e:  mov    -0x8(%ebp),%esi
086e9781 +0x1181:  mov    -0xc(%ebp),%ebx
086e9784 +0x1184:  mov    -0x4(%ebp),%edi
086e9787 +0x1187:  sub    $0x4,%esp
086e978a +0x118a:  mov    %ebp,%esp
086e978c +0x118c:  pop    %ebp
086e978d +0x118d:  ret    $0x4
086e9790 +0x1190:  push   %ebp
086e9791 +0x1191:  mov    %esp,%ebp
086e9793 +0x1193:  sub    $0x38,%esp
086e9796 +0x1196:  mov    %esi,-0x8(%ebp)
086e9799 +0x1199:  mov    0xc(%ebp),%eax
086e979c +0x119c:  mov    %edi,-0x4(%ebp)
086e979f +0x119f:  movsbl 0x1c(%ebp),%ecx
086e97a3 +0x11a3:  mov    0x20(%ebp),%esi
086e97a6 +0x11a6:  mov    0x24(%ebp),%edi
086e97a9 +0x11a9:  mov    %ebx,-0xc(%ebp)
086e97ac +0x11ac:  mov    0x8(%ebp),%ebx
086e97af +0x11af:  mov    (%eax),%edx
086e97b1 +0x11b1:  mov    %esi,0x18(%esp)
086e97b5 +0x11b5:  mov    0x10(%ebp),%esi
086e97b8 +0x11b8:  mov    %edi,0x1c(%esp)
086e97bc +0x11bc:  mov    0x14(%ebp),%edi
086e97bf +0x11bf:  mov    %ecx,0x14(%esp)
086e97c3 +0x11c3:  mov    0x18(%ebp),%ecx
086e97c6 +0x11c6:  mov    %eax,0x4(%esp)
086e97ca +0x11ca:  mov    %esi,0x8(%esp)
086e97ce +0x11ce:  mov    %edi,0xc(%esp)
086e97d2 +0x11d2:  mov    %ebx,(%esp)
086e97d5 +0x11d5:  mov    %ecx,0x10(%esp)
086e97d9 +0x11d9:  call   *0x18(%edx)
086e97dc +0x11dc:  mov    %ebx,%eax
086e97de +0x11de:  mov    -0x8(%ebp),%esi
086e97e1 +0x11e1:  mov    -0xc(%ebp),%ebx
086e97e4 +0x11e4:  mov    -0x4(%ebp),%edi
086e97e7 +0x11e7:  sub    $0x4,%esp
086e97ea +0x11ea:  mov    %ebp,%esp
086e97ec +0x11ec:  pop    %ebp
086e97ed +0x11ed:  ret    $0x4
086e97f0 +0x11f0:  push   %ebp
086e97f1 +0x11f1:  mov    %esp,%ebp
086e97f3 +0x11f3:  sub    $0x38,%esp
086e97f6 +0x11f6:  mov    0xc(%ebp),%eax
086e97f9 +0x11f9:  movsbl 0x1c(%ebp),%ecx
086e97fd +0x11fd:  mov    %ebx,-0xc(%ebp)
086e9800 +0x1200:  mov    0x8(%ebp),%ebx
086e9803 +0x1203:  mov    %esi,-0x8(%ebp)
086e9806 +0x1206:  mov    0x10(%ebp),%esi
086e9809 +0x1209:  mov    %edi,-0x4(%ebp)
086e980c +0x120c:  mov    0x14(%ebp),%edi
086e980f +0x120f:  mov    (%eax),%edx
086e9811 +0x1211:  mov    %ecx,0x14(%esp)
086e9815 +0x1215:  mov    0x18(%ebp),%ecx
086e9818 +0x1218:  fldl   0x20(%ebp)
086e981b +0x121b:  mov    %esi,0x8(%esp)
086e981f +0x121f:  fstpl  0x18(%esp)
086e9823 +0x1223:  mov    %edi,0xc(%esp)
086e9827 +0x1227:  mov    %eax,0x4(%esp)
086e982b +0x122b:  mov    %ebx,(%esp)
086e982e +0x122e:  mov    %ecx,0x10(%esp)
086e9832 +0x1232:  call   *0x1c(%edx)
086e9835 +0x1235:  mov    %ebx,%eax
086e9837 +0x1237:  mov    -0x8(%ebp),%esi
086e983a +0x123a:  mov    -0xc(%ebp),%ebx
086e983d +0x123d:  mov    -0x4(%ebp),%edi
086e9840 +0x1240:  sub    $0x4,%esp
086e9843 +0x1243:  mov    %ebp,%esp
086e9845 +0x1245:  pop    %ebp
086e9846 +0x1246:  ret    $0x4
086e9849 +0x1249:  nop
086e984a +0x124a:  nop
086e984b +0x124b:  nop
086e984c +0x124c:  nop
086e984d +0x124d:  nop
086e984e +0x124e:  nop
086e984f +0x124f:  nop
086e9850 +0x1250:  push   %ebp
086e9851 +0x1251:  mov    %esp,%ebp
086e9853 +0x1253:  sub    $0x48,%esp
086e9856 +0x1256:  mov    0xc(%ebp),%eax
086e9859 +0x1259:  movsbl 0x1c(%ebp),%ecx
086e985d +0x125d:  mov    %ebx,-0xc(%ebp)
086e9860 +0x1260:  mov    0x8(%ebp),%ebx
086e9863 +0x1263:  mov    %esi,-0x8(%ebp)
086e9866 +0x1266:  mov    0x10(%ebp),%esi
086e9869 +0x1269:  mov    %edi,-0x4(%ebp)
086e986c +0x126c:  mov    0x14(%ebp),%edi
086e986f +0x126f:  mov    (%eax),%edx
086e9871 +0x1271:  mov    %ecx,0x14(%esp)
086e9875 +0x1275:  mov    0x18(%ebp),%ecx
086e9878 +0x1278:  fldt   0x20(%ebp)
086e987b +0x127b:  mov    %esi,0x8(%esp)
086e987f +0x127f:  mov    %edi,0xc(%esp)
086e9883 +0x1283:  mov    %eax,0x4(%esp)
086e9887 +0x1287:  mov    %ebx,(%esp)
086e988a +0x128a:  fstpt  0x18(%esp)
086e988e +0x128e:  mov    %ecx,0x10(%esp)
086e9892 +0x1292:  call   *0x20(%edx)
086e9895 +0x1295:  mov    %ebx,%eax
086e9897 +0x1297:  mov    -0x8(%ebp),%esi
086e989a +0x129a:  mov    -0xc(%ebp),%ebx
086e989d +0x129d:  mov    -0x4(%ebp),%edi
086e98a0 +0x12a0:  sub    $0x4,%esp
086e98a3 +0x12a3:  mov    %ebp,%esp
086e98a5 +0x12a5:  pop    %ebp
086e98a6 +0x12a6:  ret    $0x4
086e98a9 +0x12a9:  nop
086e98aa +0x12aa:  nop
086e98ab +0x12ab:  nop
086e98ac +0x12ac:  nop
086e98ad +0x12ad:  nop
086e98ae +0x12ae:  nop
086e98af +0x12af:  nop
086e98b0 +0x12b0:  push   %ebp
086e98b1 +0x12b1:  mov    %esp,%ebp
086e98b3 +0x12b3:  sub    $0x38,%esp
086e98b6 +0x12b6:  mov    %esi,-0x8(%ebp)
086e98b9 +0x12b9:  mov    0xc(%ebp),%eax
086e98bc +0x12bc:  movsbl 0x1c(%ebp),%ecx
086e98c0 +0x12c0:  mov    0x20(%ebp),%esi
086e98c3 +0x12c3:  mov    %ebx,-0xc(%ebp)
086e98c6 +0x12c6:  mov    0x8(%ebp),%ebx
086e98c9 +0x12c9:  mov    %edi,-0x4(%ebp)
086e98cc +0x12cc:  mov    0x14(%ebp),%edi
086e98cf +0x12cf:  mov    (%eax),%edx
086e98d1 +0x12d1:  mov    %esi,0x18(%esp)
086e98d5 +0x12d5:  mov    0x10(%ebp),%esi
086e98d8 +0x12d8:  mov    %ecx,0x14(%esp)
086e98dc +0x12dc:  mov    0x18(%ebp),%ecx
086e98df +0x12df:  mov    %edi,0xc(%esp)
086e98e3 +0x12e3:  mov    %eax,0x4(%esp)
086e98e7 +0x12e7:  mov    %esi,0x8(%esp)
086e98eb +0x12eb:  mov    %ebx,(%esp)
086e98ee +0x12ee:  mov    %ecx,0x10(%esp)
086e98f2 +0x12f2:  call   *0x24(%edx)
086e98f5 +0x12f5:  mov    %ebx,%eax
086e98f7 +0x12f7:  mov    -0x8(%ebp),%esi
086e98fa +0x12fa:  mov    -0xc(%ebp),%ebx
086e98fd +0x12fd:  mov    -0x4(%ebp),%edi
086e9900 +0x1300:  sub    $0x4,%esp
086e9903 +0x1303:  mov    %ebp,%esp
086e9905 +0x1305:  pop    %ebp
086e9906 +0x1306:  ret    $0x4
086e9909 +0x1309:  nop
086e990a +0x130a:  nop
086e990b +0x130b:  nop
086e990c +0x130c:  nop
086e990d +0x130d:  nop
086e990e +0x130e:  nop
086e990f +0x130f:  nop
086e9910 +0x1310:  push   %ebp
086e9911 +0x1311:  mov    %esp,%ebp
086e9913 +0x1313:  mov    0x8(%ebp),%edx
086e9916 +0x1316:  mov    0xc(%ebp),%eax
086e9919 +0x1319:  mov    0x8(%edx),%edx
086e991c +0x131c:  mov    0x8(%edx),%ecx
086e991f +0x131f:  mov    %ecx,(%eax)
086e9921 +0x1321:  mov    0xc(%edx),%edx
086e9924 +0x1324:  mov    %edx,0x4(%eax)
086e9927 +0x1327:  pop    %ebp
086e9928 +0x1328:  ret
086e9929 +0x1329:  nop
086e992a +0x132a:  nop
086e992b +0x132b:  nop
086e992c +0x132c:  nop
086e992d +0x132d:  nop
086e992e +0x132e:  nop
086e992f +0x132f:  nop
086e9930 +0x1330:  push   %ebp
086e9931 +0x1331:  mov    %esp,%ebp
086e9933 +0x1333:  mov    0x8(%ebp),%edx
086e9936 +0x1336:  mov    0xc(%ebp),%eax
086e9939 +0x1339:  mov    0x8(%edx),%edx
086e993c +0x133c:  mov    0x10(%edx),%ecx
086e993f +0x133f:  mov    %ecx,(%eax)
086e9941 +0x1341:  mov    0x14(%edx),%edx
086e9944 +0x1344:  mov    %edx,0x4(%eax)
086e9947 +0x1347:  pop    %ebp
086e9948 +0x1348:  ret
086e9949 +0x1349:  nop
086e994a +0x134a:  nop
086e994b +0x134b:  nop
086e994c +0x134c:  nop
086e994d +0x134d:  nop
086e994e +0x134e:  nop
086e994f +0x134f:  nop
086e9950 +0x1350:  push   %ebp
086e9951 +0x1351:  mov    %esp,%ebp
086e9953 +0x1353:  mov    0x8(%ebp),%edx
086e9956 +0x1356:  mov    0xc(%ebp),%eax
086e9959 +0x1359:  mov    0x8(%edx),%edx
086e995c +0x135c:  mov    0x18(%edx),%ecx
086e995f +0x135f:  mov    %ecx,(%eax)
086e9961 +0x1361:  mov    0x1c(%edx),%edx
086e9964 +0x1364:  mov    %edx,0x4(%eax)
086e9967 +0x1367:  pop    %ebp
086e9968 +0x1368:  ret
086e9969 +0x1369:  nop
086e996a +0x136a:  nop
086e996b +0x136b:  nop
086e996c +0x136c:  nop
086e996d +0x136d:  nop
086e996e +0x136e:  nop
086e996f +0x136f:  nop
086e9970 +0x1370:  push   %ebp
086e9971 +0x1371:  mov    %esp,%ebp
086e9973 +0x1373:  pop    %ebp
086e9974 +0x1374:  ret
086e9975 +0x1375:  nop
086e9976 +0x1376:  nop
086e9977 +0x1377:  nop
086e9978 +0x1378:  nop
086e9979 +0x1379:  nop
086e997a +0x137a:  nop
086e997b +0x137b:  nop
086e997c +0x137c:  nop
086e997d +0x137d:  nop
086e997e +0x137e:  nop
086e997f +0x137f:  nop
086e9980 +0x1380:  push   %ebp
086e9981 +0x1381:  mov    %esp,%ebp
086e9983 +0x1383:  mov    0x8(%ebp),%edx
086e9986 +0x1386:  mov    0xc(%ebp),%eax
086e9989 +0x1389:  mov    0x8(%edx),%edx
086e998c +0x138c:  mov    0x20(%edx),%ecx
086e998f +0x138f:  mov    %ecx,(%eax)
086e9991 +0x1391:  mov    0x24(%edx),%edx
086e9994 +0x1394:  mov    %edx,0x4(%eax)
086e9997 +0x1397:  pop    %ebp
086e9998 +0x1398:  ret
086e9999 +0x1399:  nop
086e999a +0x139a:  nop
086e999b +0x139b:  nop
086e999c +0x139c:  nop
086e999d +0x139d:  nop
086e999e +0x139e:  nop
086e999f +0x139f:  nop
086e99a0 +0x13a0:  push   %ebp
086e99a1 +0x13a1:  mov    %esp,%ebp
086e99a3 +0x13a3:  mov    0x8(%ebp),%edx
086e99a6 +0x13a6:  mov    0xc(%ebp),%eax
086e99a9 +0x13a9:  mov    0x8(%edx),%edx
086e99ac +0x13ac:  mov    0x2c(%edx),%ecx
086e99af +0x13af:  mov    %ecx,(%eax)
086e99b1 +0x13b1:  mov    0x30(%edx),%ecx
086e99b4 +0x13b4:  mov    %ecx,0x4(%eax)
086e99b7 +0x13b7:  mov    0x34(%edx),%ecx
086e99ba +0x13ba:  mov    %ecx,0x8(%eax)
086e99bd +0x13bd:  mov    0x38(%edx),%ecx
086e99c0 +0x13c0:  mov    %ecx,0xc(%eax)
086e99c3 +0x13c3:  mov    0x3c(%edx),%ecx
086e99c6 +0x13c6:  mov    %ecx,0x10(%eax)
086e99c9 +0x13c9:  mov    0x40(%edx),%ecx
086e99cc +0x13cc:  mov    %ecx,0x14(%eax)
086e99cf +0x13cf:  mov    0x44(%edx),%edx
086e99d2 +0x13d2:  mov    %edx,0x18(%eax)
086e99d5 +0x13d5:  pop    %ebp
086e99d6 +0x13d6:  ret
086e99d7 +0x13d7:  nop
086e99d8 +0x13d8:  nop
086e99d9 +0x13d9:  nop
086e99da +0x13da:  nop
086e99db +0x13db:  nop
086e99dc +0x13dc:  nop
086e99dd +0x13dd:  nop
086e99de +0x13de:  nop
086e99df +0x13df:  nop
086e99e0 +0x13e0:  push   %ebp
086e99e1 +0x13e1:  mov    %esp,%ebp
086e99e3 +0x13e3:  mov    0x8(%ebp),%edx
086e99e6 +0x13e6:  mov    0xc(%ebp),%eax
086e99e9 +0x13e9:  mov    0x8(%edx),%edx
086e99ec +0x13ec:  mov    0x48(%edx),%ecx
086e99ef +0x13ef:  mov    %ecx,(%eax)
086e99f1 +0x13f1:  mov    0x4c(%edx),%ecx
086e99f4 +0x13f4:  mov    %ecx,0x4(%eax)
086e99f7 +0x13f7:  mov    0x50(%edx),%ecx
086e99fa +0x13fa:  mov    %ecx,0x8(%eax)
086e99fd +0x13fd:  mov    0x54(%edx),%ecx
086e9a00 +0x1400:  mov    %ecx,0xc(%eax)
086e9a03 +0x1403:  mov    0x58(%edx),%ecx
086e9a06 +0x1406:  mov    %ecx,0x10(%eax)
086e9a09 +0x1409:  mov    0x5c(%edx),%ecx
086e9a0c +0x140c:  mov    %ecx,0x14(%eax)
086e9a0f +0x140f:  mov    0x60(%edx),%edx
086e9a12 +0x1412:  mov    %edx,0x18(%eax)
086e9a15 +0x1415:  pop    %ebp
086e9a16 +0x1416:  ret
086e9a17 +0x1417:  nop
086e9a18 +0x1418:  nop
086e9a19 +0x1419:  nop
086e9a1a +0x141a:  nop
086e9a1b +0x141b:  nop
086e9a1c +0x141c:  nop
086e9a1d +0x141d:  nop
086e9a1e +0x141e:  nop
086e9a1f +0x141f:  nop
086e9a20 +0x1420:  push   %ebp
086e9a21 +0x1421:  mov    %esp,%ebp
086e9a23 +0x1423:  mov    0x8(%ebp),%edx
086e9a26 +0x1426:  mov    0xc(%ebp),%eax
086e9a29 +0x1429:  mov    0x8(%edx),%edx
086e9a2c +0x142c:  mov    0x64(%edx),%ecx
086e9a2f +0x142f:  mov    %ecx,(%eax)
086e9a31 +0x1431:  mov    0x68(%edx),%ecx
086e9a34 +0x1434:  mov    %ecx,0x4(%eax)
086e9a37 +0x1437:  mov    0x6c(%edx),%ecx
086e9a3a +0x143a:  mov    %ecx,0x8(%eax)
086e9a3d +0x143d:  mov    0x70(%edx),%ecx
086e9a40 +0x1440:  mov    %ecx,0xc(%eax)
086e9a43 +0x1443:  mov    0x74(%edx),%ecx
086e9a46 +0x1446:  mov    %ecx,0x10(%eax)
086e9a49 +0x1449:  mov    0x78(%edx),%ecx
086e9a4c +0x144c:  mov    %ecx,0x14(%eax)
086e9a4f +0x144f:  mov    0x7c(%edx),%ecx
086e9a52 +0x1452:  mov    %ecx,0x18(%eax)
086e9a55 +0x1455:  mov    0x80(%edx),%ecx
086e9a5b +0x145b:  mov    %ecx,0x1c(%eax)
086e9a5e +0x145e:  mov    0x84(%edx),%ecx
086e9a64 +0x1464:  mov    %ecx,0x20(%eax)
086e9a67 +0x1467:  mov    0x88(%edx),%ecx
086e9a6d +0x146d:  mov    %ecx,0x24(%eax)
086e9a70 +0x1470:  mov    0x8c(%edx),%ecx
086e9a76 +0x1476:  mov    %ecx,0x28(%eax)
086e9a79 +0x1479:  mov    0x90(%edx),%edx
086e9a7f +0x147f:  mov    %edx,0x2c(%eax)
086e9a82 +0x1482:  pop    %ebp
086e9a83 +0x1483:  ret
086e9a84 +0x1484:  nop
086e9a85 +0x1485:  nop
086e9a86 +0x1486:  nop
086e9a87 +0x1487:  nop
086e9a88 +0x1488:  nop
086e9a89 +0x1489:  nop
086e9a8a +0x148a:  nop
086e9a8b +0x148b:  nop
086e9a8c +0x148c:  nop
086e9a8d +0x148d:  nop
086e9a8e +0x148e:  nop
086e9a8f +0x148f:  nop
086e9a90 +0x1490:  push   %ebp
086e9a91 +0x1491:  mov    %esp,%ebp
086e9a93 +0x1493:  mov    0x8(%ebp),%edx
086e9a96 +0x1496:  mov    0xc(%ebp),%eax
086e9a99 +0x1499:  mov    0x8(%edx),%edx
086e9a9c +0x149c:  mov    0x94(%edx),%ecx
086e9aa2 +0x14a2:  mov    %ecx,(%eax)
086e9aa4 +0x14a4:  mov    0x98(%edx),%ecx
086e9aaa +0x14aa:  mov    %ecx,0x4(%eax)
086e9aad +0x14ad:  mov    0x9c(%edx),%ecx
086e9ab3 +0x14b3:  mov    %ecx,0x8(%eax)
086e9ab6 +0x14b6:  mov    0xa0(%edx),%ecx
086e9abc +0x14bc:  mov    %ecx,0xc(%eax)
086e9abf +0x14bf:  mov    0xa4(%edx),%ecx
086e9ac5 +0x14c5:  mov    %ecx,0x10(%eax)
086e9ac8 +0x14c8:  mov    0xa8(%edx),%ecx
086e9ace +0x14ce:  mov    %ecx,0x14(%eax)
086e9ad1 +0x14d1:  mov    0xac(%edx),%ecx
086e9ad7 +0x14d7:  mov    %ecx,0x18(%eax)
086e9ada +0x14da:  mov    0xb0(%edx),%ecx
086e9ae0 +0x14e0:  mov    %ecx,0x1c(%eax)
086e9ae3 +0x14e3:  mov    0xb4(%edx),%ecx
086e9ae9 +0x14e9:  mov    %ecx,0x20(%eax)
086e9aec +0x14ec:  mov    0xb8(%edx),%ecx
086e9af2 +0x14f2:  mov    %ecx,0x24(%eax)
086e9af5 +0x14f5:  mov    0xbc(%edx),%ecx
086e9afb +0x14fb:  mov    %ecx,0x28(%eax)
086e9afe +0x14fe:  mov    0xc0(%edx),%edx
086e9b04 +0x1504:  mov    %edx,0x2c(%eax)
086e9b07 +0x1507:  pop    %ebp
086e9b08 +0x1508:  ret
086e9b09 +0x1509:  nop
086e9b0a +0x150a:  nop
086e9b0b +0x150b:  nop
086e9b0c +0x150c:  nop
086e9b0d +0x150d:  nop
086e9b0e +0x150e:  nop
086e9b0f +0x150f:  nop
086e9b10 +0x1510:  push   %ebp
086e9b11 +0x1511:  xor    %edx,%edx
086e9b13 +0x1513:  mov    %esp,%ebp
086e9b15 +0x1515:  mov    0x8(%ebp),%eax
086e9b18 +0x1518:  cmpl   $0x0,0xc(%ebp)
086e9b1c +0x151c:  setne  %dl
086e9b1f +0x151f:  mov    %edx,0x4(%eax)
086e9b22 +0x1522:  movl   $&_ZTVSt17__timepunct_cacheIcE+0x8,(%eax)
086e9b28 +0x1528:  movl   $0x0,0x8(%eax)
086e9b2f +0x152f:  movl   $0x0,0xc(%eax)
086e9b36 +0x1536:  movl   $0x0,0x10(%eax)
086e9b3d +0x153d:  movl   $0x0,0x14(%eax)
086e9b44 +0x1544:  movl   $0x0,0x18(%eax)
086e9b4b +0x154b:  movl   $0x0,0x1c(%eax)
086e9b52 +0x1552:  movl   $0x0,0x20(%eax)
086e9b59 +0x1559:  movl   $0x0,0x24(%eax)
086e9b60 +0x1560:  movl   $0x0,0x28(%eax)
086e9b67 +0x1567:  movl   $0x0,0x2c(%eax)
086e9b6e +0x156e:  movl   $0x0,0x30(%eax)
086e9b75 +0x1575:  movl   $0x0,0x34(%eax)
086e9b7c +0x157c:  movl   $0x0,0x38(%eax)
086e9b83 +0x1583:  movl   $0x0,0x3c(%eax)
086e9b8a +0x158a:  movl   $0x0,0x40(%eax)
086e9b91 +0x1591:  movl   $0x0,0x44(%eax)
086e9b98 +0x1598:  movl   $0x0,0x48(%eax)
086e9b9f +0x159f:  movl   $0x0,0x4c(%eax)
086e9ba6 +0x15a6:  movl   $0x0,0x50(%eax)
086e9bad +0x15ad:  movl   $0x0,0x54(%eax)
086e9bb4 +0x15b4:  movl   $0x0,0x58(%eax)
086e9bbb +0x15bb:  movl   $0x0,0x5c(%eax)
086e9bc2 +0x15c2:  movl   $0x0,0x60(%eax)
086e9bc9 +0x15c9:  movl   $0x0,0x64(%eax)
086e9bd0 +0x15d0:  movl   $0x0,0x68(%eax)
086e9bd7 +0x15d7:  movl   $0x0,0x6c(%eax)
086e9bde +0x15de:  movl   $0x0,0x70(%eax)
086e9be5 +0x15e5:  movl   $0x0,0x74(%eax)
086e9bec +0x15ec:  movl   $0x0,0x78(%eax)
086e9bf3 +0x15f3:  movl   $0x0,0x7c(%eax)
086e9bfa +0x15fa:  movl   $0x0,0x80(%eax)
086e9c04 +0x1604:  movl   $0x0,0x84(%eax)
086e9c0e +0x160e:  movl   $0x0,0x88(%eax)
086e9c18 +0x1618:  movl   $0x0,0x8c(%eax)
086e9c22 +0x1622:  movl   $0x0,0x90(%eax)
086e9c2c +0x162c:  movl   $0x0,0x94(%eax)
086e9c36 +0x1636:  movl   $0x0,0x98(%eax)
086e9c40 +0x1640:  movl   $0x0,0x9c(%eax)
086e9c4a +0x164a:  movl   $0x0,0xa0(%eax)
086e9c54 +0x1654:  movl   $0x0,0xa4(%eax)
086e9c5e +0x165e:  movl   $0x0,0xa8(%eax)
086e9c68 +0x1668:  movl   $0x0,0xac(%eax)
086e9c72 +0x1672:  movl   $0x0,0xb0(%eax)
086e9c7c +0x167c:  movl   $0x0,0xb4(%eax)
086e9c86 +0x1686:  movl   $0x0,0xb8(%eax)
086e9c90 +0x1690:  movl   $0x0,0xbc(%eax)
086e9c9a +0x169a:  movl   $0x0,0xc0(%eax)
086e9ca4 +0x16a4:  movb   $0x0,0xc4(%eax)
086e9cab +0x16ab:  pop    %ebp
086e9cac +0x16ac:  ret
086e9cad +0x16ad:  nop
086e9cae +0x16ae:  nop
086e9caf +0x16af:  nop
086e9cb0 +0x16b0:  push   %ebp
086e9cb1 +0x16b1:  xor    %edx,%edx
086e9cb3 +0x16b3:  mov    %esp,%ebp
086e9cb5 +0x16b5:  mov    0x8(%ebp),%eax
086e9cb8 +0x16b8:  cmpl   $0x0,0xc(%ebp)
086e9cbc +0x16bc:  setne  %dl
086e9cbf +0x16bf:  mov    %edx,0x4(%eax)
086e9cc2 +0x16c2:  movl   $&_ZTVSt8time_putIcSt19ostreambuf_iteratorIcSt11char_traitsIcEEE+0x8,(%eax)
086e9cc8 +0x16c8:  pop    %ebp
086e9cc9 +0x16c9:  ret
086e9cca +0x16ca:  nop
086e9ccb +0x16cb:  nop
086e9ccc +0x16cc:  nop
086e9ccd +0x16cd:  nop
086e9cce +0x16ce:  nop
086e9ccf +0x16cf:  nop
086e9cd0 +0x16d0:  push   %ebp
086e9cd1 +0x16d1:  mov    %esp,%ebp
086e9cd3 +0x16d3:  sub    $0x48,%esp
086e9cd6 +0x16d6:  mov    %esi,-0x8(%ebp)
086e9cd9 +0x16d9:  mov    0xc(%ebp),%eax
086e9cdc +0x16dc:  movsbl 0x24(%ebp),%esi
086e9ce0 +0x16e0:  mov    %ebx,-0xc(%ebp)
086e9ce3 +0x16e3:  movsbl 0x1c(%ebp),%ecx
086e9ce7 +0x16e7:  mov    %edi,-0x4(%ebp)
086e9cea +0x16ea:  movsbl 0x28(%ebp),%edi
086e9cee +0x16ee:  mov    (%eax),%edx
086e9cf0 +0x16f0:  mov    %esi,0x1c(%esp)
086e9cf4 +0x16f4:  mov    0x20(%ebp),%esi
086e9cf7 +0x16f7:  mov    0x8(%ebp),%ebx
086e9cfa +0x16fa:  mov    %edi,0x20(%esp)
086e9cfe +0x16fe:  mov    0x14(%ebp),%edi
086e9d01 +0x1701:  mov    %ecx,0x14(%esp)
086e9d05 +0x1705:  mov    0x18(%ebp),%ecx
086e9d08 +0x1708:  mov    %esi,0x18(%esp)
086e9d0c +0x170c:  mov    0x10(%ebp),%esi
086e9d0f +0x170f:  mov    %eax,0x4(%esp)
086e9d13 +0x1713:  mov    %edi,0xc(%esp)
086e9d17 +0x1717:  mov    %ebx,(%esp)
086e9d1a +0x171a:  mov    %esi,0x8(%esp)
086e9d1e +0x171e:  mov    %ecx,0x10(%esp)
086e9d22 +0x1722:  call   *0x8(%edx)
086e9d25 +0x1725:  mov    %ebx,%eax
086e9d27 +0x1727:  mov    -0x8(%ebp),%esi
086e9d2a +0x172a:  mov    -0xc(%ebp),%ebx
086e9d2d +0x172d:  mov    -0x4(%ebp),%edi
086e9d30 +0x1730:  sub    $0x4,%esp
086e9d33 +0x1733:  mov    %ebp,%esp
086e9d35 +0x1735:  pop    %ebp
086e9d36 +0x1736:  ret    $0x4
086e9d39 +0x1739:  nop
086e9d3a +0x173a:  nop
086e9d3b +0x173b:  nop
086e9d3c +0x173c:  nop
086e9d3d +0x173d:  nop
086e9d3e +0x173e:  nop
086e9d3f +0x173f:  nop
086e9d40 +0x1740:  push   %ebp
086e9d41 +0x1741:  xor    %edx,%edx
086e9d43 +0x1743:  mov    %esp,%ebp
086e9d45 +0x1745:  mov    0x8(%ebp),%eax
086e9d48 +0x1748:  cmpl   $0x0,0x10(%ebp)
086e9d4c +0x174c:  setne  %dl
086e9d4f +0x174f:  mov    %edx,0x4(%eax)
086e9d52 +0x1752:  movl   $&_ZTVSt15time_put_bynameIcSt19ostreambuf_iteratorIcSt11char_traitsIcEEE+0x8,(%eax)
086e9d58 +0x1758:  pop    %ebp
086e9d59 +0x1759:  ret
086e9d5a +0x175a:  nop
086e9d5b +0x175b:  nop
086e9d5c +0x175c:  nop
086e9d5d +0x175d:  nop
086e9d5e +0x175e:  nop
086e9d5f +0x175f:  nop
086e9d60 +0x1760:  push   %ebp
086e9d61 +0x1761:  xor    %edx,%edx
086e9d63 +0x1763:  mov    %esp,%ebp
086e9d65 +0x1765:  mov    0x8(%ebp),%eax
086e9d68 +0x1768:  cmpl   $0x0,0xc(%ebp)
086e9d6c +0x176c:  setne  %dl
086e9d6f +0x176f:  mov    %edx,0x4(%eax)
086e9d72 +0x1772:  movl   $&_ZTVSt8time_getIcSt19istreambuf_iteratorIcSt11char_traitsIcEEE+0x8,(%eax)
086e9d78 +0x1778:  pop    %ebp
086e9d79 +0x1779:  ret
086e9d7a +0x177a:  nop
086e9d7b +0x177b:  nop
086e9d7c +0x177c:  nop
086e9d7d +0x177d:  nop
086e9d7e +0x177e:  nop
086e9d7f +0x177f:  nop
086e9d80 +0x1780:  push   %ebp
086e9d81 +0x1781:  mov    %esp,%ebp
086e9d83 +0x1783:  sub    $0x8,%esp
086e9d86 +0x1786:  mov    0x8(%ebp),%eax
086e9d89 +0x1789:  mov    (%eax),%edx
086e9d8b +0x178b:  mov    0x8(%edx),%eax
086e9d8e +0x178e:  leave
086e9d8f +0x178f:  jmp    *%eax
086e9d91 +0x1791:  nop
086e9d92 +0x1792:  nop
086e9d93 +0x1793:  nop
086e9d94 +0x1794:  nop
086e9d95 +0x1795:  nop
086e9d96 +0x1796:  nop
086e9d97 +0x1797:  nop
086e9d98 +0x1798:  nop
086e9d99 +0x1799:  nop
086e9d9a +0x179a:  nop
086e9d9b +0x179b:  nop
086e9d9c +0x179c:  nop
086e9d9d +0x179d:  nop
086e9d9e +0x179e:  nop
086e9d9f +0x179f:  nop
086e9da0 +0x17a0:  push   %ebp
086e9da1 +0x17a1:  mov    %esp,%ebp
086e9da3 +0x17a3:  sub    $0x48,%esp
086e9da6 +0x17a6:  mov    0xc(%ebp),%eax
086e9da9 +0x17a9:  mov    0x28(%ebp),%ecx
086e9dac +0x17ac:  mov    %ebx,-0xc(%ebp)
086e9daf +0x17af:  mov    0x8(%ebp),%ebx
086e9db2 +0x17b2:  mov    %esi,-0x8(%ebp)
086e9db5 +0x17b5:  mov    0x18(%ebp),%esi
086e9db8 +0x17b8:  mov    %edi,-0x4(%ebp)
086e9dbb +0x17bb:  mov    0x1c(%ebp),%edi
086e9dbe +0x17be:  mov    (%eax),%edx
086e9dc0 +0x17c0:  mov    %ecx,0x20(%esp)
086e9dc4 +0x17c4:  mov    0x24(%ebp),%ecx
086e9dc7 +0x17c7:  mov    %esi,0x10(%esp)
086e9dcb +0x17cb:  mov    0x10(%ebp),%esi
086e9dce +0x17ce:  mov    %edi,0x14(%esp)
086e9dd2 +0x17d2:  mov    0x14(%ebp),%edi
086e9dd5 +0x17d5:  mov    %eax,0x4(%esp)
086e9dd9 +0x17d9:  mov    %ecx,0x1c(%esp)
086e9ddd +0x17dd:  mov    0x20(%ebp),%ecx
086e9de0 +0x17e0:  mov    %esi,0x8(%esp)
086e9de4 +0x17e4:  mov    %edi,0xc(%esp)
086e9de8 +0x17e8:  mov    %ebx,(%esp)
086e9deb +0x17eb:  mov    %ecx,0x18(%esp)
086e9def +0x17ef:  call   *0xc(%edx)
086e9df2 +0x17f2:  mov    %ebx,%eax
086e9df4 +0x17f4:  mov    -0x8(%ebp),%esi
086e9df7 +0x17f7:  mov    -0xc(%ebp),%ebx
086e9dfa +0x17fa:  mov    -0x4(%ebp),%edi
086e9dfd +0x17fd:  sub    $0x4,%esp
086e9e00 +0x1800:  mov    %ebp,%esp
086e9e02 +0x1802:  pop    %ebp
086e9e03 +0x1803:  ret    $0x4
086e9e06 +0x1806:  nop
086e9e07 +0x1807:  nop
086e9e08 +0x1808:  nop
086e9e09 +0x1809:  nop
086e9e0a +0x180a:  nop
086e9e0b +0x180b:  nop
086e9e0c +0x180c:  nop
086e9e0d +0x180d:  nop
086e9e0e +0x180e:  nop
086e9e0f +0x180f:  nop
086e9e10 +0x1810:  push   %ebp
086e9e11 +0x1811:  mov    %esp,%ebp
086e9e13 +0x1813:  sub    $0x48,%esp
086e9e16 +0x1816:  mov    0xc(%ebp),%eax
086e9e19 +0x1819:  mov    0x28(%ebp),%ecx
086e9e1c +0x181c:  mov    %ebx,-0xc(%ebp)
086e9e1f +0x181f:  mov    0x8(%ebp),%ebx
086e9e22 +0x1822:  mov    %esi,-0x8(%ebp)
086e9e25 +0x1825:  mov    0x18(%ebp),%esi
086e9e28 +0x1828:  mov    %edi,-0x4(%ebp)
086e9e2b +0x182b:  mov    0x1c(%ebp),%edi
086e9e2e +0x182e:  mov    (%eax),%edx
086e9e30 +0x1830:  mov    %ecx,0x20(%esp)
086e9e34 +0x1834:  mov    0x24(%ebp),%ecx
086e9e37 +0x1837:  mov    %esi,0x10(%esp)
086e9e3b +0x183b:  mov    0x10(%ebp),%esi
086e9e3e +0x183e:  mov    %edi,0x14(%esp)
086e9e42 +0x1842:  mov    0x14(%ebp),%edi
086e9e45 +0x1845:  mov    %eax,0x4(%esp)
086e9e49 +0x1849:  mov    %ecx,0x1c(%esp)
086e9e4d +0x184d:  mov    0x20(%ebp),%ecx
086e9e50 +0x1850:  mov    %esi,0x8(%esp)
086e9e54 +0x1854:  mov    %edi,0xc(%esp)
086e9e58 +0x1858:  mov    %ebx,(%esp)
086e9e5b +0x185b:  mov    %ecx,0x18(%esp)
086e9e5f +0x185f:  call   *0x10(%edx)
086e9e62 +0x1862:  mov    %ebx,%eax
086e9e64 +0x1864:  mov    -0x8(%ebp),%esi
086e9e67 +0x1867:  mov    -0xc(%ebp),%ebx
086e9e6a +0x186a:  mov    -0x4(%ebp),%edi
086e9e6d +0x186d:  sub    $0x4,%esp
086e9e70 +0x1870:  mov    %ebp,%esp
086e9e72 +0x1872:  pop    %ebp
086e9e73 +0x1873:  ret    $0x4
086e9e76 +0x1876:  nop
086e9e77 +0x1877:  nop
086e9e78 +0x1878:  nop
086e9e79 +0x1879:  nop
086e9e7a +0x187a:  nop
086e9e7b +0x187b:  nop
086e9e7c +0x187c:  nop
086e9e7d +0x187d:  nop
086e9e7e +0x187e:  nop
086e9e7f +0x187f:  nop
086e9e80 +0x1880:  push   %ebp
086e9e81 +0x1881:  mov    %esp,%ebp
086e9e83 +0x1883:  sub    $0x48,%esp
086e9e86 +0x1886:  mov    0xc(%ebp),%eax
086e9e89 +0x1889:  mov    0x28(%ebp),%ecx
086e9e8c +0x188c:  mov    %ebx,-0xc(%ebp)
086e9e8f +0x188f:  mov    0x8(%ebp),%ebx
086e9e92 +0x1892:  mov    %esi,-0x8(%ebp)
086e9e95 +0x1895:  mov    0x18(%ebp),%esi
086e9e98 +0x1898:  mov    %edi,-0x4(%ebp)
086e9e9b +0x189b:  mov    0x1c(%ebp),%edi
086e9e9e +0x189e:  mov    (%eax),%edx
086e9ea0 +0x18a0:  mov    %ecx,0x20(%esp)
086e9ea4 +0x18a4:  mov    0x24(%ebp),%ecx
086e9ea7 +0x18a7:  mov    %esi,0x10(%esp)
086e9eab +0x18ab:  mov    0x10(%ebp),%esi
086e9eae +0x18ae:  mov    %edi,0x14(%esp)
086e9eb2 +0x18b2:  mov    0x14(%ebp),%edi
086e9eb5 +0x18b5:  mov    %eax,0x4(%esp)
086e9eb9 +0x18b9:  mov    %ecx,0x1c(%esp)
086e9ebd +0x18bd:  mov    0x20(%ebp),%ecx
086e9ec0 +0x18c0:  mov    %esi,0x8(%esp)
086e9ec4 +0x18c4:  mov    %edi,0xc(%esp)
086e9ec8 +0x18c8:  mov    %ebx,(%esp)
086e9ecb +0x18cb:  mov    %ecx,0x18(%esp)
086e9ecf +0x18cf:  call   *0x14(%edx)
086e9ed2 +0x18d2:  mov    %ebx,%eax
086e9ed4 +0x18d4:  mov    -0x8(%ebp),%esi
086e9ed7 +0x18d7:  mov    -0xc(%ebp),%ebx
086e9eda +0x18da:  mov    -0x4(%ebp),%edi
086e9edd +0x18dd:  sub    $0x4,%esp
086e9ee0 +0x18e0:  mov    %ebp,%esp
086e9ee2 +0x18e2:  pop    %ebp
086e9ee3 +0x18e3:  ret    $0x4
086e9ee6 +0x18e6:  nop
086e9ee7 +0x18e7:  nop
086e9ee8 +0x18e8:  nop
086e9ee9 +0x18e9:  nop
086e9eea +0x18ea:  nop
086e9eeb +0x18eb:  nop
086e9eec +0x18ec:  nop
086e9eed +0x18ed:  nop
086e9eee +0x18ee:  nop
086e9eef +0x18ef:  nop
086e9ef0 +0x18f0:  push   %ebp
086e9ef1 +0x18f1:  mov    %esp,%ebp
086e9ef3 +0x18f3:  sub    $0x48,%esp
086e9ef6 +0x18f6:  mov    0xc(%ebp),%eax
086e9ef9 +0x18f9:  mov    0x28(%ebp),%ecx
086e9efc +0x18fc:  mov    %ebx,-0xc(%ebp)
086e9eff +0x18ff:  mov    0x8(%ebp),%ebx
086e9f02 +0x1902:  mov    %esi,-0x8(%ebp)
086e9f05 +0x1905:  mov    0x18(%ebp),%esi
086e9f08 +0x1908:  mov    %edi,-0x4(%ebp)
086e9f0b +0x190b:  mov    0x1c(%ebp),%edi
086e9f0e +0x190e:  mov    (%eax),%edx
086e9f10 +0x1910:  mov    %ecx,0x20(%esp)
086e9f14 +0x1914:  mov    0x24(%ebp),%ecx
086e9f17 +0x1917:  mov    %esi,0x10(%esp)
086e9f1b +0x191b:  mov    0x10(%ebp),%esi
086e9f1e +0x191e:  mov    %edi,0x14(%esp)
086e9f22 +0x1922:  mov    0x14(%ebp),%edi
086e9f25 +0x1925:  mov    %eax,0x4(%esp)
086e9f29 +0x1929:  mov    %ecx,0x1c(%esp)
086e9f2d +0x192d:  mov    0x20(%ebp),%ecx
086e9f30 +0x1930:  mov    %esi,0x8(%esp)
086e9f34 +0x1934:  mov    %edi,0xc(%esp)
086e9f38 +0x1938:  mov    %ebx,(%esp)
086e9f3b +0x193b:  mov    %ecx,0x18(%esp)
086e9f3f +0x193f:  call   *0x18(%edx)
086e9f42 +0x1942:  mov    %ebx,%eax
086e9f44 +0x1944:  mov    -0x8(%ebp),%esi
086e9f47 +0x1947:  mov    -0xc(%ebp),%ebx
086e9f4a +0x194a:  mov    -0x4(%ebp),%edi
086e9f4d +0x194d:  sub    $0x4,%esp
086e9f50 +0x1950:  mov    %ebp,%esp
086e9f52 +0x1952:  pop    %ebp
086e9f53 +0x1953:  ret    $0x4
086e9f56 +0x1956:  nop
086e9f57 +0x1957:  nop
086e9f58 +0x1958:  nop
086e9f59 +0x1959:  nop
086e9f5a +0x195a:  nop
086e9f5b +0x195b:  nop
086e9f5c +0x195c:  nop
086e9f5d +0x195d:  nop
086e9f5e +0x195e:  nop
086e9f5f +0x195f:  nop
086e9f60 +0x1960:  push   %ebp
086e9f61 +0x1961:  mov    %esp,%ebp
086e9f63 +0x1963:  sub    $0x48,%esp
086e9f66 +0x1966:  mov    0xc(%ebp),%eax
086e9f69 +0x1969:  mov    0x28(%ebp),%ecx
086e9f6c +0x196c:  mov    %ebx,-0xc(%ebp)
086e9f6f +0x196f:  mov    0x8(%ebp),%ebx
086e9f72 +0x1972:  mov    %esi,-0x8(%ebp)
086e9f75 +0x1975:  mov    0x18(%ebp),%esi
086e9f78 +0x1978:  mov    %edi,-0x4(%ebp)
086e9f7b +0x197b:  mov    0x1c(%ebp),%edi
086e9f7e +0x197e:  mov    (%eax),%edx
086e9f80 +0x1980:  mov    %ecx,0x20(%esp)
086e9f84 +0x1984:  mov    0x24(%ebp),%ecx
086e9f87 +0x1987:  mov    %esi,0x10(%esp)
086e9f8b +0x198b:  mov    0x10(%ebp),%esi
086e9f8e +0x198e:  mov    %edi,0x14(%esp)
086e9f92 +0x1992:  mov    0x14(%ebp),%edi
086e9f95 +0x1995:  mov    %eax,0x4(%esp)
086e9f99 +0x1999:  mov    %ecx,0x1c(%esp)
086e9f9d +0x199d:  mov    0x20(%ebp),%ecx
086e9fa0 +0x19a0:  mov    %esi,0x8(%esp)
086e9fa4 +0x19a4:  mov    %edi,0xc(%esp)
086e9fa8 +0x19a8:  mov    %ebx,(%esp)
086e9fab +0x19ab:  mov    %ecx,0x18(%esp)
086e9faf +0x19af:  call   *0x1c(%edx)
086e9fb2 +0x19b2:  mov    %ebx,%eax
086e9fb4 +0x19b4:  mov    -0x8(%ebp),%esi
086e9fb7 +0x19b7:  mov    -0xc(%ebp),%ebx
086e9fba +0x19ba:  mov    -0x4(%ebp),%edi
086e9fbd +0x19bd:  sub    $0x4,%esp
086e9fc0 +0x19c0:  mov    %ebp,%esp
086e9fc2 +0x19c2:  pop    %ebp
086e9fc3 +0x19c3:  ret    $0x4
086e9fc6 +0x19c6:  nop
086e9fc7 +0x19c7:  nop
086e9fc8 +0x19c8:  nop
086e9fc9 +0x19c9:  nop
086e9fca +0x19ca:  nop
086e9fcb +0x19cb:  nop
086e9fcc +0x19cc:  nop
086e9fcd +0x19cd:  nop
086e9fce +0x19ce:  nop
086e9fcf +0x19cf:  nop
086e9fd0 +0x19d0:  push   %ebp
086e9fd1 +0x19d1:  xor    %eax,%eax
086e9fd3 +0x19d3:  mov    %esp,%ebp
086e9fd5 +0x19d5:  pop    %ebp
086e9fd6 +0x19d6:  ret
086e9fd7 +0x19d7:  nop
086e9fd8 +0x19d8:  nop
086e9fd9 +0x19d9:  nop
086e9fda +0x19da:  nop
086e9fdb +0x19db:  nop
086e9fdc +0x19dc:  nop
086e9fdd +0x19dd:  nop
086e9fde +0x19de:  nop
086e9fdf +0x19df:  nop
086e9fe0 +0x19e0:  push   %ebp
086e9fe1 +0x19e1:  xor    %edx,%edx
086e9fe3 +0x19e3:  mov    %esp,%ebp
086e9fe5 +0x19e5:  mov    0x8(%ebp),%eax
086e9fe8 +0x19e8:  cmpl   $0x0,0x10(%ebp)
086e9fec +0x19ec:  setne  %dl
086e9fef +0x19ef:  mov    %edx,0x4(%eax)
086e9ff2 +0x19f2:  movl   $&_ZTVSt15time_get_bynameIcSt19istreambuf_iteratorIcSt11char_traitsIcEEE+0x8,(%eax)
086e9ff8 +0x19f8:  pop    %ebp
086e9ff9 +0x19f9:  ret
086e9ffa +0x19fa:  nop
086e9ffb +0x19fb:  nop
086e9ffc +0x19fc:  nop
086e9ffd +0x19fd:  nop
086e9ffe +0x19fe:  nop
086e9fff +0x19ff:  nop
086ea000 +0x1a00:  push   %ebp
086ea001 +0x1a01:  mov    %esp,%ebp
086ea003 +0x1a03:  sub    $0x8,%esp
086ea006 +0x1a06:  mov    0x8(%ebp),%eax
086ea009 +0x1a09:  mov    (%eax),%edx
086ea00b +0x1a0b:  mov    0x8(%edx),%eax
086ea00e +0x1a0e:  leave
086ea00f +0x1a0f:  jmp    *%eax
086ea011 +0x1a11:  nop
086ea012 +0x1a12:  nop
086ea013 +0x1a13:  nop
086ea014 +0x1a14:  nop
086ea015 +0x1a15:  nop
086ea016 +0x1a16:  nop
086ea017 +0x1a17:  nop
086ea018 +0x1a18:  nop
086ea019 +0x1a19:  nop
086ea01a +0x1a1a:  nop
086ea01b +0x1a1b:  nop
086ea01c +0x1a1c:  nop
086ea01d +0x1a1d:  nop
086ea01e +0x1a1e:  nop
086ea01f +0x1a1f:  nop
086ea020 +0x1a20:  push   %ebp
086ea021 +0x1a21:  mov    %esp,%ebp
086ea023 +0x1a23:  push   %ebx
086ea024 +0x1a24:  sub    $0x24,%esp
086ea027 +0x1a27:  mov    0xc(%ebp),%eax
086ea02a +0x1a2a:  mov    0x1c(%ebp),%ecx
086ea02d +0x1a2d:  mov    0x8(%ebp),%ebx
086ea030 +0x1a30:  mov    (%eax),%edx
086ea032 +0x1a32:  mov    %ecx,0x14(%esp)
086ea036 +0x1a36:  mov    0x18(%ebp),%ecx
086ea039 +0x1a39:  mov    %eax,0x4(%esp)
086ea03d +0x1a3d:  mov    %ebx,(%esp)
086ea040 +0x1a40:  mov    %ecx,0x10(%esp)
086ea044 +0x1a44:  mov    0x14(%ebp),%ecx
086ea047 +0x1a47:  mov    %ecx,0xc(%esp)
086ea04b +0x1a4b:  mov    0x10(%ebp),%ecx
086ea04e +0x1a4e:  mov    %ecx,0x8(%esp)
086ea052 +0x1a52:  call   *0xc(%edx)
086ea055 +0x1a55:  mov    %ebx,%eax
086ea057 +0x1a57:  mov    -0x4(%ebp),%ebx
086ea05a +0x1a5a:  sub    $0x4,%esp
086ea05d +0x1a5d:  leave
086ea05e +0x1a5e:  ret    $0x4
086ea061 +0x1a61:  nop
086ea062 +0x1a62:  nop
086ea063 +0x1a63:  nop
086ea064 +0x1a64:  nop
086ea065 +0x1a65:  nop
086ea066 +0x1a66:  nop
086ea067 +0x1a67:  nop
086ea068 +0x1a68:  nop
086ea069 +0x1a69:  nop
086ea06a +0x1a6a:  nop
086ea06b +0x1a6b:  nop
086ea06c +0x1a6c:  nop
086ea06d +0x1a6d:  nop
086ea06e +0x1a6e:  nop
086ea06f +0x1a6f:  nop
086ea070 +0x1a70:  push   %ebp
086ea071 +0x1a71:  mov    %esp,%ebp
086ea073 +0x1a73:  sub    $0x8,%esp
086ea076 +0x1a76:  mov    0x8(%ebp),%eax
086ea079 +0x1a79:  mov    (%eax),%edx
086ea07b +0x1a7b:  mov    0x10(%edx),%eax
086ea07e +0x1a7e:  leave
086ea07f +0x1a7f:  jmp    *%eax
086ea081 +0x1a81:  nop
086ea082 +0x1a82:  nop
086ea083 +0x1a83:  nop
086ea084 +0x1a84:  nop
086ea085 +0x1a85:  nop
086ea086 +0x1a86:  nop
086ea087 +0x1a87:  nop
086ea088 +0x1a88:  nop
086ea089 +0x1a89:  nop
086ea08a +0x1a8a:  nop
086ea08b +0x1a8b:  nop
086ea08c +0x1a8c:  nop
086ea08d +0x1a8d:  nop
086ea08e +0x1a8e:  nop
086ea08f +0x1a8f:  nop
086ea090 +0x1a90:  push   %ebp
086ea091 +0x1a91:  mov    %esp,%ebp
086ea093 +0x1a93:  pop    %ebp
086ea094 +0x1a94:  ret
086ea095 +0x1a95:  nop
086ea096 +0x1a96:  nop
086ea097 +0x1a97:  nop
086ea098 +0x1a98:  nop
086ea099 +0x1a99:  nop
086ea09a +0x1a9a:  nop
086ea09b +0x1a9b:  nop
086ea09c +0x1a9c:  nop
086ea09d +0x1a9d:  nop
086ea09e +0x1a9e:  nop
086ea09f +0x1a9f:  nop
086ea0a0 +0x1aa0:  push   %ebp
086ea0a1 +0x1aa1:  mov    %esp,%ebp
086ea0a3 +0x1aa3:  mov    0xc(%ebp),%eax
086ea0a6 +0x1aa6:  pop    %ebp
086ea0a7 +0x1aa7:  mov    (%eax),%eax
086ea0a9 +0x1aa9:  ret
086ea0aa +0x1aaa:  nop
086ea0ab +0x1aab:  nop
086ea0ac +0x1aac:  nop
086ea0ad +0x1aad:  nop
086ea0ae +0x1aae:  nop
086ea0af +0x1aaf:  nop
086ea0b0 +0x1ab0:  push   %ebp
086ea0b1 +0x1ab1:  mov    %esp,%ebp
086ea0b3 +0x1ab3:  mov    0x8(%ebp),%eax
086ea0b6 +0x1ab6:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,(%eax)
086ea0bc +0x1abc:  pop    %ebp
086ea0bd +0x1abd:  ret    $0x4
086ea0c0 +0x1ac0:  push   %ebp
086ea0c1 +0x1ac1:  mov    %esp,%ebp
086ea0c3 +0x1ac3:  sub    $0x8,%esp
086ea0c6 +0x1ac6:  mov    0x8(%ebp),%eax
086ea0c9 +0x1ac9:  mov    (%eax),%edx
086ea0cb +0x1acb:  mov    0x8(%edx),%eax
086ea0ce +0x1ace:  leave
086ea0cf +0x1acf:  jmp    *%eax
086ea0d1 +0x1ad1:  nop
086ea0d2 +0x1ad2:  nop
086ea0d3 +0x1ad3:  nop
086ea0d4 +0x1ad4:  nop
086ea0d5 +0x1ad5:  nop
086ea0d6 +0x1ad6:  nop
086ea0d7 +0x1ad7:  nop
086ea0d8 +0x1ad8:  nop
086ea0d9 +0x1ad9:  nop
086ea0da +0x1ada:  nop
086ea0db +0x1adb:  nop
086ea0dc +0x1adc:  nop
086ea0dd +0x1add:  nop
086ea0de +0x1ade:  nop
086ea0df +0x1adf:  nop
086ea0e0 +0x1ae0:  push   %ebp
086ea0e1 +0x1ae1:  mov    %esp,%ebp
086ea0e3 +0x1ae3:  push   %ebx
086ea0e4 +0x1ae4:  sub    $0x14,%esp
086ea0e7 +0x1ae7:  mov    0xc(%ebp),%eax
086ea0ea +0x1aea:  mov    0x14(%ebp),%ecx
086ea0ed +0x1aed:  mov    0x8(%ebp),%ebx
086ea0f0 +0x1af0:  mov    (%eax),%edx
086ea0f2 +0x1af2:  mov    %ecx,0xc(%esp)
086ea0f6 +0x1af6:  mov    0x10(%ebp),%ecx
086ea0f9 +0x1af9:  mov    %eax,0x4(%esp)
086ea0fd +0x1afd:  mov    %ebx,(%esp)
086ea100 +0x1b00:  mov    %ecx,0x8(%esp)
086ea104 +0x1b04:  call   *0xc(%edx)
086ea107 +0x1b07:  mov    %ebx,%eax
086ea109 +0x1b09:  mov    -0x4(%ebp),%ebx
086ea10c +0x1b0c:  sub    $0x4,%esp
086ea10f +0x1b0f:  leave
086ea110 +0x1b10:  ret    $0x4
086ea113 +0x1b13:  nop
086ea114 +0x1b14:  nop
086ea115 +0x1b15:  nop
086ea116 +0x1b16:  nop
086ea117 +0x1b17:  nop
086ea118 +0x1b18:  nop
086ea119 +0x1b19:  nop
086ea11a +0x1b1a:  nop
086ea11b +0x1b1b:  nop
086ea11c +0x1b1c:  nop
086ea11d +0x1b1d:  nop
086ea11e +0x1b1e:  nop
086ea11f +0x1b1f:  nop
086ea120 +0x1b20:  push   %ebp
086ea121 +0x1b21:  mov    %esp,%ebp
086ea123 +0x1b23:  sub    $0x8,%esp
086ea126 +0x1b26:  mov    0x8(%ebp),%eax
086ea129 +0x1b29:  mov    (%eax),%edx
086ea12b +0x1b2b:  mov    0x10(%edx),%eax
086ea12e +0x1b2e:  leave
086ea12f +0x1b2f:  jmp    *%eax
086ea131 +0x1b31:  nop
086ea132 +0x1b32:  nop
086ea133 +0x1b33:  nop
086ea134 +0x1b34:  nop
086ea135 +0x1b35:  nop
086ea136 +0x1b36:  nop
086ea137 +0x1b37:  nop
086ea138 +0x1b38:  nop
086ea139 +0x1b39:  nop
086ea13a +0x1b3a:  nop
086ea13b +0x1b3b:  nop
086ea13c +0x1b3c:  nop
086ea13d +0x1b3d:  nop
086ea13e +0x1b3e:  nop
086ea13f +0x1b3f:  nop
086ea140 +0x1b40:  push   %ebp
086ea141 +0x1b41:  xor    %ecx,%ecx
086ea143 +0x1b43:  mov    %esp,%ebp
086ea145 +0x1b45:  xor    %eax,%eax
086ea147 +0x1b47:  push   %ebx
086ea148 +0x1b48:  mov    0xc(%ebp),%edx
086ea14b +0x1b4b:  mov    0x10(%ebp),%ebx
086ea14e +0x1b4e:  cmp    %ebx,%edx
086ea150 +0x1b50:  jae    086ea169 <+0x1b69>
086ea152 +0x1b52:  lea    0x0(%esi),%esi
086ea158 +0x1b58:  movsbl (%edx),%eax
086ea15b +0x1b5b:  ror    $0x19,%ecx
086ea15e +0x1b5e:  add    $0x1,%edx
086ea161 +0x1b61:  add    %eax,%ecx
086ea163 +0x1b63:  cmp    %edx,%ebx
086ea165 +0x1b65:  ja     086ea158 <+0x1b58>
086ea167 +0x1b67:  mov    %ecx,%eax
086ea169 +0x1b69:  pop    %ebx
086ea16a +0x1b6a:  pop    %ebp
086ea16b +0x1b6b:  ret
086ea16c +0x1b6c:  nop
086ea16d +0x1b6d:  nop
086ea16e +0x1b6e:  nop
086ea16f +0x1b6f:  nop
086ea170 +0x1b70:  push   %ebp
086ea171 +0x1b71:  mov    %esp,%ebp
086ea173 +0x1b73:  push   %edi
086ea174 +0x1b74:  push   %esi
086ea175 +0x1b75:  push   %ebx
086ea176 +0x1b76:  xor    %ebx,%ebx
086ea178 +0x1b78:  sub    $0x18,%esp
086ea17b +0x1b7b:  mov    0x10(%ebp),%edi
086ea17e +0x1b7e:  movzbl 0xc(%ebp),%edx
086ea182 +0x1b82:  mov    0x8(%ebp),%eax
086ea185 +0x1b85:  mov    0x1c(%ebp),%ecx
086ea188 +0x1b88:  mov    %dl,-0x11(%ebp)
086ea18b +0x1b8b:  movzbl (%edi),%esi
086ea18e +0x1b8e:  xor    %edx,%edx
086ea190 +0x1b90:  mov    %edi,-0x18(%ebp)
086ea193 +0x1b93:  mov    0x14(%ebp),%edi
086ea196 +0x1b96:  mov    %eax,-0x24(%ebp)
086ea199 +0x1b99:  mov    %esi,%eax
086ea19b +0x1b9b:  sub    $0x1,%edi
086ea19e +0x1b9e:  mov    %edi,-0x1c(%ebp)
086ea1a1 +0x1ba1:  lea    0x0(%esi,%eiz,1),%esi
086ea1a8 +0x1ba8:  mov    %ecx,%edi
086ea1aa +0x1baa:  movsbl %al,%esi
086ea1ad +0x1bad:  sub    0x18(%ebp),%edi
086ea1b0 +0x1bb0:  cmp    %esi,%edi
086ea1b2 +0x1bb2:  jg     086ea248 <+0x1c48>
086ea1b8 +0x1bb8:  cmp    %ecx,0x18(%ebp)
086ea1bb +0x1bbb:  mov    -0x24(%ebp),%eax
086ea1be +0x1bbe:  je     086ea1e1 <+0x1be1>
086ea1c0 +0x1bc0:  mov    0x18(%ebp),%esi
086ea1c3 +0x1bc3:  mov    %eax,%edi
086ea1c5 +0x1bc5:  mov    %ebx,-0x10(%ebp)
086ea1c8 +0x1bc8:  movzbl (%esi),%ebx
086ea1cb +0x1bcb:  add    $0x1,%esi
086ea1ce +0x1bce:  mov    %bl,(%edi)
086ea1d0 +0x1bd0:  add    $0x1,%edi
086ea1d3 +0x1bd3:  cmp    %ecx,%esi
086ea1d5 +0x1bd5:  jne    086ea1c8 <+0x1bc8>
086ea1d7 +0x1bd7:  mov    %ecx,%esi
086ea1d9 +0x1bd9:  mov    -0x10(%ebp),%ebx
086ea1dc +0x1bdc:  sub    0x18(%ebp),%esi
086ea1df +0x1bdf:  add    %esi,%eax
086ea1e1 +0x1be1:  mov    %ecx,-0x10(%ebp)
086ea1e4 +0x1be4:  mov    -0x18(%ebp),%esi
086ea1e7 +0x1be7:  mov    %edx,-0x1c(%ebp)
086ea1ea +0x1bea:  jmp    086ea1f5 <+0x1bf5>
086ea1ec +0x1bec:  lea    0x0(%esi,%eiz,1),%esi
086ea1f0 +0x1bf0:  mov    %ecx,%eax
086ea1f2 +0x1bf2:  sub    $0x1,%ebx
086ea1f5 +0x1bf5:  test   %ebx,%ebx
086ea1f7 +0x1bf7:  je     086ea288 <+0x1c88>
086ea1fd +0x1bfd:  movzbl -0x11(%ebp),%edx
086ea201 +0x1c01:  lea    0x1(%eax),%ecx
086ea204 +0x1c04:  mov    %dl,(%eax)
086ea206 +0x1c06:  movzbl (%esi),%edx
086ea209 +0x1c09:  test   %dl,%dl
086ea20b +0x1c0b:  jle    086ea1f0 <+0x1bf0>
086ea20d +0x1c0d:  lea    -0x1(%edx),%edi
086ea210 +0x1c10:  and    $0xff,%edi
086ea216 +0x1c16:  add    $0x1,%edi
086ea219 +0x1c19:  mov    %edi,-0x18(%ebp)
086ea21c +0x1c1c:  xor    %edi,%edi
086ea21e +0x1c1e:  mov    %ecx,-0x24(%ebp)
086ea221 +0x1c21:  mov    -0x10(%ebp),%ecx
086ea224 +0x1c24:  movzbl (%ecx,%edi,1),%ecx
086ea228 +0x1c28:  mov    %cl,0x1(%eax,%edi,1)
086ea22c +0x1c2c:  add    $0x1,%edi
086ea22f +0x1c2f:  cmp    -0x18(%ebp),%edi
086ea232 +0x1c32:  jne    086ea221 <+0x1c21>
086ea234 +0x1c34:  mov    -0x24(%ebp),%ecx
086ea237 +0x1c37:  sub    $0x1,%edx
086ea23a +0x1c3a:  movzbl %dl,%edx
086ea23d +0x1c3d:  add    $0x1,%edx
086ea240 +0x1c40:  add    %edx,-0x10(%ebp)
086ea243 +0x1c43:  lea    (%ecx,%edx,1),%eax
086ea246 +0x1c46:  jmp    086ea1f2 <+0x1bf2>
086ea248 +0x1c48:  test   %al,%al
086ea24a +0x1c4a:  jle    086ea1b8 <+0x1bb8>
086ea250 +0x1c50:  cmp    $0x7f,%al
086ea252 +0x1c52:  je     086ea1b8 <+0x1bb8>
086ea258 +0x1c58:  cmp    -0x1c(%ebp),%edx
086ea25b +0x1c5b:  jae    086ea278 <+0x1c78>
086ea25d +0x1c5d:  mov    0x10(%ebp),%edi
086ea260 +0x1c60:  add    $0x1,%edx
086ea263 +0x1c63:  sub    %esi,%ecx
086ea265 +0x1c65:  movzbl (%edi,%edx,1),%eax
086ea269 +0x1c69:  add    %edx,%edi
086ea26b +0x1c6b:  mov    %edi,-0x18(%ebp)
086ea26e +0x1c6e:  jmp    086ea1a8 <+0x1ba8>
086ea273 +0x1c73:  nop
086ea274 +0x1c74:  lea    0x0(%esi,%eiz,1),%esi
086ea278 +0x1c78:  add    $0x1,%ebx
086ea27b +0x1c7b:  sub    %esi,%ecx
086ea27d +0x1c7d:  jmp    086ea1a8 <+0x1ba8>
086ea282 +0x1c82:  lea    0x0(%esi),%esi
086ea288 +0x1c88:  mov    -0x1c(%ebp),%edx
086ea28b +0x1c8b:  test   %edx,%edx
086ea28d +0x1c8d:  je     086ea2ac <+0x1cac>
086ea28f +0x1c8f:  movzbl -0x11(%ebp),%ecx
086ea293 +0x1c93:  sub    $0x1,%edx
086ea296 +0x1c96:  lea    0x1(%eax),%ebx
086ea299 +0x1c99:  mov    %cl,(%eax)
086ea29b +0x1c9b:  mov    0x10(%ebp),%esi
086ea29e +0x1c9e:  movzbl (%esi,%edx,1),%ecx
086ea2a2 +0x1ca2:  test   %cl,%cl
086ea2a4 +0x1ca4:  jg     086ea2b8 <+0x1cb8>
086ea2a6 +0x1ca6:  test   %edx,%edx
086ea2a8 +0x1ca8:  mov    %ebx,%eax
086ea2aa +0x1caa:  jne    086ea28f <+0x1c8f>
086ea2ac +0x1cac:  add    $0x18,%esp
086ea2af +0x1caf:  pop    %ebx
086ea2b0 +0x1cb0:  pop    %esi
086ea2b1 +0x1cb1:  pop    %edi
086ea2b2 +0x1cb2:  pop    %ebp
086ea2b3 +0x1cb3:  ret
086ea2b4 +0x1cb4:  lea    0x0(%esi,%eiz,1),%esi
086ea2b8 +0x1cb8:  lea    -0x1(%ecx),%edi
086ea2bb +0x1cbb:  xor    %esi,%esi
086ea2bd +0x1cbd:  and    $0xff,%edi
086ea2c3 +0x1cc3:  add    $0x1,%edi
086ea2c6 +0x1cc6:  mov    %edx,-0x18(%ebp)
086ea2c9 +0x1cc9:  mov    -0x10(%ebp),%edx
086ea2cc +0x1ccc:  movzbl (%edx,%esi,1),%edx
086ea2d0 +0x1cd0:  mov    %dl,0x1(%eax,%esi,1)
086ea2d4 +0x1cd4:  add    $0x1,%esi
086ea2d7 +0x1cd7:  cmp    %edi,%esi
086ea2d9 +0x1cd9:  jne    086ea2c9 <+0x1cc9>
086ea2db +0x1cdb:  sub    $0x1,%ecx
086ea2de +0x1cde:  mov    -0x18(%ebp),%edx
086ea2e1 +0x1ce1:  movzbl %cl,%ecx
086ea2e4 +0x1ce4:  add    $0x1,%ecx
086ea2e7 +0x1ce7:  lea    (%ebx,%ecx,1),%eax
086ea2ea +0x1cea:  add    %ecx,-0x10(%ebp)
086ea2ed +0x1ced:  jmp    086ea28b <+0x1c8b>
086ea2ef +0x1cef:  nop
086ea2f0 +0x1cf0:  push   %ebp
086ea2f1 +0x1cf1:  mov    %esp,%ebp
086ea2f3 +0x1cf3:  sub    $0x28,%esp
086ea2f6 +0x1cf6:  mov    %ebx,-0x8(%ebp)
086ea2f9 +0x1cf9:  mov    0x24(%ebp),%ebx
086ea2fc +0x1cfc:  mov    0x20(%ebp),%eax
086ea2ff +0x1cff:  mov    %esi,-0x4(%ebp)
086ea302 +0x1d02:  movsbl 0x14(%ebp),%edx
086ea306 +0x1d06:  mov    0x1c(%ebp),%esi
086ea309 +0x1d09:  mov    (%ebx),%ecx
086ea30b +0x1d0b:  mov    %eax,0x10(%esp)
086ea30f +0x1d0f:  mov    %edx,0x4(%esp)
086ea313 +0x1d13:  mov    %esi,(%esp)
086ea316 +0x1d16:  add    %eax,%ecx
086ea318 +0x1d18:  mov    0x10(%ebp),%eax
086ea31b +0x1d1b:  mov    %ecx,0x14(%esp)
086ea31f +0x1d1f:  mov    %eax,0xc(%esp)
086ea323 +0x1d23:  mov    0xc(%ebp),%eax
086ea326 +0x1d26:  mov    %eax,0x8(%esp)
086ea32a +0x1d2a:  call   086ea170 <+0x1b70>
086ea32f +0x1d2f:  sub    %esi,%eax
086ea331 +0x1d31:  mov    %eax,(%ebx)
086ea333 +0x1d33:  mov    -0x8(%ebp),%ebx
086ea336 +0x1d36:  mov    -0x4(%ebp),%esi
086ea339 +0x1d39:  mov    %ebp,%esp
086ea33b +0x1d3b:  pop    %ebp
086ea33c +0x1d3c:  ret
086ea33d +0x1d3d:  nop
086ea33e +0x1d3e:  nop
086ea33f +0x1d3f:  nop
```

## 反编译 C

```c
// std::basic_istream<char, @ 0x86e8600

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::istream& std::getline<char, std::char_traits<char>, std::allocator<char> >(std::istream&,
   std::string&, char) */

istream * std::getline<char,std::char_traits<char>,std::allocator<char>>
                    (istream *param_1,string *param_2,char param_3)

{
  streambuf *this;
  _Ios_Iostate _Var1;
  void *pvVar2;
  byte *pbVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  size_t __n;
  uint uVar8;
  int local_50;
  sentry local_1d [13];
  
  istream::sentry::sentry(local_1d,param_1,true);
  _Var1 = _S_failbit;
  if (local_1d[0] == (sentry)0x0) goto LAB_086e8637;
                    /* try { // try from 086e867f to 086e883d has its CatchHandler @ 086e8857 */
  string::_M_mutate((string *)param_2,0,*(uint *)((param_2->_M_dataplus)._M_p + -0xc),0);
  this = *(streambuf **)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x78);
  if (*(byte **)(this + 8) < *(byte **)(this + 0xc)) {
    uVar7 = (uint)**(byte **)(this + 8);
LAB_086e869f:
    uVar8 = 0;
    do {
      if ((byte)param_3 == uVar7) {
LAB_086e86b8:
        uVar8 = uVar8 + 1;
        streambuf::sbumpc(this);
        _Var1 = _S_goodbit;
        goto LAB_086e86c8;
      }
      pcVar4 = *(char **)(this + 8);
      __n = 0x3ffffffc - uVar8;
      if (*(int *)(this + 0xc) - (int)pcVar4 < (int)(0x3ffffffc - uVar8)) {
        __n = *(int *)(this + 0xc) - (int)pcVar4;
      }
      if ((int)__n < 2) {
        pcVar4 = (param_2->_M_dataplus)._M_p;
        local_50 = *(int *)(pcVar4 + -0xc);
        uVar6 = local_50 + 1;
        if ((*(uint *)(pcVar4 + -8) < uVar6) || (0 < *(int *)(pcVar4 + -4))) {
          string::reserve((string *)param_2,uVar6);
          pcVar4 = (param_2->_M_dataplus)._M_p;
          local_50 = *(int *)(pcVar4 + -0xc);
        }
        pcVar4[local_50] = (char)uVar7;
        pcVar4 = (param_2->_M_dataplus)._M_p;
        if (pcVar4 != &DAT_0948ccfc) {
          pcVar4[-0xffffffff00000004] = '\0';
          pcVar4[-0xffffffff00000003] = '\0';
          pcVar4[-0xffffffff00000002] = '\0';
          pcVar4[-0xffffffff00000001] = '\0';
          *(uint *)(pcVar4 + -0xc) = uVar6;
          pcVar4[uVar6] = '\0';
        }
        uVar8 = uVar8 + 1;
        if (*(uint *)(this + 8) < *(uint *)(this + 0xc)) {
          pbVar3 = (byte *)(*(uint *)(this + 8) + 1);
          *(byte **)(this + 8) = pbVar3;
LAB_086e87e6:
          if (*(byte **)(this + 0xc) <= pbVar3) goto LAB_086e87ef;
          goto LAB_086e8759;
        }
        iVar5 = (**(code **)(*(int *)this + 0x28))(this);
        uVar7 = 0xffffffff;
        if (iVar5 != -1) {
          pbVar3 = *(byte **)(this + 8);
          goto LAB_086e87e6;
        }
      }
      else {
        pvVar2 = memchr(pcVar4,(int)param_3,__n);
        if (pvVar2 != (void *)0x0) {
          __n = (int)pvVar2 - (int)pcVar4;
        }
        string::append((string *)param_2,pcVar4,__n);
        uVar8 = uVar8 + __n;
        pbVar3 = (byte *)(*(int *)(this + 8) + __n);
        *(byte **)(this + 8) = pbVar3;
        if (pbVar3 < *(byte **)(this + 0xc)) {
LAB_086e8759:
          uVar7 = (uint)*pbVar3;
        }
        else {
LAB_086e87ef:
          uVar7 = (**(code **)(*(int *)this + 0x24))(this);
        }
      }
      if (0x3ffffffb < uVar8) {
        if (uVar7 != 0xffffffff) {
          _Var1 = _S_failbit;
          if ((byte)param_3 == uVar7) goto LAB_086e86b8;
          goto LAB_086e86c8;
        }
        break;
      }
    } while (uVar7 != 0xffffffff);
  }
  else {
    uVar7 = (**(code **)(*(int *)this + 0x24))(this);
    uVar8 = 0;
    if (uVar7 != 0xffffffff) goto LAB_086e869f;
  }
  _Var1 = _S_eofbit;
LAB_086e86c8:
  if (uVar8 == 0) {
    _Var1 = _Var1 | _S_failbit;
  }
  else if (_Var1 == _S_goodbit) {
    return param_1;
  }
LAB_086e8637:
  ios::clear((ios *)(param_1 + *(int *)(*(int *)param_1 + -0xc)),
             _Var1 | *(_Ios_Iostate *)((ios *)(param_1 + *(int *)(*(int *)param_1 + -0xc)) + 0x14));
  return param_1;
}
```

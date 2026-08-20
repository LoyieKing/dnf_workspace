# loadScript

`_ZN23LevelupSupport2ndScript10loadScriptEv`

`LevelupSupport2ndScript::loadScript()`

| 类 | 地址 |
|---|---|
| `LevelupSupport2ndScript` | `0x08ab55a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab55a4  _ZN23LevelupSupport2ndScript10loadScriptEv
#           LevelupSupport2ndScript::loadScript()
# range [0x08ab55a4, 0x08ab5963]
08ab55a4 +0x000:  push   %ebp
08ab55a5 +0x001:  mov    %esp,%ebp
08ab55a7 +0x003:  push   %edi
08ab55a8 +0x004:  push   %esi
08ab55a9 +0x005:  push   %ebx
08ab55aa +0x006:  sub    $0x6c,%esp
08ab55ad +0x009:  movl   $"tw_LevelupSupport2nd.evt",0x4(%esp)
08ab55b5 +0x011:  movl   $"Event/",(%esp)
08ab55bc +0x018:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
08ab55c1 +0x01d:  xor    $0x1,%eax
08ab55c4 +0x020:  test   %al,%al
08ab55c6 +0x022:  je     08ab55d2 <+0x2e>
08ab55c8 +0x024:  mov    $0xffffffff,%ebx
08ab55cd +0x029:  jmp    08ab5956 <+0x3b2>
08ab55d2 +0x02e:  lea    -0x44(%ebp),%eax
08ab55d5 +0x031:  mov    %eax,(%esp)
08ab55d8 +0x034:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08ab55dd +0x039:  movb   $0x0,-0x45(%ebp)
08ab55e1 +0x03d:  movb   $0x0,-0x46(%ebp)
08ab55e5 +0x041:  movl   $0x0,-0x4c(%ebp)
08ab55ec +0x048:  lea    -0x58(%ebp),%eax
08ab55ef +0x04b:  mov    %eax,(%esp)
08ab55f2 +0x04e:  call   08ab5cf6 <_GLOBAL__I__ZN20LevelupSupportSciprtC2Ev+0x2ce>  ; global constructors keyed to LevelupSupportSciprt::LevelupSupportSciprt()+0x2ce
08ab55f7 +0x053:  jmp    08ab55fd <+0x59>
08ab55f9 +0x055:  nop
08ab55fa +0x056:  jmp    08ab55fd <+0x59>
08ab55fc +0x058:  nop
08ab55fd +0x059:  movl   $0x1,0x4(%esp)
08ab5605 +0x061:  lea    -0x44(%ebp),%eax
08ab5608 +0x064:  mov    %eax,(%esp)
08ab560b +0x067:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
08ab5610 +0x06c:  xor    $0x1,%eax
08ab5613 +0x06f:  test   %al,%al
08ab5615 +0x071:  jne    08ab58f8 <+0x354>
08ab561b +0x077:  movl   $"[job type]",0x4(%esp)
08ab5623 +0x07f:  lea    -0x44(%ebp),%eax
08ab5626 +0x082:  mov    %eax,(%esp)
08ab5629 +0x085:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08ab562e +0x08a:  test   %al,%al
08ab5630 +0x08c:  je     08ab567d <+0xd9>
08ab5632 +0x08e:  lea    -0x5c(%ebp),%eax
08ab5635 +0x091:  mov    %eax,(%esp)
08ab5638 +0x094:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08ab563d +0x099:  lea    -0x5c(%ebp),%eax
08ab5640 +0x09c:  mov    %eax,(%esp)
08ab5643 +0x09f:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
08ab5648 +0x0a4:  lea    -0x5c(%ebp),%eax
08ab564b +0x0a7:  mov    %eax,(%esp)
08ab564e +0x0aa:  call   089bbc0f <_Z26getCharacterJobToEnumValueRSs>  ; getCharacterJobToEnumValue(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
08ab5653 +0x0af:  mov    0x8(%ebp),%edx
08ab5656 +0x0b2:  mov    %eax,(%edx)
08ab5658 +0x0b4:  lea    -0x5c(%ebp),%eax
08ab565b +0x0b7:  mov    %eax,(%esp)
08ab565e +0x0ba:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ab5663 +0x0bf:  jmp    08ab55fd <+0x59>
08ab5665 +0x0c1:  mov    %edx,%ebx
08ab5667 +0x0c3:  mov    %eax,%esi
08ab5669 +0x0c5:  lea    -0x5c(%ebp),%eax
08ab566c +0x0c8:  mov    %eax,(%esp)
08ab566f +0x0cb:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ab5674 +0x0d0:  mov    %esi,%eax
08ab5676 +0x0d2:  mov    %ebx,%edx
08ab5678 +0x0d4:  jmp    08ab590e <+0x36a>
08ab567d +0x0d9:  movl   $"[step]",0x4(%esp)
08ab5685 +0x0e1:  lea    -0x44(%ebp),%eax
08ab5688 +0x0e4:  mov    %eax,(%esp)
08ab568b +0x0e7:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08ab5690 +0x0ec:  test   %al,%al
08ab5692 +0x0ee:  je     08ab58a0 <+0x2fc>
08ab5698 +0x0f4:  movl   $0x1,0x4(%esp)
08ab56a0 +0x0fc:  lea    -0x44(%ebp),%eax
08ab56a3 +0x0ff:  mov    %eax,(%esp)
08ab56a6 +0x102:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
08ab56ab +0x107:  xor    $0x1,%eax
08ab56ae +0x10a:  test   %al,%al
08ab56b0 +0x10c:  jne    08ab58fb <+0x357>
08ab56b6 +0x112:  movl   $"[level]",0x4(%esp)
08ab56be +0x11a:  lea    -0x44(%ebp),%eax
08ab56c1 +0x11d:  mov    %eax,(%esp)
08ab56c4 +0x120:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08ab56c9 +0x125:  test   %al,%al
08ab56cb +0x127:  je     08ab56dc <+0x138>
08ab56cd +0x129:  movl   $0x0,(%esp)
08ab56d4 +0x130:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08ab56d9 +0x135:  mov    %eax,-0x4c(%ebp)
08ab56dc +0x138:  movl   $0x1,0x4(%esp)
08ab56e4 +0x140:  lea    -0x44(%ebp),%eax
08ab56e7 +0x143:  mov    %eax,(%esp)
08ab56ea +0x146:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
08ab56ef +0x14b:  xor    $0x1,%eax
08ab56f2 +0x14e:  test   %al,%al
08ab56f4 +0x150:  jne    08ab58fe <+0x35a>
08ab56fa +0x156:  movl   $"[reward]",0x4(%esp)
08ab5702 +0x15e:  lea    -0x44(%ebp),%eax
08ab5705 +0x161:  mov    %eax,(%esp)
08ab5708 +0x164:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08ab570d +0x169:  test   %al,%al
08ab570f +0x16b:  je     08ab577a <+0x1d6>
08ab5711 +0x16d:  movl   $0x1,0xc(%esp)
08ab5719 +0x175:  lea    -0x46(%ebp),%eax
08ab571c +0x178:  mov    %eax,0x8(%esp)
08ab5720 +0x17c:  lea    -0x44(%ebp),%eax
08ab5723 +0x17f:  mov    %eax,0x4(%esp)
08ab5727 +0x183:  lea    -0x45(%ebp),%eax
08ab572a +0x186:  mov    %eax,(%esp)
08ab572d +0x189:  call   088bceaf <_Z13ScanTypeOrIntRbRSsS_b>  ; ScanTypeOrInt(bool&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool&, bool)
08ab5732 +0x18e:  mov    %eax,-0x20(%ebp)
08ab5735 +0x191:  movzbl -0x45(%ebp),%eax
08ab5739 +0x195:  test   %al,%al
08ab573b +0x197:  jne    08ab5779 <+0x1d5>
08ab573d +0x199:  movl   $0x0,(%esp)
08ab5744 +0x1a0:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08ab5749 +0x1a5:  mov    %eax,-0x1c(%ebp)
08ab574c +0x1a8:  mov    -0x1c(%ebp),%eax
08ab574f +0x1ab:  mov    %eax,0x8(%esp)
08ab5753 +0x1af:  mov    -0x20(%ebp),%eax
08ab5756 +0x1b2:  mov    %eax,0x4(%esp)
08ab575a +0x1b6:  lea    -0x40(%ebp),%eax
08ab575d +0x1b9:  mov    %eax,(%esp)
08ab5760 +0x1bc:  call   08ab5a5e <_GLOBAL__I__ZN20LevelupSupportSciprtC2Ev+0x36>  ; global constructors keyed to LevelupSupportSciprt::LevelupSupportSciprt()+0x36
08ab5765 +0x1c1:  lea    -0x40(%ebp),%eax
08ab5768 +0x1c4:  mov    %eax,0x4(%esp)
08ab576c +0x1c8:  lea    -0x58(%ebp),%eax
08ab576f +0x1cb:  mov    %eax,(%esp)
08ab5772 +0x1ce:  call   08ab5d68 <_GLOBAL__I__ZN20LevelupSupportSciprtC2Ev+0x340>  ; global constructors keyed to LevelupSupportSciprt::LevelupSupportSciprt()+0x340
08ab5777 +0x1d3:  jmp    08ab5711 <+0x16d>
08ab5779 +0x1d5:  nop
08ab577a +0x1d6:  movl   $0x1,0x4(%esp)
08ab5782 +0x1de:  lea    -0x44(%ebp),%eax
08ab5785 +0x1e1:  mov    %eax,(%esp)
08ab5788 +0x1e4:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
08ab578d +0x1e9:  xor    $0x1,%eax
08ab5790 +0x1ec:  test   %al,%al
08ab5792 +0x1ee:  jne    08ab5901 <+0x35d>
08ab5798 +0x1f4:  movl   $"[/step]",0x4(%esp)
08ab57a0 +0x1fc:  lea    -0x44(%ebp),%eax
08ab57a3 +0x1ff:  mov    %eax,(%esp)
08ab57a6 +0x202:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08ab57ab +0x207:  test   %al,%al
08ab57ad +0x209:  je     08ab55f9 <+0x55>
08ab57b3 +0x20f:  mov    0x8(%ebp),%eax
08ab57b6 +0x212:  lea    0x4(%eax),%edx
08ab57b9 +0x215:  lea    -0x38(%ebp),%eax
08ab57bc +0x218:  mov    %edx,0x4(%esp)
08ab57c0 +0x21c:  mov    %eax,(%esp)
08ab57c3 +0x21f:  call   08147e8a <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x37d>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x37d
08ab57c8 +0x224:  sub    $0x4,%esp
08ab57cb +0x227:  mov    0x8(%ebp),%eax
08ab57ce +0x22a:  lea    0x4(%eax),%ecx
08ab57d1 +0x22d:  lea    -0x34(%ebp),%eax
08ab57d4 +0x230:  lea    -0x4c(%ebp),%edx
08ab57d7 +0x233:  mov    %edx,0x8(%esp)
08ab57db +0x237:  mov    %ecx,0x4(%esp)
08ab57df +0x23b:  mov    %eax,(%esp)
08ab57e2 +0x23e:  call   08147e5e <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x351>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x351
08ab57e7 +0x243:  sub    $0x4,%esp
08ab57ea +0x246:  lea    -0x38(%ebp),%eax
08ab57ed +0x249:  mov    %eax,0x4(%esp)
08ab57f1 +0x24d:  lea    -0x34(%ebp),%eax
08ab57f4 +0x250:  mov    %eax,(%esp)
08ab57f7 +0x253:  call   08ab5d8a <_GLOBAL__I__ZN20LevelupSupportSciprtC2Ev+0x362>  ; global constructors keyed to LevelupSupportSciprt::LevelupSupportSciprt()+0x362
08ab57fc +0x258:  test   %al,%al
08ab57fe +0x25a:  je     08ab581d <+0x279>
08ab5800 +0x25c:  mov    -0x4c(%ebp),%eax
08ab5803 +0x25f:  mov    %eax,0x4(%esp)
08ab5807 +0x263:  movl   $"duplicate [level] %d",(%esp)
08ab580e +0x26a:  call   0807db60 <_init+0x458>
08ab5813 +0x26f:  mov    $0xffffffff,%ebx
08ab5818 +0x274:  jmp    08ab5923 <+0x37f>
08ab581d +0x279:  movl   $0xc,(%esp)
08ab5824 +0x280:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08ab5829 +0x285:  mov    %eax,%ebx
08ab582b +0x287:  mov    %ebx,%eax
08ab582d +0x289:  mov    %eax,(%esp)
08ab5830 +0x28c:  call   08ab5cf6 <_GLOBAL__I__ZN20LevelupSupportSciprtC2Ev+0x2ce>  ; global constructors keyed to LevelupSupportSciprt::LevelupSupportSciprt()+0x2ce
08ab5835 +0x291:  jmp    08ab584c <+0x2a8>
08ab5837 +0x293:  mov    %edx,%esi
08ab5839 +0x295:  mov    %eax,%edi
08ab583b +0x297:  mov    %ebx,(%esp)
08ab583e +0x29a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08ab5843 +0x29f:  mov    %edi,%eax
08ab5845 +0x2a1:  mov    %esi,%edx
08ab5847 +0x2a3:  jmp    08ab590e <+0x36a>
08ab584c +0x2a8:  mov    %ebx,%eax
08ab584e +0x2aa:  mov    %eax,-0x60(%ebp)
08ab5851 +0x2ad:  mov    -0x60(%ebp),%eax
08ab5854 +0x2b0:  lea    -0x58(%ebp),%edx
08ab5857 +0x2b3:  mov    %edx,0x4(%esp)
08ab585b +0x2b7:  mov    %eax,(%esp)
08ab585e +0x2ba:  call   08ab5d9e <_GLOBAL__I__ZN20LevelupSupportSciprtC2Ev+0x376>  ; global constructors keyed to LevelupSupportSciprt::LevelupSupportSciprt()+0x376
08ab5863 +0x2bf:  lea    -0x60(%ebp),%eax
08ab5866 +0x2c2:  mov    %eax,0x8(%esp)
08ab586a +0x2c6:  lea    -0x4c(%ebp),%eax
08ab586d +0x2c9:  mov    %eax,0x4(%esp)
08ab5871 +0x2cd:  lea    -0x28(%ebp),%eax
08ab5874 +0x2d0:  mov    %eax,(%esp)
08ab5877 +0x2d3:  call   08ab5e12 <_GLOBAL__I__ZN20LevelupSupportSciprtC2Ev+0x3ea>  ; global constructors keyed to LevelupSupportSciprt::LevelupSupportSciprt()+0x3ea
08ab587c +0x2d8:  mov    0x8(%ebp),%eax
08ab587f +0x2db:  lea    0x4(%eax),%ecx
08ab5882 +0x2de:  lea    -0x30(%ebp),%eax
08ab5885 +0x2e1:  lea    -0x28(%ebp),%edx
08ab5888 +0x2e4:  mov    %edx,0x8(%esp)
08ab588c +0x2e8:  mov    %ecx,0x4(%esp)
08ab5890 +0x2ec:  mov    %eax,(%esp)
08ab5893 +0x2ef:  call   08ab5e40 <_GLOBAL__I__ZN20LevelupSupportSciprtC2Ev+0x418>  ; global constructors keyed to LevelupSupportSciprt::LevelupSupportSciprt()+0x418
08ab5898 +0x2f4:  sub    $0x4,%esp
08ab589b +0x2f7:  jmp    08ab55fd <+0x59>
08ab58a0 +0x2fc:  movl   $"[mail title]",0x4(%esp)
08ab58a8 +0x304:  lea    -0x44(%ebp),%eax
08ab58ab +0x307:  mov    %eax,(%esp)
08ab58ae +0x30a:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08ab58b3 +0x30f:  test   %al,%al
08ab58b5 +0x311:  je     08ab58ca <+0x326>
08ab58b7 +0x313:  mov    0x8(%ebp),%eax
08ab58ba +0x316:  add    $0x1c,%eax
08ab58bd +0x319:  mov    %eax,(%esp)
08ab58c0 +0x31c:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
08ab58c5 +0x321:  jmp    08ab55fd <+0x59>
08ab58ca +0x326:  movl   $"[mail content]",0x4(%esp)
08ab58d2 +0x32e:  lea    -0x44(%ebp),%eax
08ab58d5 +0x331:  mov    %eax,(%esp)
08ab58d8 +0x334:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08ab58dd +0x339:  test   %al,%al
08ab58df +0x33b:  je     08ab55fc <+0x58>
08ab58e5 +0x341:  mov    0x8(%ebp),%eax
08ab58e8 +0x344:  add    $0x20,%eax
08ab58eb +0x347:  mov    %eax,(%esp)
08ab58ee +0x34a:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
08ab58f3 +0x34f:  jmp    08ab55fd <+0x59>
08ab58f8 +0x354:  nop
08ab58f9 +0x355:  jmp    08ab5902 <+0x35e>
08ab58fb +0x357:  nop
08ab58fc +0x358:  jmp    08ab5902 <+0x35e>
08ab58fe +0x35a:  nop
08ab58ff +0x35b:  jmp    08ab5902 <+0x35e>
08ab5901 +0x35d:  nop
08ab5902 +0x35e:  call   088bc054 <_Z20unloadRDARScriptFilev>  ; unloadRDARScriptFile()
08ab5907 +0x363:  mov    $0x0,%ebx
08ab590c +0x368:  jmp    08ab5923 <+0x37f>
08ab590e +0x36a:  mov    %edx,%ebx
08ab5910 +0x36c:  mov    %eax,%esi
08ab5912 +0x36e:  lea    -0x58(%ebp),%eax
08ab5915 +0x371:  mov    %eax,(%esp)
08ab5918 +0x374:  call   08ab5d0a <_GLOBAL__I__ZN20LevelupSupportSciprtC2Ev+0x2e2>  ; global constructors keyed to LevelupSupportSciprt::LevelupSupportSciprt()+0x2e2
08ab591d +0x379:  mov    %esi,%eax
08ab591f +0x37b:  mov    %ebx,%edx
08ab5921 +0x37d:  jmp    08ab5930 <+0x38c>
08ab5923 +0x37f:  lea    -0x58(%ebp),%eax
08ab5926 +0x382:  mov    %eax,(%esp)
08ab5929 +0x385:  call   08ab5d0a <_GLOBAL__I__ZN20LevelupSupportSciprtC2Ev+0x2e2>  ; global constructors keyed to LevelupSupportSciprt::LevelupSupportSciprt()+0x2e2
08ab592e +0x38a:  jmp    08ab594b <+0x3a7>
08ab5930 +0x38c:  mov    %edx,%ebx
08ab5932 +0x38e:  mov    %eax,%esi
08ab5934 +0x390:  lea    -0x44(%ebp),%eax
08ab5937 +0x393:  mov    %eax,(%esp)
08ab593a +0x396:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ab593f +0x39b:  mov    %esi,%eax
08ab5941 +0x39d:  mov    %ebx,%edx
08ab5943 +0x39f:  mov    %eax,(%esp)
08ab5946 +0x3a2:  call   08ae3750 <_Unwind_Resume>
08ab594b +0x3a7:  lea    -0x44(%ebp),%eax
08ab594e +0x3aa:  mov    %eax,(%esp)
08ab5951 +0x3ad:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ab5956 +0x3b2:  mov    %ebx,%eax
08ab5958 +0x3b4:  lea    -0xc(%ebp),%esp
08ab595b +0x3b7:  add    $0x0,%esp
08ab595e +0x3ba:  pop    %ebx
08ab595f +0x3bb:  pop    %esi
08ab5960 +0x3bc:  pop    %edi
08ab5961 +0x3bd:  pop    %ebp
08ab5962 +0x3be:  ret
08ab5963 +0x3bf:  nop
```

## 反编译 C

```c
// LevelupSupport2ndScript::loadScript @ 0x8ab55a4

/* LevelupSupport2ndScript::loadScript() */

undefined4 __thiscall LevelupSupport2ndScript::loadScript(LevelupSupport2ndScript *this)

{
  char cVar1;
  bool bVar2;
  vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
  *this_00;
  undefined4 uVar3;
  int *piVar4;
  vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
  *local_64;
  string local_60 [4];
  vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
  local_5c [12];
  int local_50;
  bool local_4a;
  bool local_49;
  string local_48;
  ItemInfo local_44 [8];
  map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
  local_3c [4];
  _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>
  local_38 [4];
  pair local_34 [8];
  pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>
  local_2c [8];
  int local_24;
  int local_20;
  
  cVar1 = loadRDARScriptFile("Event/","tw_LevelupSupport2nd.evt");
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_48);
    local_49 = false;
    local_4a = false;
    local_50 = 0;
                    /* try { // try from 08ab55f2 to 08ab55f6 has its CatchHandler @ 08ab5930 */
    std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
    ::vector(local_5c);
                    /* try { // try from 08ab560b to 08ab563c has its CatchHandler @ 08ab590e */
    while (cVar1 = ScanType((string *)&local_48,true), cVar1 == '\x01') {
      bVar2 = std::operator==(&local_48,"[job type]");
      if (bVar2) {
        std::string::string(local_60);
                    /* try { // try from 08ab5643 to 08ab5652 has its CatchHandler @ 08ab5665 */
        ScanStr(local_60);
        uVar3 = getCharacterJobToEnumValue(local_60);
        *(undefined4 *)this = uVar3;
                    /* try { // try from 08ab565e to 08ab5662 has its CatchHandler @ 08ab590e */
        std::string::~string(local_60);
      }
      else {
                    /* try { // try from 08ab568b to 08ab5828 has its CatchHandler @ 08ab590e */
        bVar2 = std::operator==(&local_48,"[step]");
        if (bVar2) {
          cVar1 = ScanType((string *)&local_48,true);
          if (cVar1 != '\x01') break;
          bVar2 = std::operator==(&local_48,"[level]");
          if (bVar2) {
            local_50 = ScanInt((bool *)0x0);
          }
          cVar1 = ScanType((string *)&local_48,true);
          if (cVar1 != '\x01') break;
          bVar2 = std::operator==(&local_48,"[reward]");
          if (bVar2) {
            while (local_24 = ScanTypeOrInt(&local_49,(string *)&local_48,&local_4a,true),
                  local_49 == false) {
              local_20 = ScanInt((bool *)0x0);
              ItemInfo::ItemInfo(local_44,local_24,local_20);
              std::
              vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
              ::push_back(local_5c,local_44);
            }
          }
          cVar1 = ScanType((string *)&local_48,true);
          if (cVar1 != '\x01') break;
          bVar2 = std::operator==(&local_48,"[/step]");
          if (bVar2) {
            std::
            map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
            ::end(local_3c);
            piVar4 = &local_50;
            std::
            map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
            ::find((int *)local_38);
            cVar1 = std::
                    _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>
                    ::operator!=(local_38,(_Rb_tree_iterator *)local_3c);
            if (cVar1 != '\0') {
              printf("duplicate [level] %d",local_50,piVar4);
              uVar3 = 0xffffffff;
              goto LAB_08ab5923;
            }
            this_00 = operator_new(0xc);
                    /* try { // try from 08ab5830 to 08ab5834 has its CatchHandler @ 08ab5837 */
            std::
            vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
            ::vector(this_00);
            local_64 = this_00;
                    /* try { // try from 08ab585e to 08ab5906 has its CatchHandler @ 08ab590e */
            std::
            vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
            ::swap(this_00,(vector *)local_5c);
            std::
            pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>
            ::
            pair<int&,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*&>
                      (local_2c,&local_50,(vector **)&local_64);
            std::
            map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
            ::insert(local_34);
          }
        }
        else {
          bVar2 = std::operator==(&local_48,"[mail title]");
          if (bVar2) {
            ScanStr((string *)(this + 0x1c));
          }
          else {
            bVar2 = std::operator==(&local_48,"[mail content]");
            if (bVar2) {
              ScanStr((string *)(this + 0x20));
            }
          }
        }
      }
    }
    unloadRDARScriptFile();
    uVar3 = 0;
LAB_08ab5923:
                    /* try { // try from 08ab5929 to 08ab592d has its CatchHandler @ 08ab5930 */
    std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
    ::~vector(local_5c);
    std::string::~string((string *)&local_48);
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}
```

# set_item

`_ZN14CStackableItem8set_itemER17STStackableScript`

`CStackableItem::set_item(STStackableScript&)`

| 类 | 地址 |
|---|---|
| `CStackableItem` | `0x0850d81e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850d81e  _ZN14CStackableItem8set_itemER17STStackableScript
#           CStackableItem::set_item(STStackableScript&)
# range [0x0850d81e, 0x0850e8dd]
0850d81e +0x0000:  push   %ebp
0850d81f +0x0001:  mov    %esp,%ebp
0850d821 +0x0003:  push   %edi
0850d822 +0x0004:  push   %esi
0850d823 +0x0005:  push   %ebx
0850d824 +0x0006:  sub    $0x26c,%esp
0850d82a +0x000c:  movl   $0x0,(%esp)
0850d831 +0x0013:  call   0807d750 <_init+0x48>
0850d836 +0x0018:  mov    0xc(%ebp),%edx
0850d839 +0x001b:  mov    (%edx),%edx
0850d83b +0x001d:  add    %edx,%eax
0850d83d +0x001f:  mov    %eax,-0x64(%ebp)
0850d840 +0x0022:  lea    -0x64(%ebp),%esi
0850d843 +0x0025:  movl   $0x9c8,(%esp)
0850d84a +0x002c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0850d84f +0x0031:  mov    %eax,%ebx
0850d851 +0x0033:  mov    %ebx,%eax
0850d853 +0x0035:  mov    %esi,0x4(%esp)
0850d857 +0x0039:  mov    %eax,(%esp)
0850d85a +0x003c:  call   080cba2a <_GLOBAL__I__ZN10BingoEventC2Ev+0x877>  ; global constructors keyed to BingoEvent::BingoEvent()+0x877
0850d85f +0x0041:  jmp    0850d879 <+0x5b>
0850d861 +0x0043:  mov    %edx,%esi
0850d863 +0x0045:  mov    %eax,%edi
0850d865 +0x0047:  mov    %ebx,(%esp)
0850d868 +0x004a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0850d86d +0x004f:  mov    %edi,%eax
0850d86f +0x0051:  mov    %esi,%edx
0850d871 +0x0053:  mov    %eax,(%esp)
0850d874 +0x0056:  call   08ae3750 <_Unwind_Resume>
0850d879 +0x005b:  mov    %ebx,%edx
0850d87b +0x005d:  mov    0x8(%ebp),%eax
0850d87e +0x0060:  mov    %edx,0x1e0(%eax)
0850d884 +0x0066:  mov    0xc(%ebp),%eax
0850d887 +0x0069:  mov    (%eax),%edx
0850d889 +0x006b:  mov    0x8(%ebp),%eax
0850d88c +0x006e:  mov    %edx,0x4(%eax)
0850d88f +0x0071:  mov    0xc(%ebp),%eax
0850d892 +0x0074:  mov    0x4(%eax),%edx
0850d895 +0x0077:  mov    0x8(%ebp),%eax
0850d898 +0x007a:  mov    %edx,0x8(%eax)
0850d89b +0x007d:  mov    0xc(%ebp),%eax
0850d89e +0x0080:  mov    0x14(%eax),%edx
0850d8a1 +0x0083:  mov    0x8(%ebp),%eax
0850d8a4 +0x0086:  mov    %edx,0xc(%eax)
0850d8a7 +0x0089:  mov    0xc(%ebp),%eax
0850d8aa +0x008c:  mov    0x18(%eax),%edx
0850d8ad +0x008f:  mov    0x8(%ebp),%eax
0850d8b0 +0x0092:  mov    %edx,0x10(%eax)
0850d8b3 +0x0095:  mov    0xc(%ebp),%eax
0850d8b6 +0x0098:  mov    0x1c(%eax),%edx
0850d8b9 +0x009b:  mov    0x8(%ebp),%eax
0850d8bc +0x009e:  mov    %edx,0x14(%eax)
0850d8bf +0x00a1:  mov    0xc(%ebp),%eax
0850d8c2 +0x00a4:  mov    0x24(%eax),%edx
0850d8c5 +0x00a7:  mov    0x8(%ebp),%eax
0850d8c8 +0x00aa:  mov    %edx,0x30(%eax)
0850d8cb +0x00ad:  mov    0xc(%ebp),%eax
0850d8ce +0x00b0:  mov    0x10(%eax),%edx
0850d8d1 +0x00b3:  mov    0x8(%ebp),%eax
0850d8d4 +0x00b6:  mov    %edx,0x38(%eax)
0850d8d7 +0x00b9:  mov    0xc(%ebp),%eax
0850d8da +0x00bc:  movzbl 0xfc(%eax),%edx
0850d8e1 +0x00c3:  mov    0x8(%ebp),%eax
0850d8e4 +0x00c6:  mov    %dl,0x60(%eax)
0850d8e7 +0x00c9:  mov    0xc(%ebp),%eax
0850d8ea +0x00cc:  movzbl 0x30(%eax),%eax
0850d8ee +0x00d0:  test   %al,%al
0850d8f0 +0x00d2:  je     0850d90b <+0xed>
0850d8f2 +0x00d4:  mov    0x8(%ebp),%eax
0850d8f5 +0x00d7:  mov    0x4(%eax),%eax
0850d8f8 +0x00da:  mov    %eax,%ebx
0850d8fa +0x00dc:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0850d8ff +0x00e1:  mov    %ebx,0x4(%esp)
0850d903 +0x00e5:  mov    %eax,(%esp)
0850d906 +0x00e8:  call   08513fbc <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5f1>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5f1
0850d90b +0x00ed:  lea    -0x258(%ebp),%ebx
0850d911 +0x00f3:  mov    $0x0,%eax
0850d916 +0x00f8:  mov    $0x7d,%edx
0850d91b +0x00fd:  mov    %ebx,%edi
0850d91d +0x00ff:  mov    %edx,%ecx
0850d91f +0x0101:  rep stos %eax,%es:(%edi)
0850d921 +0x0103:  mov    0xc(%ebp),%eax
0850d924 +0x0106:  add    $0xac,%eax
0850d929 +0x010b:  mov    %eax,(%esp)
0850d92c +0x010e:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0850d931 +0x0113:  mov    %eax,0x4(%esp)
0850d935 +0x0117:  lea    -0x258(%ebp),%eax
0850d93b +0x011d:  mov    %eax,(%esp)
0850d93e +0x0120:  call   0807def0 <_init+0x7e8>
0850d943 +0x0125:  mov    0xc(%ebp),%eax
0850d946 +0x0128:  add    $0xac,%eax
0850d94b +0x012d:  mov    %eax,(%esp)
0850d94e +0x0130:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0850d953 +0x0135:  lea    -0x258(%ebp),%edx
0850d959 +0x013b:  mov    %edx,0x4(%esp)
0850d95d +0x013f:  mov    %eax,(%esp)
0850d960 +0x0142:  call   08108e08 <_ZN8CodePage15script2DatabaseEPcS0_>  ; CodePage::script2Database(char*, char*)
0850d965 +0x0147:  xor    $0x1,%eax
0850d968 +0x014a:  test   %al,%al
0850d96a +0x014c:  je     0850d9de <+0x1c0>
0850d96c +0x014e:  mov    0xc(%ebp),%eax
0850d96f +0x0151:  add    $0xac,%eax
0850d974 +0x0156:  mov    %eax,(%esp)
0850d977 +0x0159:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0850d97c +0x015e:  mov    %eax,%edi
0850d97e +0x0160:  call   08108de0 <_ZN8CodePage8databaseEv>  ; CodePage::database()
0850d983 +0x0165:  mov    %eax,%esi
0850d985 +0x0167:  call   08108dcc <_ZN8CodePage6scriptEv>  ; CodePage::script()
0850d98a +0x016c:  mov    %eax,%ebx
0850d98c +0x016e:  movl   $0x5,0xc(%esp)
0850d994 +0x0176:  movl   $0x80,0x8(%esp)
0850d99c +0x017e:  movl   $&_ZZN14CStackableItem8set_itemER17STStackableScriptE19__PRETTY_FUNCTION__,0x4(%esp)
0850d9a4 +0x0186:  lea    -0x60(%ebp),%eax
0850d9a7 +0x0189:  mov    %eax,(%esp)
0850d9aa +0x018c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0850d9af +0x0191:  movl   $0x80,0x18(%esp)
0850d9b7 +0x0199:  movl   $&_ZZN14CStackableItem8set_itemER17STStackableScriptE19__PRETTY_FUNCTION__,0x14(%esp)
0850d9bf +0x01a1:  mov    %edi,0x10(%esp)
0850d9c3 +0x01a5:  mov    %esi,0xc(%esp)
0850d9c7 +0x01a9:  mov    %ebx,0x8(%esp)
0850d9cb +0x01ad:  movl   $"Error!!! %s->%s [%s][%s][%d]",0x4(%esp)
0850d9d3 +0x01b5:  lea    -0x60(%ebp),%eax
0850d9d6 +0x01b8:  mov    %eax,(%esp)
0850d9d9 +0x01bb:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0850d9de +0x01c0:  mov    0x8(%ebp),%eax
0850d9e1 +0x01c3:  lea    0x2c(%eax),%edx
0850d9e4 +0x01c6:  lea    -0x258(%ebp),%eax
0850d9ea +0x01cc:  mov    %eax,0x4(%esp)
0850d9ee +0x01d0:  mov    %edx,(%esp)
0850d9f1 +0x01d3:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0850d9f6 +0x01d8:  mov    0xc(%ebp),%eax
0850d9f9 +0x01db:  mov    0xf4(%eax),%edx
0850d9ff +0x01e1:  mov    0x8(%ebp),%eax
0850da02 +0x01e4:  mov    %edx,0x6c(%eax)
0850da05 +0x01e7:  mov    0xc(%ebp),%eax
0850da08 +0x01ea:  mov    0xf8(%eax),%edx
0850da0e +0x01f0:  mov    0x8(%ebp),%eax
0850da11 +0x01f3:  mov    %edx,0x70(%eax)
0850da14 +0x01f6:  mov    0xc(%ebp),%eax
0850da17 +0x01f9:  mov    0x20(%eax),%edx
0850da1a +0x01fc:  mov    0x8(%ebp),%eax
0850da1d +0x01ff:  mov    %edx,0x64(%eax)
0850da20 +0x0202:  mov    0xc(%ebp),%eax
0850da23 +0x0205:  mov    0x4ec(%eax),%edx
0850da29 +0x020b:  mov    0x8(%ebp),%eax
0850da2c +0x020e:  mov    %edx,0x68(%eax)
0850da2f +0x0211:  mov    0xc(%ebp),%eax
0850da32 +0x0214:  mov    0x18c(%eax),%edx
0850da38 +0x021a:  mov    0x8(%ebp),%eax
0850da3b +0x021d:  mov    %edx,0x2cc(%eax)
0850da41 +0x0223:  mov    0xc(%ebp),%eax
0850da44 +0x0226:  mov    0x28(%eax),%edx
0850da47 +0x0229:  mov    0x8(%ebp),%eax
0850da4a +0x022c:  mov    %edx,0x24(%eax)
0850da4d +0x022f:  mov    0xc(%ebp),%eax
0850da50 +0x0232:  mov    0x2c(%eax),%edx
0850da53 +0x0235:  mov    0x8(%ebp),%eax
0850da56 +0x0238:  mov    %edx,0x28(%eax)
0850da59 +0x023b:  mov    0xc(%ebp),%eax
0850da5c +0x023e:  mov    0xc(%eax),%edx
0850da5f +0x0241:  mov    0x8(%ebp),%eax
0850da62 +0x0244:  mov    %edx,0x50(%eax)
0850da65 +0x0247:  mov    0xc(%ebp),%eax
0850da68 +0x024a:  mov    0x8(%eax),%edx
0850da6b +0x024d:  mov    0x8(%ebp),%eax
0850da6e +0x0250:  mov    %edx,0x34(%eax)
0850da71 +0x0253:  mov    0xc(%ebp),%eax
0850da74 +0x0256:  mov    0x1e0(%eax),%edx
0850da7a +0x025c:  mov    0x8(%ebp),%eax
0850da7d +0x025f:  mov    %edx,0x2b0(%eax)
0850da83 +0x0265:  mov    0xc(%ebp),%eax
0850da86 +0x0268:  mov    0x3cc(%eax),%edx
0850da8c +0x026e:  mov    0x8(%ebp),%eax
0850da8f +0x0271:  mov    %edx,0x2b8(%eax)
0850da95 +0x0277:  mov    0x8(%ebp),%eax
0850da98 +0x027a:  mov    0x2b0(%eax),%eax
0850da9e +0x0280:  cmp    $0x3,%eax
0850daa1 +0x0283:  jne    0850dafd <+0x2df>
0850daa3 +0x0285:  mov    0xc(%ebp),%eax
0850daa6 +0x0288:  lea    0x88(%eax),%edx
0850daac +0x028e:  mov    0x8(%ebp),%eax
0850daaf +0x0291:  add    $0x174,%eax
0850dab4 +0x0296:  movl   $0x0,0x8(%esp)
0850dabc +0x029e:  mov    %edx,0x4(%esp)
0850dac0 +0x02a2:  mov    %eax,(%esp)
0850dac3 +0x02a5:  call   089ba83c <_Z16createRecipeInfoP10RecipeInfoPSt6vectorIiSaIiEEPS1_ISt4pairIiiESaIS6_EE>  ; createRecipeInfo(RecipeInfo*, std::vector<int, std::allocator<int> >*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >*)
0850dac8 +0x02aa:  mov    0xc(%ebp),%eax
0850dacb +0x02ad:  lea    0x3c0(%eax),%edx
0850dad1 +0x02b3:  mov    0x8(%ebp),%eax
0850dad4 +0x02b6:  add    $0x19c,%eax
0850dad9 +0x02bb:  mov    %edx,0x4(%esp)
0850dadd +0x02bf:  mov    %eax,(%esp)
0850dae0 +0x02c2:  call   0830f08c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xc71>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xc71
0850dae5 +0x02c7:  mov    0x8(%ebp),%eax
0850dae8 +0x02ca:  lea    0x174(%eax),%edx
0850daee +0x02d0:  mov    0xc(%ebp),%eax
0850daf1 +0x02d3:  mov    %eax,0x4(%esp)
0850daf5 +0x02d7:  mov    %edx,(%esp)
0850daf8 +0x02da:  call   08513d44 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x379>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x379
0850dafd +0x02df:  mov    0x8(%ebp),%eax
0850db00 +0x02e2:  mov    0x2b0(%eax),%eax
0850db06 +0x02e8:  cmp    $0x6,%eax
0850db09 +0x02eb:  jne    0850db2d <+0x30f>
0850db0b +0x02ed:  mov    0xc(%ebp),%eax
0850db0e +0x02f0:  lea    0x88(%eax),%edx
0850db14 +0x02f6:  mov    0x8(%ebp),%eax
0850db17 +0x02f9:  add    $0x1c0,%eax
0850db1c +0x02fe:  mov    %edx,0x4(%esp)
0850db20 +0x0302:  mov    %eax,(%esp)
0850db23 +0x0305:  call   089bab64 <_Z17createLotteryInfoP11LotteryInfoPSt6vectorIiSaIiEE>  ; createLotteryInfo(LotteryInfo*, std::vector<int, std::allocator<int> >*)
0850db28 +0x030a:  jmp    0850ddf0 <+0x5d2>
0850db2d +0x030f:  mov    0x8(%ebp),%eax
0850db30 +0x0312:  mov    0x2b0(%eax),%eax
0850db36 +0x0318:  cmp    $0x7,%eax
0850db39 +0x031b:  jne    0850db5d <+0x33f>
0850db3b +0x031d:  mov    0xc(%ebp),%eax
0850db3e +0x0320:  lea    0x88(%eax),%edx
0850db44 +0x0326:  mov    0x8(%ebp),%eax
0850db47 +0x0329:  add    $0x1c0,%eax
0850db4c +0x032e:  mov    %edx,0x4(%esp)
0850db50 +0x0332:  mov    %eax,(%esp)
0850db53 +0x0335:  call   089bacc1 <_Z26createStackableLotteryInfoP11LotteryInfoPSt6vectorIiSaIiEE>  ; createStackableLotteryInfo(LotteryInfo*, std::vector<int, std::allocator<int> >*)
0850db58 +0x033a:  jmp    0850ddf0 <+0x5d2>
0850db5d +0x033f:  mov    0x8(%ebp),%eax
0850db60 +0x0342:  mov    0x2b0(%eax),%eax
0850db66 +0x0348:  cmp    $0xd,%eax
0850db69 +0x034b:  jne    0850db8d <+0x36f>
0850db6b +0x034d:  mov    0xc(%ebp),%eax
0850db6e +0x0350:  lea    0x88(%eax),%edx
0850db74 +0x0356:  mov    0x8(%ebp),%eax
0850db77 +0x0359:  add    $0x1c0,%eax
0850db7c +0x035e:  mov    %edx,0x4(%esp)
0850db80 +0x0362:  mov    %eax,(%esp)
0850db83 +0x0365:  call   089bacc1 <_Z26createStackableLotteryInfoP11LotteryInfoPSt6vectorIiSaIiEE>  ; createStackableLotteryInfo(LotteryInfo*, std::vector<int, std::allocator<int> >*)
0850db88 +0x036a:  jmp    0850ddf0 <+0x5d2>
0850db8d +0x036f:  mov    0x8(%ebp),%eax
0850db90 +0x0372:  mov    0x2b0(%eax),%eax
0850db96 +0x0378:  cmp    $0x1a,%eax
0850db99 +0x037b:  je     0850dba9 <+0x38b>
0850db9b +0x037d:  mov    0x8(%ebp),%eax
0850db9e +0x0380:  mov    0x2b0(%eax),%eax
0850dba4 +0x0386:  cmp    $0x1b,%eax
0850dba7 +0x0389:  jne    0850dbe5 <+0x3c7>
0850dba9 +0x038b:  mov    0xc(%ebp),%eax
0850dbac +0x038e:  lea    0x25c(%eax),%ebx
0850dbb2 +0x0394:  mov    0xc(%ebp),%eax
0850dbb5 +0x0397:  lea    0x250(%eax),%ecx
0850dbbb +0x039d:  mov    0xc(%ebp),%eax
0850dbbe +0x03a0:  lea    0x244(%eax),%edx
0850dbc4 +0x03a6:  mov    0x8(%ebp),%eax
0850dbc7 +0x03a9:  add    $0x1e4,%eax
0850dbcc +0x03ae:  mov    %ebx,0xc(%esp)
0850dbd0 +0x03b2:  mov    %ecx,0x8(%esp)
0850dbd4 +0x03b6:  mov    %edx,0x4(%esp)
0850dbd8 +0x03ba:  mov    %eax,(%esp)
0850dbdb +0x03bd:  call   089bafd1 <_Z34createStackableMultiBoxLotteryInfoP19MultiBoxLotteryInfoPSt6vectorIS1_IiSaIiEESaIS3_EEPS3_S7_>  ; createStackableMultiBoxLotteryInfo(MultiBoxLotteryInfo*, std::vector<std::vector<int, std::allocator<int> >, std::allocator<std::vector<int, std::allocator<int> > > >*, std::vector<int, std::allocator<int> >*, std::vector<int, std::allocator<int> >*)
0850dbe0 +0x03c2:  jmp    0850ddf0 <+0x5d2>
0850dbe5 +0x03c7:  mov    0x8(%ebp),%eax
0850dbe8 +0x03ca:  mov    0x2b0(%eax),%eax
0850dbee +0x03d0:  cmp    $0xe,%eax
0850dbf1 +0x03d3:  je     0850dc05 <+0x3e7>
0850dbf3 +0x03d5:  mov    0x8(%ebp),%eax
0850dbf6 +0x03d8:  mov    0x2b0(%eax),%eax
0850dbfc +0x03de:  cmp    $0x26,%eax
0850dbff +0x03e1:  jne    0850dc8c <+0x46e>
0850dc05 +0x03e7:  mov    0xc(%ebp),%eax
0850dc08 +0x03ea:  lea    0x268(%eax),%edx
0850dc0e +0x03f0:  mov    0x8(%ebp),%eax
0850dc11 +0x03f3:  add    $0x21c,%eax
0850dc16 +0x03f8:  mov    %edx,0x4(%esp)
0850dc1a +0x03fc:  mov    %eax,(%esp)
0850dc1d +0x03ff:  call   08516154 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x2789>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x2789
0850dc22 +0x0404:  mov    0xc(%ebp),%eax
0850dc25 +0x0407:  lea    0x274(%eax),%edx
0850dc2b +0x040d:  mov    0x8(%ebp),%eax
0850dc2e +0x0410:  add    $0x234,%eax
0850dc33 +0x0415:  mov    %edx,0x4(%esp)
0850dc37 +0x0419:  mov    %eax,(%esp)
0850dc3a +0x041c:  call   085163a2 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x29d7>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x29d7
0850dc3f +0x0421:  mov    0xc(%ebp),%eax
0850dc42 +0x0424:  add    $0x2a4,%eax
0850dc47 +0x0429:  mov    %eax,(%esp)
0850dc4a +0x042c:  call   08516614 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x2c49>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x2c49
0850dc4f +0x0431:  xor    $0x1,%eax
0850dc52 +0x0434:  test   %al,%al
0850dc54 +0x0436:  je     0850ddef <+0x5d1>
0850dc5a +0x043c:  mov    0xc(%ebp),%eax
0850dc5d +0x043f:  lea    0x2a4(%eax),%edx
0850dc63 +0x0445:  mov    0x8(%ebp),%eax
0850dc66 +0x0448:  add    $0x228,%eax
0850dc6b +0x044d:  mov    %edx,0x4(%esp)
0850dc6f +0x0451:  mov    %eax,(%esp)
0850dc72 +0x0454:  call   08516154 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x2789>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x2789
0850dc77 +0x0459:  mov    0xc(%ebp),%eax
0850dc7a +0x045c:  add    $0x2a4,%eax
0850dc7f +0x0461:  mov    %eax,(%esp)
0850dc82 +0x0464:  call   08516658 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x2c8d>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x2c8d
0850dc87 +0x0469:  jmp    0850ddf0 <+0x5d2>
0850dc8c +0x046e:  mov    0x8(%ebp),%eax
0850dc8f +0x0471:  mov    0x2b0(%eax),%eax
0850dc95 +0x0477:  cmp    $0xf,%eax
0850dc98 +0x047a:  je     0850dca8 <+0x48a>
0850dc9a +0x047c:  mov    0x8(%ebp),%eax
0850dc9d +0x047f:  mov    0x2b0(%eax),%eax
0850dca3 +0x0485:  cmp    $0x10,%eax
0850dca6 +0x0488:  jne    0850dcca <+0x4ac>
0850dca8 +0x048a:  mov    0xc(%ebp),%eax
0850dcab +0x048d:  lea    0x280(%eax),%edx
0850dcb1 +0x0493:  mov    0x8(%ebp),%eax
0850dcb4 +0x0496:  add    $0x240,%eax
0850dcb9 +0x049b:  mov    %edx,0x4(%esp)
0850dcbd +0x049f:  mov    %eax,(%esp)
0850dcc0 +0x04a2:  call   085150f2 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x1727>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x1727
0850dcc5 +0x04a7:  jmp    0850ddf0 <+0x5d2>
0850dcca +0x04ac:  mov    0x8(%ebp),%eax
0850dccd +0x04af:  mov    0x2b0(%eax),%eax
0850dcd3 +0x04b5:  cmp    $0x11,%eax
0850dcd6 +0x04b8:  jne    0850dd07 <+0x4e9>
0850dcd8 +0x04ba:  mov    0xc(%ebp),%eax
0850dcdb +0x04bd:  lea    0x280(%eax),%edx
0850dce1 +0x04c3:  mov    0x8(%ebp),%eax
0850dce4 +0x04c6:  add    $0x240,%eax
0850dce9 +0x04cb:  mov    %edx,0x4(%esp)
0850dced +0x04cf:  mov    %eax,(%esp)
0850dcf0 +0x04d2:  call   085150f2 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x1727>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x1727
0850dcf5 +0x04d7:  mov    0x8(%ebp),%eax
0850dcf8 +0x04da:  movl   $0x10,0x2b0(%eax)
0850dd02 +0x04e4:  jmp    0850ddf0 <+0x5d2>
0850dd07 +0x04e9:  mov    0x8(%ebp),%eax
0850dd0a +0x04ec:  mov    0x2b0(%eax),%eax
0850dd10 +0x04f2:  cmp    $0x22,%eax
0850dd13 +0x04f5:  jne    0850dd54 <+0x536>
0850dd15 +0x04f7:  mov    0xc(%ebp),%eax
0850dd18 +0x04fa:  lea    0x280(%eax),%edx
0850dd1e +0x0500:  mov    0x8(%ebp),%eax
0850dd21 +0x0503:  add    $0x240,%eax
0850dd26 +0x0508:  mov    %edx,0x4(%esp)
0850dd2a +0x050c:  mov    %eax,(%esp)
0850dd2d +0x050f:  call   085150f2 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x1727>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x1727
0850dd32 +0x0514:  mov    0xc(%ebp),%eax
0850dd35 +0x0517:  lea    0x41c(%eax),%edx
0850dd3b +0x051d:  mov    0x8(%ebp),%eax
0850dd3e +0x0520:  add    $0x264,%eax
0850dd43 +0x0525:  mov    %edx,0x4(%esp)
0850dd47 +0x0529:  mov    %eax,(%esp)
0850dd4a +0x052c:  call   08515128 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x175d>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x175d
0850dd4f +0x0531:  jmp    0850ddf0 <+0x5d2>
0850dd54 +0x0536:  mov    0x8(%ebp),%eax
0850dd57 +0x0539:  mov    0x2b0(%eax),%eax
0850dd5d +0x053f:  cmp    $0x17,%eax
0850dd60 +0x0542:  jne    0850dd81 <+0x563>
0850dd62 +0x0544:  mov    0xc(%ebp),%eax
0850dd65 +0x0547:  lea    0x88(%eax),%edx
0850dd6b +0x054d:  mov    0x8(%ebp),%eax
0850dd6e +0x0550:  add    $0x280,%eax
0850dd73 +0x0555:  mov    %edx,0x4(%esp)
0850dd77 +0x0559:  mov    %eax,(%esp)
0850dd7a +0x055c:  call   089bae94 <_Z22createGlobalEffectInfoRSt6vectorI16stGlobalEffect_tSaIS0_EEPS_IiSaIiEE>  ; createGlobalEffectInfo(std::vector<stGlobalEffect_t, std::allocator<stGlobalEffect_t> >&, std::vector<int, std::allocator<int> >*)
0850dd7f +0x0561:  jmp    0850ddf0 <+0x5d2>
0850dd81 +0x0563:  mov    0x8(%ebp),%eax
0850dd84 +0x0566:  mov    0x2b0(%eax),%eax
0850dd8a +0x056c:  cmp    $0x1d,%eax
0850dd8d +0x056f:  jne    0850ddf0 <+0x5d2>
0850dd8f +0x0571:  mov    0xc(%ebp),%eax
0850dd92 +0x0574:  lea    0x3d4(%eax),%edx
0850dd98 +0x057a:  mov    0x8(%ebp),%eax
0850dd9b +0x057d:  add    $0x290,%eax
0850dda0 +0x0582:  mov    %edx,0x4(%esp)
0850dda4 +0x0586:  mov    %eax,(%esp)
0850dda7 +0x0589:  call   0830f08c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xc71>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xc71
0850ddac +0x058e:  mov    0xc(%ebp),%eax
0850ddaf +0x0591:  mov    0x3e0(%eax),%edx
0850ddb5 +0x0597:  mov    0x8(%ebp),%eax
0850ddb8 +0x059a:  mov    %edx,0x29c(%eax)
0850ddbe +0x05a0:  mov    0xc(%ebp),%eax
0850ddc1 +0x05a3:  mov    0x3e4(%eax),%edx
0850ddc7 +0x05a9:  mov    0x8(%ebp),%eax
0850ddca +0x05ac:  mov    %edx,0x2a0(%eax)
0850ddd0 +0x05b2:  mov    0xc(%ebp),%eax
0850ddd3 +0x05b5:  lea    0x3e8(%eax),%edx
0850ddd9 +0x05bb:  mov    0x8(%ebp),%eax
0850dddc +0x05be:  add    $0x2a4,%eax
0850dde1 +0x05c3:  mov    %edx,0x4(%esp)
0850dde5 +0x05c7:  mov    %eax,(%esp)
0850dde8 +0x05ca:  call   08516904 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x2f39>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x2f39
0850dded +0x05cf:  jmp    0850ddf0 <+0x5d2>
0850ddef +0x05d1:  nop
0850ddf0 +0x05d2:  movl   $0x0,-0x2c(%ebp)
0850ddf7 +0x05d9:  jmp    0850de12 <+0x5f4>
0850ddf9 +0x05db:  mov    -0x2c(%ebp),%eax
0850ddfc +0x05de:  mov    -0x2c(%ebp),%edx
0850ddff +0x05e1:  mov    0xc(%ebp),%ecx
0850de02 +0x05e4:  movzbl 0x38(%ecx,%edx,1),%ecx
0850de07 +0x05e9:  mov    0x8(%ebp),%edx
0850de0a +0x05ec:  mov    %cl,0x3c(%edx,%eax,1)
0850de0e +0x05f0:  addl   $0x1,-0x2c(%ebp)
0850de12 +0x05f4:  cmpl   $0xa,-0x2c(%ebp)
0850de16 +0x05f8:  setle  %al
0850de19 +0x05fb:  test   %al,%al
0850de1b +0x05fd:  jne    0850ddf9 <+0x5db>
0850de1d +0x05ff:  mov    0xc(%ebp),%eax
0850de20 +0x0602:  mov    0x5c(%eax),%edx
0850de23 +0x0605:  mov    0x8(%ebp),%eax
0850de26 +0x0608:  mov    %edx,0x48(%eax)
0850de29 +0x060b:  mov    0xc(%ebp),%eax
0850de2c +0x060e:  mov    0x60(%eax),%edx
0850de2f +0x0611:  mov    0x8(%ebp),%eax
0850de32 +0x0614:  mov    %edx,0x4c(%eax)
0850de35 +0x0617:  mov    0x8(%ebp),%eax
0850de38 +0x061a:  movb   $0x1,0x54(%eax)
0850de3c +0x061e:  mov    0xc(%ebp),%eax
0850de3f +0x0621:  mov    0x364(%eax),%edx
0850de45 +0x0627:  mov    0x8(%ebp),%eax
0850de48 +0x062a:  mov    %edx,0x28c(%eax)
0850de4e +0x0630:  mov    0xc(%ebp),%eax
0850de51 +0x0633:  mov    0x1e4(%eax),%edx
0850de57 +0x0639:  mov    0x8(%ebp),%eax
0850de5a +0x063c:  mov    %edx,0x2bc(%eax)
0850de60 +0x0642:  mov    0x8(%ebp),%eax
0850de63 +0x0645:  add    $0x2c0,%eax
0850de68 +0x064a:  mov    %eax,(%esp)
0850de6b +0x064d:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
0850de70 +0x0652:  mov    0x8(%ebp),%eax
0850de73 +0x0655:  mov    0x2b0(%eax),%eax
0850de79 +0x065b:  cmp    $0x2,%eax
0850de7c +0x065e:  jne    0850df1c <+0x6fe>
0850de82 +0x0664:  mov    0x8(%ebp),%eax
0850de85 +0x0667:  mov    0x2bc(%eax),%eax
0850de8b +0x066d:  cmp    $0x1,%eax
0850de8e +0x0670:  jne    0850df1c <+0x6fe>
0850de94 +0x0676:  mov    0xc(%ebp),%eax
0850de97 +0x0679:  add    $0x94,%eax
0850de9c +0x067e:  mov    %eax,(%esp)
0850de9f +0x0681:  call   08237a90 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd13a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd13a
0850dea4 +0x0686:  cmp    $0x1,%eax
0850dea7 +0x0689:  seta   %al
0850deaa +0x068c:  test   %al,%al
0850deac +0x068e:  je     0850df1c <+0x6fe>
0850deae +0x0690:  movl   $0x1,-0x28(%ebp)
0850deb5 +0x0697:  jmp    0850df02 <+0x6e4>
0850deb7 +0x0699:  mov    0xc(%ebp),%eax
0850deba +0x069c:  lea    0x94(%eax),%edx
0850dec0 +0x06a2:  mov    -0x28(%ebp),%eax
0850dec3 +0x06a5:  mov    %eax,0x4(%esp)
0850dec7 +0x06a9:  mov    %edx,(%esp)
0850deca +0x06ac:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0850decf +0x06b1:  mov    %eax,(%esp)
0850ded2 +0x06b4:  call   08a86d28 <_Z28GetEquipmentTypeStringToEnumRSs>  ; GetEquipmentTypeStringToEnum(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
0850ded7 +0x06b9:  mov    %eax,-0x24(%ebp)
0850deda +0x06bc:  cmpl   $0x16,-0x24(%ebp)
0850dede +0x06c0:  je     0850defe <+0x6e0>
0850dee0 +0x06c2:  mov    -0x24(%ebp),%eax
0850dee3 +0x06c5:  mov    %eax,-0x50(%ebp)
0850dee6 +0x06c8:  mov    0x8(%ebp),%eax
0850dee9 +0x06cb:  lea    0x2c0(%eax),%edx
0850deef +0x06d1:  lea    -0x50(%ebp),%eax
0850def2 +0x06d4:  mov    %eax,0x4(%esp)
0850def6 +0x06d8:  mov    %edx,(%esp)
0850def9 +0x06db:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0850defe +0x06e0:  addl   $0x1,-0x28(%ebp)
0850df02 +0x06e4:  mov    0xc(%ebp),%eax
0850df05 +0x06e7:  add    $0x94,%eax
0850df0a +0x06ec:  mov    %eax,(%esp)
0850df0d +0x06ef:  call   08237a90 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd13a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd13a
0850df12 +0x06f4:  cmp    -0x28(%ebp),%eax
0850df15 +0x06f7:  seta   %al
0850df18 +0x06fa:  test   %al,%al
0850df1a +0x06fc:  jne    0850deb7 <+0x699>
0850df1c +0x06fe:  mov    0xc(%ebp),%eax
0850df1f +0x0701:  mov    0x68(%eax),%edx
0850df22 +0x0704:  mov    0x8(%ebp),%eax
0850df25 +0x0707:  mov    %edx,0x2d0(%eax)
0850df2b +0x070d:  mov    0xc(%ebp),%eax
0850df2e +0x0710:  mov    0x1b4(%eax),%edx
0850df34 +0x0716:  mov    0x8(%ebp),%eax
0850df37 +0x0719:  mov    %edx,0x2d4(%eax)
0850df3d +0x071f:  mov    0xc(%ebp),%eax
0850df40 +0x0722:  movzbl 0x1b9(%eax),%edx
0850df47 +0x0729:  mov    0x8(%ebp),%eax
0850df4a +0x072c:  mov    %dl,0x2d8(%eax)
0850df50 +0x0732:  mov    0xc(%ebp),%eax
0850df53 +0x0735:  movzbl 0x1ba(%eax),%edx
0850df5a +0x073c:  mov    0x8(%ebp),%eax
0850df5d +0x073f:  mov    %dl,0x2d9(%eax)
0850df63 +0x0745:  mov    0xc(%ebp),%eax
0850df66 +0x0748:  movzbl 0x1bb(%eax),%edx
0850df6d +0x074f:  mov    0x8(%ebp),%eax
0850df70 +0x0752:  mov    %dl,0x2da(%eax)
0850df76 +0x0758:  mov    0xc(%ebp),%eax
0850df79 +0x075b:  movzbl 0x360(%eax),%edx
0850df80 +0x0762:  mov    0x8(%ebp),%eax
0850df83 +0x0765:  mov    %dl,0x2e0(%eax)
0850df89 +0x076b:  mov    0xc(%ebp),%eax
0850df8c +0x076e:  mov    0x358(%eax),%eax
0850df92 +0x0774:  mov    %eax,%edx
0850df94 +0x0776:  mov    0x8(%ebp),%eax
0850df97 +0x0779:  mov    %edx,0x2dc(%eax)
0850df9d +0x077f:  mov    0xc(%ebp),%eax
0850dfa0 +0x0782:  movzbl 0x1bf(%eax),%edx
0850dfa7 +0x0789:  mov    0x8(%ebp),%eax
0850dfaa +0x078c:  mov    %dl,0x2e1(%eax)
0850dfb0 +0x0792:  mov    0xc(%ebp),%eax
0850dfb3 +0x0795:  movzbl 0x1bc(%eax),%edx
0850dfba +0x079c:  mov    0x8(%ebp),%eax
0850dfbd +0x079f:  mov    %dl,0x2e4(%eax)
0850dfc3 +0x07a5:  mov    0xc(%ebp),%eax
0850dfc6 +0x07a8:  movzbl 0x1bd(%eax),%edx
0850dfcd +0x07af:  mov    0x8(%ebp),%eax
0850dfd0 +0x07b2:  mov    %dl,0x2e5(%eax)
0850dfd6 +0x07b8:  mov    0xc(%ebp),%eax
0850dfd9 +0x07bb:  movzbl 0x1be(%eax),%edx
0850dfe0 +0x07c2:  mov    0x8(%ebp),%eax
0850dfe3 +0x07c5:  mov    %dl,0x2e6(%eax)
0850dfe9 +0x07cb:  mov    0xc(%ebp),%eax
0850dfec +0x07ce:  movzbl 0x1c0(%eax),%edx
0850dff3 +0x07d5:  mov    0x8(%ebp),%eax
0850dff6 +0x07d8:  mov    %dl,0x2e7(%eax)
0850dffc +0x07de:  mov    0xc(%ebp),%eax
0850dfff +0x07e1:  mov    0x1c4(%eax),%edx
0850e005 +0x07e7:  mov    0x8(%ebp),%eax
0850e008 +0x07ea:  mov    %edx,0x2e8(%eax)
0850e00e +0x07f0:  mov    0xc(%ebp),%eax
0850e011 +0x07f3:  movzbl 0x1d0(%eax),%edx
0850e018 +0x07fa:  mov    0x8(%ebp),%eax
0850e01b +0x07fd:  mov    %dl,0x2ec(%eax)
0850e021 +0x0803:  mov    0xc(%ebp),%eax
0850e024 +0x0806:  movzwl 0x380(%eax),%edx
0850e02b +0x080d:  mov    0x8(%ebp),%eax
0850e02e +0x0810:  mov    %dx,0x2b4(%eax)
0850e035 +0x0817:  mov    0xc(%ebp),%eax
0850e038 +0x081a:  mov    0x100(%eax),%edx
0850e03e +0x0820:  mov    0x8(%ebp),%eax
0850e041 +0x0823:  mov    %edx,0x74(%eax)
0850e044 +0x0826:  mov    0xc(%ebp),%eax
0850e047 +0x0829:  movzbl 0x104(%eax),%edx
0850e04e +0x0830:  mov    0x8(%ebp),%eax
0850e051 +0x0833:  mov    %dl,0x78(%eax)
0850e054 +0x0836:  mov    0x8(%ebp),%eax
0850e057 +0x0839:  movl   $0xffffffff,0x58(%eax)
0850e05e +0x0840:  mov    0x8(%ebp),%eax
0850e061 +0x0843:  movb   $0x0,0x79(%eax)
0850e065 +0x0847:  mov    0xc(%ebp),%eax
0850e068 +0x084a:  mov    0xc8(%eax),%edx
0850e06e +0x0850:  mov    0x8(%ebp),%eax
0850e071 +0x0853:  mov    %edx,0x80(%eax)
0850e077 +0x0859:  mov    0xc(%ebp),%eax
0850e07a +0x085c:  mov    0xcc(%eax),%edx
0850e080 +0x0862:  mov    0x8(%ebp),%eax
0850e083 +0x0865:  mov    %edx,0x7c(%eax)
0850e086 +0x0868:  mov    0xc(%ebp),%eax
0850e089 +0x086b:  movzbl 0xd0(%eax),%edx
0850e090 +0x0872:  mov    0x8(%ebp),%eax
0850e093 +0x0875:  mov    %dl,0x87(%eax)
0850e099 +0x087b:  mov    0xc(%ebp),%eax
0850e09c +0x087e:  lea    0x6c(%eax),%edx
0850e09f +0x0881:  mov    0x8(%ebp),%eax
0850e0a2 +0x0884:  add    $0xb0,%eax
0850e0a7 +0x0889:  mov    %edx,0x4(%esp)
0850e0ab +0x088d:  mov    %eax,(%esp)
0850e0ae +0x0890:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
0850e0b3 +0x0895:  mov    0x8(%ebp),%eax
0850e0b6 +0x0898:  mov    0xc(%ebp),%edx
0850e0b9 +0x089b:  mov    0x105(%edx),%ecx
0850e0bf +0x08a1:  mov    %ecx,0xb4(%eax)
0850e0c5 +0x08a7:  mov    0x109(%edx),%ecx
0850e0cb +0x08ad:  mov    %ecx,0xb8(%eax)
0850e0d1 +0x08b3:  movzbl 0x10d(%edx),%edx
0850e0d8 +0x08ba:  mov    %dl,0xbc(%eax)
0850e0de +0x08c0:  mov    0xc(%ebp),%eax
0850e0e1 +0x08c3:  add    $0x105,%eax
0850e0e6 +0x08c8:  mov    %eax,(%esp)
0850e0e9 +0x08cb:  call   08513a24 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x59>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x59
0850e0ee +0x08d0:  mov    0xc(%ebp),%eax
0850e0f1 +0x08d3:  movzbl 0x10e(%eax),%edx
0850e0f8 +0x08da:  mov    0x8(%ebp),%eax
0850e0fb +0x08dd:  mov    %dl,0x2f0(%eax)
0850e101 +0x08e3:  mov    0xc(%ebp),%eax
0850e104 +0x08e6:  movzwl 0x394(%eax),%edx
0850e10b +0x08ed:  mov    0x8(%ebp),%eax
0850e10e +0x08f0:  mov    %dx,0x2ee(%eax)
0850e115 +0x08f7:  mov    0xc(%ebp),%eax
0850e118 +0x08fa:  lea    0x3f4(%eax),%edx
0850e11e +0x0900:  mov    0x8(%ebp),%eax
0850e121 +0x0903:  add    $0x2f4,%eax
0850e126 +0x0908:  mov    %edx,0x4(%esp)
0850e12a +0x090c:  mov    %eax,(%esp)
0850e12d +0x090f:  call   08516b76 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x31ab>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x31ab
0850e132 +0x0914:  mov    0xc(%ebp),%eax
0850e135 +0x0917:  movzbl 0x40c(%eax),%edx
0850e13c +0x091e:  mov    0x8(%ebp),%eax
0850e13f +0x0921:  mov    %dl,0x30c(%eax)
0850e145 +0x0927:  mov    0xc(%ebp),%eax
0850e148 +0x092a:  lea    0x40d(%eax),%edx
0850e14e +0x0930:  mov    0x8(%ebp),%eax
0850e151 +0x0933:  add    $0x30d,%eax
0850e156 +0x0938:  movl   $0x2,0x8(%esp)
0850e15e +0x0940:  mov    %edx,0x4(%esp)
0850e162 +0x0944:  mov    %eax,(%esp)
0850e165 +0x0947:  call   0807d8a0 <_init+0x198>
0850e16a +0x094c:  mov    0xc(%ebp),%eax
0850e16d +0x094f:  movzbl 0x396(%eax),%edx
0850e174 +0x0956:  mov    0x8(%ebp),%eax
0850e177 +0x0959:  mov    %dl,0x30f(%eax)
0850e17d +0x095f:  mov    0xc(%ebp),%eax
0850e180 +0x0962:  movzwl 0x398(%eax),%edx
0850e187 +0x0969:  mov    0x8(%ebp),%eax
0850e18a +0x096c:  mov    %dx,0x310(%eax)
0850e191 +0x0973:  mov    0xc(%ebp),%eax
0850e194 +0x0976:  movzbl 0x39a(%eax),%edx
0850e19b +0x097d:  mov    0x8(%ebp),%eax
0850e19e +0x0980:  mov    %dl,0x312(%eax)
0850e1a4 +0x0986:  mov    0xc(%ebp),%eax
0850e1a7 +0x0989:  movzbl 0x39b(%eax),%edx
0850e1ae +0x0990:  mov    0x8(%ebp),%eax
0850e1b1 +0x0993:  mov    %dl,0x313(%eax)
0850e1b7 +0x0999:  mov    0xc(%ebp),%eax
0850e1ba +0x099c:  mov    0x39c(%eax),%eax
0850e1c0 +0x09a2:  mov    %eax,%edx
0850e1c2 +0x09a4:  mov    0x8(%ebp),%eax
0850e1c5 +0x09a7:  mov    %dx,0x314(%eax)
0850e1cc +0x09ae:  mov    0xc(%ebp),%eax
0850e1cf +0x09b1:  movzbl 0x3a0(%eax),%edx
0850e1d6 +0x09b8:  mov    0x8(%ebp),%eax
0850e1d9 +0x09bb:  mov    %dl,0x316(%eax)
0850e1df +0x09c1:  mov    0xc(%ebp),%eax
0850e1e2 +0x09c4:  movzbl 0x438(%eax),%edx
0850e1e9 +0x09cb:  mov    0x8(%ebp),%eax
0850e1ec +0x09ce:  mov    %dl,0x320(%eax)
0850e1f2 +0x09d4:  mov    0x8(%ebp),%eax
0850e1f5 +0x09d7:  movzbl 0x320(%eax),%eax
0850e1fc +0x09de:  test   %al,%al
0850e1fe +0x09e0:  je     0850e224 <+0xa06>
0850e200 +0x09e2:  mov    0xc(%ebp),%eax
0850e203 +0x09e5:  mov    0x43c(%eax),%edx
0850e209 +0x09eb:  mov    0x8(%ebp),%eax
0850e20c +0x09ee:  mov    %edx,0x318(%eax)
0850e212 +0x09f4:  mov    0xc(%ebp),%eax
0850e215 +0x09f7:  mov    0x440(%eax),%edx
0850e21b +0x09fd:  mov    0x8(%ebp),%eax
0850e21e +0x0a00:  mov    %edx,0x31c(%eax)
0850e224 +0x0a06:  mov    0xc(%ebp),%eax
0850e227 +0x0a09:  movzbl 0x10f(%eax),%edx
0850e22e +0x0a10:  mov    0x8(%ebp),%eax
0850e231 +0x0a13:  mov    %dl,0xbd(%eax)
0850e237 +0x0a19:  mov    0xc(%ebp),%eax
0850e23a +0x0a1c:  lea    0x110(%eax),%edx
0850e240 +0x0a22:  mov    0x8(%ebp),%eax
0850e243 +0x0a25:  add    $0xc0,%eax
0850e248 +0x0a2a:  mov    %edx,0x4(%esp)
0850e24c +0x0a2e:  mov    %eax,(%esp)
0850e24f +0x0a31:  call   0830f08c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xc71>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xc71
0850e254 +0x0a36:  mov    0x8(%ebp),%eax
0850e257 +0x0a39:  movl   $0x0,0xcc(%eax)
0850e261 +0x0a43:  mov    0xc(%ebp),%eax
0850e264 +0x0a46:  movzbl 0x3d0(%eax),%edx
0850e26b +0x0a4d:  mov    0x8(%ebp),%eax
0850e26e +0x0a50:  mov    %dl,0xd0(%eax)
0850e274 +0x0a56:  mov    0xc(%ebp),%eax
0850e277 +0x0a59:  movzbl 0x3d1(%eax),%edx
0850e27e +0x0a60:  mov    0x8(%ebp),%eax
0850e281 +0x0a63:  mov    %dl,0x321(%eax)
0850e287 +0x0a69:  mov    0xc(%ebp),%eax
0850e28a +0x0a6c:  lea    0xdc(%eax),%edx
0850e290 +0x0a72:  mov    0x8(%ebp),%eax
0850e293 +0x0a75:  add    $0xd4,%eax
0850e298 +0x0a7a:  mov    %edx,0x4(%esp)
0850e29c +0x0a7e:  mov    %eax,(%esp)
0850e29f +0x0a81:  call   08516b94 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x31c9>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x31c9
0850e2a4 +0x0a86:  mov    0xc(%ebp),%eax
0850e2a7 +0x0a89:  mov    0x64(%eax),%edx
0850e2aa +0x0a8c:  mov    0x8(%ebp),%eax
0850e2ad +0x0a8f:  mov    %edx,0xec(%eax)
0850e2b3 +0x0a95:  mov    0xc(%ebp),%eax
0850e2b6 +0x0a98:  mov    0x444(%eax),%edx
0850e2bc +0x0a9e:  mov    0x8(%ebp),%eax
0850e2bf +0x0aa1:  mov    %edx,0xf0(%eax)
0850e2c5 +0x0aa7:  mov    0xc(%ebp),%eax
0850e2c8 +0x0aaa:  mov    0x448(%eax),%edx
0850e2ce +0x0ab0:  mov    0x8(%ebp),%eax
0850e2d1 +0x0ab3:  mov    %edx,0xf4(%eax)
0850e2d7 +0x0ab9:  mov    0xc(%ebp),%eax
0850e2da +0x0abc:  mov    0x150(%eax),%edx
0850e2e0 +0x0ac2:  mov    0x8(%ebp),%eax
0850e2e3 +0x0ac5:  mov    %edx,0xfc(%eax)
0850e2e9 +0x0acb:  mov    0xc(%ebp),%eax
0850e2ec +0x0ace:  mov    0x154(%eax),%edx
0850e2f2 +0x0ad4:  mov    0x8(%ebp),%eax
0850e2f5 +0x0ad7:  mov    %edx,0x100(%eax)
0850e2fb +0x0add:  mov    0x8(%ebp),%eax
0850e2fe +0x0ae0:  add    $0x104,%eax
0850e303 +0x0ae5:  mov    %eax,(%esp)
0850e306 +0x0ae8:  call   08516bb2 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x31e7>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x31e7
0850e30b +0x0aed:  mov    0xc(%ebp),%eax
0850e30e +0x0af0:  lea    0x158(%eax),%edx
0850e314 +0x0af6:  mov    0x8(%ebp),%eax
0850e317 +0x0af9:  add    $0x104,%eax
0850e31c +0x0afe:  mov    %edx,0x4(%esp)
0850e320 +0x0b02:  mov    %eax,(%esp)
0850e323 +0x0b05:  call   08516bce <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3203>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3203
0850e328 +0x0b0a:  mov    0xc(%ebp),%eax
0850e32b +0x0b0d:  mov    0x44c(%eax),%edx
0850e331 +0x0b13:  mov    0x8(%ebp),%eax
0850e334 +0x0b16:  mov    %edx,0x324(%eax)
0850e33a +0x0b1c:  mov    0xc(%ebp),%eax
0850e33d +0x0b1f:  mov    0x454(%eax),%edx
0850e343 +0x0b25:  mov    0x8(%ebp),%eax
0850e346 +0x0b28:  mov    %edx,0x328(%eax)
0850e34c +0x0b2e:  mov    0xc(%ebp),%eax
0850e34f +0x0b31:  mov    0x450(%eax),%edx
0850e355 +0x0b37:  mov    0x8(%ebp),%eax
0850e358 +0x0b3a:  mov    %edx,0x32c(%eax)
0850e35e +0x0b40:  mov    0xc(%ebp),%eax
0850e361 +0x0b43:  mov    0x458(%eax),%edx
0850e367 +0x0b49:  mov    0x8(%ebp),%eax
0850e36a +0x0b4c:  mov    %edx,0x330(%eax)
0850e370 +0x0b52:  mov    0xc(%ebp),%eax
0850e373 +0x0b55:  mov    0x45c(%eax),%edx
0850e379 +0x0b5b:  mov    0x8(%ebp),%eax
0850e37c +0x0b5e:  mov    %edx,0x334(%eax)
0850e382 +0x0b64:  mov    0xc(%ebp),%eax
0850e385 +0x0b67:  mov    0x460(%eax),%edx
0850e38b +0x0b6d:  mov    0x8(%ebp),%eax
0850e38e +0x0b70:  mov    %edx,0x338(%eax)
0850e394 +0x0b76:  mov    0xc(%ebp),%eax
0850e397 +0x0b79:  mov    0x464(%eax),%edx
0850e39d +0x0b7f:  mov    0x8(%ebp),%eax
0850e3a0 +0x0b82:  mov    %edx,0x33c(%eax)
0850e3a6 +0x0b88:  mov    0xc(%ebp),%eax
0850e3a9 +0x0b8b:  lea    0x11c(%eax),%edx
0850e3af +0x0b91:  mov    0x8(%ebp),%eax
0850e3b2 +0x0b94:  add    $0x128,%eax
0850e3b7 +0x0b99:  mov    %edx,0x4(%esp)
0850e3bb +0x0b9d:  mov    %eax,(%esp)
0850e3be +0x0ba0:  call   08516e1c <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3451>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3451
0850e3c3 +0x0ba5:  mov    0xc(%ebp),%eax
0850e3c6 +0x0ba8:  mov    0x474(%eax),%eax
0850e3cc +0x0bae:  test   %eax,%eax
0850e3ce +0x0bb0:  je     0850e3f5 <+0xbd7>
0850e3d0 +0x0bb2:  mov    0xc(%ebp),%eax
0850e3d3 +0x0bb5:  mov    0x474(%eax),%esi
0850e3d9 +0x0bbb:  mov    0xc(%ebp),%eax
0850e3dc +0x0bbe:  mov    (%eax),%eax
0850e3de +0x0bc0:  mov    %eax,%ebx
0850e3e0 +0x0bc2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0850e3e5 +0x0bc7:  mov    %esi,0x8(%esp)
0850e3e9 +0x0bcb:  mov    %ebx,0x4(%esp)
0850e3ed +0x0bcf:  mov    %eax,(%esp)
0850e3f0 +0x0bd2:  call   0835fb7a <_ZN12CDataManager20set_lottery_use_costEjj>  ; CDataManager::set_lottery_use_cost(unsigned int, unsigned int)
0850e3f5 +0x0bd7:  mov    0xc(%ebp),%eax
0850e3f8 +0x0bda:  mov    0x478(%eax),%edx
0850e3fe +0x0be0:  mov    0x8(%ebp),%eax
0850e401 +0x0be3:  mov    %edx,0x340(%eax)
0850e407 +0x0be9:  mov    0xc(%ebp),%eax
0850e40a +0x0bec:  movzbl 0x3a1(%eax),%edx
0850e411 +0x0bf3:  mov    0x8(%ebp),%eax
0850e414 +0x0bf6:  mov    %dl,0x344(%eax)
0850e41a +0x0bfc:  mov    0xc(%ebp),%eax
0850e41d +0x0bff:  lea    0x3a4(%eax),%edx
0850e423 +0x0c05:  mov    0x8(%ebp),%eax
0850e426 +0x0c08:  add    $0x348,%eax
0850e42b +0x0c0d:  mov    %edx,0x4(%esp)
0850e42f +0x0c11:  mov    %eax,(%esp)
0850e432 +0x0c14:  call   081526c0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1ff5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1ff5
0850e437 +0x0c19:  mov    0xc(%ebp),%eax
0850e43a +0x0c1c:  mov    0x178(%eax),%edx
0850e440 +0x0c22:  mov    0x8(%ebp),%eax
0850e443 +0x0c25:  mov    %edx,0x148(%eax)
0850e449 +0x0c2b:  mov    0xc(%ebp),%eax
0850e44c +0x0c2e:  movzbl 0x17c(%eax),%edx
0850e453 +0x0c35:  mov    0x8(%ebp),%eax
0850e456 +0x0c38:  mov    %dl,0x14c(%eax)
0850e45c +0x0c3e:  mov    0xc(%ebp),%eax
0850e45f +0x0c41:  lea    0x180(%eax),%edx
0850e465 +0x0c47:  mov    0x8(%ebp),%eax
0850e468 +0x0c4a:  add    $0x150,%eax
0850e46d +0x0c4f:  mov    %edx,0x4(%esp)
0850e471 +0x0c53:  mov    %eax,(%esp)
0850e474 +0x0c56:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
0850e479 +0x0c5b:  mov    0xc(%ebp),%eax
0850e47c +0x0c5e:  lea    0x184(%eax),%edx
0850e482 +0x0c64:  mov    0x8(%ebp),%eax
0850e485 +0x0c67:  add    $0x154,%eax
0850e48a +0x0c6c:  mov    %edx,0x4(%esp)
0850e48e +0x0c70:  mov    %eax,(%esp)
0850e491 +0x0c73:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
0850e496 +0x0c78:  mov    0xc(%ebp),%eax
0850e499 +0x0c7b:  lea    0x188(%eax),%edx
0850e49f +0x0c81:  mov    0x8(%ebp),%eax
0850e4a2 +0x0c84:  add    $0x158,%eax
0850e4a7 +0x0c89:  mov    %edx,0x4(%esp)
0850e4ab +0x0c8d:  mov    %eax,(%esp)
0850e4ae +0x0c90:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
0850e4b3 +0x0c95:  mov    0xc(%ebp),%eax
0850e4b6 +0x0c98:  add    $0x19c,%eax
0850e4bb +0x0c9d:  mov    %eax,(%esp)
0850e4be +0x0ca0:  call   08197fa4 <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x1af>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x1af
0850e4c3 +0x0ca5:  xor    $0x1,%eax
0850e4c6 +0x0ca8:  test   %al,%al
0850e4c8 +0x0caa:  je     0850e567 <+0xd49>
0850e4ce +0x0cb0:  mov    0xc(%ebp),%eax
0850e4d1 +0x0cb3:  add    $0x19c,%eax
0850e4d6 +0x0cb8:  mov    %eax,(%esp)
0850e4d9 +0x0cbb:  call   08516e3a <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x346f>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x346f
0850e4de +0x0cc0:  mov    0x8(%ebp),%edx
0850e4e1 +0x0cc3:  add    $0x168,%edx
0850e4e7 +0x0cc9:  mov    %eax,0x4(%esp)
0850e4eb +0x0ccd:  mov    %edx,(%esp)
0850e4ee +0x0cd0:  call   08516e5c <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3491>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3491
0850e4f3 +0x0cd5:  mov    0x8(%ebp),%eax
0850e4f6 +0x0cd8:  lea    0x168(%eax),%edx
0850e4fc +0x0cde:  lea    -0x48(%ebp),%eax
0850e4ff +0x0ce1:  mov    %edx,0x4(%esp)
0850e503 +0x0ce5:  mov    %eax,(%esp)
0850e506 +0x0ce8:  call   08516f93 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x35c8>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x35c8
0850e50b +0x0ced:  sub    $0x4,%esp
0850e50e +0x0cf0:  mov    0xc(%ebp),%eax
0850e511 +0x0cf3:  lea    0x19c(%eax),%edx
0850e517 +0x0cf9:  lea    -0x44(%ebp),%eax
0850e51a +0x0cfc:  mov    %edx,0x4(%esp)
0850e51e +0x0d00:  mov    %eax,(%esp)
0850e521 +0x0d03:  call   0819801a <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x225>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x225
0850e526 +0x0d08:  sub    $0x4,%esp
0850e529 +0x0d0b:  mov    0xc(%ebp),%eax
0850e52c +0x0d0e:  lea    0x19c(%eax),%edx
0850e532 +0x0d14:  lea    -0x40(%ebp),%eax
0850e535 +0x0d17:  mov    %edx,0x4(%esp)
0850e539 +0x0d1b:  mov    %eax,(%esp)
0850e53c +0x0d1e:  call   08197ff6 <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x201>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x201
0850e541 +0x0d23:  sub    $0x4,%esp
0850e544 +0x0d26:  lea    -0x4c(%ebp),%eax
0850e547 +0x0d29:  mov    -0x48(%ebp),%edx
0850e54a +0x0d2c:  mov    %edx,0xc(%esp)
0850e54e +0x0d30:  mov    -0x44(%ebp),%edx
0850e551 +0x0d33:  mov    %edx,0x8(%esp)
0850e555 +0x0d37:  mov    -0x40(%ebp),%edx
0850e558 +0x0d3a:  mov    %edx,0x4(%esp)
0850e55c +0x0d3e:  mov    %eax,(%esp)
0850e55f +0x0d41:  call   08516fb6 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x35eb>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x35eb
0850e564 +0x0d46:  sub    $0x4,%esp
0850e567 +0x0d49:  mov    0xc(%ebp),%eax
0850e56a +0x0d4c:  add    $0x190,%eax
0850e56f +0x0d51:  mov    %eax,(%esp)
0850e572 +0x0d54:  call   0811c960 <_GLOBAL__I_events+0x1003>  ; global constructors keyed to events+0x1003
0850e577 +0x0d59:  xor    $0x1,%eax
0850e57a +0x0d5c:  test   %al,%al
0850e57c +0x0d5e:  je     0850e61b <+0xdfd>
0850e582 +0x0d64:  mov    0xc(%ebp),%eax
0850e585 +0x0d67:  add    $0x190,%eax
0850e58a +0x0d6c:  mov    %eax,(%esp)
0850e58d +0x0d6f:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0850e592 +0x0d74:  mov    0x8(%ebp),%edx
0850e595 +0x0d77:  add    $0x15c,%edx
0850e59b +0x0d7d:  mov    %eax,0x4(%esp)
0850e59f +0x0d81:  mov    %edx,(%esp)
0850e5a2 +0x0d84:  call   0817ee44 <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x75>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x75
0850e5a7 +0x0d89:  mov    0x8(%ebp),%eax
0850e5aa +0x0d8c:  lea    0x15c(%eax),%edx
0850e5b0 +0x0d92:  lea    -0x38(%ebp),%eax
0850e5b3 +0x0d95:  mov    %edx,0x4(%esp)
0850e5b7 +0x0d99:  mov    %eax,(%esp)
0850e5ba +0x0d9c:  call   08111f1a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x142c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x142c
0850e5bf +0x0da1:  sub    $0x4,%esp
0850e5c2 +0x0da4:  mov    0xc(%ebp),%eax
0850e5c5 +0x0da7:  lea    0x190(%eax),%edx
0850e5cb +0x0dad:  lea    -0x34(%ebp),%eax
0850e5ce +0x0db0:  mov    %edx,0x4(%esp)
0850e5d2 +0x0db4:  mov    %eax,(%esp)
0850e5d5 +0x0db7:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
0850e5da +0x0dbc:  sub    $0x4,%esp
0850e5dd +0x0dbf:  mov    0xc(%ebp),%eax
0850e5e0 +0x0dc2:  lea    0x190(%eax),%edx
0850e5e6 +0x0dc8:  lea    -0x30(%ebp),%eax
0850e5e9 +0x0dcb:  mov    %edx,0x4(%esp)
0850e5ed +0x0dcf:  mov    %eax,(%esp)
0850e5f0 +0x0dd2:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
0850e5f5 +0x0dd7:  sub    $0x4,%esp
0850e5f8 +0x0dda:  lea    -0x3c(%ebp),%eax
0850e5fb +0x0ddd:  mov    -0x38(%ebp),%edx
0850e5fe +0x0de0:  mov    %edx,0xc(%esp)
0850e602 +0x0de4:  mov    -0x34(%ebp),%edx
0850e605 +0x0de7:  mov    %edx,0x8(%esp)
0850e609 +0x0deb:  mov    -0x30(%ebp),%edx
0850e60c +0x0dee:  mov    %edx,0x4(%esp)
0850e610 +0x0df2:  mov    %eax,(%esp)
0850e613 +0x0df5:  call   08111f3d <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x144f>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x144f
0850e618 +0x0dfa:  sub    $0x4,%esp
0850e61b +0x0dfd:  mov    0xc(%ebp),%eax
0850e61e +0x0e00:  mov    0x418(%eax),%edx
0850e624 +0x0e06:  mov    0x8(%ebp),%eax
0850e627 +0x0e09:  mov    %edx,0x360(%eax)
0850e62d +0x0e0f:  mov    0xc(%ebp),%eax
0850e630 +0x0e12:  movzbl 0x32c(%eax),%edx
0850e637 +0x0e19:  mov    0x8(%ebp),%eax
0850e63a +0x0e1c:  mov    %dl,0x364(%eax)
0850e640 +0x0e22:  mov    0x8(%ebp),%eax
0850e643 +0x0e25:  mov    0xc(%ebp),%edx
0850e646 +0x0e28:  movzwl 0x47c(%edx),%ecx
0850e64d +0x0e2f:  mov    %cx,0x365(%eax)
0850e654 +0x0e36:  movzbl 0x47e(%edx),%edx
0850e65b +0x0e3d:  mov    %dl,0x367(%eax)
0850e661 +0x0e43:  mov    0xc(%ebp),%eax
0850e664 +0x0e46:  lea    0x480(%eax),%edx
0850e66a +0x0e4c:  mov    0x8(%ebp),%eax
0850e66d +0x0e4f:  add    $0x368,%eax
0850e672 +0x0e54:  mov    %edx,0x4(%esp)
0850e676 +0x0e58:  mov    %eax,(%esp)
0850e679 +0x0e5b:  call   08516b94 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x31c9>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x31c9
0850e67e +0x0e60:  mov    0xc(%ebp),%eax
0850e681 +0x0e63:  lea    0x498(%eax),%edx
0850e687 +0x0e69:  mov    0x8(%ebp),%eax
0850e68a +0x0e6c:  add    $0x380,%eax
0850e68f +0x0e71:  mov    %edx,0x4(%esp)
0850e693 +0x0e75:  mov    %eax,(%esp)
0850e696 +0x0e78:  call   08516b94 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x31c9>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x31c9
0850e69b +0x0e7d:  mov    0xc(%ebp),%eax
0850e69e +0x0e80:  movzbl 0x4b0(%eax),%edx
0850e6a5 +0x0e87:  mov    0x8(%ebp),%eax
0850e6a8 +0x0e8a:  mov    %dl,0x398(%eax)
0850e6ae +0x0e90:  mov    0xc(%ebp),%eax
0850e6b1 +0x0e93:  mov    0x1e8(%eax),%edx
0850e6b7 +0x0e99:  mov    0x8(%ebp),%eax
0850e6ba +0x0e9c:  mov    %edx,0x39c(%eax)
0850e6c0 +0x0ea2:  mov    0xc(%ebp),%eax
0850e6c3 +0x0ea5:  lea    0x1ec(%eax),%edx
0850e6c9 +0x0eab:  mov    0x8(%ebp),%eax
0850e6cc +0x0eae:  add    $0x3a0,%eax
0850e6d1 +0x0eb3:  mov    %edx,0x4(%esp)
0850e6d5 +0x0eb7:  mov    %eax,(%esp)
0850e6d8 +0x0eba:  call   080ccfd2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1e1f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1e1f
0850e6dd +0x0ebf:  mov    0xc(%ebp),%eax
0850e6e0 +0x0ec2:  lea    0x1f8(%eax),%edx
0850e6e6 +0x0ec8:  mov    0x8(%ebp),%eax
0850e6e9 +0x0ecb:  add    $0x3ac,%eax
0850e6ee +0x0ed0:  mov    %edx,0x4(%esp)
0850e6f2 +0x0ed4:  mov    %eax,(%esp)
0850e6f5 +0x0ed7:  call   08517014 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3649>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3649
0850e6fa +0x0edc:  mov    0x8(%ebp),%eax
0850e6fd +0x0edf:  mov    0x39c(%eax),%eax
0850e703 +0x0ee5:  cmp    $0x2c,%eax
0850e706 +0x0ee8:  jne    0850e77c <+0xf5e>
0850e708 +0x0eea:  movl   $0x0,-0x20(%ebp)
0850e70f +0x0ef1:  jmp    0850e762 <+0xf44>
0850e711 +0x0ef3:  mov    0x8(%ebp),%eax
0850e714 +0x0ef6:  lea    0x3a0(%eax),%edx
0850e71a +0x0efc:  mov    -0x20(%ebp),%eax
0850e71d +0x0eff:  mov    %eax,0x4(%esp)
0850e721 +0x0f03:  mov    %edx,(%esp)
0850e724 +0x0f06:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
0850e729 +0x0f0b:  mov    (%eax),%ebx
0850e72b +0x0f0d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0850e730 +0x0f12:  mov    0x28(%eax),%eax
0850e733 +0x0f15:  mov    %ebx,0x4(%esp)
0850e737 +0x0f19:  mov    %eax,(%esp)
0850e73a +0x0f1c:  call   080e581c <_ZN21CChattingEmoticonList13find_emoticonEi>  ; CChattingEmoticonList::find_emoticon(int)
0850e73f +0x0f21:  mov    %eax,-0x1c(%ebp)
0850e742 +0x0f24:  mov    -0x1c(%ebp),%eax
0850e745 +0x0f27:  mov    (%eax),%eax
0850e747 +0x0f29:  add    $0x18,%eax
0850e74a +0x0f2c:  mov    (%eax),%edx
0850e74c +0x0f2e:  mov    0x8(%ebp),%eax
0850e74f +0x0f31:  mov    0x4(%eax),%eax
0850e752 +0x0f34:  mov    %eax,0x4(%esp)
0850e756 +0x0f38:  mov    -0x1c(%ebp),%eax
0850e759 +0x0f3b:  mov    %eax,(%esp)
0850e75c +0x0f3e:  call   *%edx
0850e75e +0x0f40:  addl   $0x1,-0x20(%ebp)
0850e762 +0x0f44:  mov    0x8(%ebp),%eax
0850e765 +0x0f47:  add    $0x3a0,%eax
0850e76a +0x0f4c:  mov    %eax,(%esp)
0850e76d +0x0f4f:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0850e772 +0x0f54:  cmp    -0x20(%ebp),%eax
0850e775 +0x0f57:  seta   %al
0850e778 +0x0f5a:  test   %al,%al
0850e77a +0x0f5c:  jne    0850e711 <+0xef3>
0850e77c +0x0f5e:  mov    0xc(%ebp),%eax
0850e77f +0x0f61:  lea    0x214(%eax),%edx
0850e785 +0x0f67:  mov    0x8(%ebp),%eax
0850e788 +0x0f6a:  add    $0x3b8,%eax
0850e78d +0x0f6f:  mov    %edx,0x4(%esp)
0850e791 +0x0f73:  mov    %eax,(%esp)
0850e794 +0x0f76:  call   08517262 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3897>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3897
0850e799 +0x0f7b:  mov    0xc(%ebp),%eax
0850e79c +0x0f7e:  movzbl 0x205(%eax),%edx
0850e7a3 +0x0f85:  mov    0x8(%ebp),%eax
0850e7a6 +0x0f88:  mov    %dl,0x3c5(%eax)
0850e7ac +0x0f8e:  mov    0xc(%ebp),%eax
0850e7af +0x0f91:  movzbl 0xda(%eax),%edx
0850e7b6 +0x0f98:  mov    0x8(%ebp),%eax
0850e7b9 +0x0f9b:  mov    %dl,0x88(%eax)
0850e7bf +0x0fa1:  mov    0xc(%ebp),%eax
0850e7c2 +0x0fa4:  mov    0x220(%eax),%edx
0850e7c8 +0x0faa:  mov    0x8(%ebp),%eax
0850e7cb +0x0fad:  mov    %edx,0x8c(%eax)
0850e7d1 +0x0fb3:  mov    0xc(%ebp),%eax
0850e7d4 +0x0fb6:  lea    0x224(%eax),%edx
0850e7da +0x0fbc:  mov    0x8(%ebp),%eax
0850e7dd +0x0fbf:  add    $0x90,%eax
0850e7e2 +0x0fc4:  mov    %edx,0x4(%esp)
0850e7e6 +0x0fc8:  mov    %eax,(%esp)
0850e7e9 +0x0fcb:  call   080ccfd2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1e1f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1e1f
0850e7ee +0x0fd0:  mov    0xc(%ebp),%eax
0850e7f1 +0x0fd3:  lea    0x164(%eax),%edx
0850e7f7 +0x0fd9:  mov    0x8(%ebp),%eax
0850e7fa +0x0fdc:  add    $0x9c,%eax
0850e7ff +0x0fe1:  mov    %edx,0x4(%esp)
0850e803 +0x0fe5:  mov    %eax,(%esp)
0850e806 +0x0fe8:  call   0851517a <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x17af>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x17af
0850e80b +0x0fed:  mov    0xc(%ebp),%eax
0850e80e +0x0ff0:  mov    0x4b8(%eax),%eax
0850e814 +0x0ff6:  test   %eax,%eax
0850e816 +0x0ff8:  setne  %dl
0850e819 +0x0ffb:  mov    0x8(%ebp),%eax
0850e81c +0x0ffe:  mov    %dl,0x3c4(%eax)
0850e822 +0x1004:  mov    0xc(%ebp),%eax
0850e825 +0x1007:  movzbl 0xd8(%eax),%edx
0850e82c +0x100e:  mov    0x8(%ebp),%eax
0850e82f +0x1011:  mov    %dl,0x144(%eax)
0850e835 +0x1017:  mov    0x8(%ebp),%eax
0850e838 +0x101a:  movl   $0x0,0x140(%eax)
0850e842 +0x1024:  mov    0xc(%ebp),%eax
0850e845 +0x1027:  mov    0x468(%eax),%edx
0850e84b +0x102d:  mov    0x8(%ebp),%eax
0850e84e +0x1030:  mov    %edx,0x3d0(%eax)
0850e854 +0x1036:  mov    0xc(%ebp),%eax
0850e857 +0x1039:  mov    0x46c(%eax),%edx
0850e85d +0x103f:  mov    0x8(%ebp),%eax
0850e860 +0x1042:  mov    %edx,0x3c8(%eax)
0850e866 +0x1048:  mov    0x8(%ebp),%eax
0850e869 +0x104b:  mov    0x3c8(%eax),%eax
0850e86f +0x1051:  cmp    $0x1,%eax
0850e872 +0x1054:  jle    0850e891 <+0x1073>
0850e874 +0x1056:  mov    0xc(%ebp),%eax
0850e877 +0x1059:  lea    0x280(%eax),%edx
0850e87d +0x105f:  mov    0x8(%ebp),%eax
0850e880 +0x1062:  add    $0x240,%eax
0850e885 +0x1067:  mov    %edx,0x4(%esp)
0850e889 +0x106b:  mov    %eax,(%esp)
0850e88c +0x106e:  call   085150f2 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x1727>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x1727
0850e891 +0x1073:  mov    0xc(%ebp),%eax
0850e894 +0x1076:  mov    0x1ac(%eax),%edx
0850e89a +0x107c:  mov    0x8(%ebp),%eax
0850e89d +0x107f:  mov    %edx,0x3cc(%eax)
0850e8a3 +0x1085:  mov    0xc(%ebp),%eax
0850e8a6 +0x1088:  mov    0x508(%eax),%edx
0850e8ac +0x108e:  mov    0x8(%ebp),%eax
0850e8af +0x1091:  mov    %edx,0x3d4(%eax)
0850e8b5 +0x1097:  mov    0xc(%ebp),%eax
0850e8b8 +0x109a:  lea    0x50c(%eax),%edx
0850e8be +0x10a0:  mov    0x8(%ebp),%eax
0850e8c1 +0x10a3:  add    $0x3d8,%eax
0850e8c6 +0x10a8:  mov    %edx,0x4(%esp)
0850e8ca +0x10ac:  mov    %eax,(%esp)
0850e8cd +0x10af:  call   08516b94 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x31c9>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x31c9
0850e8d2 +0x10b4:  lea    -0xc(%ebp),%esp
0850e8d5 +0x10b7:  add    $0x0,%esp
0850e8d8 +0x10ba:  pop    %ebx
0850e8d9 +0x10bb:  pop    %esi
0850e8da +0x10bc:  pop    %edi
0850e8db +0x10bd:  pop    %ebp
0850e8dc +0x10be:  ret
0850e8dd +0x10bf:  nop
```

## 反编译 C

```c
// CStackableItem::set_item @ 0x850d81e

/* CStackableItem::set_item(STStackableScript&) */

void __thiscall CStackableItem::set_item(CStackableItem *this,STStackableScript *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  time_t tVar4;
  CMTRand *this_00;
  uint uVar5;
  char *pcVar6;
  string *psVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  byte bVar13;
  int local_288 [3];
  char local_25c [500];
  ulong local_68;
  cMyTrace local_64 [16];
  int local_54 [2];
  vector local_4c [12];
  undefined1 local_40 [4];
  int local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int *local_20;
  
  bVar13 = 0;
  piVar12 = (int *)&stack0xfffffd84;
  local_288[2] = 0x850d836;
  tVar4 = time((time_t *)0x0);
  local_68 = tVar4 + *(int *)param_1;
  local_288[2] = 0x850d84f;
  this_00 = operator_new(0x9c8);
                    /* try { // try from 0850d85a to 0850d85e has its CatchHandler @ 0850d861 */
  local_288[2] = 0x850d85f;
  CMTRand::CMTRand(this_00,&local_68);
  *(CMTRand **)(this + 0x1e0) = this_00;
  *(undefined4 *)(this + 4) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x10);
  this[0x60] = *(CStackableItem *)(param_1 + 0xfc);
  if (param_1[0x30] != (STStackableScript)0x0) {
    local_288[2] = 0x850d8ff;
    uVar5 = G_CDataManager();
    local_288[2] = 0x850d90b;
    CDataManager::set_AuctionRegFreeCeraItem(uVar5);
  }
  pcVar6 = local_25c;
  for (iVar11 = 0x7d; iVar11 != 0; iVar11 = iVar11 + -1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + ((uint)bVar13 * -2 + 1) * 4;
  }
  local_288[2] = 0x850d931;
  pcVar6 = (char *)std::string::c_str((string *)(param_1 + 0xac));
  local_288[2] = 0x850d943;
  strcpy(local_25c,pcVar6);
  local_288[2] = 0x850d953;
  pcVar6 = (char *)std::string::c_str((string *)(param_1 + 0xac));
  local_288[2] = 0x850d965;
  cVar3 = CodePage::script2Database(pcVar6,local_25c);
  if (cVar3 != '\x01') {
    local_288[2] = 0x850d97c;
    std::string::c_str((string *)(param_1 + 0xac));
    local_288[2] = 0x850d983;
    CodePage::database();
    local_288[2] = 0x850d98a;
    CodePage::script();
    local_288[2] = 0x850d9af;
    cMyTrace::cMyTrace(local_64,"void CStackableItem::set_item(STStackableScript&)",0x80,5);
    local_288[2] = 0x850d9de;
    cMyTrace::operator()(local_64,"Error!!! %s->%s [%s][%s][%d]");
  }
  local_288[2] = 0x850d9f6;
  std::string::operator=((string *)(this + 0x2c),local_25c);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x4ec);
  *(undefined4 *)(this + 0x2cc) = *(undefined4 *)(param_1 + 0x18c);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x2b0) = *(undefined4 *)(param_1 + 0x1e0);
  *(undefined4 *)(this + 0x2b8) = *(undefined4 *)(param_1 + 0x3cc);
  if (*(int *)(this + 0x2b0) == 3) {
    local_288[2] = 0x850dac8;
    createRecipeInfo((RecipeInfo *)(this + 0x174),(vector *)(param_1 + 0x88),(vector *)0x0);
    local_288[2] = 0x850dae5;
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x19c),
               (vector *)(param_1 + 0x3c0));
    local_288[2] = 0x850dafd;
    RecipeInfo::additionalInfo((RecipeInfo *)(this + 0x174),param_1);
  }
  if (*(int *)(this + 0x2b0) == 6) {
    local_288[2] = 0x850db28;
    createLotteryInfo((LotteryInfo *)(this + 0x1c0),(vector *)(param_1 + 0x88));
  }
  else if (*(int *)(this + 0x2b0) == 7) {
    local_288[2] = 0x850db58;
    createStackableLotteryInfo((LotteryInfo *)(this + 0x1c0),(vector *)(param_1 + 0x88));
  }
  else if (*(int *)(this + 0x2b0) == 0xd) {
    local_288[2] = 0x850db88;
    createStackableLotteryInfo((LotteryInfo *)(this + 0x1c0),(vector *)(param_1 + 0x88));
  }
  else if ((*(int *)(this + 0x2b0) == 0x1a) || (*(int *)(this + 0x2b0) == 0x1b)) {
    local_288[2] = 0x850dbe0;
    createStackableMultiBoxLotteryInfo
              ((MultiBoxLotteryInfo *)(this + 0x1e4),(vector *)(param_1 + 0x244),
               (vector *)(param_1 + 0x250),(vector *)(param_1 + 0x25c));
  }
  else if ((*(int *)(this + 0x2b0) == 0xe) || (*(int *)(this + 0x2b0) == 0x26)) {
    local_288[2] = 0x850dc22;
    std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::operator=
              ((vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)
               (this + 0x21c),(vector *)(param_1 + 0x268));
    local_288[2] = 0x850dc3f;
    std::
    vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
    ::operator=((vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
                 *)(this + 0x234),(vector *)(param_1 + 0x274));
    local_288[2] = 0x850dc4f;
    cVar3 = std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::empty();
    if (cVar3 != '\x01') {
      local_288[2] = 0x850dc77;
      std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::operator=
                ((vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)
                 (this + 0x228),(vector *)(param_1 + 0x2a4));
      local_288[2] = 0x850dc87;
      std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::clear
                ((vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)
                 (param_1 + 0x2a4));
    }
  }
  else if ((*(int *)(this + 0x2b0) == 0xf) || (*(int *)(this + 0x2b0) == 0x10)) {
    local_288[2] = 0x850dcc5;
    stStackableBooster_t::operator=
              ((stStackableBooster_t *)(this + 0x240),(stStackableBooster_t *)(param_1 + 0x280));
  }
  else if (*(int *)(this + 0x2b0) == 0x11) {
    local_288[2] = 0x850dcf5;
    stStackableBooster_t::operator=
              ((stStackableBooster_t *)(this + 0x240),(stStackableBooster_t *)(param_1 + 0x280));
    *(undefined4 *)(this + 0x2b0) = 0x10;
  }
  else if (*(int *)(this + 0x2b0) == 0x22) {
    local_288[2] = 0x850dd32;
    stStackableBooster_t::operator=
              ((stStackableBooster_t *)(this + 0x240),(stStackableBooster_t *)(param_1 + 0x280));
    local_288[2] = 0x850dd4f;
    BoosterSelectInfo::operator=
              ((BoosterSelectInfo *)(this + 0x264),(BoosterSelectInfo *)(param_1 + 0x41c));
  }
  else if (*(int *)(this + 0x2b0) == 0x17) {
    local_288[2] = 0x850dd7f;
    createGlobalEffectInfo((vector *)(this + 0x280),(vector *)(param_1 + 0x88));
  }
  else if (*(int *)(this + 0x2b0) == 0x1d) {
    local_288[2] = 0x850ddac;
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x290),
               (vector *)(param_1 + 0x3d4));
    *(undefined4 *)(this + 0x29c) = *(undefined4 *)(param_1 + 0x3e0);
    *(undefined4 *)(this + 0x2a0) = *(undefined4 *)(param_1 + 0x3e4);
    local_288[2] = 0x850dded;
    std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>::operator=
              ((vector<stLimitCubeResult,std::allocator<stLimitCubeResult>> *)(this + 0x2a4),
               (vector *)(param_1 + 1000));
  }
  for (local_30 = 0; local_30 < 0xb; local_30 = local_30 + 1) {
    this[local_30 + 0x3c] = *(CStackableItem *)(param_1 + local_30 + 0x38);
  }
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x60);
  this[0x54] = (CStackableItem)0x1;
  *(undefined4 *)(this + 0x28c) = *(undefined4 *)(param_1 + 0x364);
  *(undefined4 *)(this + 700) = *(undefined4 *)(param_1 + 0x1e4);
  local_288[2] = 0x850de70;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x2c0));
  if ((*(int *)(this + 0x2b0) == 2) && (*(int *)(this + 700) == 1)) {
    local_288[2] = 0x850dea4;
    uVar5 = std::vector<std::string,std::allocator<std::string>>::size
                      ((vector<std::string,std::allocator<std::string>> *)(param_1 + 0x94));
    if (1 < uVar5) {
      local_2c = 1;
      while( true ) {
        local_288[2] = 0x850df12;
        uVar5 = std::vector<std::string,std::allocator<std::string>>::size
                          ((vector<std::string,std::allocator<std::string>> *)(param_1 + 0x94));
        if (uVar5 <= local_2c) break;
        local_288[2] = 0x850decf;
        psVar7 = (string *)
                 std::vector<std::string,std::allocator<std::string>>::operator[]
                           ((vector<std::string,std::allocator<std::string>> *)(param_1 + 0x94),
                            local_2c);
        local_288[2] = 0x850ded7;
        local_28 = GetEquipmentTypeStringToEnum(psVar7);
        if (local_28 != 0x16) {
          local_288[2] = 0x850defe;
          local_54[0] = local_28;
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)(this + 0x2c0),local_54);
        }
        local_2c = local_2c + 1;
      }
    }
  }
  *(undefined4 *)(this + 0x2d0) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x2d4) = *(undefined4 *)(param_1 + 0x1b4);
  this[0x2d8] = *(CStackableItem *)(param_1 + 0x1b9);
  this[0x2d9] = *(CStackableItem *)(param_1 + 0x1ba);
  this[0x2da] = *(CStackableItem *)(param_1 + 0x1bb);
  this[0x2e0] = *(CStackableItem *)(param_1 + 0x360);
  *(undefined4 *)(this + 0x2dc) = *(undefined4 *)(param_1 + 0x358);
  this[0x2e1] = *(CStackableItem *)(param_1 + 0x1bf);
  this[0x2e4] = *(CStackableItem *)(param_1 + 0x1bc);
  this[0x2e5] = *(CStackableItem *)(param_1 + 0x1bd);
  this[0x2e6] = *(CStackableItem *)(param_1 + 0x1be);
  this[0x2e7] = *(CStackableItem *)(param_1 + 0x1c0);
  *(undefined4 *)(this + 0x2e8) = *(undefined4 *)(param_1 + 0x1c4);
  this[0x2ec] = *(CStackableItem *)(param_1 + 0x1d0);
  *(undefined2 *)(this + 0x2b4) = *(undefined2 *)(param_1 + 0x380);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x100);
  this[0x78] = *(CStackableItem *)(param_1 + 0x104);
  *(undefined4 *)(this + 0x58) = 0xffffffff;
  this[0x79] = (CStackableItem)0x0;
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0xcc);
  this[0x87] = *(CStackableItem *)(param_1 + 0xd0);
  local_288[2] = 0x850e0b3;
  std::string::operator=((string *)(this + 0xb0),(string *)(param_1 + 0x6c));
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0x105);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0x109);
  this[0xbc] = *(CStackableItem *)(param_1 + 0x10d);
  local_288[2] = 0x850e0ee;
  STSpecialMonsterDrop::clear((STSpecialMonsterDrop *)(param_1 + 0x105));
  this[0x2f0] = *(CStackableItem *)(param_1 + 0x10e);
  *(undefined2 *)(this + 0x2ee) = *(undefined2 *)(param_1 + 0x394);
  local_288[2] = 0x850e132;
  std::
  map<STEnchantSystemMapKey,STEnchantSystemMapData,std::less<STEnchantSystemMapKey>,std::allocator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>>
  ::operator=((map<STEnchantSystemMapKey,STEnchantSystemMapData,std::less<STEnchantSystemMapKey>,std::allocator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>>
               *)(this + 0x2f4),(map *)(param_1 + 0x3f4));
  this[0x30c] = *(CStackableItem *)(param_1 + 0x40c);
  local_288[2] = 0x850e16a;
  memcpy(this + 0x30d,param_1 + 0x40d,2);
  this[0x30f] = *(CStackableItem *)(param_1 + 0x396);
  *(undefined2 *)(this + 0x310) = *(undefined2 *)(param_1 + 0x398);
  this[0x312] = *(CStackableItem *)(param_1 + 0x39a);
  this[0x313] = *(CStackableItem *)(param_1 + 0x39b);
  *(short *)(this + 0x314) = (short)*(undefined4 *)(param_1 + 0x39c);
  this[0x316] = *(CStackableItem *)(param_1 + 0x3a0);
  this[800] = *(CStackableItem *)(param_1 + 0x438);
  if (this[800] != (CStackableItem)0x0) {
    *(undefined4 *)(this + 0x318) = *(undefined4 *)(param_1 + 0x43c);
    *(undefined4 *)(this + 0x31c) = *(undefined4 *)(param_1 + 0x440);
  }
  this[0xbd] = *(CStackableItem *)(param_1 + 0x10f);
  local_288[2] = 0x850e254;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0xc0),
             (vector *)(param_1 + 0x110));
  *(undefined4 *)(this + 0xcc) = 0;
  this[0xd0] = *(CStackableItem *)(param_1 + 0x3d0);
  this[0x321] = *(CStackableItem *)(param_1 + 0x3d1);
  local_288[2] = 0x850e2a4;
  std::set<int,std::less<int>,std::allocator<int>>::operator=
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0xd4),(set *)(param_1 + 0xdc));
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0x444);
  *(undefined4 *)(this + 0xf4) = *(undefined4 *)(param_1 + 0x448);
  *(undefined4 *)(this + 0xfc) = *(undefined4 *)(param_1 + 0x150);
  *(undefined4 *)(this + 0x100) = *(undefined4 *)(param_1 + 0x154);
  local_288[2] = 0x850e30b;
  std::vector<STItemScript::SEXPERTJOB::SUSABLE,std::allocator<STItemScript::SEXPERTJOB::SUSABLE>>::
  clear((vector<STItemScript::SEXPERTJOB::SUSABLE,std::allocator<STItemScript::SEXPERTJOB::SUSABLE>>
         *)(this + 0x104));
  local_288[2] = 0x850e328;
  std::vector<STItemScript::SEXPERTJOB::SUSABLE,std::allocator<STItemScript::SEXPERTJOB::SUSABLE>>::
  operator=((vector<STItemScript::SEXPERTJOB::SUSABLE,std::allocator<STItemScript::SEXPERTJOB::SUSABLE>>
             *)(this + 0x104),(vector *)(param_1 + 0x158));
  *(undefined4 *)(this + 0x324) = *(undefined4 *)(param_1 + 0x44c);
  *(undefined4 *)(this + 0x328) = *(undefined4 *)(param_1 + 0x454);
  *(undefined4 *)(this + 0x32c) = *(undefined4 *)(param_1 + 0x450);
  *(undefined4 *)(this + 0x330) = *(undefined4 *)(param_1 + 0x458);
  *(undefined4 *)(this + 0x334) = *(undefined4 *)(param_1 + 0x45c);
  *(undefined4 *)(this + 0x338) = *(undefined4 *)(param_1 + 0x460);
  *(undefined4 *)(this + 0x33c) = *(undefined4 *)(param_1 + 0x464);
  local_288[2] = 0x850e3c3;
  std::
  set<STItemScript::ENUM_ITEM_CATEGORY,std::less<STItemScript::ENUM_ITEM_CATEGORY>,std::allocator<STItemScript::ENUM_ITEM_CATEGORY>>
  ::operator=((set<STItemScript::ENUM_ITEM_CATEGORY,std::less<STItemScript::ENUM_ITEM_CATEGORY>,std::allocator<STItemScript::ENUM_ITEM_CATEGORY>>
               *)(this + 0x128),(set *)(param_1 + 0x11c));
  if (*(int *)(param_1 + 0x474) != 0) {
    uVar5 = *(uint *)param_1;
    local_288[2] = 0x850e3e5;
    uVar8 = G_CDataManager();
    local_288[2] = 0x850e3f5;
    CDataManager::set_lottery_use_cost(uVar8,uVar5);
  }
  *(undefined4 *)(this + 0x340) = *(undefined4 *)(param_1 + 0x478);
  this[0x344] = *(CStackableItem *)(param_1 + 0x3a1);
  local_288[2] = 0x850e437;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator=
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x348),
             (map *)(param_1 + 0x3a4));
  *(undefined4 *)(this + 0x148) = *(undefined4 *)(param_1 + 0x178);
  this[0x14c] = *(CStackableItem *)(param_1 + 0x17c);
  local_288[2] = 0x850e479;
  std::string::operator=((string *)(this + 0x150),(string *)(param_1 + 0x180));
  local_288[2] = 0x850e496;
  std::string::operator=((string *)(this + 0x154),(string *)(param_1 + 0x184));
  local_288[2] = 0x850e4b3;
  std::string::operator=((string *)(this + 0x158),(string *)(param_1 + 0x188));
  local_288[2] = 0x850e4c3;
  cVar3 = std::vector<CRabbitBox,std::allocator<CRabbitBox>>::empty();
  if (cVar3 != '\x01') {
    local_288[2] = 0x850e4de;
    uVar5 = std::vector<CRabbitBox,std::allocator<CRabbitBox>>::size
                      ((vector<CRabbitBox,std::allocator<CRabbitBox>> *)(param_1 + 0x19c));
    local_288[2] = 0x850e4f3;
    std::vector<CRabbitBox,std::allocator<CRabbitBox>>::reserve
              ((vector<CRabbitBox,std::allocator<CRabbitBox>> *)(this + 0x168),uVar5);
    local_288[2] = 0x850e50b;
    std::back_inserter<std::vector<CRabbitBox,std::allocator<CRabbitBox>>>(local_4c);
    local_288[2] = 0x850e526;
    std::vector<CRabbitBox,std::allocator<CRabbitBox>>::end();
    local_288[2] = 0x850e541;
    std::vector<CRabbitBox,std::allocator<CRabbitBox>>::begin();
    local_288[2] = 0x850e564;
    std::
    copy<__gnu_cxx::__normal_iterator<CRabbitBox*,std::vector<CRabbitBox,std::allocator<CRabbitBox>>>,std::back_insert_iterator<std::vector<CRabbitBox,std::allocator<CRabbitBox>>>>
              ();
    piVar12 = local_288 + 2;
  }
  *piVar12 = (int)(param_1 + 400);
  piVar12[-1] = 0x850e577;
  cVar3 = std::vector<int,std::allocator<int>>::empty();
  if (cVar3 != '\x01') {
    *piVar12 = (int)(param_1 + 400);
    piVar12[-1] = 0x850e592;
    iVar11 = std::vector<int,std::allocator<int>>::size((vector<int,std::allocator<int>> *)*piVar12)
    ;
    piVar12[1] = iVar11;
    *piVar12 = (int)(this + 0x15c);
    piVar12[-1] = 0x850e5a7;
    std::vector<int,std::allocator<int>>::reserve
              ((vector<int,std::allocator<int>> *)*piVar12,piVar12[1]);
    piVar12[1] = (int)(this + 0x15c);
    *piVar12 = (int)&local_3c;
    piVar12[-1] = 0x850e5bf;
    std::back_inserter<std::vector<int,std::allocator<int>>>((vector *)*piVar12);
    piVar12[1] = (int)(param_1 + 400);
    *piVar12 = (int)&local_38;
    piVar12[-1] = 0x850e5da;
    std::vector<int,std::allocator<int>>::end();
    piVar12[1] = (int)(param_1 + 400);
    *piVar12 = (int)&local_34;
    piVar12[-1] = 0x850e5f5;
    std::vector<int,std::allocator<int>>::begin();
    piVar12[3] = local_3c;
    piVar12[2] = local_38;
    piVar12[1] = local_34;
    *piVar12 = (int)local_40;
    piVar12[-1] = 0x850e618;
    std::
    copy<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,std::back_insert_iterator<std::vector<int,std::allocator<int>>>>
              ();
    piVar12 = piVar12 + -1;
  }
  *(undefined4 *)(this + 0x360) = *(undefined4 *)(param_1 + 0x418);
  this[0x364] = *(CStackableItem *)(param_1 + 0x32c);
  *(undefined2 *)(this + 0x365) = *(undefined2 *)(param_1 + 0x47c);
  this[0x367] = *(CStackableItem *)(param_1 + 0x47e);
  piVar12[1] = (int)(param_1 + 0x480);
  *piVar12 = (int)(this + 0x368);
  piVar12[-1] = 0x850e67e;
  std::set<int,std::less<int>,std::allocator<int>>::operator=
            ((set<int,std::less<int>,std::allocator<int>> *)*piVar12,(set *)piVar12[1]);
  piVar12[1] = (int)(param_1 + 0x498);
  *piVar12 = (int)(this + 0x380);
  piVar12[-1] = 0x850e69b;
  std::set<int,std::less<int>,std::allocator<int>>::operator=
            ((set<int,std::less<int>,std::allocator<int>> *)*piVar12,(set *)piVar12[1]);
  this[0x398] = *(CStackableItem *)(param_1 + 0x4b0);
  *(undefined4 *)(this + 0x39c) = *(undefined4 *)(param_1 + 0x1e8);
  piVar12[1] = (int)(param_1 + 0x1ec);
  *piVar12 = (int)(this + 0x3a0);
  piVar12[-1] = 0x850e6dd;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)*piVar12,(vector *)piVar12[1]);
  piVar12[1] = (int)(param_1 + 0x1f8);
  *piVar12 = (int)(this + 0x3ac);
  piVar12[-1] = 0x850e6fa;
  std::vector<StackableAction::UsablePlace,std::allocator<StackableAction::UsablePlace>>::operator=
            ((vector<StackableAction::UsablePlace,std::allocator<StackableAction::UsablePlace>> *)
             *piVar12,(vector *)piVar12[1]);
  if (*(int *)(this + 0x39c) == 0x2c) {
    local_24 = 0;
    while( true ) {
      *piVar12 = (int)(this + 0x3a0);
      piVar12[-1] = 0x850e772;
      uVar5 = std::vector<int,std::allocator<int>>::size
                        ((vector<int,std::allocator<int>> *)*piVar12);
      if (uVar5 <= local_24) break;
      piVar12[1] = local_24;
      *piVar12 = (int)(this + 0x3a0);
      piVar12[-1] = 0x850e729;
      piVar9 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)*piVar12,piVar12[1]);
      iVar11 = *piVar9;
      piVar12[-1] = 0x850e730;
      iVar10 = G_CDataManager();
      uVar1 = *(undefined4 *)(iVar10 + 0x28);
      piVar12[1] = iVar11;
      *piVar12 = uVar1;
      piVar12[-1] = 0x850e73f;
      local_20 = (int *)CChattingEmoticonList::find_emoticon(*piVar12);
      pcVar2 = *(code **)(*local_20 + 0x18);
      piVar12[1] = *(int *)(this + 4);
      *piVar12 = (int)local_20;
      piVar12[-1] = 0x850e75e;
      (*pcVar2)();
      local_24 = local_24 + 1;
    }
  }
  piVar12[1] = (int)(param_1 + 0x214);
  *piVar12 = (int)(this + 0x3b8);
  piVar12[-1] = 0x850e799;
  std::vector<StackableAction::UsableServerType,std::allocator<StackableAction::UsableServerType>>::
  operator=((vector<StackableAction::UsableServerType,std::allocator<StackableAction::UsableServerType>>
             *)*piVar12,(vector *)piVar12[1]);
  this[0x3c5] = *(CStackableItem *)(param_1 + 0x205);
  this[0x88] = *(CStackableItem *)(param_1 + 0xda);
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x220);
  piVar12[1] = (int)(param_1 + 0x224);
  *piVar12 = (int)(this + 0x90);
  piVar12[-1] = 0x850e7ee;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)*piVar12,(vector *)piVar12[1]);
  piVar12[1] = (int)(param_1 + 0x164);
  *piVar12 = (int)(this + 0x9c);
  piVar12[-1] = 0x850e80b;
  DyeInfo::operator=((DyeInfo *)*piVar12,(DyeInfo *)piVar12[1]);
  this[0x3c4] = (CStackableItem)(*(int *)(param_1 + 0x4b8) != 0);
  this[0x144] = *(CStackableItem *)(param_1 + 0xd8);
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x3d0) = *(undefined4 *)(param_1 + 0x468);
  *(undefined4 *)(this + 0x3c8) = *(undefined4 *)(param_1 + 0x46c);
  if (1 < *(int *)(this + 0x3c8)) {
    piVar12[1] = (int)(param_1 + 0x280);
    *piVar12 = (int)(this + 0x240);
    piVar12[-1] = 0x850e891;
    stStackableBooster_t::operator=
              ((stStackableBooster_t *)*piVar12,(stStackableBooster_t *)piVar12[1]);
  }
  *(undefined4 *)(this + 0x3cc) = *(undefined4 *)(param_1 + 0x1ac);
  *(undefined4 *)(this + 0x3d4) = *(undefined4 *)(param_1 + 0x508);
  piVar12[1] = (int)(param_1 + 0x50c);
  *piVar12 = (int)(this + 0x3d8);
  piVar12[-1] = 0x850e8d2;
  std::set<int,std::less<int>,std::allocator<int>>::operator=
            ((set<int,std::less<int>,std::allocator<int>> *)*piVar12,(set *)piVar12[1]);
  return;
}
```

# loadStringFile

`_ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE`

`RDARScriptStringManager::loadStringFile(std::basic_istream<char, std::char_traits<char> >*, char const*, int, std::vector<ErrorLog, std::allocator<ErrorLog> >*)`

| 类 | 地址 |
|---|---|
| `RDARScriptStringManager` | `0x08aa529e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08aa529e  _ZN23RDARScriptStringManager14loadStringFileEPSiPKciPSt6vectorI8ErrorLogSaIS4_EE
#           RDARScriptStringManager::loadStringFile(std::basic_istream<char, std::char_traits<char> >*, char const*, int, std::vector<ErrorLog, std::allocator<ErrorLog> >*)
# range [0x08aa529e, 0x08aa57fd]
08aa529e +0x000:  push   %ebp
08aa529f +0x001:  mov    %esp,%ebp
08aa52a1 +0x003:  push   %edi
08aa52a2 +0x004:  push   %esi
08aa52a3 +0x005:  push   %ebx
08aa52a4 +0x006:  sub    $0x393c,%esp
08aa52aa +0x00c:  cmpl   $0x0,0xc(%ebp)
08aa52ae +0x010:  je     08aa52d2 <+0x34>
08aa52b0 +0x012:  cmpl   $0x0,0x10(%ebp)
08aa52b4 +0x016:  je     08aa52d2 <+0x34>
08aa52b6 +0x018:  mov    0xc(%ebp),%edx
08aa52b9 +0x01b:  mov    0xc(%ebp),%eax
08aa52bc +0x01e:  mov    (%eax),%eax
08aa52be +0x020:  sub    $0xc,%eax
08aa52c1 +0x023:  mov    (%eax),%eax
08aa52c3 +0x025:  lea    (%edx,%eax,1),%eax
08aa52c6 +0x028:  mov    %eax,(%esp)
08aa52c9 +0x02b:  call   086e0760 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x6c0>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x6c0
08aa52ce +0x030:  test   %al,%al
08aa52d0 +0x032:  je     08aa52d9 <+0x3b>
08aa52d2 +0x034:  mov    $0x1,%eax
08aa52d7 +0x039:  jmp    08aa52de <+0x40>
08aa52d9 +0x03b:  mov    $0x0,%eax
08aa52de +0x040:  test   %al,%al
08aa52e0 +0x042:  je     08aa52ec <+0x4e>
08aa52e2 +0x044:  mov    $0x0,%ebx
08aa52e7 +0x049:  jmp    08aa57f1 <+0x553>
08aa52ec +0x04e:  movl   $0x0,0x4(%esp)
08aa52f4 +0x056:  lea    -0x38(%ebp),%eax
08aa52f7 +0x059:  mov    %eax,(%esp)
08aa52fa +0x05c:  call   08aa68e0 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x1c2>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x1c2
08aa52ff +0x061:  movl   $0x424,(%esp)
08aa5306 +0x068:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08aa530b +0x06d:  mov    %eax,%ebx
08aa530d +0x06f:  mov    %ebx,%eax
08aa530f +0x071:  mov    %eax,(%esp)
08aa5312 +0x074:  call   08ab2240 <_ZN16StringDictionaryC1Ev>  ; StringDictionary::StringDictionary()
08aa5317 +0x079:  jmp    08aa532e <+0x90>
08aa5319 +0x07b:  mov    %edx,%esi
08aa531b +0x07d:  mov    %eax,%edi
08aa531d +0x07f:  mov    %ebx,(%esp)
08aa5320 +0x082:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08aa5325 +0x087:  mov    %edi,%eax
08aa5327 +0x089:  mov    %esi,%edx
08aa5329 +0x08b:  jmp    08aa57cb <+0x52d>
08aa532e +0x090:  mov    %ebx,%eax
08aa5330 +0x092:  mov    %eax,0x4(%esp)
08aa5334 +0x096:  lea    -0x38(%ebp),%eax
08aa5337 +0x099:  mov    %eax,(%esp)
08aa533a +0x09c:  call   08aa6914 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x1f6>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x1f6
08aa533f +0x0a1:  movb   $0x0,-0x2e(%ebp)
08aa5343 +0x0a5:  movl   $"Creature.jpn.str",0x4(%esp)
08aa534b +0x0ad:  mov    0x10(%ebp),%eax
08aa534e +0x0b0:  mov    %eax,(%esp)
08aa5351 +0x0b3:  call   0807dac0 <_init+0x3b8>
08aa5356 +0x0b8:  test   %eax,%eax
08aa5358 +0x0ba:  je     08aa535e <+0xc0>
08aa535a +0x0bc:  movb   $0x1,-0x2e(%ebp)
08aa535e +0x0c0:  movb   $0x0,-0x2d(%ebp)
08aa5362 +0x0c4:  movl   $"Etc/Etc.kor.str",0x4(%esp)
08aa536a +0x0cc:  mov    0x10(%ebp),%eax
08aa536d +0x0cf:  mov    %eax,(%esp)
08aa5370 +0x0d2:  call   0807e4e0 <_init+0xdd8>
08aa5375 +0x0d7:  test   %eax,%eax
08aa5377 +0x0d9:  jne    08aa537d <+0xdf>
08aa5379 +0x0db:  movb   $0x1,-0x2d(%ebp)
08aa537d +0x0df:  movl   $0x0,-0x2c(%ebp)
08aa5384 +0x0e6:  jmp    08aa55ec <+0x34e>
08aa5389 +0x0eb:  addl   $0x1,-0x2c(%ebp)
08aa538d +0x0ef:  movl   $0x2928,0x8(%esp)
08aa5395 +0x0f7:  lea    -0x3938(%ebp),%eax
08aa539b +0x0fd:  mov    %eax,0x4(%esp)
08aa539f +0x101:  mov    0xc(%ebp),%eax
08aa53a2 +0x104:  mov    %eax,(%esp)
08aa53a5 +0x107:  call   086e7290 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x71f0>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x71f0
08aa53aa +0x10c:  movl   $0x0,-0x3c(%ebp)
08aa53b1 +0x113:  movl   $0x0,-0x40(%ebp)
08aa53b8 +0x11a:  lea    -0x40(%ebp),%eax
08aa53bb +0x11d:  mov    %eax,0x8(%esp)
08aa53bf +0x121:  lea    -0x3c(%ebp),%eax
08aa53c2 +0x124:  mov    %eax,0x4(%esp)
08aa53c6 +0x128:  lea    -0x3938(%ebp),%eax
08aa53cc +0x12e:  mov    %eax,(%esp)
08aa53cf +0x131:  call   08aa6551 <_ZL15parseStringLinePcPS_S0_>  ; parseStringLine(char*, char**, char**)
08aa53d4 +0x136:  mov    %eax,-0x24(%ebp)
08aa53d7 +0x139:  mov    -0x24(%ebp),%eax
08aa53da +0x13c:  cmp    $0xfffffffe,%eax
08aa53dd +0x13f:  je     08aa545c <+0x1be>
08aa53df +0x141:  cmp    $0xffffffff,%eax
08aa53e2 +0x144:  jne    08aa54d0 <+0x232>
08aa53e8 +0x14a:  cmpl   $0x0,0x18(%ebp)
08aa53ec +0x14e:  je     08aa5452 <+0x1b4>
08aa53ee +0x150:  lea    -0x50(%ebp),%eax
08aa53f1 +0x153:  mov    %eax,(%esp)
08aa53f4 +0x156:  call   088c424c <_GLOBAL__I_g_script_package+0x11c>  ; global constructors keyed to g_script_package+0x11c
08aa53f9 +0x15b:  movl   $0x80000000,-0x50(%ebp)
08aa5400 +0x162:  mov    0x10(%ebp),%eax
08aa5403 +0x165:  mov    %eax,0x4(%esp)
08aa5407 +0x169:  lea    -0x50(%ebp),%eax
08aa540a +0x16c:  add    $0x4,%eax
08aa540d +0x16f:  mov    %eax,(%esp)
08aa5410 +0x172:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08aa5415 +0x177:  mov    -0x2c(%ebp),%eax
08aa5418 +0x17a:  mov    %eax,-0x44(%ebp)
08aa541b +0x17d:  lea    -0x50(%ebp),%eax
08aa541e +0x180:  mov    %eax,0x4(%esp)
08aa5422 +0x184:  mov    0x18(%ebp),%eax
08aa5425 +0x187:  mov    %eax,(%esp)
08aa5428 +0x18a:  call   088c4788 <_GLOBAL__I_g_script_package+0x658>  ; global constructors keyed to g_script_package+0x658
08aa542d +0x18f:  jmp    08aa5447 <+0x1a9>
08aa542f +0x191:  mov    %edx,%ebx
08aa5431 +0x193:  mov    %eax,%esi
08aa5433 +0x195:  lea    -0x50(%ebp),%eax
08aa5436 +0x198:  mov    %eax,(%esp)
08aa5439 +0x19b:  call   088c4298 <_GLOBAL__I_g_script_package+0x168>  ; global constructors keyed to g_script_package+0x168
08aa543e +0x1a0:  mov    %esi,%eax
08aa5440 +0x1a2:  mov    %ebx,%edx
08aa5442 +0x1a4:  jmp    08aa57cb <+0x52d>
08aa5447 +0x1a9:  lea    -0x50(%ebp),%eax
08aa544a +0x1ac:  mov    %eax,(%esp)
08aa544d +0x1af:  call   088c4298 <_GLOBAL__I_g_script_package+0x168>  ; global constructors keyed to g_script_package+0x168
08aa5452 +0x1b4:  mov    $0x0,%ebx
08aa5457 +0x1b9:  jmp    08aa57e6 <+0x548>
08aa545c +0x1be:  cmpl   $0x0,0x18(%ebp)
08aa5460 +0x1c2:  je     08aa54c6 <+0x228>
08aa5462 +0x1c4:  lea    -0x60(%ebp),%eax
08aa5465 +0x1c7:  mov    %eax,(%esp)
08aa5468 +0x1ca:  call   088c424c <_GLOBAL__I_g_script_package+0x11c>  ; global constructors keyed to g_script_package+0x11c
08aa546d +0x1cf:  movl   $0x80000001,-0x60(%ebp)
08aa5474 +0x1d6:  mov    0x10(%ebp),%eax
08aa5477 +0x1d9:  mov    %eax,0x4(%esp)
08aa547b +0x1dd:  lea    -0x60(%ebp),%eax
08aa547e +0x1e0:  add    $0x4,%eax
08aa5481 +0x1e3:  mov    %eax,(%esp)
08aa5484 +0x1e6:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08aa5489 +0x1eb:  mov    -0x2c(%ebp),%eax
08aa548c +0x1ee:  mov    %eax,-0x54(%ebp)
08aa548f +0x1f1:  lea    -0x60(%ebp),%eax
08aa5492 +0x1f4:  mov    %eax,0x4(%esp)
08aa5496 +0x1f8:  mov    0x18(%ebp),%eax
08aa5499 +0x1fb:  mov    %eax,(%esp)
08aa549c +0x1fe:  call   088c4788 <_GLOBAL__I_g_script_package+0x658>  ; global constructors keyed to g_script_package+0x658
08aa54a1 +0x203:  jmp    08aa54bb <+0x21d>
08aa54a3 +0x205:  mov    %edx,%ebx
08aa54a5 +0x207:  mov    %eax,%esi
08aa54a7 +0x209:  lea    -0x60(%ebp),%eax
08aa54aa +0x20c:  mov    %eax,(%esp)
08aa54ad +0x20f:  call   088c4298 <_GLOBAL__I_g_script_package+0x168>  ; global constructors keyed to g_script_package+0x168
08aa54b2 +0x214:  mov    %esi,%eax
08aa54b4 +0x216:  mov    %ebx,%edx
08aa54b6 +0x218:  jmp    08aa57cb <+0x52d>
08aa54bb +0x21d:  lea    -0x60(%ebp),%eax
08aa54be +0x220:  mov    %eax,(%esp)
08aa54c1 +0x223:  call   088c4298 <_GLOBAL__I_g_script_package+0x168>  ; global constructors keyed to g_script_package+0x168
08aa54c6 +0x228:  mov    $0x0,%ebx
08aa54cb +0x22d:  jmp    08aa57e6 <+0x548>
08aa54d0 +0x232:  mov    -0x3c(%ebp),%eax
08aa54d3 +0x235:  test   %eax,%eax
08aa54d5 +0x237:  je     08aa55ec <+0x34e>
08aa54db +0x23d:  mov    -0x40(%ebp),%eax
08aa54de +0x240:  test   %eax,%eax
08aa54e0 +0x242:  je     08aa55ec <+0x34e>
08aa54e6 +0x248:  cmpb   $0x0,-0x2d(%ebp)
08aa54ea +0x24c:  je     08aa5535 <+0x297>
08aa54ec +0x24e:  lea    -0x1010(%ebp),%ebx
08aa54f2 +0x254:  mov    $0x0,%eax
08aa54f7 +0x259:  mov    $0x3e8,%edx
08aa54fc +0x25e:  mov    %ebx,%edi
08aa54fe +0x260:  mov    %edx,%ecx
08aa5500 +0x262:  rep stos %eax,%es:(%edi)
08aa5502 +0x264:  mov    -0x40(%ebp),%eax
08aa5505 +0x267:  mov    %eax,0x4(%esp)
08aa5509 +0x26b:  lea    -0x1010(%ebp),%eax
08aa550f +0x271:  mov    %eax,(%esp)
08aa5512 +0x274:  call   0807def0 <_init+0x7e8>
08aa5517 +0x279:  mov    -0x40(%ebp),%eax
08aa551a +0x27c:  lea    -0x1010(%ebp),%edx
08aa5520 +0x282:  mov    %edx,0x4(%esp)
08aa5524 +0x286:  mov    %eax,(%esp)
08aa5527 +0x289:  call   08108e08 <_ZN8CodePage15script2DatabaseEPcS0_>  ; CodePage::script2Database(char*, char*)
08aa552c +0x28e:  lea    -0x1010(%ebp),%eax
08aa5532 +0x294:  mov    %eax,-0x40(%ebp)
08aa5535 +0x297:  cmpb   $0x0,-0x2e(%ebp)
08aa5539 +0x29b:  je     08aa55b7 <+0x319>
08aa553b +0x29d:  mov    -0x40(%ebp),%eax
08aa553e +0x2a0:  mov    %eax,(%esp)
08aa5541 +0x2a3:  call   08adeb75 <_Z9toTStringPKc>  ; toTString(char const*)
08aa5546 +0x2a8:  movzbl (%eax),%eax
08aa5549 +0x2ab:  test   %al,%al
08aa554b +0x2ad:  setne  %al
08aa554e +0x2b0:  test   %al,%al
08aa5550 +0x2b2:  je     08aa5589 <+0x2eb>
08aa5552 +0x2b4:  mov    -0x40(%ebp),%eax
08aa5555 +0x2b7:  mov    %eax,(%esp)
08aa5558 +0x2ba:  call   08adeb75 <_Z9toTStringPKc>  ; toTString(char const*)
08aa555d +0x2bf:  mov    %eax,%esi
08aa555f +0x2c1:  mov    -0x3c(%ebp),%eax
08aa5562 +0x2c4:  mov    %eax,(%esp)
08aa5565 +0x2c7:  call   08adeb75 <_Z9toTStringPKc>  ; toTString(char const*)
08aa556a +0x2cc:  mov    %eax,%ebx
08aa556c +0x2ce:  lea    -0x38(%ebp),%eax
08aa556f +0x2d1:  mov    %eax,(%esp)
08aa5572 +0x2d4:  call   08aa6964 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x246>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x246
08aa5577 +0x2d9:  mov    %esi,0x8(%esp)
08aa557b +0x2dd:  mov    %ebx,0x4(%esp)
08aa557f +0x2e1:  mov    %eax,(%esp)
08aa5582 +0x2e4:  call   08ab2398 <_ZN16StringDictionary3addEPKcS1_>  ; StringDictionary::add(char const*, char const*)
08aa5587 +0x2e9:  jmp    08aa55ec <+0x34e>
08aa5589 +0x2eb:  mov    -0x3c(%ebp),%eax
08aa558c +0x2ee:  mov    %eax,(%esp)
08aa558f +0x2f1:  call   08adeb75 <_Z9toTStringPKc>  ; toTString(char const*)
08aa5594 +0x2f6:  mov    %eax,%ebx
08aa5596 +0x2f8:  lea    -0x38(%ebp),%eax
08aa5599 +0x2fb:  mov    %eax,(%esp)
08aa559c +0x2fe:  call   08aa6964 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x246>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x246
08aa55a1 +0x303:  movl   $"NULL",0x8(%esp)
08aa55a9 +0x30b:  mov    %ebx,0x4(%esp)
08aa55ad +0x30f:  mov    %eax,(%esp)
08aa55b0 +0x312:  call   08ab2398 <_ZN16StringDictionary3addEPKcS1_>  ; StringDictionary::add(char const*, char const*)
08aa55b5 +0x317:  jmp    08aa55ec <+0x34e>
08aa55b7 +0x319:  mov    -0x40(%ebp),%eax
08aa55ba +0x31c:  mov    %eax,(%esp)
08aa55bd +0x31f:  call   08adeb75 <_Z9toTStringPKc>  ; toTString(char const*)
08aa55c2 +0x324:  mov    %eax,%esi
08aa55c4 +0x326:  mov    -0x3c(%ebp),%eax
08aa55c7 +0x329:  mov    %eax,(%esp)
08aa55ca +0x32c:  call   08adeb75 <_Z9toTStringPKc>  ; toTString(char const*)
08aa55cf +0x331:  mov    %eax,%ebx
08aa55d1 +0x333:  lea    -0x38(%ebp),%eax
08aa55d4 +0x336:  mov    %eax,(%esp)
08aa55d7 +0x339:  call   08aa6964 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x246>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x246
08aa55dc +0x33e:  mov    %esi,0x8(%esp)
08aa55e0 +0x342:  mov    %ebx,0x4(%esp)
08aa55e4 +0x346:  mov    %eax,(%esp)
08aa55e7 +0x349:  call   08ab2398 <_ZN16StringDictionary3addEPKcS1_>  ; StringDictionary::add(char const*, char const*)
08aa55ec +0x34e:  mov    0xc(%ebp),%edx
08aa55ef +0x351:  mov    0xc(%ebp),%eax
08aa55f2 +0x354:  mov    (%eax),%eax
08aa55f4 +0x356:  sub    $0xc,%eax
08aa55f7 +0x359:  mov    (%eax),%eax
08aa55f9 +0x35b:  lea    (%edx,%eax,1),%eax
08aa55fc +0x35e:  mov    %eax,(%esp)
08aa55ff +0x361:  call   086e0740 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x6a0>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x6a0
08aa5604 +0x366:  xor    $0x1,%eax
08aa5607 +0x369:  test   %al,%al
08aa5609 +0x36b:  jne    08aa5389 <+0xeb>
08aa560f +0x371:  lea    -0x38(%ebp),%eax
08aa5612 +0x374:  mov    %eax,(%esp)
08aa5615 +0x377:  call   08aa6964 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x246>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x246
08aa561a +0x37c:  mov    %eax,(%esp)
08aa561d +0x37f:  call   08ab240e <_ZN16StringDictionary6freezeEv>  ; StringDictionary::freeze()
08aa5622 +0x384:  movb   $0x0,-0x25(%ebp)
08aa5626 +0x388:  movl   $0x0,-0x20(%ebp)
08aa562d +0x38f:  lea    -0x38(%ebp),%eax
08aa5630 +0x392:  mov    %eax,(%esp)
08aa5633 +0x395:  call   08aa6964 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x246>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x246
08aa5638 +0x39a:  mov    %eax,(%esp)
08aa563b +0x39d:  call   08ab2612 <_ZNK16StringDictionary8getCountEv>  ; StringDictionary::getCount() const
08aa5640 +0x3a2:  sub    $0x1,%eax
08aa5643 +0x3a5:  mov    %eax,-0x1c(%ebp)
08aa5646 +0x3a8:  jmp    08aa5783 <+0x4e5>
08aa564b +0x3ad:  mov    -0x20(%ebp),%eax
08aa564e +0x3b0:  lea    0x1(%eax),%ebx
08aa5651 +0x3b3:  lea    -0x38(%ebp),%eax
08aa5654 +0x3b6:  mov    %eax,(%esp)
08aa5657 +0x3b9:  call   08aa6964 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x246>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x246
08aa565c +0x3be:  mov    %ebx,0x4(%esp)
08aa5660 +0x3c2:  mov    %eax,(%esp)
08aa5663 +0x3c5:  call   08ab2628 <_ZNK16StringDictionary6getKeyEi>  ; StringDictionary::getKey(int) const
08aa5668 +0x3ca:  mov    %eax,%ebx
08aa566a +0x3cc:  lea    -0x38(%ebp),%eax
08aa566d +0x3cf:  mov    %eax,(%esp)
08aa5670 +0x3d2:  call   08aa6964 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x246>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x246
08aa5675 +0x3d7:  mov    -0x20(%ebp),%edx
08aa5678 +0x3da:  mov    %edx,0x4(%esp)
08aa567c +0x3de:  mov    %eax,(%esp)
08aa567f +0x3e1:  call   08ab2628 <_ZNK16StringDictionary6getKeyEi>  ; StringDictionary::getKey(int) const
08aa5684 +0x3e6:  mov    %ebx,0x4(%esp)
08aa5688 +0x3ea:  mov    %eax,(%esp)
08aa568b +0x3ed:  call   0807e4e0 <_init+0xdd8>
08aa5690 +0x3f2:  test   %eax,%eax
08aa5692 +0x3f4:  sete   %al
08aa5695 +0x3f7:  test   %al,%al
08aa5697 +0x3f9:  je     08aa577f <+0x4e1>
08aa569d +0x3ff:  mov    -0x20(%ebp),%eax
08aa56a0 +0x402:  lea    0x1(%eax),%ebx
08aa56a3 +0x405:  lea    -0x38(%ebp),%eax
08aa56a6 +0x408:  mov    %eax,(%esp)
08aa56a9 +0x40b:  call   08aa6964 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x246>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x246
08aa56ae +0x410:  mov    %ebx,0x4(%esp)
08aa56b2 +0x414:  mov    %eax,(%esp)
08aa56b5 +0x417:  call   08ab2628 <_ZNK16StringDictionary6getKeyEi>  ; StringDictionary::getKey(int) const
08aa56ba +0x41c:  mov    %eax,%ebx
08aa56bc +0x41e:  lea    -0x38(%ebp),%eax
08aa56bf +0x421:  mov    %eax,(%esp)
08aa56c2 +0x424:  call   08aa6964 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x246>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x246
08aa56c7 +0x429:  mov    -0x20(%ebp),%edx
08aa56ca +0x42c:  mov    %edx,0x4(%esp)
08aa56ce +0x430:  mov    %eax,(%esp)
08aa56d1 +0x433:  call   08ab2628 <_ZNK16StringDictionary6getKeyEi>  ; StringDictionary::getKey(int) const
08aa56d6 +0x438:  mov    %ebx,0x8(%esp)
08aa56da +0x43c:  mov    %eax,0x4(%esp)
08aa56de +0x440:  movl   $"%s, %s \n",(%esp)
08aa56e5 +0x447:  call   0807db60 <_init+0x458>
08aa56ea +0x44c:  movb   $0x1,-0x25(%ebp)
08aa56ee +0x450:  cmpl   $0x0,0x18(%ebp)
08aa56f2 +0x454:  je     08aa577f <+0x4e1>
08aa56f8 +0x45a:  lea    -0x70(%ebp),%eax
08aa56fb +0x45d:  mov    %eax,(%esp)
08aa56fe +0x460:  call   088c424c <_GLOBAL__I_g_script_package+0x11c>  ; global constructors keyed to g_script_package+0x11c
08aa5703 +0x465:  movl   $0x80000002,-0x70(%ebp)
08aa570a +0x46c:  mov    0x10(%ebp),%eax
08aa570d +0x46f:  mov    %eax,0x4(%esp)
08aa5711 +0x473:  lea    -0x70(%ebp),%eax
08aa5714 +0x476:  add    $0x4,%eax
08aa5717 +0x479:  mov    %eax,(%esp)
08aa571a +0x47c:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08aa571f +0x481:  lea    -0x38(%ebp),%eax
08aa5722 +0x484:  mov    %eax,(%esp)
08aa5725 +0x487:  call   08aa6964 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x246>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x246
08aa572a +0x48c:  mov    -0x20(%ebp),%edx
08aa572d +0x48f:  mov    %edx,0x4(%esp)
08aa5731 +0x493:  mov    %eax,(%esp)
08aa5734 +0x496:  call   08ab2628 <_ZNK16StringDictionary6getKeyEi>  ; StringDictionary::getKey(int) const
08aa5739 +0x49b:  mov    %eax,0x4(%esp)
08aa573d +0x49f:  lea    -0x70(%ebp),%eax
08aa5740 +0x4a2:  add    $0x8,%eax
08aa5743 +0x4a5:  mov    %eax,(%esp)
08aa5746 +0x4a8:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08aa574b +0x4ad:  lea    -0x70(%ebp),%eax
08aa574e +0x4b0:  mov    %eax,0x4(%esp)
08aa5752 +0x4b4:  mov    0x18(%ebp),%eax
08aa5755 +0x4b7:  mov    %eax,(%esp)
08aa5758 +0x4ba:  call   088c4788 <_GLOBAL__I_g_script_package+0x658>  ; global constructors keyed to g_script_package+0x658
08aa575d +0x4bf:  jmp    08aa5774 <+0x4d6>
08aa575f +0x4c1:  mov    %edx,%ebx
08aa5761 +0x4c3:  mov    %eax,%esi
08aa5763 +0x4c5:  lea    -0x70(%ebp),%eax
08aa5766 +0x4c8:  mov    %eax,(%esp)
08aa5769 +0x4cb:  call   088c4298 <_GLOBAL__I_g_script_package+0x168>  ; global constructors keyed to g_script_package+0x168
08aa576e +0x4d0:  mov    %esi,%eax
08aa5770 +0x4d2:  mov    %ebx,%edx
08aa5772 +0x4d4:  jmp    08aa57cb <+0x52d>
08aa5774 +0x4d6:  lea    -0x70(%ebp),%eax
08aa5777 +0x4d9:  mov    %eax,(%esp)
08aa577a +0x4dc:  call   088c4298 <_GLOBAL__I_g_script_package+0x168>  ; global constructors keyed to g_script_package+0x168
08aa577f +0x4e1:  addl   $0x1,-0x20(%ebp)
08aa5783 +0x4e5:  mov    -0x20(%ebp),%eax
08aa5786 +0x4e8:  cmp    -0x1c(%ebp),%eax
08aa5789 +0x4eb:  setl   %al
08aa578c +0x4ee:  test   %al,%al
08aa578e +0x4f0:  jne    08aa564b <+0x3ad>
08aa5794 +0x4f6:  cmpb   $0x0,-0x25(%ebp)
08aa5798 +0x4fa:  je     08aa57a1 <+0x503>
08aa579a +0x4fc:  mov    $0x0,%ebx
08aa579f +0x501:  jmp    08aa57e6 <+0x548>
08aa57a1 +0x503:  lea    -0x38(%ebp),%eax
08aa57a4 +0x506:  mov    %eax,(%esp)
08aa57a7 +0x509:  call   08aa696e <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x250>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x250
08aa57ac +0x50e:  mov    %eax,-0x34(%ebp)
08aa57af +0x511:  mov    0x8(%ebp),%eax
08aa57b2 +0x514:  lea    0x18(%eax),%edx
08aa57b5 +0x517:  lea    -0x34(%ebp),%eax
08aa57b8 +0x51a:  mov    %eax,0x4(%esp)
08aa57bc +0x51e:  mov    %edx,(%esp)
08aa57bf +0x521:  call   08aa698a <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x26c>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x26c
08aa57c4 +0x526:  mov    $0x1,%ebx
08aa57c9 +0x52b:  jmp    08aa57e6 <+0x548>
08aa57cb +0x52d:  mov    %edx,%ebx
08aa57cd +0x52f:  mov    %eax,%esi
08aa57cf +0x531:  lea    -0x38(%ebp),%eax
08aa57d2 +0x534:  mov    %eax,(%esp)
08aa57d5 +0x537:  call   08aa68ee <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x1d0>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x1d0
08aa57da +0x53c:  mov    %esi,%eax
08aa57dc +0x53e:  mov    %ebx,%edx
08aa57de +0x540:  mov    %eax,(%esp)
08aa57e1 +0x543:  call   08ae3750 <_Unwind_Resume>
08aa57e6 +0x548:  lea    -0x38(%ebp),%eax
08aa57e9 +0x54b:  mov    %eax,(%esp)
08aa57ec +0x54e:  call   08aa68ee <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x1d0>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x1d0
08aa57f1 +0x553:  mov    %ebx,%eax
08aa57f3 +0x555:  add    $0x393c,%esp
08aa57f9 +0x55b:  pop    %ebx
08aa57fa +0x55c:  pop    %esi
08aa57fb +0x55d:  pop    %edi
08aa57fc +0x55e:  pop    %ebp
08aa57fd +0x55f:  ret
```

## 反编译 C

```c
// RDARScriptStringManager::loadStringFile @ 0x8aa529e

/* RDARScriptStringManager::loadStringFile(std::istream*, char const*, int, std::vector<ErrorLog,
   std::allocator<ErrorLog> >*) */

undefined4 __thiscall
RDARScriptStringManager::loadStringFile
          (RDARScriptStringManager *this,istream *param_1,char *param_2,int param_3,vector *param_4)

{
  bool bVar1;
  char cVar2;
  StringDictionary *pSVar3;
  char *pcVar4;
  int iVar5;
  TCHAR *pTVar6;
  TCHAR *pTVar7;
  char *__s1;
  undefined4 uVar8;
  undefined4 uVar9;
  byte bVar10;
  char local_393c [10536];
  char local_1014 [4000];
  undefined4 local_74;
  string asStack_70 [4];
  string asStack_6c [8];
  undefined4 local_64;
  string asStack_60 [8];
  int local_58;
  undefined4 local_54;
  string asStack_50 [8];
  int local_48;
  char *local_44;
  char *local_40;
  auto_ptr<StringDictionary> local_3c [4];
  StringDictionary *local_38;
  char local_32;
  char local_31;
  int local_30;
  char local_29;
  int local_28;
  int local_24;
  int local_20;
  
  bVar10 = 0;
  if ((param_1 != (istream *)0x0) && (param_2 != (char *)0x0)) {
    cVar2 = std::ios::bad((ios *)(param_1 + *(int *)(*(int *)param_1 + -0xc)));
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_08aa52de;
    }
  }
  bVar1 = true;
LAB_08aa52de:
  if (bVar1) {
    uVar9 = 0;
  }
  else {
    std::auto_ptr<StringDictionary>::auto_ptr(local_3c,(StringDictionary *)0x0);
                    /* try { // try from 08aa5306 to 08aa530a has its CatchHandler @ 08aa57cb */
    pSVar3 = operator_new(0x424);
                    /* try { // try from 08aa5312 to 08aa5316 has its CatchHandler @ 08aa5319 */
    StringDictionary::StringDictionary(pSVar3);
    std::auto_ptr<StringDictionary>::reset(local_3c,pSVar3);
    local_32 = '\0';
    pcVar4 = strstr(param_2,"Creature.jpn.str");
    if (pcVar4 != (char *)0x0) {
      local_32 = '\x01';
    }
    local_31 = '\0';
    iVar5 = strcmp(param_2,"Etc/Etc.kor.str");
    if (iVar5 == 0) {
      local_31 = '\x01';
    }
    local_30 = 0;
    while( true ) {
      cVar2 = std::ios::eof((ios *)(param_1 + *(int *)(*(int *)param_1 + -0xc)));
      if (cVar2 == '\x01') break;
      local_30 = local_30 + 1;
                    /* try { // try from 08aa53a5 to 08aa53f8 has its CatchHandler @ 08aa57cb */
      std::istream::getline(param_1,local_393c,0x2928);
      local_40 = (char *)0x0;
      local_44 = (char *)0x0;
      local_28 = parseStringLine(local_393c,&local_40,&local_44);
      if (local_28 == -2) {
        if (param_4 != (vector *)0x0) {
          ErrorLog::ErrorLog((ErrorLog *)&local_64);
          local_64 = 0x80000001;
                    /* try { // try from 08aa5484 to 08aa54a0 has its CatchHandler @ 08aa54a3 */
          std::string::operator=(asStack_60,param_2);
          local_58 = local_30;
          std::vector<ErrorLog,std::allocator<ErrorLog>>::push_back
                    ((vector<ErrorLog,std::allocator<ErrorLog>> *)param_4,(ErrorLog *)&local_64);
                    /* try { // try from 08aa54c1 to 08aa5702 has its CatchHandler @ 08aa57cb */
          ErrorLog::~ErrorLog((ErrorLog *)&local_64);
        }
        uVar9 = 0;
        goto LAB_08aa57e6;
      }
      if (local_28 == -1) {
        if (param_4 != (vector *)0x0) {
          ErrorLog::ErrorLog((ErrorLog *)&local_54);
          local_54 = 0x80000000;
                    /* try { // try from 08aa5410 to 08aa542c has its CatchHandler @ 08aa542f */
          std::string::operator=(asStack_50,param_2);
          local_48 = local_30;
          std::vector<ErrorLog,std::allocator<ErrorLog>>::push_back
                    ((vector<ErrorLog,std::allocator<ErrorLog>> *)param_4,(ErrorLog *)&local_54);
                    /* try { // try from 08aa544d to 08aa546c has its CatchHandler @ 08aa57cb */
          ErrorLog::~ErrorLog((ErrorLog *)&local_54);
        }
        uVar9 = 0;
        goto LAB_08aa57e6;
      }
      if ((local_40 != (char *)0x0) && (local_44 != (char *)0x0)) {
        if (local_31 != '\0') {
          pcVar4 = local_1014;
          for (iVar5 = 1000; iVar5 != 0; iVar5 = iVar5 + -1) {
            pcVar4[0] = '\0';
            pcVar4[1] = '\0';
            pcVar4[2] = '\0';
            pcVar4[3] = '\0';
            pcVar4 = pcVar4 + ((uint)bVar10 * -2 + 1) * 4;
          }
          strcpy(local_1014,local_44);
          CodePage::script2Database(local_44,local_1014);
          local_44 = local_1014;
        }
        if (local_32 == '\0') {
          pTVar6 = toTString(local_44);
          pTVar7 = toTString(local_40);
          pSVar3 = (StringDictionary *)std::auto_ptr<StringDictionary>::operator->(local_3c);
          StringDictionary::add(pSVar3,pTVar7,pTVar6);
        }
        else {
          pTVar6 = toTString(local_44);
          if (*pTVar6 == '\0') {
            pTVar6 = toTString(local_40);
            pSVar3 = (StringDictionary *)std::auto_ptr<StringDictionary>::operator->(local_3c);
            StringDictionary::add(pSVar3,pTVar6,"NULL");
          }
          else {
            pTVar6 = toTString(local_44);
            pTVar7 = toTString(local_40);
            pSVar3 = (StringDictionary *)std::auto_ptr<StringDictionary>::operator->(local_3c);
            StringDictionary::add(pSVar3,pTVar7,pTVar6);
          }
        }
      }
    }
    pSVar3 = (StringDictionary *)std::auto_ptr<StringDictionary>::operator->(local_3c);
    StringDictionary::freeze(pSVar3);
    local_29 = '\0';
    local_24 = 0;
    pSVar3 = (StringDictionary *)std::auto_ptr<StringDictionary>::operator->(local_3c);
    local_20 = StringDictionary::getCount(pSVar3);
    local_20 = local_20 + -1;
    for (; local_24 < local_20; local_24 = local_24 + 1) {
      iVar5 = local_24 + 1;
      pSVar3 = (StringDictionary *)std::auto_ptr<StringDictionary>::operator->(local_3c);
      pcVar4 = (char *)StringDictionary::getKey(pSVar3,iVar5);
      pSVar3 = (StringDictionary *)std::auto_ptr<StringDictionary>::operator->(local_3c);
      __s1 = (char *)StringDictionary::getKey(pSVar3,local_24);
      iVar5 = strcmp(__s1,pcVar4);
      if (iVar5 == 0) {
        iVar5 = local_24 + 1;
        pSVar3 = (StringDictionary *)std::auto_ptr<StringDictionary>::operator->(local_3c);
        uVar9 = StringDictionary::getKey(pSVar3,iVar5);
        pSVar3 = (StringDictionary *)std::auto_ptr<StringDictionary>::operator->(local_3c);
        uVar8 = StringDictionary::getKey(pSVar3,local_24);
        printf("%s, %s \n",uVar8,uVar9);
        local_29 = '\x01';
        if (param_4 != (vector *)0x0) {
          ErrorLog::ErrorLog((ErrorLog *)&local_74);
          local_74 = 0x80000002;
                    /* try { // try from 08aa571a to 08aa575c has its CatchHandler @ 08aa575f */
          std::string::operator=(asStack_70,param_2);
          pSVar3 = (StringDictionary *)std::auto_ptr<StringDictionary>::operator->(local_3c);
          pcVar4 = (char *)StringDictionary::getKey(pSVar3,local_24);
          std::string::operator=(asStack_6c,pcVar4);
          std::vector<ErrorLog,std::allocator<ErrorLog>>::push_back
                    ((vector<ErrorLog,std::allocator<ErrorLog>> *)param_4,(ErrorLog *)&local_74);
                    /* try { // try from 08aa577a to 08aa57c3 has its CatchHandler @ 08aa57cb */
          ErrorLog::~ErrorLog((ErrorLog *)&local_74);
        }
      }
    }
    if (local_29 == '\0') {
      local_38 = (StringDictionary *)std::auto_ptr<StringDictionary>::release(local_3c);
      std::vector<StringDictionary*,std::allocator<StringDictionary*>>::push_back
                ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)(this + 0x18),
                 &local_38);
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
    }
LAB_08aa57e6:
    std::auto_ptr<StringDictionary>::~auto_ptr(local_3c);
  }
  return uVar9;
}
```

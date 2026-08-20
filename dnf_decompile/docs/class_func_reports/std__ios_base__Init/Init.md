# Init

`_ZNSt8ios_base4InitC1Ev`

`std::ios_base::Init::Init()`

| 类 | 地址 |
|---|---|
| `std::ios_base::Init` | `0x086da1e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086da1e0  _ZNSt8ios_base4InitC1Ev
#           std::ios_base::Init::Init()
# range [0x086da1e0, 0x086da99f]
086da1e0 +0x000:  push   %ebp
086da1e1 +0x001:  mov    %esp,%ebp
086da1e3 +0x003:  push   %esi
086da1e4 +0x004:  push   %ebx
086da1e5 +0x005:  mov    $&data#bb92cc41(.plt),%ebx
086da1ea +0x00a:  sub    $0x10,%esp
086da1ed +0x00d:  test   %ebx,%ebx
086da1ef +0x00f:  je     086da8d2 <+0x6f2>
086da1f5 +0x015:  mov    $0x1,%eax
086da1fa +0x01a:  lock xadd %eax,&_ZNSt8ios_base4Init11_S_refcountE
086da202 +0x022:  test   %eax,%eax
086da204 +0x024:  je     086da210 <+0x30>
086da206 +0x026:  add    $0x10,%esp
086da209 +0x029:  pop    %ebx
086da20a +0x02a:  pop    %esi
086da20b +0x02b:  pop    %ebp
086da20c +0x02c:  ret
086da20d +0x02d:  lea    0x0(%esi),%esi
086da210 +0x030:  mov    &stdout,%esi
086da216 +0x036:  movb   $0x1,&_ZNSt8ios_base4Init20_S_synced_with_stdioE
086da21d +0x03d:  movl   $&_ZTVSt15basic_streambufIcSt11char_traitsIcEE+0x8,&_ZN14__gnu_internal13buf_cout_syncE
086da227 +0x047:  movl   $0x0,&_ZN14__gnu_internal13buf_cout_syncE+0x4
086da231 +0x051:  movl   $0x0,&_ZN14__gnu_internal13buf_cout_syncE+0x8
086da23b +0x05b:  movl   $0x0,&_ZN14__gnu_internal13buf_cout_syncE+0xc
086da245 +0x065:  movl   $0x0,&_ZN14__gnu_internal13buf_cout_syncE+0x10
086da24f +0x06f:  movl   $0x0,&_ZN14__gnu_internal13buf_cout_syncE+0x14
086da259 +0x079:  movl   $0x0,&_ZN14__gnu_internal13buf_cout_syncE+0x18
086da263 +0x083:  movl   $&_ZN14__gnu_internal13buf_cout_syncE+0x1c,(%esp)
086da26a +0x08a:  call   086dd050 <_ZNSt6localeC1Ev>  ; std::locale::locale()
086da26f +0x08f:  mov    %esi,&_ZN14__gnu_internal13buf_cout_syncE+0x20
086da275 +0x095:  mov    &stdin,%esi
086da27b +0x09b:  movl   $&_ZTVN9__gnu_cxx18stdio_sync_filebufIcSt11char_traitsIcEEE+0x8,&_ZN14__gnu_internal13buf_cout_syncE
086da285 +0x0a5:  movl   $0xffffffff,&_ZN14__gnu_internal13buf_cout_syncE+0x24
086da28f +0x0af:  movl   $&_ZTVSt15basic_streambufIcSt11char_traitsIcEE+0x8,&_ZN14__gnu_internal12buf_cin_syncE
086da299 +0x0b9:  movl   $0x0,&_ZN14__gnu_internal12buf_cin_syncE+0x4
086da2a3 +0x0c3:  movl   $0x0,&_ZN14__gnu_internal12buf_cin_syncE+0x8
086da2ad +0x0cd:  movl   $0x0,&_ZN14__gnu_internal12buf_cin_syncE+0xc
086da2b7 +0x0d7:  movl   $0x0,&_ZN14__gnu_internal12buf_cin_syncE+0x10
086da2c1 +0x0e1:  movl   $0x0,&_ZN14__gnu_internal12buf_cin_syncE+0x14
086da2cb +0x0eb:  movl   $0x0,&_ZN14__gnu_internal12buf_cin_syncE+0x18
086da2d5 +0x0f5:  movl   $&_ZN14__gnu_internal12buf_cin_syncE+0x1c,(%esp)
086da2dc +0x0fc:  call   086dd050 <_ZNSt6localeC1Ev>  ; std::locale::locale()
086da2e1 +0x101:  mov    %esi,&_ZN14__gnu_internal12buf_cin_syncE+0x20
086da2e7 +0x107:  mov    &stderr,%esi
086da2ed +0x10d:  movl   $&_ZTVN9__gnu_cxx18stdio_sync_filebufIcSt11char_traitsIcEEE+0x8,&_ZN14__gnu_internal12buf_cin_syncE
086da2f7 +0x117:  movl   $0xffffffff,&_ZN14__gnu_internal12buf_cin_syncE+0x24
086da301 +0x121:  movl   $&_ZTVSt15basic_streambufIcSt11char_traitsIcEE+0x8,&_ZN14__gnu_internal13buf_cerr_syncE
086da30b +0x12b:  movl   $0x0,&_ZN14__gnu_internal13buf_cerr_syncE+0x4
086da315 +0x135:  movl   $0x0,&_ZN14__gnu_internal13buf_cerr_syncE+0x8
086da31f +0x13f:  movl   $0x0,&_ZN14__gnu_internal13buf_cerr_syncE+0xc
086da329 +0x149:  movl   $0x0,&_ZN14__gnu_internal13buf_cerr_syncE+0x10
086da333 +0x153:  movl   $0x0,&_ZN14__gnu_internal13buf_cerr_syncE+0x14
086da33d +0x15d:  movl   $0x0,&_ZN14__gnu_internal13buf_cerr_syncE+0x18
086da347 +0x167:  movl   $&_ZN14__gnu_internal13buf_cerr_syncE+0x1c,(%esp)
086da34e +0x16e:  call   086dd050 <_ZNSt6localeC1Ev>  ; std::locale::locale()
086da353 +0x173:  movl   $&_ZTVN9__gnu_cxx18stdio_sync_filebufIcSt11char_traitsIcEEE+0x8,&_ZN14__gnu_internal13buf_cerr_syncE
086da35d +0x17d:  mov    %esi,&_ZN14__gnu_internal13buf_cerr_syncE+0x20
086da363 +0x183:  movl   $0xffffffff,&_ZN14__gnu_internal13buf_cerr_syncE+0x24
086da36d +0x18d:  movl   $&_ZSt4cout+0x4,(%esp)
086da374 +0x194:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
086da379 +0x199:  movl   $0x0,&_ZSt4cout+0x74
086da383 +0x1a3:  movb   $0x0,&_ZSt4cout+0x78
086da38a +0x1aa:  movb   $0x0,&_ZSt4cout+0x79
086da391 +0x1b1:  movl   $0x0,&_ZSt4cout+0x7c
086da39b +0x1bb:  movl   $0x0,&_ZSt4cout+0x80
086da3a5 +0x1c5:  movl   $0x0,&_ZSt4cout+0x84
086da3af +0x1cf:  movl   $0x0,&_ZSt4cout+0x88
086da3b9 +0x1d9:  movl   $&_ZTVSo+0xc,&_ZSt4cout
086da3c3 +0x1e3:  movl   $&_ZTVSo+0x20,&_ZSt4cout+0x4
086da3cd +0x1ed:  movl   $&_ZN14__gnu_internal13buf_cout_syncE,0x4(%esp)
086da3d5 +0x1f5:  movl   $&_ZSt4cout+0x4,(%esp)
086da3dc +0x1fc:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086da3e1 +0x201:  movl   $&_ZSt3cin+0x8,(%esp)
086da3e8 +0x208:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
086da3ed +0x20d:  movl   $0x0,&_ZSt3cin+0x78
086da3f7 +0x217:  movb   $0x0,&_ZSt3cin+0x7c
086da3fe +0x21e:  movb   $0x0,&_ZSt3cin+0x7d
086da405 +0x225:  movl   $0x0,&_ZSt3cin+0x80
086da40f +0x22f:  movl   $0x0,&_ZSt3cin+0x84
086da419 +0x239:  movl   $0x0,&_ZSt3cin+0x88
086da423 +0x243:  movl   $0x0,&_ZSt3cin+0x8c
086da42d +0x24d:  movl   $&_ZTVSi+0xc,&_ZSt3cin
086da437 +0x257:  movl   $&_ZTVSi+0x20,&_ZSt3cin+0x8
086da441 +0x261:  movl   $0x0,&_ZSt3cin+0x4
086da44b +0x26b:  movl   $&_ZN14__gnu_internal12buf_cin_syncE,0x4(%esp)
086da453 +0x273:  movl   $&_ZSt3cin+0x8,(%esp)
086da45a +0x27a:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086da45f +0x27f:  movl   $&_ZSt4cerr+0x4,(%esp)
086da466 +0x286:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
086da46b +0x28b:  movl   $0x0,&_ZSt4cerr+0x74
086da475 +0x295:  movb   $0x0,&_ZSt4cerr+0x78
086da47c +0x29c:  movb   $0x0,&_ZSt4cerr+0x79
086da483 +0x2a3:  movl   $0x0,&_ZSt4cerr+0x7c
086da48d +0x2ad:  movl   $0x0,&_ZSt4cerr+0x80
086da497 +0x2b7:  movl   $0x0,&_ZSt4cerr+0x84
086da4a1 +0x2c1:  movl   $0x0,&_ZSt4cerr+0x88
086da4ab +0x2cb:  movl   $&_ZTVSo+0xc,&_ZSt4cerr
086da4b5 +0x2d5:  movl   $&_ZTVSo+0x20,&_ZSt4cerr+0x4
086da4bf +0x2df:  movl   $&_ZN14__gnu_internal13buf_cerr_syncE,0x4(%esp)
086da4c7 +0x2e7:  movl   $&_ZSt4cerr+0x4,(%esp)
086da4ce +0x2ee:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086da4d3 +0x2f3:  movl   $&_ZSt4clog+0x4,(%esp)
086da4da +0x2fa:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
086da4df +0x2ff:  movl   $0x0,&_ZSt4clog+0x74
086da4e9 +0x309:  movb   $0x0,&_ZSt4clog+0x78
086da4f0 +0x310:  movb   $0x0,&_ZSt4clog+0x79
086da4f7 +0x317:  movl   $0x0,&_ZSt4clog+0x7c
086da501 +0x321:  movl   $0x0,&_ZSt4clog+0x80
086da50b +0x32b:  movl   $0x0,&_ZSt4clog+0x84
086da515 +0x335:  movl   $0x0,&_ZSt4clog+0x88
086da51f +0x33f:  movl   $&_ZTVSo+0xc,&_ZSt4clog
086da529 +0x349:  movl   $&_ZTVSo+0x20,&_ZSt4clog+0x4
086da533 +0x353:  movl   $&_ZN14__gnu_internal13buf_cerr_syncE,0x4(%esp)
086da53b +0x35b:  movl   $&_ZSt4clog+0x4,(%esp)
086da542 +0x362:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086da547 +0x367:  mov    &stdout,%esi
086da54d +0x36d:  movl   $&_ZSt4cout,&_ZSt3cin+0x78
086da557 +0x377:  movl   $0x2000,&_ZSt4cerr+0x10
086da561 +0x381:  movl   $&_ZSt4cout,&_ZSt4cerr+0x74
086da56b +0x38b:  movl   $&_ZTVSt15basic_streambufIwSt11char_traitsIwEE+0x8,&_ZN14__gnu_internal14buf_wcout_syncE
086da575 +0x395:  movl   $0x0,&_ZN14__gnu_internal14buf_wcout_syncE+0x4
086da57f +0x39f:  movl   $0x0,&_ZN14__gnu_internal14buf_wcout_syncE+0x8
086da589 +0x3a9:  movl   $0x0,&_ZN14__gnu_internal14buf_wcout_syncE+0xc
086da593 +0x3b3:  movl   $0x0,&_ZN14__gnu_internal14buf_wcout_syncE+0x10
086da59d +0x3bd:  movl   $0x0,&_ZN14__gnu_internal14buf_wcout_syncE+0x14
086da5a7 +0x3c7:  movl   $0x0,&_ZN14__gnu_internal14buf_wcout_syncE+0x18
086da5b1 +0x3d1:  movl   $&_ZN14__gnu_internal14buf_wcout_syncE+0x1c,(%esp)
086da5b8 +0x3d8:  call   086dd050 <_ZNSt6localeC1Ev>  ; std::locale::locale()
086da5bd +0x3dd:  mov    %esi,&_ZN14__gnu_internal14buf_wcout_syncE+0x20
086da5c3 +0x3e3:  mov    &stdin,%esi
086da5c9 +0x3e9:  movl   $&_ZTVN9__gnu_cxx18stdio_sync_filebufIwSt11char_traitsIwEEE+0x8,&_ZN14__gnu_internal14buf_wcout_syncE
086da5d3 +0x3f3:  movl   $0xffffffff,&_ZN14__gnu_internal14buf_wcout_syncE+0x24
086da5dd +0x3fd:  movl   $&_ZTVSt15basic_streambufIwSt11char_traitsIwEE+0x8,&_ZN14__gnu_internal13buf_wcin_syncE
086da5e7 +0x407:  movl   $0x0,&_ZN14__gnu_internal13buf_wcin_syncE+0x4
086da5f1 +0x411:  movl   $0x0,&_ZN14__gnu_internal13buf_wcin_syncE+0x8
086da5fb +0x41b:  movl   $0x0,&_ZN14__gnu_internal13buf_wcin_syncE+0xc
086da605 +0x425:  movl   $0x0,&_ZN14__gnu_internal13buf_wcin_syncE+0x10
086da60f +0x42f:  movl   $0x0,&_ZN14__gnu_internal13buf_wcin_syncE+0x14
086da619 +0x439:  movl   $0x0,&_ZN14__gnu_internal13buf_wcin_syncE+0x18
086da623 +0x443:  movl   $&_ZN14__gnu_internal13buf_wcin_syncE+0x1c,(%esp)
086da62a +0x44a:  call   086dd050 <_ZNSt6localeC1Ev>  ; std::locale::locale()
086da62f +0x44f:  mov    %esi,&_ZN14__gnu_internal13buf_wcin_syncE+0x20
086da635 +0x455:  mov    &stderr,%esi
086da63b +0x45b:  movl   $&_ZTVN9__gnu_cxx18stdio_sync_filebufIwSt11char_traitsIwEEE+0x8,&_ZN14__gnu_internal13buf_wcin_syncE
086da645 +0x465:  movl   $0xffffffff,&_ZN14__gnu_internal13buf_wcin_syncE+0x24
086da64f +0x46f:  movl   $&_ZTVSt15basic_streambufIwSt11char_traitsIwEE+0x8,&_ZN14__gnu_internal14buf_wcerr_syncE
086da659 +0x479:  movl   $0x0,&_ZN14__gnu_internal14buf_wcerr_syncE+0x4
086da663 +0x483:  movl   $0x0,&_ZN14__gnu_internal14buf_wcerr_syncE+0x8
086da66d +0x48d:  movl   $0x0,&_ZN14__gnu_internal14buf_wcerr_syncE+0xc
086da677 +0x497:  movl   $0x0,&_ZN14__gnu_internal14buf_wcerr_syncE+0x10
086da681 +0x4a1:  movl   $0x0,&_ZN14__gnu_internal14buf_wcerr_syncE+0x14
086da68b +0x4ab:  movl   $0x0,&_ZN14__gnu_internal14buf_wcerr_syncE+0x18
086da695 +0x4b5:  movl   $&_ZN14__gnu_internal14buf_wcerr_syncE+0x1c,(%esp)
086da69c +0x4bc:  call   086dd050 <_ZNSt6localeC1Ev>  ; std::locale::locale()
086da6a1 +0x4c1:  movl   $&_ZTVN9__gnu_cxx18stdio_sync_filebufIwSt11char_traitsIwEEE+0x8,&_ZN14__gnu_internal14buf_wcerr_syncE
086da6ab +0x4cb:  mov    %esi,&_ZN14__gnu_internal14buf_wcerr_syncE+0x20
086da6b1 +0x4d1:  movl   $0xffffffff,&_ZN14__gnu_internal14buf_wcerr_syncE+0x24
086da6bb +0x4db:  movl   $&_ZSt5wcout+0x4,(%esp)
086da6c2 +0x4e2:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
086da6c7 +0x4e7:  movl   $0x0,&_ZSt5wcout+0x74
086da6d1 +0x4f1:  movl   $0x0,&_ZSt5wcout+0x78
086da6db +0x4fb:  movb   $0x0,&_ZSt5wcout+0x7c
086da6e2 +0x502:  movl   $0x0,&_ZSt5wcout+0x80
086da6ec +0x50c:  movl   $0x0,&_ZSt5wcout+0x84
086da6f6 +0x516:  movl   $0x0,&_ZSt5wcout+0x88
086da700 +0x520:  movl   $0x0,&_ZSt5wcout+0x8c
086da70a +0x52a:  movl   $&_ZTVSt13basic_ostreamIwSt11char_traitsIwEE+0xc,&_ZSt5wcout
086da714 +0x534:  movl   $&_ZTVSt13basic_ostreamIwSt11char_traitsIwEE+0x20,&_ZSt5wcout+0x4
086da71e +0x53e:  movl   $&_ZN14__gnu_internal14buf_wcout_syncE,0x4(%esp)
086da726 +0x546:  movl   $&_ZSt5wcout+0x4,(%esp)
086da72d +0x54d:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
086da732 +0x552:  movl   $&_ZSt4wcin+0x8,(%esp)
086da739 +0x559:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
086da73e +0x55e:  movl   $0x0,&_ZSt4wcin+0x78
086da748 +0x568:  movl   $0x0,&_ZSt4wcin+0x7c
086da752 +0x572:  movb   $0x0,&_ZSt4wcin+0x80
086da759 +0x579:  movl   $0x0,&_ZSt4wcin+0x84
086da763 +0x583:  movl   $0x0,&_ZSt4wcin+0x88
086da76d +0x58d:  movl   $0x0,&_ZSt4wcin+0x8c
086da777 +0x597:  movl   $0x0,&_ZSt4wcin+0x90
086da781 +0x5a1:  movl   $&_ZTVSt13basic_istreamIwSt11char_traitsIwEE+0xc,&_ZSt4wcin
086da78b +0x5ab:  movl   $&_ZTVSt13basic_istreamIwSt11char_traitsIwEE+0x20,&_ZSt4wcin+0x8
086da795 +0x5b5:  movl   $0x0,&_ZSt4wcin+0x4
086da79f +0x5bf:  movl   $&_ZN14__gnu_internal13buf_wcin_syncE,0x4(%esp)
086da7a7 +0x5c7:  movl   $&_ZSt4wcin+0x8,(%esp)
086da7ae +0x5ce:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
086da7b3 +0x5d3:  movl   $&_ZSt5wcerr+0x4,(%esp)
086da7ba +0x5da:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
086da7bf +0x5df:  movl   $0x0,&_ZSt5wcerr+0x74
086da7c9 +0x5e9:  movl   $0x0,&_ZSt5wcerr+0x78
086da7d3 +0x5f3:  movb   $0x0,&_ZSt5wcerr+0x7c
086da7da +0x5fa:  movl   $0x0,&_ZSt5wcerr+0x80
086da7e4 +0x604:  movl   $0x0,&_ZSt5wcerr+0x84
086da7ee +0x60e:  movl   $0x0,&_ZSt5wcerr+0x88
086da7f8 +0x618:  movl   $0x0,&_ZSt5wcerr+0x8c
086da802 +0x622:  movl   $&_ZTVSt13basic_ostreamIwSt11char_traitsIwEE+0xc,&_ZSt5wcerr
086da80c +0x62c:  movl   $&_ZTVSt13basic_ostreamIwSt11char_traitsIwEE+0x20,&_ZSt5wcerr+0x4
086da816 +0x636:  movl   $&_ZN14__gnu_internal14buf_wcerr_syncE,0x4(%esp)
086da81e +0x63e:  movl   $&_ZSt5wcerr+0x4,(%esp)
086da825 +0x645:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
086da82a +0x64a:  movl   $&_ZSt5wclog+0x4,(%esp)
086da831 +0x651:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
086da836 +0x656:  movl   $0x0,&_ZSt5wclog+0x74
086da840 +0x660:  movl   $0x0,&_ZSt5wclog+0x78
086da84a +0x66a:  movb   $0x0,&_ZSt5wclog+0x7c
086da851 +0x671:  movl   $0x0,&_ZSt5wclog+0x80
086da85b +0x67b:  movl   $0x0,&_ZSt5wclog+0x84
086da865 +0x685:  movl   $0x0,&_ZSt5wclog+0x88
086da86f +0x68f:  movl   $0x0,&_ZSt5wclog+0x8c
086da879 +0x699:  movl   $&_ZTVSt13basic_ostreamIwSt11char_traitsIwEE+0xc,&_ZSt5wclog
086da883 +0x6a3:  movl   $&_ZTVSt13basic_ostreamIwSt11char_traitsIwEE+0x20,&_ZSt5wclog+0x4
086da88d +0x6ad:  movl   $&_ZN14__gnu_internal14buf_wcerr_syncE,0x4(%esp)
086da895 +0x6b5:  movl   $&_ZSt5wclog+0x4,(%esp)
086da89c +0x6bc:  call   086e0920 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x880>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x880
086da8a1 +0x6c1:  test   %ebx,%ebx
086da8a3 +0x6c3:  movl   $&_ZSt5wcout,&_ZSt4wcin+0x78
086da8ad +0x6cd:  movl   $0x2000,&_ZSt5wcerr+0x10
086da8b7 +0x6d7:  movl   $&_ZSt5wcout,&_ZSt5wcerr+0x74
086da8c1 +0x6e1:  je     086da8e5 <+0x705>
086da8c3 +0x6e3:  lock addl $0x1,&_ZNSt8ios_base4Init11_S_refcountE
086da8cb +0x6eb:  add    $0x10,%esp
086da8ce +0x6ee:  pop    %ebx
086da8cf +0x6ef:  pop    %esi
086da8d0 +0x6f0:  pop    %ebp
086da8d1 +0x6f1:  ret
086da8d2 +0x6f2:  mov    &_ZNSt8ios_base4Init11_S_refcountE,%eax
086da8d7 +0x6f7:  lea    0x1(%eax),%edx
086da8da +0x6fa:  mov    %edx,&_ZNSt8ios_base4Init11_S_refcountE
086da8e0 +0x700:  jmp    086da202 <+0x22>
086da8e5 +0x705:  addl   $0x1,&_ZNSt8ios_base4Init11_S_refcountE
086da8ec +0x70c:  jmp    086da206 <+0x26>
086da8f1 +0x711:  mov    %eax,%ebx
086da8f3 +0x713:  mov    %ebx,(%esp)
086da8f6 +0x716:  call   08ae3750 <_Unwind_Resume>
086da8fb +0x71b:  mov    %eax,%ebx
086da8fd +0x71d:  movl   $&_ZSt5wclog+0x4,(%esp)
086da904 +0x724:  call   086e0bf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb50
086da909 +0x729:  jmp    086da8f3 <+0x713>
086da90b +0x72b:  mov    %eax,%ebx
086da90d +0x72d:  movl   $&_ZSt5wcerr+0x4,(%esp)
086da914 +0x734:  call   086e0bf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb50
086da919 +0x739:  jmp    086da8f3 <+0x713>
086da91b +0x73b:  jmp    086da8f1 <+0x711>
086da91d +0x73d:  mov    %eax,%ebx
086da91f +0x73f:  movl   $&_ZSt5wcout+0x4,(%esp)
086da926 +0x746:  call   086e0bf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb50
086da92b +0x74b:  jmp    086da8f3 <+0x713>
086da92d +0x74d:  jmp    086da8f1 <+0x711>
086da92f +0x74f:  mov    %eax,%ebx
086da931 +0x751:  movl   $&_ZSt4wcin+0x8,(%esp)
086da938 +0x758:  call   086e0bf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb50
086da93d +0x75d:  jmp    086da8f3 <+0x713>
086da93f +0x75f:  jmp    086da8f1 <+0x711>
086da941 +0x761:  mov    %eax,%ebx
086da943 +0x763:  movl   $&_ZSt4cout+0x4,(%esp)
086da94a +0x76a:  call   086e0c10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb70
086da94f +0x76f:  jmp    086da8f3 <+0x713>
086da951 +0x771:  jmp    086da8f1 <+0x711>
086da953 +0x773:  mov    %eax,%ebx
086da955 +0x775:  movl   $&_ZSt3cin+0x8,(%esp)
086da95c +0x77c:  call   086e0c10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb70
086da961 +0x781:  jmp    086da8f3 <+0x713>
086da963 +0x783:  jmp    086da8f1 <+0x711>
086da965 +0x785:  mov    %eax,%ebx
086da967 +0x787:  movl   $&_ZSt4cerr+0x4,(%esp)
086da96e +0x78e:  call   086e0c10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb70
086da973 +0x793:  jmp    086da8f3 <+0x713>
086da978 +0x798:  jmp    086da8f1 <+0x711>
086da97d +0x79d:  mov    %eax,%ebx
086da97f +0x79f:  movl   $&_ZSt4clog+0x4,(%esp)
086da986 +0x7a6:  call   086e0c10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb70
086da98b +0x7ab:  jmp    086da8f3 <+0x713>
086da990 +0x7b0:  jmp    086da8f1 <+0x711>
086da995 +0x7b5:  nop
086da996 +0x7b6:  nop
086da997 +0x7b7:  nop
086da998 +0x7b8:  nop
086da999 +0x7b9:  nop
086da99a +0x7ba:  nop
086da99b +0x7bb:  nop
086da99c +0x7bc:  nop
086da99d +0x7bd:  nop
086da99e +0x7be:  nop
086da99f +0x7bf:  nop
```

## 反编译 C

```c
// std::ios_base::Init::Init @ 0x86da1e0

/* WARNING: Removing unreachable block (ram,0x086da8d2) */
/* WARNING: Removing unreachable block (ram,0x086da8e5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::ios_base::Init::Init() */

void __thiscall std::ios_base::Init::Init(Init *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = _S_refcount;
  uVar2 = stdout;
  LOCK();
  _S_refcount = _S_refcount + 1;
  UNLOCK();
  if (iVar3 != 0) {
    return;
  }
  _S_synced_with_stdio = 1;
  __gnu_internal::buf_cout_sync._0_4_ = &PTR__streambuf_08d00368;
  __gnu_internal::buf_cout_sync._4_4_ = 0;
  __gnu_internal::buf_cout_sync._8_4_ = 0;
  __gnu_internal::buf_cout_sync._12_4_ = 0;
  __gnu_internal::buf_cout_sync._16_4_ = 0;
  __gnu_internal::buf_cout_sync._20_4_ = 0;
  __gnu_internal::buf_cout_sync._24_4_ = 0;
  locale::locale((locale *)(__gnu_internal::buf_cout_sync + 0x1c));
  uVar1 = stdin;
  __gnu_internal::buf_cout_sync._32_4_ = uVar2;
  __gnu_internal::buf_cout_sync._0_4_ = &PTR__stdio_sync_filebuf_08cffa48;
  __gnu_internal::buf_cout_sync._36_4_ = 0xffffffff;
  __gnu_internal::buf_cin_sync._0_4_ = &PTR__streambuf_08d00368;
  __gnu_internal::buf_cin_sync._4_4_ = 0;
  __gnu_internal::buf_cin_sync._8_4_ = 0;
  __gnu_internal::buf_cin_sync._12_4_ = 0;
  __gnu_internal::buf_cin_sync._16_4_ = 0;
  __gnu_internal::buf_cin_sync._20_4_ = 0;
  __gnu_internal::buf_cin_sync._24_4_ = 0;
  locale::locale((locale *)(__gnu_internal::buf_cin_sync + 0x1c));
  uVar2 = stderr;
  __gnu_internal::buf_cin_sync._32_4_ = uVar1;
  __gnu_internal::buf_cin_sync._0_4_ = &PTR__stdio_sync_filebuf_08cffa48;
  __gnu_internal::buf_cin_sync._36_4_ = 0xffffffff;
  __gnu_internal::buf_cerr_sync._0_4_ = &PTR__streambuf_08d00368;
  __gnu_internal::buf_cerr_sync._4_4_ = 0;
  __gnu_internal::buf_cerr_sync._8_4_ = 0;
  __gnu_internal::buf_cerr_sync._12_4_ = 0;
  __gnu_internal::buf_cerr_sync._16_4_ = 0;
  __gnu_internal::buf_cerr_sync._20_4_ = 0;
  __gnu_internal::buf_cerr_sync._24_4_ = 0;
  locale::locale((locale *)(__gnu_internal::buf_cerr_sync + 0x1c));
  __gnu_internal::buf_cerr_sync._0_4_ = &PTR__stdio_sync_filebuf_08cffa48;
  __gnu_internal::buf_cerr_sync._32_4_ = uVar2;
  __gnu_internal::buf_cerr_sync._36_4_ = 0xffffffff;
                    /* try { // try from 086da374 to 086da378 has its CatchHandler @ 086da8f1 */
  ios_base((ios_base *)(cout + 4));
  cout._116_4_ = 0;
  cout[0x78] = 0;
  cout[0x79] = 0;
  cout._124_4_ = 0;
  cout._128_4_ = 0;
  cout._132_4_ = 0;
  cout._136_4_ = 0;
  cout._0_4_ = 0x8cffb8c;
  cout._4_4_ = 0x8cffba0;
                    /* try { // try from 086da3dc to 086da3e0 has its CatchHandler @ 086da941 */
  ios::init((ios *)(cout + 4),(streambuf *)__gnu_internal::buf_cout_sync);
                    /* try { // try from 086da3e8 to 086da3ec has its CatchHandler @ 086da951 */
  ios_base((ios_base *)(cin + 8));
  cin._120_4_ = 0;
  cin[0x7c] = 0;
  cin[0x7d] = 0;
  cin._128_4_ = 0;
  cin._132_4_ = 0;
  cin._136_4_ = 0;
  cin._140_4_ = 0;
  cin._0_4_ = 0x8cfecac;
  cin._8_4_ = 0x8cfecc0;
  cin._4_4_ = 0;
                    /* try { // try from 086da45a to 086da45e has its CatchHandler @ 086da953 */
  ios::init((ios *)(cin + 8),(streambuf *)__gnu_internal::buf_cin_sync);
                    /* try { // try from 086da466 to 086da46a has its CatchHandler @ 086da963 */
  ios_base((ios_base *)&DAT_0948b464);
  _DAT_0948b4d4 = (undefined1 *)0x0;
  DAT_0948b4d8 = 0;
  DAT_0948b4d9 = 0;
  _DAT_0948b4dc = 0;
  _DAT_0948b4e0 = 0;
  _DAT_0948b4e4 = 0;
  _DAT_0948b4e8 = 0;
  cerr = 0x8cffb8c;
  _DAT_0948b464 = 0x8cffba0;
                    /* try { // try from 086da4ce to 086da4d2 has its CatchHandler @ 086da965 */
  ios::init((ios *)&DAT_0948b464,(streambuf *)__gnu_internal::buf_cerr_sync);
                    /* try { // try from 086da4da to 086da4de has its CatchHandler @ 086da978 */
  ios_base((ios_base *)(clog + 4));
  clog._116_4_ = 0;
  clog[0x78] = 0;
  clog[0x79] = 0;
  clog._124_4_ = 0;
  clog._128_4_ = 0;
  clog._132_4_ = 0;
  clog._136_4_ = 0;
  clog._0_4_ = 0x8cffb8c;
  clog._4_4_ = 0x8cffba0;
                    /* try { // try from 086da542 to 086da546 has its CatchHandler @ 086da97d */
  ios::init((ios *)(clog + 4),(streambuf *)__gnu_internal::buf_cerr_sync);
  uVar1 = stdout;
  cin._120_4_ = cout;
  _DAT_0948b470 = 0x2000;
  _DAT_0948b4d4 = cout;
  __gnu_internal::buf_wcout_sync._0_4_ = &PTR__wstreambuf_08d00328;
  __gnu_internal::buf_wcout_sync._4_4_ = 0;
  __gnu_internal::buf_wcout_sync._8_4_ = 0;
  __gnu_internal::buf_wcout_sync._12_4_ = 0;
  __gnu_internal::buf_wcout_sync._16_4_ = 0;
  __gnu_internal::buf_wcout_sync._20_4_ = 0;
  __gnu_internal::buf_wcout_sync._24_4_ = 0;
  locale::locale((locale *)(__gnu_internal::buf_wcout_sync + 0x1c));
  uVar2 = stdin;
  __gnu_internal::buf_wcout_sync._32_4_ = uVar1;
  __gnu_internal::buf_wcout_sync._0_4_ = &PTR__stdio_sync_filebuf_08cffa08;
  __gnu_internal::buf_wcout_sync._36_4_ = 0xffffffff;
  __gnu_internal::buf_wcin_sync._0_4_ = &PTR__wstreambuf_08d00328;
  __gnu_internal::buf_wcin_sync._4_4_ = 0;
  __gnu_internal::buf_wcin_sync._8_4_ = 0;
  __gnu_internal::buf_wcin_sync._12_4_ = 0;
  __gnu_internal::buf_wcin_sync._16_4_ = 0;
  __gnu_internal::buf_wcin_sync._20_4_ = 0;
  __gnu_internal::buf_wcin_sync._24_4_ = 0;
  locale::locale((locale *)(__gnu_internal::buf_wcin_sync + 0x1c));
  uVar1 = stderr;
  __gnu_internal::buf_wcin_sync._32_4_ = uVar2;
  __gnu_internal::buf_wcin_sync._0_4_ = &PTR__stdio_sync_filebuf_08cffa08;
  __gnu_internal::buf_wcin_sync._36_4_ = 0xffffffff;
  __gnu_internal::buf_wcerr_sync._0_4_ = &PTR__wstreambuf_08d00328;
  __gnu_internal::buf_wcerr_sync._4_4_ = 0;
  __gnu_internal::buf_wcerr_sync._8_4_ = 0;
  __gnu_internal::buf_wcerr_sync._12_4_ = 0;
  __gnu_internal::buf_wcerr_sync._16_4_ = 0;
  __gnu_internal::buf_wcerr_sync._20_4_ = 0;
  __gnu_internal::buf_wcerr_sync._24_4_ = 0;
  locale::locale((locale *)(__gnu_internal::buf_wcerr_sync + 0x1c));
  __gnu_internal::buf_wcerr_sync._0_4_ = &PTR__stdio_sync_filebuf_08cffa08;
  __gnu_internal::buf_wcerr_sync._32_4_ = uVar1;
  __gnu_internal::buf_wcerr_sync._36_4_ = 0xffffffff;
                    /* try { // try from 086da6c2 to 086da6c6 has its CatchHandler @ 086da990 */
  ios_base((ios_base *)(wcout + 4));
  wcout._116_4_ = 0;
  wcout._120_4_ = 0;
  wcout[0x7c] = 0;
  wcout._128_4_ = 0;
  wcout._132_4_ = 0;
  wcout._136_4_ = 0;
  wcout._140_4_ = 0;
  wcout._0_4_ = 0x8cffb4c;
  wcout._4_4_ = 0x8cffb60;
                    /* try { // try from 086da72d to 086da731 has its CatchHandler @ 086da91d */
  wios::init((wios *)(wcout + 4),(wstreambuf *)__gnu_internal::buf_wcout_sync);
                    /* try { // try from 086da739 to 086da73d has its CatchHandler @ 086da92d */
  ios_base((ios_base *)(wcin + 8));
  wcin._120_4_ = 0;
  wcin._124_4_ = 0;
  wcin[0x80] = 0;
  wcin._132_4_ = 0;
  wcin._136_4_ = 0;
  wcin._140_4_ = 0;
  wcin._144_4_ = 0;
  wcin._0_4_ = 0x8cfec6c;
  wcin._8_4_ = 0x8cfec80;
  wcin._4_4_ = 0;
                    /* try { // try from 086da7ae to 086da7b2 has its CatchHandler @ 086da92f */
  wios::init((wios *)(wcin + 8),(wstreambuf *)__gnu_internal::buf_wcin_sync);
                    /* try { // try from 086da7ba to 086da7be has its CatchHandler @ 086da93f */
  ios_base((ios_base *)(wcerr + 4));
  wcerr._116_4_ = 0;
  wcerr._120_4_ = 0;
  wcerr[0x7c] = 0;
  wcerr._128_4_ = 0;
  wcerr._132_4_ = 0;
  wcerr._136_4_ = 0;
  wcerr._140_4_ = 0;
  wcerr._0_4_ = 0x8cffb4c;
  wcerr._4_4_ = 0x8cffb60;
                    /* try { // try from 086da825 to 086da829 has its CatchHandler @ 086da90b */
  wios::init((wios *)(wcerr + 4),(wstreambuf *)__gnu_internal::buf_wcerr_sync);
                    /* try { // try from 086da831 to 086da835 has its CatchHandler @ 086da91b */
  ios_base((ios_base *)(wclog + 4));
  wclog._116_4_ = 0;
  wclog._120_4_ = 0;
  wclog[0x7c] = 0;
  wclog._128_4_ = 0;
  wclog._132_4_ = 0;
  wclog._136_4_ = 0;
  wclog._140_4_ = 0;
  wclog._0_4_ = 0x8cffb4c;
  wclog._4_4_ = 0x8cffb60;
                    /* try { // try from 086da89c to 086da8a0 has its CatchHandler @ 086da8fb */
  wios::init((wios *)(wclog + 4),(wstreambuf *)__gnu_internal::buf_wcerr_sync);
  wcin._120_4_ = wcout;
  wcerr._16_4_ = 0x2000;
  wcerr._116_4_ = wcout;
  LOCK();
  _S_refcount = _S_refcount + 1;
  UNLOCK();
  return;
}
```

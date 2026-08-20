# _Impl

`_ZNSt6locale5_ImplC1Ej`

`std::locale::_Impl::_Impl(unsigned int)`

| 类 | 地址 |
|---|---|
| `std::locale::_Impl` | `0x086dbdf0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dbdf0  _ZNSt6locale5_ImplC1Ej
#           std::locale::_Impl::_Impl(unsigned int)
# range [0x086dbdf0, 0x086dcdbf]
086dbdf0 +0x000:  push   %ebp
086dbdf1 +0x001:  mov    $&_ZN12_GLOBAL__N_19facet_vecE,%ecx
086dbdf6 +0x006:  mov    %esp,%ebp
086dbdf8 +0x008:  mov    $&_ZN12_GLOBAL__N_19cache_vecE,%edx
086dbdfd +0x00d:  push   %esi
086dbdfe +0x00e:  mov    $0x1c,%esi
086dbe03 +0x013:  push   %ebx
086dbe04 +0x014:  sub    $0x10,%esp
086dbe07 +0x017:  mov    0x8(%ebp),%ebx
086dbe0a +0x01a:  mov    0xc(%ebp),%eax
086dbe0d +0x01d:  movl   $0x0,0x10(%ebx)
086dbe14 +0x024:  mov    %eax,(%ebx)
086dbe16 +0x026:  xor    %eax,%eax
086dbe18 +0x028:  movl   $0x1c,0x8(%ebx)
086dbe1f +0x02f:  mov    %ecx,0x4(%ebx)
086dbe22 +0x032:  mov    %edx,0xc(%ebx)
086dbe25 +0x035:  jmp    086dbe2e <+0x3e>
086dbe27 +0x037:  nop
086dbe28 +0x038:  mov    0x4(%ebx),%ecx
086dbe2b +0x03b:  mov    0xc(%ebx),%edx
086dbe2e +0x03e:  movl   $0x0,(%edx,%eax,4)
086dbe35 +0x045:  movl   $0x0,(%ecx,%eax,4)
086dbe3c +0x04c:  add    $0x1,%eax
086dbe3f +0x04f:  cmp    %eax,%esi
086dbe41 +0x051:  ja     086dbe28 <+0x38>
086dbe43 +0x053:  movl   $&_ZN12_GLOBAL__N_18name_vecE,0x10(%ebx)
086dbe4a +0x05a:  movl   $&_ZN12_GLOBAL__N_16name_cE,&_ZN12_GLOBAL__N_18name_vecE
086dbe54 +0x064:  call   086dad90 <_ZNSt6locale5facet13_S_get_c_nameEv>  ; std::locale::facet::_S_get_c_name()
086dbe59 +0x069:  mov    0x10(%ebx),%edx
086dbe5c +0x06c:  movzwl (%eax),%eax
086dbe5f +0x06f:  mov    (%edx),%edx
086dbe61 +0x071:  mov    %ax,(%edx)
086dbe64 +0x074:  mov    0x10(%ebx),%edx
086dbe67 +0x077:  mov    $0x1,%eax
086dbe6c +0x07c:  lea    0x0(%esi,%eiz,1),%esi
086dbe70 +0x080:  movl   $0x0,(%edx,%eax,4)
086dbe77 +0x087:  add    $0x1,%eax
086dbe7a +0x08a:  cmp    $0xc,%eax
086dbe7d +0x08d:  jne    086dbe70 <+0x80>
086dbe7f +0x08f:  movl   $0x1,0xc(%esp)
086dbe87 +0x097:  movl   $0x0,0x8(%esp)
086dbe8f +0x09f:  movl   $0x0,0x4(%esp)
086dbe97 +0x0a7:  movl   $&_ZN12_GLOBAL__N_17ctype_cE,(%esp)
086dbe9e +0x0ae:  call   08726ba0 <_ZNSt5ctypeIcEC1EPKtbj>  ; std::ctype<char>::ctype(unsigned short const*, bool, unsigned int)
086dbea3 +0x0b3:  movl   $&_ZN12_GLOBAL__N_17ctype_cE,0x8(%esp)
086dbeab +0x0bb:  movl   $&_ZNSt5ctypeIcE2idE,0x4(%esp)
086dbeb3 +0x0c3:  mov    %ebx,(%esp)
086dbeb6 +0x0c6:  call   086db600 <_ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE>  ; std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)
086dbebb +0x0cb:  movl   $0x1,0x4(%esp)
086dbec3 +0x0d3:  movl   $&_ZN12_GLOBAL__N_19codecvt_cE,(%esp)
086dbeca +0x0da:  call   08726230 <_ZNSt7codecvtIcc11__mbstate_tEC1Ej>  ; std::codecvt<char, char, __mbstate_t>::codecvt(unsigned int)
086dbecf +0x0df:  movl   $&_ZN12_GLOBAL__N_19codecvt_cE,0x8(%esp)
086dbed7 +0x0e7:  movl   $&_ZNSt7codecvtIcc11__mbstate_tE2idE,0x4(%esp)
086dbedf +0x0ef:  mov    %ebx,(%esp)
086dbee2 +0x0f2:  call   086db600 <_ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE>  ; std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)
086dbee7 +0x0f7:  movl   $0x1,&_ZN12_GLOBAL__N_116numpunct_cache_cE+0x4
086dbef1 +0x101:  movl   $&_ZTVSt16__numpunct_cacheIcE+0x8,&_ZN12_GLOBAL__N_116numpunct_cache_cE
086dbefb +0x10b:  movl   $0x0,&_ZN12_GLOBAL__N_116numpunct_cache_cE+0x8
086dbf05 +0x115:  movl   $0x0,&_ZN12_GLOBAL__N_116numpunct_cache_cE+0xc
086dbf0f +0x11f:  movb   $0x0,&_ZN12_GLOBAL__N_116numpunct_cache_cE+0x10
086dbf16 +0x126:  movl   $0x0,&_ZN12_GLOBAL__N_116numpunct_cache_cE+0x14
086dbf20 +0x130:  movl   $0x0,&_ZN12_GLOBAL__N_116numpunct_cache_cE+0x18
086dbf2a +0x13a:  movl   $0x0,&_ZN12_GLOBAL__N_116numpunct_cache_cE+0x1c
086dbf34 +0x144:  movl   $0x0,&_ZN12_GLOBAL__N_116numpunct_cache_cE+0x20
086dbf3e +0x14e:  movb   $0x0,&_ZN12_GLOBAL__N_116numpunct_cache_cE+0x24
086dbf45 +0x155:  movb   $0x0,&_ZN12_GLOBAL__N_116numpunct_cache_cE+0x25
086dbf4c +0x15c:  movb   $0x0,&_ZN12_GLOBAL__N_116numpunct_cache_cE+0x64
086dbf53 +0x163:  movl   $0x1,&_ZN12_GLOBAL__N_110numpunct_cE+0x4
086dbf5d +0x16d:  movl   $&_ZTVSt8numpunctIcE+0x8,&_ZN12_GLOBAL__N_110numpunct_cE
086dbf67 +0x177:  movl   $&_ZN12_GLOBAL__N_116numpunct_cache_cE,&_ZN12_GLOBAL__N_110numpunct_cE+0x8
086dbf71 +0x181:  movl   $0x0,0x4(%esp)
086dbf79 +0x189:  movl   $&_ZN12_GLOBAL__N_110numpunct_cE,(%esp)
086dbf80 +0x190:  call   087212d0 <_ZNSt8numpunctIcE22_M_initialize_numpunctEP15__locale_struct>  ; std::numpunct<char>::_M_initialize_numpunct(__locale_struct*)
086dbf85 +0x195:  movl   $&_ZN12_GLOBAL__N_110numpunct_cE,0x8(%esp)
086dbf8d +0x19d:  movl   $&_ZNSt8numpunctIcE2idE,0x4(%esp)
086dbf95 +0x1a5:  mov    %ebx,(%esp)
086dbf98 +0x1a8:  call   086db600 <_ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE>  ; std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)
086dbf9d +0x1ad:  movl   $0x1,&_ZN12_GLOBAL__N_19num_get_cE+0x4
086dbfa7 +0x1b7:  movl   $&_ZTVSt7num_getIcSt19istreambuf_iteratorIcSt11char_traitsIcEEE+0x8,&_ZN12_GLOBAL__N_19num_get_cE
086dbfb1 +0x1c1:  movl   $&_ZN12_GLOBAL__N_19num_get_cE,0x8(%esp)
086dbfb9 +0x1c9:  movl   $&_ZNSt7num_getIcSt19istreambuf_iteratorIcSt11char_traitsIcEEE2idE,0x4(%esp)
086dbfc1 +0x1d1:  mov    %ebx,(%esp)
086dbfc4 +0x1d4:  call   086db600 <_ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE>  ; std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)
086dbfc9 +0x1d9:  movl   $0x1,&_ZN12_GLOBAL__N_19num_put_cE+0x4
086dbfd3 +0x1e3:  movl   $&_ZTVSt7num_putIcSt19ostreambuf_iteratorIcSt11char_traitsIcEEE+0x8,&_ZN12_GLOBAL__N_19num_put_cE
086dbfdd +0x1ed:  movl   $&_ZN12_GLOBAL__N_19num_put_cE,0x8(%esp)
086dbfe5 +0x1f5:  movl   $&_ZNSt7num_putIcSt19ostreambuf_iteratorIcSt11char_traitsIcEEE2idE,0x4(%esp)
086dbfed +0x1fd:  mov    %ebx,(%esp)
086dbff0 +0x200:  call   086db600 <_ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE>  ; std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)
086dbff5 +0x205:  movl   $0x1,&_ZN12_GLOBAL__N_19collate_cE+0x4
086dbfff +0x20f:  movl   $&_ZTVSt7collateIcE+0x8,&_ZN12_GLOBAL__N_19collate_cE
086dc009 +0x219:  call   086daf40 <_ZNSt6locale5facet15_S_get_c_localeEv>  ; std::locale::facet::_S_get_c_locale()
086dc00e +0x21e:  mov    %eax,&_ZN12_GLOBAL__N_19collate_cE+0x8
086dc013 +0x223:  movl   $&_ZN12_GLOBAL__N_19collate_cE,0x8(%esp)
086dc01b +0x22b:  movl   $&_ZNSt7collateIcE2idE,0x4(%esp)
086dc023 +0x233:  mov    %ebx,(%esp)
086dc026 +0x236:  call   086db600 <_ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE>  ; std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)
086dc02b +0x23b:  movl   $0x1,&_ZN12_GLOBAL__N_119moneypunct_cache_cfE+0x4
086dc035 +0x245:  movl   $&_ZTVSt18__moneypunct_cacheIcLb0EE+0x8,&_ZN12_GLOBAL__N_119moneypunct_cache_cfE
086dc03f +0x24f:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_cfE+0x8
086dc049 +0x259:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_cfE+0xc
086dc053 +0x263:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_cfE+0x10
086dc05a +0x26a:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_cfE+0x11
086dc061 +0x271:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_cfE+0x12
086dc068 +0x278:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_cfE+0x14
086dc072 +0x282:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_cfE+0x18
086dc07c +0x28c:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_cfE+0x1c
086dc086 +0x296:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_cfE+0x20
086dc090 +0x2a0:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_cfE+0x24
086dc09a +0x2aa:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_cfE+0x28
086dc0a4 +0x2b4:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_cfE+0x2c
086dc0ae +0x2be:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_cfE+0x30
086dc0b5 +0x2c5:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_cfE+0x31
086dc0bc +0x2cc:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_cfE+0x32
086dc0c3 +0x2d3:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_cfE+0x33
086dc0ca +0x2da:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_cfE+0x34
086dc0d1 +0x2e1:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_cfE+0x35
086dc0d8 +0x2e8:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_cfE+0x36
086dc0df +0x2ef:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_cfE+0x37
086dc0e6 +0x2f6:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_cfE+0x43
086dc0ed +0x2fd:  movl   $0x1,&_ZN12_GLOBAL__N_113moneypunct_cfE+0x4
086dc0f7 +0x307:  movl   $&_ZTVSt10moneypunctIcLb0EE+0x8,&_ZN12_GLOBAL__N_113moneypunct_cfE
086dc101 +0x311:  movl   $&_ZN12_GLOBAL__N_119moneypunct_cache_cfE,&_ZN12_GLOBAL__N_113moneypunct_cfE+0x8
086dc10b +0x31b:  movl   $0x0,0x8(%esp)
086dc113 +0x323:  movl   $0x0,0x4(%esp)
086dc11b +0x32b:  movl   $&_ZN12_GLOBAL__N_113moneypunct_cfE,(%esp)
086dc122 +0x332:  call   0871feb0 <_ZNSt10moneypunctIcLb0EE24_M_initialize_moneypunctEP15__locale_structPKc>  ; std::moneypunct<char, false>::_M_initialize_moneypunct(__locale_struct*, char const*)
086dc127 +0x337:  movl   $&_ZN12_GLOBAL__N_113moneypunct_cfE,0x8(%esp)
086dc12f +0x33f:  movl   $&_ZNSt10moneypunctIcLb0EE2idE,0x4(%esp)
086dc137 +0x347:  mov    %ebx,(%esp)
086dc13a +0x34a:  call   086db600 <_ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE>  ; std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)
086dc13f +0x34f:  movl   $0x1,&_ZN12_GLOBAL__N_119moneypunct_cache_ctE+0x4
086dc149 +0x359:  movl   $&_ZTVSt18__moneypunct_cacheIcLb1EE+0x8,&_ZN12_GLOBAL__N_119moneypunct_cache_ctE
086dc153 +0x363:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_ctE+0x8
086dc15d +0x36d:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_ctE+0xc
086dc167 +0x377:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_ctE+0x10
086dc16e +0x37e:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_ctE+0x11
086dc175 +0x385:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_ctE+0x12
086dc17c +0x38c:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_ctE+0x14
086dc186 +0x396:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_ctE+0x18
086dc190 +0x3a0:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_ctE+0x1c
086dc19a +0x3aa:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_ctE+0x20
086dc1a4 +0x3b4:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_ctE+0x24
086dc1ae +0x3be:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_ctE+0x28
086dc1b8 +0x3c8:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_ctE+0x2c
086dc1c2 +0x3d2:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_ctE+0x30
086dc1c9 +0x3d9:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_ctE+0x31
086dc1d0 +0x3e0:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_ctE+0x32
086dc1d7 +0x3e7:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_ctE+0x33
086dc1de +0x3ee:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_ctE+0x34
086dc1e5 +0x3f5:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_ctE+0x35
086dc1ec +0x3fc:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_ctE+0x36
086dc1f3 +0x403:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_ctE+0x37
086dc1fa +0x40a:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_ctE+0x43
086dc201 +0x411:  movl   $0x1,&_ZN12_GLOBAL__N_113moneypunct_ctE+0x4
086dc20b +0x41b:  movl   $&_ZTVSt10moneypunctIcLb1EE+0x8,&_ZN12_GLOBAL__N_113moneypunct_ctE
086dc215 +0x425:  movl   $&_ZN12_GLOBAL__N_119moneypunct_cache_ctE,&_ZN12_GLOBAL__N_113moneypunct_ctE+0x8
086dc21f +0x42f:  movl   $0x0,0x8(%esp)
086dc227 +0x437:  movl   $0x0,0x4(%esp)
086dc22f +0x43f:  movl   $&_ZN12_GLOBAL__N_113moneypunct_ctE,(%esp)
086dc236 +0x446:  call   08720220 <_ZNSt10moneypunctIcLb1EE24_M_initialize_moneypunctEP15__locale_structPKc>  ; std::moneypunct<char, true>::_M_initialize_moneypunct(__locale_struct*, char const*)
086dc23b +0x44b:  movl   $&_ZN12_GLOBAL__N_113moneypunct_ctE,0x8(%esp)
086dc243 +0x453:  movl   $&_ZNSt10moneypunctIcLb1EE2idE,0x4(%esp)
086dc24b +0x45b:  mov    %ebx,(%esp)
086dc24e +0x45e:  call   086db600 <_ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE>  ; std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)
086dc253 +0x463:  movl   $0x1,&_ZN12_GLOBAL__N_111money_get_cE+0x4
086dc25d +0x46d:  movl   $&_ZTVSt9money_getIcSt19istreambuf_iteratorIcSt11char_traitsIcEEE+0x8,&_ZN12_GLOBAL__N_111money_get_cE
086dc267 +0x477:  movl   $&_ZN12_GLOBAL__N_111money_get_cE,0x8(%esp)
086dc26f +0x47f:  movl   $&_ZNSt9money_getIcSt19istreambuf_iteratorIcSt11char_traitsIcEEE2idE,0x4(%esp)
086dc277 +0x487:  mov    %ebx,(%esp)
086dc27a +0x48a:  call   086db600 <_ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE>  ; std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)
086dc27f +0x48f:  movl   $0x1,&_ZN12_GLOBAL__N_111money_put_cE+0x4
086dc289 +0x499:  movl   $&_ZTVSt9money_putIcSt19ostreambuf_iteratorIcSt11char_traitsIcEEE+0x8,&_ZN12_GLOBAL__N_111money_put_cE
086dc293 +0x4a3:  movl   $&_ZN12_GLOBAL__N_111money_put_cE,0x8(%esp)
086dc29b +0x4ab:  movl   $&_ZNSt9money_putIcSt19ostreambuf_iteratorIcSt11char_traitsIcEEE2idE,0x4(%esp)
086dc2a3 +0x4b3:  mov    %ebx,(%esp)
086dc2a6 +0x4b6:  call   086db600 <_ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE>  ; std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)
086dc2ab +0x4bb:  movl   $0x1,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x4
086dc2b5 +0x4c5:  movl   $&_ZTVSt17__timepunct_cacheIcE+0x8,&_ZN12_GLOBAL__N_117timepunct_cache_cE
086dc2bf +0x4cf:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x8
086dc2c9 +0x4d9:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0xc
086dc2d3 +0x4e3:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x10
086dc2dd +0x4ed:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x14
086dc2e7 +0x4f7:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x18
086dc2f1 +0x501:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x1c
086dc2fb +0x50b:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x20
086dc305 +0x515:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x24
086dc30f +0x51f:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x28
086dc319 +0x529:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x2c
086dc323 +0x533:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x30
086dc32d +0x53d:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x34
086dc337 +0x547:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x38
086dc341 +0x551:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x3c
086dc34b +0x55b:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x40
086dc355 +0x565:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x44
086dc35f +0x56f:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x48
086dc369 +0x579:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x4c
086dc373 +0x583:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x50
086dc37d +0x58d:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x54
086dc387 +0x597:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x58
086dc391 +0x5a1:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x5c
086dc39b +0x5ab:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x60
086dc3a5 +0x5b5:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x64
086dc3af +0x5bf:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x68
086dc3b9 +0x5c9:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x6c
086dc3c3 +0x5d3:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x70
086dc3cd +0x5dd:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x74
086dc3d7 +0x5e7:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x78
086dc3e1 +0x5f1:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x7c
086dc3eb +0x5fb:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x80
086dc3f5 +0x605:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x84
086dc3ff +0x60f:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x88
086dc409 +0x619:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x8c
086dc413 +0x623:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x90
086dc41d +0x62d:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x94
086dc427 +0x637:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x98
086dc431 +0x641:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0x9c
086dc43b +0x64b:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0xa0
086dc445 +0x655:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0xa4
086dc44f +0x65f:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0xa8
086dc459 +0x669:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0xac
086dc463 +0x673:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0xb0
086dc46d +0x67d:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0xb4
086dc477 +0x687:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0xb8
086dc481 +0x691:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0xbc
086dc48b +0x69b:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0xc0
086dc495 +0x6a5:  movb   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_cE+0xc4
086dc49c +0x6ac:  movl   $0x1,0x8(%esp)
086dc4a4 +0x6b4:  movl   $&_ZN12_GLOBAL__N_117timepunct_cache_cE,0x4(%esp)
086dc4ac +0x6bc:  movl   $&_ZN12_GLOBAL__N_111timepunct_cE,(%esp)
086dc4b3 +0x6c3:  call   086ebac0 <_GLOBAL__I_locale_inst.cc+0x1780>  ; global constructors keyed to locale_inst.cc+0x1780
086dc4b8 +0x6c8:  movl   $&_ZN12_GLOBAL__N_111timepunct_cE,0x8(%esp)
086dc4c0 +0x6d0:  movl   $&_ZNSt11__timepunctIcE2idE,0x4(%esp)
086dc4c8 +0x6d8:  mov    %ebx,(%esp)
086dc4cb +0x6db:  call   086db600 <_ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE>  ; std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)
086dc4d0 +0x6e0:  movl   $0x1,&_ZN12_GLOBAL__N_110time_get_cE+0x4
086dc4da +0x6ea:  movl   $&_ZTVSt8time_getIcSt19istreambuf_iteratorIcSt11char_traitsIcEEE+0x8,&_ZN12_GLOBAL__N_110time_get_cE
086dc4e4 +0x6f4:  movl   $&_ZN12_GLOBAL__N_110time_get_cE,0x8(%esp)
086dc4ec +0x6fc:  movl   $&_ZNSt8time_getIcSt19istreambuf_iteratorIcSt11char_traitsIcEEE2idE,0x4(%esp)
086dc4f4 +0x704:  mov    %ebx,(%esp)
086dc4f7 +0x707:  call   086db600 <_ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE>  ; std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)
086dc4fc +0x70c:  movl   $0x1,&_ZN12_GLOBAL__N_110time_put_cE+0x4
086dc506 +0x716:  movl   $&_ZTVSt8time_putIcSt19ostreambuf_iteratorIcSt11char_traitsIcEEE+0x8,&_ZN12_GLOBAL__N_110time_put_cE
086dc510 +0x720:  movl   $&_ZN12_GLOBAL__N_110time_put_cE,0x8(%esp)
086dc518 +0x728:  movl   $&_ZNSt8time_putIcSt19ostreambuf_iteratorIcSt11char_traitsIcEEE2idE,0x4(%esp)
086dc520 +0x730:  mov    %ebx,(%esp)
086dc523 +0x733:  call   086db600 <_ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE>  ; std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)
086dc528 +0x738:  movl   $0x1,0x4(%esp)
086dc530 +0x740:  movl   $&_ZN12_GLOBAL__N_110messages_cE,(%esp)
086dc537 +0x747:  call   086eb780 <_GLOBAL__I_locale_inst.cc+0x1440>  ; global constructors keyed to locale_inst.cc+0x1440
086dc53c +0x74c:  movl   $&_ZN12_GLOBAL__N_110messages_cE,0x8(%esp)
086dc544 +0x754:  movl   $&_ZNSt8messagesIcE2idE,0x4(%esp)
086dc54c +0x75c:  mov    %ebx,(%esp)
086dc54f +0x75f:  call   086db600 <_ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE>  ; std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)
086dc554 +0x764:  movl   $0x1,0x4(%esp)
086dc55c +0x76c:  movl   $&_ZN12_GLOBAL__N_17ctype_wE,(%esp)
086dc563 +0x773:  call   087268b0 <_ZNSt5ctypeIwEC1Ej>  ; std::ctype<wchar_t>::ctype(unsigned int)
086dc568 +0x778:  movl   $&_ZN12_GLOBAL__N_17ctype_wE,0x8(%esp)
086dc570 +0x780:  movl   $&_ZNSt5ctypeIwE2idE,0x4(%esp)
086dc578 +0x788:  mov    %ebx,(%esp)
086dc57b +0x78b:  call   086db600 <_ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE>  ; std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)
086dc580 +0x790:  movl   $0x1,0x4(%esp)
086dc588 +0x798:  movl   $&_ZN12_GLOBAL__N_19codecvt_wE,(%esp)
086dc58f +0x79f:  call   087261e0 <_ZNSt7codecvtIwc11__mbstate_tEC1Ej>  ; std::codecvt<wchar_t, char, __mbstate_t>::codecvt(unsigned int)
086dc594 +0x7a4:  movl   $&_ZN12_GLOBAL__N_19codecvt_wE,0x8(%esp)
086dc59c +0x7ac:  movl   $&_ZNSt7codecvtIwc11__mbstate_tE2idE,0x4(%esp)
086dc5a4 +0x7b4:  mov    %ebx,(%esp)
086dc5a7 +0x7b7:  call   086db600 <_ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE>  ; std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)
086dc5ac +0x7bc:  movl   $0x1,&_ZN12_GLOBAL__N_116numpunct_cache_wE+0x4
086dc5b6 +0x7c6:  movl   $&_ZTVSt16__numpunct_cacheIwE+0x8,&_ZN12_GLOBAL__N_116numpunct_cache_wE
086dc5c0 +0x7d0:  movl   $0x0,&_ZN12_GLOBAL__N_116numpunct_cache_wE+0x8
086dc5ca +0x7da:  movl   $0x0,&_ZN12_GLOBAL__N_116numpunct_cache_wE+0xc
086dc5d4 +0x7e4:  movb   $0x0,&_ZN12_GLOBAL__N_116numpunct_cache_wE+0x10
086dc5db +0x7eb:  movl   $0x0,&_ZN12_GLOBAL__N_116numpunct_cache_wE+0x14
086dc5e5 +0x7f5:  movl   $0x0,&_ZN12_GLOBAL__N_116numpunct_cache_wE+0x18
086dc5ef +0x7ff:  movl   $0x0,&_ZN12_GLOBAL__N_116numpunct_cache_wE+0x1c
086dc5f9 +0x809:  movl   $0x0,&_ZN12_GLOBAL__N_116numpunct_cache_wE+0x20
086dc603 +0x813:  movl   $0x0,&_ZN12_GLOBAL__N_116numpunct_cache_wE+0x24
086dc60d +0x81d:  movl   $0x0,&_ZN12_GLOBAL__N_116numpunct_cache_wE+0x28
086dc617 +0x827:  movb   $0x0,&_ZN12_GLOBAL__N_116numpunct_cache_wE+0x124
086dc61e +0x82e:  movl   $0x1,&_ZN12_GLOBAL__N_110numpunct_wE+0x4
086dc628 +0x838:  movl   $&_ZTVSt8numpunctIwE+0x8,&_ZN12_GLOBAL__N_110numpunct_wE
086dc632 +0x842:  movl   $&_ZN12_GLOBAL__N_116numpunct_cache_wE,&_ZN12_GLOBAL__N_110numpunct_wE+0x8
086dc63c +0x84c:  movl   $0x0,0x4(%esp)
086dc644 +0x854:  movl   $&_ZN12_GLOBAL__N_110numpunct_wE,(%esp)
086dc64b +0x85b:  call   08721150 <_ZNSt8numpunctIwE22_M_initialize_numpunctEP15__locale_struct>  ; std::numpunct<wchar_t>::_M_initialize_numpunct(__locale_struct*)
086dc650 +0x860:  movl   $&_ZN12_GLOBAL__N_110numpunct_wE,0x8(%esp)
086dc658 +0x868:  movl   $&_ZNSt8numpunctIwE2idE,0x4(%esp)
086dc660 +0x870:  mov    %ebx,(%esp)
086dc663 +0x873:  call   086db600 <_ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE>  ; std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)
086dc668 +0x878:  movl   $0x1,&_ZN12_GLOBAL__N_19num_get_wE+0x4
086dc672 +0x882:  movl   $&_ZTVSt7num_getIwSt19istreambuf_iteratorIwSt11char_traitsIwEEE+0x8,&_ZN12_GLOBAL__N_19num_get_wE
086dc67c +0x88c:  movl   $&_ZN12_GLOBAL__N_19num_get_wE,0x8(%esp)
086dc684 +0x894:  movl   $&_ZNSt7num_getIwSt19istreambuf_iteratorIwSt11char_traitsIwEEE2idE,0x4(%esp)
086dc68c +0x89c:  mov    %ebx,(%esp)
086dc68f +0x89f:  call   086db600 <_ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE>  ; std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)
086dc694 +0x8a4:  movl   $0x1,&_ZN12_GLOBAL__N_19num_put_wE+0x4
086dc69e +0x8ae:  movl   $&_ZTVSt7num_putIwSt19ostreambuf_iteratorIwSt11char_traitsIwEEE+0x8,&_ZN12_GLOBAL__N_19num_put_wE
086dc6a8 +0x8b8:  movl   $&_ZN12_GLOBAL__N_19num_put_wE,0x8(%esp)
086dc6b0 +0x8c0:  movl   $&_ZNSt7num_putIwSt19ostreambuf_iteratorIwSt11char_traitsIwEEE2idE,0x4(%esp)
086dc6b8 +0x8c8:  mov    %ebx,(%esp)
086dc6bb +0x8cb:  call   086db600 <_ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE>  ; std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)
086dc6c0 +0x8d0:  movl   $0x1,&_ZN12_GLOBAL__N_19collate_wE+0x4
086dc6ca +0x8da:  movl   $&_ZTVSt7collateIwE+0x8,&_ZN12_GLOBAL__N_19collate_wE
086dc6d4 +0x8e4:  call   086daf40 <_ZNSt6locale5facet15_S_get_c_localeEv>  ; std::locale::facet::_S_get_c_locale()
086dc6d9 +0x8e9:  mov    %eax,&_ZN12_GLOBAL__N_19collate_wE+0x8
086dc6de +0x8ee:  movl   $&_ZN12_GLOBAL__N_19collate_wE,0x8(%esp)
086dc6e6 +0x8f6:  movl   $&_ZNSt7collateIwE2idE,0x4(%esp)
086dc6ee +0x8fe:  mov    %ebx,(%esp)
086dc6f1 +0x901:  call   086db600 <_ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE>  ; std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)
086dc6f6 +0x906:  movl   $0x1,&_ZN12_GLOBAL__N_119moneypunct_cache_wfE+0x4
086dc700 +0x910:  movl   $&_ZTVSt18__moneypunct_cacheIwLb0EE+0x8,&_ZN12_GLOBAL__N_119moneypunct_cache_wfE
086dc70a +0x91a:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wfE+0x8
086dc714 +0x924:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wfE+0xc
086dc71e +0x92e:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wfE+0x10
086dc725 +0x935:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wfE+0x14
086dc72f +0x93f:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wfE+0x18
086dc739 +0x949:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wfE+0x1c
086dc743 +0x953:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wfE+0x20
086dc74d +0x95d:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wfE+0x24
086dc757 +0x967:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wfE+0x28
086dc761 +0x971:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wfE+0x2c
086dc76b +0x97b:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wfE+0x30
086dc775 +0x985:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wfE+0x34
086dc77f +0x98f:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wfE+0x38
086dc786 +0x996:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wfE+0x39
086dc78d +0x99d:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wfE+0x3a
086dc794 +0x9a4:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wfE+0x3b
086dc79b +0x9ab:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wfE+0x3c
086dc7a2 +0x9b2:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wfE+0x3d
086dc7a9 +0x9b9:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wfE+0x3e
086dc7b0 +0x9c0:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wfE+0x3f
086dc7b7 +0x9c7:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wfE+0x6c
086dc7be +0x9ce:  movl   $0x1,&_ZN12_GLOBAL__N_113moneypunct_wfE+0x4
086dc7c8 +0x9d8:  movl   $&_ZTVSt10moneypunctIwLb0EE+0x8,&_ZN12_GLOBAL__N_113moneypunct_wfE
086dc7d2 +0x9e2:  movl   $&_ZN12_GLOBAL__N_119moneypunct_cache_wfE,&_ZN12_GLOBAL__N_113moneypunct_wfE+0x8
086dc7dc +0x9ec:  movl   $0x0,0x8(%esp)
086dc7e4 +0x9f4:  movl   $0x0,0x4(%esp)
086dc7ec +0x9fc:  movl   $&_ZN12_GLOBAL__N_113moneypunct_wfE,(%esp)
086dc7f3 +0xa03:  call   08720590 <_ZNSt10moneypunctIwLb0EE24_M_initialize_moneypunctEP15__locale_structPKc>  ; std::moneypunct<wchar_t, false>::_M_initialize_moneypunct(__locale_struct*, char const*)
086dc7f8 +0xa08:  movl   $&_ZN12_GLOBAL__N_113moneypunct_wfE,0x8(%esp)
086dc800 +0xa10:  movl   $&_ZNSt10moneypunctIwLb0EE2idE,0x4(%esp)
086dc808 +0xa18:  mov    %ebx,(%esp)
086dc80b +0xa1b:  call   086db600 <_ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE>  ; std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)
086dc810 +0xa20:  movl   $0x1,&_ZN12_GLOBAL__N_119moneypunct_cache_wtE+0x4
086dc81a +0xa2a:  movl   $&_ZTVSt18__moneypunct_cacheIwLb1EE+0x8,&_ZN12_GLOBAL__N_119moneypunct_cache_wtE
086dc824 +0xa34:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wtE+0x8
086dc82e +0xa3e:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wtE+0xc
086dc838 +0xa48:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wtE+0x10
086dc83f +0xa4f:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wtE+0x14
086dc849 +0xa59:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wtE+0x18
086dc853 +0xa63:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wtE+0x1c
086dc85d +0xa6d:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wtE+0x20
086dc867 +0xa77:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wtE+0x24
086dc871 +0xa81:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wtE+0x28
086dc87b +0xa8b:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wtE+0x2c
086dc885 +0xa95:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wtE+0x30
086dc88f +0xa9f:  movl   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wtE+0x34
086dc899 +0xaa9:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wtE+0x38
086dc8a0 +0xab0:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wtE+0x39
086dc8a7 +0xab7:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wtE+0x3a
086dc8ae +0xabe:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wtE+0x3b
086dc8b5 +0xac5:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wtE+0x3c
086dc8bc +0xacc:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wtE+0x3d
086dc8c3 +0xad3:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wtE+0x3e
086dc8ca +0xada:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wtE+0x3f
086dc8d1 +0xae1:  movb   $0x0,&_ZN12_GLOBAL__N_119moneypunct_cache_wtE+0x6c
086dc8d8 +0xae8:  movl   $0x1,&_ZN12_GLOBAL__N_113moneypunct_wtE+0x4
086dc8e2 +0xaf2:  movl   $&_ZTVSt10moneypunctIwLb1EE+0x8,&_ZN12_GLOBAL__N_113moneypunct_wtE
086dc8ec +0xafc:  movl   $&_ZN12_GLOBAL__N_119moneypunct_cache_wtE,&_ZN12_GLOBAL__N_113moneypunct_wtE+0x8
086dc8f6 +0xb06:  movl   $0x0,0x8(%esp)
086dc8fe +0xb0e:  movl   $0x0,0x4(%esp)
086dc906 +0xb16:  movl   $&_ZN12_GLOBAL__N_113moneypunct_wtE,(%esp)
086dc90d +0xb1d:  call   08720b00 <_ZNSt10moneypunctIwLb1EE24_M_initialize_moneypunctEP15__locale_structPKc>  ; std::moneypunct<wchar_t, true>::_M_initialize_moneypunct(__locale_struct*, char const*)
086dc912 +0xb22:  movl   $&_ZN12_GLOBAL__N_113moneypunct_wtE,0x8(%esp)
086dc91a +0xb2a:  movl   $&_ZNSt10moneypunctIwLb1EE2idE,0x4(%esp)
086dc922 +0xb32:  mov    %ebx,(%esp)
086dc925 +0xb35:  call   086db600 <_ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE>  ; std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)
086dc92a +0xb3a:  movl   $0x1,&_ZN12_GLOBAL__N_111money_get_wE+0x4
086dc934 +0xb44:  movl   $&_ZTVSt9money_getIwSt19istreambuf_iteratorIwSt11char_traitsIwEEE+0x8,&_ZN12_GLOBAL__N_111money_get_wE
086dc93e +0xb4e:  movl   $&_ZN12_GLOBAL__N_111money_get_wE,0x8(%esp)
086dc946 +0xb56:  movl   $&_ZNSt9money_getIwSt19istreambuf_iteratorIwSt11char_traitsIwEEE2idE,0x4(%esp)
086dc94e +0xb5e:  mov    %ebx,(%esp)
086dc951 +0xb61:  call   086db600 <_ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE>  ; std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)
086dc956 +0xb66:  movl   $0x1,&_ZN12_GLOBAL__N_111money_put_wE+0x4
086dc960 +0xb70:  movl   $&_ZTVSt9money_putIwSt19ostreambuf_iteratorIwSt11char_traitsIwEEE+0x8,&_ZN12_GLOBAL__N_111money_put_wE
086dc96a +0xb7a:  movl   $&_ZN12_GLOBAL__N_111money_put_wE,0x8(%esp)
086dc972 +0xb82:  movl   $&_ZNSt9money_putIwSt19ostreambuf_iteratorIwSt11char_traitsIwEEE2idE,0x4(%esp)
086dc97a +0xb8a:  mov    %ebx,(%esp)
086dc97d +0xb8d:  call   086db600 <_ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE>  ; std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)
086dc982 +0xb92:  movl   $0x1,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x4
086dc98c +0xb9c:  movl   $&_ZTVSt17__timepunct_cacheIwE+0x8,&_ZN12_GLOBAL__N_117timepunct_cache_wE
086dc996 +0xba6:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x8
086dc9a0 +0xbb0:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0xc
086dc9aa +0xbba:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x10
086dc9b4 +0xbc4:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x14
086dc9be +0xbce:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x18
086dc9c8 +0xbd8:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x1c
086dc9d2 +0xbe2:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x20
086dc9dc +0xbec:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x24
086dc9e6 +0xbf6:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x28
086dc9f0 +0xc00:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x2c
086dc9fa +0xc0a:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x30
086dca04 +0xc14:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x34
086dca0e +0xc1e:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x38
086dca18 +0xc28:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x3c
086dca22 +0xc32:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x40
086dca2c +0xc3c:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x44
086dca36 +0xc46:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x48
086dca40 +0xc50:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x4c
086dca4a +0xc5a:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x50
086dca54 +0xc64:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x54
086dca5e +0xc6e:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x58
086dca68 +0xc78:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x5c
086dca72 +0xc82:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x60
086dca7c +0xc8c:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x64
086dca86 +0xc96:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x68
086dca90 +0xca0:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x6c
086dca9a +0xcaa:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x70
086dcaa4 +0xcb4:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x74
086dcaae +0xcbe:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x78
086dcab8 +0xcc8:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x7c
086dcac2 +0xcd2:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x80
086dcacc +0xcdc:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x84
086dcad6 +0xce6:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x88
086dcae0 +0xcf0:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x8c
086dcaea +0xcfa:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x90
086dcaf4 +0xd04:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x94
086dcafe +0xd0e:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x98
086dcb08 +0xd18:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0x9c
086dcb12 +0xd22:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0xa0
086dcb1c +0xd2c:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0xa4
086dcb26 +0xd36:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0xa8
086dcb30 +0xd40:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0xac
086dcb3a +0xd4a:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0xb0
086dcb44 +0xd54:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0xb4
086dcb4e +0xd5e:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0xb8
086dcb58 +0xd68:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0xbc
086dcb62 +0xd72:  movl   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0xc0
086dcb6c +0xd7c:  movb   $0x0,&_ZN12_GLOBAL__N_117timepunct_cache_wE+0xc4
086dcb73 +0xd83:  movl   $0x1,0x8(%esp)
086dcb7b +0xd8b:  movl   $&_ZN12_GLOBAL__N_117timepunct_cache_wE,0x4(%esp)
086dcb83 +0xd93:  movl   $&_ZN12_GLOBAL__N_111timepunct_wE,(%esp)
086dcb8a +0xd9a:  call   0870cbc0 <_GLOBAL__I_wlocale_inst.cc+0x1ad0>  ; global constructors keyed to wlocale_inst.cc+0x1ad0
086dcb8f +0xd9f:  movl   $&_ZN12_GLOBAL__N_111timepunct_wE,0x8(%esp)
086dcb97 +0xda7:  movl   $&_ZNSt11__timepunctIwE2idE,0x4(%esp)
086dcb9f +0xdaf:  mov    %ebx,(%esp)
086dcba2 +0xdb2:  call   086db600 <_ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE>  ; std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)
086dcba7 +0xdb7:  movl   $0x1,&_ZN12_GLOBAL__N_110time_get_wE+0x4
086dcbb1 +0xdc1:  movl   $&_ZTVSt8time_getIwSt19istreambuf_iteratorIwSt11char_traitsIwEEE+0x8,&_ZN12_GLOBAL__N_110time_get_wE
086dcbbb +0xdcb:  movl   $&_ZN12_GLOBAL__N_110time_get_wE,0x8(%esp)
086dcbc3 +0xdd3:  movl   $&_ZNSt8time_getIwSt19istreambuf_iteratorIwSt11char_traitsIwEEE2idE,0x4(%esp)
086dcbcb +0xddb:  mov    %ebx,(%esp)
086dcbce +0xdde:  call   086db600 <_ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE>  ; std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)
086dcbd3 +0xde3:  movl   $0x1,&_ZN12_GLOBAL__N_110time_put_wE+0x4
086dcbdd +0xded:  movl   $&_ZTVSt8time_putIwSt19ostreambuf_iteratorIwSt11char_traitsIwEEE+0x8,&_ZN12_GLOBAL__N_110time_put_wE
086dcbe7 +0xdf7:  movl   $&_ZN12_GLOBAL__N_110time_put_wE,0x8(%esp)
086dcbef +0xdff:  movl   $&_ZNSt8time_putIwSt19ostreambuf_iteratorIwSt11char_traitsIwEEE2idE,0x4(%esp)
086dcbf7 +0xe07:  mov    %ebx,(%esp)
086dcbfa +0xe0a:  call   086db600 <_ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE>  ; std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)
086dcbff +0xe0f:  movl   $0x1,0x4(%esp)
086dcc07 +0xe17:  movl   $&_ZN12_GLOBAL__N_110messages_wE,(%esp)
086dcc0e +0xe1e:  call   0870c640 <_GLOBAL__I_wlocale_inst.cc+0x1550>  ; global constructors keyed to wlocale_inst.cc+0x1550
086dcc13 +0xe23:  movl   $&_ZN12_GLOBAL__N_110messages_wE,0x8(%esp)
086dcc1b +0xe2b:  movl   $&_ZNSt8messagesIwE2idE,0x4(%esp)
086dcc23 +0xe33:  mov    %ebx,(%esp)
086dcc26 +0xe36:  call   086db600 <_ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE>  ; std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)
086dcc2b +0xe3b:  mov    0xc(%ebx),%esi
086dcc2e +0xe3e:  movl   $&_ZNSt8numpunctIcE2idE,(%esp)
086dcc35 +0xe45:  call   086dadb0 <_ZNKSt6locale2id5_M_idEv>  ; std::locale::id::_M_id() const
086dcc3a +0xe4a:  movl   $&_ZN12_GLOBAL__N_116numpunct_cache_cE,(%esi,%eax,4)
086dcc41 +0xe51:  mov    0xc(%ebx),%esi
086dcc44 +0xe54:  movl   $&_ZNSt10moneypunctIcLb0EE2idE,(%esp)
086dcc4b +0xe5b:  call   086dadb0 <_ZNKSt6locale2id5_M_idEv>  ; std::locale::id::_M_id() const
086dcc50 +0xe60:  movl   $&_ZN12_GLOBAL__N_119moneypunct_cache_cfE,(%esi,%eax,4)
086dcc57 +0xe67:  mov    0xc(%ebx),%esi
086dcc5a +0xe6a:  movl   $&_ZNSt10moneypunctIcLb1EE2idE,(%esp)
086dcc61 +0xe71:  call   086dadb0 <_ZNKSt6locale2id5_M_idEv>  ; std::locale::id::_M_id() const
086dcc66 +0xe76:  movl   $&_ZN12_GLOBAL__N_119moneypunct_cache_ctE,(%esi,%eax,4)
086dcc6d +0xe7d:  mov    0xc(%ebx),%esi
086dcc70 +0xe80:  movl   $&_ZNSt11__timepunctIcE2idE,(%esp)
086dcc77 +0xe87:  call   086dadb0 <_ZNKSt6locale2id5_M_idEv>  ; std::locale::id::_M_id() const
086dcc7c +0xe8c:  movl   $&_ZN12_GLOBAL__N_117timepunct_cache_cE,(%esi,%eax,4)
086dcc83 +0xe93:  mov    0xc(%ebx),%esi
086dcc86 +0xe96:  movl   $&_ZNSt8numpunctIwE2idE,(%esp)
086dcc8d +0xe9d:  call   086dadb0 <_ZNKSt6locale2id5_M_idEv>  ; std::locale::id::_M_id() const
086dcc92 +0xea2:  movl   $&_ZN12_GLOBAL__N_116numpunct_cache_wE,(%esi,%eax,4)
086dcc99 +0xea9:  mov    0xc(%ebx),%esi
086dcc9c +0xeac:  movl   $&_ZNSt10moneypunctIwLb0EE2idE,(%esp)
086dcca3 +0xeb3:  call   086dadb0 <_ZNKSt6locale2id5_M_idEv>  ; std::locale::id::_M_id() const
086dcca8 +0xeb8:  movl   $&_ZN12_GLOBAL__N_119moneypunct_cache_wfE,(%esi,%eax,4)
086dccaf +0xebf:  mov    0xc(%ebx),%esi
086dccb2 +0xec2:  movl   $&_ZNSt10moneypunctIwLb1EE2idE,(%esp)
086dccb9 +0xec9:  call   086dadb0 <_ZNKSt6locale2id5_M_idEv>  ; std::locale::id::_M_id() const
086dccbe +0xece:  movl   $&_ZN12_GLOBAL__N_119moneypunct_cache_wtE,(%esi,%eax,4)
086dccc5 +0xed5:  mov    0xc(%ebx),%ebx
086dccc8 +0xed8:  movl   $&_ZNSt11__timepunctIwE2idE,(%esp)
086dcccf +0xedf:  call   086dadb0 <_ZNKSt6locale2id5_M_idEv>  ; std::locale::id::_M_id() const
086dccd4 +0xee4:  movl   $&_ZN12_GLOBAL__N_117timepunct_cache_wE,(%ebx,%eax,4)
086dccdb +0xeeb:  add    $0x10,%esp
086dccde +0xeee:  pop    %ebx
086dccdf +0xeef:  pop    %esi
086dcce0 +0xef0:  pop    %ebp
086dcce1 +0xef1:  ret
086dcce2 +0xef2:  mov    %eax,%ebx
086dcce4 +0xef4:  mov    %edx,%esi
086dcce6 +0xef6:  cmp    $0xffffffff,%esi
086dcce9 +0xef9:  je     086dcdb4 <+0xfc4>
086dccef +0xeff:  mov    %ebx,(%esp)
086dccf2 +0xf02:  call   08ae3750 <_Unwind_Resume>
086dccf7 +0xf07:  jmp    086dcce2 <+0xef2>
086dccf9 +0xf09:  jmp    086dcce2 <+0xef2>
086dccfb +0xf0b:  nop
086dccfc +0xf0c:  lea    0x0(%esi,%eiz,1),%esi
086dcd00 +0xf10:  jmp    086dcce2 <+0xef2>
086dcd02 +0xf12:  mov    %eax,%ebx
086dcd04 +0xf14:  mov    %edx,%esi
086dcd06 +0xf16:  movl   $&_ZN12_GLOBAL__N_113moneypunct_ctE,(%esp)
086dcd0d +0xf1d:  call   086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
086dcd12 +0xf22:  jmp    086dcce6 <+0xef6>
086dcd14 +0xf24:  mov    %eax,%ebx
086dcd16 +0xf26:  mov    %edx,%esi
086dcd18 +0xf28:  movl   $&_ZN12_GLOBAL__N_113moneypunct_cfE,(%esp)
086dcd1f +0xf2f:  call   086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
086dcd24 +0xf34:  jmp    086dcce6 <+0xef6>
086dcd26 +0xf36:  mov    %eax,%ebx
086dcd28 +0xf38:  mov    %edx,%esi
086dcd2a +0xf3a:  movl   $&_ZN12_GLOBAL__N_19collate_cE,(%esp)
086dcd31 +0xf41:  call   086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
086dcd36 +0xf46:  jmp    086dcce6 <+0xef6>
086dcd38 +0xf48:  mov    %eax,%ebx
086dcd3a +0xf4a:  mov    %edx,%esi
086dcd3c +0xf4c:  movl   $&_ZN12_GLOBAL__N_110numpunct_cE,(%esp)
086dcd43 +0xf53:  call   086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
086dcd48 +0xf58:  jmp    086dcce6 <+0xef6>
086dcd4a +0xf5a:  jmp    086dcce2 <+0xef2>
086dcd4c +0xf5c:  lea    0x0(%esi,%eiz,1),%esi
086dcd50 +0xf60:  jmp    086dcce2 <+0xef2>
086dcd52 +0xf62:  mov    %eax,%ebx
086dcd54 +0xf64:  mov    %edx,%esi
086dcd56 +0xf66:  movl   $&_ZN12_GLOBAL__N_19collate_wE,(%esp)
086dcd5d +0xf6d:  call   086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
086dcd62 +0xf72:  jmp    086dcce6 <+0xef6>
086dcd64 +0xf74:  mov    %eax,%ebx
086dcd66 +0xf76:  mov    %edx,%esi
086dcd68 +0xf78:  movl   $&_ZN12_GLOBAL__N_110numpunct_wE,(%esp)
086dcd6f +0xf7f:  call   086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
086dcd74 +0xf84:  jmp    086dcce6 <+0xef6>
086dcd79 +0xf89:  jmp    086dcce2 <+0xef2>
086dcd7e +0xf8e:  xchg   %ax,%ax
086dcd80 +0xf90:  jmp    086dcce2 <+0xef2>
086dcd85 +0xf95:  mov    %eax,%ebx
086dcd87 +0xf97:  mov    %edx,%esi
086dcd89 +0xf99:  movl   $&_ZN12_GLOBAL__N_113moneypunct_wtE,(%esp)
086dcd90 +0xfa0:  call   086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
086dcd95 +0xfa5:  jmp    086dcce6 <+0xef6>
086dcd9a +0xfaa:  mov    %eax,%ebx
086dcd9c +0xfac:  mov    %edx,%esi
086dcd9e +0xfae:  movl   $&_ZN12_GLOBAL__N_113moneypunct_wfE,(%esp)
086dcda5 +0xfb5:  call   086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
086dcdaa +0xfba:  jmp    086dcce6 <+0xef6>
086dcdaf +0xfbf:  jmp    086dcce2 <+0xef2>
086dcdb4 +0xfc4:  mov    %ebx,(%esp)
086dcdb7 +0xfc7:  call   08723df0 <__cxa_call_unexpected>
086dcdbc +0xfcc:  nop
086dcdbd +0xfcd:  nop
086dcdbe +0xfce:  nop
086dcdbf +0xfcf:  nop
```

## 反编译 C

```c
// std::locale::_Impl::_Impl @ 0x86dbdf0

/* std::locale::_Impl::_Impl(unsigned int) */

void __thiscall std::locale::_Impl::_Impl(_Impl *this,uint param_1)

{
  char **ppcVar1;
  uint uVar2;
  undefined2 *puVar3;
  int iVar4;
  facet **ppfVar5;
  facet **ppfVar6;
  
  ppfVar5 = (facet **)&::(anonymous_namespace)::facet_vec;
  ppfVar6 = (facet **)&::(anonymous_namespace)::cache_vec;
  this->_M_names = (char **)0x0;
  this->_M_refcount = param_1;
  uVar2 = 0;
  this->_M_facets_size = 0x1c;
  this->_M_facets = (facet **)&::(anonymous_namespace)::facet_vec;
  this->_M_caches = (facet **)&::(anonymous_namespace)::cache_vec;
  while( true ) {
    ppfVar6[uVar2] = (facet *)0x0;
    ppfVar5[uVar2] = (facet *)0x0;
    uVar2 = uVar2 + 1;
    if (0x1b < uVar2) break;
    ppfVar5 = this->_M_facets;
    ppfVar6 = this->_M_caches;
  }
  this->_M_names = (char **)&::(anonymous_namespace)::name_vec;
  ::(anonymous_namespace)::name_vec = &::(anonymous_namespace)::name_c;
                    /* try { // try from 086dbe54 to 086dbe58 has its CatchHandler @ 086dcce2 */
  puVar3 = (undefined2 *)facet::_S_get_c_name();
  *(undefined2 *)*this->_M_names = *puVar3;
  ppcVar1 = this->_M_names;
  iVar4 = 1;
  do {
    ppcVar1[iVar4] = (char *)0x0;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0xc);
                    /* try { // try from 086dbe9e to 086dbea2 has its CatchHandler @ 086dcd4c */
  ctype<char>::ctype((ctype<char> *)::(anonymous_namespace)::ctype_c,(ushort *)0x0,false,1);
                    /* try { // try from 086dbeb6 to 086dbeba has its CatchHandler @ 086dcce2 */
  _M_install_facet(this,(id *)&ctype<char>::id,(facet *)::(anonymous_namespace)::ctype_c);
                    /* try { // try from 086dbeca to 086dbece has its CatchHandler @ 086dcd4a */
  codecvt<char,char,__mbstate_t>::codecvt
            ((codecvt<char,char,__mbstate_t> *)::(anonymous_namespace)::codecvt_c,1);
                    /* try { // try from 086dbee2 to 086dbee6 has its CatchHandler @ 086dcce2 */
  _M_install_facet(this,(id *)&codecvt<char,char,__mbstate_t>::id,
                   (facet *)::(anonymous_namespace)::codecvt_c);
  ::(anonymous_namespace)::numpunct_cache_c._4_4_ = 1;
  ::(anonymous_namespace)::numpunct_cache_c._0_4_ = &PTR____numpunct_cache_08cfef08;
  ::(anonymous_namespace)::numpunct_cache_c._8_4_ = 0;
  ::(anonymous_namespace)::numpunct_cache_c._12_4_ = 0;
  ::(anonymous_namespace)::numpunct_cache_c[0x10] = 0;
  ::(anonymous_namespace)::numpunct_cache_c._20_4_ = 0;
  ::(anonymous_namespace)::numpunct_cache_c._24_4_ = 0;
  ::(anonymous_namespace)::numpunct_cache_c._28_4_ = 0;
  ::(anonymous_namespace)::numpunct_cache_c._32_4_ = 0;
  ::(anonymous_namespace)::numpunct_cache_c[0x24] = 0;
  ::(anonymous_namespace)::numpunct_cache_c[0x25] = 0;
  ::(anonymous_namespace)::numpunct_cache_c[100] = 0;
  ::(anonymous_namespace)::numpunct_c._4_4_ = 1;
  ::(anonymous_namespace)::numpunct_c._0_4_ = &PTR__numpunct_08cff2c8;
  ::(anonymous_namespace)::numpunct_c._8_4_ = ::(anonymous_namespace)::numpunct_cache_c;
                    /* try { // try from 086dbf80 to 086dbf84 has its CatchHandler @ 086dcd38 */
  numpunct<char>::_M_initialize_numpunct
            ((numpunct<char> *)::(anonymous_namespace)::numpunct_c,(__locale_struct *)0x0);
                    /* try { // try from 086dbf98 to 086dbff4 has its CatchHandler @ 086dcce2 */
  _M_install_facet(this,(id *)&numpunct<char>::id,(facet *)::(anonymous_namespace)::numpunct_c);
  ::(anonymous_namespace)::num_get_c._4_4_ = 1;
  ::(anonymous_namespace)::num_get_c._0_4_ = &PTR__num_get_08cff248;
  _M_install_facet(this,(id *)&num_get<char,std::istreambuf_iterator<char,std::char_traits<char>>>::
                               id,(facet *)&::(anonymous_namespace)::num_get_c);
  ::(anonymous_namespace)::num_put_c._4_4_ = 1;
  ::(anonymous_namespace)::num_put_c._0_4_ = &PTR__num_put_08cff208;
  _M_install_facet(this,(id *)&num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>>>::
                               id,(facet *)&::(anonymous_namespace)::num_put_c);
  ::(anonymous_namespace)::collate_c._4_4_ = 1;
  ::(anonymous_namespace)::collate_c._0_4_ = &PTR__collate_08cff310;
                    /* try { // try from 086dc009 to 086dc00d has its CatchHandler @ 086dcd26 */
  ::(anonymous_namespace)::collate_c._8_4_ = facet::_S_get_c_locale();
                    /* try { // try from 086dc026 to 086dc02a has its CatchHandler @ 086dcce2 */
  _M_install_facet(this,(id *)&collate<char>::id,(facet *)::(anonymous_namespace)::collate_c);
  ::(anonymous_namespace)::moneypunct_cache_cf._4_4_ = 1;
  ::(anonymous_namespace)::moneypunct_cache_cf._0_4_ = &PTR____moneypunct_cache_08cfef28;
  ::(anonymous_namespace)::moneypunct_cache_cf._8_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_cf._12_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_cf[0x10] = 0;
  ::(anonymous_namespace)::moneypunct_cache_cf[0x11] = 0;
  ::(anonymous_namespace)::moneypunct_cache_cf[0x12] = 0;
  ::(anonymous_namespace)::moneypunct_cache_cf._20_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_cf._24_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_cf._28_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_cf._32_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_cf._36_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_cf._40_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_cf._44_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_cf[0x30] = 0;
  ::(anonymous_namespace)::moneypunct_cache_cf[0x31] = 0;
  ::(anonymous_namespace)::moneypunct_cache_cf[0x32] = 0;
  ::(anonymous_namespace)::moneypunct_cache_cf[0x33] = 0;
  ::(anonymous_namespace)::moneypunct_cache_cf[0x34] = 0;
  ::(anonymous_namespace)::moneypunct_cache_cf[0x35] = 0;
  ::(anonymous_namespace)::moneypunct_cache_cf[0x36] = 0;
  ::(anonymous_namespace)::moneypunct_cache_cf[0x37] = 0;
  ::(anonymous_namespace)::moneypunct_cache_cf[0x43] = 0;
  ::(anonymous_namespace)::moneypunct_cf._4_4_ = 1;
  ::(anonymous_namespace)::moneypunct_cf._0_4_ = &PTR__moneypunct_08cff168;
  ::(anonymous_namespace)::moneypunct_cf._8_4_ = ::(anonymous_namespace)::moneypunct_cache_cf;
                    /* try { // try from 086dc122 to 086dc126 has its CatchHandler @ 086dcd14 */
  moneypunct<char,false>::_M_initialize_moneypunct
            ((__locale_struct *)::(anonymous_namespace)::moneypunct_cf,(char *)0x0);
                    /* try { // try from 086dc13a to 086dc13e has its CatchHandler @ 086dcce2 */
  _M_install_facet(this,(id *)&moneypunct<char,false>::id,
                   (facet *)::(anonymous_namespace)::moneypunct_cf);
  ::(anonymous_namespace)::moneypunct_cache_ct._4_4_ = 1;
  ::(anonymous_namespace)::moneypunct_cache_ct._0_4_ = &PTR____moneypunct_cache_08cfef18;
  ::(anonymous_namespace)::moneypunct_cache_ct._8_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_ct._12_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_ct[0x10] = 0;
  ::(anonymous_namespace)::moneypunct_cache_ct[0x11] = 0;
  ::(anonymous_namespace)::moneypunct_cache_ct[0x12] = 0;
  ::(anonymous_namespace)::moneypunct_cache_ct._20_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_ct._24_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_ct._28_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_ct._32_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_ct._36_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_ct._40_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_ct._44_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_ct[0x30] = 0;
  ::(anonymous_namespace)::moneypunct_cache_ct[0x31] = 0;
  ::(anonymous_namespace)::moneypunct_cache_ct[0x32] = 0;
  ::(anonymous_namespace)::moneypunct_cache_ct[0x33] = 0;
  ::(anonymous_namespace)::moneypunct_cache_ct[0x34] = 0;
  ::(anonymous_namespace)::moneypunct_cache_ct[0x35] = 0;
  ::(anonymous_namespace)::moneypunct_cache_ct[0x36] = 0;
  ::(anonymous_namespace)::moneypunct_cache_ct[0x37] = 0;
  ::(anonymous_namespace)::moneypunct_cache_ct[0x43] = 0;
  ::(anonymous_namespace)::moneypunct_ct._4_4_ = 1;
  ::(anonymous_namespace)::moneypunct_ct._0_4_ = &PTR__moneypunct_08cff1a8;
  ::(anonymous_namespace)::moneypunct_ct._8_4_ = ::(anonymous_namespace)::moneypunct_cache_ct;
                    /* try { // try from 086dc236 to 086dc23a has its CatchHandler @ 086dcd02 */
  moneypunct<char,true>::_M_initialize_moneypunct
            ((__locale_struct *)::(anonymous_namespace)::moneypunct_ct,(char *)0x0);
                    /* try { // try from 086dc24e to 086dc2aa has its CatchHandler @ 086dcce2 */
  _M_install_facet(this,(id *)&moneypunct<char,true>::id,
                   (facet *)::(anonymous_namespace)::moneypunct_ct);
  ::(anonymous_namespace)::money_get_c._4_4_ = 1;
  ::(anonymous_namespace)::money_get_c._0_4_ = &PTR__money_get_08cff018;
  _M_install_facet(this,(id *)&money_get<char,std::istreambuf_iterator<char,std::char_traits<char>>>
                               ::id,(facet *)&::(anonymous_namespace)::money_get_c);
  ::(anonymous_namespace)::money_put_c._4_4_ = 1;
  ::(anonymous_namespace)::money_put_c._0_4_ = &PTR__money_put_08cff000;
  _M_install_facet(this,(id *)&money_put<char,std::ostreambuf_iterator<char,std::char_traits<char>>>
                               ::id,(facet *)&::(anonymous_namespace)::money_put_c);
  ::(anonymous_namespace)::timepunct_cache_c._4_4_ = 1;
  ::(anonymous_namespace)::timepunct_cache_c._0_4_ = &PTR____timepunct_cache_08cff1f0;
  ::(anonymous_namespace)::timepunct_cache_c._8_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._12_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._16_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._20_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._24_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._28_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._32_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._36_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._40_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._44_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._48_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._52_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._56_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._60_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._64_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._68_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._72_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._76_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._80_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._84_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._88_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._92_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._96_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._100_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._104_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._108_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._112_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._116_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._120_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._124_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._128_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._132_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._136_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._140_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._144_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._148_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._152_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._156_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._160_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._164_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._168_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._172_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._176_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._180_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._184_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._188_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c._192_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_c[0xc4] = 0;
                    /* try { // try from 086dc4b3 to 086dc4b7 has its CatchHandler @ 086dccfb */
  __timepunct<char>::__timepunct
            ((__timepunct<char> *)::(anonymous_namespace)::timepunct_c,
             (__timepunct_cache *)::(anonymous_namespace)::timepunct_cache_c,1);
                    /* try { // try from 086dc4cb to 086dc527 has its CatchHandler @ 086dcce2 */
  _M_install_facet(this,(id *)&__timepunct<char>::id,(facet *)::(anonymous_namespace)::timepunct_c);
  ::(anonymous_namespace)::time_get_c._4_4_ = 1;
  ::(anonymous_namespace)::time_get_c._0_4_ = &PTR__time_get_08cfefa8;
  _M_install_facet(this,(id *)&time_get<char,std::istreambuf_iterator<char,std::char_traits<char>>>
                               ::id,(facet *)&::(anonymous_namespace)::time_get_c);
  ::(anonymous_namespace)::time_put_c._4_4_ = 1;
  ::(anonymous_namespace)::time_put_c._0_4_ = &PTR__time_put_08cfefe8;
  _M_install_facet(this,(id *)&time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>>>
                               ::id,(facet *)&::(anonymous_namespace)::time_put_c);
                    /* try { // try from 086dc537 to 086dc53b has its CatchHandler @ 086dccf9 */
  messages<char>::messages((messages<char> *)::(anonymous_namespace)::messages_c,1);
                    /* try { // try from 086dc54f to 086dc553 has its CatchHandler @ 086dcce2 */
  _M_install_facet(this,(id *)&messages<char>::id,(facet *)::(anonymous_namespace)::messages_c);
                    /* try { // try from 086dc563 to 086dc567 has its CatchHandler @ 086dcd7e */
  ctype<wchar_t>::ctype((ctype<wchar_t> *)::(anonymous_namespace)::ctype_w,1);
                    /* try { // try from 086dc57b to 086dc57f has its CatchHandler @ 086dcce2 */
  _M_install_facet(this,(id *)&ctype<wchar_t>::id,(facet *)::(anonymous_namespace)::ctype_w);
                    /* try { // try from 086dc58f to 086dc593 has its CatchHandler @ 086dcd79 */
  codecvt<wchar_t,char,__mbstate_t>::codecvt
            ((codecvt<wchar_t,char,__mbstate_t> *)::(anonymous_namespace)::codecvt_w,1);
                    /* try { // try from 086dc5a7 to 086dc5ab has its CatchHandler @ 086dcce2 */
  _M_install_facet(this,(id *)&codecvt<wchar_t,char,__mbstate_t>::id,
                   (facet *)::(anonymous_namespace)::codecvt_w);
  ::(anonymous_namespace)::numpunct_cache_w._4_4_ = 1;
  ::(anonymous_namespace)::numpunct_cache_w._0_4_ = &PTR____numpunct_cache_08d00698;
  ::(anonymous_namespace)::numpunct_cache_w._8_4_ = 0;
  ::(anonymous_namespace)::numpunct_cache_w._12_4_ = 0;
  ::(anonymous_namespace)::numpunct_cache_w[0x10] = 0;
  ::(anonymous_namespace)::numpunct_cache_w._20_4_ = 0;
  ::(anonymous_namespace)::numpunct_cache_w._24_4_ = 0;
  ::(anonymous_namespace)::numpunct_cache_w._28_4_ = 0;
  ::(anonymous_namespace)::numpunct_cache_w._32_4_ = 0;
  ::(anonymous_namespace)::numpunct_cache_w._36_4_ = 0;
  ::(anonymous_namespace)::numpunct_cache_w._40_4_ = 0;
  ::(anonymous_namespace)::numpunct_cache_w[0x124] = 0;
  ::(anonymous_namespace)::numpunct_w._4_4_ = 1;
  ::(anonymous_namespace)::numpunct_w._0_4_ = &PTR__numpunct_08d00a48;
  ::(anonymous_namespace)::numpunct_w._8_4_ = ::(anonymous_namespace)::numpunct_cache_w;
                    /* try { // try from 086dc64b to 086dc64f has its CatchHandler @ 086dcd64 */
  numpunct<wchar_t>::_M_initialize_numpunct
            ((numpunct<wchar_t> *)::(anonymous_namespace)::numpunct_w,(__locale_struct *)0x0);
                    /* try { // try from 086dc663 to 086dc6bf has its CatchHandler @ 086dcce2 */
  _M_install_facet(this,(id *)&numpunct<wchar_t>::id,(facet *)::(anonymous_namespace)::numpunct_w);
  ::(anonymous_namespace)::num_get_w._4_4_ = 1;
  ::(anonymous_namespace)::num_get_w._0_4_ = &PTR__num_get_08d009c8;
  _M_install_facet(this,(id *)&num_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>
                               ::id,(facet *)&::(anonymous_namespace)::num_get_w);
  ::(anonymous_namespace)::num_put_w._4_4_ = 1;
  ::(anonymous_namespace)::num_put_w._0_4_ = &PTR__num_put_08d00988;
  _M_install_facet(this,(id *)&num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>
                               ::id,(facet *)&::(anonymous_namespace)::num_put_w);
  ::(anonymous_namespace)::collate_w._4_4_ = 1;
  ::(anonymous_namespace)::collate_w._0_4_ = &PTR__collate_08d00ae8;
                    /* try { // try from 086dc6d4 to 086dc6d8 has its CatchHandler @ 086dcd52 */
  ::(anonymous_namespace)::collate_w._8_4_ = facet::_S_get_c_locale();
                    /* try { // try from 086dc6f1 to 086dc6f5 has its CatchHandler @ 086dcce2 */
  _M_install_facet(this,(id *)&collate<wchar_t>::id,(facet *)::(anonymous_namespace)::collate_w);
  ::(anonymous_namespace)::moneypunct_cache_wf._4_4_ = 1;
  ::(anonymous_namespace)::moneypunct_cache_wf._0_4_ = &PTR____moneypunct_cache_08d006b8;
  ::(anonymous_namespace)::moneypunct_cache_wf._8_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wf._12_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wf[0x10] = 0;
  ::(anonymous_namespace)::moneypunct_cache_wf._20_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wf._24_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wf._28_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wf._32_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wf._36_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wf._40_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wf._44_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wf._48_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wf._52_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wf[0x38] = 0;
  ::(anonymous_namespace)::moneypunct_cache_wf[0x39] = 0;
  ::(anonymous_namespace)::moneypunct_cache_wf[0x3a] = 0;
  ::(anonymous_namespace)::moneypunct_cache_wf[0x3b] = 0;
  ::(anonymous_namespace)::moneypunct_cache_wf[0x3c] = 0;
  ::(anonymous_namespace)::moneypunct_cache_wf[0x3d] = 0;
  ::(anonymous_namespace)::moneypunct_cache_wf[0x3e] = 0;
  ::(anonymous_namespace)::moneypunct_cache_wf[0x3f] = 0;
  ::(anonymous_namespace)::moneypunct_cache_wf[0x6c] = 0;
  ::(anonymous_namespace)::moneypunct_wf._4_4_ = 1;
  ::(anonymous_namespace)::moneypunct_wf._0_4_ = &PTR__moneypunct_08d008e8;
  ::(anonymous_namespace)::moneypunct_wf._8_4_ = ::(anonymous_namespace)::moneypunct_cache_wf;
                    /* try { // try from 086dc7f3 to 086dc7f7 has its CatchHandler @ 086dcd9a */
  moneypunct<wchar_t,false>::_M_initialize_moneypunct
            ((__locale_struct *)::(anonymous_namespace)::moneypunct_wf,(char *)0x0);
                    /* try { // try from 086dc80b to 086dc80f has its CatchHandler @ 086dcce2 */
  _M_install_facet(this,(id *)&moneypunct<wchar_t,false>::id,
                   (facet *)::(anonymous_namespace)::moneypunct_wf);
  ::(anonymous_namespace)::moneypunct_cache_wt._4_4_ = 1;
  ::(anonymous_namespace)::moneypunct_cache_wt._0_4_ = &PTR____moneypunct_cache_08d006a8;
  ::(anonymous_namespace)::moneypunct_cache_wt._8_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wt._12_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wt[0x10] = 0;
  ::(anonymous_namespace)::moneypunct_cache_wt._20_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wt._24_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wt._28_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wt._32_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wt._36_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wt._40_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wt._44_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wt._48_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wt._52_4_ = 0;
  ::(anonymous_namespace)::moneypunct_cache_wt[0x38] = 0;
  ::(anonymous_namespace)::moneypunct_cache_wt[0x39] = 0;
  ::(anonymous_namespace)::moneypunct_cache_wt[0x3a] = 0;
  ::(anonymous_namespace)::moneypunct_cache_wt[0x3b] = 0;
  ::(anonymous_namespace)::moneypunct_cache_wt[0x3c] = 0;
  ::(anonymous_namespace)::moneypunct_cache_wt[0x3d] = 0;
  ::(anonymous_namespace)::moneypunct_cache_wt[0x3e] = 0;
  ::(anonymous_namespace)::moneypunct_cache_wt[0x3f] = 0;
  ::(anonymous_namespace)::moneypunct_cache_wt[0x6c] = 0;
  ::(anonymous_namespace)::moneypunct_wt._4_4_ = 1;
  ::(anonymous_namespace)::moneypunct_wt._0_4_ = &PTR__moneypunct_08d00928;
  ::(anonymous_namespace)::moneypunct_wt._8_4_ = ::(anonymous_namespace)::moneypunct_cache_wt;
                    /* try { // try from 086dc90d to 086dc911 has its CatchHandler @ 086dcd85 */
  moneypunct<wchar_t,true>::_M_initialize_moneypunct
            ((__locale_struct *)::(anonymous_namespace)::moneypunct_wt,(char *)0x0);
                    /* try { // try from 086dc925 to 086dc981 has its CatchHandler @ 086dcce2 */
  _M_install_facet(this,(id *)&moneypunct<wchar_t,true>::id,
                   (facet *)::(anonymous_namespace)::moneypunct_wt);
  ::(anonymous_namespace)::money_get_w._4_4_ = 1;
  ::(anonymous_namespace)::money_get_w._0_4_ = &PTR__money_get_08d00798;
  _M_install_facet(this,(id *)&money_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>
                               ::id,(facet *)&::(anonymous_namespace)::money_get_w);
  ::(anonymous_namespace)::money_put_w._4_4_ = 1;
  ::(anonymous_namespace)::money_put_w._0_4_ = &PTR__money_put_08d00780;
  _M_install_facet(this,(id *)&money_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>
                               ::id,(facet *)&::(anonymous_namespace)::money_put_w);
  ::(anonymous_namespace)::timepunct_cache_w._4_4_ = 1;
  ::(anonymous_namespace)::timepunct_cache_w._0_4_ = &PTR____timepunct_cache_08d00970;
  ::(anonymous_namespace)::timepunct_cache_w._8_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._12_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._16_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._20_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._24_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._28_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._32_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._36_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._40_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._44_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._48_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._52_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._56_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._60_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._64_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._68_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._72_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._76_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._80_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._84_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._88_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._92_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._96_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._100_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._104_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._108_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._112_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._116_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._120_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._124_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._128_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._132_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._136_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._140_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._144_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._148_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._152_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._156_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._160_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._164_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._168_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._172_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._176_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._180_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._184_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._188_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w._192_4_ = 0;
  ::(anonymous_namespace)::timepunct_cache_w[0xc4] = 0;
                    /* try { // try from 086dcb8a to 086dcb8e has its CatchHandler @ 086dcdaf */
  __timepunct<wchar_t>::__timepunct
            ((__timepunct<wchar_t> *)::(anonymous_namespace)::timepunct_w,
             (__timepunct_cache *)::(anonymous_namespace)::timepunct_cache_w,1);
                    /* try { // try from 086dcba2 to 086dcbfe has its CatchHandler @ 086dcce2 */
  _M_install_facet(this,(id *)&__timepunct<wchar_t>::id,
                   (facet *)::(anonymous_namespace)::timepunct_w);
  ::(anonymous_namespace)::time_get_w._4_4_ = 1;
  ::(anonymous_namespace)::time_get_w._0_4_ = &PTR__time_get_08d00728;
  _M_install_facet(this,(id *)&time_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>
                               ::id,(facet *)&::(anonymous_namespace)::time_get_w);
  ::(anonymous_namespace)::time_put_w._4_4_ = 1;
  ::(anonymous_namespace)::time_put_w._0_4_ = &PTR__time_put_08d00768;
  _M_install_facet(this,(id *)&time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>
                               ::id,(facet *)&::(anonymous_namespace)::time_put_w);
                    /* try { // try from 086dcc0e to 086dcc12 has its CatchHandler @ 086dccf7 */
  messages<wchar_t>::messages((messages<wchar_t> *)::(anonymous_namespace)::messages_w,1);
                    /* try { // try from 086dcc26 to 086dccd3 has its CatchHandler @ 086dcce2 */
  _M_install_facet(this,(id *)&messages<wchar_t>::id,(facet *)::(anonymous_namespace)::messages_w);
  ppfVar5 = this->_M_caches;
  iVar4 = locale::id::_M_id((id *)&numpunct<char>::id);
  ppfVar5[iVar4] = (facet *)::(anonymous_namespace)::numpunct_cache_c;
  ppfVar5 = this->_M_caches;
  iVar4 = locale::id::_M_id((id *)&moneypunct<char,false>::id);
  ppfVar5[iVar4] = (facet *)::(anonymous_namespace)::moneypunct_cache_cf;
  ppfVar5 = this->_M_caches;
  iVar4 = locale::id::_M_id((id *)&moneypunct<char,true>::id);
  ppfVar5[iVar4] = (facet *)::(anonymous_namespace)::moneypunct_cache_ct;
  ppfVar5 = this->_M_caches;
  iVar4 = locale::id::_M_id((id *)&__timepunct<char>::id);
  ppfVar5[iVar4] = (facet *)::(anonymous_namespace)::timepunct_cache_c;
  ppfVar5 = this->_M_caches;
  iVar4 = locale::id::_M_id((id *)&numpunct<wchar_t>::id);
  ppfVar5[iVar4] = (facet *)::(anonymous_namespace)::numpunct_cache_w;
  ppfVar5 = this->_M_caches;
  iVar4 = locale::id::_M_id((id *)&moneypunct<wchar_t,false>::id);
  ppfVar5[iVar4] = (facet *)::(anonymous_namespace)::moneypunct_cache_wf;
  ppfVar5 = this->_M_caches;
  iVar4 = locale::id::_M_id((id *)&moneypunct<wchar_t,true>::id);
  ppfVar5[iVar4] = (facet *)::(anonymous_namespace)::moneypunct_cache_wt;
  ppfVar5 = this->_M_caches;
  iVar4 = locale::id::_M_id((id *)&__timepunct<wchar_t>::id);
  ppfVar5[iVar4] = (facet *)::(anonymous_namespace)::timepunct_cache_w;
  return;
}
```

# sync_with_stdio

`_ZNSt8ios_base15sync_with_stdioEb`

`std::ios_base::sync_with_stdio(bool)`

| 类 | 地址 |
|---|---|
| `std::ios_base` | `0x086da9a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086da9a0  _ZNSt8ios_base15sync_with_stdioEb
#           std::ios_base::sync_with_stdio(bool)
# range [0x086da9a0, 0x086dac2f]
086da9a0 +0x000:  push   %ebp
086da9a1 +0x001:  mov    %esp,%ebp
086da9a3 +0x003:  push   %esi
086da9a4 +0x004:  push   %ebx
086da9a5 +0x005:  sub    $0x30,%esp
086da9a8 +0x008:  movzbl &_ZNSt8ios_base4Init20_S_synced_with_stdioE,%ebx
086da9af +0x00f:  cmpb   $0x0,0x8(%ebp)
086da9b3 +0x013:  jne    086da9b9 <+0x19>
086da9b5 +0x015:  test   %bl,%bl
086da9b7 +0x017:  jne    086da9c8 <+0x28>
086da9b9 +0x019:  add    $0x30,%esp
086da9bc +0x01c:  mov    %ebx,%eax
086da9be +0x01e:  pop    %ebx
086da9bf +0x01f:  pop    %esi
086da9c0 +0x020:  pop    %ebp
086da9c1 +0x021:  ret
086da9c2 +0x022:  lea    0x0(%esi),%esi
086da9c8 +0x028:  lea    -0x9(%ebp),%esi
086da9cb +0x02b:  mov    %esi,(%esp)
086da9ce +0x02e:  call   086da1e0 <_ZNSt8ios_base4InitC1Ev>  ; std::ios_base::Init::Init()
086da9d3 +0x033:  movb   $0x0,&_ZNSt8ios_base4Init20_S_synced_with_stdioE
086da9da +0x03a:  movl   $&_ZTVSt15basic_streambufIcSt11char_traitsIcEE+0x8,&_ZN14__gnu_internal13buf_cout_syncE
086da9e4 +0x044:  movl   $&_ZN14__gnu_internal13buf_cout_syncE+0x1c,(%esp)
086da9eb +0x04b:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
086da9f0 +0x050:  movl   $&_ZTVSt15basic_streambufIcSt11char_traitsIcEE+0x8,&_ZN14__gnu_internal12buf_cin_syncE
086da9fa +0x05a:  movl   $&_ZN14__gnu_internal12buf_cin_syncE+0x1c,(%esp)
086daa01 +0x061:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
086daa06 +0x066:  movl   $&_ZTVSt15basic_streambufIcSt11char_traitsIcEE+0x8,&_ZN14__gnu_internal13buf_cerr_syncE
086daa10 +0x070:  movl   $&_ZN14__gnu_internal13buf_cerr_syncE+0x1c,(%esp)
086daa17 +0x077:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
086daa1c +0x07c:  movl   $&_ZTVSt15basic_streambufIwSt11char_traitsIwEE+0x8,&_ZN14__gnu_internal14buf_wcout_syncE
086daa26 +0x086:  movl   $&_ZN14__gnu_internal14buf_wcout_syncE+0x1c,(%esp)
086daa2d +0x08d:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
086daa32 +0x092:  movl   $&_ZTVSt15basic_streambufIwSt11char_traitsIwEE+0x8,&_ZN14__gnu_internal13buf_wcin_syncE
086daa3c +0x09c:  movl   $&_ZN14__gnu_internal13buf_wcin_syncE+0x1c,(%esp)
086daa43 +0x0a3:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
086daa48 +0x0a8:  movl   $&_ZTVSt15basic_streambufIwSt11char_traitsIwEE+0x8,&_ZN14__gnu_internal14buf_wcerr_syncE
086daa52 +0x0b2:  movl   $&_ZN14__gnu_internal14buf_wcerr_syncE+0x1c,(%esp)
086daa59 +0x0b9:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
086daa5e +0x0be:  mov    &stdout,%eax
086daa63 +0x0c3:  movl   $0x2000,0xc(%esp)
086daa6b +0x0cb:  movl   $0x10,0x8(%esp)
086daa73 +0x0d3:  movl   $&_ZN14__gnu_internal8buf_coutE,(%esp)
086daa7a +0x0da:  mov    %eax,0x4(%esp)
086daa7e +0x0de:  call   086e0360 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x2c0>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x2c0
086daa83 +0x0e3:  mov    &stdin,%eax
086daa88 +0x0e8:  movl   $0x2000,0xc(%esp)
086daa90 +0x0f0:  movl   $0x8,0x8(%esp)
086daa98 +0x0f8:  movl   $&_ZN14__gnu_internal7buf_cinE,(%esp)
086daa9f +0x0ff:  mov    %eax,0x4(%esp)
086daaa3 +0x103:  call   086e0360 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x2c0>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x2c0
086daaa8 +0x108:  mov    &stderr,%eax
086daaad +0x10d:  movl   $0x2000,0xc(%esp)
086daab5 +0x115:  movl   $0x10,0x8(%esp)
086daabd +0x11d:  movl   $&_ZN14__gnu_internal8buf_cerrE,(%esp)
086daac4 +0x124:  mov    %eax,0x4(%esp)
086daac8 +0x128:  call   086e0360 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x2c0>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x2c0
086daacd +0x12d:  movl   $&_ZN14__gnu_internal8buf_coutE,0x4(%esp)
086daad5 +0x135:  movl   $&_ZSt4cout+0x4,(%esp)
086daadc +0x13c:  call   086e0de0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd40
086daae1 +0x141:  movl   $&_ZN14__gnu_internal7buf_cinE,0x4(%esp)
086daae9 +0x149:  movl   $&_ZSt3cin+0x8,(%esp)
086daaf0 +0x150:  call   086e0de0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd40
086daaf5 +0x155:  movl   $&_ZN14__gnu_internal8buf_cerrE,0x4(%esp)
086daafd +0x15d:  movl   $&_ZSt4cerr+0x4,(%esp)
086dab04 +0x164:  call   086e0de0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd40
086dab09 +0x169:  movl   $&_ZN14__gnu_internal8buf_cerrE,0x4(%esp)
086dab11 +0x171:  movl   $&_ZSt4clog+0x4,(%esp)
086dab18 +0x178:  call   086e0de0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd40
086dab1d +0x17d:  mov    &stdout,%eax
086dab22 +0x182:  movl   $0x2000,0xc(%esp)
086dab2a +0x18a:  movl   $0x10,0x8(%esp)
086dab32 +0x192:  movl   $&_ZN14__gnu_internal9buf_wcoutE,(%esp)
086dab39 +0x199:  mov    %eax,0x4(%esp)
086dab3d +0x19d:  call   086e0500 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x460>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x460
086dab42 +0x1a2:  mov    &stdin,%eax
086dab47 +0x1a7:  movl   $0x2000,0xc(%esp)
086dab4f +0x1af:  movl   $0x8,0x8(%esp)
086dab57 +0x1b7:  movl   $&_ZN14__gnu_internal8buf_wcinE,(%esp)
086dab5e +0x1be:  mov    %eax,0x4(%esp)
086dab62 +0x1c2:  call   086e0500 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x460>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x460
086dab67 +0x1c7:  mov    &stderr,%eax
086dab6c +0x1cc:  movl   $0x2000,0xc(%esp)
086dab74 +0x1d4:  movl   $0x10,0x8(%esp)
086dab7c +0x1dc:  movl   $&_ZN14__gnu_internal9buf_wcerrE,(%esp)
086dab83 +0x1e3:  mov    %eax,0x4(%esp)
086dab87 +0x1e7:  call   086e0500 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x460>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x460
086dab8c +0x1ec:  movl   $&_ZN14__gnu_internal9buf_wcoutE,0x4(%esp)
086dab94 +0x1f4:  movl   $&_ZSt5wcout+0x4,(%esp)
086dab9b +0x1fb:  call   086e0d30 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc90>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc90
086daba0 +0x200:  movl   $&_ZN14__gnu_internal8buf_wcinE,0x4(%esp)
086daba8 +0x208:  movl   $&_ZSt4wcin+0x8,(%esp)
086dabaf +0x20f:  call   086e0d30 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc90>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc90
086dabb4 +0x214:  movl   $&_ZN14__gnu_internal9buf_wcerrE,0x4(%esp)
086dabbc +0x21c:  movl   $&_ZSt5wcerr+0x4,(%esp)
086dabc3 +0x223:  call   086e0d30 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc90>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc90
086dabc8 +0x228:  movl   $&_ZN14__gnu_internal9buf_wcerrE,0x4(%esp)
086dabd0 +0x230:  movl   $&_ZSt5wclog+0x4,(%esp)
086dabd7 +0x237:  call   086e0d30 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xc90>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xc90
086dabdc +0x23c:  mov    %esi,(%esp)
086dabdf +0x23f:  call   086da140 <_ZNSt8ios_base4InitD1Ev>  ; std::ios_base::Init::~Init()
086dabe4 +0x244:  add    $0x30,%esp
086dabe7 +0x247:  mov    %ebx,%eax
086dabe9 +0x249:  pop    %ebx
086dabea +0x24a:  pop    %esi
086dabeb +0x24b:  pop    %ebp
086dabec +0x24c:  ret
086dabed +0x24d:  mov    %eax,-0x1c(%ebp)
086dabf0 +0x250:  mov    %esi,(%esp)
086dabf3 +0x253:  call   086da140 <_ZNSt8ios_base4InitD1Ev>  ; std::ios_base::Init::~Init()
086dabf8 +0x258:  mov    -0x1c(%ebp),%eax
086dabfb +0x25b:  mov    %eax,(%esp)
086dabfe +0x25e:  call   08ae3750 <_Unwind_Resume>
086dac03 +0x263:  jmp    086dabed <+0x24d>
086dac05 +0x265:  jmp    086dabed <+0x24d>
086dac07 +0x267:  mov    %esi,%esi
086dac09 +0x269:  lea    0x0(%edi,%eiz,1),%edi
086dac10 +0x270:  jmp    086dabed <+0x24d>
086dac12 +0x272:  jmp    086dabed <+0x24d>
086dac14 +0x274:  jmp    086dabed <+0x24d>
086dac16 +0x276:  lea    0x0(%esi),%esi
086dac19 +0x279:  lea    0x0(%edi,%eiz,1),%edi
086dac20 +0x280:  jmp    086dabed <+0x24d>
086dac22 +0x282:  nop
086dac23 +0x283:  nop
086dac24 +0x284:  nop
086dac25 +0x285:  nop
086dac26 +0x286:  nop
086dac27 +0x287:  nop
086dac28 +0x288:  nop
086dac29 +0x289:  nop
086dac2a +0x28a:  nop
086dac2b +0x28b:  nop
086dac2c +0x28c:  nop
086dac2d +0x28d:  nop
086dac2e +0x28e:  nop
086dac2f +0x28f:  nop
```

## 反编译 C

```c
// std::ios_base::sync_with_stdio @ 0x86da9a0

/* std::ios_base::sync_with_stdio(bool) */

char std::ios_base::sync_with_stdio(bool param_1)

{
  char cVar1;
  Init local_d;
  
  cVar1 = Init::_S_synced_with_stdio;
  if ((!param_1) && (Init::_S_synced_with_stdio != '\0')) {
    Init::Init(&local_d);
    Init::_S_synced_with_stdio = 0;
    __gnu_internal::buf_cout_sync._0_4_ = &PTR__streambuf_08d00368;
    locale::~locale((locale *)(__gnu_internal::buf_cout_sync + 0x1c));
    __gnu_internal::buf_cin_sync._0_4_ = &PTR__streambuf_08d00368;
    locale::~locale((locale *)(__gnu_internal::buf_cin_sync + 0x1c));
    __gnu_internal::buf_cerr_sync._0_4_ = &PTR__streambuf_08d00368;
    locale::~locale((locale *)(__gnu_internal::buf_cerr_sync + 0x1c));
    __gnu_internal::buf_wcout_sync._0_4_ = &PTR__wstreambuf_08d00328;
    locale::~locale((locale *)(__gnu_internal::buf_wcout_sync + 0x1c));
    __gnu_internal::buf_wcin_sync._0_4_ = &PTR__wstreambuf_08d00328;
    locale::~locale((locale *)(__gnu_internal::buf_wcin_sync + 0x1c));
    __gnu_internal::buf_wcerr_sync._0_4_ = &PTR__wstreambuf_08d00328;
    locale::~locale((locale *)(__gnu_internal::buf_wcerr_sync + 0x1c));
                    /* try { // try from 086daa7e to 086daa82 has its CatchHandler @ 086dabed */
    __gnu_cxx::stdio_filebuf<char,std::char_traits<char>>::stdio_filebuf
              ((stdio_filebuf<char,std::char_traits<char>> *)__gnu_internal::buf_cout,stdout,_S_out,
               0x2000);
                    /* try { // try from 086daaa3 to 086daaa7 has its CatchHandler @ 086dac03 */
    __gnu_cxx::stdio_filebuf<char,std::char_traits<char>>::stdio_filebuf
              ((stdio_filebuf<char,std::char_traits<char>> *)__gnu_internal::buf_cin,stdin,_S_in,
               0x2000);
                    /* try { // try from 086daac8 to 086daacc has its CatchHandler @ 086dac05 */
    __gnu_cxx::stdio_filebuf<char,std::char_traits<char>>::stdio_filebuf
              ((stdio_filebuf<char,std::char_traits<char>> *)__gnu_internal::buf_cerr,stderr,_S_out,
               0x2000);
                    /* try { // try from 086daadc to 086dab1c has its CatchHandler @ 086dac07 */
    ios::rdbuf((ios *)(cout + 4),(streambuf *)__gnu_internal::buf_cout);
    ios::rdbuf((ios *)(cin + 8),(streambuf *)__gnu_internal::buf_cin);
    ios::rdbuf((ios *)&DAT_0948b464,(streambuf *)__gnu_internal::buf_cerr);
    ios::rdbuf((ios *)(clog + 4),(streambuf *)__gnu_internal::buf_cerr);
                    /* try { // try from 086dab3d to 086dab41 has its CatchHandler @ 086dac12 */
    __gnu_cxx::stdio_filebuf<wchar_t,std::char_traits<wchar_t>>::stdio_filebuf
              ((stdio_filebuf<wchar_t,std::char_traits<wchar_t>> *)__gnu_internal::buf_wcout,stdout,
               _S_out,0x2000);
                    /* try { // try from 086dab62 to 086dab66 has its CatchHandler @ 086dac14 */
    __gnu_cxx::stdio_filebuf<wchar_t,std::char_traits<wchar_t>>::stdio_filebuf
              ((stdio_filebuf<wchar_t,std::char_traits<wchar_t>> *)__gnu_internal::buf_wcin,stdin,
               _S_in,0x2000);
                    /* try { // try from 086dab87 to 086dab8b has its CatchHandler @ 086dac16 */
    __gnu_cxx::stdio_filebuf<wchar_t,std::char_traits<wchar_t>>::stdio_filebuf
              ((stdio_filebuf<wchar_t,std::char_traits<wchar_t>> *)__gnu_internal::buf_wcerr,stderr,
               _S_out,0x2000);
                    /* try { // try from 086dab9b to 086dabdb has its CatchHandler @ 086dac07 */
    wios::rdbuf((wios *)(wcout + 4),(wstreambuf *)__gnu_internal::buf_wcout);
    wios::rdbuf((wios *)(wcin + 8),(wstreambuf *)__gnu_internal::buf_wcin);
    wios::rdbuf((wios *)(wcerr + 4),(wstreambuf *)__gnu_internal::buf_wcerr);
    wios::rdbuf((wios *)(wclog + 4),(wstreambuf *)__gnu_internal::buf_wcerr);
    Init::~Init(&local_d);
    return cVar1;
  }
  return Init::_S_synced_with_stdio;
}
```

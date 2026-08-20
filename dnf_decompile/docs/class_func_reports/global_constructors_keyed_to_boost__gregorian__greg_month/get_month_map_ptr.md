# get_month_map_ptr

`_GLOBAL__I__ZN5boost9gregorian10greg_month17get_month_map_ptrEv`

`global constructors keyed to boost::gregorian::greg_month::get_month_map_ptr()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to boost::gregorian::greg_month` | `0x087dc9f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087dc9f0  _GLOBAL__I__ZN5boost9gregorian10greg_month17get_month_map_ptrEv
#           global constructors keyed to boost::gregorian::greg_month::get_month_map_ptr()
# range [0x087dc9f0, 0x087dca3f]
087dc9f0 +0x00:  push   %ebp
087dc9f1 +0x01:  mov    %esp,%ebp
087dc9f3 +0x03:  sub    $0x18,%esp
087dc9f6 +0x06:  movl   $&_ZStL8__ioinit,(%esp)
087dc9fd +0x0d:  call   086da1e0 <_ZNSt8ios_base4InitC1Ev>  ; std::ios_base::Init::Init()
087dca02 +0x12:  movl   $&__dso_handle,0x8(%esp)
087dca0a +0x1a:  movl   $&_ZStL8__ioinit,0x4(%esp)
087dca12 +0x22:  movl   $&_ZNSt8ios_base4InitD1Ev,(%esp)
087dca19 +0x29:  call   0807ddd0 <_init+0x6c8>
087dca1e +0x2e:  cmpb   $0x0,&_ZGVN5boost9date_time14date_names_putINS_9gregorian17greg_facet_configEcSt19ostreambuf_iteratorIcSt11char_traitsIcEEE2idE
087dca25 +0x35:  jne    087dca2e <+0x3e>
087dca27 +0x37:  movb   $0x1,&_ZGVN5boost9date_time14date_names_putINS_9gregorian17greg_facet_configEcSt19ostreambuf_iteratorIcSt11char_traitsIcEEE2idE
087dca2e +0x3e:  cmpb   $0x0,&_ZGVN5boost9date_time14date_names_putINS_9gregorian17greg_facet_configEwSt19ostreambuf_iteratorIwSt11char_traitsIwEEE2idE
087dca35 +0x45:  jne    087dca3e <+0x4e>
087dca37 +0x47:  movb   $0x1,&_ZGVN5boost9date_time14date_names_putINS_9gregorian17greg_facet_configEwSt19ostreambuf_iteratorIwSt11char_traitsIwEEE2idE
087dca3e +0x4e:  leave
087dca3f +0x4f:  ret
```

## 反编译 C

```c
// <global>::global @ 0x87dc9f0

/* boost::gregorian::greg_month::get_month_map_ptr() */

void boost::gregorian::greg_month::_GLOBAL__I_get_month_map_ptr(void)

{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
  if (date_time::
      date_names_put<boost::gregorian::greg_facet_config,char,std::ostreambuf_iterator<char,std::char_traits<char>>>
      ::id == '\0') {
    date_time::
    date_names_put<boost::gregorian::greg_facet_config,char,std::ostreambuf_iterator<char,std::char_traits<char>>>
    ::id = '\x01';
  }
  if (date_time::
      date_names_put<boost::gregorian::greg_facet_config,wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>
      ::id == '\0') {
    date_time::
    date_names_put<boost::gregorian::greg_facet_config,wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>
    ::id = '\x01';
  }
  return;
}
```

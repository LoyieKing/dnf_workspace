# clear

`_GLOBAL__I__ZN6DNFLex13stream_data_t5clearEv`

`global constructors keyed to DNFLex::stream_data_t::clear()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to DNFLex::stream_data_t` | `0x08acd2e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acd2e0  _GLOBAL__I__ZN6DNFLex13stream_data_t5clearEv
#           global constructors keyed to DNFLex::stream_data_t::clear()
# range [0x08acd2e0, 0x08acd30f]
08acd2e0 +0x00:  push   %ebp
08acd2e1 +0x01:  mov    %esp,%ebp
08acd2e3 +0x03:  sub    $0x18,%esp
08acd2e6 +0x06:  movl   $&_ZStL8__ioinit,(%esp)
08acd2ed +0x0d:  call   086da1e0 <_ZNSt8ios_base4InitC1Ev>  ; std::ios_base::Init::Init()
08acd2f2 +0x12:  movl   $&__dso_handle,0x8(%esp)
08acd2fa +0x1a:  movl   $&_ZStL8__ioinit,0x4(%esp)
08acd302 +0x22:  movl   $&_ZNSt8ios_base4InitD1Ev,(%esp)
08acd309 +0x29:  call   0807ddd0 <_init+0x6c8>
08acd30e +0x2e:  leave
08acd30f +0x2f:  ret
```

## 反编译 C

```c
// <global>::global @ 0x8acd2e0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__I__ZN6DNFLex13stream_data_t5clearEv(void)

{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
  return;
}
```

# condenseWhiteSpace

`_GLOBAL__I__ZN9TiXmlBase18condenseWhiteSpaceE`

`global constructors keyed to TiXmlBase::condenseWhiteSpace`

| 类 | 地址 |
|---|---|
| `global constructors keyed to TiXmlBase` | `0x087e01f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e01f0  _GLOBAL__I__ZN9TiXmlBase18condenseWhiteSpaceE
#           global constructors keyed to TiXmlBase::condenseWhiteSpace
# range [0x087e01f0, 0x087e021f]
087e01f0 +0x00:  push   %ebp
087e01f1 +0x01:  mov    %esp,%ebp
087e01f3 +0x03:  sub    $0x18,%esp
087e01f6 +0x06:  movl   $&_ZStL8__ioinit,(%esp)
087e01fd +0x0d:  call   086da1e0 <_ZNSt8ios_base4InitC1Ev>  ; std::ios_base::Init::Init()
087e0202 +0x12:  movl   $&__dso_handle,0x8(%esp)
087e020a +0x1a:  movl   $&_ZStL8__ioinit,0x4(%esp)
087e0212 +0x22:  movl   $&_ZNSt8ios_base4InitD1Ev,(%esp)
087e0219 +0x29:  call   0807ddd0 <_init+0x6c8>
087e021e +0x2e:  leave
087e021f +0x2f:  ret
```

## 反编译 C

```c
// <global>::global @ 0x87e01f0

/* TiXmlBase::condenseWhiteSpace */

void TiXmlBase::_GLOBAL__I_condenseWhiteSpace(void)

{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
  return;
}
```

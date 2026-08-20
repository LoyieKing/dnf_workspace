# errorString

`_GLOBAL__I__ZN9TiXmlBase11errorStringE`

`global constructors keyed to TiXmlBase::errorString`

| 类 | 地址 |
|---|---|
| `global constructors keyed to TiXmlBase` | `0x087ea710` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087ea710  _GLOBAL__I__ZN9TiXmlBase11errorStringE
#           global constructors keyed to TiXmlBase::errorString
# range [0x087ea710, 0x087ea73f]
087ea710 +0x00:  push   %ebp
087ea711 +0x01:  mov    %esp,%ebp
087ea713 +0x03:  sub    $0x18,%esp
087ea716 +0x06:  movl   $&_ZStL8__ioinit,(%esp)
087ea71d +0x0d:  call   086da1e0 <_ZNSt8ios_base4InitC1Ev>  ; std::ios_base::Init::Init()
087ea722 +0x12:  movl   $&__dso_handle,0x8(%esp)
087ea72a +0x1a:  movl   $&_ZStL8__ioinit,0x4(%esp)
087ea732 +0x22:  movl   $&_ZNSt8ios_base4InitD1Ev,(%esp)
087ea739 +0x29:  call   0807ddd0 <_init+0x6c8>
087ea73e +0x2e:  leave
087ea73f +0x2f:  ret
```

## 反编译 C

```c
// <global>::global @ 0x87ea710

/* TiXmlBase::errorString */

void TiXmlBase::_GLOBAL__I_errorString(void)

{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
  return;
}
```

# entity

`_GLOBAL__I__ZN9TiXmlBase6entityE`

`global constructors keyed to TiXmlBase::entity`

| 类 | 地址 |
|---|---|
| `global constructors keyed to TiXmlBase` | `0x087e5ff0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e5ff0  _GLOBAL__I__ZN9TiXmlBase6entityE
#           global constructors keyed to TiXmlBase::entity
# range [0x087e5ff0, 0x087e601f]
087e5ff0 +0x00:  push   %ebp
087e5ff1 +0x01:  mov    %esp,%ebp
087e5ff3 +0x03:  sub    $0x18,%esp
087e5ff6 +0x06:  movl   $&_ZStL8__ioinit,(%esp)
087e5ffd +0x0d:  call   086da1e0 <_ZNSt8ios_base4InitC1Ev>  ; std::ios_base::Init::Init()
087e6002 +0x12:  movl   $&__dso_handle,0x8(%esp)
087e600a +0x1a:  movl   $&_ZStL8__ioinit,0x4(%esp)
087e6012 +0x22:  movl   $&_ZNSt8ios_base4InitD1Ev,(%esp)
087e6019 +0x29:  call   0807ddd0 <_init+0x6c8>
087e601e +0x2e:  leave
087e601f +0x2f:  ret
```

## 反编译 C

```c
// <global>::global @ 0x87e5ff0

/* TiXmlBase::entity */

void TiXmlBase::_GLOBAL__I_entity(void)

{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
  return;
}
```

# system_category

`_GLOBAL__I__ZSt15system_categoryv`

`global constructors keyed to std::system_category()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to std` | `0x086df6e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086df6e0  _GLOBAL__I__ZSt15system_categoryv
#           global constructors keyed to std::system_category()
# range [0x086df6e0, 0x086df73f]
086df6e0 +0x00:  push   %ebp
086df6e1 +0x01:  mov    %esp,%ebp
086df6e3 +0x03:  sub    $0x18,%esp
086df6e6 +0x06:  movl   $&__dso_handle,0x8(%esp)
086df6ee +0x0e:  movl   $&_ZN12_GLOBAL__N_1L25generic_category_instanceE,0x4(%esp)
086df6f6 +0x16:  movl   $&_ZN12_GLOBAL__N_122generic_error_categoryD1Ev,(%esp)
086df6fd +0x1d:  movl   $&_ZTVN12_GLOBAL__N_122generic_error_categoryE+0x8,&_ZN12_GLOBAL__N_1L25generic_category_instanceE
086df707 +0x27:  call   0807ddd0 <_init+0x6c8>
086df70c +0x2c:  movl   $&__dso_handle,0x8(%esp)
086df714 +0x34:  movl   $&_ZN12_GLOBAL__N_1L24system_category_instanceE,0x4(%esp)
086df71c +0x3c:  movl   $&_ZN12_GLOBAL__N_121system_error_categoryD1Ev,(%esp)
086df723 +0x43:  movl   $&_ZTVN12_GLOBAL__N_121system_error_categoryE+0x8,&_ZN12_GLOBAL__N_1L24system_category_instanceE
086df72d +0x4d:  call   0807ddd0 <_init+0x6c8>
086df732 +0x52:  leave
086df733 +0x53:  ret
086df734 +0x54:  nop
086df735 +0x55:  nop
086df736 +0x56:  nop
086df737 +0x57:  nop
086df738 +0x58:  nop
086df739 +0x59:  nop
086df73a +0x5a:  nop
086df73b +0x5b:  nop
086df73c +0x5c:  nop
086df73d +0x5d:  nop
086df73e +0x5e:  nop
086df73f +0x5f:  nop
```

## 反编译 C

```c
// <global>::global @ 0x86df6e0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::system_category() */

void std::_GLOBAL__I_system_category(void)

{
  ::(anonymous_namespace)::generic_category_instance = &PTR__generic_error_category_08cfe5c8;
  __cxa_atexit(::(anonymous_namespace)::generic_error_category::~generic_error_category,
               &::(anonymous_namespace)::generic_category_instance,&__dso_handle);
  ::(anonymous_namespace)::system_category_instance = &PTR__system_error_category_08cfe648;
  __cxa_atexit(::(anonymous_namespace)::system_error_category::~system_error_category,
               &::(anonymous_namespace)::system_category_instance,&__dso_handle);
  return;
}
```

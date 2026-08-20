# imbue

`_ZNSt8ios_base5imbueERKSt6locale`

`std::ios_base::imbue(std::locale const&)`

| 类 | 地址 |
|---|---|
| `std::ios_base` | `0x08727170` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08727170  _ZNSt8ios_base5imbueERKSt6locale
#           std::ios_base::imbue(std::locale const&)
# range [0x08727170, 0x087271cf]
08727170 +0x00:  push   %ebp
08727171 +0x01:  mov    %esp,%ebp
08727173 +0x03:  sub    $0x28,%esp
08727176 +0x06:  mov    %esi,-0x8(%ebp)
08727179 +0x09:  mov    0xc(%ebp),%esi
0872717c +0x0c:  mov    %ebx,-0xc(%ebp)
0872717f +0x0f:  mov    0x8(%ebp),%ebx
08727182 +0x12:  mov    %edi,-0x4(%ebp)
08727185 +0x15:  lea    0x6c(%esi),%edi
08727188 +0x18:  mov    %edi,0x4(%esp)
0872718c +0x1c:  mov    %ebx,(%esp)
0872718f +0x1f:  call   086dadf0 <_ZNSt6localeC1ERKS_>  ; std::locale::locale(std::locale const&)
08727194 +0x24:  mov    0x10(%ebp),%eax
08727197 +0x27:  mov    %edi,(%esp)
0872719a +0x2a:  mov    %eax,0x4(%esp)
0872719e +0x2e:  call   086dba90 <_ZNSt6localeaSERKS_>  ; std::locale::operator=(std::locale const&)
087271a3 +0x33:  mov    %esi,(%esp)
087271a6 +0x36:  movl   $0x1,0x4(%esp)
087271ae +0x3e:  call   08726e50 <_ZNSt8ios_base17_M_call_callbacksENS_5eventE>  ; std::ios_base::_M_call_callbacks(std::ios_base::event)
087271b3 +0x43:  mov    %ebx,%eax
087271b5 +0x45:  mov    -0x8(%ebp),%esi
087271b8 +0x48:  mov    -0xc(%ebp),%ebx
087271bb +0x4b:  mov    -0x4(%ebp),%edi
087271be +0x4e:  mov    %ebp,%esp
087271c0 +0x50:  pop    %ebp
087271c1 +0x51:  ret    $0x4
087271c4 +0x54:  nop
087271c5 +0x55:  nop
087271c6 +0x56:  nop
087271c7 +0x57:  nop
087271c8 +0x58:  nop
087271c9 +0x59:  nop
087271ca +0x5a:  nop
087271cb +0x5b:  nop
087271cc +0x5c:  nop
087271cd +0x5d:  nop
087271ce +0x5e:  nop
087271cf +0x5f:  nop
```

## 反编译 C

```c
// std::ios_base::imbue @ 0x8727170

/* std::ios_base::imbue(std::locale const&) */

locale * std::ios_base::imbue(locale *param_1)

{
  int in_stack_00000008;
  locale *in_stack_0000000c;
  
  locale::locale(param_1,(locale *)(in_stack_00000008 + 0x6c));
  locale::operator=((locale *)(in_stack_00000008 + 0x6c),in_stack_0000000c);
  _M_call_callbacks();
  return param_1;
}
```

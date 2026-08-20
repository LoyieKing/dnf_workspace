# seekpos

`_ZNSt12strstreambuf7seekposESt4fposI11__mbstate_tESt13_Ios_Openmode`

`std::strstreambuf::seekpos(std::fpos<__mbstate_t>, std::_Ios_Openmode)`

| 类 | 地址 |
|---|---|
| `std::strstreambuf` | `0x086dd7f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd7f0  _ZNSt12strstreambuf7seekposESt4fposI11__mbstate_tESt13_Ios_Openmode
#           std::strstreambuf::seekpos(std::fpos<__mbstate_t>, std::_Ios_Openmode)
# range [0x086dd7f0, 0x086dd84f]
086dd7f0 +0x00:  push   %ebp
086dd7f1 +0x01:  mov    %esp,%ebp
086dd7f3 +0x03:  sub    $0x38,%esp
086dd7f6 +0x06:  mov    0xc(%ebp),%eax
086dd7f9 +0x09:  mov    %ebx,-0xc(%ebp)
086dd7fc +0x0c:  mov    0x20(%ebp),%ecx
086dd7ff +0x0f:  mov    0x8(%ebp),%ebx
086dd802 +0x12:  mov    %esi,-0x8(%ebp)
086dd805 +0x15:  mov    0x10(%ebp),%esi
086dd808 +0x18:  mov    %edi,-0x4(%ebp)
086dd80b +0x1b:  mov    0x14(%ebp),%edi
086dd80e +0x1e:  mov    (%eax),%edx
086dd810 +0x20:  mov    %eax,0x4(%esp)
086dd814 +0x24:  mov    %esi,0x8(%esp)
086dd818 +0x28:  mov    %edi,0xc(%esp)
086dd81c +0x2c:  mov    %ebx,(%esp)
086dd81f +0x2f:  mov    %ecx,0x14(%esp)
086dd823 +0x33:  movl   $0x0,0x10(%esp)
086dd82b +0x3b:  call   *0x10(%edx)
086dd82e +0x3e:  mov    %ebx,%eax
086dd830 +0x40:  mov    -0x8(%ebp),%esi
086dd833 +0x43:  mov    -0xc(%ebp),%ebx
086dd836 +0x46:  mov    -0x4(%ebp),%edi
086dd839 +0x49:  sub    $0x4,%esp
086dd83c +0x4c:  mov    %ebp,%esp
086dd83e +0x4e:  pop    %ebp
086dd83f +0x4f:  ret    $0x4
086dd842 +0x52:  nop
086dd843 +0x53:  nop
086dd844 +0x54:  nop
086dd845 +0x55:  nop
086dd846 +0x56:  nop
086dd847 +0x57:  nop
086dd848 +0x58:  nop
086dd849 +0x59:  nop
086dd84a +0x5a:  nop
086dd84b +0x5b:  nop
086dd84c +0x5c:  nop
086dd84d +0x5d:  nop
086dd84e +0x5e:  nop
086dd84f +0x5f:  nop
```

## 反编译 C

```c
// std::strstreambuf::seekpos @ 0x86dd7f0

/* std::strstreambuf::seekpos(std::fpos<__mbstate_t>, std::_Ios_Openmode) */

undefined4
std::strstreambuf::seekpos
          (undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7)

{
  (**(code **)(*param_2 + 0x10))(param_1,param_2,param_3,param_4,0,param_7);
  return param_1;
}
```

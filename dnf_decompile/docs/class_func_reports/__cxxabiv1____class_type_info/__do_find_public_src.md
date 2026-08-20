# __do_find_public_src

`_ZNK10__cxxabiv117__class_type_info20__do_find_public_srcEiPKvPKS0_S2_`

`__cxxabiv1::__class_type_info::__do_find_public_src(int, void const*, __cxxabiv1::__class_type_info const*, void const*) const`

| 类 | 地址 |
|---|---|
| `__cxxabiv1::__class_type_info` | `0x08724970` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08724970  _ZNK10__cxxabiv117__class_type_info20__do_find_public_srcEiPKvPKS0_S2_
#           __cxxabiv1::__class_type_info::__do_find_public_src(int, void const*, __cxxabiv1::__class_type_info const*, void const*) const
# range [0x08724970, 0x0872498f]
08724970 +0x00:  push   %ebp
08724971 +0x01:  mov    %esp,%ebp
08724973 +0x03:  mov    0x18(%ebp),%eax
08724976 +0x06:  cmp    0x10(%ebp),%eax
08724979 +0x09:  pop    %ebp
0872497a +0x0a:  sete   %al
0872497d +0x0d:  movzbl %al,%eax
08724980 +0x10:  lea    0x1(%eax,%eax,4),%eax
08724984 +0x14:  ret
08724985 +0x15:  nop
08724986 +0x16:  nop
08724987 +0x17:  nop
08724988 +0x18:  nop
08724989 +0x19:  nop
0872498a +0x1a:  nop
0872498b +0x1b:  nop
0872498c +0x1c:  nop
0872498d +0x1d:  nop
0872498e +0x1e:  nop
0872498f +0x1f:  nop
```

## 反编译 C

```c
// __cxxabiv1::__class_type_info::__do_find_public_src @ 0x8724970

/* __cxxabiv1::__class_type_info::__do_find_public_src(int, void const*,
   __cxxabiv1::__class_type_info const*, void const*) const */

char __thiscall
__cxxabiv1::__class_type_info::__do_find_public_src
          (__class_type_info *this,int param_1,void *param_2,__class_type_info *param_3,
          void *param_4)

{
  return (param_4 == param_2) * '\x05' + '\x01';
}
```

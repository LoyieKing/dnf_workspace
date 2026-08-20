# ~type_info

`_ZNSt9type_infoD1Ev`

`std::type_info::~type_info()`

| 类 | 地址 |
|---|---|
| `std::type_info` | `0x08724700` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08724700  _ZNSt9type_infoD1Ev
#           std::type_info::~type_info()
# range [0x08724700, 0x0872471f]
08724700 +0x00:  call   087245c4 <__i686.get_pc_thunk.cx>
08724705 +0x05:  add    $0xc48493,%ecx
0872470b +0x0b:  push   %ebp
0872470c +0x0c:  mov    %esp,%ebp
0872470e +0x0e:  mov    -0x3f4(%ecx),%eax
08724714 +0x14:  lea    0x8(%eax),%edx
08724717 +0x17:  mov    0x8(%ebp),%eax
0872471a +0x1a:  mov    %edx,(%eax)
0872471c +0x1c:  pop    %ebp
0872471d +0x1d:  ret
0872471e +0x1e:  nop
0872471f +0x1f:  nop
```

## 反编译 C

```c
// std::type_info::~type_info @ 0x8724700

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* std::type_info::~type_info() */

void __thiscall std::type_info::~type_info(type_info *this)

{
  *(undefined **)this = PTR_vtable_0936c7a4 + 8;
  return;
}
```

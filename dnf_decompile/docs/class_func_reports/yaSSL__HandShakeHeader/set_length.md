# set_length

`_ZN5yaSSL15HandShakeHeader10set_lengthEj`

`yaSSL::HandShakeHeader::set_length(unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::HandShakeHeader` | `0x08749950` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08749950  _ZN5yaSSL15HandShakeHeader10set_lengthEj
#           yaSSL::HandShakeHeader::set_length(unsigned int)
# range [0x08749950, 0x0874997e]
08749950 +0x00:  push   %ebp
08749951 +0x01:  mov    %esp,%ebp
08749953 +0x03:  push   %ebx
08749954 +0x04:  sub    $0x14,%esp
08749957 +0x07:  mov    0x8(%ebp),%eax
0874995a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0874995f +0x0f:  add    $0xc23239,%ebx
08749965 +0x15:  add    $0x8,%eax
08749968 +0x18:  mov    %eax,0x4(%esp)
0874996c +0x1c:  mov    0xc(%ebp),%eax
0874996f +0x1f:  mov    %eax,(%esp)
08749972 +0x22:  call   0874dd10 <_ZN5yaSSL7c32to24EjRA3_h>  ; yaSSL::c32to24(unsigned int, unsigned char (&) [3])
08749977 +0x27:  add    $0x14,%esp
0874997a +0x2a:  pop    %ebx
0874997b +0x2b:  pop    %ebp
0874997c +0x2c:  ret
0874997d +0x2d:  nop
0874997e +0x2e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::HandShakeHeader::set_length @ 0x8749950

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HandShakeHeader::set_length(unsigned int) */

void __thiscall yaSSL::HandShakeHeader::set_length(HandShakeHeader *this,uint param_1)

{
  c32to24(param_1,(unsigned_char *)(this + 8));
  return;
}
```

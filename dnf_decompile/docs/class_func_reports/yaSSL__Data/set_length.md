# set_length

`_ZN5yaSSL4Data10set_lengthEt`

`yaSSL::Data::set_length(unsigned short)`

| 类 | 地址 |
|---|---|
| `yaSSL::Data` | `0x08746cb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746cb0  _ZN5yaSSL4Data10set_lengthEt
#           yaSSL::Data::set_length(unsigned short)
# range [0x08746cb0, 0x08746cbf]
08746cb0 +0x00:  push   %ebp
08746cb1 +0x01:  mov    %esp,%ebp
08746cb3 +0x03:  mov    0xc(%ebp),%edx
08746cb6 +0x06:  mov    0x8(%ebp),%eax
08746cb9 +0x09:  mov    %dx,0x4(%eax)
08746cbd +0x0d:  pop    %ebp
08746cbe +0x0e:  ret
08746cbf +0x0f:  nop
```

## 反编译 C

```c
// yaSSL::Data::set_length @ 0x8746cb0

/* yaSSL::Data::set_length(unsigned short) */

void __thiscall yaSSL::Data::set_length(Data *this,ushort param_1)

{
  *(ushort *)(this + 4) = param_1;
  return;
}
```

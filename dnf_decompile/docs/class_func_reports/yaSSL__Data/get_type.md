# get_type

`_ZNK5yaSSL4Data8get_typeEv`

`yaSSL::Data::get_type() const`

| 类 | 地址 |
|---|---|
| `yaSSL::Data` | `0x08746c90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746c90  _ZNK5yaSSL4Data8get_typeEv
#           yaSSL::Data::get_type() const
# range [0x08746c90, 0x08746c9a]
08746c90 +0x00:  push   %ebp
08746c91 +0x01:  mov    $0x17,%eax
08746c96 +0x06:  mov    %esp,%ebp
08746c98 +0x08:  pop    %ebp
08746c99 +0x09:  ret
08746c9a +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::Data::get_type @ 0x8746c90

/* yaSSL::Data::get_type() const */

undefined4 yaSSL::Data::get_type(void)

{
  return 0x17;
}
```

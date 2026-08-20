# get_type

`_ZNK5yaSSL5Alert8get_typeEv`

`yaSSL::Alert::get_type() const`

| 类 | 地址 |
|---|---|
| `yaSSL::Alert` | `0x08746bc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746bc0  _ZNK5yaSSL5Alert8get_typeEv
#           yaSSL::Alert::get_type() const
# range [0x08746bc0, 0x08746bca]
08746bc0 +0x00:  push   %ebp
08746bc1 +0x01:  mov    $0x15,%eax
08746bc6 +0x06:  mov    %esp,%ebp
08746bc8 +0x08:  pop    %ebp
08746bc9 +0x09:  ret
08746bca +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::Alert::get_type @ 0x8746bc0

/* yaSSL::Alert::get_type() const */

undefined4 yaSSL::Alert::get_type(void)

{
  return 0x15;
}
```

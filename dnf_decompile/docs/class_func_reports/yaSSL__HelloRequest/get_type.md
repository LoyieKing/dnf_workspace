# get_type

`_ZNK5yaSSL12HelloRequest8get_typeEv`

`yaSSL::HelloRequest::get_type() const`

| 类 | 地址 |
|---|---|
| `yaSSL::HelloRequest` | `0x08746b30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746b30  _ZNK5yaSSL12HelloRequest8get_typeEv
#           yaSSL::HelloRequest::get_type() const
# range [0x08746b30, 0x08746b39]
08746b30 +0x00:  push   %ebp
08746b31 +0x01:  xor    %eax,%eax
08746b33 +0x03:  mov    %esp,%ebp
08746b35 +0x05:  pop    %ebp
08746b36 +0x06:  ret
08746b37 +0x07:  nop
08746b38 +0x08:  nop
08746b39 +0x09:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::HelloRequest::get_type @ 0x8746b30

/* yaSSL::HelloRequest::get_type() const */

undefined4 yaSSL::HelloRequest::get_type(void)

{
  return 0;
}
```

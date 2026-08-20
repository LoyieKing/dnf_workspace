# get_length

`_ZNK5yaSSL13ClientKeyBase10get_lengthEv`

`yaSSL::ClientKeyBase::get_length() const`

| 类 | 地址 |
|---|---|
| `yaSSL::ClientKeyBase` | `0x08746f00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746f00  _ZNK5yaSSL13ClientKeyBase10get_lengthEv
#           yaSSL::ClientKeyBase::get_length() const
# range [0x08746f00, 0x08746f09]
08746f00 +0x00:  push   %ebp
08746f01 +0x01:  xor    %eax,%eax
08746f03 +0x03:  mov    %esp,%ebp
08746f05 +0x05:  pop    %ebp
08746f06 +0x06:  ret
08746f07 +0x07:  nop
08746f08 +0x08:  nop
08746f09 +0x09:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::ClientKeyBase::get_length @ 0x8746f00

/* yaSSL::ClientKeyBase::get_length() const */

undefined4 yaSSL::ClientKeyBase::get_length(void)

{
  return 0;
}
```

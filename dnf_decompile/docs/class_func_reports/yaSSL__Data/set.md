# set

`_ZN5yaSSL4Data3setERNS_12input_bufferE`

`yaSSL::Data::set(yaSSL::input_buffer&)`

| 类 | 地址 |
|---|---|
| `yaSSL::Data` | `0x08746c80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746c80  _ZN5yaSSL4Data3setERNS_12input_bufferE
#           yaSSL::Data::set(yaSSL::input_buffer&)
# range [0x08746c80, 0x08746c89]
08746c80 +0x00:  push   %ebp
08746c81 +0x01:  mov    %esp,%ebp
08746c83 +0x03:  mov    0xc(%ebp),%eax
08746c86 +0x06:  pop    %ebp
08746c87 +0x07:  ret
08746c88 +0x08:  nop
08746c89 +0x09:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::Data::set @ 0x8746c80

/* yaSSL::Data::set(yaSSL::input_buffer&) */

input_buffer * __thiscall yaSSL::Data::set(Data *this,input_buffer *param_1)

{
  return param_1;
}
```

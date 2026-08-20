# set

`_ZN5yaSSL11Certificate3setERNS_12input_bufferE`

`yaSSL::Certificate::set(yaSSL::input_buffer&)`

| 类 | 地址 |
|---|---|
| `yaSSL::Certificate` | `0x08746d40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746d40  _ZN5yaSSL11Certificate3setERNS_12input_bufferE
#           yaSSL::Certificate::set(yaSSL::input_buffer&)
# range [0x08746d40, 0x08746d49]
08746d40 +0x00:  push   %ebp
08746d41 +0x01:  mov    %esp,%ebp
08746d43 +0x03:  mov    0xc(%ebp),%eax
08746d46 +0x06:  pop    %ebp
08746d47 +0x07:  ret
08746d48 +0x08:  nop
08746d49 +0x09:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::Certificate::set @ 0x8746d40

/* yaSSL::Certificate::set(yaSSL::input_buffer&) */

input_buffer * __thiscall yaSSL::Certificate::set(Certificate *this,input_buffer *param_1)

{
  return param_1;
}
```

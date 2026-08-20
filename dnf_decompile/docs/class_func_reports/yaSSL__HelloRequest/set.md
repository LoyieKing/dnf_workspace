# set

`_ZN5yaSSL12HelloRequest3setERNS_12input_bufferE`

`yaSSL::HelloRequest::set(yaSSL::input_buffer&)`

| 类 | 地址 |
|---|---|
| `yaSSL::HelloRequest` | `0x08746b00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746b00  _ZN5yaSSL12HelloRequest3setERNS_12input_bufferE
#           yaSSL::HelloRequest::set(yaSSL::input_buffer&)
# range [0x08746b00, 0x08746b09]
08746b00 +0x00:  push   %ebp
08746b01 +0x01:  mov    %esp,%ebp
08746b03 +0x03:  mov    0xc(%ebp),%eax
08746b06 +0x06:  pop    %ebp
08746b07 +0x07:  ret
08746b08 +0x08:  nop
08746b09 +0x09:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::HelloRequest::set @ 0x8746b00

/* yaSSL::HelloRequest::set(yaSSL::input_buffer&) */

input_buffer * __thiscall yaSSL::HelloRequest::set(HelloRequest *this,input_buffer *param_1)

{
  return param_1;
}
```

# Process

`_ZN5yaSSL12HelloRequest7ProcessERNS_12input_bufferERNS_3SSLE`

`yaSSL::HelloRequest::Process(yaSSL::input_buffer&, yaSSL::SSL&)`

| 类 | 地址 |
|---|---|
| `yaSSL::HelloRequest` | `0x08746b20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746b20  _ZN5yaSSL12HelloRequest7ProcessERNS_12input_bufferERNS_3SSLE
#           yaSSL::HelloRequest::Process(yaSSL::input_buffer&, yaSSL::SSL&)
# range [0x08746b20, 0x08746b29]
08746b20 +0x00:  push   %ebp
08746b21 +0x01:  mov    %esp,%ebp
08746b23 +0x03:  pop    %ebp
08746b24 +0x04:  ret
08746b25 +0x05:  nop
08746b26 +0x06:  lea    0x0(%esi),%esi
08746b29 +0x09:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::HelloRequest::Process @ 0x8746b20

/* yaSSL::HelloRequest::Process(yaSSL::input_buffer&, yaSSL::SSL&) */

void yaSSL::HelloRequest::Process(input_buffer *param_1,SSL *param_2)

{
  return;
}
```

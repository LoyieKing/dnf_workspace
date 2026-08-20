# get

`_ZNK5yaSSL12HelloRequest3getERNS_13output_bufferE`

`yaSSL::HelloRequest::get(yaSSL::output_buffer&) const`

| 类 | 地址 |
|---|---|
| `yaSSL::HelloRequest` | `0x08746b10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746b10  _ZNK5yaSSL12HelloRequest3getERNS_13output_bufferE
#           yaSSL::HelloRequest::get(yaSSL::output_buffer&) const
# range [0x08746b10, 0x08746b19]
08746b10 +0x00:  push   %ebp
08746b11 +0x01:  mov    %esp,%ebp
08746b13 +0x03:  mov    0xc(%ebp),%eax
08746b16 +0x06:  pop    %ebp
08746b17 +0x07:  ret
08746b18 +0x08:  nop
08746b19 +0x09:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::HelloRequest::get @ 0x8746b10

/* yaSSL::HelloRequest::get(yaSSL::output_buffer&) const */

output_buffer * __thiscall yaSSL::HelloRequest::get(HelloRequest *this,output_buffer *param_1)

{
  return param_1;
}
```

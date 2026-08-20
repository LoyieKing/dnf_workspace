# set

`_ZN5yaSSL17ClientKeyExchange3setERNS_12input_bufferE`

`yaSSL::ClientKeyExchange::set(yaSSL::input_buffer&)`

| 类 | 地址 |
|---|---|
| `yaSSL::ClientKeyExchange` | `0x08747170` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747170  _ZN5yaSSL17ClientKeyExchange3setERNS_12input_bufferE
#           yaSSL::ClientKeyExchange::set(yaSSL::input_buffer&)
# range [0x08747170, 0x08747179]
08747170 +0x00:  push   %ebp
08747171 +0x01:  mov    %esp,%ebp
08747173 +0x03:  mov    0xc(%ebp),%eax
08747176 +0x06:  pop    %ebp
08747177 +0x07:  ret
08747178 +0x08:  nop
08747179 +0x09:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::ClientKeyExchange::set @ 0x8747170

/* yaSSL::ClientKeyExchange::set(yaSSL::input_buffer&) */

input_buffer * __thiscall
yaSSL::ClientKeyExchange::set(ClientKeyExchange *this,input_buffer *param_1)

{
  return param_1;
}
```

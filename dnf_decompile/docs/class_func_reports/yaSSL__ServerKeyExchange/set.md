# set

`_ZN5yaSSL17ServerKeyExchange3setERNS_12input_bufferE`

`yaSSL::ServerKeyExchange::set(yaSSL::input_buffer&)`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerKeyExchange` | `0x08747000` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747000  _ZN5yaSSL17ServerKeyExchange3setERNS_12input_bufferE
#           yaSSL::ServerKeyExchange::set(yaSSL::input_buffer&)
# range [0x08747000, 0x08747009]
08747000 +0x00:  push   %ebp
08747001 +0x01:  mov    %esp,%ebp
08747003 +0x03:  mov    0xc(%ebp),%eax
08747006 +0x06:  pop    %ebp
08747007 +0x07:  ret
08747008 +0x08:  nop
08747009 +0x09:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::ServerKeyExchange::set @ 0x8747000

/* yaSSL::ServerKeyExchange::set(yaSSL::input_buffer&) */

input_buffer * __thiscall
yaSSL::ServerKeyExchange::set(ServerKeyExchange *this,input_buffer *param_1)

{
  return param_1;
}
```

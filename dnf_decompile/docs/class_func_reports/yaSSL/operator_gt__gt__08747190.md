# operator>>

`_ZN5yaSSLrsERNS_12input_bufferERNS_8FinishedE`

`yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::Finished&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08747190` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747190  _ZN5yaSSLrsERNS_12input_bufferERNS_8FinishedE
#           yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::Finished&)
# range [0x08747190, 0x08747199]
08747190 +0x00:  push   %ebp
08747191 +0x01:  mov    %esp,%ebp
08747193 +0x03:  mov    0x8(%ebp),%eax
08747196 +0x06:  pop    %ebp
08747197 +0x07:  ret
08747198 +0x08:  nop
08747199 +0x09:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::operator>> @ 0x8747190

/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::input_buffer&, yaSSL::Finished&) */

input_buffer * yaSSL::operator>>(input_buffer *param_1,Finished *param_2)

{
  return param_1;
}
```

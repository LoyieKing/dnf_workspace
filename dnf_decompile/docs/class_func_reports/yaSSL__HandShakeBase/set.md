# set

`_ZN5yaSSL13HandShakeBase3setERNS_12input_bufferE`

`yaSSL::HandShakeBase::set(yaSSL::input_buffer&)`

| 类 | 地址 |
|---|---|
| `yaSSL::HandShakeBase` | `0x08746ad0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746ad0  _ZN5yaSSL13HandShakeBase3setERNS_12input_bufferE
#           yaSSL::HandShakeBase::set(yaSSL::input_buffer&)
# range [0x08746ad0, 0x08746ad9]
08746ad0 +0x00:  push   %ebp
08746ad1 +0x01:  mov    %esp,%ebp
08746ad3 +0x03:  mov    0xc(%ebp),%eax
08746ad6 +0x06:  pop    %ebp
08746ad7 +0x07:  ret
08746ad8 +0x08:  nop
08746ad9 +0x09:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::HandShakeBase::set @ 0x8746ad0

/* yaSSL::HandShakeBase::set(yaSSL::input_buffer&) */

input_buffer * __thiscall yaSSL::HandShakeBase::set(HandShakeBase *this,input_buffer *param_1)

{
  return param_1;
}
```

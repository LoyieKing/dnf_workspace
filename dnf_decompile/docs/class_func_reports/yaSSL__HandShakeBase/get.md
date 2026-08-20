# get

`_ZNK5yaSSL13HandShakeBase3getERNS_13output_bufferE`

`yaSSL::HandShakeBase::get(yaSSL::output_buffer&) const`

| 类 | 地址 |
|---|---|
| `yaSSL::HandShakeBase` | `0x08746ae0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746ae0  _ZNK5yaSSL13HandShakeBase3getERNS_13output_bufferE
#           yaSSL::HandShakeBase::get(yaSSL::output_buffer&) const
# range [0x08746ae0, 0x08746ae9]
08746ae0 +0x00:  push   %ebp
08746ae1 +0x01:  mov    %esp,%ebp
08746ae3 +0x03:  mov    0xc(%ebp),%eax
08746ae6 +0x06:  pop    %ebp
08746ae7 +0x07:  ret
08746ae8 +0x08:  nop
08746ae9 +0x09:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::HandShakeBase::get @ 0x8746ae0

/* yaSSL::HandShakeBase::get(yaSSL::output_buffer&) const */

output_buffer * __thiscall yaSSL::HandShakeBase::get(HandShakeBase *this,output_buffer *param_1)

{
  return param_1;
}
```

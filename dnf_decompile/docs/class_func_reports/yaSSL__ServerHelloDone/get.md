# get

`_ZNK5yaSSL15ServerHelloDone3getERNS_13output_bufferE`

`yaSSL::ServerHelloDone::get(yaSSL::output_buffer&) const`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerHelloDone` | `0x08746ee0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746ee0  _ZNK5yaSSL15ServerHelloDone3getERNS_13output_bufferE
#           yaSSL::ServerHelloDone::get(yaSSL::output_buffer&) const
# range [0x08746ee0, 0x08746ee9]
08746ee0 +0x00:  push   %ebp
08746ee1 +0x01:  mov    %esp,%ebp
08746ee3 +0x03:  mov    0xc(%ebp),%eax
08746ee6 +0x06:  pop    %ebp
08746ee7 +0x07:  ret
08746ee8 +0x08:  nop
08746ee9 +0x09:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::ServerHelloDone::get @ 0x8746ee0

/* yaSSL::ServerHelloDone::get(yaSSL::output_buffer&) const */

output_buffer * __thiscall yaSSL::ServerHelloDone::get(ServerHelloDone *this,output_buffer *param_1)

{
  return param_1;
}
```

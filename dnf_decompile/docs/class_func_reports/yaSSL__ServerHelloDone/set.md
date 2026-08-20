# set

`_ZN5yaSSL15ServerHelloDone3setERNS_12input_bufferE`

`yaSSL::ServerHelloDone::set(yaSSL::input_buffer&)`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerHelloDone` | `0x08746ed0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746ed0  _ZN5yaSSL15ServerHelloDone3setERNS_12input_bufferE
#           yaSSL::ServerHelloDone::set(yaSSL::input_buffer&)
# range [0x08746ed0, 0x08746ed9]
08746ed0 +0x00:  push   %ebp
08746ed1 +0x01:  mov    %esp,%ebp
08746ed3 +0x03:  mov    0xc(%ebp),%eax
08746ed6 +0x06:  pop    %ebp
08746ed7 +0x07:  ret
08746ed8 +0x08:  nop
08746ed9 +0x09:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::ServerHelloDone::set @ 0x8746ed0

/* yaSSL::ServerHelloDone::set(yaSSL::input_buffer&) */

input_buffer * __thiscall yaSSL::ServerHelloDone::set(ServerHelloDone *this,input_buffer *param_1)

{
  return param_1;
}
```

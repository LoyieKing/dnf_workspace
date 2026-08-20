# get_remaining

`_ZNK5yaSSL12input_buffer13get_remainingEv`

`yaSSL::input_buffer::get_remaining() const`

| 类 | 地址 |
|---|---|
| `yaSSL::input_buffer` | `0x08796dc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08796dc0  _ZNK5yaSSL12input_buffer13get_remainingEv
#           yaSSL::input_buffer::get_remaining() const
# range [0x08796dc0, 0x08796dce]
08796dc0 +0x00:  push   %ebp
08796dc1 +0x01:  mov    %esp,%ebp
08796dc3 +0x03:  mov    0x8(%ebp),%edx
08796dc6 +0x06:  pop    %ebp
08796dc7 +0x07:  mov    (%edx),%eax
08796dc9 +0x09:  sub    0x4(%edx),%eax
08796dcc +0x0c:  ret
08796dcd +0x0d:  nop
08796dce +0x0e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::input_buffer::get_remaining @ 0x8796dc0

/* yaSSL::input_buffer::get_remaining() const */

int __thiscall yaSSL::input_buffer::get_remaining(input_buffer *this)

{
  return *(int *)this - *(int *)(this + 4);
}
```

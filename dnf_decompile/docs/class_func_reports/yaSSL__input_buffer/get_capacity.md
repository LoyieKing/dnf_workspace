# get_capacity

`_ZNK5yaSSL12input_buffer12get_capacityEv`

`yaSSL::input_buffer::get_capacity() const`

| 类 | 地址 |
|---|---|
| `yaSSL::input_buffer` | `0x08796d40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08796d40  _ZNK5yaSSL12input_buffer12get_capacityEv
#           yaSSL::input_buffer::get_capacity() const
# range [0x08796d40, 0x08796d4e]
08796d40 +0x00:  push   %ebp
08796d41 +0x01:  mov    %esp,%ebp
08796d43 +0x03:  mov    0x8(%ebp),%edx
08796d46 +0x06:  pop    %ebp
08796d47 +0x07:  mov    0xc(%edx),%eax
08796d4a +0x0a:  sub    0x8(%edx),%eax
08796d4d +0x0d:  ret
08796d4e +0x0e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::input_buffer::get_capacity @ 0x8796d40

/* yaSSL::input_buffer::get_capacity() const */

int __thiscall yaSSL::input_buffer::get_capacity(input_buffer *this)

{
  return *(int *)(this + 0xc) - *(int *)(this + 8);
}
```

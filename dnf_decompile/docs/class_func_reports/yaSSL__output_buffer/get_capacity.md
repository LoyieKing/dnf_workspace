# get_capacity

`_ZNK5yaSSL13output_buffer12get_capacityEv`

`yaSSL::output_buffer::get_capacity() const`

| 类 | 地址 |
|---|---|
| `yaSSL::output_buffer` | `0x08796ed0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08796ed0  _ZNK5yaSSL13output_buffer12get_capacityEv
#           yaSSL::output_buffer::get_capacity() const
# range [0x08796ed0, 0x08796ede]
08796ed0 +0x00:  push   %ebp
08796ed1 +0x01:  mov    %esp,%ebp
08796ed3 +0x03:  mov    0x8(%ebp),%edx
08796ed6 +0x06:  pop    %ebp
08796ed7 +0x07:  mov    0x8(%edx),%eax
08796eda +0x0a:  sub    0x4(%edx),%eax
08796edd +0x0d:  ret
08796ede +0x0e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::output_buffer::get_capacity @ 0x8796ed0

/* yaSSL::output_buffer::get_capacity() const */

int __thiscall yaSSL::output_buffer::get_capacity(output_buffer *this)

{
  return *(int *)(this + 8) - *(int *)(this + 4);
}
```

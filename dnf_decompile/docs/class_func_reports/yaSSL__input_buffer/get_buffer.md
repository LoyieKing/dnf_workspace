# get_buffer

`_ZNK5yaSSL12input_buffer10get_bufferEv`

`yaSSL::input_buffer::get_buffer() const`

| 类 | 地址 |
|---|---|
| `yaSSL::input_buffer` | `0x08796d30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08796d30  _ZNK5yaSSL12input_buffer10get_bufferEv
#           yaSSL::input_buffer::get_buffer() const
# range [0x08796d30, 0x08796d3c]
08796d30 +0x00:  push   %ebp
08796d31 +0x01:  mov    %esp,%ebp
08796d33 +0x03:  mov    0x8(%ebp),%eax
08796d36 +0x06:  pop    %ebp
08796d37 +0x07:  mov    0x8(%eax),%eax
08796d3a +0x0a:  ret
08796d3b +0x0b:  nop
08796d3c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::input_buffer::get_buffer @ 0x8796d30

/* yaSSL::input_buffer::get_buffer() const */

undefined4 __thiscall yaSSL::input_buffer::get_buffer(input_buffer *this)

{
  return *(undefined4 *)(this + 8);
}
```

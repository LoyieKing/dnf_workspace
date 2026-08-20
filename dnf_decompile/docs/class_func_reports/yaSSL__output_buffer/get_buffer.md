# get_buffer

`_ZNK5yaSSL13output_buffer10get_bufferEv`

`yaSSL::output_buffer::get_buffer() const`

| 类 | 地址 |
|---|---|
| `yaSSL::output_buffer` | `0x08796f30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08796f30  _ZNK5yaSSL13output_buffer10get_bufferEv
#           yaSSL::output_buffer::get_buffer() const
# range [0x08796f30, 0x08796f3c]
08796f30 +0x00:  push   %ebp
08796f31 +0x01:  mov    %esp,%ebp
08796f33 +0x03:  mov    0x8(%ebp),%eax
08796f36 +0x06:  pop    %ebp
08796f37 +0x07:  mov    0x4(%eax),%eax
08796f3a +0x0a:  ret
08796f3b +0x0b:  nop
08796f3c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::output_buffer::get_buffer @ 0x8796f30

/* yaSSL::output_buffer::get_buffer() const */

undefined4 __thiscall yaSSL::output_buffer::get_buffer(output_buffer *this)

{
  return *(undefined4 *)(this + 4);
}
```

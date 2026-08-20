# input_buffer

`_ZN5yaSSL12input_bufferC1Ev`

`yaSSL::input_buffer::input_buffer()`

| 类 | 地址 |
|---|---|
| `yaSSL::input_buffer` | `0x08796d00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08796d00  _ZN5yaSSL12input_bufferC1Ev
#           yaSSL::input_buffer::input_buffer()
# range [0x08796d00, 0x08796d2a]
08796d00 +0x00:  push   %ebp
08796d01 +0x01:  mov    %esp,%ebp
08796d03 +0x03:  mov    0x8(%ebp),%eax
08796d06 +0x06:  movl   $0x0,(%eax)
08796d0c +0x0c:  movl   $0x0,0x4(%eax)
08796d13 +0x13:  movl   $0x0,0x8(%eax)
08796d1a +0x1a:  movl   $0x0,0xc(%eax)
08796d21 +0x21:  pop    %ebp
08796d22 +0x22:  ret
08796d23 +0x23:  nop
08796d24 +0x24:  lea    0x0(%esi),%esi
08796d2a +0x2a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::input_buffer::input_buffer @ 0x8796d00

/* yaSSL::input_buffer::input_buffer() */

void __thiscall yaSSL::input_buffer::input_buffer(input_buffer *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}
```

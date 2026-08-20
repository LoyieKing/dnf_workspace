# eof

`_ZN5yaSSL12input_buffer3eofEv`

`yaSSL::input_buffer::eof()`

| 类 | 地址 |
|---|---|
| `yaSSL::input_buffer` | `0x08796e70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08796e70  _ZN5yaSSL12input_buffer3eofEv
#           yaSSL::input_buffer::eof()
# range [0x08796e70, 0x08796e7f]
08796e70 +0x00:  push   %ebp
08796e71 +0x01:  mov    %esp,%ebp
08796e73 +0x03:  mov    0x8(%ebp),%eax
08796e76 +0x06:  pop    %ebp
08796e77 +0x07:  mov    0x4(%eax),%edx
08796e7a +0x0a:  cmp    (%eax),%edx
08796e7c +0x0c:  setae  %al
08796e7f +0x0f:  ret
```

## 反编译 C

```c
// yaSSL::input_buffer::eof @ 0x8796e70

/* yaSSL::input_buffer::eof() */

bool __thiscall yaSSL::input_buffer::eof(input_buffer *this)

{
  return *(uint *)this <= *(uint *)(this + 4);
}
```

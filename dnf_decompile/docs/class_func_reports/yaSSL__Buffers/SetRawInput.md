# SetRawInput

`_ZN5yaSSL7Buffers11SetRawInputEPNS_12input_bufferE`

`yaSSL::Buffers::SetRawInput(yaSSL::input_buffer*)`

| 类 | 地址 |
|---|---|
| `yaSSL::Buffers` | `0x0874e8f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e8f0  _ZN5yaSSL7Buffers11SetRawInputEPNS_12input_bufferE
#           yaSSL::Buffers::SetRawInput(yaSSL::input_buffer*)
# range [0x0874e8f0, 0x0874e8fe]
0874e8f0 +0x00:  push   %ebp
0874e8f1 +0x01:  mov    %esp,%ebp
0874e8f3 +0x03:  mov    0xc(%ebp),%edx
0874e8f6 +0x06:  mov    0x8(%ebp),%eax
0874e8f9 +0x09:  mov    %edx,0x18(%eax)
0874e8fc +0x0c:  pop    %ebp
0874e8fd +0x0d:  ret
0874e8fe +0x0e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::Buffers::SetRawInput @ 0x874e8f0

/* yaSSL::Buffers::SetRawInput(yaSSL::input_buffer*) */

void __thiscall yaSSL::Buffers::SetRawInput(Buffers *this,input_buffer *param_1)

{
  *(input_buffer **)(this + 0x18) = param_1;
  return;
}
```

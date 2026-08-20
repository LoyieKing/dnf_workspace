# output_buffer

`_ZN5yaSSL13output_bufferC1Ev`

`yaSSL::output_buffer::output_buffer()`

| 类 | 地址 |
|---|---|
| `yaSSL::output_buffer` | `0x08796ea0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08796ea0  _ZN5yaSSL13output_bufferC1Ev
#           yaSSL::output_buffer::output_buffer()
# range [0x08796ea0, 0x08796ebc]
08796ea0 +0x00:  push   %ebp
08796ea1 +0x01:  mov    %esp,%ebp
08796ea3 +0x03:  mov    0x8(%ebp),%eax
08796ea6 +0x06:  movl   $0x0,(%eax)
08796eac +0x0c:  movl   $0x0,0x4(%eax)
08796eb3 +0x13:  movl   $0x0,0x8(%eax)
08796eba +0x1a:  pop    %ebp
08796ebb +0x1b:  ret
08796ebc +0x1c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::output_buffer::output_buffer @ 0x8796ea0

/* yaSSL::output_buffer::output_buffer() */

void __thiscall yaSSL::output_buffer::output_buffer(output_buffer *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}
```

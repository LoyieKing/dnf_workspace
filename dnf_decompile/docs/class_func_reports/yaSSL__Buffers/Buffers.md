# Buffers

`_ZN5yaSSL7BuffersC1Ev`

`yaSSL::Buffers::Buffers()`

| 类 | 地址 |
|---|---|
| `yaSSL::Buffers` | `0x0874e8b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e8b0  _ZN5yaSSL7BuffersC1Ev
#           yaSSL::Buffers::Buffers()
# range [0x0874e8b0, 0x0874e8e9]
0874e8b0 +0x00:  push   %ebp
0874e8b1 +0x01:  mov    %esp,%ebp
0874e8b3 +0x03:  mov    0x8(%ebp),%eax
0874e8b6 +0x06:  movl   $0x0,(%eax)
0874e8bc +0x0c:  movl   $0x0,0x4(%eax)
0874e8c3 +0x13:  movl   $0x0,0x8(%eax)
0874e8ca +0x1a:  movl   $0x0,0xc(%eax)
0874e8d1 +0x21:  movl   $0x0,0x10(%eax)
0874e8d8 +0x28:  movl   $0x0,0x14(%eax)
0874e8df +0x2f:  movl   $0x0,0x18(%eax)
0874e8e6 +0x36:  pop    %ebp
0874e8e7 +0x37:  ret
0874e8e8 +0x38:  nop
0874e8e9 +0x39:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::Buffers::Buffers @ 0x874e8b0

/* yaSSL::Buffers::Buffers() */

void __thiscall yaSSL::Buffers::Buffers(Buffers *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}
```

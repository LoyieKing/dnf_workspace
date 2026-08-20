# use_buffer

`_ZN5yaSSL4x50910use_bufferEv`

`yaSSL::x509::use_buffer()`

| 类 | 地址 |
|---|---|
| `yaSSL::x509` | `0x087973f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087973f0  _ZN5yaSSL4x50910use_bufferEv
#           yaSSL::x509::use_buffer()
# range [0x087973f0, 0x087973fc]
087973f0 +0x00:  push   %ebp
087973f1 +0x01:  mov    %esp,%ebp
087973f3 +0x03:  mov    0x8(%ebp),%eax
087973f6 +0x06:  pop    %ebp
087973f7 +0x07:  mov    0x4(%eax),%eax
087973fa +0x0a:  ret
087973fb +0x0b:  nop
087973fc +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::x509::use_buffer @ 0x87973f0

/* yaSSL::x509::use_buffer() */

undefined4 __thiscall yaSSL::x509::use_buffer(x509 *this)

{
  return *(undefined4 *)(this + 4);
}
```

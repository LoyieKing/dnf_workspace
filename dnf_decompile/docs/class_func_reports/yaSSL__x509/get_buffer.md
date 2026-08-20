# get_buffer

`_ZNK5yaSSL4x50910get_bufferEv`

`yaSSL::x509::get_buffer() const`

| 类 | 地址 |
|---|---|
| `yaSSL::x509` | `0x087973e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087973e0  _ZNK5yaSSL4x50910get_bufferEv
#           yaSSL::x509::get_buffer() const
# range [0x087973e0, 0x087973ec]
087973e0 +0x00:  push   %ebp
087973e1 +0x01:  mov    %esp,%ebp
087973e3 +0x03:  mov    0x8(%ebp),%eax
087973e6 +0x06:  pop    %ebp
087973e7 +0x07:  mov    0x4(%eax),%eax
087973ea +0x0a:  ret
087973eb +0x0b:  nop
087973ec +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::x509::get_buffer @ 0x87973e0

/* yaSSL::x509::get_buffer() const */

undefined4 __thiscall yaSSL::x509::get_buffer(x509 *this)

{
  return *(undefined4 *)(this + 4);
}
```

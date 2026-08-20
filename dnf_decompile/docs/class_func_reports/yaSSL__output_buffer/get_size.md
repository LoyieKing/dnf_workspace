# get_size

`_ZNK5yaSSL13output_buffer8get_sizeEv`

`yaSSL::output_buffer::get_size() const`

| 类 | 地址 |
|---|---|
| `yaSSL::output_buffer` | `0x08796ec0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08796ec0  _ZNK5yaSSL13output_buffer8get_sizeEv
#           yaSSL::output_buffer::get_size() const
# range [0x08796ec0, 0x08796eca]
08796ec0 +0x00:  push   %ebp
08796ec1 +0x01:  mov    %esp,%ebp
08796ec3 +0x03:  mov    0x8(%ebp),%eax
08796ec6 +0x06:  pop    %ebp
08796ec7 +0x07:  mov    (%eax),%eax
08796ec9 +0x09:  ret
08796eca +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::output_buffer::get_size @ 0x8796ec0

/* yaSSL::output_buffer::get_size() const */

undefined4 __thiscall yaSSL::output_buffer::get_size(output_buffer *this)

{
  return *(undefined4 *)this;
}
```

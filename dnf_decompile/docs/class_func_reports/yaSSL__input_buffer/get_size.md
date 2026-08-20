# get_size

`_ZNK5yaSSL12input_buffer8get_sizeEv`

`yaSSL::input_buffer::get_size() const`

| 类 | 地址 |
|---|---|
| `yaSSL::input_buffer` | `0x08796db0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08796db0  _ZNK5yaSSL12input_buffer8get_sizeEv
#           yaSSL::input_buffer::get_size() const
# range [0x08796db0, 0x08796dba]
08796db0 +0x00:  push   %ebp
08796db1 +0x01:  mov    %esp,%ebp
08796db3 +0x03:  mov    0x8(%ebp),%eax
08796db6 +0x06:  pop    %ebp
08796db7 +0x07:  mov    (%eax),%eax
08796db9 +0x09:  ret
08796dba +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::input_buffer::get_size @ 0x8796db0

/* yaSSL::input_buffer::get_size() const */

undefined4 __thiscall yaSSL::input_buffer::get_size(input_buffer *this)

{
  return *(undefined4 *)this;
}
```

# get_current

`_ZNK5yaSSL12input_buffer11get_currentEv`

`yaSSL::input_buffer::get_current() const`

| 类 | 地址 |
|---|---|
| `yaSSL::input_buffer` | `0x08796da0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08796da0  _ZNK5yaSSL12input_buffer11get_currentEv
#           yaSSL::input_buffer::get_current() const
# range [0x08796da0, 0x08796dac]
08796da0 +0x00:  push   %ebp
08796da1 +0x01:  mov    %esp,%ebp
08796da3 +0x03:  mov    0x8(%ebp),%eax
08796da6 +0x06:  pop    %ebp
08796da7 +0x07:  mov    0x4(%eax),%eax
08796daa +0x0a:  ret
08796dab +0x0b:  nop
08796dac +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::input_buffer::get_current @ 0x8796da0

/* yaSSL::input_buffer::get_current() const */

undefined4 __thiscall yaSSL::input_buffer::get_current(input_buffer *this)

{
  return *(undefined4 *)(this + 4);
}
```

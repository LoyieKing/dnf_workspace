# set_buffer

`_ZN5yaSSL4Data10set_bufferEv`

`yaSSL::Data::set_buffer()`

| 类 | 地址 |
|---|---|
| `yaSSL::Data` | `0x08746cc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746cc0  _ZN5yaSSL4Data10set_bufferEv
#           yaSSL::Data::set_buffer()
# range [0x08746cc0, 0x08746ccc]
08746cc0 +0x00:  push   %ebp
08746cc1 +0x01:  mov    %esp,%ebp
08746cc3 +0x03:  mov    0x8(%ebp),%eax
08746cc6 +0x06:  pop    %ebp
08746cc7 +0x07:  mov    0x8(%eax),%eax
08746cca +0x0a:  ret
08746ccb +0x0b:  nop
08746ccc +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::Data::set_buffer @ 0x8746cc0

/* yaSSL::Data::set_buffer() */

undefined4 __thiscall yaSSL::Data::set_buffer(Data *this)

{
  return *(undefined4 *)(this + 8);
}
```

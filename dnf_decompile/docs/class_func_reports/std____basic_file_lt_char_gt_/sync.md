# sync

`_ZNSt12__basic_fileIcE4syncEv`

`std::__basic_file<char>::sync()`

| 类 | 地址 |
|---|---|
| `std::__basic_file<char>` | `0x087225a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087225a0  _ZNSt12__basic_fileIcE4syncEv
#           std::__basic_file<char>::sync()
# range [0x087225a0, 0x087225bf]
087225a0 +0x00:  push   %ebp
087225a1 +0x01:  mov    %esp,%ebp
087225a3 +0x03:  sub    $0x8,%esp
087225a6 +0x06:  mov    0x8(%ebp),%eax
087225a9 +0x09:  mov    (%eax),%eax
087225ab +0x0b:  mov    %eax,0x8(%ebp)
087225ae +0x0e:  leave
087225af +0x0f:  jmp    0807e8d0 <_init+0x11c8>
087225b4 +0x14:  nop
087225b5 +0x15:  nop
087225b6 +0x16:  nop
087225b7 +0x17:  nop
087225b8 +0x18:  nop
087225b9 +0x19:  nop
087225ba +0x1a:  nop
087225bb +0x1b:  nop
087225bc +0x1c:  nop
087225bd +0x1d:  nop
087225be +0x1e:  nop
087225bf +0x1f:  nop
```

## 反编译 C

```c
// std::__basic_file<char>::sync @ 0x87225a0

/* std::__basic_file<char>::sync() */

void __thiscall std::__basic_file<char>::sync(__basic_file<char> *this)

{
  fflush((FILE *)this->_M_cfile);
  return;
}
```

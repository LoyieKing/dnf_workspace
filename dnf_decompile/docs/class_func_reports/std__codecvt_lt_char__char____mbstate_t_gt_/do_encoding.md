# do_encoding

`_ZNKSt7codecvtIcc11__mbstate_tE11do_encodingEv`

`std::codecvt<char, char, __mbstate_t>::do_encoding() const`

| 类 | 地址 |
|---|---|
| `std::codecvt<char, char, __mbstate_t>` | `0x08725fd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08725fd0  _ZNKSt7codecvtIcc11__mbstate_tE11do_encodingEv
#           std::codecvt<char, char, __mbstate_t>::do_encoding() const
# range [0x08725fd0, 0x08725fdf]
08725fd0 +0x00:  push   %ebp
08725fd1 +0x01:  mov    $0x1,%eax
08725fd6 +0x06:  mov    %esp,%ebp
08725fd8 +0x08:  pop    %ebp
08725fd9 +0x09:  ret
08725fda +0x0a:  nop
08725fdb +0x0b:  nop
08725fdc +0x0c:  nop
08725fdd +0x0d:  nop
08725fde +0x0e:  nop
08725fdf +0x0f:  nop
```

## 反编译 C

```c
// std::codecvt<char, @ 0x8725fd0

/* std::codecvt<char, char, __mbstate_t>::do_encoding() const */

undefined4 std::codecvt<char,char,__mbstate_t>::do_encoding(void)

{
  return 1;
}
```

# reset

`_ZN8WongWork8CMailBox5resetEv`

`WongWork::CMailBox::reset()`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBox` | `0x08551f4a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08551f4a  _ZN8WongWork8CMailBox5resetEv
#           WongWork::CMailBox::reset()
# range [0x08551f4a, 0x08551f59]
08551f4a +0x00:  push   %ebp
08551f4b +0x01:  mov    %esp,%ebp
08551f4d +0x03:  mov    0x8(%ebp),%eax
08551f50 +0x06:  movl   $0x0,0xc(%eax)
08551f57 +0x0d:  pop    %ebp
08551f58 +0x0e:  ret
08551f59 +0x0f:  nop
```

## 反编译 C

```c
// WongWork::CMailBox::reset @ 0x8551f4a

/* WongWork::CMailBox::reset() */

void __thiscall WongWork::CMailBox::reset(CMailBox *this)

{
  *(undefined4 *)(this + 0xc) = 0;
  return;
}
```

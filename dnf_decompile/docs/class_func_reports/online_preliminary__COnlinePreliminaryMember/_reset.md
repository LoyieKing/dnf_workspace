# _reset

`_ZN18online_preliminary24COnlinePreliminaryMember6_resetEv`

`online_preliminary::COnlinePreliminaryMember::_reset()`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryMember` | `0x08586100` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08586100  _ZN18online_preliminary24COnlinePreliminaryMember6_resetEv
#           online_preliminary::COnlinePreliminaryMember::_reset()
# range [0x08586100, 0x08586123]
08586100 +0x00:  push   %ebp
08586101 +0x01:  mov    %esp,%ebp
08586103 +0x03:  mov    0x8(%ebp),%eax
08586106 +0x06:  mov    $0x0,%edx
0858610b +0x0b:  mov    %edx,0x8(%eax)
0858610e +0x0e:  mov    0x8(%ebp),%eax
08586111 +0x11:  movl   $0x0,0xc(%eax)
08586118 +0x18:  mov    0x8(%ebp),%eax
0858611b +0x1b:  movl   $0x0,0x10(%eax)
08586122 +0x22:  pop    %ebp
08586123 +0x23:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryMember::_reset @ 0x8586100

/* online_preliminary::COnlinePreliminaryMember::_reset() */

void __thiscall online_preliminary::COnlinePreliminaryMember::_reset(COnlinePreliminaryMember *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}
```

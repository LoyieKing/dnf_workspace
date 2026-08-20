# _reset

`_ZN19CCharacInformNotice6_resetEv`

`CCharacInformNotice::_reset()`

| 类 | 地址 |
|---|---|
| `CCharacInformNotice` | `0x080e4ab8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e4ab8  _ZN19CCharacInformNotice6_resetEv
#           CCharacInformNotice::_reset()
# range [0x080e4ab8, 0x080e4add]
080e4ab8 +0x00:  push   %ebp
080e4ab9 +0x01:  mov    %esp,%ebp
080e4abb +0x03:  sub    $0x18,%esp
080e4abe +0x06:  mov    0x8(%ebp),%eax
080e4ac1 +0x09:  add    $0x5,%eax
080e4ac4 +0x0c:  movl   $0x10,0x8(%esp)
080e4acc +0x14:  movl   $0x0,0x4(%esp)
080e4ad4 +0x1c:  mov    %eax,(%esp)
080e4ad7 +0x1f:  call   0807dcc0 <_init+0x5b8>
080e4adc +0x24:  leave
080e4add +0x25:  ret
```

## 反编译 C

```c
// CCharacInformNotice::_reset @ 0x80e4ab8

/* CCharacInformNotice::_reset() */

void __thiscall CCharacInformNotice::_reset(CCharacInformNotice *this)

{
  memset(this + 5,0,0x10);
  return;
}
```

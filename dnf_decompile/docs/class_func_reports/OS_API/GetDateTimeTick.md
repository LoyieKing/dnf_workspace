# GetDateTimeTick

`_ZN6OS_API15GetDateTimeTickEv`

`OS_API::GetDateTimeTick()`

| 类 | 地址 |
|---|---|
| `OS_API` | `0x0858c802` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858c802  _ZN6OS_API15GetDateTimeTickEv
#           OS_API::GetDateTimeTick()
# range [0x0858c802, 0x0858c81b]
0858c802 +0x00:  push   %ebp
0858c803 +0x01:  mov    %esp,%ebp
0858c805 +0x03:  sub    $0x28,%esp
0858c808 +0x06:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0858c80f +0x0d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0858c814 +0x12:  mov    %eax,-0xc(%ebp)
0858c817 +0x15:  mov    -0xc(%ebp),%eax
0858c81a +0x18:  leave
0858c81b +0x19:  ret
```

## 反编译 C

```c
// OS_API::GetDateTimeTick @ 0x858c802

/* OS_API::GetDateTimeTick() */

undefined4 OS_API::GetDateTimeTick(void)

{
  undefined4 uVar1;
  
  uVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  return uVar1;
}
```

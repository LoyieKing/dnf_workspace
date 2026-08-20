# isTimeAttackSeccess

`_ZN8Sanicova4CPad19isTimeAttackSeccessEv`

`Sanicova::CPad::isTimeAttackSeccess()`

| 类 | 地址 |
|---|---|
| `Sanicova::CPad` | `0x0859979c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859979c  _ZN8Sanicova4CPad19isTimeAttackSeccessEv
#           Sanicova::CPad::isTimeAttackSeccess()
# range [0x0859979c, 0x085997b7]
0859979c +0x00:  push   %ebp
0859979d +0x01:  mov    %esp,%ebp
0859979f +0x03:  sub    $0x28,%esp
085997a2 +0x06:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085997a9 +0x0d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
085997ae +0x12:  mov    %eax,-0xc(%ebp)
085997b1 +0x15:  mov    $0x1,%eax
085997b6 +0x1a:  leave
085997b7 +0x1b:  ret
```

## 反编译 C

```c
// Sanicova::CPad::isTimeAttackSeccess @ 0x859979c

/* Sanicova::CPad::isTimeAttackSeccess() */

undefined4 Sanicova::CPad::isTimeAttackSeccess(void)

{
  CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  return 1;
}
```

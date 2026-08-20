# setLoginTime

`_ZN19Secu_AccountHacking12setLoginTimeEv`

`Secu_AccountHacking::setLoginTime()`

| 类 | 地址 |
|---|---|
| `Secu_AccountHacking` | `0x08279020` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08279020  _ZN19Secu_AccountHacking12setLoginTimeEv
#           Secu_AccountHacking::setLoginTime()
# range [0x08279020, 0x0827903b]
08279020 +0x00:  push   %ebp
08279021 +0x01:  mov    %esp,%ebp
08279023 +0x03:  sub    $0x18,%esp
08279026 +0x06:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0827902d +0x0d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08279032 +0x12:  mov    %eax,%edx
08279034 +0x14:  mov    0x8(%ebp),%eax
08279037 +0x17:  mov    %edx,0xc(%eax)
0827903a +0x1a:  leave
0827903b +0x1b:  ret
```

## 反编译 C

```c
// Secu_AccountHacking::setLoginTime @ 0x8279020

/* Secu_AccountHacking::setLoginTime() */

void __thiscall Secu_AccountHacking::setLoginTime(Secu_AccountHacking *this)

{
  undefined4 uVar1;
  
  uVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(this + 0xc) = uVar1;
  return;
}
```

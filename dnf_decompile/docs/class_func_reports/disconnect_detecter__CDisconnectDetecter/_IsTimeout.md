# _IsTimeout

`_ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi`

`disconnect_detecter::CDisconnectDetecter::_IsTimeout(int)`

| 类 | 地址 |
|---|---|
| `disconnect_detecter::CDisconnectDetecter` | `0x084721f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084721f4  _ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi
#           disconnect_detecter::CDisconnectDetecter::_IsTimeout(int)
# range [0x084721f4, 0x08472221]
084721f4 +0x00:  push   %ebp
084721f5 +0x01:  mov    %esp,%ebp
084721f7 +0x03:  sub    $0x18,%esp
084721fa +0x06:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08472201 +0x0d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08472206 +0x12:  sub    0xc(%ebp),%eax
08472209 +0x15:  cmp    $0x1e,%eax
0847220c +0x18:  setg   %al
0847220f +0x1b:  test   %al,%al
08472211 +0x1d:  je     0847221a <+0x26>
08472213 +0x1f:  mov    $0x1,%eax
08472218 +0x24:  jmp    0847221f <+0x2b>
0847221a +0x26:  mov    $0x0,%eax
0847221f +0x2b:  leave
08472220 +0x2c:  ret
08472221 +0x2d:  nop
```

## 反编译 C

```c
// disconnect_detecter::CDisconnectDetecter::_IsTimeout @ 0x84721f4

/* disconnect_detecter::CDisconnectDetecter::_IsTimeout(int) */

bool __thiscall
disconnect_detecter::CDisconnectDetecter::_IsTimeout(CDisconnectDetecter *this,int param_1)

{
  int iVar1;
  
  iVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  return 0x1e < iVar1 - param_1;
}
```

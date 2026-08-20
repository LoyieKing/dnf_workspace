# dispatch_sig

`_ZN23Dispatcher_JoinPowerWar12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_JoinPowerWar::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_JoinPowerWar` | `0x0821701a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821701a  _ZN23Dispatcher_JoinPowerWar12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_JoinPowerWar::dispatch_sig(CUser*, PacketBuf&)
# range [0x0821701a, 0x08217045]
0821701a +0x00:  push   %ebp
0821701b +0x01:  mov    %esp,%ebp
0821701d +0x03:  sub    $0x28,%esp
08217020 +0x06:  movl   $0x0,0xc(%esp)
08217028 +0x0e:  movl   $0x0,0x8(%esp)
08217030 +0x16:  movl   $&_ZZN23Dispatcher_JoinPowerWar12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08217038 +0x1e:  movl   $0xc8d3,(%esp)
0821703f +0x25:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08217044 +0x2a:  leave
08217045 +0x2b:  ret
```

## 反编译 C

```c
// Dispatcher_JoinPowerWar::dispatch_sig @ 0x821701a

/* Dispatcher_JoinPowerWar::dispatch_sig(CUser*, PacketBuf&) */

void Dispatcher_JoinPowerWar::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  LineFunc(0xc8d3,"virtual int Dispatcher_JoinPowerWar::dispatch_sig(CUser*, PacketBuf&)",0,0);
  return;
}
```

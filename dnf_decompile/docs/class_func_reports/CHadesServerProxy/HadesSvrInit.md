# HadesSvrInit

`_ZN17CHadesServerProxy12HadesSvrInitEv`

`CHadesServerProxy::HadesSvrInit()`

| 类 | 地址 |
|---|---|
| `CHadesServerProxy` | `0x0847059a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0847059a  _ZN17CHadesServerProxy12HadesSvrInitEv
#           CHadesServerProxy::HadesSvrInit()
# range [0x0847059a, 0x084705bd]
0847059a +0x00:  push   %ebp
0847059b +0x01:  mov    %esp,%ebp
0847059d +0x03:  sub    $0x18,%esp
084705a0 +0x06:  mov    0x8(%ebp),%eax
084705a3 +0x09:  mov    %eax,(%esp)
084705a6 +0x0c:  call   084705be <_ZN17CHadesServerProxy15ConnTcpHadesSvrEv>  ; CHadesServerProxy::ConnTcpHadesSvr()
084705ab +0x11:  mov    0x8(%ebp),%eax
084705ae +0x14:  mov    %eax,(%esp)
084705b1 +0x17:  call   08470628 <_ZN17CHadesServerProxy7InitUdpEv>  ; CHadesServerProxy::InitUdp()
084705b6 +0x1c:  mov    $0x1,%eax
084705bb +0x21:  leave
084705bc +0x22:  ret
084705bd +0x23:  nop
```

## 反编译 C

```c
// CHadesServerProxy::HadesSvrInit @ 0x847059a

/* CHadesServerProxy::HadesSvrInit() */

undefined4 __thiscall CHadesServerProxy::HadesSvrInit(CHadesServerProxy *this)

{
  ConnTcpHadesSvr(this);
  InitUdp(this);
  return 1;
}
```

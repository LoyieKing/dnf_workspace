# ConnTcpHadesSvr

`_ZN17CHadesServerProxy15ConnTcpHadesSvrEv`

`CHadesServerProxy::ConnTcpHadesSvr()`

| 类 | 地址 |
|---|---|
| `CHadesServerProxy` | `0x084705be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084705be  _ZN17CHadesServerProxy15ConnTcpHadesSvrEv
#           CHadesServerProxy::ConnTcpHadesSvr()
# range [0x084705be, 0x084705fd]
084705be +0x00:  push   %ebp
084705bf +0x01:  mov    %esp,%ebp
084705c1 +0x03:  sub    $0x18,%esp
084705c4 +0x06:  mov    0x8(%ebp),%eax
084705c7 +0x09:  mov    %eax,(%esp)
084705ca +0x0c:  call   082fd460 <_ZN15BaseServerProxy4InitEv>  ; BaseServerProxy::Init()
084705cf +0x11:  mov    0x8(%ebp),%eax
084705d2 +0x14:  movl   $0x2,0x4(%esp)
084705da +0x1c:  mov    %eax,(%esp)
084705dd +0x1f:  call   0847091a <_GLOBAL__I__ZN17CHadesServerProxyC2EPcii+0x53>  ; global constructors keyed to CHadesServerProxy::CHadesServerProxy(char*, int, int)+0x53
084705e2 +0x24:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084705e9 +0x2b:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084705ee +0x30:  mov    0x8(%ebp),%edx
084705f1 +0x33:  mov    %eax,&_ZL14gUnicodeBuffer+0x268ec(%edx)
084705f7 +0x39:  mov    $0x1,%eax
084705fc +0x3e:  leave
084705fd +0x3f:  ret
```

## 反编译 C

```c
// CHadesServerProxy::ConnTcpHadesSvr @ 0x84705be

/* CHadesServerProxy::ConnTcpHadesSvr() */

undefined4 __thiscall CHadesServerProxy::ConnTcpHadesSvr(CHadesServerProxy *this)

{
  undefined4 uVar1;
  
  BaseServerProxy::Init((BaseServerProxy *)this);
  BaseServerProxy::SetSocketState((BaseServerProxy *)this,2);
  uVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(this + 0x30e18) = uVar1;
  return 1;
}
```

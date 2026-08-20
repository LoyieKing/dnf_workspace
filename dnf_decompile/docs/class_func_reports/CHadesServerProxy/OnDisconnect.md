# OnDisconnect

`_ZN17CHadesServerProxy12OnDisconnectEv`

`CHadesServerProxy::OnDisconnect()`

| 类 | 地址 |
|---|---|
| `CHadesServerProxy` | `0x084707b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084707b6  _ZN17CHadesServerProxy12OnDisconnectEv
#           CHadesServerProxy::OnDisconnect()
# range [0x084707b6, 0x084707c9]
084707b6 +0x00:  push   %ebp
084707b7 +0x01:  mov    %esp,%ebp
084707b9 +0x03:  sub    $0x18,%esp
084707bc +0x06:  mov    0x8(%ebp),%eax
084707bf +0x09:  mov    %eax,(%esp)
084707c2 +0x0c:  call   084707ca <_ZN17CHadesServerProxy12RunConnTimerEv>  ; CHadesServerProxy::RunConnTimer()
084707c7 +0x11:  leave
084707c8 +0x12:  ret
084707c9 +0x13:  nop
```

## 反编译 C

```c
// CHadesServerProxy::OnDisconnect @ 0x84707b6

/* CHadesServerProxy::OnDisconnect() */

void CHadesServerProxy::OnDisconnect(void)

{
  RunConnTimer();
  return;
}
```

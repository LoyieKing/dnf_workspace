# dispatch_sig

`_ZN23Dispatcher_Secede_Power12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_Secede_Power::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Secede_Power` | `0x0820ba64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0820ba64  _ZN23Dispatcher_Secede_Power12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_Secede_Power::dispatch_sig(CUser*, PacketBuf&)
# range [0x0820ba64, 0x0820ba8f]
0820ba64 +0x00:  push   %ebp
0820ba65 +0x01:  mov    %esp,%ebp
0820ba67 +0x03:  sub    $0x28,%esp
0820ba6a +0x06:  movl   $0x0,0xc(%esp)
0820ba72 +0x0e:  movl   $0x0,0x8(%esp)
0820ba7a +0x16:  movl   $&_ZZN23Dispatcher_Secede_Power12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820ba82 +0x1e:  movl   $0xa91a,(%esp)
0820ba89 +0x25:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820ba8e +0x2a:  leave
0820ba8f +0x2b:  ret
```

## 反编译 C

```c
// Dispatcher_Secede_Power::dispatch_sig @ 0x820ba64

/* Dispatcher_Secede_Power::dispatch_sig(CUser*, PacketBuf&) */

void Dispatcher_Secede_Power::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  LineFunc(0xa91a,"virtual int Dispatcher_Secede_Power::dispatch_sig(CUser*, PacketBuf&)",0,0);
  return;
}
```

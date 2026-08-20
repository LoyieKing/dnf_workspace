# dispatch_sig

`_ZN21Dispatcher_Join_Power12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_Join_Power::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Join_Power` | `0x0820ba38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0820ba38  _ZN21Dispatcher_Join_Power12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_Join_Power::dispatch_sig(CUser*, PacketBuf&)
# range [0x0820ba38, 0x0820ba63]
0820ba38 +0x00:  push   %ebp
0820ba39 +0x01:  mov    %esp,%ebp
0820ba3b +0x03:  sub    $0x38,%esp
0820ba3e +0x06:  movl   $0x0,0xc(%esp)
0820ba46 +0x0e:  movl   $0x0,0x8(%esp)
0820ba4e +0x16:  movl   $&_ZZN21Dispatcher_Join_Power12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820ba56 +0x1e:  movl   $0xa8a7,(%esp)
0820ba5d +0x25:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820ba62 +0x2a:  leave
0820ba63 +0x2b:  ret
```

## 反编译 C

```c
// Dispatcher_Join_Power::dispatch_sig @ 0x820ba38

/* Dispatcher_Join_Power::dispatch_sig(CUser*, PacketBuf&) */

void Dispatcher_Join_Power::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  LineFunc(0xa8a7,"virtual int Dispatcher_Join_Power::dispatch_sig(CUser*, PacketBuf&)",0,0);
  return;
}
```

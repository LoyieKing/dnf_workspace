# dispatch_sig

`_ZN23DisPatcher_EnterWarRoom12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_EnterWarRoom::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_EnterWarRoom` | `0x0820229e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0820229e  _ZN23DisPatcher_EnterWarRoom12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_EnterWarRoom::dispatch_sig(CUser*, PacketBuf&)
# range [0x0820229e, 0x082022c9]
0820229e +0x00:  push   %ebp
0820229f +0x01:  mov    %esp,%ebp
082022a1 +0x03:  sub    $0x48,%esp
082022a4 +0x06:  movl   $0x0,0xc(%esp)
082022ac +0x0e:  movl   $0x0,0x8(%esp)
082022b4 +0x16:  movl   $&_ZZN23DisPatcher_EnterWarRoom12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082022bc +0x1e:  movl   $0x97fb,(%esp)
082022c3 +0x25:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082022c8 +0x2a:  leave
082022c9 +0x2b:  ret
```

## 反编译 C

```c
// DisPatcher_EnterWarRoom::dispatch_sig @ 0x820229e

/* DisPatcher_EnterWarRoom::dispatch_sig(CUser*, PacketBuf&) */

void DisPatcher_EnterWarRoom::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  LineFunc(0x97fb,"virtual int DisPatcher_EnterWarRoom::dispatch_sig(CUser*, PacketBuf&)",0,0);
  return;
}
```

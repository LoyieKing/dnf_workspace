# dispatch_sig

`_ZN27DisPatcher_StartWarRoomTemp12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_StartWarRoomTemp::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_StartWarRoomTemp` | `0x08201b06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08201b06  _ZN27DisPatcher_StartWarRoomTemp12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_StartWarRoomTemp::dispatch_sig(CUser*, PacketBuf&)
# range [0x08201b06, 0x08201b31]
08201b06 +0x00:  push   %ebp
08201b07 +0x01:  mov    %esp,%ebp
08201b09 +0x03:  sub    $0x28,%esp
08201b0c +0x06:  movl   $0x0,0xc(%esp)
08201b14 +0x0e:  movl   $0x0,0x8(%esp)
08201b1c +0x16:  movl   $&_ZZN27DisPatcher_StartWarRoomTemp12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08201b24 +0x1e:  movl   $0x9737,(%esp)
08201b2b +0x25:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08201b30 +0x2a:  leave
08201b31 +0x2b:  ret
```

## 反编译 C

```c
// DisPatcher_StartWarRoomTemp::dispatch_sig @ 0x8201b06

/* DisPatcher_StartWarRoomTemp::dispatch_sig(CUser*, PacketBuf&) */

void DisPatcher_StartWarRoomTemp::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  LineFunc(0x9737,"virtual int DisPatcher_StartWarRoomTemp::dispatch_sig(CUser*, PacketBuf&)",0,0);
  return;
}
```

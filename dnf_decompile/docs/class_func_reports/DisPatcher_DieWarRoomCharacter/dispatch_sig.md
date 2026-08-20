# dispatch_sig

`_ZN30DisPatcher_DieWarRoomCharacter12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_DieWarRoomCharacter::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DieWarRoomCharacter` | `0x082022f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082022f6  _ZN30DisPatcher_DieWarRoomCharacter12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_DieWarRoomCharacter::dispatch_sig(CUser*, PacketBuf&)
# range [0x082022f6, 0x08202321]
082022f6 +0x00:  push   %ebp
082022f7 +0x01:  mov    %esp,%ebp
082022f9 +0x03:  sub    $0x38,%esp
082022fc +0x06:  movl   $0x0,0xc(%esp)
08202304 +0x0e:  movl   $0x0,0x8(%esp)
0820230c +0x16:  movl   $&_ZZN30DisPatcher_DieWarRoomCharacter12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08202314 +0x1e:  movl   $0x9867,(%esp)
0820231b +0x25:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08202320 +0x2a:  leave
08202321 +0x2b:  ret
```

## 反编译 C

```c
// DisPatcher_DieWarRoomCharacter::dispatch_sig @ 0x82022f6

/* DisPatcher_DieWarRoomCharacter::dispatch_sig(CUser*, PacketBuf&) */

void DisPatcher_DieWarRoomCharacter::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  LineFunc(0x9867,"virtual int DisPatcher_DieWarRoomCharacter::dispatch_sig(CUser*, PacketBuf&)",0,0
          );
  return;
}
```

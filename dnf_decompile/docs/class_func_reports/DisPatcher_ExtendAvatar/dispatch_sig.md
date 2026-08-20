# dispatch_sig

`_ZN23DisPatcher_ExtendAvatar12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_ExtendAvatar::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_ExtendAvatar` | `0x081eddec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081eddec  _ZN23DisPatcher_ExtendAvatar12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_ExtendAvatar::dispatch_sig(CUser*, PacketBuf&)
# range [0x081eddec, 0x081eddf5]
081eddec +0x00:  push   %ebp
081edded +0x01:  mov    %esp,%ebp
081eddef +0x03:  mov    $0x0,%eax
081eddf4 +0x08:  pop    %ebp
081eddf5 +0x09:  ret
```

## 反编译 C

```c
// DisPatcher_ExtendAvatar::dispatch_sig @ 0x81eddec

/* DisPatcher_ExtendAvatar::dispatch_sig(CUser*, PacketBuf&) */

undefined4 DisPatcher_ExtendAvatar::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  return 0;
}
```

# dispatch_sig

`_ZN24Dispatcher_GiveGiftToNPC12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_GiveGiftToNPC::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GiveGiftToNPC` | `0x0821e4ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821e4ac  _ZN24Dispatcher_GiveGiftToNPC12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_GiveGiftToNPC::dispatch_sig(CUser*, PacketBuf&)
# range [0x0821e4ac, 0x0821e4b5]
0821e4ac +0x00:  push   %ebp
0821e4ad +0x01:  mov    %esp,%ebp
0821e4af +0x03:  mov    $0x0,%eax
0821e4b4 +0x08:  pop    %ebp
0821e4b5 +0x09:  ret
```

## 反编译 C

```c
// Dispatcher_GiveGiftToNPC::dispatch_sig @ 0x821e4ac

/* Dispatcher_GiveGiftToNPC::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_GiveGiftToNPC::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  return 0;
}
```

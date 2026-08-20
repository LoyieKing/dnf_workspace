# dispatch_sig

`_ZN29Dispatcher_DungeonNPCBuffInfo12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_DungeonNPCBuffInfo::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_DungeonNPCBuffInfo` | `0x08223bb6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08223bb6  _ZN29Dispatcher_DungeonNPCBuffInfo12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_DungeonNPCBuffInfo::dispatch_sig(CUser*, PacketBuf&)
# range [0x08223bb6, 0x08223bbf]
08223bb6 +0x00:  push   %ebp
08223bb7 +0x01:  mov    %esp,%ebp
08223bb9 +0x03:  mov    $0x0,%eax
08223bbe +0x08:  pop    %ebp
08223bbf +0x09:  ret
```

## 反编译 C

```c
// Dispatcher_DungeonNPCBuffInfo::dispatch_sig @ 0x8223bb6

/* Dispatcher_DungeonNPCBuffInfo::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_DungeonNPCBuffInfo::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  return 0;
}
```

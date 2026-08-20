# dispatch_sig

`_ZN4ARAD10DISPATCHER27Dispatcher_AvartarCoinCount12dispatch_sigEP5CUserR9PacketBuf`

`ARAD::DISPATCHER::Dispatcher_AvartarCoinCount::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Dispatcher_AvartarCoinCount` | `0x0819f1bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819f1bc  _ZN4ARAD10DISPATCHER27Dispatcher_AvartarCoinCount12dispatch_sigEP5CUserR9PacketBuf
#           ARAD::DISPATCHER::Dispatcher_AvartarCoinCount::dispatch_sig(CUser*, PacketBuf&)
# range [0x0819f1bc, 0x0819f1e1]
0819f1bc +0x00:  push   %ebp
0819f1bd +0x01:  mov    %esp,%ebp
0819f1bf +0x03:  sub    $0x18,%esp
0819f1c2 +0x06:  mov    0xc(%ebp),%eax
0819f1c5 +0x09:  mov    %eax,(%esp)
0819f1c8 +0x0c:  call   0817ffe4 <_ZN10AvatarCoin14SendSyncPacketEP5CUser>  ; AvatarCoin::SendSyncPacket(CUser*)
0819f1cd +0x11:  xor    $0x1,%eax
0819f1d0 +0x14:  test   %al,%al
0819f1d2 +0x16:  je     0819f1db <+0x1f>
0819f1d4 +0x18:  mov    $0x353,%eax
0819f1d9 +0x1d:  jmp    0819f1e0 <+0x24>
0819f1db +0x1f:  mov    $0x0,%eax
0819f1e0 +0x24:  leave
0819f1e1 +0x25:  ret
```

## 反编译 C

```c
// ARAD::DISPATCHER::Dispatcher_AvartarCoinCount::dispatch_sig @ 0x819f1bc

/* ARAD::DISPATCHER::Dispatcher_AvartarCoinCount::dispatch_sig(CUser*, PacketBuf&) */

undefined4
ARAD::DISPATCHER::Dispatcher_AvartarCoinCount::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = AvatarCoin::SendSyncPacket((CUser *)param_2);
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x353;
  }
  return uVar2;
}
```

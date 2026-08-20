# read

`_ZN31Dispatcher_PartyTeleportConfirm4readER9PacketBufR8MSG_BASE`

`Dispatcher_PartyTeleportConfirm::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PartyTeleportConfirm` | `0x081dc598` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dc598  _ZN31Dispatcher_PartyTeleportConfirm4readER9PacketBufR8MSG_BASE
#           Dispatcher_PartyTeleportConfirm::read(PacketBuf&, MSG_BASE&)
# range [0x081dc598, 0x081dc5ed]
081dc598 +0x00:  push   %ebp
081dc599 +0x01:  mov    %esp,%ebp
081dc59b +0x03:  sub    $0x28,%esp
081dc59e +0x06:  mov    0x10(%ebp),%eax
081dc5a1 +0x09:  mov    %eax,-0xc(%ebp)
081dc5a4 +0x0c:  mov    -0xc(%ebp),%eax
081dc5a7 +0x0f:  add    $0xd,%eax
081dc5aa +0x12:  mov    %eax,0x4(%esp)
081dc5ae +0x16:  mov    0xc(%ebp),%eax
081dc5b1 +0x19:  mov    %eax,(%esp)
081dc5b4 +0x1c:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081dc5b9 +0x21:  xor    $0x1,%eax
081dc5bc +0x24:  test   %al,%al
081dc5be +0x26:  je     081dc5e6 <+0x4e>
081dc5c0 +0x28:  movl   $0x0,0xc(%esp)
081dc5c8 +0x30:  movl   $0x0,0x8(%esp)
081dc5d0 +0x38:  movl   $&_ZZN31Dispatcher_PartyTeleportConfirm4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081dc5d8 +0x40:  movl   $0x4bd7,(%esp)
081dc5df +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081dc5e4 +0x4c:  jmp    081dc5eb <+0x53>
081dc5e6 +0x4e:  mov    $0x0,%eax
081dc5eb +0x53:  leave
081dc5ec +0x54:  ret
081dc5ed +0x55:  nop
```

## 反编译 C

```c
// Dispatcher_PartyTeleportConfirm::read @ 0x81dc598

/* Dispatcher_PartyTeleportConfirm::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_PartyTeleportConfirm::read
          (Dispatcher_PartyTeleportConfirm *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x4bd7,
                     "virtual int Dispatcher_PartyTeleportConfirm::read(PacketBuf&, MSG_BASE&)",0,0)
    ;
  }
  return uVar2;
}
```

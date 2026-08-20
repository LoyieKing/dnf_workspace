# read

`_ZN27Dispatcher_ApproveJoinGuild4readER9PacketBufR8MSG_BASE`

`Dispatcher_ApproveJoinGuild::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ApproveJoinGuild` | `0x081d505e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d505e  _ZN27Dispatcher_ApproveJoinGuild4readER9PacketBufR8MSG_BASE
#           Dispatcher_ApproveJoinGuild::read(PacketBuf&, MSG_BASE&)
# range [0x081d505e, 0x081d50b3]
081d505e +0x00:  push   %ebp
081d505f +0x01:  mov    %esp,%ebp
081d5061 +0x03:  sub    $0x28,%esp
081d5064 +0x06:  mov    0x10(%ebp),%eax
081d5067 +0x09:  mov    %eax,-0xc(%ebp)
081d506a +0x0c:  mov    -0xc(%ebp),%eax
081d506d +0x0f:  add    $0xd,%eax
081d5070 +0x12:  mov    %eax,0x4(%esp)
081d5074 +0x16:  mov    0xc(%ebp),%eax
081d5077 +0x19:  mov    %eax,(%esp)
081d507a +0x1c:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081d507f +0x21:  xor    $0x1,%eax
081d5082 +0x24:  test   %al,%al
081d5084 +0x26:  je     081d50ac <+0x4e>
081d5086 +0x28:  movl   $0x0,0xc(%esp)
081d508e +0x30:  movl   $0x0,0x8(%esp)
081d5096 +0x38:  movl   $&_ZZN27Dispatcher_ApproveJoinGuild4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d509e +0x40:  movl   $0x355a,(%esp)
081d50a5 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d50aa +0x4c:  jmp    081d50b1 <+0x53>
081d50ac +0x4e:  mov    $0x0,%eax
081d50b1 +0x53:  leave
081d50b2 +0x54:  ret
081d50b3 +0x55:  nop
```

## 反编译 C

```c
// Dispatcher_ApproveJoinGuild::read @ 0x81d505e

/* Dispatcher_ApproveJoinGuild::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ApproveJoinGuild::read
          (Dispatcher_ApproveJoinGuild *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x355a,"virtual int Dispatcher_ApproveJoinGuild::read(PacketBuf&, MSG_BASE&)",0
                     ,0);
  }
  return uVar2;
}
```

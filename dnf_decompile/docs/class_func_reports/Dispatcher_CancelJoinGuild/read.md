# read

`_ZN26Dispatcher_CancelJoinGuild4readER9PacketBufR8MSG_BASE`

`Dispatcher_CancelJoinGuild::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CancelJoinGuild` | `0x081d4f76` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d4f76  _ZN26Dispatcher_CancelJoinGuild4readER9PacketBufR8MSG_BASE
#           Dispatcher_CancelJoinGuild::read(PacketBuf&, MSG_BASE&)
# range [0x081d4f76, 0x081d4fcb]
081d4f76 +0x00:  push   %ebp
081d4f77 +0x01:  mov    %esp,%ebp
081d4f79 +0x03:  sub    $0x28,%esp
081d4f7c +0x06:  mov    0x10(%ebp),%eax
081d4f7f +0x09:  mov    %eax,-0xc(%ebp)
081d4f82 +0x0c:  mov    -0xc(%ebp),%eax
081d4f85 +0x0f:  add    $0xd,%eax
081d4f88 +0x12:  mov    %eax,0x4(%esp)
081d4f8c +0x16:  mov    0xc(%ebp),%eax
081d4f8f +0x19:  mov    %eax,(%esp)
081d4f92 +0x1c:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081d4f97 +0x21:  xor    $0x1,%eax
081d4f9a +0x24:  test   %al,%al
081d4f9c +0x26:  je     081d4fc4 <+0x4e>
081d4f9e +0x28:  movl   $0x0,0xc(%esp)
081d4fa6 +0x30:  movl   $0x0,0x8(%esp)
081d4fae +0x38:  movl   $&_ZZN26Dispatcher_CancelJoinGuild4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d4fb6 +0x40:  movl   $0x353c,(%esp)
081d4fbd +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d4fc2 +0x4c:  jmp    081d4fc9 <+0x53>
081d4fc4 +0x4e:  mov    $0x0,%eax
081d4fc9 +0x53:  leave
081d4fca +0x54:  ret
081d4fcb +0x55:  nop
```

## 反编译 C

```c
// Dispatcher_CancelJoinGuild::read @ 0x81d4f76

/* Dispatcher_CancelJoinGuild::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_CancelJoinGuild::read
          (Dispatcher_CancelJoinGuild *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x353c,"virtual int Dispatcher_CancelJoinGuild::read(PacketBuf&, MSG_BASE&)",0,
                     0);
  }
  return uVar2;
}
```

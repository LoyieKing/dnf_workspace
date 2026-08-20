# read

`_ZN24Dispatcher_DenyJoinGuild4readER9PacketBufR8MSG_BASE`

`Dispatcher_DenyJoinGuild::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_DenyJoinGuild` | `0x081d5190` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d5190  _ZN24Dispatcher_DenyJoinGuild4readER9PacketBufR8MSG_BASE
#           Dispatcher_DenyJoinGuild::read(PacketBuf&, MSG_BASE&)
# range [0x081d5190, 0x081d51e5]
081d5190 +0x00:  push   %ebp
081d5191 +0x01:  mov    %esp,%ebp
081d5193 +0x03:  sub    $0x28,%esp
081d5196 +0x06:  mov    0x10(%ebp),%eax
081d5199 +0x09:  mov    %eax,-0xc(%ebp)
081d519c +0x0c:  mov    -0xc(%ebp),%eax
081d519f +0x0f:  add    $0xd,%eax
081d51a2 +0x12:  mov    %eax,0x4(%esp)
081d51a6 +0x16:  mov    0xc(%ebp),%eax
081d51a9 +0x19:  mov    %eax,(%esp)
081d51ac +0x1c:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081d51b1 +0x21:  xor    $0x1,%eax
081d51b4 +0x24:  test   %al,%al
081d51b6 +0x26:  je     081d51de <+0x4e>
081d51b8 +0x28:  movl   $0x0,0xc(%esp)
081d51c0 +0x30:  movl   $0x0,0x8(%esp)
081d51c8 +0x38:  movl   $&_ZZN24Dispatcher_DenyJoinGuild4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d51d0 +0x40:  movl   $0x357f,(%esp)
081d51d7 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d51dc +0x4c:  jmp    081d51e3 <+0x53>
081d51de +0x4e:  mov    $0x0,%eax
081d51e3 +0x53:  leave
081d51e4 +0x54:  ret
081d51e5 +0x55:  nop
```

## 反编译 C

```c
// Dispatcher_DenyJoinGuild::read @ 0x81d5190

/* Dispatcher_DenyJoinGuild::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_DenyJoinGuild::read(Dispatcher_DenyJoinGuild *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x357f,"virtual int Dispatcher_DenyJoinGuild::read(PacketBuf&, MSG_BASE&)",0,0)
    ;
  }
  return uVar2;
}
```

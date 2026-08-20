# read

`_ZN23Dispatcher_CollectItems4readER9PacketBufR8MSG_BASE`

`Dispatcher_CollectItems::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CollectItems` | `0x081e33a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e33a4  _ZN23Dispatcher_CollectItems4readER9PacketBufR8MSG_BASE
#           Dispatcher_CollectItems::read(PacketBuf&, MSG_BASE&)
# range [0x081e33a4, 0x081e343b]
081e33a4 +0x00:  push   %ebp
081e33a5 +0x01:  mov    %esp,%ebp
081e33a7 +0x03:  sub    $0x28,%esp
081e33aa +0x06:  mov    0x10(%ebp),%eax
081e33ad +0x09:  mov    %eax,-0xc(%ebp)
081e33b0 +0x0c:  mov    -0xc(%ebp),%eax
081e33b3 +0x0f:  add    $0xe,%eax
081e33b6 +0x12:  mov    %eax,0x4(%esp)
081e33ba +0x16:  mov    0xc(%ebp),%eax
081e33bd +0x19:  mov    %eax,(%esp)
081e33c0 +0x1c:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081e33c5 +0x21:  xor    $0x1,%eax
081e33c8 +0x24:  test   %al,%al
081e33ca +0x26:  je     081e33f2 <+0x4e>
081e33cc +0x28:  movl   $0x0,0xc(%esp)
081e33d4 +0x30:  movl   $0x0,0x8(%esp)
081e33dc +0x38:  movl   $&_ZZN23Dispatcher_CollectItems4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e33e4 +0x40:  movl   $0x5a8f,(%esp)
081e33eb +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e33f0 +0x4c:  jmp    081e3439 <+0x95>
081e33f2 +0x4e:  mov    -0xc(%ebp),%eax
081e33f5 +0x51:  add    $0x10,%eax
081e33f8 +0x54:  mov    %eax,0x4(%esp)
081e33fc +0x58:  mov    0xc(%ebp),%eax
081e33ff +0x5b:  mov    %eax,(%esp)
081e3402 +0x5e:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081e3407 +0x63:  xor    $0x1,%eax
081e340a +0x66:  test   %al,%al
081e340c +0x68:  je     081e3434 <+0x90>
081e340e +0x6a:  movl   $0x0,0xc(%esp)
081e3416 +0x72:  movl   $0x0,0x8(%esp)
081e341e +0x7a:  movl   $&_ZZN23Dispatcher_CollectItems4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e3426 +0x82:  movl   $0x5a90,(%esp)
081e342d +0x89:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e3432 +0x8e:  jmp    081e3439 <+0x95>
081e3434 +0x90:  mov    $0x0,%eax
081e3439 +0x95:  leave
081e343a +0x96:  ret
081e343b +0x97:  nop
```

## 反编译 C

```c
// Dispatcher_CollectItems::read @ 0x81e33a4

/* Dispatcher_CollectItems::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_CollectItems::read(Dispatcher_CollectItems *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x10));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x5a90,"virtual int Dispatcher_CollectItems::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
  }
  else {
    uVar2 = LineFunc(0x5a8f,"virtual int Dispatcher_CollectItems::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```

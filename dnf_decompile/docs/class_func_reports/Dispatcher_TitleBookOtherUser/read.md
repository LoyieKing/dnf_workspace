# read

`_ZN29Dispatcher_TitleBookOtherUser4readER9PacketBufR8MSG_BASE`

`Dispatcher_TitleBookOtherUser::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_TitleBookOtherUser` | `0x081d7d00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d7d00  _ZN29Dispatcher_TitleBookOtherUser4readER9PacketBufR8MSG_BASE
#           Dispatcher_TitleBookOtherUser::read(PacketBuf&, MSG_BASE&)
# range [0x081d7d00, 0x081d7d55]
081d7d00 +0x00:  push   %ebp
081d7d01 +0x01:  mov    %esp,%ebp
081d7d03 +0x03:  sub    $0x28,%esp
081d7d06 +0x06:  mov    0x10(%ebp),%eax
081d7d09 +0x09:  mov    %eax,-0xc(%ebp)
081d7d0c +0x0c:  mov    -0xc(%ebp),%eax
081d7d0f +0x0f:  add    $0xd,%eax
081d7d12 +0x12:  mov    %eax,0x4(%esp)
081d7d16 +0x16:  mov    0xc(%ebp),%eax
081d7d19 +0x19:  mov    %eax,(%esp)
081d7d1c +0x1c:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081d7d21 +0x21:  xor    $0x1,%eax
081d7d24 +0x24:  test   %al,%al
081d7d26 +0x26:  je     081d7d4e <+0x4e>
081d7d28 +0x28:  movl   $0x0,0xc(%esp)
081d7d30 +0x30:  movl   $0x0,0x8(%esp)
081d7d38 +0x38:  movl   $&_ZZN29Dispatcher_TitleBookOtherUser4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d7d40 +0x40:  movl   $0x4244,(%esp)
081d7d47 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d7d4c +0x4c:  jmp    081d7d53 <+0x53>
081d7d4e +0x4e:  mov    $0x0,%eax
081d7d53 +0x53:  leave
081d7d54 +0x54:  ret
081d7d55 +0x55:  nop
```

## 反编译 C

```c
// Dispatcher_TitleBookOtherUser::read @ 0x81d7d00

/* Dispatcher_TitleBookOtherUser::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_TitleBookOtherUser::read
          (Dispatcher_TitleBookOtherUser *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x4244,"virtual int Dispatcher_TitleBookOtherUser::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}
```

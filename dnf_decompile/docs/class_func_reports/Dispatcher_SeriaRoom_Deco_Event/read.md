# read

`_ZN31Dispatcher_SeriaRoom_Deco_Event4readER9PacketBufR8MSG_BASE`

`Dispatcher_SeriaRoom_Deco_Event::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SeriaRoom_Deco_Event` | `0x081e5c88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e5c88  _ZN31Dispatcher_SeriaRoom_Deco_Event4readER9PacketBufR8MSG_BASE
#           Dispatcher_SeriaRoom_Deco_Event::read(PacketBuf&, MSG_BASE&)
# range [0x081e5c88, 0x081e5cdd]
081e5c88 +0x00:  push   %ebp
081e5c89 +0x01:  mov    %esp,%ebp
081e5c8b +0x03:  sub    $0x28,%esp
081e5c8e +0x06:  mov    0x10(%ebp),%eax
081e5c91 +0x09:  mov    %eax,-0xc(%ebp)
081e5c94 +0x0c:  mov    -0xc(%ebp),%eax
081e5c97 +0x0f:  add    $0xe,%eax
081e5c9a +0x12:  mov    %eax,0x4(%esp)
081e5c9e +0x16:  mov    0xc(%ebp),%eax
081e5ca1 +0x19:  mov    %eax,(%esp)
081e5ca4 +0x1c:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081e5ca9 +0x21:  xor    $0x1,%eax
081e5cac +0x24:  test   %al,%al
081e5cae +0x26:  je     081e5cd6 <+0x4e>
081e5cb0 +0x28:  movl   $0x0,0xc(%esp)
081e5cb8 +0x30:  movl   $0x0,0x8(%esp)
081e5cc0 +0x38:  movl   $&_ZZN31Dispatcher_SeriaRoom_Deco_Event4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e5cc8 +0x40:  movl   $0x5fff,(%esp)
081e5ccf +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e5cd4 +0x4c:  jmp    081e5cdb <+0x53>
081e5cd6 +0x4e:  mov    $0x0,%eax
081e5cdb +0x53:  leave
081e5cdc +0x54:  ret
081e5cdd +0x55:  nop
```

## 反编译 C

```c
// Dispatcher_SeriaRoom_Deco_Event::read @ 0x81e5c88

/* Dispatcher_SeriaRoom_Deco_Event::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SeriaRoom_Deco_Event::read
          (Dispatcher_SeriaRoom_Deco_Event *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x5fff,
                     "virtual int Dispatcher_SeriaRoom_Deco_Event::read(PacketBuf&, MSG_BASE&)",0,0)
    ;
  }
  return uVar2;
}
```

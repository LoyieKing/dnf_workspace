# read

`_ZN30Dispatcher_WarRoomWpPerMonster4readER9PacketBufR8MSG_BASE`

`Dispatcher_WarRoomWpPerMonster::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_WarRoomWpPerMonster` | `0x081d5bcc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d5bcc  _ZN30Dispatcher_WarRoomWpPerMonster4readER9PacketBufR8MSG_BASE
#           Dispatcher_WarRoomWpPerMonster::read(PacketBuf&, MSG_BASE&)
# range [0x081d5bcc, 0x081d5ca7]
081d5bcc +0x00:  push   %ebp
081d5bcd +0x01:  mov    %esp,%ebp
081d5bcf +0x03:  sub    $0x28,%esp
081d5bd2 +0x06:  mov    0x10(%ebp),%eax
081d5bd5 +0x09:  mov    %eax,-0xc(%ebp)
081d5bd8 +0x0c:  mov    -0xc(%ebp),%eax
081d5bdb +0x0f:  add    $0xd,%eax
081d5bde +0x12:  mov    %eax,0x4(%esp)
081d5be2 +0x16:  mov    0xc(%ebp),%eax
081d5be5 +0x19:  mov    %eax,(%esp)
081d5be8 +0x1c:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081d5bed +0x21:  xor    $0x1,%eax
081d5bf0 +0x24:  test   %al,%al
081d5bf2 +0x26:  je     081d5c1d <+0x51>
081d5bf4 +0x28:  movl   $0x0,0xc(%esp)
081d5bfc +0x30:  movl   $0x0,0x8(%esp)
081d5c04 +0x38:  movl   $&_ZZN30Dispatcher_WarRoomWpPerMonster4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d5c0c +0x40:  movl   $0x397d,(%esp)
081d5c13 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d5c18 +0x4c:  jmp    081d5ca6 <+0xda>
081d5c1d +0x51:  mov    -0xc(%ebp),%eax
081d5c20 +0x54:  add    $0x11,%eax
081d5c23 +0x57:  mov    %eax,0x4(%esp)
081d5c27 +0x5b:  mov    0xc(%ebp),%eax
081d5c2a +0x5e:  mov    %eax,(%esp)
081d5c2d +0x61:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081d5c32 +0x66:  xor    $0x1,%eax
081d5c35 +0x69:  test   %al,%al
081d5c37 +0x6b:  je     081d5c5f <+0x93>
081d5c39 +0x6d:  movl   $0x0,0xc(%esp)
081d5c41 +0x75:  movl   $0x0,0x8(%esp)
081d5c49 +0x7d:  movl   $&_ZZN30Dispatcher_WarRoomWpPerMonster4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d5c51 +0x85:  movl   $0x3980,(%esp)
081d5c58 +0x8c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d5c5d +0x91:  jmp    081d5ca6 <+0xda>
081d5c5f +0x93:  mov    -0xc(%ebp),%eax
081d5c62 +0x96:  add    $0x15,%eax
081d5c65 +0x99:  mov    %eax,0x4(%esp)
081d5c69 +0x9d:  mov    0xc(%ebp),%eax
081d5c6c +0xa0:  mov    %eax,(%esp)
081d5c6f +0xa3:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081d5c74 +0xa8:  xor    $0x1,%eax
081d5c77 +0xab:  test   %al,%al
081d5c79 +0xad:  je     081d5ca1 <+0xd5>
081d5c7b +0xaf:  movl   $0x0,0xc(%esp)
081d5c83 +0xb7:  movl   $0x0,0x8(%esp)
081d5c8b +0xbf:  movl   $&_ZZN30Dispatcher_WarRoomWpPerMonster4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d5c93 +0xc7:  movl   $0x3983,(%esp)
081d5c9a +0xce:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d5c9f +0xd3:  jmp    081d5ca6 <+0xda>
081d5ca1 +0xd5:  mov    $0x0,%eax
081d5ca6 +0xda:  leave
081d5ca7 +0xdb:  ret
```

## 反编译 C

```c
// Dispatcher_WarRoomWpPerMonster::read @ 0x81d5bcc

/* Dispatcher_WarRoomWpPerMonster::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_WarRoomWpPerMonster::read
          (Dispatcher_WarRoomWpPerMonster *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x11));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x15));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x3983,
                         "virtual int Dispatcher_WarRoomWpPerMonster::read(PacketBuf&, MSG_BASE&)",0
                         ,0);
      }
    }
    else {
      uVar2 = LineFunc(0x3980,
                       "virtual int Dispatcher_WarRoomWpPerMonster::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
  }
  else {
    uVar2 = LineFunc(0x397d,
                     "virtual int Dispatcher_WarRoomWpPerMonster::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```

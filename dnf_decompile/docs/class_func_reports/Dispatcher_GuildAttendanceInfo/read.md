# read

`_ZN30Dispatcher_GuildAttendanceInfo4readER9PacketBufR8MSG_BASE`

`Dispatcher_GuildAttendanceInfo::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GuildAttendanceInfo` | `0x081d543c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d543c  _ZN30Dispatcher_GuildAttendanceInfo4readER9PacketBufR8MSG_BASE
#           Dispatcher_GuildAttendanceInfo::read(PacketBuf&, MSG_BASE&)
# range [0x081d543c, 0x081d5491]
081d543c +0x00:  push   %ebp
081d543d +0x01:  mov    %esp,%ebp
081d543f +0x03:  sub    $0x28,%esp
081d5442 +0x06:  mov    0x10(%ebp),%eax
081d5445 +0x09:  mov    %eax,-0xc(%ebp)
081d5448 +0x0c:  mov    -0xc(%ebp),%eax
081d544b +0x0f:  add    $0xd,%eax
081d544e +0x12:  mov    %eax,0x4(%esp)
081d5452 +0x16:  mov    0xc(%ebp),%eax
081d5455 +0x19:  mov    %eax,(%esp)
081d5458 +0x1c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081d545d +0x21:  xor    $0x1,%eax
081d5460 +0x24:  test   %al,%al
081d5462 +0x26:  je     081d548a <+0x4e>
081d5464 +0x28:  movl   $0x0,0xc(%esp)
081d546c +0x30:  movl   $0x0,0x8(%esp)
081d5474 +0x38:  movl   $&_ZZN30Dispatcher_GuildAttendanceInfo4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d547c +0x40:  movl   $0x35d9,(%esp)
081d5483 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d5488 +0x4c:  jmp    081d548f <+0x53>
081d548a +0x4e:  mov    $0x0,%eax
081d548f +0x53:  leave
081d5490 +0x54:  ret
081d5491 +0x55:  nop
```

## 反编译 C

```c
// Dispatcher_GuildAttendanceInfo::read @ 0x81d543c

/* Dispatcher_GuildAttendanceInfo::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_GuildAttendanceInfo::read
          (Dispatcher_GuildAttendanceInfo *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x35d9,
                     "virtual int Dispatcher_GuildAttendanceInfo::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```

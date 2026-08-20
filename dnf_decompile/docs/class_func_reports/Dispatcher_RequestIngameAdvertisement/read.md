# read

`_ZN37Dispatcher_RequestIngameAdvertisement4readER9PacketBufR8MSG_BASE`

`Dispatcher_RequestIngameAdvertisement::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestIngameAdvertisement` | `0x081e434c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e434c  _ZN37Dispatcher_RequestIngameAdvertisement4readER9PacketBufR8MSG_BASE
#           Dispatcher_RequestIngameAdvertisement::read(PacketBuf&, MSG_BASE&)
# range [0x081e434c, 0x081e43a1]
081e434c +0x00:  push   %ebp
081e434d +0x01:  mov    %esp,%ebp
081e434f +0x03:  sub    $0x28,%esp
081e4352 +0x06:  mov    0x10(%ebp),%eax
081e4355 +0x09:  mov    %eax,-0xc(%ebp)
081e4358 +0x0c:  mov    -0xc(%ebp),%eax
081e435b +0x0f:  add    $0xd,%eax
081e435e +0x12:  mov    %eax,0x4(%esp)
081e4362 +0x16:  mov    0xc(%ebp),%eax
081e4365 +0x19:  mov    %eax,(%esp)
081e4368 +0x1c:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081e436d +0x21:  xor    $0x1,%eax
081e4370 +0x24:  test   %al,%al
081e4372 +0x26:  je     081e439a <+0x4e>
081e4374 +0x28:  movl   $0x0,0xc(%esp)
081e437c +0x30:  movl   $0x0,0x8(%esp)
081e4384 +0x38:  movl   $&_ZZN37Dispatcher_RequestIngameAdvertisement4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e438c +0x40:  movl   $0x5c10,(%esp)
081e4393 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e4398 +0x4c:  jmp    081e439f <+0x53>
081e439a +0x4e:  mov    $0x0,%eax
081e439f +0x53:  leave
081e43a0 +0x54:  ret
081e43a1 +0x55:  nop
```

## 反编译 C

```c
// Dispatcher_RequestIngameAdvertisement::read @ 0x81e434c

/* Dispatcher_RequestIngameAdvertisement::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_RequestIngameAdvertisement::read
          (Dispatcher_RequestIngameAdvertisement *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x5c10,
                     "virtual int Dispatcher_RequestIngameAdvertisement::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}
```

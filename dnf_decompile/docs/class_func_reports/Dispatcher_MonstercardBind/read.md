# read

`_ZN26Dispatcher_MonstercardBind4readER9PacketBufR8MSG_BASE`

`Dispatcher_MonstercardBind::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MonstercardBind` | `0x081d82e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d82e8  _ZN26Dispatcher_MonstercardBind4readER9PacketBufR8MSG_BASE
#           Dispatcher_MonstercardBind::read(PacketBuf&, MSG_BASE&)
# range [0x081d82e8, 0x081d83c3]
081d82e8 +0x00:  push   %ebp
081d82e9 +0x01:  mov    %esp,%ebp
081d82eb +0x03:  sub    $0x28,%esp
081d82ee +0x06:  mov    0x10(%ebp),%eax
081d82f1 +0x09:  mov    %eax,-0xc(%ebp)
081d82f4 +0x0c:  mov    -0xc(%ebp),%eax
081d82f7 +0x0f:  add    $0xd,%eax
081d82fa +0x12:  mov    %eax,0x4(%esp)
081d82fe +0x16:  mov    0xc(%ebp),%eax
081d8301 +0x19:  mov    %eax,(%esp)
081d8304 +0x1c:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081d8309 +0x21:  xor    $0x1,%eax
081d830c +0x24:  test   %al,%al
081d830e +0x26:  je     081d8339 <+0x51>
081d8310 +0x28:  movl   $0x0,0xc(%esp)
081d8318 +0x30:  movl   $0x0,0x8(%esp)
081d8320 +0x38:  movl   $&_ZZN26Dispatcher_MonstercardBind4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d8328 +0x40:  movl   $0x444a,(%esp)
081d832f +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d8334 +0x4c:  jmp    081d83c2 <+0xda>
081d8339 +0x51:  mov    -0xc(%ebp),%eax
081d833c +0x54:  add    $0xf,%eax
081d833f +0x57:  mov    %eax,0x4(%esp)
081d8343 +0x5b:  mov    0xc(%ebp),%eax
081d8346 +0x5e:  mov    %eax,(%esp)
081d8349 +0x61:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081d834e +0x66:  xor    $0x1,%eax
081d8351 +0x69:  test   %al,%al
081d8353 +0x6b:  je     081d837b <+0x93>
081d8355 +0x6d:  movl   $0x0,0xc(%esp)
081d835d +0x75:  movl   $0x0,0x8(%esp)
081d8365 +0x7d:  movl   $&_ZZN26Dispatcher_MonstercardBind4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d836d +0x85:  movl   $0x444c,(%esp)
081d8374 +0x8c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d8379 +0x91:  jmp    081d83c2 <+0xda>
081d837b +0x93:  mov    -0xc(%ebp),%eax
081d837e +0x96:  add    $0x11,%eax
081d8381 +0x99:  mov    %eax,0x4(%esp)
081d8385 +0x9d:  mov    0xc(%ebp),%eax
081d8388 +0xa0:  mov    %eax,(%esp)
081d838b +0xa3:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081d8390 +0xa8:  xor    $0x1,%eax
081d8393 +0xab:  test   %al,%al
081d8395 +0xad:  je     081d83bd <+0xd5>
081d8397 +0xaf:  movl   $0x0,0xc(%esp)
081d839f +0xb7:  movl   $0x0,0x8(%esp)
081d83a7 +0xbf:  movl   $&_ZZN26Dispatcher_MonstercardBind4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d83af +0xc7:  movl   $0x444e,(%esp)
081d83b6 +0xce:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d83bb +0xd3:  jmp    081d83c2 <+0xda>
081d83bd +0xd5:  mov    $0x0,%eax
081d83c2 +0xda:  leave
081d83c3 +0xdb:  ret
```

## 反编译 C

```c
// Dispatcher_MonstercardBind::read @ 0x81d82e8

/* Dispatcher_MonstercardBind::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_MonstercardBind::read
          (Dispatcher_MonstercardBind *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xf));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x11));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x444e,
                         "virtual int Dispatcher_MonstercardBind::read(PacketBuf&, MSG_BASE&)",0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x444c,"virtual int Dispatcher_MonstercardBind::read(PacketBuf&, MSG_BASE&)",
                       0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x444a,"virtual int Dispatcher_MonstercardBind::read(PacketBuf&, MSG_BASE&)",0,
                     0);
  }
  return uVar2;
}
```

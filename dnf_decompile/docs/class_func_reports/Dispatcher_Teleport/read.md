# read

`_ZN19Dispatcher_Teleport4readER9PacketBufR8MSG_BASE`

`Dispatcher_Teleport::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Teleport` | `0x081d044a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d044a  _ZN19Dispatcher_Teleport4readER9PacketBufR8MSG_BASE
#           Dispatcher_Teleport::read(PacketBuf&, MSG_BASE&)
# range [0x081d044a, 0x081d056b]
081d044a +0x000:  push   %ebp
081d044b +0x001:  mov    %esp,%ebp
081d044d +0x003:  sub    $0x28,%esp
081d0450 +0x006:  mov    0x10(%ebp),%eax
081d0453 +0x009:  mov    %eax,-0xc(%ebp)
081d0456 +0x00c:  mov    -0xc(%ebp),%eax
081d0459 +0x00f:  add    $0xe,%eax
081d045c +0x012:  mov    %eax,0x4(%esp)
081d0460 +0x016:  mov    0xc(%ebp),%eax
081d0463 +0x019:  mov    %eax,(%esp)
081d0466 +0x01c:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081d046b +0x021:  xor    $0x1,%eax
081d046e +0x024:  test   %al,%al
081d0470 +0x026:  je     081d049b <+0x51>
081d0472 +0x028:  movl   $0x0,0xc(%esp)
081d047a +0x030:  movl   $0x0,0x8(%esp)
081d0482 +0x038:  movl   $&_ZZN19Dispatcher_Teleport4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d048a +0x040:  movl   $0x2b34,(%esp)
081d0491 +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d0496 +0x04c:  jmp    081d0569 <+0x11f>
081d049b +0x051:  mov    -0xc(%ebp),%eax
081d049e +0x054:  add    $0x10,%eax
081d04a1 +0x057:  mov    %eax,0x4(%esp)
081d04a5 +0x05b:  mov    0xc(%ebp),%eax
081d04a8 +0x05e:  mov    %eax,(%esp)
081d04ab +0x061:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081d04b0 +0x066:  xor    $0x1,%eax
081d04b3 +0x069:  test   %al,%al
081d04b5 +0x06b:  je     081d04e0 <+0x96>
081d04b7 +0x06d:  movl   $0x0,0xc(%esp)
081d04bf +0x075:  movl   $0x0,0x8(%esp)
081d04c7 +0x07d:  movl   $&_ZZN19Dispatcher_Teleport4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d04cf +0x085:  movl   $0x2b38,(%esp)
081d04d6 +0x08c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d04db +0x091:  jmp    081d0569 <+0x11f>
081d04e0 +0x096:  mov    -0xc(%ebp),%eax
081d04e3 +0x099:  add    $0x14,%eax
081d04e6 +0x09c:  mov    %eax,0x4(%esp)
081d04ea +0x0a0:  mov    0xc(%ebp),%eax
081d04ed +0x0a3:  mov    %eax,(%esp)
081d04f0 +0x0a6:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081d04f5 +0x0ab:  xor    $0x1,%eax
081d04f8 +0x0ae:  test   %al,%al
081d04fa +0x0b0:  je     081d0522 <+0xd8>
081d04fc +0x0b2:  movl   $0x0,0xc(%esp)
081d0504 +0x0ba:  movl   $0x0,0x8(%esp)
081d050c +0x0c2:  movl   $&_ZZN19Dispatcher_Teleport4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d0514 +0x0ca:  movl   $0x2b3c,(%esp)
081d051b +0x0d1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d0520 +0x0d6:  jmp    081d0569 <+0x11f>
081d0522 +0x0d8:  mov    -0xc(%ebp),%eax
081d0525 +0x0db:  add    $0x15,%eax
081d0528 +0x0de:  mov    %eax,0x4(%esp)
081d052c +0x0e2:  mov    0xc(%ebp),%eax
081d052f +0x0e5:  mov    %eax,(%esp)
081d0532 +0x0e8:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081d0537 +0x0ed:  xor    $0x1,%eax
081d053a +0x0f0:  test   %al,%al
081d053c +0x0f2:  je     081d0564 <+0x11a>
081d053e +0x0f4:  movl   $0x0,0xc(%esp)
081d0546 +0x0fc:  movl   $0x0,0x8(%esp)
081d054e +0x104:  movl   $&_ZZN19Dispatcher_Teleport4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d0556 +0x10c:  movl   $0x2b3f,(%esp)
081d055d +0x113:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d0562 +0x118:  jmp    081d0569 <+0x11f>
081d0564 +0x11a:  mov    $0x0,%eax
081d0569 +0x11f:  leave
081d056a +0x120:  ret
081d056b +0x121:  nop
```

## 反编译 C

```c
// Dispatcher_Teleport::read @ 0x81d044a

/* Dispatcher_Teleport::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Teleport::read(Dispatcher_Teleport *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x10));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x14));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x15));
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = LineFunc(0x2b3f,"virtual int Dispatcher_Teleport::read(PacketBuf&, MSG_BASE&)",0,0
                          );
        }
      }
      else {
        uVar2 = LineFunc(0x2b3c,"virtual int Dispatcher_Teleport::read(PacketBuf&, MSG_BASE&)",0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x2b38,"virtual int Dispatcher_Teleport::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x2b34,"virtual int Dispatcher_Teleport::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```

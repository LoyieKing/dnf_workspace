# read

`_ZN27Dispatcher_ExpertExtraction4readER9PacketBufR8MSG_BASE`

`Dispatcher_ExpertExtraction::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ExpertExtraction` | `0x081d9336` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d9336  _ZN27Dispatcher_ExpertExtraction4readER9PacketBufR8MSG_BASE
#           Dispatcher_ExpertExtraction::read(PacketBuf&, MSG_BASE&)
# range [0x081d9336, 0x081d9411]
081d9336 +0x00:  push   %ebp
081d9337 +0x01:  mov    %esp,%ebp
081d9339 +0x03:  sub    $0x28,%esp
081d933c +0x06:  mov    0x10(%ebp),%eax
081d933f +0x09:  mov    %eax,-0xc(%ebp)
081d9342 +0x0c:  mov    -0xc(%ebp),%eax
081d9345 +0x0f:  add    $0xd,%eax
081d9348 +0x12:  mov    %eax,0x4(%esp)
081d934c +0x16:  mov    0xc(%ebp),%eax
081d934f +0x19:  mov    %eax,(%esp)
081d9352 +0x1c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081d9357 +0x21:  xor    $0x1,%eax
081d935a +0x24:  test   %al,%al
081d935c +0x26:  je     081d9387 <+0x51>
081d935e +0x28:  movl   $0x0,0xc(%esp)
081d9366 +0x30:  movl   $0x0,0x8(%esp)
081d936e +0x38:  movl   $&_ZZN27Dispatcher_ExpertExtraction4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d9376 +0x40:  movl   $0x45ac,(%esp)
081d937d +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d9382 +0x4c:  jmp    081d9410 <+0xda>
081d9387 +0x51:  mov    -0xc(%ebp),%eax
081d938a +0x54:  add    $0xe,%eax
081d938d +0x57:  mov    %eax,0x4(%esp)
081d9391 +0x5b:  mov    0xc(%ebp),%eax
081d9394 +0x5e:  mov    %eax,(%esp)
081d9397 +0x61:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081d939c +0x66:  xor    $0x1,%eax
081d939f +0x69:  test   %al,%al
081d93a1 +0x6b:  je     081d93c9 <+0x93>
081d93a3 +0x6d:  movl   $0x0,0xc(%esp)
081d93ab +0x75:  movl   $0x0,0x8(%esp)
081d93b3 +0x7d:  movl   $&_ZZN27Dispatcher_ExpertExtraction4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d93bb +0x85:  movl   $0x45ae,(%esp)
081d93c2 +0x8c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d93c7 +0x91:  jmp    081d9410 <+0xda>
081d93c9 +0x93:  mov    -0xc(%ebp),%eax
081d93cc +0x96:  add    $0x10,%eax
081d93cf +0x99:  mov    %eax,0x4(%esp)
081d93d3 +0x9d:  mov    0xc(%ebp),%eax
081d93d6 +0xa0:  mov    %eax,(%esp)
081d93d9 +0xa3:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081d93de +0xa8:  xor    $0x1,%eax
081d93e1 +0xab:  test   %al,%al
081d93e3 +0xad:  je     081d940b <+0xd5>
081d93e5 +0xaf:  movl   $0x0,0xc(%esp)
081d93ed +0xb7:  movl   $0x0,0x8(%esp)
081d93f5 +0xbf:  movl   $&_ZZN27Dispatcher_ExpertExtraction4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d93fd +0xc7:  movl   $0x45b0,(%esp)
081d9404 +0xce:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d9409 +0xd3:  jmp    081d9410 <+0xda>
081d940b +0xd5:  mov    $0x0,%eax
081d9410 +0xda:  leave
081d9411 +0xdb:  ret
```

## 反编译 C

```c
// Dispatcher_ExpertExtraction::read @ 0x81d9336

/* Dispatcher_ExpertExtraction::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ExpertExtraction::read
          (Dispatcher_ExpertExtraction *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x10));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x45b0,
                         "virtual int Dispatcher_ExpertExtraction::read(PacketBuf&, MSG_BASE&)",0,0)
        ;
      }
    }
    else {
      uVar2 = LineFunc(0x45ae,"virtual int Dispatcher_ExpertExtraction::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x45ac,"virtual int Dispatcher_ExpertExtraction::read(PacketBuf&, MSG_BASE&)",0
                     ,0);
  }
  return uVar2;
}
```

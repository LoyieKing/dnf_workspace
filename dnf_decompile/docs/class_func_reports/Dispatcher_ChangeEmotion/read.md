# read

`_ZN24Dispatcher_ChangeEmotion4readER9PacketBufR8MSG_BASE`

`Dispatcher_ChangeEmotion::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ChangeEmotion` | `0x081d1b08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d1b08  _ZN24Dispatcher_ChangeEmotion4readER9PacketBufR8MSG_BASE
#           Dispatcher_ChangeEmotion::read(PacketBuf&, MSG_BASE&)
# range [0x081d1b08, 0x081d1b5d]
081d1b08 +0x00:  push   %ebp
081d1b09 +0x01:  mov    %esp,%ebp
081d1b0b +0x03:  sub    $0x28,%esp
081d1b0e +0x06:  mov    0x10(%ebp),%eax
081d1b11 +0x09:  mov    %eax,-0xc(%ebp)
081d1b14 +0x0c:  mov    -0xc(%ebp),%eax
081d1b17 +0x0f:  add    $0xd,%eax
081d1b1a +0x12:  mov    %eax,0x4(%esp)
081d1b1e +0x16:  mov    0xc(%ebp),%eax
081d1b21 +0x19:  mov    %eax,(%esp)
081d1b24 +0x1c:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081d1b29 +0x21:  xor    $0x1,%eax
081d1b2c +0x24:  test   %al,%al
081d1b2e +0x26:  je     081d1b56 <+0x4e>
081d1b30 +0x28:  movl   $0x0,0xc(%esp)
081d1b38 +0x30:  movl   $0x0,0x8(%esp)
081d1b40 +0x38:  movl   $&_ZZN24Dispatcher_ChangeEmotion4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d1b48 +0x40:  movl   $0x2e3d,(%esp)
081d1b4f +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d1b54 +0x4c:  jmp    081d1b5b <+0x53>
081d1b56 +0x4e:  mov    $0x0,%eax
081d1b5b +0x53:  leave
081d1b5c +0x54:  ret
081d1b5d +0x55:  nop
```

## 反编译 C

```c
// Dispatcher_ChangeEmotion::read @ 0x81d1b08

/* Dispatcher_ChangeEmotion::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ChangeEmotion::read(Dispatcher_ChangeEmotion *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x2e3d,"virtual int Dispatcher_ChangeEmotion::read(PacketBuf&, MSG_BASE&)",0,0)
    ;
  }
  return uVar2;
}
```

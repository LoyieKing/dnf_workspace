# read

`_ZN30Dispatcher_RequestAssaultPrice4readER9PacketBufR8MSG_BASE`

`Dispatcher_RequestAssaultPrice::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestAssaultPrice` | `0x081dee2a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dee2a  _ZN30Dispatcher_RequestAssaultPrice4readER9PacketBufR8MSG_BASE
#           Dispatcher_RequestAssaultPrice::read(PacketBuf&, MSG_BASE&)
# range [0x081dee2a, 0x081dee7f]
081dee2a +0x00:  push   %ebp
081dee2b +0x01:  mov    %esp,%ebp
081dee2d +0x03:  sub    $0x28,%esp
081dee30 +0x06:  mov    0x10(%ebp),%eax
081dee33 +0x09:  mov    %eax,-0xc(%ebp)
081dee36 +0x0c:  mov    -0xc(%ebp),%eax
081dee39 +0x0f:  add    $0xd,%eax
081dee3c +0x12:  mov    %eax,0x4(%esp)
081dee40 +0x16:  mov    0xc(%ebp),%eax
081dee43 +0x19:  mov    %eax,(%esp)
081dee46 +0x1c:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081dee4b +0x21:  xor    $0x1,%eax
081dee4e +0x24:  test   %al,%al
081dee50 +0x26:  je     081dee78 <+0x4e>
081dee52 +0x28:  movl   $0x0,0xc(%esp)
081dee5a +0x30:  movl   $0x0,0x8(%esp)
081dee62 +0x38:  movl   $&_ZZN30Dispatcher_RequestAssaultPrice4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081dee6a +0x40:  movl   $0x50bd,(%esp)
081dee71 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081dee76 +0x4c:  jmp    081dee7d <+0x53>
081dee78 +0x4e:  mov    $0x0,%eax
081dee7d +0x53:  leave
081dee7e +0x54:  ret
081dee7f +0x55:  nop
```

## 反编译 C

```c
// Dispatcher_RequestAssaultPrice::read @ 0x81dee2a

/* Dispatcher_RequestAssaultPrice::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_RequestAssaultPrice::read
          (Dispatcher_RequestAssaultPrice *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x50bd,
                     "virtual int Dispatcher_RequestAssaultPrice::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```

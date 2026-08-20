# read

`_ZN35Dispatcher_GoldTakeIncreasingAmount4readER9PacketBufR8MSG_BASE`

`Dispatcher_GoldTakeIncreasingAmount::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GoldTakeIncreasingAmount` | `0x081d554e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d554e  _ZN35Dispatcher_GoldTakeIncreasingAmount4readER9PacketBufR8MSG_BASE
#           Dispatcher_GoldTakeIncreasingAmount::read(PacketBuf&, MSG_BASE&)
# range [0x081d554e, 0x081d55a3]
081d554e +0x00:  push   %ebp
081d554f +0x01:  mov    %esp,%ebp
081d5551 +0x03:  sub    $0x28,%esp
081d5554 +0x06:  mov    0x10(%ebp),%eax
081d5557 +0x09:  mov    %eax,-0xc(%ebp)
081d555a +0x0c:  mov    -0xc(%ebp),%eax
081d555d +0x0f:  add    $0xd,%eax
081d5560 +0x12:  mov    %eax,0x4(%esp)
081d5564 +0x16:  mov    0xc(%ebp),%eax
081d5567 +0x19:  mov    %eax,(%esp)
081d556a +0x1c:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081d556f +0x21:  xor    $0x1,%eax
081d5572 +0x24:  test   %al,%al
081d5574 +0x26:  je     081d559c <+0x4e>
081d5576 +0x28:  movl   $0x0,0xc(%esp)
081d557e +0x30:  movl   $0x0,0x8(%esp)
081d5586 +0x38:  movl   $&_ZZN35Dispatcher_GoldTakeIncreasingAmount4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d558e +0x40:  movl   $0x38d6,(%esp)
081d5595 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d559a +0x4c:  jmp    081d55a1 <+0x53>
081d559c +0x4e:  mov    $0x0,%eax
081d55a1 +0x53:  leave
081d55a2 +0x54:  ret
081d55a3 +0x55:  nop
```

## 反编译 C

```c
// Dispatcher_GoldTakeIncreasingAmount::read @ 0x81d554e

/* Dispatcher_GoldTakeIncreasingAmount::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_GoldTakeIncreasingAmount::read
          (Dispatcher_GoldTakeIncreasingAmount *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x38d6,
                     "virtual int Dispatcher_GoldTakeIncreasingAmount::read(PacketBuf&, MSG_BASE&)",
                     0,0);
  }
  return uVar2;
}
```

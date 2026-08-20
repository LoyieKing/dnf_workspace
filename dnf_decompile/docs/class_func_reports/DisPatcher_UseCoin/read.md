# read

`_ZN18DisPatcher_UseCoin4readER9PacketBufR8MSG_BASE`

`DisPatcher_UseCoin::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_UseCoin` | `0x081ca5e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ca5e4  _ZN18DisPatcher_UseCoin4readER9PacketBufR8MSG_BASE
#           DisPatcher_UseCoin::read(PacketBuf&, MSG_BASE&)
# range [0x081ca5e4, 0x081ca639]
081ca5e4 +0x00:  push   %ebp
081ca5e5 +0x01:  mov    %esp,%ebp
081ca5e7 +0x03:  sub    $0x28,%esp
081ca5ea +0x06:  mov    0x10(%ebp),%eax
081ca5ed +0x09:  mov    %eax,-0xc(%ebp)
081ca5f0 +0x0c:  mov    -0xc(%ebp),%eax
081ca5f3 +0x0f:  add    $0xd,%eax
081ca5f6 +0x12:  mov    %eax,0x4(%esp)
081ca5fa +0x16:  mov    0xc(%ebp),%eax
081ca5fd +0x19:  mov    %eax,(%esp)
081ca600 +0x1c:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081ca605 +0x21:  xor    $0x1,%eax
081ca608 +0x24:  test   %al,%al
081ca60a +0x26:  je     081ca632 <+0x4e>
081ca60c +0x28:  movl   $0x0,0xc(%esp)
081ca614 +0x30:  movl   $0x0,0x8(%esp)
081ca61c +0x38:  movl   $&_ZZN18DisPatcher_UseCoin4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081ca624 +0x40:  movl   $0x1ebb,(%esp)
081ca62b +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ca630 +0x4c:  jmp    081ca637 <+0x53>
081ca632 +0x4e:  mov    $0x0,%eax
081ca637 +0x53:  leave
081ca638 +0x54:  ret
081ca639 +0x55:  nop
```

## 反编译 C

```c
// DisPatcher_UseCoin::read @ 0x81ca5e4

/* DisPatcher_UseCoin::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_UseCoin::read(DisPatcher_UseCoin *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x1ebb,"virtual int DisPatcher_UseCoin::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```

# read

`_ZN27Dispatcher_InformNotice_2nd4readER9PacketBufR8MSG_BASE`

`Dispatcher_InformNotice_2nd::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_InformNotice_2nd` | `0x081e30a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e30a4  _ZN27Dispatcher_InformNotice_2nd4readER9PacketBufR8MSG_BASE
#           Dispatcher_InformNotice_2nd::read(PacketBuf&, MSG_BASE&)
# range [0x081e30a4, 0x081e30f9]
081e30a4 +0x00:  push   %ebp
081e30a5 +0x01:  mov    %esp,%ebp
081e30a7 +0x03:  sub    $0x28,%esp
081e30aa +0x06:  mov    0x10(%ebp),%eax
081e30ad +0x09:  mov    %eax,-0xc(%ebp)
081e30b0 +0x0c:  mov    -0xc(%ebp),%eax
081e30b3 +0x0f:  add    $0xd,%eax
081e30b6 +0x12:  mov    %eax,0x4(%esp)
081e30ba +0x16:  mov    0xc(%ebp),%eax
081e30bd +0x19:  mov    %eax,(%esp)
081e30c0 +0x1c:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081e30c5 +0x21:  xor    $0x1,%eax
081e30c8 +0x24:  test   %al,%al
081e30ca +0x26:  je     081e30f2 <+0x4e>
081e30cc +0x28:  movl   $0x0,0xc(%esp)
081e30d4 +0x30:  movl   $0x0,0x8(%esp)
081e30dc +0x38:  movl   $&_ZZN27Dispatcher_InformNotice_2nd4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e30e4 +0x40:  movl   $0x59b8,(%esp)
081e30eb +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e30f0 +0x4c:  jmp    081e30f7 <+0x53>
081e30f2 +0x4e:  mov    $0x0,%eax
081e30f7 +0x53:  leave
081e30f8 +0x54:  ret
081e30f9 +0x55:  nop
```

## 反编译 C

```c
// Dispatcher_InformNotice_2nd::read @ 0x81e30a4

/* Dispatcher_InformNotice_2nd::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_InformNotice_2nd::read
          (Dispatcher_InformNotice_2nd *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x59b8,"virtual int Dispatcher_InformNotice_2nd::read(PacketBuf&, MSG_BASE&)",0
                     ,0);
  }
  return uVar2;
}
```

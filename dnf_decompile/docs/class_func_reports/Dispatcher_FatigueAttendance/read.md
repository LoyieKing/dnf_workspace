# read

`_ZN28Dispatcher_FatigueAttendance4readER9PacketBufR8MSG_BASE`

`Dispatcher_FatigueAttendance::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_FatigueAttendance` | `0x081dafa4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dafa4  _ZN28Dispatcher_FatigueAttendance4readER9PacketBufR8MSG_BASE
#           Dispatcher_FatigueAttendance::read(PacketBuf&, MSG_BASE&)
# range [0x081dafa4, 0x081daff9]
081dafa4 +0x00:  push   %ebp
081dafa5 +0x01:  mov    %esp,%ebp
081dafa7 +0x03:  sub    $0x28,%esp
081dafaa +0x06:  mov    0x10(%ebp),%eax
081dafad +0x09:  mov    %eax,-0xc(%ebp)
081dafb0 +0x0c:  mov    -0xc(%ebp),%eax
081dafb3 +0x0f:  add    $0xd,%eax
081dafb6 +0x12:  mov    %eax,0x4(%esp)
081dafba +0x16:  mov    0xc(%ebp),%eax
081dafbd +0x19:  mov    %eax,(%esp)
081dafc0 +0x1c:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081dafc5 +0x21:  xor    $0x1,%eax
081dafc8 +0x24:  test   %al,%al
081dafca +0x26:  je     081daff2 <+0x4e>
081dafcc +0x28:  movl   $0x0,0xc(%esp)
081dafd4 +0x30:  movl   $0x0,0x8(%esp)
081dafdc +0x38:  movl   $&_ZZN28Dispatcher_FatigueAttendance4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081dafe4 +0x40:  movl   $0x49b3,(%esp)
081dafeb +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081daff0 +0x4c:  jmp    081daff7 <+0x53>
081daff2 +0x4e:  mov    $0x0,%eax
081daff7 +0x53:  leave
081daff8 +0x54:  ret
081daff9 +0x55:  nop
```

## 反编译 C

```c
// Dispatcher_FatigueAttendance::read @ 0x81dafa4

/* Dispatcher_FatigueAttendance::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_FatigueAttendance::read
          (Dispatcher_FatigueAttendance *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x49b3,"virtual int Dispatcher_FatigueAttendance::read(PacketBuf&, MSG_BASE&)",
                     0,0);
  }
  return uVar2;
}
```

# read

`_ZN22DisPatcher_SetPVPReady4readER9PacketBufR8MSG_BASE`

`DisPatcher_SetPVPReady::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SetPVPReady` | `0x081c99be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c99be  _ZN22DisPatcher_SetPVPReady4readER9PacketBufR8MSG_BASE
#           DisPatcher_SetPVPReady::read(PacketBuf&, MSG_BASE&)
# range [0x081c99be, 0x081c9a13]
081c99be +0x00:  push   %ebp
081c99bf +0x01:  mov    %esp,%ebp
081c99c1 +0x03:  sub    $0x28,%esp
081c99c4 +0x06:  mov    0x10(%ebp),%eax
081c99c7 +0x09:  mov    %eax,-0xc(%ebp)
081c99ca +0x0c:  mov    -0xc(%ebp),%eax
081c99cd +0x0f:  add    $0xd,%eax
081c99d0 +0x12:  mov    %eax,0x4(%esp)
081c99d4 +0x16:  mov    0xc(%ebp),%eax
081c99d7 +0x19:  mov    %eax,(%esp)
081c99da +0x1c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081c99df +0x21:  xor    $0x1,%eax
081c99e2 +0x24:  test   %al,%al
081c99e4 +0x26:  je     081c9a0c <+0x4e>
081c99e6 +0x28:  movl   $0x0,0xc(%esp)
081c99ee +0x30:  movl   $0x0,0x8(%esp)
081c99f6 +0x38:  movl   $&_ZZN22DisPatcher_SetPVPReady4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c99fe +0x40:  movl   $0x1cd3,(%esp)
081c9a05 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c9a0a +0x4c:  jmp    081c9a11 <+0x53>
081c9a0c +0x4e:  mov    $0x0,%eax
081c9a11 +0x53:  leave
081c9a12 +0x54:  ret
081c9a13 +0x55:  nop
```

## 反编译 C

```c
// DisPatcher_SetPVPReady::read @ 0x81c99be

/* DisPatcher_SetPVPReady::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_SetPVPReady::read(DisPatcher_SetPVPReady *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x1cd3,"virtual int DisPatcher_SetPVPReady::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```

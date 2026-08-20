# read

`_ZN21Dispatcher_BlueMarble4readER9PacketBufR8MSG_BASE`

`Dispatcher_BlueMarble::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_BlueMarble` | `0x081e5f86` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e5f86  _ZN21Dispatcher_BlueMarble4readER9PacketBufR8MSG_BASE
#           Dispatcher_BlueMarble::read(PacketBuf&, MSG_BASE&)
# range [0x081e5f86, 0x081e5fdb]
081e5f86 +0x00:  push   %ebp
081e5f87 +0x01:  mov    %esp,%ebp
081e5f89 +0x03:  sub    $0x28,%esp
081e5f8c +0x06:  mov    0x10(%ebp),%eax
081e5f8f +0x09:  mov    %eax,-0xc(%ebp)
081e5f92 +0x0c:  mov    -0xc(%ebp),%eax
081e5f95 +0x0f:  add    $0xd,%eax
081e5f98 +0x12:  mov    %eax,0x4(%esp)
081e5f9c +0x16:  mov    0xc(%ebp),%eax
081e5f9f +0x19:  mov    %eax,(%esp)
081e5fa2 +0x1c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081e5fa7 +0x21:  xor    $0x1,%eax
081e5faa +0x24:  test   %al,%al
081e5fac +0x26:  je     081e5fd4 <+0x4e>
081e5fae +0x28:  movl   $0x0,0xc(%esp)
081e5fb6 +0x30:  movl   $0x0,0x8(%esp)
081e5fbe +0x38:  movl   $&_ZZN21Dispatcher_BlueMarble4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e5fc6 +0x40:  movl   $0x609a,(%esp)
081e5fcd +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e5fd2 +0x4c:  jmp    081e5fd9 <+0x53>
081e5fd4 +0x4e:  mov    $0x0,%eax
081e5fd9 +0x53:  leave
081e5fda +0x54:  ret
081e5fdb +0x55:  nop
```

## 反编译 C

```c
// Dispatcher_BlueMarble::read @ 0x81e5f86

/* Dispatcher_BlueMarble::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_BlueMarble::read(Dispatcher_BlueMarble *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x609a,"virtual int Dispatcher_BlueMarble::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```

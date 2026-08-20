# read

`_ZN27Dispatcher_MemberEnterReply4readER9PacketBufR8MSG_BASE`

`Dispatcher_MemberEnterReply::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MemberEnterReply` | `0x081cb99a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cb99a  _ZN27Dispatcher_MemberEnterReply4readER9PacketBufR8MSG_BASE
#           Dispatcher_MemberEnterReply::read(PacketBuf&, MSG_BASE&)
# range [0x081cb99a, 0x081cb9ef]
081cb99a +0x00:  push   %ebp
081cb99b +0x01:  mov    %esp,%ebp
081cb99d +0x03:  sub    $0x28,%esp
081cb9a0 +0x06:  mov    0x10(%ebp),%eax
081cb9a3 +0x09:  mov    %eax,-0xc(%ebp)
081cb9a6 +0x0c:  mov    -0xc(%ebp),%eax
081cb9a9 +0x0f:  add    $0xd,%eax
081cb9ac +0x12:  mov    %eax,0x4(%esp)
081cb9b0 +0x16:  mov    0xc(%ebp),%eax
081cb9b3 +0x19:  mov    %eax,(%esp)
081cb9b6 +0x1c:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081cb9bb +0x21:  xor    $0x1,%eax
081cb9be +0x24:  test   %al,%al
081cb9c0 +0x26:  je     081cb9e8 <+0x4e>
081cb9c2 +0x28:  movl   $0x0,0xc(%esp)
081cb9ca +0x30:  movl   $0x0,0x8(%esp)
081cb9d2 +0x38:  movl   $&_ZZN27Dispatcher_MemberEnterReply4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cb9da +0x40:  movl   $0x21d4,(%esp)
081cb9e1 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cb9e6 +0x4c:  jmp    081cb9ed <+0x53>
081cb9e8 +0x4e:  mov    $0x0,%eax
081cb9ed +0x53:  leave
081cb9ee +0x54:  ret
081cb9ef +0x55:  nop
```

## 反编译 C

```c
// Dispatcher_MemberEnterReply::read @ 0x81cb99a

/* Dispatcher_MemberEnterReply::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_MemberEnterReply::read
          (Dispatcher_MemberEnterReply *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x21d4,"virtual int Dispatcher_MemberEnterReply::read(PacketBuf&, MSG_BASE&)",0
                     ,0);
  }
  return uVar2;
}
```

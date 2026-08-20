# read

`_ZN23DisPatcher_SelectCharac4readER9PacketBufR8MSG_BASE`

`DisPatcher_SelectCharac::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SelectCharac` | `0x081c632a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c632a  _ZN23DisPatcher_SelectCharac4readER9PacketBufR8MSG_BASE
#           DisPatcher_SelectCharac::read(PacketBuf&, MSG_BASE&)
# range [0x081c632a, 0x081c637f]
081c632a +0x00:  push   %ebp
081c632b +0x01:  mov    %esp,%ebp
081c632d +0x03:  sub    $0x28,%esp
081c6330 +0x06:  mov    0x10(%ebp),%eax
081c6333 +0x09:  mov    %eax,-0xc(%ebp)
081c6336 +0x0c:  mov    -0xc(%ebp),%eax
081c6339 +0x0f:  add    $0xd,%eax
081c633c +0x12:  mov    %eax,0x4(%esp)
081c6340 +0x16:  mov    0xc(%ebp),%eax
081c6343 +0x19:  mov    %eax,(%esp)
081c6346 +0x1c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081c634b +0x21:  xor    $0x1,%eax
081c634e +0x24:  test   %al,%al
081c6350 +0x26:  je     081c6378 <+0x4e>
081c6352 +0x28:  movl   $0x0,0xc(%esp)
081c635a +0x30:  movl   $0x0,0x8(%esp)
081c6362 +0x38:  movl   $&_ZZN23DisPatcher_SelectCharac4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c636a +0x40:  movl   $0x156f,(%esp)
081c6371 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c6376 +0x4c:  jmp    081c637d <+0x53>
081c6378 +0x4e:  mov    $0x0,%eax
081c637d +0x53:  leave
081c637e +0x54:  ret
081c637f +0x55:  nop
```

## 反编译 C

```c
// DisPatcher_SelectCharac::read @ 0x81c632a

/* DisPatcher_SelectCharac::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_SelectCharac::read(DisPatcher_SelectCharac *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x156f,"virtual int DisPatcher_SelectCharac::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```

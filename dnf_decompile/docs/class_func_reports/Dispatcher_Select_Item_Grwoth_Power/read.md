# read

`_ZN35Dispatcher_Select_Item_Grwoth_Power4readER9PacketBufR8MSG_BASE`

`Dispatcher_Select_Item_Grwoth_Power::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Select_Item_Grwoth_Power` | `0x081db4c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081db4c4  _ZN35Dispatcher_Select_Item_Grwoth_Power4readER9PacketBufR8MSG_BASE
#           Dispatcher_Select_Item_Grwoth_Power::read(PacketBuf&, MSG_BASE&)
# range [0x081db4c4, 0x081db57f]
081db4c4 +0x00:  push   %ebp
081db4c5 +0x01:  mov    %esp,%ebp
081db4c7 +0x03:  sub    $0x28,%esp
081db4ca +0x06:  mov    0x10(%ebp),%eax
081db4cd +0x09:  mov    %eax,-0x10(%ebp)
081db4d0 +0x0c:  mov    -0x10(%ebp),%eax
081db4d3 +0x0f:  add    $0xd,%eax
081db4d6 +0x12:  mov    %eax,0x4(%esp)
081db4da +0x16:  mov    0xc(%ebp),%eax
081db4dd +0x19:  mov    %eax,(%esp)
081db4e0 +0x1c:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081db4e5 +0x21:  xor    $0x1,%eax
081db4e8 +0x24:  test   %al,%al
081db4ea +0x26:  je     081db512 <+0x4e>
081db4ec +0x28:  movl   $0x0,0xc(%esp)
081db4f4 +0x30:  movl   $0x0,0x8(%esp)
081db4fc +0x38:  movl   $&_ZZN35Dispatcher_Select_Item_Grwoth_Power4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081db504 +0x40:  movl   $0x4a55,(%esp)
081db50b +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081db510 +0x4c:  jmp    081db57d <+0xb9>
081db512 +0x4e:  movl   $0x0,-0xc(%ebp)
081db519 +0x55:  jmp    081db564 <+0xa0>
081db51b +0x57:  mov    -0xc(%ebp),%eax
081db51e +0x5a:  add    -0x10(%ebp),%eax
081db521 +0x5d:  add    $0xe,%eax
081db524 +0x60:  mov    %eax,0x4(%esp)
081db528 +0x64:  mov    0xc(%ebp),%eax
081db52b +0x67:  mov    %eax,(%esp)
081db52e +0x6a:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081db533 +0x6f:  xor    $0x1,%eax
081db536 +0x72:  test   %al,%al
081db538 +0x74:  je     081db560 <+0x9c>
081db53a +0x76:  movl   $0x0,0xc(%esp)
081db542 +0x7e:  movl   $0x0,0x8(%esp)
081db54a +0x86:  movl   $&_ZZN35Dispatcher_Select_Item_Grwoth_Power4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081db552 +0x8e:  movl   $0x4a5a,(%esp)
081db559 +0x95:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081db55e +0x9a:  jmp    081db57d <+0xb9>
081db560 +0x9c:  addl   $0x1,-0xc(%ebp)
081db564 +0xa0:  mov    -0x10(%ebp),%eax
081db567 +0xa3:  movzbl 0xd(%eax),%eax
081db56b +0xa7:  movzbl %al,%eax
081db56e +0xaa:  cmp    -0xc(%ebp),%eax
081db571 +0xad:  setg   %al
081db574 +0xb0:  test   %al,%al
081db576 +0xb2:  jne    081db51b <+0x57>
081db578 +0xb4:  mov    $0x0,%eax
081db57d +0xb9:  leave
081db57e +0xba:  ret
081db57f +0xbb:  nop
```

## 反编译 C

```c
// Dispatcher_Select_Item_Grwoth_Power::read @ 0x81db4c4

/* Dispatcher_Select_Item_Grwoth_Power::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Select_Item_Grwoth_Power::read
          (Dispatcher_Select_Item_Grwoth_Power *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int local_10;
  
  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    for (local_10 = 0; local_10 < (int)(uint)(byte)param_2[0xd]; local_10 = local_10 + 1) {
      cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + local_10 + 0xe));
      if (cVar1 != '\x01') {
        uVar2 = LineFunc(0x4a5a,
                         "virtual int Dispatcher_Select_Item_Grwoth_Power::read(PacketBuf&, MSG_BASE&)"
                         ,0,0);
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x4a55,
                     "virtual int Dispatcher_Select_Item_Grwoth_Power::read(PacketBuf&, MSG_BASE&)",
                     0,0);
  }
  return uVar2;
}
```

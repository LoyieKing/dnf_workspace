# read

`_ZN30Dispatcher_SecretShopOpenClose4readER9PacketBufR8MSG_BASE`

`Dispatcher_SecretShopOpenClose::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SecretShopOpenClose` | `0x081d2834` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d2834  _ZN30Dispatcher_SecretShopOpenClose4readER9PacketBufR8MSG_BASE
#           Dispatcher_SecretShopOpenClose::read(PacketBuf&, MSG_BASE&)
# range [0x081d2834, 0x081d2889]
081d2834 +0x00:  push   %ebp
081d2835 +0x01:  mov    %esp,%ebp
081d2837 +0x03:  sub    $0x28,%esp
081d283a +0x06:  mov    0x10(%ebp),%eax
081d283d +0x09:  mov    %eax,-0xc(%ebp)
081d2840 +0x0c:  mov    -0xc(%ebp),%eax
081d2843 +0x0f:  add    $0xd,%eax
081d2846 +0x12:  mov    %eax,0x4(%esp)
081d284a +0x16:  mov    0xc(%ebp),%eax
081d284d +0x19:  mov    %eax,(%esp)
081d2850 +0x1c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081d2855 +0x21:  xor    $0x1,%eax
081d2858 +0x24:  test   %al,%al
081d285a +0x26:  je     081d2882 <+0x4e>
081d285c +0x28:  movl   $0x0,0xc(%esp)
081d2864 +0x30:  movl   $0x0,0x8(%esp)
081d286c +0x38:  movl   $&_ZZN30Dispatcher_SecretShopOpenClose4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d2874 +0x40:  movl   $0x2fc4,(%esp)
081d287b +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d2880 +0x4c:  jmp    081d2887 <+0x53>
081d2882 +0x4e:  mov    $0x0,%eax
081d2887 +0x53:  leave
081d2888 +0x54:  ret
081d2889 +0x55:  nop
```

## 反编译 C

```c
// Dispatcher_SecretShopOpenClose::read @ 0x81d2834

/* Dispatcher_SecretShopOpenClose::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SecretShopOpenClose::read
          (Dispatcher_SecretShopOpenClose *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x2fc4,
                     "virtual int Dispatcher_SecretShopOpenClose::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```

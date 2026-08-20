# read

`_ZN32Dispatcher_Mercenary_Competition4readER9PacketBufR8MSG_BASE`

`Dispatcher_Mercenary_Competition::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Mercenary_Competition` | `0x081ddc24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ddc24  _ZN32Dispatcher_Mercenary_Competition4readER9PacketBufR8MSG_BASE
#           Dispatcher_Mercenary_Competition::read(PacketBuf&, MSG_BASE&)
# range [0x081ddc24, 0x081ddcff]
081ddc24 +0x00:  push   %ebp
081ddc25 +0x01:  mov    %esp,%ebp
081ddc27 +0x03:  sub    $0x28,%esp
081ddc2a +0x06:  mov    0x10(%ebp),%eax
081ddc2d +0x09:  mov    %eax,-0xc(%ebp)
081ddc30 +0x0c:  mov    -0xc(%ebp),%eax
081ddc33 +0x0f:  add    $0x10,%eax
081ddc36 +0x12:  mov    %eax,0x4(%esp)
081ddc3a +0x16:  mov    0xc(%ebp),%eax
081ddc3d +0x19:  mov    %eax,(%esp)
081ddc40 +0x1c:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081ddc45 +0x21:  xor    $0x1,%eax
081ddc48 +0x24:  test   %al,%al
081ddc4a +0x26:  je     081ddc75 <+0x51>
081ddc4c +0x28:  movl   $0x0,0xc(%esp)
081ddc54 +0x30:  movl   $0x0,0x8(%esp)
081ddc5c +0x38:  movl   $&_ZZN32Dispatcher_Mercenary_Competition4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081ddc64 +0x40:  movl   $0x4eda,(%esp)
081ddc6b +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ddc70 +0x4c:  jmp    081ddcfe <+0xda>
081ddc75 +0x51:  mov    -0xc(%ebp),%eax
081ddc78 +0x54:  add    $0x14,%eax
081ddc7b +0x57:  mov    %eax,0x4(%esp)
081ddc7f +0x5b:  mov    0xc(%ebp),%eax
081ddc82 +0x5e:  mov    %eax,(%esp)
081ddc85 +0x61:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081ddc8a +0x66:  xor    $0x1,%eax
081ddc8d +0x69:  test   %al,%al
081ddc8f +0x6b:  je     081ddcb7 <+0x93>
081ddc91 +0x6d:  movl   $0x0,0xc(%esp)
081ddc99 +0x75:  movl   $0x0,0x8(%esp)
081ddca1 +0x7d:  movl   $&_ZZN32Dispatcher_Mercenary_Competition4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081ddca9 +0x85:  movl   $0x4edc,(%esp)
081ddcb0 +0x8c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ddcb5 +0x91:  jmp    081ddcfe <+0xda>
081ddcb7 +0x93:  mov    -0xc(%ebp),%eax
081ddcba +0x96:  add    $0x15,%eax
081ddcbd +0x99:  mov    %eax,0x4(%esp)
081ddcc1 +0x9d:  mov    0xc(%ebp),%eax
081ddcc4 +0xa0:  mov    %eax,(%esp)
081ddcc7 +0xa3:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081ddccc +0xa8:  xor    $0x1,%eax
081ddccf +0xab:  test   %al,%al
081ddcd1 +0xad:  je     081ddcf9 <+0xd5>
081ddcd3 +0xaf:  movl   $0x0,0xc(%esp)
081ddcdb +0xb7:  movl   $0x0,0x8(%esp)
081ddce3 +0xbf:  movl   $&_ZZN32Dispatcher_Mercenary_Competition4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081ddceb +0xc7:  movl   $0x4ede,(%esp)
081ddcf2 +0xce:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ddcf7 +0xd3:  jmp    081ddcfe <+0xda>
081ddcf9 +0xd5:  mov    $0x0,%eax
081ddcfe +0xda:  leave
081ddcff +0xdb:  ret
```

## 反编译 C

```c
// Dispatcher_Mercenary_Competition::read @ 0x81ddc24

/* Dispatcher_Mercenary_Competition::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Mercenary_Competition::read
          (Dispatcher_Mercenary_Competition *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x10));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x14));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x15));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x4ede,
                         "virtual int Dispatcher_Mercenary_Competition::read(PacketBuf&, MSG_BASE&)"
                         ,0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x4edc,
                       "virtual int Dispatcher_Mercenary_Competition::read(PacketBuf&, MSG_BASE&)",0
                       ,0);
    }
  }
  else {
    uVar2 = LineFunc(0x4eda,
                     "virtual int Dispatcher_Mercenary_Competition::read(PacketBuf&, MSG_BASE&)",0,0
                    );
  }
  return uVar2;
}
```

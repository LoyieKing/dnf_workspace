# read

`_ZN29Dispatcher_ChangeRandomOption4readER9PacketBufR8MSG_BASE`

`Dispatcher_ChangeRandomOption::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ChangeRandomOption` | `0x081dc8de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dc8de  _ZN29Dispatcher_ChangeRandomOption4readER9PacketBufR8MSG_BASE
#           Dispatcher_ChangeRandomOption::read(PacketBuf&, MSG_BASE&)
# range [0x081dc8de, 0x081dc9b9]
081dc8de +0x00:  push   %ebp
081dc8df +0x01:  mov    %esp,%ebp
081dc8e1 +0x03:  sub    $0x28,%esp
081dc8e4 +0x06:  mov    0x10(%ebp),%eax
081dc8e7 +0x09:  mov    %eax,-0xc(%ebp)
081dc8ea +0x0c:  mov    -0xc(%ebp),%eax
081dc8ed +0x0f:  add    $0xe,%eax
081dc8f0 +0x12:  mov    %eax,0x4(%esp)
081dc8f4 +0x16:  mov    0xc(%ebp),%eax
081dc8f7 +0x19:  mov    %eax,(%esp)
081dc8fa +0x1c:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081dc8ff +0x21:  xor    $0x1,%eax
081dc902 +0x24:  test   %al,%al
081dc904 +0x26:  je     081dc92f <+0x51>
081dc906 +0x28:  movl   $0x0,0xc(%esp)
081dc90e +0x30:  movl   $0x0,0x8(%esp)
081dc916 +0x38:  movl   $&_ZZN29Dispatcher_ChangeRandomOption4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081dc91e +0x40:  movl   $0x4cd8,(%esp)
081dc925 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081dc92a +0x4c:  jmp    081dc9b8 <+0xda>
081dc92f +0x51:  mov    -0xc(%ebp),%eax
081dc932 +0x54:  add    $0x10,%eax
081dc935 +0x57:  mov    %eax,0x4(%esp)
081dc939 +0x5b:  mov    0xc(%ebp),%eax
081dc93c +0x5e:  mov    %eax,(%esp)
081dc93f +0x61:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081dc944 +0x66:  xor    $0x1,%eax
081dc947 +0x69:  test   %al,%al
081dc949 +0x6b:  je     081dc971 <+0x93>
081dc94b +0x6d:  movl   $0x0,0xc(%esp)
081dc953 +0x75:  movl   $0x0,0x8(%esp)
081dc95b +0x7d:  movl   $&_ZZN29Dispatcher_ChangeRandomOption4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081dc963 +0x85:  movl   $0x4cdb,(%esp)
081dc96a +0x8c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081dc96f +0x91:  jmp    081dc9b8 <+0xda>
081dc971 +0x93:  mov    -0xc(%ebp),%eax
081dc974 +0x96:  add    $0x12,%eax
081dc977 +0x99:  mov    %eax,0x4(%esp)
081dc97b +0x9d:  mov    0xc(%ebp),%eax
081dc97e +0xa0:  mov    %eax,(%esp)
081dc981 +0xa3:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081dc986 +0xa8:  xor    $0x1,%eax
081dc989 +0xab:  test   %al,%al
081dc98b +0xad:  je     081dc9b3 <+0xd5>
081dc98d +0xaf:  movl   $0x0,0xc(%esp)
081dc995 +0xb7:  movl   $0x0,0x8(%esp)
081dc99d +0xbf:  movl   $&_ZZN29Dispatcher_ChangeRandomOption4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081dc9a5 +0xc7:  movl   $0x4cde,(%esp)
081dc9ac +0xce:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081dc9b1 +0xd3:  jmp    081dc9b8 <+0xda>
081dc9b3 +0xd5:  mov    $0x0,%eax
081dc9b8 +0xda:  leave
081dc9b9 +0xdb:  ret
```

## 反编译 C

```c
// Dispatcher_ChangeRandomOption::read @ 0x81dc8de

/* Dispatcher_ChangeRandomOption::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ChangeRandomOption::read
          (Dispatcher_ChangeRandomOption *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x10));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x12));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x4cde,
                         "virtual int Dispatcher_ChangeRandomOption::read(PacketBuf&, MSG_BASE&)",0,
                         0);
      }
    }
    else {
      uVar2 = LineFunc(0x4cdb,
                       "virtual int Dispatcher_ChangeRandomOption::read(PacketBuf&, MSG_BASE&)",0,0)
      ;
    }
  }
  else {
    uVar2 = LineFunc(0x4cd8,"virtual int Dispatcher_ChangeRandomOption::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}
```

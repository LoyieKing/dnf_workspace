# read

`_ZN34Dispather_RegenerationRandomOption4readER9PacketBufR8MSG_BASE`

`Dispather_RegenerationRandomOption::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispather_RegenerationRandomOption` | `0x081d69d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d69d2  _ZN34Dispather_RegenerationRandomOption4readER9PacketBufR8MSG_BASE
#           Dispather_RegenerationRandomOption::read(PacketBuf&, MSG_BASE&)
# range [0x081d69d2, 0x081d6af3]
081d69d2 +0x000:  push   %ebp
081d69d3 +0x001:  mov    %esp,%ebp
081d69d5 +0x003:  sub    $0x28,%esp
081d69d8 +0x006:  mov    0x10(%ebp),%eax
081d69db +0x009:  mov    %eax,-0xc(%ebp)
081d69de +0x00c:  mov    -0xc(%ebp),%eax
081d69e1 +0x00f:  add    $0xd,%eax
081d69e4 +0x012:  mov    %eax,0x4(%esp)
081d69e8 +0x016:  mov    0xc(%ebp),%eax
081d69eb +0x019:  mov    %eax,(%esp)
081d69ee +0x01c:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081d69f3 +0x021:  xor    $0x1,%eax
081d69f6 +0x024:  test   %al,%al
081d69f8 +0x026:  je     081d6a23 <+0x51>
081d69fa +0x028:  movl   $0x0,0xc(%esp)
081d6a02 +0x030:  movl   $0x0,0x8(%esp)
081d6a0a +0x038:  movl   $&_ZZN34Dispather_RegenerationRandomOption4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d6a12 +0x040:  movl   $0x40d3,(%esp)
081d6a19 +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d6a1e +0x04c:  jmp    081d6af1 <+0x11f>
081d6a23 +0x051:  mov    -0xc(%ebp),%eax
081d6a26 +0x054:  add    $0xf,%eax
081d6a29 +0x057:  mov    %eax,0x4(%esp)
081d6a2d +0x05b:  mov    0xc(%ebp),%eax
081d6a30 +0x05e:  mov    %eax,(%esp)
081d6a33 +0x061:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081d6a38 +0x066:  xor    $0x1,%eax
081d6a3b +0x069:  test   %al,%al
081d6a3d +0x06b:  je     081d6a68 <+0x96>
081d6a3f +0x06d:  movl   $0x0,0xc(%esp)
081d6a47 +0x075:  movl   $0x0,0x8(%esp)
081d6a4f +0x07d:  movl   $&_ZZN34Dispather_RegenerationRandomOption4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d6a57 +0x085:  movl   $0x40d6,(%esp)
081d6a5e +0x08c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d6a63 +0x091:  jmp    081d6af1 <+0x11f>
081d6a68 +0x096:  mov    -0xc(%ebp),%eax
081d6a6b +0x099:  add    $0x11,%eax
081d6a6e +0x09c:  mov    %eax,0x4(%esp)
081d6a72 +0x0a0:  mov    0xc(%ebp),%eax
081d6a75 +0x0a3:  mov    %eax,(%esp)
081d6a78 +0x0a6:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081d6a7d +0x0ab:  xor    $0x1,%eax
081d6a80 +0x0ae:  test   %al,%al
081d6a82 +0x0b0:  je     081d6aaa <+0xd8>
081d6a84 +0x0b2:  movl   $0x0,0xc(%esp)
081d6a8c +0x0ba:  movl   $0x0,0x8(%esp)
081d6a94 +0x0c2:  movl   $&_ZZN34Dispather_RegenerationRandomOption4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d6a9c +0x0ca:  movl   $0x40da,(%esp)
081d6aa3 +0x0d1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d6aa8 +0x0d6:  jmp    081d6af1 <+0x11f>
081d6aaa +0x0d8:  mov    -0xc(%ebp),%eax
081d6aad +0x0db:  add    $0x13,%eax
081d6ab0 +0x0de:  mov    %eax,0x4(%esp)
081d6ab4 +0x0e2:  mov    0xc(%ebp),%eax
081d6ab7 +0x0e5:  mov    %eax,(%esp)
081d6aba +0x0e8:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081d6abf +0x0ed:  xor    $0x1,%eax
081d6ac2 +0x0f0:  test   %al,%al
081d6ac4 +0x0f2:  je     081d6aec <+0x11a>
081d6ac6 +0x0f4:  movl   $0x0,0xc(%esp)
081d6ace +0x0fc:  movl   $0x0,0x8(%esp)
081d6ad6 +0x104:  movl   $&_ZZN34Dispather_RegenerationRandomOption4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d6ade +0x10c:  movl   $0x40dd,(%esp)
081d6ae5 +0x113:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d6aea +0x118:  jmp    081d6af1 <+0x11f>
081d6aec +0x11a:  mov    $0x0,%eax
081d6af1 +0x11f:  leave
081d6af2 +0x120:  ret
081d6af3 +0x121:  nop
```

## 反编译 C

```c
// Dispather_RegenerationRandomOption::read @ 0x81d69d2

/* Dispather_RegenerationRandomOption::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispather_RegenerationRandomOption::read
          (Dispather_RegenerationRandomOption *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xf));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x11));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x13));
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = LineFunc(0x40dd,
                           "virtual int Dispather_RegenerationRandomOption::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x40da,
                         "virtual int Dispather_RegenerationRandomOption::read(PacketBuf&, MSG_BASE&)"
                         ,0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x40d6,
                       "virtual int Dispather_RegenerationRandomOption::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x40d3,
                     "virtual int Dispather_RegenerationRandomOption::read(PacketBuf&, MSG_BASE&)",0
                     ,0);
  }
  return uVar2;
}
```

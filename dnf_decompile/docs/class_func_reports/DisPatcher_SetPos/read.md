# read

`_ZN17DisPatcher_SetPos4readER9PacketBufR8MSG_BASE`

`DisPatcher_SetPos::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SetPos` | `0x081c97a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c97a6  _ZN17DisPatcher_SetPos4readER9PacketBufR8MSG_BASE
#           DisPatcher_SetPos::read(PacketBuf&, MSG_BASE&)
# range [0x081c97a6, 0x081c98c7]
081c97a6 +0x000:  push   %ebp
081c97a7 +0x001:  mov    %esp,%ebp
081c97a9 +0x003:  sub    $0x28,%esp
081c97ac +0x006:  mov    0x10(%ebp),%eax
081c97af +0x009:  mov    %eax,-0xc(%ebp)
081c97b2 +0x00c:  mov    -0xc(%ebp),%eax
081c97b5 +0x00f:  add    $0xd,%eax
081c97b8 +0x012:  mov    %eax,0x4(%esp)
081c97bc +0x016:  mov    0xc(%ebp),%eax
081c97bf +0x019:  mov    %eax,(%esp)
081c97c2 +0x01c:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081c97c7 +0x021:  xor    $0x1,%eax
081c97ca +0x024:  test   %al,%al
081c97cc +0x026:  je     081c97f7 <+0x51>
081c97ce +0x028:  movl   $0x0,0xc(%esp)
081c97d6 +0x030:  movl   $0x0,0x8(%esp)
081c97de +0x038:  movl   $&_ZZN17DisPatcher_SetPos4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c97e6 +0x040:  movl   $0x1ca2,(%esp)
081c97ed +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c97f2 +0x04c:  jmp    081c98c5 <+0x11f>
081c97f7 +0x051:  mov    -0xc(%ebp),%eax
081c97fa +0x054:  add    $0xf,%eax
081c97fd +0x057:  mov    %eax,0x4(%esp)
081c9801 +0x05b:  mov    0xc(%ebp),%eax
081c9804 +0x05e:  mov    %eax,(%esp)
081c9807 +0x061:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081c980c +0x066:  xor    $0x1,%eax
081c980f +0x069:  test   %al,%al
081c9811 +0x06b:  je     081c983c <+0x96>
081c9813 +0x06d:  movl   $0x0,0xc(%esp)
081c981b +0x075:  movl   $0x0,0x8(%esp)
081c9823 +0x07d:  movl   $&_ZZN17DisPatcher_SetPos4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c982b +0x085:  movl   $0x1ca4,(%esp)
081c9832 +0x08c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c9837 +0x091:  jmp    081c98c5 <+0x11f>
081c983c +0x096:  mov    -0xc(%ebp),%eax
081c983f +0x099:  add    $0x11,%eax
081c9842 +0x09c:  mov    %eax,0x4(%esp)
081c9846 +0x0a0:  mov    0xc(%ebp),%eax
081c9849 +0x0a3:  mov    %eax,(%esp)
081c984c +0x0a6:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081c9851 +0x0ab:  xor    $0x1,%eax
081c9854 +0x0ae:  test   %al,%al
081c9856 +0x0b0:  je     081c987e <+0xd8>
081c9858 +0x0b2:  movl   $0x0,0xc(%esp)
081c9860 +0x0ba:  movl   $0x0,0x8(%esp)
081c9868 +0x0c2:  movl   $&_ZZN17DisPatcher_SetPos4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c9870 +0x0ca:  movl   $0x1ca6,(%esp)
081c9877 +0x0d1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c987c +0x0d6:  jmp    081c98c5 <+0x11f>
081c987e +0x0d8:  mov    -0xc(%ebp),%eax
081c9881 +0x0db:  add    $0x12,%eax
081c9884 +0x0de:  mov    %eax,0x4(%esp)
081c9888 +0x0e2:  mov    0xc(%ebp),%eax
081c988b +0x0e5:  mov    %eax,(%esp)
081c988e +0x0e8:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081c9893 +0x0ed:  xor    $0x1,%eax
081c9896 +0x0f0:  test   %al,%al
081c9898 +0x0f2:  je     081c98c0 <+0x11a>
081c989a +0x0f4:  movl   $0x0,0xc(%esp)
081c98a2 +0x0fc:  movl   $0x0,0x8(%esp)
081c98aa +0x104:  movl   $&_ZZN17DisPatcher_SetPos4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c98b2 +0x10c:  movl   $0x1ca8,(%esp)
081c98b9 +0x113:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c98be +0x118:  jmp    081c98c5 <+0x11f>
081c98c0 +0x11a:  mov    $0x0,%eax
081c98c5 +0x11f:  leave
081c98c6 +0x120:  ret
081c98c7 +0x121:  nop
```

## 反编译 C

```c
// DisPatcher_SetPos::read @ 0x81c97a6

/* DisPatcher_SetPos::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_SetPos::read(DisPatcher_SetPos *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xf));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x11));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x12));
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = LineFunc(0x1ca8,"virtual int DisPatcher_SetPos::read(PacketBuf&, MSG_BASE&)",0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x1ca6,"virtual int DisPatcher_SetPos::read(PacketBuf&, MSG_BASE&)",0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x1ca4,"virtual int DisPatcher_SetPos::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x1ca2,"virtual int DisPatcher_SetPos::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```

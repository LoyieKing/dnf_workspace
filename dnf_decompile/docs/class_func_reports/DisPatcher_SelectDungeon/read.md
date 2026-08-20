# read

`_ZN24DisPatcher_SelectDungeon4readER9PacketBufR8MSG_BASE`

`DisPatcher_SelectDungeon::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SelectDungeon` | `0x081c7e10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c7e10  _ZN24DisPatcher_SelectDungeon4readER9PacketBufR8MSG_BASE
#           DisPatcher_SelectDungeon::read(PacketBuf&, MSG_BASE&)
# range [0x081c7e10, 0x081c7f31]
081c7e10 +0x000:  push   %ebp
081c7e11 +0x001:  mov    %esp,%ebp
081c7e13 +0x003:  sub    $0x28,%esp
081c7e16 +0x006:  mov    0x10(%ebp),%eax
081c7e19 +0x009:  mov    %eax,-0xc(%ebp)
081c7e1c +0x00c:  mov    -0xc(%ebp),%eax
081c7e1f +0x00f:  add    $0xd,%eax
081c7e22 +0x012:  mov    %eax,0x4(%esp)
081c7e26 +0x016:  mov    0xc(%ebp),%eax
081c7e29 +0x019:  mov    %eax,(%esp)
081c7e2c +0x01c:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081c7e31 +0x021:  xor    $0x1,%eax
081c7e34 +0x024:  test   %al,%al
081c7e36 +0x026:  je     081c7e61 <+0x51>
081c7e38 +0x028:  movl   $0x0,0xc(%esp)
081c7e40 +0x030:  movl   $0x0,0x8(%esp)
081c7e48 +0x038:  movl   $&_ZZN24DisPatcher_SelectDungeon4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c7e50 +0x040:  movl   $0x18da,(%esp)
081c7e57 +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c7e5c +0x04c:  jmp    081c7f2f <+0x11f>
081c7e61 +0x051:  mov    -0xc(%ebp),%eax
081c7e64 +0x054:  add    $0xf,%eax
081c7e67 +0x057:  mov    %eax,0x4(%esp)
081c7e6b +0x05b:  mov    0xc(%ebp),%eax
081c7e6e +0x05e:  mov    %eax,(%esp)
081c7e71 +0x061:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081c7e76 +0x066:  xor    $0x1,%eax
081c7e79 +0x069:  test   %al,%al
081c7e7b +0x06b:  je     081c7ea6 <+0x96>
081c7e7d +0x06d:  movl   $0x0,0xc(%esp)
081c7e85 +0x075:  movl   $0x0,0x8(%esp)
081c7e8d +0x07d:  movl   $&_ZZN24DisPatcher_SelectDungeon4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c7e95 +0x085:  movl   $0x18db,(%esp)
081c7e9c +0x08c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c7ea1 +0x091:  jmp    081c7f2f <+0x11f>
081c7ea6 +0x096:  mov    -0xc(%ebp),%eax
081c7ea9 +0x099:  add    $0x10,%eax
081c7eac +0x09c:  mov    %eax,0x4(%esp)
081c7eb0 +0x0a0:  mov    0xc(%ebp),%eax
081c7eb3 +0x0a3:  mov    %eax,(%esp)
081c7eb6 +0x0a6:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081c7ebb +0x0ab:  xor    $0x1,%eax
081c7ebe +0x0ae:  test   %al,%al
081c7ec0 +0x0b0:  je     081c7ee8 <+0xd8>
081c7ec2 +0x0b2:  movl   $0x0,0xc(%esp)
081c7eca +0x0ba:  movl   $0x0,0x8(%esp)
081c7ed2 +0x0c2:  movl   $&_ZZN24DisPatcher_SelectDungeon4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c7eda +0x0ca:  movl   $0x18e2,(%esp)
081c7ee1 +0x0d1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c7ee6 +0x0d6:  jmp    081c7f2f <+0x11f>
081c7ee8 +0x0d8:  mov    -0xc(%ebp),%eax
081c7eeb +0x0db:  add    $0x11,%eax
081c7eee +0x0de:  mov    %eax,0x4(%esp)
081c7ef2 +0x0e2:  mov    0xc(%ebp),%eax
081c7ef5 +0x0e5:  mov    %eax,(%esp)
081c7ef8 +0x0e8:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081c7efd +0x0ed:  xor    $0x1,%eax
081c7f00 +0x0f0:  test   %al,%al
081c7f02 +0x0f2:  je     081c7f2a <+0x11a>
081c7f04 +0x0f4:  movl   $0x0,0xc(%esp)
081c7f0c +0x0fc:  movl   $0x0,0x8(%esp)
081c7f14 +0x104:  movl   $&_ZZN24DisPatcher_SelectDungeon4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c7f1c +0x10c:  movl   $0x18e4,(%esp)
081c7f23 +0x113:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c7f28 +0x118:  jmp    081c7f2f <+0x11f>
081c7f2a +0x11a:  mov    $0x0,%eax
081c7f2f +0x11f:  leave
081c7f30 +0x120:  ret
081c7f31 +0x121:  nop
```

## 反编译 C

```c
// DisPatcher_SelectDungeon::read @ 0x81c7e10

/* DisPatcher_SelectDungeon::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_SelectDungeon::read(DisPatcher_SelectDungeon *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xf));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x10));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x11));
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = LineFunc(0x18e4,
                           "virtual int DisPatcher_SelectDungeon::read(PacketBuf&, MSG_BASE&)",0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x18e2,"virtual int DisPatcher_SelectDungeon::read(PacketBuf&, MSG_BASE&)",
                         0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x18db,"virtual int DisPatcher_SelectDungeon::read(PacketBuf&, MSG_BASE&)",0,
                       0);
    }
  }
  else {
    uVar2 = LineFunc(0x18da,"virtual int DisPatcher_SelectDungeon::read(PacketBuf&, MSG_BASE&)",0,0)
    ;
  }
  return uVar2;
}
```

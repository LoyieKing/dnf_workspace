# read

`_ZN22DisPatcher_RepairEquip4readER9PacketBufR8MSG_BASE`

`DisPatcher_RepairEquip::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_RepairEquip` | `0x081c5fa6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c5fa6  _ZN22DisPatcher_RepairEquip4readER9PacketBufR8MSG_BASE
#           DisPatcher_RepairEquip::read(PacketBuf&, MSG_BASE&)
# range [0x081c5fa6, 0x081c6081]
081c5fa6 +0x00:  push   %ebp
081c5fa7 +0x01:  mov    %esp,%ebp
081c5fa9 +0x03:  sub    $0x28,%esp
081c5fac +0x06:  mov    0x10(%ebp),%eax
081c5faf +0x09:  mov    %eax,-0xc(%ebp)
081c5fb2 +0x0c:  mov    -0xc(%ebp),%eax
081c5fb5 +0x0f:  add    $0xd,%eax
081c5fb8 +0x12:  mov    %eax,0x4(%esp)
081c5fbc +0x16:  mov    0xc(%ebp),%eax
081c5fbf +0x19:  mov    %eax,(%esp)
081c5fc2 +0x1c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081c5fc7 +0x21:  xor    $0x1,%eax
081c5fca +0x24:  test   %al,%al
081c5fcc +0x26:  je     081c5ff7 <+0x51>
081c5fce +0x28:  movl   $0x0,0xc(%esp)
081c5fd6 +0x30:  movl   $0x0,0x8(%esp)
081c5fde +0x38:  movl   $&_ZZN22DisPatcher_RepairEquip4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c5fe6 +0x40:  movl   $0x14e6,(%esp)
081c5fed +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c5ff2 +0x4c:  jmp    081c6080 <+0xda>
081c5ff7 +0x51:  mov    -0xc(%ebp),%eax
081c5ffa +0x54:  add    $0xe,%eax
081c5ffd +0x57:  mov    %eax,0x4(%esp)
081c6001 +0x5b:  mov    0xc(%ebp),%eax
081c6004 +0x5e:  mov    %eax,(%esp)
081c6007 +0x61:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081c600c +0x66:  xor    $0x1,%eax
081c600f +0x69:  test   %al,%al
081c6011 +0x6b:  je     081c6039 <+0x93>
081c6013 +0x6d:  movl   $0x0,0xc(%esp)
081c601b +0x75:  movl   $0x0,0x8(%esp)
081c6023 +0x7d:  movl   $&_ZZN22DisPatcher_RepairEquip4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c602b +0x85:  movl   $0x14e7,(%esp)
081c6032 +0x8c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c6037 +0x91:  jmp    081c6080 <+0xda>
081c6039 +0x93:  mov    -0xc(%ebp),%eax
081c603c +0x96:  add    $0x10,%eax
081c603f +0x99:  mov    %eax,0x4(%esp)
081c6043 +0x9d:  mov    0xc(%ebp),%eax
081c6046 +0xa0:  mov    %eax,(%esp)
081c6049 +0xa3:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081c604e +0xa8:  xor    $0x1,%eax
081c6051 +0xab:  test   %al,%al
081c6053 +0xad:  je     081c607b <+0xd5>
081c6055 +0xaf:  movl   $0x0,0xc(%esp)
081c605d +0xb7:  movl   $0x0,0x8(%esp)
081c6065 +0xbf:  movl   $&_ZZN22DisPatcher_RepairEquip4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c606d +0xc7:  movl   $0x14e9,(%esp)
081c6074 +0xce:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c6079 +0xd3:  jmp    081c6080 <+0xda>
081c607b +0xd5:  mov    $0x0,%eax
081c6080 +0xda:  leave
081c6081 +0xdb:  ret
```

## 反编译 C

```c
// DisPatcher_RepairEquip::read @ 0x81c5fa6

/* DisPatcher_RepairEquip::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_RepairEquip::read(DisPatcher_RepairEquip *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x10));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x14e9,"virtual int DisPatcher_RepairEquip::read(PacketBuf&, MSG_BASE&)",0,
                         0);
      }
    }
    else {
      uVar2 = LineFunc(0x14e7,"virtual int DisPatcher_RepairEquip::read(PacketBuf&, MSG_BASE&)",0,0)
      ;
    }
  }
  else {
    uVar2 = LineFunc(0x14e6,"virtual int DisPatcher_RepairEquip::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```

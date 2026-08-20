# read

`_ZN22DisPatcher_ChangeSkill4readER9PacketBufR8MSG_BASE`

`DisPatcher_ChangeSkill::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_ChangeSkill` | `0x081bfee6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bfee6  _ZN22DisPatcher_ChangeSkill4readER9PacketBufR8MSG_BASE
#           DisPatcher_ChangeSkill::read(PacketBuf&, MSG_BASE&)
# range [0x081bfee6, 0x081bffbb]
081bfee6 +0x00:  push   %ebp
081bfee7 +0x01:  mov    %esp,%ebp
081bfee9 +0x03:  sub    $0x18,%esp
081bfeec +0x06:  mov    0x10(%ebp),%eax
081bfeef +0x09:  add    $0xd,%eax
081bfef2 +0x0c:  mov    %eax,0x4(%esp)
081bfef6 +0x10:  mov    0xc(%ebp),%eax
081bfef9 +0x13:  mov    %eax,(%esp)
081bfefc +0x16:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081bff01 +0x1b:  xor    $0x1,%eax
081bff04 +0x1e:  test   %al,%al
081bff06 +0x20:  je     081bff31 <+0x4b>
081bff08 +0x22:  movl   $0x0,0xc(%esp)
081bff10 +0x2a:  movl   $0x0,0x8(%esp)
081bff18 +0x32:  movl   $&_ZZN22DisPatcher_ChangeSkill4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081bff20 +0x3a:  movl   $0x6f4,(%esp)
081bff27 +0x41:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081bff2c +0x46:  jmp    081bffba <+0xd4>
081bff31 +0x4b:  mov    0x10(%ebp),%eax
081bff34 +0x4e:  add    $0xe,%eax
081bff37 +0x51:  mov    %eax,0x4(%esp)
081bff3b +0x55:  mov    0xc(%ebp),%eax
081bff3e +0x58:  mov    %eax,(%esp)
081bff41 +0x5b:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081bff46 +0x60:  xor    $0x1,%eax
081bff49 +0x63:  test   %al,%al
081bff4b +0x65:  je     081bff73 <+0x8d>
081bff4d +0x67:  movl   $0x0,0xc(%esp)
081bff55 +0x6f:  movl   $0x0,0x8(%esp)
081bff5d +0x77:  movl   $&_ZZN22DisPatcher_ChangeSkill4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081bff65 +0x7f:  movl   $0x6f6,(%esp)
081bff6c +0x86:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081bff71 +0x8b:  jmp    081bffba <+0xd4>
081bff73 +0x8d:  mov    0x10(%ebp),%eax
081bff76 +0x90:  add    $0xf,%eax
081bff79 +0x93:  mov    %eax,0x4(%esp)
081bff7d +0x97:  mov    0xc(%ebp),%eax
081bff80 +0x9a:  mov    %eax,(%esp)
081bff83 +0x9d:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081bff88 +0xa2:  xor    $0x1,%eax
081bff8b +0xa5:  test   %al,%al
081bff8d +0xa7:  je     081bffb5 <+0xcf>
081bff8f +0xa9:  movl   $0x0,0xc(%esp)
081bff97 +0xb1:  movl   $0x0,0x8(%esp)
081bff9f +0xb9:  movl   $&_ZZN22DisPatcher_ChangeSkill4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081bffa7 +0xc1:  movl   $0x6f8,(%esp)
081bffae +0xc8:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081bffb3 +0xcd:  jmp    081bffba <+0xd4>
081bffb5 +0xcf:  mov    $0x0,%eax
081bffba +0xd4:  leave
081bffbb +0xd5:  ret
```

## 反编译 C

```c
// DisPatcher_ChangeSkill::read @ 0x81bfee6

/* DisPatcher_ChangeSkill::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_ChangeSkill::read(DisPatcher_ChangeSkill *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xf));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x6f8,"virtual int DisPatcher_ChangeSkill::read(PacketBuf&, MSG_BASE&)",0,0
                        );
      }
    }
    else {
      uVar2 = LineFunc(0x6f6,"virtual int DisPatcher_ChangeSkill::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x6f4,"virtual int DisPatcher_ChangeSkill::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```

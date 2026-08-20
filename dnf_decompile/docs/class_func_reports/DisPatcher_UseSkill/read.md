# read

`_ZN19DisPatcher_UseSkill4readER9PacketBufR8MSG_BASE`

`DisPatcher_UseSkill::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_UseSkill` | `0x081cac5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cac5e  _ZN19DisPatcher_UseSkill4readER9PacketBufR8MSG_BASE
#           DisPatcher_UseSkill::read(PacketBuf&, MSG_BASE&)
# range [0x081cac5e, 0x081cad7f]
081cac5e +0x000:  push   %ebp
081cac5f +0x001:  mov    %esp,%ebp
081cac61 +0x003:  sub    $0x28,%esp
081cac64 +0x006:  mov    0x10(%ebp),%eax
081cac67 +0x009:  mov    %eax,-0xc(%ebp)
081cac6a +0x00c:  mov    -0xc(%ebp),%eax
081cac6d +0x00f:  add    $0xd,%eax
081cac70 +0x012:  mov    %eax,0x4(%esp)
081cac74 +0x016:  mov    0xc(%ebp),%eax
081cac77 +0x019:  mov    %eax,(%esp)
081cac7a +0x01c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081cac7f +0x021:  xor    $0x1,%eax
081cac82 +0x024:  test   %al,%al
081cac84 +0x026:  je     081cacaf <+0x51>
081cac86 +0x028:  movl   $0x0,0xc(%esp)
081cac8e +0x030:  movl   $0x0,0x8(%esp)
081cac96 +0x038:  movl   $&_ZZN19DisPatcher_UseSkill4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cac9e +0x040:  movl   $0x1fce,(%esp)
081caca5 +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cacaa +0x04c:  jmp    081cad7d <+0x11f>
081cacaf +0x051:  mov    -0xc(%ebp),%eax
081cacb2 +0x054:  add    $0xe,%eax
081cacb5 +0x057:  mov    %eax,0x4(%esp)
081cacb9 +0x05b:  mov    0xc(%ebp),%eax
081cacbc +0x05e:  mov    %eax,(%esp)
081cacbf +0x061:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081cacc4 +0x066:  xor    $0x1,%eax
081cacc7 +0x069:  test   %al,%al
081cacc9 +0x06b:  je     081cacf4 <+0x96>
081caccb +0x06d:  movl   $0x0,0xc(%esp)
081cacd3 +0x075:  movl   $0x0,0x8(%esp)
081cacdb +0x07d:  movl   $&_ZZN19DisPatcher_UseSkill4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cace3 +0x085:  movl   $0x1fd0,(%esp)
081cacea +0x08c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cacef +0x091:  jmp    081cad7d <+0x11f>
081cacf4 +0x096:  mov    -0xc(%ebp),%eax
081cacf7 +0x099:  add    $0xf,%eax
081cacfa +0x09c:  mov    %eax,0x4(%esp)
081cacfe +0x0a0:  mov    0xc(%ebp),%eax
081cad01 +0x0a3:  mov    %eax,(%esp)
081cad04 +0x0a6:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081cad09 +0x0ab:  xor    $0x1,%eax
081cad0c +0x0ae:  test   %al,%al
081cad0e +0x0b0:  je     081cad36 <+0xd8>
081cad10 +0x0b2:  movl   $0x0,0xc(%esp)
081cad18 +0x0ba:  movl   $0x0,0x8(%esp)
081cad20 +0x0c2:  movl   $&_ZZN19DisPatcher_UseSkill4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cad28 +0x0ca:  movl   $0x1fd2,(%esp)
081cad2f +0x0d1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cad34 +0x0d6:  jmp    081cad7d <+0x11f>
081cad36 +0x0d8:  mov    -0xc(%ebp),%eax
081cad39 +0x0db:  add    $0x11,%eax
081cad3c +0x0de:  mov    %eax,0x4(%esp)
081cad40 +0x0e2:  mov    0xc(%ebp),%eax
081cad43 +0x0e5:  mov    %eax,(%esp)
081cad46 +0x0e8:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081cad4b +0x0ed:  xor    $0x1,%eax
081cad4e +0x0f0:  test   %al,%al
081cad50 +0x0f2:  je     081cad78 <+0x11a>
081cad52 +0x0f4:  movl   $0x0,0xc(%esp)
081cad5a +0x0fc:  movl   $0x0,0x8(%esp)
081cad62 +0x104:  movl   $&_ZZN19DisPatcher_UseSkill4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cad6a +0x10c:  movl   $0x1fd9,(%esp)
081cad71 +0x113:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cad76 +0x118:  jmp    081cad7d <+0x11f>
081cad78 +0x11a:  mov    $0x0,%eax
081cad7d +0x11f:  leave
081cad7e +0x120:  ret
081cad7f +0x121:  nop
```

## 反编译 C

```c
// DisPatcher_UseSkill::read @ 0x81cac5e

/* DisPatcher_UseSkill::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_UseSkill::read(DisPatcher_UseSkill *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xf));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x11));
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = LineFunc(0x1fd9,"virtual int DisPatcher_UseSkill::read(PacketBuf&, MSG_BASE&)",0,0
                          );
        }
      }
      else {
        uVar2 = LineFunc(0x1fd2,"virtual int DisPatcher_UseSkill::read(PacketBuf&, MSG_BASE&)",0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x1fd0,"virtual int DisPatcher_UseSkill::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x1fce,"virtual int DisPatcher_UseSkill::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```

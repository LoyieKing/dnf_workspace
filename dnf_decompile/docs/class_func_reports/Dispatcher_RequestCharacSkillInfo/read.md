# read

`_ZN33Dispatcher_RequestCharacSkillInfo4readER9PacketBufR8MSG_BASE`

`Dispatcher_RequestCharacSkillInfo::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestCharacSkillInfo` | `0x081e3914` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e3914  _ZN33Dispatcher_RequestCharacSkillInfo4readER9PacketBufR8MSG_BASE
#           Dispatcher_RequestCharacSkillInfo::read(PacketBuf&, MSG_BASE&)
# range [0x081e3914, 0x081e39df]
081e3914 +0x00:  push   %ebp
081e3915 +0x01:  mov    %esp,%ebp
081e3917 +0x03:  sub    $0x38,%esp
081e391a +0x06:  mov    0x10(%ebp),%eax
081e391d +0x09:  mov    %eax,-0xc(%ebp)
081e3920 +0x0c:  mov    -0xc(%ebp),%eax
081e3923 +0x0f:  add    $0xd,%eax
081e3926 +0x12:  mov    %eax,0x4(%esp)
081e392a +0x16:  mov    0xc(%ebp),%eax
081e392d +0x19:  mov    %eax,(%esp)
081e3930 +0x1c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081e3935 +0x21:  xor    $0x1,%eax
081e3938 +0x24:  test   %al,%al
081e393a +0x26:  je     081e3962 <+0x4e>
081e393c +0x28:  movl   $0x0,0xc(%esp)
081e3944 +0x30:  movl   $0x0,0x8(%esp)
081e394c +0x38:  movl   $&_ZZN33Dispatcher_RequestCharacSkillInfo4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e3954 +0x40:  movl   $0x5b1b,(%esp)
081e395b +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e3960 +0x4c:  jmp    081e39dd <+0xc9>
081e3962 +0x4e:  mov    -0xc(%ebp),%eax
081e3965 +0x51:  movzbl 0xd(%eax),%eax
081e3969 +0x55:  test   %al,%al
081e396b +0x57:  js     081e3978 <+0x64>
081e396d +0x59:  mov    -0xc(%ebp),%eax
081e3970 +0x5c:  movzbl 0xd(%eax),%eax
081e3974 +0x60:  cmp    $0x23,%al
081e3976 +0x62:  jle    081e39d8 <+0xc4>
081e3978 +0x64:  mov    -0xc(%ebp),%eax
081e397b +0x67:  movzbl 0xd(%eax),%eax
081e397f +0x6b:  movsbl %al,%eax
081e3982 +0x6e:  mov    %eax,0x14(%esp)
081e3986 +0x72:  movl   $"RequestCharacSkillInfo ReadPacket ERROR! : characIdx(%d)",0x10(%esp)
081e398e +0x7a:  movl   $0x5b20,0xc(%esp)
081e3996 +0x82:  movl   $&_ZZN33Dispatcher_RequestCharacSkillInfo4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x8(%esp)
081e399e +0x8a:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081e39a6 +0x92:  movl   $0x1,(%esp)
081e39ad +0x99:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081e39b2 +0x9e:  movl   $0x0,0xc(%esp)
081e39ba +0xa6:  movl   $0x0,0x8(%esp)
081e39c2 +0xae:  movl   $&_ZZN33Dispatcher_RequestCharacSkillInfo4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e39ca +0xb6:  movl   $0x5b22,(%esp)
081e39d1 +0xbd:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e39d6 +0xc2:  jmp    081e39dd <+0xc9>
081e39d8 +0xc4:  mov    $0x0,%eax
081e39dd +0xc9:  leave
081e39de +0xca:  ret
081e39df +0xcb:  nop
```

## 反编译 C

```c
// Dispatcher_RequestCharacSkillInfo::read @ 0x81e3914

/* Dispatcher_RequestCharacSkillInfo::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_RequestCharacSkillInfo::read
          (Dispatcher_RequestCharacSkillInfo *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    if (((char)param_2[0xd] < '\0') || ('#' < (char)param_2[0xd])) {
      LogManager::logFormat
                (1,"PacketDispatcher_Impl_1.cpp",
                 "virtual int Dispatcher_RequestCharacSkillInfo::read(PacketBuf&, MSG_BASE&)",0x5b20
                 ,"RequestCharacSkillInfo ReadPacket ERROR! : characIdx(%d)",(int)(char)param_2[0xd]
                );
      uVar2 = LineFunc(0x5b22,
                       "virtual int Dispatcher_RequestCharacSkillInfo::read(PacketBuf&, MSG_BASE&)",
                       0,0);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = LineFunc(0x5b1b,
                     "virtual int Dispatcher_RequestCharacSkillInfo::read(PacketBuf&, MSG_BASE&)",0,
                     0);
  }
  return uVar2;
}
```

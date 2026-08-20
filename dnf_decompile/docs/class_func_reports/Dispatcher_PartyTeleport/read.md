# read

`_ZN24Dispatcher_PartyTeleport4readER9PacketBufR8MSG_BASE`

`Dispatcher_PartyTeleport::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PartyTeleport` | `0x081dbe70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dbe70  _ZN24Dispatcher_PartyTeleport4readER9PacketBufR8MSG_BASE
#           Dispatcher_PartyTeleport::read(PacketBuf&, MSG_BASE&)
# range [0x081dbe70, 0x081dbfd5]
081dbe70 +0x000:  push   %ebp
081dbe71 +0x001:  mov    %esp,%ebp
081dbe73 +0x003:  sub    $0x28,%esp
081dbe76 +0x006:  mov    0x10(%ebp),%eax
081dbe79 +0x009:  mov    %eax,-0xc(%ebp)
081dbe7c +0x00c:  mov    -0xc(%ebp),%eax
081dbe7f +0x00f:  add    $0xd,%eax
081dbe82 +0x012:  mov    %eax,0x4(%esp)
081dbe86 +0x016:  mov    0xc(%ebp),%eax
081dbe89 +0x019:  mov    %eax,(%esp)
081dbe8c +0x01c:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081dbe91 +0x021:  xor    $0x1,%eax
081dbe94 +0x024:  test   %al,%al
081dbe96 +0x026:  je     081dbec1 <+0x51>
081dbe98 +0x028:  movl   $0x0,0xc(%esp)
081dbea0 +0x030:  movl   $0x0,0x8(%esp)
081dbea8 +0x038:  movl   $&_ZZN24Dispatcher_PartyTeleport4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081dbeb0 +0x040:  movl   $0x4b1f,(%esp)
081dbeb7 +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081dbebc +0x04c:  jmp    081dbfd4 <+0x164>
081dbec1 +0x051:  mov    -0xc(%ebp),%eax
081dbec4 +0x054:  add    $0xe,%eax
081dbec7 +0x057:  mov    %eax,0x4(%esp)
081dbecb +0x05b:  mov    0xc(%ebp),%eax
081dbece +0x05e:  mov    %eax,(%esp)
081dbed1 +0x061:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081dbed6 +0x066:  xor    $0x1,%eax
081dbed9 +0x069:  test   %al,%al
081dbedb +0x06b:  je     081dbf06 <+0x96>
081dbedd +0x06d:  movl   $0x0,0xc(%esp)
081dbee5 +0x075:  movl   $0x0,0x8(%esp)
081dbeed +0x07d:  movl   $&_ZZN24Dispatcher_PartyTeleport4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081dbef5 +0x085:  movl   $0x4b20,(%esp)
081dbefc +0x08c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081dbf01 +0x091:  jmp    081dbfd4 <+0x164>
081dbf06 +0x096:  mov    -0xc(%ebp),%eax
081dbf09 +0x099:  add    $0xf,%eax
081dbf0c +0x09c:  mov    %eax,0x4(%esp)
081dbf10 +0x0a0:  mov    0xc(%ebp),%eax
081dbf13 +0x0a3:  mov    %eax,(%esp)
081dbf16 +0x0a6:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081dbf1b +0x0ab:  xor    $0x1,%eax
081dbf1e +0x0ae:  test   %al,%al
081dbf20 +0x0b0:  je     081dbf4b <+0xdb>
081dbf22 +0x0b2:  movl   $0x0,0xc(%esp)
081dbf2a +0x0ba:  movl   $0x0,0x8(%esp)
081dbf32 +0x0c2:  movl   $&_ZZN24Dispatcher_PartyTeleport4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081dbf3a +0x0ca:  movl   $0x4b21,(%esp)
081dbf41 +0x0d1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081dbf46 +0x0d6:  jmp    081dbfd4 <+0x164>
081dbf4b +0x0db:  mov    -0xc(%ebp),%eax
081dbf4e +0x0de:  add    $0x11,%eax
081dbf51 +0x0e1:  mov    %eax,0x4(%esp)
081dbf55 +0x0e5:  mov    0xc(%ebp),%eax
081dbf58 +0x0e8:  mov    %eax,(%esp)
081dbf5b +0x0eb:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081dbf60 +0x0f0:  xor    $0x1,%eax
081dbf63 +0x0f3:  test   %al,%al
081dbf65 +0x0f5:  je     081dbf8d <+0x11d>
081dbf67 +0x0f7:  movl   $0x0,0xc(%esp)
081dbf6f +0x0ff:  movl   $0x0,0x8(%esp)
081dbf77 +0x107:  movl   $&_ZZN24Dispatcher_PartyTeleport4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081dbf7f +0x10f:  movl   $0x4b22,(%esp)
081dbf86 +0x116:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081dbf8b +0x11b:  jmp    081dbfd4 <+0x164>
081dbf8d +0x11d:  mov    -0xc(%ebp),%eax
081dbf90 +0x120:  add    $0x13,%eax
081dbf93 +0x123:  mov    %eax,0x4(%esp)
081dbf97 +0x127:  mov    0xc(%ebp),%eax
081dbf9a +0x12a:  mov    %eax,(%esp)
081dbf9d +0x12d:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081dbfa2 +0x132:  xor    $0x1,%eax
081dbfa5 +0x135:  test   %al,%al
081dbfa7 +0x137:  je     081dbfcf <+0x15f>
081dbfa9 +0x139:  movl   $0x0,0xc(%esp)
081dbfb1 +0x141:  movl   $0x0,0x8(%esp)
081dbfb9 +0x149:  movl   $&_ZZN24Dispatcher_PartyTeleport4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081dbfc1 +0x151:  movl   $0x4b23,(%esp)
081dbfc8 +0x158:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081dbfcd +0x15d:  jmp    081dbfd4 <+0x164>
081dbfcf +0x15f:  mov    $0x0,%eax
081dbfd4 +0x164:  leave
081dbfd5 +0x165:  ret
```

## 反编译 C

```c
// Dispatcher_PartyTeleport::read @ 0x81dbe70

/* Dispatcher_PartyTeleport::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_PartyTeleport::read(Dispatcher_PartyTeleport *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xf));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x11));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x13));
          if (cVar1 == '\x01') {
            uVar2 = 0;
          }
          else {
            uVar2 = LineFunc(0x4b23,
                             "virtual int Dispatcher_PartyTeleport::read(PacketBuf&, MSG_BASE&)",0,0
                            );
          }
        }
        else {
          uVar2 = LineFunc(0x4b22,
                           "virtual int Dispatcher_PartyTeleport::read(PacketBuf&, MSG_BASE&)",0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x4b21,"virtual int Dispatcher_PartyTeleport::read(PacketBuf&, MSG_BASE&)",
                         0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x4b20,"virtual int Dispatcher_PartyTeleport::read(PacketBuf&, MSG_BASE&)",0,
                       0);
    }
  }
  else {
    uVar2 = LineFunc(0x4b1f,"virtual int Dispatcher_PartyTeleport::read(PacketBuf&, MSG_BASE&)",0,0)
    ;
  }
  return uVar2;
}
```

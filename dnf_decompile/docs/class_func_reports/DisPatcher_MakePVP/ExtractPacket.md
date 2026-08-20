# ExtractPacket

`_ZN18DisPatcher_MakePVP13ExtractPacketER9PacketBufR17MSG_MAKE_PVP_ROOM`

`DisPatcher_MakePVP::ExtractPacket(PacketBuf&, MSG_MAKE_PVP_ROOM&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_MakePVP` | `0x081f81ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081f81ba  _ZN18DisPatcher_MakePVP13ExtractPacketER9PacketBufR17MSG_MAKE_PVP_ROOM
#           DisPatcher_MakePVP::ExtractPacket(PacketBuf&, MSG_MAKE_PVP_ROOM&)
# range [0x081f81ba, 0x081f837f]
081f81ba +0x000:  push   %ebp
081f81bb +0x001:  mov    %esp,%ebp
081f81bd +0x003:  sub    $0x28,%esp
081f81c0 +0x006:  mov    0x10(%ebp),%eax
081f81c3 +0x009:  add    $0xd,%eax
081f81c6 +0x00c:  mov    %eax,0x4(%esp)
081f81ca +0x010:  mov    0xc(%ebp),%eax
081f81cd +0x013:  mov    %eax,(%esp)
081f81d0 +0x016:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081f81d5 +0x01b:  xor    $0x1,%eax
081f81d8 +0x01e:  test   %al,%al
081f81da +0x020:  jne    081f81e7 <+0x2d>
081f81dc +0x022:  mov    0x10(%ebp),%eax
081f81df +0x025:  movzbl 0xd(%eax),%eax
081f81e3 +0x029:  test   %al,%al
081f81e5 +0x02b:  jns    081f81ee <+0x34>
081f81e7 +0x02d:  mov    $0x1,%eax
081f81ec +0x032:  jmp    081f81f3 <+0x39>
081f81ee +0x034:  mov    $0x0,%eax
081f81f3 +0x039:  test   %al,%al
081f81f5 +0x03b:  je     081f8201 <+0x47>
081f81f7 +0x03d:  mov    $0x0,%eax
081f81fc +0x042:  jmp    081f837e <+0x1c4>
081f8201 +0x047:  mov    0x10(%ebp),%eax
081f8204 +0x04a:  movzbl 0xd(%eax),%eax
081f8208 +0x04e:  test   %al,%al
081f820a +0x050:  jne    081f828a <+0xd0>
081f820c +0x052:  movl   $0x0,-0x10(%ebp)
081f8213 +0x059:  lea    -0x10(%ebp),%eax
081f8216 +0x05c:  mov    %eax,0x4(%esp)
081f821a +0x060:  mov    0xc(%ebp),%eax
081f821d +0x063:  mov    %eax,(%esp)
081f8220 +0x066:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081f8225 +0x06b:  xor    $0x1,%eax
081f8228 +0x06e:  test   %al,%al
081f822a +0x070:  jne    081f823b <+0x81>
081f822c +0x072:  mov    -0x10(%ebp),%eax
081f822f +0x075:  test   %eax,%eax
081f8231 +0x077:  js     081f823b <+0x81>
081f8233 +0x079:  mov    -0x10(%ebp),%eax
081f8236 +0x07c:  cmp    $0x1d,%eax
081f8239 +0x07f:  jle    081f8242 <+0x88>
081f823b +0x081:  mov    $0x1,%eax
081f8240 +0x086:  jmp    081f8247 <+0x8d>
081f8242 +0x088:  mov    $0x0,%eax
081f8247 +0x08d:  test   %al,%al
081f8249 +0x08f:  je     081f8255 <+0x9b>
081f824b +0x091:  mov    $0x0,%eax
081f8250 +0x096:  jmp    081f837e <+0x1c4>
081f8255 +0x09b:  mov    -0x10(%ebp),%eax
081f8258 +0x09e:  mov    0x10(%ebp),%edx
081f825b +0x0a1:  add    $0xe,%edx
081f825e +0x0a4:  mov    %eax,0xc(%esp)
081f8262 +0x0a8:  movl   $0x1e,0x8(%esp)
081f826a +0x0b0:  mov    %edx,0x4(%esp)
081f826e +0x0b4:  mov    0xc(%ebp),%eax
081f8271 +0x0b7:  mov    %eax,(%esp)
081f8274 +0x0ba:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081f8279 +0x0bf:  xor    $0x1,%eax
081f827c +0x0c2:  test   %al,%al
081f827e +0x0c4:  je     081f828a <+0xd0>
081f8280 +0x0c6:  mov    $0x0,%eax
081f8285 +0x0cb:  jmp    081f837e <+0x1c4>
081f828a +0x0d0:  mov    0x10(%ebp),%eax
081f828d +0x0d3:  add    $0x2c,%eax
081f8290 +0x0d6:  mov    %eax,0x4(%esp)
081f8294 +0x0da:  mov    0xc(%ebp),%eax
081f8297 +0x0dd:  mov    %eax,(%esp)
081f829a +0x0e0:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081f829f +0x0e5:  xor    $0x1,%eax
081f82a2 +0x0e8:  test   %al,%al
081f82a4 +0x0ea:  je     081f82b0 <+0xf6>
081f82a6 +0x0ec:  mov    $0x0,%eax
081f82ab +0x0f1:  jmp    081f837e <+0x1c4>
081f82b0 +0x0f6:  mov    0x10(%ebp),%eax
081f82b3 +0x0f9:  add    $0x2e,%eax
081f82b6 +0x0fc:  mov    %eax,0x4(%esp)
081f82ba +0x100:  mov    0xc(%ebp),%eax
081f82bd +0x103:  mov    %eax,(%esp)
081f82c0 +0x106:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081f82c5 +0x10b:  xor    $0x1,%eax
081f82c8 +0x10e:  test   %al,%al
081f82ca +0x110:  je     081f82d6 <+0x11c>
081f82cc +0x112:  mov    $0x0,%eax
081f82d1 +0x117:  jmp    081f837e <+0x1c4>
081f82d6 +0x11c:  mov    0x10(%ebp),%eax
081f82d9 +0x11f:  movzbl 0x2e(%eax),%eax
081f82dd +0x123:  cmp    $0x1,%al
081f82df +0x125:  jne    081f8343 <+0x189>
081f82e1 +0x127:  mov    0x10(%ebp),%eax
081f82e4 +0x12a:  add    $0x2f,%eax
081f82e7 +0x12d:  mov    %eax,0x4(%esp)
081f82eb +0x131:  mov    0xc(%ebp),%eax
081f82ee +0x134:  mov    %eax,(%esp)
081f82f1 +0x137:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081f82f6 +0x13c:  xor    $0x1,%eax
081f82f9 +0x13f:  test   %al,%al
081f82fb +0x141:  je     081f8304 <+0x14a>
081f82fd +0x143:  mov    $0x0,%eax
081f8302 +0x148:  jmp    081f837e <+0x1c4>
081f8304 +0x14a:  mov    0x10(%ebp),%eax
081f8307 +0x14d:  mov    0x2f(%eax),%eax
081f830a +0x150:  cmp    $0x8,%eax
081f830d +0x153:  jle    081f8316 <+0x15c>
081f830f +0x155:  mov    $0x0,%eax
081f8314 +0x15a:  jmp    081f837e <+0x1c4>
081f8316 +0x15c:  mov    0x10(%ebp),%eax
081f8319 +0x15f:  mov    0x2f(%eax),%eax
081f831c +0x162:  mov    0x10(%ebp),%edx
081f831f +0x165:  add    $0x33,%edx
081f8322 +0x168:  mov    %eax,0x8(%esp)
081f8326 +0x16c:  mov    %edx,0x4(%esp)
081f832a +0x170:  mov    0xc(%ebp),%eax
081f832d +0x173:  mov    %eax,(%esp)
081f8330 +0x176:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
081f8335 +0x17b:  xor    $0x1,%eax
081f8338 +0x17e:  test   %al,%al
081f833a +0x180:  je     081f8343 <+0x189>
081f833c +0x182:  mov    $0x0,%eax
081f8341 +0x187:  jmp    081f837e <+0x1c4>
081f8343 +0x189:  lea    -0x9(%ebp),%eax
081f8346 +0x18c:  mov    %eax,0x4(%esp)
081f834a +0x190:  mov    0xc(%ebp),%eax
081f834d +0x193:  mov    %eax,(%esp)
081f8350 +0x196:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081f8355 +0x19b:  xor    $0x1,%eax
081f8358 +0x19e:  test   %al,%al
081f835a +0x1a0:  je     081f8363 <+0x1a9>
081f835c +0x1a2:  mov    $0x0,%eax
081f8361 +0x1a7:  jmp    081f837e <+0x1c4>
081f8363 +0x1a9:  mov    0x10(%ebp),%eax
081f8366 +0x1ac:  movb   $0x0,0x3c(%eax)
081f836a +0x1b0:  movzbl -0x9(%ebp),%eax
081f836e +0x1b4:  cmp    $0x1,%al
081f8370 +0x1b6:  jne    081f8379 <+0x1bf>
081f8372 +0x1b8:  mov    0x10(%ebp),%eax
081f8375 +0x1bb:  movb   $0x1,0x3c(%eax)
081f8379 +0x1bf:  mov    $0x1,%eax
081f837e +0x1c4:  leave
081f837f +0x1c5:  ret
```

## 反编译 C

```c
// DisPatcher_MakePVP::ExtractPacket @ 0x81f81ba

/* DisPatcher_MakePVP::ExtractPacket(PacketBuf&, MSG_MAKE_PVP_ROOM&) */

undefined4 __thiscall
DisPatcher_MakePVP::ExtractPacket
          (DisPatcher_MakePVP *this,PacketBuf *param_1,MSG_MAKE_PVP_ROOM *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int local_14;
  char local_d [9];
  
  cVar2 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if ((cVar2 == '\x01') && (-1 < (char)param_2[0xd])) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 0;
  }
  if (param_2[0xd] == (MSG_MAKE_PVP_ROOM)0x0) {
    local_14 = 0;
    cVar2 = PacketBuf::get_int(param_1,&local_14);
    if (((cVar2 == '\x01') && (-1 < local_14)) && (local_14 < 0x1e)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return 0;
    }
    cVar2 = PacketBuf::get_str(param_1,(char *)(param_2 + 0xe),0x1e,local_14);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  cVar2 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x2c));
  if (cVar2 == '\x01') {
    cVar2 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x2e));
    if (cVar2 == '\x01') {
      if (param_2[0x2e] == (MSG_MAKE_PVP_ROOM)0x1) {
        cVar2 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x2f));
        if (cVar2 != '\x01') {
          return 0;
        }
        if (8 < *(int *)(param_2 + 0x2f)) {
          return 0;
        }
        cVar2 = PacketBuf::get_binary(param_1,(char *)(param_2 + 0x33),*(int *)(param_2 + 0x2f));
        if (cVar2 != '\x01') {
          return 0;
        }
      }
      cVar2 = PacketBuf::get_byte(param_1,local_d);
      if (cVar2 == '\x01') {
        param_2[0x3c] = (MSG_MAKE_PVP_ROOM)0x0;
        if (local_d[0] == '\x01') {
          param_2[0x3c] = (MSG_MAKE_PVP_ROOM)0x1;
        }
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```

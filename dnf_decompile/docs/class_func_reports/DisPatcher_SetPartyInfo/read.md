# read

`_ZN23DisPatcher_SetPartyInfo4readER9PacketBufR8MSG_BASE`

`DisPatcher_SetPartyInfo::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SetPartyInfo` | `0x081c4396` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c4396  _ZN23DisPatcher_SetPartyInfo4readER9PacketBufR8MSG_BASE
#           DisPatcher_SetPartyInfo::read(PacketBuf&, MSG_BASE&)
# range [0x081c4396, 0x081c4561]
081c4396 +0x000:  push   %ebp
081c4397 +0x001:  mov    %esp,%ebp
081c4399 +0x003:  sub    $0x28,%esp
081c439c +0x006:  mov    0x10(%ebp),%eax
081c439f +0x009:  mov    %eax,-0xc(%ebp)
081c43a2 +0x00c:  mov    -0xc(%ebp),%eax
081c43a5 +0x00f:  add    $0xd,%eax
081c43a8 +0x012:  mov    %eax,0x4(%esp)
081c43ac +0x016:  mov    0xc(%ebp),%eax
081c43af +0x019:  mov    %eax,(%esp)
081c43b2 +0x01c:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081c43b7 +0x021:  xor    $0x1,%eax
081c43ba +0x024:  test   %al,%al
081c43bc +0x026:  je     081c43e7 <+0x51>
081c43be +0x028:  movl   $0x0,0xc(%esp)
081c43c6 +0x030:  movl   $0x0,0x8(%esp)
081c43ce +0x038:  movl   $&_ZZN23DisPatcher_SetPartyInfo4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c43d6 +0x040:  movl   $0x10d9,(%esp)
081c43dd +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c43e2 +0x04c:  jmp    081c4560 <+0x1ca>
081c43e7 +0x051:  mov    -0xc(%ebp),%eax
081c43ea +0x054:  movzbl 0xd(%eax),%eax
081c43ee +0x058:  test   %al,%al
081c43f0 +0x05a:  jne    081c4492 <+0xfc>
081c43f6 +0x060:  mov    -0xc(%ebp),%eax
081c43f9 +0x063:  add    $0xe,%eax
081c43fc +0x066:  mov    %eax,0x4(%esp)
081c4400 +0x06a:  mov    0xc(%ebp),%eax
081c4403 +0x06d:  mov    %eax,(%esp)
081c4406 +0x070:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081c440b +0x075:  xor    $0x1,%eax
081c440e +0x078:  test   %al,%al
081c4410 +0x07a:  je     081c443b <+0xa5>
081c4412 +0x07c:  movl   $0x0,0xc(%esp)
081c441a +0x084:  movl   $0x0,0x8(%esp)
081c4422 +0x08c:  movl   $&_ZZN23DisPatcher_SetPartyInfo4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c442a +0x094:  movl   $0x10dd,(%esp)
081c4431 +0x09b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c4436 +0x0a0:  jmp    081c4560 <+0x1ca>
081c443b +0x0a5:  mov    -0xc(%ebp),%eax
081c443e +0x0a8:  mov    0xe(%eax),%eax
081c4441 +0x0ab:  mov    -0xc(%ebp),%edx
081c4444 +0x0ae:  add    $0x12,%edx
081c4447 +0x0b1:  mov    %eax,0xc(%esp)
081c444b +0x0b5:  movl   $0x20,0x8(%esp)
081c4453 +0x0bd:  mov    %edx,0x4(%esp)
081c4457 +0x0c1:  mov    0xc(%ebp),%eax
081c445a +0x0c4:  mov    %eax,(%esp)
081c445d +0x0c7:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081c4462 +0x0cc:  xor    $0x1,%eax
081c4465 +0x0cf:  test   %al,%al
081c4467 +0x0d1:  je     081c4492 <+0xfc>
081c4469 +0x0d3:  movl   $0x0,0xc(%esp)
081c4471 +0x0db:  movl   $0x0,0x8(%esp)
081c4479 +0x0e3:  movl   $&_ZZN23DisPatcher_SetPartyInfo4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c4481 +0x0eb:  movl   $0x10e0,(%esp)
081c4488 +0x0f2:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c448d +0x0f7:  jmp    081c4560 <+0x1ca>
081c4492 +0x0fc:  mov    -0xc(%ebp),%eax
081c4495 +0x0ff:  add    $0x32,%eax
081c4498 +0x102:  mov    %eax,0x4(%esp)
081c449c +0x106:  mov    0xc(%ebp),%eax
081c449f +0x109:  mov    %eax,(%esp)
081c44a2 +0x10c:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081c44a7 +0x111:  xor    $0x1,%eax
081c44aa +0x114:  test   %al,%al
081c44ac +0x116:  je     081c44d7 <+0x141>
081c44ae +0x118:  movl   $0x0,0xc(%esp)
081c44b6 +0x120:  movl   $0x0,0x8(%esp)
081c44be +0x128:  movl   $&_ZZN23DisPatcher_SetPartyInfo4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c44c6 +0x130:  movl   $0x10e2,(%esp)
081c44cd +0x137:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c44d2 +0x13c:  jmp    081c4560 <+0x1ca>
081c44d7 +0x141:  mov    -0xc(%ebp),%eax
081c44da +0x144:  add    $0x33,%eax
081c44dd +0x147:  mov    %eax,0x4(%esp)
081c44e1 +0x14b:  mov    0xc(%ebp),%eax
081c44e4 +0x14e:  mov    %eax,(%esp)
081c44e7 +0x151:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081c44ec +0x156:  xor    $0x1,%eax
081c44ef +0x159:  test   %al,%al
081c44f1 +0x15b:  je     081c4519 <+0x183>
081c44f3 +0x15d:  movl   $0x0,0xc(%esp)
081c44fb +0x165:  movl   $0x0,0x8(%esp)
081c4503 +0x16d:  movl   $&_ZZN23DisPatcher_SetPartyInfo4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c450b +0x175:  movl   $0x10e5,(%esp)
081c4512 +0x17c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c4517 +0x181:  jmp    081c4560 <+0x1ca>
081c4519 +0x183:  mov    -0xc(%ebp),%eax
081c451c +0x186:  add    $0x35,%eax
081c451f +0x189:  mov    %eax,0x4(%esp)
081c4523 +0x18d:  mov    0xc(%ebp),%eax
081c4526 +0x190:  mov    %eax,(%esp)
081c4529 +0x193:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081c452e +0x198:  xor    $0x1,%eax
081c4531 +0x19b:  test   %al,%al
081c4533 +0x19d:  je     081c455b <+0x1c5>
081c4535 +0x19f:  movl   $0x0,0xc(%esp)
081c453d +0x1a7:  movl   $0x0,0x8(%esp)
081c4545 +0x1af:  movl   $&_ZZN23DisPatcher_SetPartyInfo4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c454d +0x1b7:  movl   $0x10e6,(%esp)
081c4554 +0x1be:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c4559 +0x1c3:  jmp    081c4560 <+0x1ca>
081c455b +0x1c5:  mov    $0x0,%eax
081c4560 +0x1ca:  leave
081c4561 +0x1cb:  ret
```

## 反编译 C

```c
// DisPatcher_SetPartyInfo::read @ 0x81c4396

/* DisPatcher_SetPartyInfo::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_SetPartyInfo::read(DisPatcher_SetPartyInfo *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  if (cVar1 != '\x01') {
    uVar2 = LineFunc(0x10d9,"virtual int DisPatcher_SetPartyInfo::read(PacketBuf&, MSG_BASE&)",0,0);
    return uVar2;
  }
  if (param_2[0xd] == (MSG_BASE)0x0) {
    cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xe));
    if (cVar1 != '\x01') {
      uVar2 = LineFunc(0x10dd,"virtual int DisPatcher_SetPartyInfo::read(PacketBuf&, MSG_BASE&)",0,0
                      );
      return uVar2;
    }
    cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0x12),0x20,*(int *)(param_2 + 0xe));
    if (cVar1 != '\x01') {
      uVar2 = LineFunc(0x10e0,"virtual int DisPatcher_SetPartyInfo::read(PacketBuf&, MSG_BASE&)",0,0
                      );
      return uVar2;
    }
  }
  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x32));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x33));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x35));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x10e6,"virtual int DisPatcher_SetPartyInfo::read(PacketBuf&, MSG_BASE&)",0
                         ,0);
      }
    }
    else {
      uVar2 = LineFunc(0x10e5,"virtual int DisPatcher_SetPartyInfo::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
  }
  else {
    uVar2 = LineFunc(0x10e2,"virtual int DisPatcher_SetPartyInfo::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```

# read

`_ZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASE`

`Dispatcher_ItemHyperLinkMessage::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ItemHyperLinkMessage` | `0x081d98c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d98c4  _ZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASE
#           Dispatcher_ItemHyperLinkMessage::read(PacketBuf&, MSG_BASE&)
# range [0x081d98c4, 0x081d9c49]
081d98c4 +0x000:  push   %ebp
081d98c5 +0x001:  mov    %esp,%ebp
081d98c7 +0x003:  sub    $0x28,%esp
081d98ca +0x006:  mov    0x10(%ebp),%eax
081d98cd +0x009:  mov    %eax,-0x10(%ebp)
081d98d0 +0x00c:  mov    -0x10(%ebp),%eax
081d98d3 +0x00f:  add    $0xd,%eax
081d98d6 +0x012:  mov    %eax,0x4(%esp)
081d98da +0x016:  mov    0xc(%ebp),%eax
081d98dd +0x019:  mov    %eax,(%esp)
081d98e0 +0x01c:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081d98e5 +0x021:  xor    $0x1,%eax
081d98e8 +0x024:  test   %al,%al
081d98ea +0x026:  je     081d9915 <+0x51>
081d98ec +0x028:  movl   $0x0,0xc(%esp)
081d98f4 +0x030:  movl   $0x0,0x8(%esp)
081d98fc +0x038:  movl   $&_ZZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d9904 +0x040:  movl   $0x4765,(%esp)
081d990b +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d9910 +0x04c:  jmp    081d9c47 <+0x383>
081d9915 +0x051:  mov    -0x10(%ebp),%eax
081d9918 +0x054:  add    $0xe,%eax
081d991b +0x057:  mov    %eax,0x4(%esp)
081d991f +0x05b:  mov    0xc(%ebp),%eax
081d9922 +0x05e:  mov    %eax,(%esp)
081d9925 +0x061:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081d992a +0x066:  xor    $0x1,%eax
081d992d +0x069:  test   %al,%al
081d992f +0x06b:  je     081d995a <+0x96>
081d9931 +0x06d:  movl   $0x0,0xc(%esp)
081d9939 +0x075:  movl   $0x0,0x8(%esp)
081d9941 +0x07d:  movl   $&_ZZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d9949 +0x085:  movl   $0x4768,(%esp)
081d9950 +0x08c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d9955 +0x091:  jmp    081d9c47 <+0x383>
081d995a +0x096:  mov    -0x10(%ebp),%eax
081d995d +0x099:  add    $0x10,%eax
081d9960 +0x09c:  mov    %eax,0x4(%esp)
081d9964 +0x0a0:  mov    0xc(%ebp),%eax
081d9967 +0x0a3:  mov    %eax,(%esp)
081d996a +0x0a6:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081d996f +0x0ab:  xor    $0x1,%eax
081d9972 +0x0ae:  test   %al,%al
081d9974 +0x0b0:  je     081d999f <+0xdb>
081d9976 +0x0b2:  movl   $0x0,0xc(%esp)
081d997e +0x0ba:  movl   $0x0,0x8(%esp)
081d9986 +0x0c2:  movl   $&_ZZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d998e +0x0ca:  movl   $0x476b,(%esp)
081d9995 +0x0d1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d999a +0x0d6:  jmp    081d9c47 <+0x383>
081d999f +0x0db:  mov    -0x10(%ebp),%eax
081d99a2 +0x0de:  add    $0x14,%eax
081d99a5 +0x0e1:  mov    %eax,0x4(%esp)
081d99a9 +0x0e5:  mov    0xc(%ebp),%eax
081d99ac +0x0e8:  mov    %eax,(%esp)
081d99af +0x0eb:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081d99b4 +0x0f0:  xor    $0x1,%eax
081d99b7 +0x0f3:  test   %al,%al
081d99b9 +0x0f5:  je     081d99e4 <+0x120>
081d99bb +0x0f7:  movl   $0x0,0xc(%esp)
081d99c3 +0x0ff:  movl   $0x0,0x8(%esp)
081d99cb +0x107:  movl   $&_ZZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d99d3 +0x10f:  movl   $0x476e,(%esp)
081d99da +0x116:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d99df +0x11b:  jmp    081d9c47 <+0x383>
081d99e4 +0x120:  mov    -0x10(%ebp),%eax
081d99e7 +0x123:  mov    0x14(%eax),%eax
081d99ea +0x126:  mov    -0x10(%ebp),%edx
081d99ed +0x129:  add    $0x18,%edx
081d99f0 +0x12c:  mov    %eax,0xc(%esp)
081d99f4 +0x130:  movl   $0x100,0x8(%esp)
081d99fc +0x138:  mov    %edx,0x4(%esp)
081d9a00 +0x13c:  mov    0xc(%ebp),%eax
081d9a03 +0x13f:  mov    %eax,(%esp)
081d9a06 +0x142:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081d9a0b +0x147:  xor    $0x1,%eax
081d9a0e +0x14a:  test   %al,%al
081d9a10 +0x14c:  je     081d9a3b <+0x177>
081d9a12 +0x14e:  movl   $0x0,0xc(%esp)
081d9a1a +0x156:  movl   $0x0,0x8(%esp)
081d9a22 +0x15e:  movl   $&_ZZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d9a2a +0x166:  movl   $0x4771,(%esp)
081d9a31 +0x16d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d9a36 +0x172:  jmp    081d9c47 <+0x383>
081d9a3b +0x177:  mov    -0x10(%ebp),%eax
081d9a3e +0x17a:  movzbl 0xd(%eax),%eax
081d9a42 +0x17e:  cmp    $0x1,%al
081d9a44 +0x180:  je     081d9a55 <+0x191>
081d9a46 +0x182:  mov    -0x10(%ebp),%eax
081d9a49 +0x185:  movzbl 0xd(%eax),%eax
081d9a4d +0x189:  cmp    $0x26,%al
081d9a4f +0x18b:  jne    081d9b40 <+0x27c>
081d9a55 +0x191:  mov    -0x10(%ebp),%eax
081d9a58 +0x194:  add    $0x118,%eax
081d9a5d +0x199:  mov    %eax,0x4(%esp)
081d9a61 +0x19d:  mov    0xc(%ebp),%eax
081d9a64 +0x1a0:  mov    %eax,(%esp)
081d9a67 +0x1a3:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081d9a6c +0x1a8:  xor    $0x1,%eax
081d9a6f +0x1ab:  test   %al,%al
081d9a71 +0x1ad:  je     081d9a9c <+0x1d8>
081d9a73 +0x1af:  movl   $0x0,0xc(%esp)
081d9a7b +0x1b7:  movl   $0x0,0x8(%esp)
081d9a83 +0x1bf:  movl   $&_ZZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d9a8b +0x1c7:  movl   $0x4785,(%esp)
081d9a92 +0x1ce:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d9a97 +0x1d3:  jmp    081d9c47 <+0x383>
081d9a9c +0x1d8:  mov    -0x10(%ebp),%eax
081d9a9f +0x1db:  mov    0x118(%eax),%eax
081d9aa5 +0x1e1:  mov    -0x10(%ebp),%edx
081d9aa8 +0x1e4:  add    $0x11c,%edx
081d9aae +0x1ea:  mov    %eax,0xc(%esp)
081d9ab2 +0x1ee:  movl   $0x1e,0x8(%esp)
081d9aba +0x1f6:  mov    %edx,0x4(%esp)
081d9abe +0x1fa:  mov    0xc(%ebp),%eax
081d9ac1 +0x1fd:  mov    %eax,(%esp)
081d9ac4 +0x200:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081d9ac9 +0x205:  xor    $0x1,%eax
081d9acc +0x208:  test   %al,%al
081d9ace +0x20a:  je     081d9af9 <+0x235>
081d9ad0 +0x20c:  movl   $0x0,0xc(%esp)
081d9ad8 +0x214:  movl   $0x0,0x8(%esp)
081d9ae0 +0x21c:  movl   $&_ZZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d9ae8 +0x224:  movl   $0x4788,(%esp)
081d9aef +0x22b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d9af4 +0x230:  jmp    081d9c47 <+0x383>
081d9af9 +0x235:  mov    -0x10(%ebp),%eax
081d9afc +0x238:  add    $0x13a,%eax
081d9b01 +0x23d:  mov    %eax,0x4(%esp)
081d9b05 +0x241:  mov    0xc(%ebp),%eax
081d9b08 +0x244:  mov    %eax,(%esp)
081d9b0b +0x247:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081d9b10 +0x24c:  xor    $0x1,%eax
081d9b13 +0x24f:  test   %al,%al
081d9b15 +0x251:  je     081d9b40 <+0x27c>
081d9b17 +0x253:  movl   $0x0,0xc(%esp)
081d9b1f +0x25b:  movl   $0x0,0x8(%esp)
081d9b27 +0x263:  movl   $&_ZZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d9b2f +0x26b:  movl   $0x478c,(%esp)
081d9b36 +0x272:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d9b3b +0x277:  jmp    081d9c47 <+0x383>
081d9b40 +0x27c:  mov    -0x10(%ebp),%eax
081d9b43 +0x27f:  add    $0x13b,%eax
081d9b48 +0x284:  mov    %eax,0x4(%esp)
081d9b4c +0x288:  mov    0xc(%ebp),%eax
081d9b4f +0x28b:  mov    %eax,(%esp)
081d9b52 +0x28e:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081d9b57 +0x293:  xor    $0x1,%eax
081d9b5a +0x296:  test   %al,%al
081d9b5c +0x298:  je     081d9b87 <+0x2c3>
081d9b5e +0x29a:  movl   $0x0,0xc(%esp)
081d9b66 +0x2a2:  movl   $0x0,0x8(%esp)
081d9b6e +0x2aa:  movl   $&_ZZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d9b76 +0x2b2:  movl   $0x4792,(%esp)
081d9b7d +0x2b9:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d9b82 +0x2be:  jmp    081d9c47 <+0x383>
081d9b87 +0x2c3:  mov    -0x10(%ebp),%eax
081d9b8a +0x2c6:  movzbl 0x13b(%eax),%eax
081d9b91 +0x2cd:  test   %al,%al
081d9b93 +0x2cf:  je     081d9ba3 <+0x2df>
081d9b95 +0x2d1:  mov    -0x10(%ebp),%eax
081d9b98 +0x2d4:  movzbl 0x13b(%eax),%eax
081d9b9f +0x2db:  cmp    $0x3,%al
081d9ba1 +0x2dd:  jbe    081d9bc9 <+0x305>
081d9ba3 +0x2df:  movl   $0x0,0xc(%esp)
081d9bab +0x2e7:  movl   $0x0,0x8(%esp)
081d9bb3 +0x2ef:  movl   $&_ZZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d9bbb +0x2f7:  movl   $0x4795,(%esp)
081d9bc2 +0x2fe:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d9bc7 +0x303:  jmp    081d9c47 <+0x383>
081d9bc9 +0x305:  movl   $0x0,-0xc(%ebp)
081d9bd0 +0x30c:  jmp    081d9c2b <+0x367>
081d9bd2 +0x30e:  mov    -0xc(%ebp),%eax
081d9bd5 +0x311:  imul   $0x68,%eax,%eax
081d9bd8 +0x314:  add    $0x130,%eax
081d9bdd +0x319:  add    -0x10(%ebp),%eax
081d9be0 +0x31c:  add    $0xc,%eax
081d9be3 +0x31f:  movl   $0x68,0x8(%esp)
081d9beb +0x327:  mov    %eax,0x4(%esp)
081d9bef +0x32b:  mov    0xc(%ebp),%eax
081d9bf2 +0x32e:  mov    %eax,(%esp)
081d9bf5 +0x331:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
081d9bfa +0x336:  xor    $0x1,%eax
081d9bfd +0x339:  test   %al,%al
081d9bff +0x33b:  je     081d9c27 <+0x363>
081d9c01 +0x33d:  movl   $0x0,0xc(%esp)
081d9c09 +0x345:  movl   $0x0,0x8(%esp)
081d9c11 +0x34d:  movl   $&_ZZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d9c19 +0x355:  movl   $0x479a,(%esp)
081d9c20 +0x35c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d9c25 +0x361:  jmp    081d9c47 <+0x383>
081d9c27 +0x363:  addl   $0x1,-0xc(%ebp)
081d9c2b +0x367:  mov    -0x10(%ebp),%eax
081d9c2e +0x36a:  movzbl 0x13b(%eax),%eax
081d9c35 +0x371:  movzbl %al,%eax
081d9c38 +0x374:  cmp    -0xc(%ebp),%eax
081d9c3b +0x377:  setg   %al
081d9c3e +0x37a:  test   %al,%al
081d9c40 +0x37c:  jne    081d9bd2 <+0x30e>
081d9c42 +0x37e:  mov    $0x0,%eax
081d9c47 +0x383:  leave
081d9c48 +0x384:  ret
081d9c49 +0x385:  nop
```

## 反编译 C

```c
// Dispatcher_ItemHyperLinkMessage::read @ 0x81d98c4

/* Dispatcher_ItemHyperLinkMessage::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ItemHyperLinkMessage::read
          (Dispatcher_ItemHyperLinkMessage *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int local_10;
  
  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x10));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x14));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0x18),0x100,*(int *)(param_2 + 0x14)
                                    );
          if (cVar1 == '\x01') {
            if ((param_2[0xd] == (MSG_BASE)0x1) || (param_2[0xd] == (MSG_BASE)0x26)) {
              cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x118));
              if (cVar1 != '\x01') {
                uVar2 = LineFunc(0x4785,
                                 "virtual int Dispatcher_ItemHyperLinkMessage::read(PacketBuf&, MSG_BASE&)"
                                 ,0,0);
                return uVar2;
              }
              cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0x11c),0x1e,
                                         *(int *)(param_2 + 0x118));
              if (cVar1 != '\x01') {
                uVar2 = LineFunc(0x4788,
                                 "virtual int Dispatcher_ItemHyperLinkMessage::read(PacketBuf&, MSG_BASE&)"
                                 ,0,0);
                return uVar2;
              }
              cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x13a));
              if (cVar1 != '\x01') {
                uVar2 = LineFunc(0x478c,
                                 "virtual int Dispatcher_ItemHyperLinkMessage::read(PacketBuf&, MSG_BASE&)"
                                 ,0,0);
                return uVar2;
              }
            }
            cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x13b));
            if (cVar1 == '\x01') {
              if ((param_2[0x13b] == (MSG_BASE)0x0) || (3 < (byte)param_2[0x13b])) {
                uVar2 = LineFunc(0x4795,
                                 "virtual int Dispatcher_ItemHyperLinkMessage::read(PacketBuf&, MSG_BASE&)"
                                 ,0,0);
              }
              else {
                for (local_10 = 0; local_10 < (int)(uint)(byte)param_2[0x13b];
                    local_10 = local_10 + 1) {
                  cVar1 = PacketBuf::get_binary
                                    (param_1,(char *)(param_2 + local_10 * 0x68 + 0x13c),0x68);
                  if (cVar1 != '\x01') {
                    uVar2 = LineFunc(0x479a,
                                     "virtual int Dispatcher_ItemHyperLinkMessage::read(PacketBuf&, MSG_BASE&)"
                                     ,0,0);
                    return uVar2;
                  }
                }
                uVar2 = 0;
              }
            }
            else {
              uVar2 = LineFunc(0x4792,
                               "virtual int Dispatcher_ItemHyperLinkMessage::read(PacketBuf&, MSG_BASE&)"
                               ,0,0);
            }
          }
          else {
            uVar2 = LineFunc(0x4771,
                             "virtual int Dispatcher_ItemHyperLinkMessage::read(PacketBuf&, MSG_BASE&)"
                             ,0,0);
          }
        }
        else {
          uVar2 = LineFunc(0x476e,
                           "virtual int Dispatcher_ItemHyperLinkMessage::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x476b,
                         "virtual int Dispatcher_ItemHyperLinkMessage::read(PacketBuf&, MSG_BASE&)",
                         0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x4768,
                       "virtual int Dispatcher_ItemHyperLinkMessage::read(PacketBuf&, MSG_BASE&)",0,
                       0);
    }
  }
  else {
    uVar2 = LineFunc(0x4765,
                     "virtual int Dispatcher_ItemHyperLinkMessage::read(PacketBuf&, MSG_BASE&)",0,0)
    ;
  }
  return uVar2;
}
```

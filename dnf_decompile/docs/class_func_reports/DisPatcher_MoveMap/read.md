# read

`_ZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASE`

`DisPatcher_MoveMap::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_MoveMap` | `0x081c47ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c47ba  _ZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASE
#           DisPatcher_MoveMap::read(PacketBuf&, MSG_BASE&)
# range [0x081c47ba, 0x081c4a8f]
081c47ba +0x000:  push   %ebp
081c47bb +0x001:  mov    %esp,%ebp
081c47bd +0x003:  sub    $0x28,%esp
081c47c0 +0x006:  mov    0x10(%ebp),%eax
081c47c3 +0x009:  mov    %eax,-0x14(%ebp)
081c47c6 +0x00c:  mov    -0x14(%ebp),%eax
081c47c9 +0x00f:  add    $0xd,%eax
081c47cc +0x012:  mov    %eax,0x4(%esp)
081c47d0 +0x016:  mov    0xc(%ebp),%eax
081c47d3 +0x019:  mov    %eax,(%esp)
081c47d6 +0x01c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081c47db +0x021:  xor    $0x1,%eax
081c47de +0x024:  test   %al,%al
081c47e0 +0x026:  je     081c480b <+0x51>
081c47e2 +0x028:  movl   $0x0,0xc(%esp)
081c47ea +0x030:  movl   $0x0,0x8(%esp)
081c47f2 +0x038:  movl   $&_ZZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c47fa +0x040:  movl   $0x1152,(%esp)
081c4801 +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c4806 +0x04c:  jmp    081c4a8e <+0x2d4>
081c480b +0x051:  mov    -0x14(%ebp),%eax
081c480e +0x054:  add    $0xe,%eax
081c4811 +0x057:  mov    %eax,0x4(%esp)
081c4815 +0x05b:  mov    0xc(%ebp),%eax
081c4818 +0x05e:  mov    %eax,(%esp)
081c481b +0x061:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081c4820 +0x066:  xor    $0x1,%eax
081c4823 +0x069:  test   %al,%al
081c4825 +0x06b:  je     081c4850 <+0x96>
081c4827 +0x06d:  movl   $0x0,0xc(%esp)
081c482f +0x075:  movl   $0x0,0x8(%esp)
081c4837 +0x07d:  movl   $&_ZZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c483f +0x085:  movl   $0x1155,(%esp)
081c4846 +0x08c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c484b +0x091:  jmp    081c4a8e <+0x2d4>
081c4850 +0x096:  mov    -0x14(%ebp),%eax
081c4853 +0x099:  add    $0xf,%eax
081c4856 +0x09c:  mov    %eax,0x4(%esp)
081c485a +0x0a0:  mov    0xc(%ebp),%eax
081c485d +0x0a3:  mov    %eax,(%esp)
081c4860 +0x0a6:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081c4865 +0x0ab:  xor    $0x1,%eax
081c4868 +0x0ae:  test   %al,%al
081c486a +0x0b0:  je     081c4895 <+0xdb>
081c486c +0x0b2:  movl   $0x0,0xc(%esp)
081c4874 +0x0ba:  movl   $0x0,0x8(%esp)
081c487c +0x0c2:  movl   $&_ZZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c4884 +0x0ca:  movl   $0x1158,(%esp)
081c488b +0x0d1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c4890 +0x0d6:  jmp    081c4a8e <+0x2d4>
081c4895 +0x0db:  mov    -0x14(%ebp),%eax
081c4898 +0x0de:  add    $0x13,%eax
081c489b +0x0e1:  mov    %eax,0x4(%esp)
081c489f +0x0e5:  mov    0xc(%ebp),%eax
081c48a2 +0x0e8:  mov    %eax,(%esp)
081c48a5 +0x0eb:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081c48aa +0x0f0:  xor    $0x1,%eax
081c48ad +0x0f3:  test   %al,%al
081c48af +0x0f5:  je     081c48da <+0x120>
081c48b1 +0x0f7:  movl   $0x0,0xc(%esp)
081c48b9 +0x0ff:  movl   $0x0,0x8(%esp)
081c48c1 +0x107:  movl   $&_ZZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c48c9 +0x10f:  movl   $0x1159,(%esp)
081c48d0 +0x116:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c48d5 +0x11b:  jmp    081c4a8e <+0x2d4>
081c48da +0x120:  mov    -0x14(%ebp),%eax
081c48dd +0x123:  add    $0x17,%eax
081c48e0 +0x126:  mov    %eax,0x4(%esp)
081c48e4 +0x12a:  mov    0xc(%ebp),%eax
081c48e7 +0x12d:  mov    %eax,(%esp)
081c48ea +0x130:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081c48ef +0x135:  xor    $0x1,%eax
081c48f2 +0x138:  test   %al,%al
081c48f4 +0x13a:  je     081c491f <+0x165>
081c48f6 +0x13c:  movl   $0x0,0xc(%esp)
081c48fe +0x144:  movl   $0x0,0x8(%esp)
081c4906 +0x14c:  movl   $&_ZZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c490e +0x154:  movl   $0x115d,(%esp)
081c4915 +0x15b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c491a +0x160:  jmp    081c4a8e <+0x2d4>
081c491f +0x165:  mov    -0x14(%ebp),%eax
081c4922 +0x168:  add    $0x18,%eax
081c4925 +0x16b:  mov    %eax,0x4(%esp)
081c4929 +0x16f:  mov    0xc(%ebp),%eax
081c492c +0x172:  mov    %eax,(%esp)
081c492f +0x175:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081c4934 +0x17a:  mov    -0x14(%ebp),%edx
081c4937 +0x17d:  mov    %al,0x1a(%edx)
081c493a +0x180:  movl   $0x0,-0x10(%ebp)
081c4941 +0x187:  jmp    081c4994 <+0x1da>
081c4943 +0x189:  mov    -0x10(%ebp),%eax
081c4946 +0x18c:  add    $0x8,%eax
081c4949 +0x18f:  add    %eax,%eax
081c494b +0x191:  add    -0x14(%ebp),%eax
081c494e +0x194:  add    $0xb,%eax
081c4951 +0x197:  mov    %eax,0x4(%esp)
081c4955 +0x19b:  mov    0xc(%ebp),%eax
081c4958 +0x19e:  mov    %eax,(%esp)
081c495b +0x1a1:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081c4960 +0x1a6:  xor    $0x1,%eax
081c4963 +0x1a9:  test   %al,%al
081c4965 +0x1ab:  je     081c4990 <+0x1d6>
081c4967 +0x1ad:  movl   $0x0,0xc(%esp)
081c496f +0x1b5:  movl   $0x0,0x8(%esp)
081c4977 +0x1bd:  movl   $&_ZZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c497f +0x1c5:  movl   $0x1164,(%esp)
081c4986 +0x1cc:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c498b +0x1d1:  jmp    081c4a8e <+0x2d4>
081c4990 +0x1d6:  addl   $0x1,-0x10(%ebp)
081c4994 +0x1da:  cmpl   $0x3,-0x10(%ebp)
081c4998 +0x1de:  setle  %al
081c499b +0x1e1:  test   %al,%al
081c499d +0x1e3:  jne    081c4943 <+0x189>
081c499f +0x1e5:  movl   $0x0,-0xc(%ebp)
081c49a6 +0x1ec:  jmp    081c49fa <+0x240>
081c49a8 +0x1ee:  mov    -0xc(%ebp),%eax
081c49ab +0x1f1:  add    $0x8,%eax
081c49ae +0x1f4:  shl    $0x2,%eax
081c49b1 +0x1f7:  add    -0x14(%ebp),%eax
081c49b4 +0x1fa:  add    $0x3,%eax
081c49b7 +0x1fd:  mov    %eax,0x4(%esp)
081c49bb +0x201:  mov    0xc(%ebp),%eax
081c49be +0x204:  mov    %eax,(%esp)
081c49c1 +0x207:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081c49c6 +0x20c:  xor    $0x1,%eax
081c49c9 +0x20f:  test   %al,%al
081c49cb +0x211:  je     081c49f6 <+0x23c>
081c49cd +0x213:  movl   $0x0,0xc(%esp)
081c49d5 +0x21b:  movl   $0x0,0x8(%esp)
081c49dd +0x223:  movl   $&_ZZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c49e5 +0x22b:  movl   $0x1169,(%esp)
081c49ec +0x232:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c49f1 +0x237:  jmp    081c4a8e <+0x2d4>
081c49f6 +0x23c:  addl   $0x1,-0xc(%ebp)
081c49fa +0x240:  cmpl   $0x3,-0xc(%ebp)
081c49fe +0x244:  setle  %al
081c4a01 +0x247:  test   %al,%al
081c4a03 +0x249:  jne    081c49a8 <+0x1ee>
081c4a05 +0x24b:  mov    -0x14(%ebp),%eax
081c4a08 +0x24e:  add    $0x33,%eax
081c4a0b +0x251:  mov    %eax,0x4(%esp)
081c4a0f +0x255:  mov    0xc(%ebp),%eax
081c4a12 +0x258:  mov    %eax,(%esp)
081c4a15 +0x25b:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081c4a1a +0x260:  xor    $0x1,%eax
081c4a1d +0x263:  test   %al,%al
081c4a1f +0x265:  je     081c4a47 <+0x28d>
081c4a21 +0x267:  movl   $0x0,0xc(%esp)
081c4a29 +0x26f:  movl   $0x0,0x8(%esp)
081c4a31 +0x277:  movl   $&_ZZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c4a39 +0x27f:  movl   $0x116e,(%esp)
081c4a40 +0x286:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c4a45 +0x28b:  jmp    081c4a8e <+0x2d4>
081c4a47 +0x28d:  mov    -0x14(%ebp),%eax
081c4a4a +0x290:  add    $0x35,%eax
081c4a4d +0x293:  mov    %eax,0x4(%esp)
081c4a51 +0x297:  mov    0xc(%ebp),%eax
081c4a54 +0x29a:  mov    %eax,(%esp)
081c4a57 +0x29d:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081c4a5c +0x2a2:  xor    $0x1,%eax
081c4a5f +0x2a5:  test   %al,%al
081c4a61 +0x2a7:  je     081c4a89 <+0x2cf>
081c4a63 +0x2a9:  movl   $0x0,0xc(%esp)
081c4a6b +0x2b1:  movl   $0x0,0x8(%esp)
081c4a73 +0x2b9:  movl   $&_ZZN18DisPatcher_MoveMap4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c4a7b +0x2c1:  movl   $0x1181,(%esp)
081c4a82 +0x2c8:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c4a87 +0x2cd:  jmp    081c4a8e <+0x2d4>
081c4a89 +0x2cf:  mov    $0x0,%eax
081c4a8e +0x2d4:  leave
081c4a8f +0x2d5:  ret
```

## 反编译 C

```c
// DisPatcher_MoveMap::read @ 0x81c47ba

/* DisPatcher_MoveMap::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_MoveMap::read(DisPatcher_MoveMap *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  MSG_BASE MVar2;
  undefined4 uVar3;
  int local_14;
  int local_10;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0xf));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x13));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x17));
          if (cVar1 == '\x01') {
            MVar2 = (MSG_BASE)PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x18));
            param_2[0x1a] = MVar2;
            for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
              cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + (local_14 + 8) * 2 + 0xb));
              if (cVar1 != '\x01') {
                uVar3 = LineFunc(0x1164,
                                 "virtual int DisPatcher_MoveMap::read(PacketBuf&, MSG_BASE&)",0,0);
                return uVar3;
              }
            }
            for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
              cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + (local_10 + 8) * 4 + 3));
              if (cVar1 != '\x01') {
                uVar3 = LineFunc(0x1169,
                                 "virtual int DisPatcher_MoveMap::read(PacketBuf&, MSG_BASE&)",0,0);
                return uVar3;
              }
            }
            cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x33));
            if (cVar1 == '\x01') {
              cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x35));
              if (cVar1 == '\x01') {
                uVar3 = 0;
              }
              else {
                uVar3 = LineFunc(0x1181,
                                 "virtual int DisPatcher_MoveMap::read(PacketBuf&, MSG_BASE&)",0,0);
              }
            }
            else {
              uVar3 = LineFunc(0x116e,"virtual int DisPatcher_MoveMap::read(PacketBuf&, MSG_BASE&)",
                               0,0);
            }
          }
          else {
            uVar3 = LineFunc(0x115d,"virtual int DisPatcher_MoveMap::read(PacketBuf&, MSG_BASE&)",0,
                             0);
          }
        }
        else {
          uVar3 = LineFunc(0x1159,"virtual int DisPatcher_MoveMap::read(PacketBuf&, MSG_BASE&)",0,0)
          ;
        }
      }
      else {
        uVar3 = LineFunc(0x1158,"virtual int DisPatcher_MoveMap::read(PacketBuf&, MSG_BASE&)",0,0);
      }
    }
    else {
      uVar3 = LineFunc(0x1155,"virtual int DisPatcher_MoveMap::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar3 = LineFunc(0x1152,"virtual int DisPatcher_MoveMap::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar3;
}
```

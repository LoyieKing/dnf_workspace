# read

`_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE`

`Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_P2P_Statistics` | `0x081e2780` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e2780  _ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE
#           Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)
# range [0x081e2780, 0x081e2bdd]
081e2780 +0x000:  push   %ebp
081e2781 +0x001:  mov    %esp,%ebp
081e2783 +0x003:  sub    $0x28,%esp
081e2786 +0x006:  mov    0x10(%ebp),%eax
081e2789 +0x009:  mov    %eax,-0xc(%ebp)
081e278c +0x00c:  mov    -0xc(%ebp),%eax
081e278f +0x00f:  add    $0xd,%eax
081e2792 +0x012:  mov    %eax,0x4(%esp)
081e2796 +0x016:  mov    0xc(%ebp),%eax
081e2799 +0x019:  mov    %eax,(%esp)
081e279c +0x01c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081e27a1 +0x021:  xor    $0x1,%eax
081e27a4 +0x024:  test   %al,%al
081e27a6 +0x026:  je     081e27d1 <+0x51>
081e27a8 +0x028:  movl   $0x0,0xc(%esp)
081e27b0 +0x030:  movl   $0x0,0x8(%esp)
081e27b8 +0x038:  movl   $&_ZZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e27c0 +0x040:  movl   $0x591a,(%esp)
081e27c7 +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e27cc +0x04c:  jmp    081e2bdb <+0x45b>
081e27d1 +0x051:  mov    -0xc(%ebp),%eax
081e27d4 +0x054:  add    $0xe,%eax
081e27d7 +0x057:  mov    %eax,0x4(%esp)
081e27db +0x05b:  mov    0xc(%ebp),%eax
081e27de +0x05e:  mov    %eax,(%esp)
081e27e1 +0x061:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081e27e6 +0x066:  xor    $0x1,%eax
081e27e9 +0x069:  test   %al,%al
081e27eb +0x06b:  je     081e2816 <+0x96>
081e27ed +0x06d:  movl   $0x0,0xc(%esp)
081e27f5 +0x075:  movl   $0x0,0x8(%esp)
081e27fd +0x07d:  movl   $&_ZZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e2805 +0x085:  movl   $0x591b,(%esp)
081e280c +0x08c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e2811 +0x091:  jmp    081e2bdb <+0x45b>
081e2816 +0x096:  mov    -0xc(%ebp),%eax
081e2819 +0x099:  add    $0x10,%eax
081e281c +0x09c:  mov    %eax,0x4(%esp)
081e2820 +0x0a0:  mov    0xc(%ebp),%eax
081e2823 +0x0a3:  mov    %eax,(%esp)
081e2826 +0x0a6:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081e282b +0x0ab:  xor    $0x1,%eax
081e282e +0x0ae:  test   %al,%al
081e2830 +0x0b0:  je     081e285b <+0xdb>
081e2832 +0x0b2:  movl   $0x0,0xc(%esp)
081e283a +0x0ba:  movl   $0x0,0x8(%esp)
081e2842 +0x0c2:  movl   $&_ZZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e284a +0x0ca:  movl   $0x591d,(%esp)
081e2851 +0x0d1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e2856 +0x0d6:  jmp    081e2bdb <+0x45b>
081e285b +0x0db:  mov    -0xc(%ebp),%eax
081e285e +0x0de:  add    $0x12,%eax
081e2861 +0x0e1:  mov    %eax,0x4(%esp)
081e2865 +0x0e5:  mov    0xc(%ebp),%eax
081e2868 +0x0e8:  mov    %eax,(%esp)
081e286b +0x0eb:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081e2870 +0x0f0:  xor    $0x1,%eax
081e2873 +0x0f3:  test   %al,%al
081e2875 +0x0f5:  je     081e28a0 <+0x120>
081e2877 +0x0f7:  movl   $0x0,0xc(%esp)
081e287f +0x0ff:  movl   $0x0,0x8(%esp)
081e2887 +0x107:  movl   $&_ZZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e288f +0x10f:  movl   $0x591e,(%esp)
081e2896 +0x116:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e289b +0x11b:  jmp    081e2bdb <+0x45b>
081e28a0 +0x120:  mov    -0xc(%ebp),%eax
081e28a3 +0x123:  add    $0x14,%eax
081e28a6 +0x126:  mov    %eax,0x4(%esp)
081e28aa +0x12a:  mov    0xc(%ebp),%eax
081e28ad +0x12d:  mov    %eax,(%esp)
081e28b0 +0x130:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081e28b5 +0x135:  xor    $0x1,%eax
081e28b8 +0x138:  test   %al,%al
081e28ba +0x13a:  je     081e28e5 <+0x165>
081e28bc +0x13c:  movl   $0x0,0xc(%esp)
081e28c4 +0x144:  movl   $0x0,0x8(%esp)
081e28cc +0x14c:  movl   $&_ZZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e28d4 +0x154:  movl   $0x591f,(%esp)
081e28db +0x15b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e28e0 +0x160:  jmp    081e2bdb <+0x45b>
081e28e5 +0x165:  mov    -0xc(%ebp),%eax
081e28e8 +0x168:  add    $0x18,%eax
081e28eb +0x16b:  mov    %eax,0x4(%esp)
081e28ef +0x16f:  mov    0xc(%ebp),%eax
081e28f2 +0x172:  mov    %eax,(%esp)
081e28f5 +0x175:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081e28fa +0x17a:  xor    $0x1,%eax
081e28fd +0x17d:  test   %al,%al
081e28ff +0x17f:  je     081e292a <+0x1aa>
081e2901 +0x181:  movl   $0x0,0xc(%esp)
081e2909 +0x189:  movl   $0x0,0x8(%esp)
081e2911 +0x191:  movl   $&_ZZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e2919 +0x199:  movl   $0x5921,(%esp)
081e2920 +0x1a0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e2925 +0x1a5:  jmp    081e2bdb <+0x45b>
081e292a +0x1aa:  mov    -0xc(%ebp),%eax
081e292d +0x1ad:  add    $0x1c,%eax
081e2930 +0x1b0:  mov    %eax,0x4(%esp)
081e2934 +0x1b4:  mov    0xc(%ebp),%eax
081e2937 +0x1b7:  mov    %eax,(%esp)
081e293a +0x1ba:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081e293f +0x1bf:  xor    $0x1,%eax
081e2942 +0x1c2:  test   %al,%al
081e2944 +0x1c4:  je     081e296f <+0x1ef>
081e2946 +0x1c6:  movl   $0x0,0xc(%esp)
081e294e +0x1ce:  movl   $0x0,0x8(%esp)
081e2956 +0x1d6:  movl   $&_ZZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e295e +0x1de:  movl   $0x5922,(%esp)
081e2965 +0x1e5:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e296a +0x1ea:  jmp    081e2bdb <+0x45b>
081e296f +0x1ef:  mov    -0xc(%ebp),%eax
081e2972 +0x1f2:  add    $0x20,%eax
081e2975 +0x1f5:  mov    %eax,0x4(%esp)
081e2979 +0x1f9:  mov    0xc(%ebp),%eax
081e297c +0x1fc:  mov    %eax,(%esp)
081e297f +0x1ff:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081e2984 +0x204:  xor    $0x1,%eax
081e2987 +0x207:  test   %al,%al
081e2989 +0x209:  je     081e29b4 <+0x234>
081e298b +0x20b:  movl   $0x0,0xc(%esp)
081e2993 +0x213:  movl   $0x0,0x8(%esp)
081e299b +0x21b:  movl   $&_ZZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e29a3 +0x223:  movl   $0x5923,(%esp)
081e29aa +0x22a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e29af +0x22f:  jmp    081e2bdb <+0x45b>
081e29b4 +0x234:  mov    -0xc(%ebp),%eax
081e29b7 +0x237:  add    $0x24,%eax
081e29ba +0x23a:  mov    %eax,0x4(%esp)
081e29be +0x23e:  mov    0xc(%ebp),%eax
081e29c1 +0x241:  mov    %eax,(%esp)
081e29c4 +0x244:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081e29c9 +0x249:  xor    $0x1,%eax
081e29cc +0x24c:  test   %al,%al
081e29ce +0x24e:  je     081e29f9 <+0x279>
081e29d0 +0x250:  movl   $0x0,0xc(%esp)
081e29d8 +0x258:  movl   $0x0,0x8(%esp)
081e29e0 +0x260:  movl   $&_ZZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e29e8 +0x268:  movl   $0x5924,(%esp)
081e29ef +0x26f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e29f4 +0x274:  jmp    081e2bdb <+0x45b>
081e29f9 +0x279:  mov    -0xc(%ebp),%eax
081e29fc +0x27c:  add    $0x28,%eax
081e29ff +0x27f:  mov    %eax,0x4(%esp)
081e2a03 +0x283:  mov    0xc(%ebp),%eax
081e2a06 +0x286:  mov    %eax,(%esp)
081e2a09 +0x289:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081e2a0e +0x28e:  xor    $0x1,%eax
081e2a11 +0x291:  test   %al,%al
081e2a13 +0x293:  je     081e2a3e <+0x2be>
081e2a15 +0x295:  movl   $0x0,0xc(%esp)
081e2a1d +0x29d:  movl   $0x0,0x8(%esp)
081e2a25 +0x2a5:  movl   $&_ZZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e2a2d +0x2ad:  movl   $0x5926,(%esp)
081e2a34 +0x2b4:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e2a39 +0x2b9:  jmp    081e2bdb <+0x45b>
081e2a3e +0x2be:  mov    -0xc(%ebp),%eax
081e2a41 +0x2c1:  add    $0x2a,%eax
081e2a44 +0x2c4:  mov    %eax,0x4(%esp)
081e2a48 +0x2c8:  mov    0xc(%ebp),%eax
081e2a4b +0x2cb:  mov    %eax,(%esp)
081e2a4e +0x2ce:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081e2a53 +0x2d3:  xor    $0x1,%eax
081e2a56 +0x2d6:  test   %al,%al
081e2a58 +0x2d8:  je     081e2a83 <+0x303>
081e2a5a +0x2da:  movl   $0x0,0xc(%esp)
081e2a62 +0x2e2:  movl   $0x0,0x8(%esp)
081e2a6a +0x2ea:  movl   $&_ZZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e2a72 +0x2f2:  movl   $0x5927,(%esp)
081e2a79 +0x2f9:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e2a7e +0x2fe:  jmp    081e2bdb <+0x45b>
081e2a83 +0x303:  mov    -0xc(%ebp),%eax
081e2a86 +0x306:  add    $0x2c,%eax
081e2a89 +0x309:  mov    %eax,0x4(%esp)
081e2a8d +0x30d:  mov    0xc(%ebp),%eax
081e2a90 +0x310:  mov    %eax,(%esp)
081e2a93 +0x313:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081e2a98 +0x318:  xor    $0x1,%eax
081e2a9b +0x31b:  test   %al,%al
081e2a9d +0x31d:  je     081e2ac8 <+0x348>
081e2a9f +0x31f:  movl   $0x0,0xc(%esp)
081e2aa7 +0x327:  movl   $0x0,0x8(%esp)
081e2aaf +0x32f:  movl   $&_ZZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e2ab7 +0x337:  movl   $0x5928,(%esp)
081e2abe +0x33e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e2ac3 +0x343:  jmp    081e2bdb <+0x45b>
081e2ac8 +0x348:  mov    -0xc(%ebp),%eax
081e2acb +0x34b:  add    $0x30,%eax
081e2ace +0x34e:  mov    %eax,0x4(%esp)
081e2ad2 +0x352:  mov    0xc(%ebp),%eax
081e2ad5 +0x355:  mov    %eax,(%esp)
081e2ad8 +0x358:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081e2add +0x35d:  xor    $0x1,%eax
081e2ae0 +0x360:  test   %al,%al
081e2ae2 +0x362:  je     081e2b0d <+0x38d>
081e2ae4 +0x364:  movl   $0x0,0xc(%esp)
081e2aec +0x36c:  movl   $0x0,0x8(%esp)
081e2af4 +0x374:  movl   $&_ZZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e2afc +0x37c:  movl   $0x592a,(%esp)
081e2b03 +0x383:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e2b08 +0x388:  jmp    081e2bdb <+0x45b>
081e2b0d +0x38d:  mov    -0xc(%ebp),%eax
081e2b10 +0x390:  add    $0x34,%eax
081e2b13 +0x393:  mov    %eax,0x4(%esp)
081e2b17 +0x397:  mov    0xc(%ebp),%eax
081e2b1a +0x39a:  mov    %eax,(%esp)
081e2b1d +0x39d:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081e2b22 +0x3a2:  xor    $0x1,%eax
081e2b25 +0x3a5:  test   %al,%al
081e2b27 +0x3a7:  je     081e2b52 <+0x3d2>
081e2b29 +0x3a9:  movl   $0x0,0xc(%esp)
081e2b31 +0x3b1:  movl   $0x0,0x8(%esp)
081e2b39 +0x3b9:  movl   $&_ZZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e2b41 +0x3c1:  movl   $0x592b,(%esp)
081e2b48 +0x3c8:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e2b4d +0x3cd:  jmp    081e2bdb <+0x45b>
081e2b52 +0x3d2:  mov    -0xc(%ebp),%eax
081e2b55 +0x3d5:  add    $0x38,%eax
081e2b58 +0x3d8:  mov    %eax,0x4(%esp)
081e2b5c +0x3dc:  mov    0xc(%ebp),%eax
081e2b5f +0x3df:  mov    %eax,(%esp)
081e2b62 +0x3e2:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081e2b67 +0x3e7:  xor    $0x1,%eax
081e2b6a +0x3ea:  test   %al,%al
081e2b6c +0x3ec:  je     081e2b94 <+0x414>
081e2b6e +0x3ee:  movl   $0x0,0xc(%esp)
081e2b76 +0x3f6:  movl   $0x0,0x8(%esp)
081e2b7e +0x3fe:  movl   $&_ZZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e2b86 +0x406:  movl   $0x592c,(%esp)
081e2b8d +0x40d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e2b92 +0x412:  jmp    081e2bdb <+0x45b>
081e2b94 +0x414:  mov    -0xc(%ebp),%eax
081e2b97 +0x417:  add    $0x3c,%eax
081e2b9a +0x41a:  mov    %eax,0x4(%esp)
081e2b9e +0x41e:  mov    0xc(%ebp),%eax
081e2ba1 +0x421:  mov    %eax,(%esp)
081e2ba4 +0x424:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081e2ba9 +0x429:  xor    $0x1,%eax
081e2bac +0x42c:  test   %al,%al
081e2bae +0x42e:  je     081e2bd6 <+0x456>
081e2bb0 +0x430:  movl   $0x0,0xc(%esp)
081e2bb8 +0x438:  movl   $0x0,0x8(%esp)
081e2bc0 +0x440:  movl   $&_ZZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e2bc8 +0x448:  movl   $0x592d,(%esp)
081e2bcf +0x44f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e2bd4 +0x454:  jmp    081e2bdb <+0x45b>
081e2bd6 +0x456:  mov    $0x0,%eax
081e2bdb +0x45b:  leave
081e2bdc +0x45c:  ret
081e2bdd +0x45d:  nop
```

## 反编译 C

```c
// Dispatcher_P2P_Statistics::read @ 0x81e2780

/* Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_P2P_Statistics::read
          (Dispatcher_P2P_Statistics *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x10));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x12));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x14));
          if (cVar1 == '\x01') {
            cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x18));
            if (cVar1 == '\x01') {
              cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x1c));
              if (cVar1 == '\x01') {
                cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x20));
                if (cVar1 == '\x01') {
                  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x24));
                  if (cVar1 == '\x01') {
                    cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x28));
                    if (cVar1 == '\x01') {
                      cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x2a));
                      if (cVar1 == '\x01') {
                        cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x2c));
                        if (cVar1 == '\x01') {
                          cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x30));
                          if (cVar1 == '\x01') {
                            cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x34));
                            if (cVar1 == '\x01') {
                              cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x38));
                              if (cVar1 == '\x01') {
                                cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x3c));
                                if (cVar1 == '\x01') {
                                  uVar2 = 0;
                                }
                                else {
                                  uVar2 = LineFunc(0x592d,
                                                  "virtual int Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)"
                                                  ,0,0);
                                }
                              }
                              else {
                                uVar2 = LineFunc(0x592c,
                                                 "virtual int Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)"
                                                 ,0,0);
                              }
                            }
                            else {
                              uVar2 = LineFunc(0x592b,
                                               "virtual int Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)"
                                               ,0,0);
                            }
                          }
                          else {
                            uVar2 = LineFunc(0x592a,
                                             "virtual int Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)"
                                             ,0,0);
                          }
                        }
                        else {
                          uVar2 = LineFunc(0x5928,
                                           "virtual int Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)"
                                           ,0,0);
                        }
                      }
                      else {
                        uVar2 = LineFunc(0x5927,
                                         "virtual int Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)"
                                         ,0,0);
                      }
                    }
                    else {
                      uVar2 = LineFunc(0x5926,
                                       "virtual int Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)"
                                       ,0,0);
                    }
                  }
                  else {
                    uVar2 = LineFunc(0x5924,
                                     "virtual int Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)"
                                     ,0,0);
                  }
                }
                else {
                  uVar2 = LineFunc(0x5923,
                                   "virtual int Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)"
                                   ,0,0);
                }
              }
              else {
                uVar2 = LineFunc(0x5922,
                                 "virtual int Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)"
                                 ,0,0);
              }
            }
            else {
              uVar2 = LineFunc(0x5921,
                               "virtual int Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)",
                               0,0);
            }
          }
          else {
            uVar2 = LineFunc(0x591f,
                             "virtual int Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)",0,
                             0);
          }
        }
        else {
          uVar2 = LineFunc(0x591e,
                           "virtual int Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)",0,0)
          ;
        }
      }
      else {
        uVar2 = LineFunc(0x591d,"virtual int Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)"
                         ,0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x591b,"virtual int Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)",0
                       ,0);
    }
  }
  else {
    uVar2 = LineFunc(0x591a,"virtual int Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)",0,0
                    );
  }
  return uVar2;
}
```

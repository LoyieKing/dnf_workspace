# read

`_ZN24Dispatcher_EnchantByBead4readER9PacketBufR8MSG_BASE`

`Dispatcher_EnchantByBead::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_EnchantByBead` | `0x081d2218` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d2218  _ZN24Dispatcher_EnchantByBead4readER9PacketBufR8MSG_BASE
#           Dispatcher_EnchantByBead::read(PacketBuf&, MSG_BASE&)
# range [0x081d2218, 0x081d2339]
081d2218 +0x000:  push   %ebp
081d2219 +0x001:  mov    %esp,%ebp
081d221b +0x003:  sub    $0x28,%esp
081d221e +0x006:  mov    0x10(%ebp),%eax
081d2221 +0x009:  mov    %eax,-0xc(%ebp)
081d2224 +0x00c:  mov    -0xc(%ebp),%eax
081d2227 +0x00f:  add    $0xd,%eax
081d222a +0x012:  mov    %eax,0x4(%esp)
081d222e +0x016:  mov    0xc(%ebp),%eax
081d2231 +0x019:  mov    %eax,(%esp)
081d2234 +0x01c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081d2239 +0x021:  xor    $0x1,%eax
081d223c +0x024:  test   %al,%al
081d223e +0x026:  je     081d2269 <+0x51>
081d2240 +0x028:  movl   $0x0,0xc(%esp)
081d2248 +0x030:  movl   $0x0,0x8(%esp)
081d2250 +0x038:  movl   $&_ZZN24Dispatcher_EnchantByBead4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d2258 +0x040:  movl   $0x2f1c,(%esp)
081d225f +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d2264 +0x04c:  jmp    081d2337 <+0x11f>
081d2269 +0x051:  mov    -0xc(%ebp),%eax
081d226c +0x054:  add    $0xe,%eax
081d226f +0x057:  mov    %eax,0x4(%esp)
081d2273 +0x05b:  mov    0xc(%ebp),%eax
081d2276 +0x05e:  mov    %eax,(%esp)
081d2279 +0x061:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081d227e +0x066:  xor    $0x1,%eax
081d2281 +0x069:  test   %al,%al
081d2283 +0x06b:  je     081d22ae <+0x96>
081d2285 +0x06d:  movl   $0x0,0xc(%esp)
081d228d +0x075:  movl   $0x0,0x8(%esp)
081d2295 +0x07d:  movl   $&_ZZN24Dispatcher_EnchantByBead4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d229d +0x085:  movl   $0x2f1d,(%esp)
081d22a4 +0x08c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d22a9 +0x091:  jmp    081d2337 <+0x11f>
081d22ae +0x096:  mov    -0xc(%ebp),%eax
081d22b1 +0x099:  add    $0x10,%eax
081d22b4 +0x09c:  mov    %eax,0x4(%esp)
081d22b8 +0x0a0:  mov    0xc(%ebp),%eax
081d22bb +0x0a3:  mov    %eax,(%esp)
081d22be +0x0a6:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081d22c3 +0x0ab:  xor    $0x1,%eax
081d22c6 +0x0ae:  test   %al,%al
081d22c8 +0x0b0:  je     081d22f0 <+0xd8>
081d22ca +0x0b2:  movl   $0x0,0xc(%esp)
081d22d2 +0x0ba:  movl   $0x0,0x8(%esp)
081d22da +0x0c2:  movl   $&_ZZN24Dispatcher_EnchantByBead4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d22e2 +0x0ca:  movl   $0x2f1f,(%esp)
081d22e9 +0x0d1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d22ee +0x0d6:  jmp    081d2337 <+0x11f>
081d22f0 +0x0d8:  mov    -0xc(%ebp),%eax
081d22f3 +0x0db:  add    $0x12,%eax
081d22f6 +0x0de:  mov    %eax,0x4(%esp)
081d22fa +0x0e2:  mov    0xc(%ebp),%eax
081d22fd +0x0e5:  mov    %eax,(%esp)
081d2300 +0x0e8:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081d2305 +0x0ed:  xor    $0x1,%eax
081d2308 +0x0f0:  test   %al,%al
081d230a +0x0f2:  je     081d2332 <+0x11a>
081d230c +0x0f4:  movl   $0x0,0xc(%esp)
081d2314 +0x0fc:  movl   $0x0,0x8(%esp)
081d231c +0x104:  movl   $&_ZZN24Dispatcher_EnchantByBead4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d2324 +0x10c:  movl   $0x2f20,(%esp)
081d232b +0x113:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d2330 +0x118:  jmp    081d2337 <+0x11f>
081d2332 +0x11a:  mov    $0x0,%eax
081d2337 +0x11f:  leave
081d2338 +0x120:  ret
081d2339 +0x121:  nop
```

## 反编译 C

```c
// Dispatcher_EnchantByBead::read @ 0x81d2218

/* Dispatcher_EnchantByBead::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_EnchantByBead::read(Dispatcher_EnchantByBead *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x10));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x12));
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = LineFunc(0x2f20,
                           "virtual int Dispatcher_EnchantByBead::read(PacketBuf&, MSG_BASE&)",0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x2f1f,"virtual int Dispatcher_EnchantByBead::read(PacketBuf&, MSG_BASE&)",
                         0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x2f1d,"virtual int Dispatcher_EnchantByBead::read(PacketBuf&, MSG_BASE&)",0,
                       0);
    }
  }
  else {
    uVar2 = LineFunc(0x2f1c,"virtual int Dispatcher_EnchantByBead::read(PacketBuf&, MSG_BASE&)",0,0)
    ;
  }
  return uVar2;
}
```

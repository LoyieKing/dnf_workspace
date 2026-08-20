# dispatch_sig

`_ZN41Dispatcher_Security_PI_HashModulation_C2C12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_Security_PI_HashModulation_C2C::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Security_PI_HashModulation_C2C` | `0x08227256` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08227256  _ZN41Dispatcher_Security_PI_HashModulation_C2C12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_Security_PI_HashModulation_C2C::dispatch_sig(CUser*, PacketBuf&)
# range [0x08227256, 0x082272cd]
08227256 +0x00:  push   %ebp
08227257 +0x01:  mov    %esp,%ebp
08227259 +0x03:  sub    $0x18,%esp
0822725c +0x06:  mov    0x10(%ebp),%eax
0822725f +0x09:  mov    %eax,0x4(%esp)
08227263 +0x0d:  mov    0xc(%ebp),%eax
08227266 +0x10:  mov    %eax,(%esp)
08227269 +0x13:  call   08275290 <_Z44_NS_PI_2ND_RecvPacketIntegrityModulation_C2CP5CUserR9PacketBuf>  ; _NS_PI_2ND_RecvPacketIntegrityModulation_C2C(CUser*, PacketBuf&)
0822726e +0x18:  cmp    $0x1,%eax
08227271 +0x1b:  je     0822727a <+0x24>
08227273 +0x1d:  cmp    $0x2,%eax
08227276 +0x20:  je     082272a0 <+0x4a>
08227278 +0x22:  jmp    082272c6 <+0x70>
0822727a +0x24:  movl   $0x0,0xc(%esp)
08227282 +0x2c:  movl   $0x0,0x8(%esp)
0822728a +0x34:  movl   $&_ZZN41Dispatcher_Security_PI_HashModulation_C2C12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08227292 +0x3c:  movl   $0xe32f,(%esp)
08227299 +0x43:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0822729e +0x48:  jmp    082272cb <+0x75>
082272a0 +0x4a:  movl   $0x0,0xc(%esp)
082272a8 +0x52:  movl   $0x0,0x8(%esp)
082272b0 +0x5a:  movl   $&_ZZN41Dispatcher_Security_PI_HashModulation_C2C12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082272b8 +0x62:  movl   $0xe331,(%esp)
082272bf +0x69:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082272c4 +0x6e:  jmp    082272cb <+0x75>
082272c6 +0x70:  mov    $0x0,%eax
082272cb +0x75:  leave
082272cc +0x76:  ret
082272cd +0x77:  nop
```

## 反编译 C

```c
// Dispatcher_Security_PI_HashModulation_C2C::dispatch_sig @ 0x8227256

/* Dispatcher_Security_PI_HashModulation_C2C::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Security_PI_HashModulation_C2C::dispatch_sig
          (Dispatcher_Security_PI_HashModulation_C2C *this,CUser *param_1,PacketBuf *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _NS_PI_2ND_RecvPacketIntegrityModulation_C2C(param_1,param_2);
  if (iVar1 == 1) {
    uVar2 = LineFunc(0xe32f,
                     "virtual int Dispatcher_Security_PI_HashModulation_C2C::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else if (iVar1 == 2) {
    uVar2 = LineFunc(0xe331,
                     "virtual int Dispatcher_Security_PI_HashModulation_C2C::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

# dispatch_sig

`_ZN41Dispatcher_Security_PI_HashModulation_S2C12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_Security_PI_HashModulation_S2C::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Security_PI_HashModulation_S2C` | `0x082271b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082271b6  _ZN41Dispatcher_Security_PI_HashModulation_S2C12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_Security_PI_HashModulation_S2C::dispatch_sig(CUser*, PacketBuf&)
# range [0x082271b6, 0x08227255]
082271b6 +0x00:  push   %ebp
082271b7 +0x01:  mov    %esp,%ebp
082271b9 +0x03:  sub    $0x18,%esp
082271bc +0x06:  mov    0x10(%ebp),%eax
082271bf +0x09:  mov    %eax,0x4(%esp)
082271c3 +0x0d:  mov    0xc(%ebp),%eax
082271c6 +0x10:  mov    %eax,(%esp)
082271c9 +0x13:  call   08275140 <_Z44_NS_PI_2ND_RecvPacketIntegrityModulation_S2CP5CUserR9PacketBuf>  ; _NS_PI_2ND_RecvPacketIntegrityModulation_S2C(CUser*, PacketBuf&)
082271ce +0x18:  cmp    $0x2,%eax
082271d1 +0x1b:  je     08227203 <+0x4d>
082271d3 +0x1d:  cmp    $0x3,%eax
082271d6 +0x20:  je     08227229 <+0x73>
082271d8 +0x22:  cmp    $0x1,%eax
082271db +0x25:  jne    0822724f <+0x99>
082271dd +0x27:  movl   $0x0,0xc(%esp)
082271e5 +0x2f:  movl   $0x0,0x8(%esp)
082271ed +0x37:  movl   $&_ZZN41Dispatcher_Security_PI_HashModulation_S2C12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082271f5 +0x3f:  movl   $0xe31e,(%esp)
082271fc +0x46:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08227201 +0x4b:  jmp    08227254 <+0x9e>
08227203 +0x4d:  movl   $0x0,0xc(%esp)
0822720b +0x55:  movl   $0x0,0x8(%esp)
08227213 +0x5d:  movl   $&_ZZN41Dispatcher_Security_PI_HashModulation_S2C12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0822721b +0x65:  movl   $0xe320,(%esp)
08227222 +0x6c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08227227 +0x71:  jmp    08227254 <+0x9e>
08227229 +0x73:  movl   $0x0,0xc(%esp)
08227231 +0x7b:  movl   $0x0,0x8(%esp)
08227239 +0x83:  movl   $&_ZZN41Dispatcher_Security_PI_HashModulation_S2C12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08227241 +0x8b:  movl   $0xe322,(%esp)
08227248 +0x92:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0822724d +0x97:  jmp    08227254 <+0x9e>
0822724f +0x99:  mov    $0x0,%eax
08227254 +0x9e:  leave
08227255 +0x9f:  ret
```

## 反编译 C

```c
// Dispatcher_Security_PI_HashModulation_S2C::dispatch_sig @ 0x82271b6

/* Dispatcher_Security_PI_HashModulation_S2C::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Security_PI_HashModulation_S2C::dispatch_sig
          (Dispatcher_Security_PI_HashModulation_S2C *this,CUser *param_1,PacketBuf *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _NS_PI_2ND_RecvPacketIntegrityModulation_S2C(param_1,param_2);
  if (iVar1 == 2) {
    uVar2 = LineFunc(0xe320,
                     "virtual int Dispatcher_Security_PI_HashModulation_S2C::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else if (iVar1 == 3) {
    uVar2 = LineFunc(0xe322,
                     "virtual int Dispatcher_Security_PI_HashModulation_S2C::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else if (iVar1 == 1) {
    uVar2 = LineFunc(0xe31e,
                     "virtual int Dispatcher_Security_PI_HashModulation_S2C::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

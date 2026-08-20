# dispatch_sig

`_ZN31Dispatcher_Security_ProcessScan12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_Security_ProcessScan::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Security_ProcessScan` | `0x08223cf6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08223cf6  _ZN31Dispatcher_Security_ProcessScan12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_Security_ProcessScan::dispatch_sig(CUser*, PacketBuf&)
# range [0x08223cf6, 0x08223d95]
08223cf6 +0x00:  push   %ebp
08223cf7 +0x01:  mov    %esp,%ebp
08223cf9 +0x03:  sub    $0x18,%esp
08223cfc +0x06:  mov    0x10(%ebp),%eax
08223cff +0x09:  mov    %eax,0x4(%esp)
08223d03 +0x0d:  mov    0xc(%ebp),%eax
08223d06 +0x10:  mov    %eax,(%esp)
08223d09 +0x13:  call   08274523 <_Z15_NS_ProcessScanP5CUserR9PacketBuf>  ; _NS_ProcessScan(CUser*, PacketBuf&)
08223d0e +0x18:  cmp    $0x2,%eax
08223d11 +0x1b:  je     08223d43 <+0x4d>
08223d13 +0x1d:  cmp    $0x3,%eax
08223d16 +0x20:  je     08223d69 <+0x73>
08223d18 +0x22:  cmp    $0x1,%eax
08223d1b +0x25:  jne    08223d8f <+0x99>
08223d1d +0x27:  movl   $0x0,0xc(%esp)
08223d25 +0x2f:  movl   $0x0,0x8(%esp)
08223d2d +0x37:  movl   $&_ZZN31Dispatcher_Security_ProcessScan12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08223d35 +0x3f:  movl   $0xde84,(%esp)
08223d3c +0x46:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08223d41 +0x4b:  jmp    08223d94 <+0x9e>
08223d43 +0x4d:  movl   $0x0,0xc(%esp)
08223d4b +0x55:  movl   $0x0,0x8(%esp)
08223d53 +0x5d:  movl   $&_ZZN31Dispatcher_Security_ProcessScan12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08223d5b +0x65:  movl   $0xde86,(%esp)
08223d62 +0x6c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08223d67 +0x71:  jmp    08223d94 <+0x9e>
08223d69 +0x73:  movl   $0x0,0xc(%esp)
08223d71 +0x7b:  movl   $0x0,0x8(%esp)
08223d79 +0x83:  movl   $&_ZZN31Dispatcher_Security_ProcessScan12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08223d81 +0x8b:  movl   $0xde88,(%esp)
08223d88 +0x92:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08223d8d +0x97:  jmp    08223d94 <+0x9e>
08223d8f +0x99:  mov    $0x0,%eax
08223d94 +0x9e:  leave
08223d95 +0x9f:  ret
```

## 反编译 C

```c
// Dispatcher_Security_ProcessScan::dispatch_sig @ 0x8223cf6

/* Dispatcher_Security_ProcessScan::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Security_ProcessScan::dispatch_sig
          (Dispatcher_Security_ProcessScan *this,CUser *param_1,PacketBuf *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _NS_ProcessScan(param_1,param_2);
  if (iVar1 == 2) {
    uVar2 = LineFunc(0xde86,
                     "virtual int Dispatcher_Security_ProcessScan::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else if (iVar1 == 3) {
    uVar2 = LineFunc(0xde88,
                     "virtual int Dispatcher_Security_ProcessScan::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else if (iVar1 == 1) {
    uVar2 = LineFunc(0xde84,
                     "virtual int Dispatcher_Security_ProcessScan::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

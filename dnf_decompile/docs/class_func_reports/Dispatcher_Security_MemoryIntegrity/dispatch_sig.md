# dispatch_sig

`_ZN35Dispatcher_Security_MemoryIntegrity12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_Security_MemoryIntegrity::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Security_MemoryIntegrity` | `0x08224edc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08224edc  _ZN35Dispatcher_Security_MemoryIntegrity12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_Security_MemoryIntegrity::dispatch_sig(CUser*, PacketBuf&)
# range [0x08224edc, 0x08224f7b]
08224edc +0x00:  push   %ebp
08224edd +0x01:  mov    %esp,%ebp
08224edf +0x03:  sub    $0x18,%esp
08224ee2 +0x06:  mov    0x10(%ebp),%eax
08224ee5 +0x09:  mov    %eax,0x4(%esp)
08224ee9 +0x0d:  mov    0xc(%ebp),%eax
08224eec +0x10:  mov    %eax,(%esp)
08224eef +0x13:  call   08274b09 <_Z36_NS_MI_RecvMemoryIntegrityModulationP5CUserR9PacketBuf>  ; _NS_MI_RecvMemoryIntegrityModulation(CUser*, PacketBuf&)
08224ef4 +0x18:  cmp    $0x2,%eax
08224ef7 +0x1b:  je     08224f29 <+0x4d>
08224ef9 +0x1d:  cmp    $0x3,%eax
08224efc +0x20:  je     08224f4f <+0x73>
08224efe +0x22:  cmp    $0x1,%eax
08224f01 +0x25:  jne    08224f75 <+0x99>
08224f03 +0x27:  movl   $0x0,0xc(%esp)
08224f0b +0x2f:  movl   $0x0,0x8(%esp)
08224f13 +0x37:  movl   $&_ZZN35Dispatcher_Security_MemoryIntegrity12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08224f1b +0x3f:  movl   $0xdf95,(%esp)
08224f22 +0x46:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08224f27 +0x4b:  jmp    08224f7a <+0x9e>
08224f29 +0x4d:  movl   $0x0,0xc(%esp)
08224f31 +0x55:  movl   $0x0,0x8(%esp)
08224f39 +0x5d:  movl   $&_ZZN35Dispatcher_Security_MemoryIntegrity12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08224f41 +0x65:  movl   $0xdf97,(%esp)
08224f48 +0x6c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08224f4d +0x71:  jmp    08224f7a <+0x9e>
08224f4f +0x73:  movl   $0x0,0xc(%esp)
08224f57 +0x7b:  movl   $0x0,0x8(%esp)
08224f5f +0x83:  movl   $&_ZZN35Dispatcher_Security_MemoryIntegrity12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08224f67 +0x8b:  movl   $0xdf99,(%esp)
08224f6e +0x92:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08224f73 +0x97:  jmp    08224f7a <+0x9e>
08224f75 +0x99:  mov    $0x0,%eax
08224f7a +0x9e:  leave
08224f7b +0x9f:  ret
```

## 反编译 C

```c
// Dispatcher_Security_MemoryIntegrity::dispatch_sig @ 0x8224edc

/* Dispatcher_Security_MemoryIntegrity::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Security_MemoryIntegrity::dispatch_sig
          (Dispatcher_Security_MemoryIntegrity *this,CUser *param_1,PacketBuf *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _NS_MI_RecvMemoryIntegrityModulation(param_1,param_2);
  if (iVar1 == 2) {
    uVar2 = LineFunc(0xdf97,
                     "virtual int Dispatcher_Security_MemoryIntegrity::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else if (iVar1 == 3) {
    uVar2 = LineFunc(0xdf99,
                     "virtual int Dispatcher_Security_MemoryIntegrity::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else if (iVar1 == 1) {
    uVar2 = LineFunc(0xdf95,
                     "virtual int Dispatcher_Security_MemoryIntegrity::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

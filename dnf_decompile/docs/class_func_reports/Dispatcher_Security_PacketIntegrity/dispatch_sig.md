# dispatch_sig

`_ZN35Dispatcher_Security_PacketIntegrity12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_Security_PacketIntegrity::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Security_PacketIntegrity` | `0x0822449a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0822449a  _ZN35Dispatcher_Security_PacketIntegrity12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_Security_PacketIntegrity::dispatch_sig(CUser*, PacketBuf&)
# range [0x0822449a, 0x0822458b]
0822449a +0x00:  push   %ebp
0822449b +0x01:  mov    %esp,%ebp
0822449d +0x03:  sub    $0x18,%esp
082244a0 +0x06:  mov    0x10(%ebp),%eax
082244a3 +0x09:  mov    %eax,0x4(%esp)
082244a7 +0x0d:  mov    0xc(%ebp),%eax
082244aa +0x10:  mov    %eax,(%esp)
082244ad +0x13:  call   08274975 <_Z19_NS_PacketIntegrityP5CUserR9PacketBuf>  ; _NS_PacketIntegrity(CUser*, PacketBuf&)
082244b2 +0x18:  cmp    $0x5,%eax
082244b5 +0x1b:  ja     08224585 <+0xeb>
082244bb +0x21:  mov    &data#7d40c75d(.rodata)(,%eax,4),%eax
082244c2 +0x28:  jmp    *%eax
082244c4 +0x2a:  movl   $0x0,0xc(%esp)
082244cc +0x32:  movl   $0x0,0x8(%esp)
082244d4 +0x3a:  movl   $&_ZZN35Dispatcher_Security_PacketIntegrity12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082244dc +0x42:  movl   $0xded7,(%esp)
082244e3 +0x49:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082244e8 +0x4e:  jmp    0822458a <+0xf0>
082244ed +0x53:  movl   $0x0,0xc(%esp)
082244f5 +0x5b:  movl   $0x0,0x8(%esp)
082244fd +0x63:  movl   $&_ZZN35Dispatcher_Security_PacketIntegrity12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08224505 +0x6b:  movl   $0xded9,(%esp)
0822450c +0x72:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08224511 +0x77:  jmp    0822458a <+0xf0>
08224513 +0x79:  movl   $0x0,0xc(%esp)
0822451b +0x81:  movl   $0x0,0x8(%esp)
08224523 +0x89:  movl   $&_ZZN35Dispatcher_Security_PacketIntegrity12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0822452b +0x91:  movl   $0xdedb,(%esp)
08224532 +0x98:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08224537 +0x9d:  jmp    0822458a <+0xf0>
08224539 +0x9f:  movl   $0x0,0xc(%esp)
08224541 +0xa7:  movl   $0x0,0x8(%esp)
08224549 +0xaf:  movl   $&_ZZN35Dispatcher_Security_PacketIntegrity12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08224551 +0xb7:  movl   $0xdedd,(%esp)
08224558 +0xbe:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0822455d +0xc3:  jmp    0822458a <+0xf0>
0822455f +0xc5:  movl   $0x0,0xc(%esp)
08224567 +0xcd:  movl   $0x0,0x8(%esp)
0822456f +0xd5:  movl   $&_ZZN35Dispatcher_Security_PacketIntegrity12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08224577 +0xdd:  movl   $0xdedf,(%esp)
0822457e +0xe4:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08224583 +0xe9:  jmp    0822458a <+0xf0>
08224585 +0xeb:  mov    $0x0,%eax
0822458a +0xf0:  leave
0822458b +0xf1:  ret
```

## 反编译 C

```c
// Dispatcher_Security_PacketIntegrity::dispatch_sig @ 0x822449a

/* Dispatcher_Security_PacketIntegrity::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Security_PacketIntegrity::dispatch_sig
          (Dispatcher_Security_PacketIntegrity *this,CUser *param_1,PacketBuf *param_2)

{
  undefined4 uVar1;
  
  uVar1 = _NS_PacketIntegrity(param_1,param_2);
  switch(uVar1) {
  default:
    uVar1 = 0;
    break;
  case 1:
    uVar1 = LineFunc(0xded7,
                     "virtual int Dispatcher_Security_PacketIntegrity::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    break;
  case 2:
    uVar1 = LineFunc(0xded9,
                     "virtual int Dispatcher_Security_PacketIntegrity::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    break;
  case 3:
    uVar1 = LineFunc(0xdedb,
                     "virtual int Dispatcher_Security_PacketIntegrity::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    break;
  case 4:
    uVar1 = LineFunc(0xdedd,
                     "virtual int Dispatcher_Security_PacketIntegrity::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    break;
  case 5:
    uVar1 = LineFunc(0xdedf,
                     "virtual int Dispatcher_Security_PacketIntegrity::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  return uVar1;
}
```

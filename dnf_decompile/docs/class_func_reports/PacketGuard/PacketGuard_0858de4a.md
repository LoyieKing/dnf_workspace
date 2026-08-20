# PacketGuard

`_ZN11PacketGuardC1EP9PacketBuf`

`PacketGuard::PacketGuard(PacketBuf*)`

| 类 | 地址 |
|---|---|
| `PacketGuard` | `0x0858de4a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858de4a  _ZN11PacketGuardC1EP9PacketBuf
#           PacketGuard::PacketGuard(PacketBuf*)
# range [0x0858de4a, 0x0858de7f]
0858de4a +0x00:  push   %ebp
0858de4b +0x01:  mov    %esp,%ebp
0858de4d +0x03:  sub    $0x18,%esp
0858de50 +0x06:  mov    0x8(%ebp),%eax
0858de53 +0x09:  mov    %eax,(%esp)
0858de56 +0x0c:  call   0858e294 <_GLOBAL__I__ZN9PacketBufC2Ev+0x69>  ; global constructors keyed to PacketBuf::PacketBuf()+0x69
0858de5b +0x11:  mov    0x8(%ebp),%eax
0858de5e +0x14:  movl   $0x0,0x4(%eax)
0858de65 +0x1b:  mov    0x8(%ebp),%eax
0858de68 +0x1e:  movb   $0x1,0x8(%eax)
0858de6c +0x22:  mov    0x8(%ebp),%eax
0858de6f +0x25:  mov    0xc(%ebp),%edx
0858de72 +0x28:  mov    %edx,0x4(%esp)
0858de76 +0x2c:  mov    %eax,(%esp)
0858de79 +0x2f:  call   0858e2a0 <_GLOBAL__I__ZN9PacketBufC2Ev+0x75>  ; global constructors keyed to PacketBuf::PacketBuf()+0x75
0858de7e +0x34:  leave
0858de7f +0x35:  ret
```

## 反编译 C

```c
// PacketGuard::PacketGuard @ 0x858de4a

/* PacketGuard::PacketGuard(PacketBuf*) */

void __thiscall PacketGuard::PacketGuard(PacketGuard *this,PacketBuf *param_1)

{
  InterfacePacketBuf::InterfacePacketBuf((InterfacePacketBuf *)this);
  *(undefined4 *)(this + 4) = 0;
  this[8] = (PacketGuard)0x1;
  InterfacePacketBuf::AcquirePacketBuf((InterfacePacketBuf *)this,param_1);
  return;
}
```

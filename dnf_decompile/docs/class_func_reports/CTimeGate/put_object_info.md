# put_object_info

`_ZN9CTimeGate15put_object_infoER11PacketGuard`

`CTimeGate::put_object_info(PacketGuard&)`

| 类 | 地址 |
|---|---|
| `CTimeGate` | `0x082844d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082844d8  _ZN9CTimeGate15put_object_infoER11PacketGuard
#           CTimeGate::put_object_info(PacketGuard&)
# range [0x082844d8, 0x08284511]
082844d8 +0x00:  push   %ebp
082844d9 +0x01:  mov    %esp,%ebp
082844db +0x03:  sub    $0x18,%esp
082844de +0x06:  mov    0xc(%ebp),%eax
082844e1 +0x09:  movl   $0x2,0x4(%esp)
082844e9 +0x11:  mov    %eax,(%esp)
082844ec +0x14:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082844f1 +0x19:  mov    0x8(%ebp),%eax
082844f4 +0x1c:  movzbl 0x4(%eax),%eax
082844f8 +0x20:  movzbl %al,%edx
082844fb +0x23:  mov    0xc(%ebp),%eax
082844fe +0x26:  mov    %edx,0x4(%esp)
08284502 +0x2a:  mov    %eax,(%esp)
08284505 +0x2d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0828450a +0x32:  mov    $0x1,%eax
0828450f +0x37:  leave
08284510 +0x38:  ret
08284511 +0x39:  nop
```

## 反编译 C

```c
// CTimeGate::put_object_info @ 0x82844d8

/* CTimeGate::put_object_info(PacketGuard&) */

undefined4 __thiscall CTimeGate::put_object_info(CTimeGate *this,PacketGuard *param_1)

{
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)(byte)this[4]);
  return 1;
}
```

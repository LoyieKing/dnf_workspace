# AddUdpLog

`_ZN13CPacketTracer9AddUdpLogEii`

`CPacketTracer::AddUdpLog(int, int)`

| 类 | 地址 |
|---|---|
| `CPacketTracer` | `0x0859926c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859926c  _ZN13CPacketTracer9AddUdpLogEii
#           CPacketTracer::AddUdpLog(int, int)
# range [0x0859926c, 0x085992c7]
0859926c +0x00:  push   %ebp
0859926d +0x01:  mov    %esp,%ebp
0859926f +0x03:  sub    $0x10,%esp
08599272 +0x06:  mov    0x8(%ebp),%eax
08599275 +0x09:  mov    0x4(%eax),%ecx
08599278 +0x0c:  mov    $0xcccccccd,%edx
0859927d +0x11:  mov    %ecx,%eax
0859927f +0x13:  mul    %edx
08599281 +0x15:  shr    $0x3,%edx
08599284 +0x18:  mov    %edx,%eax
08599286 +0x1a:  shl    $0x2,%eax
08599289 +0x1d:  add    %edx,%eax
0859928b +0x1f:  add    %eax,%eax
0859928d +0x21:  mov    %ecx,%edx
0859928f +0x23:  sub    %eax,%edx
08599291 +0x25:  mov    %edx,-0x4(%ebp)
08599294 +0x28:  mov    -0x4(%ebp),%ecx
08599297 +0x2b:  mov    0xc(%ebp),%eax
0859929a +0x2e:  mov    %eax,%edx
0859929c +0x30:  mov    0x8(%ebp),%eax
0859929f +0x33:  add    $0xa,%ecx
085992a2 +0x36:  mov    %dl,0x8(%eax,%ecx,8)
085992a6 +0x3a:  mov    -0x4(%ebp),%ecx
085992a9 +0x3d:  mov    0x10(%ebp),%edx
085992ac +0x40:  mov    0x8(%ebp),%eax
085992af +0x43:  add    $0xa,%ecx
085992b2 +0x46:  mov    %edx,0xc(%eax,%ecx,8)
085992b6 +0x4a:  mov    0x8(%ebp),%eax
085992b9 +0x4d:  mov    0x4(%eax),%eax
085992bc +0x50:  lea    0x1(%eax),%edx
085992bf +0x53:  mov    0x8(%ebp),%eax
085992c2 +0x56:  mov    %edx,0x4(%eax)
085992c5 +0x59:  leave
085992c6 +0x5a:  ret
085992c7 +0x5b:  nop
```

## 反编译 C

```c
// CPacketTracer::AddUdpLog @ 0x859926c

/* CPacketTracer::AddUdpLog(int, int) */

void __thiscall CPacketTracer::AddUdpLog(CPacketTracer *this,int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 4);
  this[(uVar1 % 10 + 10) * 8 + 8] = SUB41(param_1,0);
  *(int *)(this + (uVar1 % 10 + 10) * 8 + 0xc) = param_2;
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  return;
}
```

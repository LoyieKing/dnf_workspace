# AddTcpLog

`_ZN13CPacketTracer9AddTcpLogEii`

`CPacketTracer::AddTcpLog(int, int)`

| 类 | 地址 |
|---|---|
| `CPacketTracer` | `0x085992c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085992c8  _ZN13CPacketTracer9AddTcpLogEii
#           CPacketTracer::AddTcpLog(int, int)
# range [0x085992c8, 0x08599319]
085992c8 +0x00:  push   %ebp
085992c9 +0x01:  mov    %esp,%ebp
085992cb +0x03:  sub    $0x10,%esp
085992ce +0x06:  mov    0x8(%ebp),%eax
085992d1 +0x09:  mov    (%eax),%ecx
085992d3 +0x0b:  mov    $0xcccccccd,%edx
085992d8 +0x10:  mov    %ecx,%eax
085992da +0x12:  mul    %edx
085992dc +0x14:  shr    $0x3,%edx
085992df +0x17:  mov    %edx,%eax
085992e1 +0x19:  shl    $0x2,%eax
085992e4 +0x1c:  add    %edx,%eax
085992e6 +0x1e:  add    %eax,%eax
085992e8 +0x20:  mov    %ecx,%edx
085992ea +0x22:  sub    %eax,%edx
085992ec +0x24:  mov    %edx,-0x4(%ebp)
085992ef +0x27:  mov    -0x4(%ebp),%edx
085992f2 +0x2a:  mov    0xc(%ebp),%eax
085992f5 +0x2d:  mov    %eax,%ecx
085992f7 +0x2f:  mov    0x8(%ebp),%eax
085992fa +0x32:  mov    %cl,0x8(%eax,%edx,8)
085992fe +0x36:  mov    -0x4(%ebp),%edx
08599301 +0x39:  mov    0x10(%ebp),%ecx
08599304 +0x3c:  mov    0x8(%ebp),%eax
08599307 +0x3f:  mov    %ecx,0xc(%eax,%edx,8)
0859930b +0x43:  mov    0x8(%ebp),%eax
0859930e +0x46:  mov    (%eax),%eax
08599310 +0x48:  lea    0x1(%eax),%edx
08599313 +0x4b:  mov    0x8(%ebp),%eax
08599316 +0x4e:  mov    %edx,(%eax)
08599318 +0x50:  leave
08599319 +0x51:  ret
```

## 反编译 C

```c
// CPacketTracer::AddTcpLog @ 0x85992c8

/* CPacketTracer::AddTcpLog(int, int) */

void __thiscall CPacketTracer::AddTcpLog(CPacketTracer *this,int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)this;
  this[(uVar1 % 10) * 8 + 8] = SUB41(param_1,0);
  *(int *)(this + (uVar1 % 10) * 8 + 0xc) = param_2;
  *(int *)this = *(int *)this + 1;
  return;
}
```

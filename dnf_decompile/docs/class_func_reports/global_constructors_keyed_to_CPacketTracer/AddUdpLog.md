# AddUdpLog

`_GLOBAL__I__ZN13CPacketTracer9AddUdpLogEii`

`global constructors keyed to CPacketTracer::AddUdpLog(int, int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CPacketTracer` | `0x0859954b` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859954b  _GLOBAL__I__ZN13CPacketTracer9AddUdpLogEii
#           global constructors keyed to CPacketTracer::AddUdpLog(int, int)
# range [0x0859954b, 0x08599567]
0859954b +0x00:  push   %ebp
0859954c +0x01:  mov    %esp,%ebp
0859954e +0x03:  sub    $0x18,%esp
08599551 +0x06:  movl   $0xffff,0x4(%esp)
08599559 +0x0e:  movl   $0x1,(%esp)
08599560 +0x15:  call   0859950b <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08599565 +0x1a:  leave
08599566 +0x1b:  ret
08599567 +0x1c:  nop
```

## 反编译 C

```c
// <global>::global @ 0x859954b

/* CPacketTracer::AddUdpLog(int, int) */

void CPacketTracer::_GLOBAL__I_AddUdpLog(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```

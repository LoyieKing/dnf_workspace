# put_object_info

`_GLOBAL__I__ZN9CTimeGate15put_object_infoER11PacketGuard`

`global constructors keyed to CTimeGate::put_object_info(PacketGuard&)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CTimeGate` | `0x08284584` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08284584  _GLOBAL__I__ZN9CTimeGate15put_object_infoER11PacketGuard
#           global constructors keyed to CTimeGate::put_object_info(PacketGuard&)
# range [0x08284584, 0x082845b7]
08284584 +0x00:  push   %ebp
08284585 +0x01:  mov    %esp,%ebp
08284587 +0x03:  sub    $0x18,%esp
0828458a +0x06:  movl   $0xffff,0x4(%esp)
08284592 +0x0e:  movl   $0x1,(%esp)
08284599 +0x15:  call   08284544 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0828459e +0x1a:  leave
0828459f +0x1b:  ret
082845a0 +0x1c:  push   %ebp
082845a1 +0x1d:  mov    %esp,%ebp
082845a3 +0x1f:  mov    $0x0,%eax
082845a8 +0x24:  pop    %ebp
082845a9 +0x25:  ret
082845aa +0x26:  push   %ebp
082845ab +0x27:  mov    %esp,%ebp
082845ad +0x29:  mov    0x8(%ebp),%eax
082845b0 +0x2c:  movl   $&_ZTVN14village_object7IObjectE+0x8,(%eax)
082845b6 +0x32:  pop    %ebp
082845b7 +0x33:  ret
```

## 反编译 C

```c
// <global>::global @ 0x8284584

/* CTimeGate::put_object_info(PacketGuard&) */

void CTimeGate::_GLOBAL__I_put_object_info(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```

# CBurningFatigueEvent

`_GLOBAL__I__ZN20CBurningFatigueEventC2Ev`

`global constructors keyed to CBurningFatigueEvent::CBurningFatigueEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CBurningFatigueEvent` | `0x0810a265` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a265  _GLOBAL__I__ZN20CBurningFatigueEventC2Ev
#           global constructors keyed to CBurningFatigueEvent::CBurningFatigueEvent()
# range [0x0810a265, 0x0810a2c7]
0810a265 +0x00:  push   %ebp
0810a266 +0x01:  mov    %esp,%ebp
0810a268 +0x03:  sub    $0x18,%esp
0810a26b +0x06:  movl   $0xffff,0x4(%esp)
0810a273 +0x0e:  movl   $0x1,(%esp)
0810a27a +0x15:  call   0810a225 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0810a27f +0x1a:  leave
0810a280 +0x1b:  ret
0810a281 +0x1c:  nop
0810a282 +0x1d:  push   %ebp
0810a283 +0x1e:  mov    %esp,%ebp
0810a285 +0x20:  mov    0x8(%ebp),%eax
0810a288 +0x23:  mov    0x4(%eax),%eax
0810a28b +0x26:  mov    %eax,%edx
0810a28d +0x28:  mov    0x8(%ebp),%eax
0810a290 +0x2b:  mov    (%eax),%eax
0810a292 +0x2d:  mov    %edx,%ecx
0810a294 +0x2f:  sub    %eax,%ecx
0810a296 +0x31:  mov    %ecx,%eax
0810a298 +0x33:  sar    $0x2,%eax
0810a29b +0x36:  imul   $0xb6db6db7,%eax,%eax
0810a2a1 +0x3c:  pop    %ebp
0810a2a2 +0x3d:  ret
0810a2a3 +0x3e:  nop
0810a2a4 +0x3f:  push   %ebp
0810a2a5 +0x40:  mov    %esp,%ebp
0810a2a7 +0x42:  push   %ebx
0810a2a8 +0x43:  mov    0x8(%ebp),%eax
0810a2ab +0x46:  mov    (%eax),%edx
0810a2ad +0x48:  mov    0xc(%ebp),%eax
0810a2b0 +0x4b:  shl    $0x2,%eax
0810a2b3 +0x4e:  lea    0x0(,%eax,8),%ecx
0810a2ba +0x55:  mov    %ecx,%ebx
0810a2bc +0x57:  sub    %eax,%ebx
0810a2be +0x59:  mov    %ebx,%eax
0810a2c0 +0x5b:  lea    (%edx,%eax,1),%eax
0810a2c3 +0x5e:  pop    %ebx
0810a2c4 +0x5f:  pop    %ebp
0810a2c5 +0x60:  ret
0810a2c6 +0x61:  nop
0810a2c7 +0x62:  nop
```

## 反编译 C

```c
// <global>::global @ 0x810a265

/* CBurningFatigueEvent::CBurningFatigueEvent() */

void CBurningFatigueEvent::_GLOBAL__I_CBurningFatigueEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```

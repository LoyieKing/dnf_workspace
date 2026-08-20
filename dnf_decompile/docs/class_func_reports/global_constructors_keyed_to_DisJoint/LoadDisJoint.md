# LoadDisJoint

`_GLOBAL__I__ZN8DisJoint12LoadDisJointEv`

`global constructors keyed to DisJoint::LoadDisJoint()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to DisJoint` | `0x084735b5` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084735b5  _GLOBAL__I__ZN8DisJoint12LoadDisJointEv
#           global constructors keyed to DisJoint::LoadDisJoint()
# range [0x084735b5, 0x0847364b]
084735b5 +0x00:  push   %ebp
084735b6 +0x01:  mov    %esp,%ebp
084735b8 +0x03:  sub    $0x18,%esp
084735bb +0x06:  movl   $0xffff,0x4(%esp)
084735c3 +0x0e:  movl   $0x1,(%esp)
084735ca +0x15:  call   08473575 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
084735cf +0x1a:  leave
084735d0 +0x1b:  ret
084735d1 +0x1c:  nop
084735d2 +0x1d:  push   %ebp
084735d3 +0x1e:  mov    %esp,%ebp
084735d5 +0x20:  mov    0x8(%ebp),%eax
084735d8 +0x23:  movl   $0xb,(%eax)
084735de +0x29:  mov    0x8(%ebp),%eax
084735e1 +0x2c:  movl   $0x0,0x4(%eax)
084735e8 +0x33:  mov    0x8(%ebp),%eax
084735eb +0x36:  movl   $0x0,0x8(%eax)
084735f2 +0x3d:  mov    0x8(%ebp),%eax
084735f5 +0x40:  movl   $0x4,0xc(%eax)
084735fc +0x47:  pop    %ebp
084735fd +0x48:  ret
084735fe +0x49:  push   %ebp
084735ff +0x4a:  mov    %esp,%ebp
08473601 +0x4c:  sub    $0x18,%esp
08473604 +0x4f:  mov    0x8(%ebp),%eax
08473607 +0x52:  mov    %eax,(%esp)
0847360a +0x55:  call   084735d2 <+0x1d>
0847360f +0x5a:  leave
08473610 +0x5b:  ret
08473611 +0x5c:  nop
08473612 +0x5d:  push   %ebp
08473613 +0x5e:  mov    %esp,%ebp
08473615 +0x60:  mov    0x8(%ebp),%eax
08473618 +0x63:  mov    0x30(%eax),%eax
0847361b +0x66:  pop    %ebp
0847361c +0x67:  ret
0847361d +0x68:  nop
0847361e +0x69:  push   %ebp
0847361f +0x6a:  mov    %esp,%ebp
08473621 +0x6c:  mov    0x8(%ebp),%eax
08473624 +0x6f:  mov    0x4(%eax),%eax
08473627 +0x72:  mov    %eax,%edx
08473629 +0x74:  mov    0x8(%ebp),%eax
0847362c +0x77:  mov    (%eax),%eax
0847362e +0x79:  mov    %edx,%ecx
08473630 +0x7b:  sub    %eax,%ecx
08473632 +0x7d:  mov    %ecx,%eax
08473634 +0x7f:  sar    $0x4,%eax
08473637 +0x82:  pop    %ebp
08473638 +0x83:  ret
08473639 +0x84:  nop
0847363a +0x85:  push   %ebp
0847363b +0x86:  mov    %esp,%ebp
0847363d +0x88:  mov    0x8(%ebp),%eax
08473640 +0x8b:  mov    (%eax),%eax
08473642 +0x8d:  mov    0xc(%ebp),%edx
08473645 +0x90:  shl    $0x4,%edx
08473648 +0x93:  add    %edx,%eax
0847364a +0x95:  pop    %ebp
0847364b +0x96:  ret
```

## 反编译 C

```c
// <global>::global @ 0x84735b5

/* DisJoint::LoadDisJoint() */

void DisJoint::_GLOBAL__I_LoadDisJoint(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```

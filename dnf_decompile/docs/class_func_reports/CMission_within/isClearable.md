# isClearable

`_ZNK15CMission_within11isClearableER11MissionInfoRb`

`CMission_within::isClearable(MissionInfo&, bool&) const`

| 类 | 地址 |
|---|---|
| `CMission_within` | `0x085e3db8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e3db8  _ZNK15CMission_within11isClearableER11MissionInfoRb
#           CMission_within::isClearable(MissionInfo&, bool&) const
# range [0x085e3db8, 0x085e3e5b]
085e3db8 +0x00:  push   %ebp
085e3db9 +0x01:  mov    %esp,%ebp
085e3dbb +0x03:  push   %ebx
085e3dbc +0x04:  sub    $0x10,%esp
085e3dbf +0x07:  movw   $0x0,-0xa(%ebp)
085e3dc5 +0x0d:  movl   $0x0,-0x8(%ebp)
085e3dcc +0x14:  jmp    085e3df3 <+0x3b>
085e3dce +0x16:  mov    0xc(%ebp),%eax
085e3dd1 +0x19:  movzwl 0x4(%eax),%eax
085e3dd5 +0x1d:  movswl %ax,%edx
085e3dd8 +0x20:  mov    -0x8(%ebp),%eax
085e3ddb +0x23:  mov    %edx,%ebx
085e3ddd +0x25:  mov    %eax,%ecx
085e3ddf +0x27:  sar    %cl,%ebx
085e3de1 +0x29:  mov    %ebx,%eax
085e3de3 +0x2b:  and    $0x1,%eax
085e3de6 +0x2e:  test   %al,%al
085e3de8 +0x30:  je     085e3def <+0x37>
085e3dea +0x32:  addw   $0x1,-0xa(%ebp)
085e3def +0x37:  addl   $0x1,-0x8(%ebp)
085e3df3 +0x3b:  mov    0x8(%ebp),%eax
085e3df6 +0x3e:  mov    0x40(%eax),%eax
085e3df9 +0x41:  cmp    -0x8(%ebp),%eax
085e3dfc +0x44:  setg   %al
085e3dff +0x47:  test   %al,%al
085e3e01 +0x49:  jne    085e3dce <+0x16>
085e3e03 +0x4b:  movswl -0xa(%ebp),%edx
085e3e07 +0x4f:  mov    0x8(%ebp),%eax
085e3e0a +0x52:  mov    0x44(%eax),%eax
085e3e0d +0x55:  cmp    %eax,%edx
085e3e0f +0x57:  jl     085e3e18 <+0x60>
085e3e11 +0x59:  mov    $0x1,%eax
085e3e16 +0x5e:  jmp    085e3e55 <+0x9d>
085e3e18 +0x60:  mov    0x8(%ebp),%eax
085e3e1b +0x63:  mov    0x40(%eax),%edx
085e3e1e +0x66:  mov    0xc(%ebp),%eax
085e3e21 +0x69:  movzwl 0x6(%eax),%eax
085e3e25 +0x6d:  cwtl
085e3e26 +0x6e:  sub    %eax,%edx
085e3e28 +0x70:  movswl -0xa(%ebp),%eax
085e3e2c +0x74:  add    %eax,%edx
085e3e2e +0x76:  mov    0x8(%ebp),%eax
085e3e31 +0x79:  mov    0x44(%eax),%eax
085e3e34 +0x7c:  cmp    %eax,%edx
085e3e36 +0x7e:  jge    085e3e50 <+0x98>
085e3e38 +0x80:  mov    0xc(%ebp),%eax
085e3e3b +0x83:  movw   $0x0,0x4(%eax)
085e3e41 +0x89:  mov    0xc(%ebp),%eax
085e3e44 +0x8c:  movw   $0x0,0x6(%eax)
085e3e4a +0x92:  mov    0x10(%ebp),%eax
085e3e4d +0x95:  movb   $0x1,(%eax)
085e3e50 +0x98:  mov    $0x0,%eax
085e3e55 +0x9d:  add    $0x10,%esp
085e3e58 +0xa0:  pop    %ebx
085e3e59 +0xa1:  pop    %ebp
085e3e5a +0xa2:  ret
085e3e5b +0xa3:  nop
```

## 反编译 C

```c
// CMission_within::isClearable @ 0x85e3db8

/* CMission_within::isClearable(MissionInfo&, bool&) const */

undefined4 __thiscall
CMission_within::isClearable(CMission_within *this,MissionInfo *param_1,bool *param_2)

{
  undefined4 uVar1;
  short local_e;
  int local_c;
  
  local_e = 0;
  for (local_c = 0; local_c < *(int *)(this + 0x40); local_c = local_c + 1) {
    if (((int)*(short *)(param_1 + 4) >> ((byte)local_c & 0x1f) & 1U) != 0) {
      local_e = local_e + 1;
    }
  }
  if ((int)local_e < *(int *)(this + 0x44)) {
    if ((*(int *)(this + 0x40) - (int)*(short *)(param_1 + 6)) + (int)local_e <
        *(int *)(this + 0x44)) {
      *(undefined2 *)(param_1 + 4) = 0;
      *(undefined2 *)(param_1 + 6) = 0;
      *param_2 = true;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```

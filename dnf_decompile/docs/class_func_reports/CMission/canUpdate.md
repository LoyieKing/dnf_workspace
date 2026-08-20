# canUpdate

`_ZNK8CMission9canUpdateERK31MissionClearCondition_Parameter`

`CMission::canUpdate(MissionClearCondition_Parameter const&) const`

| 类 | 地址 |
|---|---|
| `CMission` | `0x085e327a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e327a  _ZNK8CMission9canUpdateERK31MissionClearCondition_Parameter
#           CMission::canUpdate(MissionClearCondition_Parameter const&) const
# range [0x085e327a, 0x085e32d9]
085e327a +0x00:  push   %ebp
085e327b +0x01:  mov    %esp,%ebp
085e327d +0x03:  sub    $0x18,%esp
085e3280 +0x06:  mov    0x8(%ebp),%eax
085e3283 +0x09:  movzbl 0x4(%eax),%eax
085e3287 +0x0d:  cmp    $0xff,%al
085e3289 +0x0f:  jne    085e32a6 <+0x2c>
085e328b +0x11:  mov    0xc(%ebp),%eax
085e328e +0x14:  movzbl (%eax),%eax
085e3291 +0x17:  cmp    $0x1,%al
085e3293 +0x19:  je     085e32be <+0x44>
085e3295 +0x1b:  mov    0xc(%ebp),%eax
085e3298 +0x1e:  movzbl (%eax),%eax
085e329b +0x21:  cmp    $0x2,%al
085e329d +0x23:  je     085e32be <+0x44>
085e329f +0x25:  mov    $0x0,%eax
085e32a4 +0x2a:  jmp    085e32d7 <+0x5d>
085e32a6 +0x2c:  mov    0x8(%ebp),%eax
085e32a9 +0x2f:  movzbl 0x4(%eax),%edx
085e32ad +0x33:  mov    0xc(%ebp),%eax
085e32b0 +0x36:  movzbl (%eax),%eax
085e32b3 +0x39:  cmp    %al,%dl
085e32b5 +0x3b:  je     085e32be <+0x44>
085e32b7 +0x3d:  mov    $0x0,%eax
085e32bc +0x42:  jmp    085e32d7 <+0x5d>
085e32be +0x44:  mov    0x8(%ebp),%eax
085e32c1 +0x47:  mov    (%eax),%eax
085e32c3 +0x49:  add    $0x4,%eax
085e32c6 +0x4c:  mov    (%eax),%edx
085e32c8 +0x4e:  mov    0xc(%ebp),%eax
085e32cb +0x51:  mov    %eax,0x4(%esp)
085e32cf +0x55:  mov    0x8(%ebp),%eax
085e32d2 +0x58:  mov    %eax,(%esp)
085e32d5 +0x5b:  call   *%edx
085e32d7 +0x5d:  leave
085e32d8 +0x5e:  ret
085e32d9 +0x5f:  nop
```

## 反编译 C

```c
// CMission::canUpdate @ 0x85e327a

/* CMission::canUpdate(MissionClearCondition_Parameter const&) const */

undefined4 __thiscall CMission::canUpdate(CMission *this,MissionClearCondition_Parameter *param_1)

{
  undefined4 uVar1;
  
  if (this[4] == (CMission)0xff) {
    if ((*param_1 != (MissionClearCondition_Parameter)0x1) &&
       (*param_1 != (MissionClearCondition_Parameter)0x2)) {
      return 0;
    }
  }
  else if (this[4] != *(CMission *)param_1) {
    return 0;
  }
  uVar1 = (**(code **)(*(int *)this + 4))(this,param_1);
  return uVar1;
}
```

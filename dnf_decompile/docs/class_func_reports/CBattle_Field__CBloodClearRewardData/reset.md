# reset

`_ZN13CBattle_Field21CBloodClearRewardData5resetEv`

`CBattle_Field::CBloodClearRewardData::reset()`

| 类 | 地址 |
|---|---|
| `CBattle_Field::CBloodClearRewardData` | `0x08306ee0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08306ee0  _ZN13CBattle_Field21CBloodClearRewardData5resetEv
#           CBattle_Field::CBloodClearRewardData::reset()
# range [0x08306ee0, 0x08306f5b]
08306ee0 +0x00:  push   %ebp
08306ee1 +0x01:  mov    %esp,%ebp
08306ee3 +0x03:  sub    $0x28,%esp
08306ee6 +0x06:  mov    0x8(%ebp),%eax
08306ee9 +0x09:  movl   $0x0,0x8(%eax)
08306ef0 +0x10:  mov    0x8(%ebp),%eax
08306ef3 +0x13:  movl   $0x0,(%eax)
08306ef9 +0x19:  mov    0x8(%ebp),%eax
08306efc +0x1c:  movl   $0x0,0x4(%eax)
08306f03 +0x23:  mov    0x8(%ebp),%eax
08306f06 +0x26:  movb   $0x0,0x14(%eax)
08306f0a +0x2a:  movl   $0x0,-0xc(%ebp)
08306f11 +0x31:  jmp    08306f42 <+0x62>
08306f13 +0x33:  mov    -0xc(%ebp),%edx
08306f16 +0x36:  mov    0x8(%ebp),%eax
08306f19 +0x39:  add    $0x4,%edx
08306f1c +0x3c:  movl   $0x0,0x8(%eax,%edx,4)
08306f24 +0x44:  mov    -0xc(%ebp),%eax
08306f27 +0x47:  imul   $0x268,%eax,%eax
08306f2d +0x4d:  add    $0x20,%eax
08306f30 +0x50:  add    0x8(%ebp),%eax
08306f33 +0x53:  add    $0x8,%eax
08306f36 +0x56:  mov    %eax,(%esp)
08306f39 +0x59:  call   08306f5c <_ZN13CBattle_Field21CBloodClearRewardData14stRewardItem_t5resetEv>  ; CBattle_Field::CBloodClearRewardData::stRewardItem_t::reset()
08306f3e +0x5e:  addl   $0x1,-0xc(%ebp)
08306f42 +0x62:  cmpl   $0x3,-0xc(%ebp)
08306f46 +0x66:  setle  %al
08306f49 +0x69:  test   %al,%al
08306f4b +0x6b:  jne    08306f13 <+0x33>
08306f4d +0x6d:  mov    0x8(%ebp),%eax
08306f50 +0x70:  movl   $0x0,0x9c8(%eax)
08306f5a +0x7a:  leave
08306f5b +0x7b:  ret
```

## 反编译 C

```c
// CBattle_Field::CBloodClearRewardData::reset @ 0x8306ee0

/* CBattle_Field::CBloodClearRewardData::reset() */

void __thiscall CBattle_Field::CBloodClearRewardData::reset(CBloodClearRewardData *this)

{
  int local_10;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  this[0x14] = (CBloodClearRewardData)0x0;
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    *(undefined4 *)(this + (local_10 + 4) * 4 + 8) = 0;
    stRewardItem_t::reset((stRewardItem_t *)(this + local_10 * 0x268 + 0x28));
  }
  *(undefined4 *)(this + 0x9c8) = 0;
  return;
}
```

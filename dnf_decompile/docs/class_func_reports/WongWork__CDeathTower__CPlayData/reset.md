# reset

`_ZN8WongWork11CDeathTower9CPlayData5resetEv`

`WongWork::CDeathTower::CPlayData::reset()`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CPlayData` | `0x08461f18` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08461f18  _ZN8WongWork11CDeathTower9CPlayData5resetEv
#           WongWork::CDeathTower::CPlayData::reset()
# range [0x08461f18, 0x08461fbf]
08461f18 +0x00:  push   %ebp
08461f19 +0x01:  mov    %esp,%ebp
08461f1b +0x03:  sub    $0x28,%esp
08461f1e +0x06:  mov    0x8(%ebp),%eax
08461f21 +0x09:  movl   $0x0,0x10(%eax)
08461f28 +0x10:  mov    0x8(%ebp),%eax
08461f2b +0x13:  movl   $0x0,0x14(%eax)
08461f32 +0x1a:  mov    0x8(%ebp),%eax
08461f35 +0x1d:  movl   $0x0,(%eax)
08461f3b +0x23:  movl   $0x0,-0x10(%ebp)
08461f42 +0x2a:  jmp    08461f8c <+0x74>
08461f44 +0x2c:  mov    -0x10(%ebp),%eax
08461f47 +0x2f:  mov    0x8(%ebp),%edx
08461f4a +0x32:  movb   $0x0,0x4(%edx,%eax,1)
08461f4f +0x37:  mov    -0x10(%ebp),%eax
08461f52 +0x3a:  mov    0x8(%ebp),%edx
08461f55 +0x3d:  movb   $0x0,0x8(%edx,%eax,1)
08461f5a +0x42:  mov    -0x10(%ebp),%eax
08461f5d +0x45:  imul   $0x268,%eax,%eax
08461f63 +0x4b:  add    $0x10,%eax
08461f66 +0x4e:  add    0x8(%ebp),%eax
08461f69 +0x51:  add    $0x8,%eax
08461f6c +0x54:  mov    %eax,(%esp)
08461f6f +0x57:  call   08461cb4 <_ZN8WongWork11CDeathTower9CPlayData14stRewardItem_t5resetEv>  ; WongWork::CDeathTower::CPlayData::stRewardItem_t::reset()
08461f74 +0x5c:  mov    -0x10(%ebp),%edx
08461f77 +0x5f:  mov    0x8(%ebp),%eax
08461f7a +0x62:  add    $0x26c,%edx
08461f80 +0x68:  movl   $0x0,0x8(%eax,%edx,4)
08461f88 +0x70:  addl   $0x1,-0x10(%ebp)
08461f8c +0x74:  cmpl   $0x3,-0x10(%ebp)
08461f90 +0x78:  setle  %al
08461f93 +0x7b:  test   %al,%al
08461f95 +0x7d:  jne    08461f44 <+0x2c>
08461f97 +0x7f:  movl   $0x0,-0xc(%ebp)
08461f9e +0x86:  jmp    08461fb2 <+0x9a>
08461fa0 +0x88:  mov    -0xc(%ebp),%eax
08461fa3 +0x8b:  mov    0x8(%ebp),%edx
08461fa6 +0x8e:  movb   $0x0,0xa28(%edx,%eax,1)
08461fae +0x96:  addl   $0x1,-0xc(%ebp)
08461fb2 +0x9a:  cmpl   $0x3,-0xc(%ebp)
08461fb6 +0x9e:  setle  %al
08461fb9 +0xa1:  test   %al,%al
08461fbb +0xa3:  jne    08461fa0 <+0x88>
08461fbd +0xa5:  leave
08461fbe +0xa6:  ret
08461fbf +0xa7:  nop
```

## 反编译 C

```c
// WongWork::CDeathTower::CPlayData::reset @ 0x8461f18

/* WongWork::CDeathTower::CPlayData::reset() */

void __thiscall WongWork::CDeathTower::CPlayData::reset(CPlayData *this)

{
  int local_14;
  int local_10;
  
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)this = 0;
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    this[local_14 + 4] = (CPlayData)0x0;
    this[local_14 + 8] = (CPlayData)0x0;
    stRewardItem_t::reset((stRewardItem_t *)(this + local_14 * 0x268 + 0x18));
    *(undefined4 *)(this + (local_14 + 0x26c) * 4 + 8) = 0;
  }
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    this[local_10 + 0xa28] = (CPlayData)0x0;
  }
  return;
}
```

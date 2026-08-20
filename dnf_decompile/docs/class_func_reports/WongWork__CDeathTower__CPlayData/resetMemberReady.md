# resetMemberReady

`_ZN8WongWork11CDeathTower9CPlayData16resetMemberReadyEv`

`WongWork::CDeathTower::CPlayData::resetMemberReady()`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CPlayData` | `0x08461ee6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08461ee6  _ZN8WongWork11CDeathTower9CPlayData16resetMemberReadyEv
#           WongWork::CDeathTower::CPlayData::resetMemberReady()
# range [0x08461ee6, 0x08461f17]
08461ee6 +0x00:  push   %ebp
08461ee7 +0x01:  mov    %esp,%ebp
08461ee9 +0x03:  sub    $0x10,%esp
08461eec +0x06:  mov    0x8(%ebp),%eax
08461eef +0x09:  movb   $0x0,0xc(%eax)
08461ef3 +0x0d:  movl   $0x0,-0x4(%ebp)
08461efa +0x14:  jmp    08461f0b <+0x25>
08461efc +0x16:  mov    -0x4(%ebp),%eax
08461eff +0x19:  mov    0x8(%ebp),%edx
08461f02 +0x1c:  movb   $0x0,0x8(%edx,%eax,1)
08461f07 +0x21:  addl   $0x1,-0x4(%ebp)
08461f0b +0x25:  cmpl   $0x3,-0x4(%ebp)
08461f0f +0x29:  setle  %al
08461f12 +0x2c:  test   %al,%al
08461f14 +0x2e:  jne    08461efc <+0x16>
08461f16 +0x30:  leave
08461f17 +0x31:  ret
```

## 反编译 C

```c
// WongWork::CDeathTower::CPlayData::resetMemberReady @ 0x8461ee6

/* WongWork::CDeathTower::CPlayData::resetMemberReady() */

void __thiscall WongWork::CDeathTower::CPlayData::resetMemberReady(CPlayData *this)

{
  int local_8;
  
  this[0xc] = (CPlayData)0x0;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    this[local_8 + 8] = (CPlayData)0x0;
  }
  return;
}
```

# reset

`_ZN8WongWork11CDeathTower9CPlayData14stRewardItem_t5resetEv`

`WongWork::CDeathTower::CPlayData::stRewardItem_t::reset()`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CPlayData::stRewardItem_t` | `0x08461cb4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08461cb4  _ZN8WongWork11CDeathTower9CPlayData14stRewardItem_t5resetEv
#           WongWork::CDeathTower::CPlayData::stRewardItem_t::reset()
# range [0x08461cb4, 0x08461d01]
08461cb4 +0x00:  push   %ebp
08461cb5 +0x01:  mov    %esp,%ebp
08461cb7 +0x03:  sub    $0x28,%esp
08461cba +0x06:  mov    0x8(%ebp),%eax
08461cbd +0x09:  movl   $0x0,(%eax)
08461cc3 +0x0f:  movl   $0x0,-0xc(%ebp)
08461cca +0x16:  jmp    08461cf5 <+0x41>
08461ccc +0x18:  mov    -0xc(%ebp),%eax
08461ccf +0x1b:  imul   $0x3d,%eax,%eax
08461cd2 +0x1e:  add    0x8(%ebp),%eax
08461cd5 +0x21:  add    $0x4,%eax
08461cd8 +0x24:  mov    %eax,(%esp)
08461cdb +0x27:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
08461ce0 +0x2c:  mov    -0xc(%ebp),%edx
08461ce3 +0x2f:  mov    0x8(%ebp),%eax
08461ce6 +0x32:  imul   $0x3d,%edx,%edx
08461ce9 +0x35:  movl   $0xffffffff,0x6(%edx,%eax,1)
08461cf1 +0x3d:  addl   $0x1,-0xc(%ebp)
08461cf5 +0x41:  cmpl   $0x9,-0xc(%ebp)
08461cf9 +0x45:  setle  %al
08461cfc +0x48:  test   %al,%al
08461cfe +0x4a:  jne    08461ccc <+0x18>
08461d00 +0x4c:  leave
08461d01 +0x4d:  ret
```

## 反编译 C

```c
// WongWork::CDeathTower::CPlayData::stRewardItem_t::reset @ 0x8461cb4

/* WongWork::CDeathTower::CPlayData::stRewardItem_t::reset() */

void __thiscall WongWork::CDeathTower::CPlayData::stRewardItem_t::reset(stRewardItem_t *this)

{
  int local_10;
  
  *(undefined4 *)this = 0;
  for (local_10 = 0; local_10 < 10; local_10 = local_10 + 1) {
    Inven_Item::reset((Inven_Item *)(this + local_10 * 0x3d + 4));
    *(undefined4 *)(this + local_10 * 0x3d + 6) = 0xffffffff;
  }
  return;
}
```

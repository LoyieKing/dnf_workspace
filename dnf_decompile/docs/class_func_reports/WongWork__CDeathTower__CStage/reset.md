# reset

`_ZN8WongWork11CDeathTower6CStage5resetEv`

`WongWork::CDeathTower::CStage::reset()`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CStage` | `0x084614ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084614ec  _ZN8WongWork11CDeathTower6CStage5resetEv
#           WongWork::CDeathTower::CStage::reset()
# range [0x084614ec, 0x08461533]
084614ec +0x00:  push   %ebp
084614ed +0x01:  mov    %esp,%ebp
084614ef +0x03:  sub    $0x18,%esp
084614f2 +0x06:  mov    0x8(%ebp),%eax
084614f5 +0x09:  add    $0xc,%eax
084614f8 +0x0c:  mov    %eax,(%esp)
084614fb +0x0f:  call   081514ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xde3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xde3
08461500 +0x14:  movl   $0xea60,(%esp)
08461507 +0x1b:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0846150c +0x20:  mov    0x8(%ebp),%edx
0846150f +0x23:  mov    %eax,0x48(%edx)
08461512 +0x26:  movl   $0xea60,(%esp)
08461519 +0x2d:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0846151e +0x32:  mov    0x8(%ebp),%edx
08461521 +0x35:  mov    %eax,0x4c(%edx)
08461524 +0x38:  mov    0x8(%ebp),%eax
08461527 +0x3b:  movl   $0x0,0xf8(%eax)
08461531 +0x45:  leave
08461532 +0x46:  ret
08461533 +0x47:  nop
```

## 反编译 C

```c
// WongWork::CDeathTower::CStage::reset @ 0x84614ec

/* WongWork::CDeathTower::CStage::reset() */

void __thiscall WongWork::CDeathTower::CStage::reset(CStage *this)

{
  undefined4 uVar1;
  
  MapInfo::Clear((MapInfo *)(this + 0xc));
  uVar1 = get_rand_int(60000);
  *(undefined4 *)(this + 0x48) = uVar1;
  uVar1 = get_rand_int(60000);
  *(undefined4 *)(this + 0x4c) = uVar1;
  *(undefined4 *)(this + 0xf8) = 0;
  return;
}
```

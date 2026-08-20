# onStartStage

`_ZN8WongWork11CDeathTower6CStage12onStartStageEv`

`WongWork::CDeathTower::CStage::onStartStage()`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CStage` | `0x08461c26` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08461c26  _ZN8WongWork11CDeathTower6CStage12onStartStageEv
#           WongWork::CDeathTower::CStage::onStartStage()
# range [0x08461c26, 0x08461c3f]
08461c26 +0x00:  push   %ebp
08461c27 +0x01:  mov    %esp,%ebp
08461c29 +0x03:  sub    $0x18,%esp
08461c2c +0x06:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08461c33 +0x0d:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
08461c38 +0x12:  mov    0x8(%ebp),%edx
08461c3b +0x15:  mov    %eax,0x4(%edx)
08461c3e +0x18:  leave
08461c3f +0x19:  ret
```

## 反编译 C

```c
// WongWork::CDeathTower::CStage::onStartStage @ 0x8461c26

/* WongWork::CDeathTower::CStage::onStartStage() */

void __thiscall WongWork::CDeathTower::CStage::onStartStage(CStage *this)

{
  undefined4 uVar1;
  
  uVar1 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(this + 4) = uVar1;
  return;
}
```

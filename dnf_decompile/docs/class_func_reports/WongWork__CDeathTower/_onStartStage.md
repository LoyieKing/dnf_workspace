# _onStartStage

`_ZN8WongWork11CDeathTower13_onStartStageEv`

`WongWork::CDeathTower::_onStartStage()`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower` | `0x08467cac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08467cac  _ZN8WongWork11CDeathTower13_onStartStageEv
#           WongWork::CDeathTower::_onStartStage()
# range [0x08467cac, 0x08467cc1]
08467cac +0x00:  push   %ebp
08467cad +0x01:  mov    %esp,%ebp
08467caf +0x03:  sub    $0x18,%esp
08467cb2 +0x06:  mov    0x8(%ebp),%eax
08467cb5 +0x09:  add    $0x14,%eax
08467cb8 +0x0c:  mov    %eax,(%esp)
08467cbb +0x0f:  call   08461c26 <_ZN8WongWork11CDeathTower6CStage12onStartStageEv>  ; WongWork::CDeathTower::CStage::onStartStage()
08467cc0 +0x14:  leave
08467cc1 +0x15:  ret
```

## 反编译 C

```c
// WongWork::CDeathTower::_onStartStage @ 0x8467cac

/* WongWork::CDeathTower::_onStartStage() */

void __thiscall WongWork::CDeathTower::_onStartStage(CDeathTower *this)

{
  CStage::onStartStage((CStage *)(this + 0x14));
  return;
}
```

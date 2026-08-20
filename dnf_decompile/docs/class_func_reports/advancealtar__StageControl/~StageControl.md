# ~StageControl

`_ZN12advancealtar12StageControlD1Ev`

`advancealtar::StageControl::~StageControl()`

| 类 | 地址 |
|---|---|
| `advancealtar::StageControl` | `0x0812fa06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812fa06  _ZN12advancealtar12StageControlD1Ev
#           advancealtar::StageControl::~StageControl()
# range [0x0812fa06, 0x0812fa53]
0812fa06 +0x00:  push   %ebp
0812fa07 +0x01:  mov    %esp,%ebp
0812fa09 +0x03:  push   %esi
0812fa0a +0x04:  push   %ebx
0812fa0b +0x05:  sub    $0x10,%esp
0812fa0e +0x08:  mov    0x8(%ebp),%eax
0812fa11 +0x0b:  add    $0x98,%eax
0812fa16 +0x10:  mov    %eax,(%esp)
0812fa19 +0x13:  call   0812d062 <_ZN12advancealtar10CharacDataD1Ev>  ; advancealtar::CharacData::~CharacData()
0812fa1e +0x18:  jmp    0812fa3e <+0x38>
0812fa20 +0x1a:  mov    %edx,%ebx
0812fa22 +0x1c:  mov    %eax,%esi
0812fa24 +0x1e:  mov    0x8(%ebp),%eax
0812fa27 +0x21:  add    $0x4,%eax
0812fa2a +0x24:  mov    %eax,(%esp)
0812fa2d +0x27:  call   0812dd26 <_ZN12advancealtar9ProcStageD1Ev>  ; advancealtar::ProcStage::~ProcStage()
0812fa32 +0x2c:  mov    %esi,%eax
0812fa34 +0x2e:  mov    %ebx,%edx
0812fa36 +0x30:  mov    %eax,(%esp)
0812fa39 +0x33:  call   08ae3750 <_Unwind_Resume>
0812fa3e +0x38:  mov    0x8(%ebp),%eax
0812fa41 +0x3b:  add    $0x4,%eax
0812fa44 +0x3e:  mov    %eax,(%esp)
0812fa47 +0x41:  call   0812dd26 <_ZN12advancealtar9ProcStageD1Ev>  ; advancealtar::ProcStage::~ProcStage()
0812fa4c +0x46:  add    $0x10,%esp
0812fa4f +0x49:  pop    %ebx
0812fa50 +0x4a:  pop    %esi
0812fa51 +0x4b:  pop    %ebp
0812fa52 +0x4c:  ret
0812fa53 +0x4d:  nop
```

## 反编译 C

```c
// advancealtar::StageControl::~StageControl @ 0x812fa06

/* advancealtar::StageControl::~StageControl() */

void __thiscall advancealtar::StageControl::~StageControl(StageControl *this)

{
                    /* try { // try from 0812fa19 to 0812fa1d has its CatchHandler @ 0812fa20 */
  CharacData::~CharacData((CharacData *)(this + 0x98));
  ProcStage::~ProcStage((ProcStage *)(this + 4));
  return;
}
```

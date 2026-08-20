# StageControl

`_ZN12advancealtar12StageControlC1Ev`

`advancealtar::StageControl::StageControl()`

| 类 | 地址 |
|---|---|
| `advancealtar::StageControl` | `0x0812f9a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812f9a2  _ZN12advancealtar12StageControlC1Ev
#           advancealtar::StageControl::StageControl()
# range [0x0812f9a2, 0x0812fa05]
0812f9a2 +0x00:  push   %ebp
0812f9a3 +0x01:  mov    %esp,%ebp
0812f9a5 +0x03:  push   %esi
0812f9a6 +0x04:  push   %ebx
0812f9a7 +0x05:  sub    $0x10,%esp
0812f9aa +0x08:  mov    0x8(%ebp),%eax
0812f9ad +0x0b:  movl   $0xffffffff,(%eax)
0812f9b3 +0x11:  mov    0x8(%ebp),%eax
0812f9b6 +0x14:  lea    0x98(%eax),%edx
0812f9bc +0x1a:  mov    0x8(%ebp),%eax
0812f9bf +0x1d:  add    $0x4,%eax
0812f9c2 +0x20:  mov    %edx,0x4(%esp)
0812f9c6 +0x24:  mov    %eax,(%esp)
0812f9c9 +0x27:  call   0812dc18 <_ZN12advancealtar9ProcStageC1ERNS_10CharacDataE>  ; advancealtar::ProcStage::ProcStage(advancealtar::CharacData&)
0812f9ce +0x2c:  mov    0x8(%ebp),%eax
0812f9d1 +0x2f:  add    $0x98,%eax
0812f9d6 +0x34:  mov    %eax,(%esp)
0812f9d9 +0x37:  call   0812d024 <_ZN12advancealtar10CharacDataC1Ev>  ; advancealtar::CharacData::CharacData()
0812f9de +0x3c:  jmp    0812f9fe <+0x5c>
0812f9e0 +0x3e:  mov    %edx,%ebx
0812f9e2 +0x40:  mov    %eax,%esi
0812f9e4 +0x42:  mov    0x8(%ebp),%eax
0812f9e7 +0x45:  add    $0x4,%eax
0812f9ea +0x48:  mov    %eax,(%esp)
0812f9ed +0x4b:  call   0812dd26 <_ZN12advancealtar9ProcStageD1Ev>  ; advancealtar::ProcStage::~ProcStage()
0812f9f2 +0x50:  mov    %esi,%eax
0812f9f4 +0x52:  mov    %ebx,%edx
0812f9f6 +0x54:  mov    %eax,(%esp)
0812f9f9 +0x57:  call   08ae3750 <_Unwind_Resume>
0812f9fe +0x5c:  add    $0x10,%esp
0812fa01 +0x5f:  pop    %ebx
0812fa02 +0x60:  pop    %esi
0812fa03 +0x61:  pop    %ebp
0812fa04 +0x62:  ret
0812fa05 +0x63:  nop
```

## 反编译 C

```c
// advancealtar::StageControl::StageControl @ 0x812f9a2

/* advancealtar::StageControl::StageControl() */

void __thiscall advancealtar::StageControl::StageControl(StageControl *this)

{
  *(undefined4 *)this = 0xffffffff;
  ProcStage::ProcStage((ProcStage *)(this + 4),(CharacData *)(this + 0x98));
                    /* try { // try from 0812f9d9 to 0812f9dd has its CatchHandler @ 0812f9e0 */
  CharacData::CharacData((CharacData *)(this + 0x98));
  return;
}
```

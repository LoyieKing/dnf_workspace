# Reset

`_ZN8WarField5ResetEv`

`WarField::Reset()`

| 类 | 地址 |
|---|---|
| `WarField` | `0x086b8a14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b8a14  _ZN8WarField5ResetEv
#           WarField::Reset()
# range [0x086b8a14, 0x086b8a37]
086b8a14 +0x00:  push   %ebp
086b8a15 +0x01:  mov    %esp,%ebp
086b8a17 +0x03:  sub    $0x18,%esp
086b8a1a +0x06:  mov    0x8(%ebp),%eax
086b8a1d +0x09:  add    $0x8,%eax
086b8a20 +0x0c:  mov    %eax,(%esp)
086b8a23 +0x0f:  call   081514ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xde3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xde3
086b8a28 +0x14:  mov    0x8(%ebp),%eax
086b8a2b +0x17:  movl   $0x0,0xf4(%eax)
086b8a35 +0x21:  leave
086b8a36 +0x22:  ret
086b8a37 +0x23:  nop
```

## 反编译 C

```c
// WarField::Reset @ 0x86b8a14

/* WarField::Reset() */

void __thiscall WarField::Reset(WarField *this)

{
  MapInfo::Clear((MapInfo *)(this + 8));
  *(undefined4 *)(this + 0xf4) = 0;
  return;
}
```

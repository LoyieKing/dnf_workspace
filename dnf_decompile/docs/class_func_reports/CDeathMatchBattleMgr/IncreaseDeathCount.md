# IncreaseDeathCount

`_ZN20CDeathMatchBattleMgr18IncreaseDeathCountEi`

`CDeathMatchBattleMgr::IncreaseDeathCount(int)`

| 类 | 地址 |
|---|---|
| `CDeathMatchBattleMgr` | `0x085def34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085def34  _ZN20CDeathMatchBattleMgr18IncreaseDeathCountEi
#           CDeathMatchBattleMgr::IncreaseDeathCount(int)
# range [0x085def34, 0x085def5f]
085def34 +0x00:  push   %ebp
085def35 +0x01:  mov    %esp,%ebp
085def37 +0x03:  cmpl   $0x0,0xc(%ebp)
085def3b +0x07:  js     085def5d <+0x29>
085def3d +0x09:  cmpl   $0x7,0xc(%ebp)
085def41 +0x0d:  jg     085def5d <+0x29>
085def43 +0x0f:  mov    0xc(%ebp),%eax
085def46 +0x12:  mov    0x8(%ebp),%edx
085def49 +0x15:  lea    0x8(%eax),%ecx
085def4c +0x18:  mov    0x4(%edx,%ecx,4),%edx
085def50 +0x1c:  lea    0x1(%edx),%ecx
085def53 +0x1f:  mov    0x8(%ebp),%edx
085def56 +0x22:  add    $0x8,%eax
085def59 +0x25:  mov    %ecx,0x4(%edx,%eax,4)
085def5d +0x29:  pop    %ebp
085def5e +0x2a:  ret
085def5f +0x2b:  nop
```

## 反编译 C

```c
// CDeathMatchBattleMgr::IncreaseDeathCount @ 0x85def34

/* CDeathMatchBattleMgr::IncreaseDeathCount(int) */

void __thiscall CDeathMatchBattleMgr::IncreaseDeathCount(CDeathMatchBattleMgr *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < 8)) {
    *(int *)(this + (param_1 + 8) * 4 + 4) = *(int *)(this + (param_1 + 8) * 4 + 4) + 1;
  }
  return;
}
```

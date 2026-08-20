# GetData

`_ZNK13charac_expand8CDataMgr7GetDataE23ENUM_CHARAC_EXPAND_TYPE`

`charac_expand::CDataMgr::GetData(ENUM_CHARAC_EXPAND_TYPE) const`

| 类 | 地址 |
|---|---|
| `charac_expand::CDataMgr` | `0x0832ac94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832ac94  _ZNK13charac_expand8CDataMgr7GetDataE23ENUM_CHARAC_EXPAND_TYPE
#           charac_expand::CDataMgr::GetData(ENUM_CHARAC_EXPAND_TYPE) const
# range [0x0832ac94, 0x0832acb1]
0832ac94 +0x00:  push   %ebp
0832ac95 +0x01:  mov    %esp,%ebp
0832ac97 +0x03:  mov    0xc(%ebp),%eax
0832ac9a +0x06:  cmp    $0x13,%eax
0832ac9d +0x09:  jbe    0832aca6 <+0x12>
0832ac9f +0x0b:  mov    $0x0,%eax
0832aca4 +0x10:  jmp    0832acaf <+0x1b>
0832aca6 +0x12:  mov    0xc(%ebp),%edx
0832aca9 +0x15:  mov    0x8(%ebp),%eax
0832acac +0x18:  mov    (%eax,%edx,4),%eax
0832acaf +0x1b:  pop    %ebp
0832acb0 +0x1c:  ret
0832acb1 +0x1d:  nop
```

## 反编译 C

```c
// charac_expand::CDataMgr::GetData @ 0x832ac94

/* charac_expand::CDataMgr::GetData(ENUM_CHARAC_EXPAND_TYPE) const */

undefined4 __thiscall charac_expand::CDataMgr::GetData(CDataMgr *this,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 0x14) {
    uVar1 = *(undefined4 *)(this + param_2 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```

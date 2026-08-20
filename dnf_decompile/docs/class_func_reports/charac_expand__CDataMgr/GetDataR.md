# GetDataR

`_ZNK13charac_expand8CDataMgr8GetDataRE23ENUM_CHARAC_EXPAND_TYPE`

`charac_expand::CDataMgr::GetDataR(ENUM_CHARAC_EXPAND_TYPE) const`

| 类 | 地址 |
|---|---|
| `charac_expand::CDataMgr` | `0x0832acb2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832acb2  _ZNK13charac_expand8CDataMgr8GetDataRE23ENUM_CHARAC_EXPAND_TYPE
#           charac_expand::CDataMgr::GetDataR(ENUM_CHARAC_EXPAND_TYPE) const
# range [0x0832acb2, 0x0832accf]
0832acb2 +0x00:  push   %ebp
0832acb3 +0x01:  mov    %esp,%ebp
0832acb5 +0x03:  mov    0xc(%ebp),%eax
0832acb8 +0x06:  cmp    $0x13,%eax
0832acbb +0x09:  jbe    0832acc4 <+0x12>
0832acbd +0x0b:  mov    $0x0,%eax
0832acc2 +0x10:  jmp    0832accd <+0x1b>
0832acc4 +0x12:  mov    0xc(%ebp),%edx
0832acc7 +0x15:  mov    0x8(%ebp),%eax
0832acca +0x18:  mov    (%eax,%edx,4),%eax
0832accd +0x1b:  pop    %ebp
0832acce +0x1c:  ret
0832accf +0x1d:  nop
```

## 反编译 C

```c
// charac_expand::CDataMgr::GetDataR @ 0x832acb2

/* charac_expand::CDataMgr::GetDataR(ENUM_CHARAC_EXPAND_TYPE) const */

undefined4 __thiscall charac_expand::CDataMgr::GetDataR(CDataMgr *this,uint param_2)

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

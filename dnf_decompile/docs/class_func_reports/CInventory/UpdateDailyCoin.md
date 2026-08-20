# UpdateDailyCoin

`_ZN10CInventory15UpdateDailyCoinEi`

`CInventory::UpdateDailyCoin(int)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084ff8b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ff8b4  _ZN10CInventory15UpdateDailyCoinEi
#           CInventory::UpdateDailyCoin(int)
# range [0x084ff8b4, 0x084ff8dd]
084ff8b4 +0x00:  push   %ebp
084ff8b5 +0x01:  mov    %esp,%ebp
084ff8b7 +0x03:  sub    $0x18,%esp
084ff8ba +0x06:  mov    0x8(%ebp),%eax
084ff8bd +0x09:  mov    0x8(%eax),%eax
084ff8c0 +0x0c:  cmp    0xc(%ebp),%eax
084ff8c3 +0x0f:  jge    084ff8db <+0x27>
084ff8c5 +0x11:  mov    0xc(%ebp),%edx
084ff8c8 +0x14:  mov    0x8(%ebp),%eax
084ff8cb +0x17:  mov    %edx,0x8(%eax)
084ff8ce +0x1a:  mov    0x8(%ebp),%eax
084ff8d1 +0x1d:  mov    (%eax),%eax
084ff8d3 +0x1f:  mov    %eax,(%esp)
084ff8d6 +0x22:  call   080da2ac <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x449>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x449
084ff8db +0x27:  leave
084ff8dc +0x28:  ret
084ff8dd +0x29:  nop
```

## 反编译 C

```c
// CInventory::UpdateDailyCoin @ 0x84ff8b4

/* CInventory::UpdateDailyCoin(int) */

void __thiscall CInventory::UpdateDailyCoin(CInventory *this,int param_1)

{
  if (*(int *)(this + 8) < param_1) {
    *(int *)(this + 8) = param_1;
    CUserCharacInfo::enableSaveInven(*(CUserCharacInfo **)this);
  }
  return;
}
```

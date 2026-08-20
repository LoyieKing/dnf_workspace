# WriteCreatureLog

`_ZNK10CInventory16WriteCreatureLogE10INVEN_TYPEiiii14eItemAddReason`

`CInventory::WriteCreatureLog(INVEN_TYPE, int, int, int, int, eItemAddReason) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850a4b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850a4b0  _ZNK10CInventory16WriteCreatureLogE10INVEN_TYPEiiii14eItemAddReason
#           CInventory::WriteCreatureLog(INVEN_TYPE, int, int, int, int, eItemAddReason) const
# range [0x0850a4b0, 0x0850a52b]
0850a4b0 +0x00:  push   %ebp
0850a4b1 +0x01:  mov    %esp,%ebp
0850a4b3 +0x03:  sub    $0x28,%esp
0850a4b6 +0x06:  mov    0x8(%ebp),%eax
0850a4b9 +0x09:  mov    (%eax),%eax
0850a4bb +0x0b:  test   %eax,%eax
0850a4bd +0x0d:  je     0850a4fe <+0x4e>
0850a4bf +0x0f:  mov    0x8(%ebp),%eax
0850a4c2 +0x12:  mov    (%eax),%eax
0850a4c4 +0x14:  lea    0x79700(%eax),%edx
0850a4ca +0x1a:  mov    0x20(%ebp),%eax
0850a4cd +0x1d:  mov    %eax,0x18(%esp)
0850a4d1 +0x21:  mov    0x1c(%ebp),%eax
0850a4d4 +0x24:  mov    %eax,0x14(%esp)
0850a4d8 +0x28:  mov    0x18(%ebp),%eax
0850a4db +0x2b:  mov    %eax,0x10(%esp)
0850a4df +0x2f:  mov    0x14(%ebp),%eax
0850a4e2 +0x32:  mov    %eax,0xc(%esp)
0850a4e6 +0x36:  mov    0x10(%ebp),%eax
0850a4e9 +0x39:  mov    %eax,0x8(%esp)
0850a4ed +0x3d:  mov    0xc(%ebp),%eax
0850a4f0 +0x40:  mov    %eax,0x4(%esp)
0850a4f4 +0x44:  mov    %edx,(%esp)
0850a4f7 +0x47:  call   08684e3c <_ZN15cUserHistoryLog15CreatureItemAddE10INVEN_TYPEiiii14eItemAddReason>  ; cUserHistoryLog::CreatureItemAdd(INVEN_TYPE, int, int, int, int, eItemAddReason)
0850a4fc +0x4c:  jmp    0850a52a <+0x7a>
0850a4fe +0x4e:  movl   $"History ERROR, m_pParent NULL, ItemAdd ",0x10(%esp)
0850a506 +0x56:  movl   $0x24ce,0xc(%esp)
0850a50e +0x5e:  movl   $&_ZZNK10CInventory16WriteCreatureLogE10INVEN_TYPEiiii14eItemAddReasonE19__PRETTY_FUNCTION__,0x8(%esp)
0850a516 +0x66:  movl   $"inventory.cpp",0x4(%esp)
0850a51e +0x6e:  movl   $0x1,(%esp)
0850a525 +0x75:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0850a52a +0x7a:  leave
0850a52b +0x7b:  ret
```

## 反编译 C

```c
// CInventory::WriteCreatureLog @ 0x850a4b0

/* CInventory::WriteCreatureLog(INVEN_TYPE, int, int, int, int, eItemAddReason) const */

void __thiscall
CInventory::WriteCreatureLog
          (CInventory *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  if (*(int *)this == 0) {
    LogManager::logFormat
              (1,"inventory.cpp",
               "void CInventory::WriteCreatureLog(INVEN_TYPE, int, int, int, int, eItemAddReason) const"
               ,0x24ce,"History ERROR, m_pParent NULL, ItemAdd ");
  }
  else {
    cUserHistoryLog::CreatureItemAdd
              ((cUserHistoryLog *)(*(int *)this + 0x79700),param_2,param_3,param_4,param_5,param_6,
               param_7);
  }
  return;
}
```

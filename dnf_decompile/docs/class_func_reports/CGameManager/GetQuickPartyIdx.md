# GetQuickPartyIdx

`_ZN12CGameManager16GetQuickPartyIdxEPN10QuickParty11CQuickPartyE`

`CGameManager::GetQuickPartyIdx(QuickParty::CQuickParty*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082955e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082955e2  _ZN12CGameManager16GetQuickPartyIdxEPN10QuickParty11CQuickPartyE
#           CGameManager::GetQuickPartyIdx(QuickParty::CQuickParty*)
# range [0x082955e2, 0x08295607]
082955e2 +0x00:  push   %ebp
082955e3 +0x01:  mov    %esp,%ebp
082955e5 +0x03:  sub    $0x28,%esp
082955e8 +0x06:  mov    0x8(%ebp),%eax
082955eb +0x09:  lea    0x1cc(%eax),%edx
082955f1 +0x0f:  mov    0xc(%ebp),%eax
082955f4 +0x12:  mov    %eax,0x4(%esp)
082955f8 +0x16:  mov    %edx,(%esp)
082955fb +0x19:  call   082b18cc <_GLOBAL__I__ZN4CLog5this_E+0xdcf3>  ; global constructors keyed to CLog::this_+0xdcf3
08295600 +0x1e:  mov    %eax,-0xc(%ebp)
08295603 +0x21:  mov    -0xc(%ebp),%eax
08295606 +0x24:  leave
08295607 +0x25:  ret
```

## 反编译 C

```c
// CGameManager::GetQuickPartyIdx @ 0x82955e2

/* CGameManager::GetQuickPartyIdx(QuickParty::CQuickParty*) */

undefined4 __thiscall CGameManager::GetQuickPartyIdx(CGameManager *this,CQuickParty *param_1)

{
  undefined4 uVar1;
  
  uVar1 = StaticPool<QuickParty::CQuickParty,300>::GetIndex
                    ((StaticPool<QuickParty::CQuickParty,300> *)(this + 0x1cc),param_1);
  return uVar1;
}
```

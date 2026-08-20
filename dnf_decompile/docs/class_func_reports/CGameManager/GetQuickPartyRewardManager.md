# GetQuickPartyRewardManager

`_ZN12CGameManager26GetQuickPartyRewardManagerEv`

`CGameManager::GetQuickPartyRewardManager()`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08298e24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08298e24  _ZN12CGameManager26GetQuickPartyRewardManagerEv
#           CGameManager::GetQuickPartyRewardManager()
# range [0x08298e24, 0x08298e87]
08298e24 +0x00:  push   %ebp
08298e25 +0x01:  mov    %esp,%ebp
08298e27 +0x03:  push   %edi
08298e28 +0x04:  push   %esi
08298e29 +0x05:  push   %ebx
08298e2a +0x06:  sub    $0x1c,%esp
08298e2d +0x09:  mov    0x8(%ebp),%eax
08298e30 +0x0c:  mov    0x300(%eax),%eax
08298e36 +0x12:  test   %eax,%eax
08298e38 +0x14:  jne    08298e77 <+0x53>
08298e3a +0x16:  movl   $0x228,(%esp)
08298e41 +0x1d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08298e46 +0x22:  mov    %eax,%ebx
08298e48 +0x24:  mov    %ebx,%eax
08298e4a +0x26:  mov    %eax,(%esp)
08298e4d +0x29:  call   0826d688 <_ZN10QuickParty24CQuickPartyRewardManagerC1Ev>  ; QuickParty::CQuickPartyRewardManager::CQuickPartyRewardManager()
08298e52 +0x2e:  jmp    08298e6c <+0x48>
08298e54 +0x30:  mov    %edx,%esi
08298e56 +0x32:  mov    %eax,%edi
08298e58 +0x34:  mov    %ebx,(%esp)
08298e5b +0x37:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08298e60 +0x3c:  mov    %edi,%eax
08298e62 +0x3e:  mov    %esi,%edx
08298e64 +0x40:  mov    %eax,(%esp)
08298e67 +0x43:  call   08ae3750 <_Unwind_Resume>
08298e6c +0x48:  mov    %ebx,%edx
08298e6e +0x4a:  mov    0x8(%ebp),%eax
08298e71 +0x4d:  mov    %edx,0x300(%eax)
08298e77 +0x53:  mov    0x8(%ebp),%eax
08298e7a +0x56:  mov    0x300(%eax),%eax
08298e80 +0x5c:  add    $0x1c,%esp
08298e83 +0x5f:  pop    %ebx
08298e84 +0x60:  pop    %esi
08298e85 +0x61:  pop    %edi
08298e86 +0x62:  pop    %ebp
08298e87 +0x63:  ret
```

## 反编译 C

```c
// CGameManager::GetQuickPartyRewardManager @ 0x8298e24

/* CGameManager::GetQuickPartyRewardManager() */

undefined4 __thiscall CGameManager::GetQuickPartyRewardManager(CGameManager *this)

{
  CQuickPartyRewardManager *this_00;
  
  if (*(int *)(this + 0x300) == 0) {
    this_00 = operator_new(0x228);
                    /* try { // try from 08298e4d to 08298e51 has its CatchHandler @ 08298e54 */
    QuickParty::CQuickPartyRewardManager::CQuickPartyRewardManager(this_00);
    *(CQuickPartyRewardManager **)(this + 0x300) = this_00;
  }
  return *(undefined4 *)(this + 0x300);
}
```

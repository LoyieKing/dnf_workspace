# GetQuickPartySystemManager

`_ZN12CGameManager26GetQuickPartySystemManagerEv`

`CGameManager::GetQuickPartySystemManager()`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08298dc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08298dc0  _ZN12CGameManager26GetQuickPartySystemManagerEv
#           CGameManager::GetQuickPartySystemManager()
# range [0x08298dc0, 0x08298e23]
08298dc0 +0x00:  push   %ebp
08298dc1 +0x01:  mov    %esp,%ebp
08298dc3 +0x03:  push   %edi
08298dc4 +0x04:  push   %esi
08298dc5 +0x05:  push   %ebx
08298dc6 +0x06:  sub    $0x1c,%esp
08298dc9 +0x09:  mov    0x8(%ebp),%eax
08298dcc +0x0c:  mov    0x2fc(%eax),%eax
08298dd2 +0x12:  test   %eax,%eax
08298dd4 +0x14:  jne    08298e13 <+0x53>
08298dd6 +0x16:  movl   $0x18,(%esp)
08298ddd +0x1d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08298de2 +0x22:  mov    %eax,%ebx
08298de4 +0x24:  mov    %ebx,%eax
08298de6 +0x26:  mov    %eax,(%esp)
08298de9 +0x29:  call   08269bb6 <_ZN10QuickParty24CQuickPartySystemManagerC1Ev>  ; QuickParty::CQuickPartySystemManager::CQuickPartySystemManager()
08298dee +0x2e:  jmp    08298e08 <+0x48>
08298df0 +0x30:  mov    %edx,%esi
08298df2 +0x32:  mov    %eax,%edi
08298df4 +0x34:  mov    %ebx,(%esp)
08298df7 +0x37:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08298dfc +0x3c:  mov    %edi,%eax
08298dfe +0x3e:  mov    %esi,%edx
08298e00 +0x40:  mov    %eax,(%esp)
08298e03 +0x43:  call   08ae3750 <_Unwind_Resume>
08298e08 +0x48:  mov    %ebx,%edx
08298e0a +0x4a:  mov    0x8(%ebp),%eax
08298e0d +0x4d:  mov    %edx,0x2fc(%eax)
08298e13 +0x53:  mov    0x8(%ebp),%eax
08298e16 +0x56:  mov    0x2fc(%eax),%eax
08298e1c +0x5c:  add    $0x1c,%esp
08298e1f +0x5f:  pop    %ebx
08298e20 +0x60:  pop    %esi
08298e21 +0x61:  pop    %edi
08298e22 +0x62:  pop    %ebp
08298e23 +0x63:  ret
```

## 反编译 C

```c
// CGameManager::GetQuickPartySystemManager @ 0x8298dc0

/* CGameManager::GetQuickPartySystemManager() */

undefined4 __thiscall CGameManager::GetQuickPartySystemManager(CGameManager *this)

{
  CQuickPartySystemManager *this_00;
  
  if (*(int *)(this + 0x2fc) == 0) {
    this_00 = operator_new(0x18);
                    /* try { // try from 08298de9 to 08298ded has its CatchHandler @ 08298df0 */
    QuickParty::CQuickPartySystemManager::CQuickPartySystemManager(this_00);
    *(CQuickPartySystemManager **)(this + 0x2fc) = this_00;
  }
  return *(undefined4 *)(this + 0x2fc);
}
```

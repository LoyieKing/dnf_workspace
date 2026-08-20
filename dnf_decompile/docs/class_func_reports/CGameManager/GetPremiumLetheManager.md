# GetPremiumLetheManager

`_ZN12CGameManager22GetPremiumLetheManagerEv`

`CGameManager::GetPremiumLetheManager()`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08298e88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08298e88  _ZN12CGameManager22GetPremiumLetheManagerEv
#           CGameManager::GetPremiumLetheManager()
# range [0x08298e88, 0x08298eeb]
08298e88 +0x00:  push   %ebp
08298e89 +0x01:  mov    %esp,%ebp
08298e8b +0x03:  push   %edi
08298e8c +0x04:  push   %esi
08298e8d +0x05:  push   %ebx
08298e8e +0x06:  sub    $0x1c,%esp
08298e91 +0x09:  mov    0x8(%ebp),%eax
08298e94 +0x0c:  mov    0x304(%eax),%eax
08298e9a +0x12:  test   %eax,%eax
08298e9c +0x14:  jne    08298edb <+0x53>
08298e9e +0x16:  movl   $0x1,(%esp)
08298ea5 +0x1d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08298eaa +0x22:  mov    %eax,%ebx
08298eac +0x24:  mov    %ebx,%eax
08298eae +0x26:  mov    %eax,(%esp)
08298eb1 +0x29:  call   085c3d08 <_ZN20CPremiumLetheManagerC1Ev>  ; CPremiumLetheManager::CPremiumLetheManager()
08298eb6 +0x2e:  jmp    08298ed0 <+0x48>
08298eb8 +0x30:  mov    %edx,%esi
08298eba +0x32:  mov    %eax,%edi
08298ebc +0x34:  mov    %ebx,(%esp)
08298ebf +0x37:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08298ec4 +0x3c:  mov    %edi,%eax
08298ec6 +0x3e:  mov    %esi,%edx
08298ec8 +0x40:  mov    %eax,(%esp)
08298ecb +0x43:  call   08ae3750 <_Unwind_Resume>
08298ed0 +0x48:  mov    %ebx,%edx
08298ed2 +0x4a:  mov    0x8(%ebp),%eax
08298ed5 +0x4d:  mov    %edx,0x304(%eax)
08298edb +0x53:  mov    0x8(%ebp),%eax
08298ede +0x56:  mov    0x304(%eax),%eax
08298ee4 +0x5c:  add    $0x1c,%esp
08298ee7 +0x5f:  pop    %ebx
08298ee8 +0x60:  pop    %esi
08298ee9 +0x61:  pop    %edi
08298eea +0x62:  pop    %ebp
08298eeb +0x63:  ret
```

## 反编译 C

```c
// CGameManager::GetPremiumLetheManager @ 0x8298e88

/* CGameManager::GetPremiumLetheManager() */

undefined4 __thiscall CGameManager::GetPremiumLetheManager(CGameManager *this)

{
  CPremiumLetheManager *this_00;
  
  if (*(int *)(this + 0x304) == 0) {
    this_00 = operator_new(1);
                    /* try { // try from 08298eb1 to 08298eb5 has its CatchHandler @ 08298eb8 */
    CPremiumLetheManager::CPremiumLetheManager(this_00);
    *(CPremiumLetheManager **)(this + 0x304) = this_00;
  }
  return *(undefined4 *)(this + 0x304);
}
```

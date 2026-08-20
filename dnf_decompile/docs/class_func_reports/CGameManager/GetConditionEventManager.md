# GetConditionEventManager

`_ZN12CGameManager24GetConditionEventManagerEv`

`CGameManager::GetConditionEventManager()`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08298f60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08298f60  _ZN12CGameManager24GetConditionEventManagerEv
#           CGameManager::GetConditionEventManager()
# range [0x08298f60, 0x08298fc3]
08298f60 +0x00:  push   %ebp
08298f61 +0x01:  mov    %esp,%ebp
08298f63 +0x03:  push   %edi
08298f64 +0x04:  push   %esi
08298f65 +0x05:  push   %ebx
08298f66 +0x06:  sub    $0x1c,%esp
08298f69 +0x09:  mov    0x8(%ebp),%eax
08298f6c +0x0c:  mov    0x30c(%eax),%eax
08298f72 +0x12:  test   %eax,%eax
08298f74 +0x14:  jne    08298fb3 <+0x53>
08298f76 +0x16:  movl   $0x1,(%esp)
08298f7d +0x1d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08298f82 +0x22:  mov    %eax,%ebx
08298f84 +0x24:  mov    %ebx,%eax
08298f86 +0x26:  mov    %eax,(%esp)
08298f89 +0x29:  call   08334844 <_ZN22CConditionEventManagerC1Ev>  ; CConditionEventManager::CConditionEventManager()
08298f8e +0x2e:  jmp    08298fa8 <+0x48>
08298f90 +0x30:  mov    %edx,%esi
08298f92 +0x32:  mov    %eax,%edi
08298f94 +0x34:  mov    %ebx,(%esp)
08298f97 +0x37:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08298f9c +0x3c:  mov    %edi,%eax
08298f9e +0x3e:  mov    %esi,%edx
08298fa0 +0x40:  mov    %eax,(%esp)
08298fa3 +0x43:  call   08ae3750 <_Unwind_Resume>
08298fa8 +0x48:  mov    %ebx,%edx
08298faa +0x4a:  mov    0x8(%ebp),%eax
08298fad +0x4d:  mov    %edx,0x30c(%eax)
08298fb3 +0x53:  mov    0x8(%ebp),%eax
08298fb6 +0x56:  mov    0x30c(%eax),%eax
08298fbc +0x5c:  add    $0x1c,%esp
08298fbf +0x5f:  pop    %ebx
08298fc0 +0x60:  pop    %esi
08298fc1 +0x61:  pop    %edi
08298fc2 +0x62:  pop    %ebp
08298fc3 +0x63:  ret
```

## 反编译 C

```c
// CGameManager::GetConditionEventManager @ 0x8298f60

/* CGameManager::GetConditionEventManager() */

undefined4 __thiscall CGameManager::GetConditionEventManager(CGameManager *this)

{
  CConditionEventManager *this_00;
  
  if (*(int *)(this + 0x30c) == 0) {
    this_00 = operator_new(1);
                    /* try { // try from 08298f89 to 08298f8d has its CatchHandler @ 08298f90 */
    CConditionEventManager::CConditionEventManager(this_00);
    *(CConditionEventManager **)(this + 0x30c) = this_00;
  }
  return *(undefined4 *)(this + 0x30c);
}
```

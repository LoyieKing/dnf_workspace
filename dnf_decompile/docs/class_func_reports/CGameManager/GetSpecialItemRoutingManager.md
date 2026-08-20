# GetSpecialItemRoutingManager

`_ZN12CGameManager28GetSpecialItemRoutingManagerEv`

`CGameManager::GetSpecialItemRoutingManager()`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08298fc4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08298fc4  _ZN12CGameManager28GetSpecialItemRoutingManagerEv
#           CGameManager::GetSpecialItemRoutingManager()
# range [0x08298fc4, 0x08299027]
08298fc4 +0x00:  push   %ebp
08298fc5 +0x01:  mov    %esp,%ebp
08298fc7 +0x03:  push   %edi
08298fc8 +0x04:  push   %esi
08298fc9 +0x05:  push   %ebx
08298fca +0x06:  sub    $0x1c,%esp
08298fcd +0x09:  mov    0x8(%ebp),%eax
08298fd0 +0x0c:  mov    0x310(%eax),%eax
08298fd6 +0x12:  test   %eax,%eax
08298fd8 +0x14:  jne    08299017 <+0x53>
08298fda +0x16:  movl   $0x1,(%esp)
08298fe1 +0x1d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08298fe6 +0x22:  mov    %eax,%ebx
08298fe8 +0x24:  mov    %ebx,%eax
08298fea +0x26:  mov    %eax,(%esp)
08298fed +0x29:  call   0860a9c8 <_ZN26CSpecialItemRoutingManagerC1Ev>  ; CSpecialItemRoutingManager::CSpecialItemRoutingManager()
08298ff2 +0x2e:  jmp    0829900c <+0x48>
08298ff4 +0x30:  mov    %edx,%esi
08298ff6 +0x32:  mov    %eax,%edi
08298ff8 +0x34:  mov    %ebx,(%esp)
08298ffb +0x37:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08299000 +0x3c:  mov    %edi,%eax
08299002 +0x3e:  mov    %esi,%edx
08299004 +0x40:  mov    %eax,(%esp)
08299007 +0x43:  call   08ae3750 <_Unwind_Resume>
0829900c +0x48:  mov    %ebx,%edx
0829900e +0x4a:  mov    0x8(%ebp),%eax
08299011 +0x4d:  mov    %edx,0x310(%eax)
08299017 +0x53:  mov    0x8(%ebp),%eax
0829901a +0x56:  mov    0x310(%eax),%eax
08299020 +0x5c:  add    $0x1c,%esp
08299023 +0x5f:  pop    %ebx
08299024 +0x60:  pop    %esi
08299025 +0x61:  pop    %edi
08299026 +0x62:  pop    %ebp
08299027 +0x63:  ret
```

## 反编译 C

```c
// CGameManager::GetSpecialItemRoutingManager @ 0x8298fc4

/* CGameManager::GetSpecialItemRoutingManager() */

undefined4 __thiscall CGameManager::GetSpecialItemRoutingManager(CGameManager *this)

{
  CSpecialItemRoutingManager *this_00;
  
  if (*(int *)(this + 0x310) == 0) {
    this_00 = operator_new(1);
                    /* try { // try from 08298fed to 08298ff1 has its CatchHandler @ 08298ff4 */
    CSpecialItemRoutingManager::CSpecialItemRoutingManager(this_00);
    *(CSpecialItemRoutingManager **)(this + 0x310) = this_00;
  }
  return *(undefined4 *)(this + 0x310);
}
```

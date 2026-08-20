# GetSharedServerMessageManager

`_ZN12CGameManager29GetSharedServerMessageManagerEv`

`CGameManager::GetSharedServerMessageManager()`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08298eec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08298eec  _ZN12CGameManager29GetSharedServerMessageManagerEv
#           CGameManager::GetSharedServerMessageManager()
# range [0x08298eec, 0x08298f5f]
08298eec +0x00:  push   %ebp
08298eed +0x01:  mov    %esp,%ebp
08298eef +0x03:  push   %edi
08298ef0 +0x04:  push   %esi
08298ef1 +0x05:  push   %ebx
08298ef2 +0x06:  sub    $0x1c,%esp
08298ef5 +0x09:  mov    0x8(%ebp),%eax
08298ef8 +0x0c:  mov    0x308(%eax),%eax
08298efe +0x12:  test   %eax,%eax
08298f00 +0x14:  jne    08298f4e <+0x62>
08298f02 +0x16:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08298f07 +0x1b:  lea    0x7d8(%eax),%esi
08298f0d +0x21:  movl   $0x18,(%esp)
08298f14 +0x28:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08298f19 +0x2d:  mov    %eax,%ebx
08298f1b +0x2f:  mov    %ebx,%eax
08298f1d +0x31:  mov    %esi,0x4(%esp)
08298f21 +0x35:  mov    %eax,(%esp)
08298f24 +0x38:  call   0860080e <_ZN27CSharedServerMessageManagerC1EP25stSharedServerMessageInfo>  ; CSharedServerMessageManager::CSharedServerMessageManager(stSharedServerMessageInfo*)
08298f29 +0x3d:  jmp    08298f43 <+0x57>
08298f2b +0x3f:  mov    %edx,%esi
08298f2d +0x41:  mov    %eax,%edi
08298f2f +0x43:  mov    %ebx,(%esp)
08298f32 +0x46:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08298f37 +0x4b:  mov    %edi,%eax
08298f39 +0x4d:  mov    %esi,%edx
08298f3b +0x4f:  mov    %eax,(%esp)
08298f3e +0x52:  call   08ae3750 <_Unwind_Resume>
08298f43 +0x57:  mov    %ebx,%edx
08298f45 +0x59:  mov    0x8(%ebp),%eax
08298f48 +0x5c:  mov    %edx,0x308(%eax)
08298f4e +0x62:  mov    0x8(%ebp),%eax
08298f51 +0x65:  mov    0x308(%eax),%eax
08298f57 +0x6b:  add    $0x1c,%esp
08298f5a +0x6e:  pop    %ebx
08298f5b +0x6f:  pop    %esi
08298f5c +0x70:  pop    %edi
08298f5d +0x71:  pop    %ebp
08298f5e +0x72:  ret
08298f5f +0x73:  nop
```

## 反编译 C

```c
// CGameManager::GetSharedServerMessageManager @ 0x8298eec

/* CGameManager::GetSharedServerMessageManager() */

undefined4 __thiscall CGameManager::GetSharedServerMessageManager(CGameManager *this)

{
  int iVar1;
  CSharedServerMessageManager *this_00;
  
  if (*(int *)(this + 0x308) == 0) {
    iVar1 = G_CDataManager();
    this_00 = operator_new(0x18);
                    /* try { // try from 08298f24 to 08298f28 has its CatchHandler @ 08298f2b */
    CSharedServerMessageManager::CSharedServerMessageManager
              (this_00,(stSharedServerMessageInfo *)(iVar1 + 0x7d8));
    *(CSharedServerMessageManager **)(this + 0x308) = this_00;
  }
  return *(undefined4 *)(this + 0x308);
}
```

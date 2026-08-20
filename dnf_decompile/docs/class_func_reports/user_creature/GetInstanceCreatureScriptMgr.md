# GetInstanceCreatureScriptMgr

`_ZN13user_creature28GetInstanceCreatureScriptMgrEv`

`user_creature::GetInstanceCreatureScriptMgr()`

| 类 | 地址 |
|---|---|
| `user_creature` | `0x08336bd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08336bd0  _ZN13user_creature28GetInstanceCreatureScriptMgrEv
#           user_creature::GetInstanceCreatureScriptMgr()
# range [0x08336bd0, 0x08336c62]
08336bd0 +0x00:  push   %ebp
08336bd1 +0x01:  mov    %esp,%ebp
08336bd3 +0x03:  push   %edi
08336bd4 +0x04:  push   %esi
08336bd5 +0x05:  push   %ebx
08336bd6 +0x06:  sub    $0x1c,%esp
08336bd9 +0x09:  mov    $&_ZGVZN13user_creature28GetInstanceCreatureScriptMgrEvE8instance,%eax
08336bde +0x0e:  movzbl (%eax),%eax
08336be1 +0x11:  test   %al,%al
08336be3 +0x13:  jne    08336c56 <+0x86>
08336be5 +0x15:  movl   $&_ZGVZN13user_creature28GetInstanceCreatureScriptMgrEvE8instance,(%esp)
08336bec +0x1c:  call   08725330 <__cxa_guard_acquire>
08336bf1 +0x21:  test   %eax,%eax
08336bf3 +0x23:  setne  %al
08336bf6 +0x26:  test   %al,%al
08336bf8 +0x28:  je     08336c56 <+0x86>
08336bfa +0x2a:  mov    $0x0,%ebx
08336bff +0x2f:  movl   $&_ZZN13user_creature28GetInstanceCreatureScriptMgrEvE8instance,(%esp)
08336c06 +0x36:  call   0833cb60 <_ZN13user_creature18CCreatureScriptMgrC1Ev>  ; user_creature::CCreatureScriptMgr::CCreatureScriptMgr()
08336c0b +0x3b:  movl   $&_ZGVZN13user_creature28GetInstanceCreatureScriptMgrEvE8instance,(%esp)
08336c12 +0x42:  call   08725250 <__cxa_guard_release>
08336c17 +0x47:  mov    $&_ZN13user_creature18CCreatureScriptMgrD1Ev,%eax
08336c1c +0x4c:  movl   $&__dso_handle,0x8(%esp)
08336c24 +0x54:  movl   $&_ZZN13user_creature28GetInstanceCreatureScriptMgrEvE8instance,0x4(%esp)
08336c2c +0x5c:  mov    %eax,(%esp)
08336c2f +0x5f:  call   0807ddd0 <_init+0x6c8>
08336c34 +0x64:  jmp    08336c56 <+0x86>
08336c36 +0x66:  mov    %edx,%esi
08336c38 +0x68:  mov    %eax,%edi
08336c3a +0x6a:  test   %bl,%bl
08336c3c +0x6c:  jne    08336c4a <+0x7a>
08336c3e +0x6e:  movl   $&_ZGVZN13user_creature28GetInstanceCreatureScriptMgrEvE8instance,(%esp)
08336c45 +0x75:  call   087252c0 <__cxa_guard_abort>
08336c4a +0x7a:  mov    %edi,%eax
08336c4c +0x7c:  mov    %esi,%edx
08336c4e +0x7e:  mov    %eax,(%esp)
08336c51 +0x81:  call   08ae3750 <_Unwind_Resume>
08336c56 +0x86:  mov    $&_ZZN13user_creature28GetInstanceCreatureScriptMgrEvE8instance,%eax
08336c5b +0x8b:  add    $0x1c,%esp
08336c5e +0x8e:  pop    %ebx
08336c5f +0x8f:  pop    %esi
08336c60 +0x90:  pop    %edi
08336c61 +0x91:  pop    %ebp
08336c62 +0x92:  ret
```

## 反编译 C

```c
// user_creature::GetInstanceCreatureScriptMgr @ 0x8336bd0

/* user_creature::GetInstanceCreatureScriptMgr() */

undefined1 * user_creature::GetInstanceCreatureScriptMgr(void)

{
  int iVar1;
  
  if (GetInstanceCreatureScriptMgr()::instance == '\0') {
    iVar1 = __cxa_guard_acquire(&GetInstanceCreatureScriptMgr()::instance);
    if (iVar1 != 0) {
                    /* try { // try from 08336c06 to 08336c0a has its CatchHandler @ 08336c36 */
      CCreatureScriptMgr::CCreatureScriptMgr
                ((CCreatureScriptMgr *)GetInstanceCreatureScriptMgr()::instance);
      __cxa_guard_release(&GetInstanceCreatureScriptMgr()::instance);
      __cxa_atexit(CCreatureScriptMgr::~CCreatureScriptMgr,GetInstanceCreatureScriptMgr()::instance,
                   &__dso_handle);
    }
  }
  return GetInstanceCreatureScriptMgr()::instance;
}
```

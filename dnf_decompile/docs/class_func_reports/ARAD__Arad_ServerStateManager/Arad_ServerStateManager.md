# Arad_ServerStateManager

`_ZN4ARAD23Arad_ServerStateManagerC1Ev`

`ARAD::Arad_ServerStateManager::Arad_ServerStateManager()`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_ServerStateManager` | `0x081a922c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a922c  _ZN4ARAD23Arad_ServerStateManagerC1Ev
#           ARAD::Arad_ServerStateManager::Arad_ServerStateManager()
# range [0x081a922c, 0x081a927d]
081a922c +0x00:  push   %ebp
081a922d +0x01:  mov    %esp,%ebp
081a922f +0x03:  push   %esi
081a9230 +0x04:  push   %ebx
081a9231 +0x05:  sub    $0x10,%esp
081a9234 +0x08:  mov    0x8(%ebp),%eax
081a9237 +0x0b:  movb   $0x0,(%eax)
081a923a +0x0e:  mov    0x8(%ebp),%eax
081a923d +0x11:  add    $0x4,%eax
081a9240 +0x14:  mov    %eax,(%esp)
081a9243 +0x17:  call   080cb412 <_GLOBAL__I__ZN10BingoEventC2Ev+0x25f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x25f
081a9248 +0x1c:  mov    0x8(%ebp),%eax
081a924b +0x1f:  add    $0x1c,%eax
081a924e +0x22:  mov    %eax,(%esp)
081a9251 +0x25:  call   081a9e06 <_GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev+0x101>  ; global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()+0x101
081a9256 +0x2a:  jmp    081a9276 <+0x4a>
081a9258 +0x2c:  mov    %edx,%ebx
081a925a +0x2e:  mov    %eax,%esi
081a925c +0x30:  mov    0x8(%ebp),%eax
081a925f +0x33:  add    $0x4,%eax
081a9262 +0x36:  mov    %eax,(%esp)
081a9265 +0x39:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
081a926a +0x3e:  mov    %esi,%eax
081a926c +0x40:  mov    %ebx,%edx
081a926e +0x42:  mov    %eax,(%esp)
081a9271 +0x45:  call   08ae3750 <_Unwind_Resume>
081a9276 +0x4a:  add    $0x10,%esp
081a9279 +0x4d:  pop    %ebx
081a927a +0x4e:  pop    %esi
081a927b +0x4f:  pop    %ebp
081a927c +0x50:  ret
081a927d +0x51:  nop
```

## 反编译 C

```c
// ARAD::Arad_ServerStateManager::Arad_ServerStateManager @ 0x81a922c

/* ARAD::Arad_ServerStateManager::Arad_ServerStateManager() */

void __thiscall
ARAD::Arad_ServerStateManager::Arad_ServerStateManager(Arad_ServerStateManager *this)

{
  *this = (Arad_ServerStateManager)0x0;
  Mutex::Mutex((Mutex *)(this + 4));
                    /* try { // try from 081a9251 to 081a9255 has its CatchHandler @ 081a9258 */
  std::
  map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
  ::map((map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
         *)(this + 0x1c));
  return;
}
```

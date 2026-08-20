# ~Arad_ServerStateManager

`_ZN4ARAD23Arad_ServerStateManagerD1Ev`

`ARAD::Arad_ServerStateManager::~Arad_ServerStateManager()`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_ServerStateManager` | `0x081a927e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a927e  _ZN4ARAD23Arad_ServerStateManagerD1Ev
#           ARAD::Arad_ServerStateManager::~Arad_ServerStateManager()
# range [0x081a927e, 0x081a92c9]
081a927e +0x00:  push   %ebp
081a927f +0x01:  mov    %esp,%ebp
081a9281 +0x03:  push   %esi
081a9282 +0x04:  push   %ebx
081a9283 +0x05:  sub    $0x10,%esp
081a9286 +0x08:  mov    0x8(%ebp),%eax
081a9289 +0x0b:  add    $0x1c,%eax
081a928c +0x0e:  mov    %eax,(%esp)
081a928f +0x11:  call   081a9df2 <_GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev+0xed>  ; global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()+0xed
081a9294 +0x16:  jmp    081a92b4 <+0x36>
081a9296 +0x18:  mov    %edx,%ebx
081a9298 +0x1a:  mov    %eax,%esi
081a929a +0x1c:  mov    0x8(%ebp),%eax
081a929d +0x1f:  add    $0x4,%eax
081a92a0 +0x22:  mov    %eax,(%esp)
081a92a3 +0x25:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
081a92a8 +0x2a:  mov    %esi,%eax
081a92aa +0x2c:  mov    %ebx,%edx
081a92ac +0x2e:  mov    %eax,(%esp)
081a92af +0x31:  call   08ae3750 <_Unwind_Resume>
081a92b4 +0x36:  mov    0x8(%ebp),%eax
081a92b7 +0x39:  add    $0x4,%eax
081a92ba +0x3c:  mov    %eax,(%esp)
081a92bd +0x3f:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
081a92c2 +0x44:  add    $0x10,%esp
081a92c5 +0x47:  pop    %ebx
081a92c6 +0x48:  pop    %esi
081a92c7 +0x49:  pop    %ebp
081a92c8 +0x4a:  ret
081a92c9 +0x4b:  nop
```

## 反编译 C

```c
// ARAD::Arad_ServerStateManager::~Arad_ServerStateManager @ 0x81a927e

/* ARAD::Arad_ServerStateManager::~Arad_ServerStateManager() */

void __thiscall
ARAD::Arad_ServerStateManager::~Arad_ServerStateManager(Arad_ServerStateManager *this)

{
                    /* try { // try from 081a928f to 081a9293 has its CatchHandler @ 081a9296 */
  std::
  map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
  ::~map((map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
          *)(this + 0x1c));
  Mutex::~Mutex((Mutex *)(this + 4));
  return;
}
```

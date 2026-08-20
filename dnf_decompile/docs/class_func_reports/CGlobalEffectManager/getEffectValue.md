# getEffectValue

`_ZNK20CGlobalEffectManager14getEffectValueEj`

`CGlobalEffectManager::getEffectValue(unsigned int) const`

| 类 | 地址 |
|---|---|
| `CGlobalEffectManager` | `0x084b7daa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b7daa  _ZNK20CGlobalEffectManager14getEffectValueEj
#           CGlobalEffectManager::getEffectValue(unsigned int) const
# range [0x084b7daa, 0x084b7e47]
084b7daa +0x00:  push   %ebp
084b7dab +0x01:  mov    %esp,%ebp
084b7dad +0x03:  sub    $0x38,%esp
084b7db0 +0x06:  mov    $0x0,%eax
084b7db5 +0x0b:  mov    %eax,-0xc(%ebp)
084b7db8 +0x0e:  mov    0x8(%ebp),%edx
084b7dbb +0x11:  lea    -0x10(%ebp),%eax
084b7dbe +0x14:  mov    %edx,0x4(%esp)
084b7dc2 +0x18:  mov    %eax,(%esp)
084b7dc5 +0x1b:  call   084b82ce <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x311>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x311
084b7dca +0x20:  sub    $0x4,%esp
084b7dcd +0x23:  mov    0x8(%ebp),%edx
084b7dd0 +0x26:  lea    -0x14(%ebp),%eax
084b7dd3 +0x29:  mov    %edx,0x4(%esp)
084b7dd7 +0x2d:  mov    %eax,(%esp)
084b7dda +0x30:  call   084b82fa <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x33d>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x33d
084b7ddf +0x35:  sub    $0x4,%esp
084b7de2 +0x38:  jmp    084b7e27 <+0x7d>
084b7de4 +0x3a:  lea    -0x10(%ebp),%eax
084b7de7 +0x3d:  mov    %eax,(%esp)
084b7dea +0x40:  call   084b8368 <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x3ab>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x3ab
084b7def +0x45:  mov    %eax,(%esp)
084b7df2 +0x48:  call   084b7fda <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x1d>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x1d
084b7df7 +0x4d:  cmp    0xc(%ebp),%eax
084b7dfa +0x50:  sete   %al
084b7dfd +0x53:  test   %al,%al
084b7dff +0x55:  je     084b7e1c <+0x72>
084b7e01 +0x57:  lea    -0x10(%ebp),%eax
084b7e04 +0x5a:  mov    %eax,(%esp)
084b7e07 +0x5d:  call   084b8368 <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x3ab>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x3ab
084b7e0c +0x62:  mov    %eax,(%esp)
084b7e0f +0x65:  call   084b7fe4 <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x27>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x27
084b7e14 +0x6a:  flds   -0xc(%ebp)
084b7e17 +0x6d:  faddp  %st,%st(1)
084b7e19 +0x6f:  fstps  -0xc(%ebp)
084b7e1c +0x72:  lea    -0x10(%ebp),%eax
084b7e1f +0x75:  mov    %eax,(%esp)
084b7e22 +0x78:  call   084b8352 <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x395>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x395
084b7e27 +0x7d:  lea    -0x14(%ebp),%eax
084b7e2a +0x80:  mov    %eax,0x4(%esp)
084b7e2e +0x84:  lea    -0x10(%ebp),%eax
084b7e31 +0x87:  mov    %eax,(%esp)
084b7e34 +0x8a:  call   084b8326 <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x369>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x369
084b7e39 +0x8f:  test   %al,%al
084b7e3b +0x91:  jne    084b7de4 <+0x3a>
084b7e3d +0x93:  mov    -0xc(%ebp),%eax
084b7e40 +0x96:  mov    %eax,-0x1c(%ebp)
084b7e43 +0x99:  flds   -0x1c(%ebp)
084b7e46 +0x9c:  leave
084b7e47 +0x9d:  ret
```

## 反编译 C

```c
// CGlobalEffectManager::getEffectValue @ 0x84b7daa

/* CGlobalEffectManager::getEffectValue(unsigned int) const */

longdouble __thiscall CGlobalEffectManager::getEffectValue(CGlobalEffectManager *this,uint param_1)

{
  bool bVar1;
  CGlobalEffect *pCVar2;
  uint uVar3;
  longdouble lVar4;
  __normal_iterator local_18 [4];
  __normal_iterator<CGlobalEffect_const*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
  local_14 [4];
  float local_10;
  
  local_10 = 0.0;
  std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::begin();
  std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_14,local_18);
    if (!bVar1) break;
    pCVar2 = (CGlobalEffect *)
             __gnu_cxx::
             __normal_iterator<CGlobalEffect_const*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
             ::operator->(local_14);
    uVar3 = CGlobalEffect::getType(pCVar2);
    if (uVar3 == param_1) {
      pCVar2 = (CGlobalEffect *)
               __gnu_cxx::
               __normal_iterator<CGlobalEffect_const*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
               ::operator->(local_14);
      lVar4 = (longdouble)CGlobalEffect::getValue(pCVar2);
      local_10 = (float)((longdouble)local_10 + lVar4);
    }
    __gnu_cxx::
    __normal_iterator<CGlobalEffect_const*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
    ::operator++(local_14);
  }
  return (longdouble)local_10;
}
```

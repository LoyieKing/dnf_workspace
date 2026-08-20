# isAffectedEffect

`_ZNK20CGlobalEffectManager16isAffectedEffectEj`

`CGlobalEffectManager::isAffectedEffect(unsigned int) const`

| 类 | 地址 |
|---|---|
| `CGlobalEffectManager` | `0x084b7d2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b7d2c  _ZNK20CGlobalEffectManager16isAffectedEffectEj
#           CGlobalEffectManager::isAffectedEffect(unsigned int) const
# range [0x084b7d2c, 0x084b7da9]
084b7d2c +0x00:  push   %ebp
084b7d2d +0x01:  mov    %esp,%ebp
084b7d2f +0x03:  sub    $0x28,%esp
084b7d32 +0x06:  mov    0x8(%ebp),%edx
084b7d35 +0x09:  lea    -0xc(%ebp),%eax
084b7d38 +0x0c:  mov    %edx,0x4(%esp)
084b7d3c +0x10:  mov    %eax,(%esp)
084b7d3f +0x13:  call   084b82ce <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x311>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x311
084b7d44 +0x18:  sub    $0x4,%esp
084b7d47 +0x1b:  mov    0x8(%ebp),%edx
084b7d4a +0x1e:  lea    -0x10(%ebp),%eax
084b7d4d +0x21:  mov    %edx,0x4(%esp)
084b7d51 +0x25:  mov    %eax,(%esp)
084b7d54 +0x28:  call   084b82fa <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x33d>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x33d
084b7d59 +0x2d:  sub    $0x4,%esp
084b7d5c +0x30:  jmp    084b7d8d <+0x61>
084b7d5e +0x32:  lea    -0xc(%ebp),%eax
084b7d61 +0x35:  mov    %eax,(%esp)
084b7d64 +0x38:  call   084b8368 <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x3ab>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x3ab
084b7d69 +0x3d:  mov    %eax,(%esp)
084b7d6c +0x40:  call   084b7fda <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x1d>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x1d
084b7d71 +0x45:  cmp    0xc(%ebp),%eax
084b7d74 +0x48:  sete   %al
084b7d77 +0x4b:  test   %al,%al
084b7d79 +0x4d:  je     084b7d82 <+0x56>
084b7d7b +0x4f:  mov    $0x1,%eax
084b7d80 +0x54:  jmp    084b7da8 <+0x7c>
084b7d82 +0x56:  lea    -0xc(%ebp),%eax
084b7d85 +0x59:  mov    %eax,(%esp)
084b7d88 +0x5c:  call   084b8352 <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x395>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x395
084b7d8d +0x61:  lea    -0x10(%ebp),%eax
084b7d90 +0x64:  mov    %eax,0x4(%esp)
084b7d94 +0x68:  lea    -0xc(%ebp),%eax
084b7d97 +0x6b:  mov    %eax,(%esp)
084b7d9a +0x6e:  call   084b8326 <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x369>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x369
084b7d9f +0x73:  test   %al,%al
084b7da1 +0x75:  jne    084b7d5e <+0x32>
084b7da3 +0x77:  mov    $0x0,%eax
084b7da8 +0x7c:  leave
084b7da9 +0x7d:  ret
```

## 反编译 C

```c
// CGlobalEffectManager::isAffectedEffect @ 0x84b7d2c

/* CGlobalEffectManager::isAffectedEffect(unsigned int) const */

undefined4 __thiscall
CGlobalEffectManager::isAffectedEffect(CGlobalEffectManager *this,uint param_1)

{
  bool bVar1;
  CGlobalEffect *this_00;
  uint uVar2;
  __normal_iterator local_14 [4];
  __normal_iterator<CGlobalEffect_const*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
  local_10 [12];
  
  std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::begin();
  std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_10,local_14);
    if (!bVar1) {
      return 0;
    }
    this_00 = (CGlobalEffect *)
              __gnu_cxx::
              __normal_iterator<CGlobalEffect_const*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
              ::operator->(local_10);
    uVar2 = CGlobalEffect::getType(this_00);
    if (uVar2 == param_1) break;
    __gnu_cxx::
    __normal_iterator<CGlobalEffect_const*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
    ::operator++(local_10);
  }
  return 1;
}
```

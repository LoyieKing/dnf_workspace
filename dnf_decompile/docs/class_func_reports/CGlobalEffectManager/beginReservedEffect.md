# beginReservedEffect

`_ZN20CGlobalEffectManager19beginReservedEffectEj`

`CGlobalEffectManager::beginReservedEffect(unsigned int)`

| 类 | 地址 |
|---|---|
| `CGlobalEffectManager` | `0x084b7c50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b7c50  _ZN20CGlobalEffectManager19beginReservedEffectEj
#           CGlobalEffectManager::beginReservedEffect(unsigned int)
# range [0x084b7c50, 0x084b7d2b]
084b7c50 +0x00:  push   %ebp
084b7c51 +0x01:  mov    %esp,%ebp
084b7c53 +0x03:  sub    $0x28,%esp
084b7c56 +0x06:  mov    0x8(%ebp),%eax
084b7c59 +0x09:  add    $0xc,%eax
084b7c5c +0x0c:  mov    %eax,(%esp)
084b7c5f +0x0f:  call   084b820c <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x24f>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x24f
084b7c64 +0x14:  test   %al,%al
084b7c66 +0x16:  jne    084b7d28 <+0xd8>
084b7c6c +0x1c:  mov    0x8(%ebp),%eax
084b7c6f +0x1f:  lea    0xc(%eax),%edx
084b7c72 +0x22:  lea    -0x14(%ebp),%eax
084b7c75 +0x25:  mov    %edx,0x4(%esp)
084b7c79 +0x29:  mov    %eax,(%esp)
084b7c7c +0x2c:  call   084b8090 <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0xd3>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0xd3
084b7c81 +0x31:  sub    $0x4,%esp
084b7c84 +0x34:  jmp    084b7ce9 <+0x99>
084b7c86 +0x36:  lea    -0x14(%ebp),%eax
084b7c89 +0x39:  mov    %eax,(%esp)
084b7c8c +0x3c:  call   084b8106 <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x149>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x149
084b7c91 +0x41:  mov    %eax,(%esp)
084b7c94 +0x44:  call   084b7fda <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x1d>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x1d
084b7c99 +0x49:  cmp    0xc(%ebp),%eax
084b7c9c +0x4c:  sete   %al
084b7c9f +0x4f:  test   %al,%al
084b7ca1 +0x51:  je     084b7cde <+0x8e>
084b7ca3 +0x53:  lea    -0x14(%ebp),%eax
084b7ca6 +0x56:  mov    %eax,(%esp)
084b7ca9 +0x59:  call   084b8250 <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x293>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x293
084b7cae +0x5e:  mov    0x8(%ebp),%edx
084b7cb1 +0x61:  mov    %eax,0x4(%esp)
084b7cb5 +0x65:  mov    %edx,(%esp)
084b7cb8 +0x68:  call   084b825a <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x29d>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x29d
084b7cbd +0x6d:  mov    0x8(%ebp),%eax
084b7cc0 +0x70:  lea    0xc(%eax),%ecx
084b7cc3 +0x73:  lea    -0xc(%ebp),%eax
084b7cc6 +0x76:  mov    -0x14(%ebp),%edx
084b7cc9 +0x79:  mov    %edx,0x8(%esp)
084b7ccd +0x7d:  mov    %ecx,0x4(%esp)
084b7cd1 +0x81:  mov    %eax,(%esp)
084b7cd4 +0x84:  call   084b8110 <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x153>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x153
084b7cd9 +0x89:  sub    $0x4,%esp
084b7cdc +0x8c:  jmp    084b7ce9 <+0x99>
084b7cde +0x8e:  lea    -0x14(%ebp),%eax
084b7ce1 +0x91:  mov    %eax,(%esp)
084b7ce4 +0x94:  call   084b81f6 <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x239>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x239
084b7ce9 +0x99:  mov    0x8(%ebp),%eax
084b7cec +0x9c:  lea    0xc(%eax),%edx
084b7cef +0x9f:  lea    -0x10(%ebp),%eax
084b7cf2 +0xa2:  mov    %edx,0x4(%esp)
084b7cf6 +0xa6:  mov    %eax,(%esp)
084b7cf9 +0xa9:  call   084b80b4 <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0xf7>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0xf7
084b7cfe +0xae:  sub    $0x4,%esp
084b7d01 +0xb1:  lea    -0x10(%ebp),%eax
084b7d04 +0xb4:  mov    %eax,0x4(%esp)
084b7d08 +0xb8:  lea    -0x14(%ebp),%eax
084b7d0b +0xbb:  mov    %eax,(%esp)
084b7d0e +0xbe:  call   084b80da <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x11d>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x11d
084b7d13 +0xc3:  test   %al,%al
084b7d15 +0xc5:  jne    084b7c86 <+0x36>
084b7d1b +0xcb:  mov    0x8(%ebp),%eax
084b7d1e +0xce:  mov    %eax,(%esp)
084b7d21 +0xd1:  call   084b7e48 <_ZNK20CGlobalEffectManager22notifyGlobalEffectInfoEv>  ; CGlobalEffectManager::notifyGlobalEffectInfo() const
084b7d26 +0xd6:  jmp    084b7d29 <+0xd9>
084b7d28 +0xd8:  nop
084b7d29 +0xd9:  leave
084b7d2a +0xda:  ret
084b7d2b +0xdb:  nop
```

## 反编译 C

```c
// CGlobalEffectManager::beginReservedEffect @ 0x84b7c50

/* CGlobalEffectManager::beginReservedEffect(unsigned int) */

void __thiscall CGlobalEffectManager::beginReservedEffect(CGlobalEffectManager *this,uint param_1)

{
  char cVar1;
  bool bVar2;
  CGlobalEffect *pCVar3;
  uint uVar4;
  undefined4 local_18;
  __normal_iterator local_14 [4];
  undefined1 local_10 [12];
  
  cVar1 = std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::empty();
  if (cVar1 == '\0') {
    std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::begin();
    while( true ) {
      std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::end();
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,local_14);
      if (!bVar2) break;
      pCVar3 = (CGlobalEffect *)
               __gnu_cxx::
               __normal_iterator<CGlobalEffect*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
               ::operator->((__normal_iterator<CGlobalEffect*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
                             *)&local_18);
      uVar4 = CGlobalEffect::getType(pCVar3);
      if (uVar4 == param_1) {
        pCVar3 = (CGlobalEffect *)
                 __gnu_cxx::
                 __normal_iterator<CGlobalEffect*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
                 ::operator*((__normal_iterator<CGlobalEffect*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
                              *)&local_18);
        std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::push_back
                  ((vector<CGlobalEffect,std::allocator<CGlobalEffect>> *)this,pCVar3);
        std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::erase
                  (local_10,this + 0xc,local_18);
      }
      else {
        __gnu_cxx::
        __normal_iterator<CGlobalEffect*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>::
        operator++((__normal_iterator<CGlobalEffect*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
                    *)&local_18);
      }
    }
    notifyGlobalEffectInfo(this);
  }
  return;
}
```

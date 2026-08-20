# makeGlobalEffectInfo

`_ZNK20CGlobalEffectManager20makeGlobalEffectInfoER11PacketGuard`

`CGlobalEffectManager::makeGlobalEffectInfo(PacketGuard&) const`

| 类 | 地址 |
|---|---|
| `CGlobalEffectManager` | `0x084b7ec4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b7ec4  _ZNK20CGlobalEffectManager20makeGlobalEffectInfoER11PacketGuard
#           CGlobalEffectManager::makeGlobalEffectInfo(PacketGuard&) const
# range [0x084b7ec4, 0x084b7f7c]
084b7ec4 +0x00:  push   %ebp
084b7ec5 +0x01:  mov    %esp,%ebp
084b7ec7 +0x03:  sub    $0x28,%esp
084b7eca +0x06:  mov    0xc(%ebp),%eax
084b7ecd +0x09:  movl   $0xb5,0x8(%esp)
084b7ed5 +0x11:  movl   $0x0,0x4(%esp)
084b7edd +0x19:  mov    %eax,(%esp)
084b7ee0 +0x1c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084b7ee5 +0x21:  mov    0xc(%ebp),%eax
084b7ee8 +0x24:  movl   $0x1,0x4(%esp)
084b7ef0 +0x2c:  mov    %eax,(%esp)
084b7ef3 +0x2f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084b7ef8 +0x34:  mov    0x8(%ebp),%eax
084b7efb +0x37:  mov    %eax,(%esp)
084b7efe +0x3a:  call   08236c30 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc2da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc2da
084b7f03 +0x3f:  mov    %eax,%edx
084b7f05 +0x41:  mov    0xc(%ebp),%eax
084b7f08 +0x44:  mov    %edx,0x4(%esp)
084b7f0c +0x48:  mov    %eax,(%esp)
084b7f0f +0x4b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084b7f14 +0x50:  mov    0x8(%ebp),%edx
084b7f17 +0x53:  lea    -0xc(%ebp),%eax
084b7f1a +0x56:  mov    %edx,0x4(%esp)
084b7f1e +0x5a:  mov    %eax,(%esp)
084b7f21 +0x5d:  call   084b82ce <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x311>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x311
084b7f26 +0x62:  sub    $0x4,%esp
084b7f29 +0x65:  mov    0x8(%ebp),%edx
084b7f2c +0x68:  lea    -0x10(%ebp),%eax
084b7f2f +0x6b:  mov    %edx,0x4(%esp)
084b7f33 +0x6f:  mov    %eax,(%esp)
084b7f36 +0x72:  call   084b82fa <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x33d>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x33d
084b7f3b +0x77:  sub    $0x4,%esp
084b7f3e +0x7a:  jmp    084b7f65 <+0xa1>
084b7f40 +0x7c:  lea    -0xc(%ebp),%eax
084b7f43 +0x7f:  mov    %eax,(%esp)
084b7f46 +0x82:  call   084b8368 <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x3ab>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x3ab
084b7f4b +0x87:  mov    0xc(%ebp),%edx
084b7f4e +0x8a:  mov    %edx,0x4(%esp)
084b7f52 +0x8e:  mov    %eax,(%esp)
084b7f55 +0x91:  call   084b7880 <_ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard>  ; CGlobalEffect::makeNotifyInfo(PacketGuard&) const
084b7f5a +0x96:  lea    -0xc(%ebp),%eax
084b7f5d +0x99:  mov    %eax,(%esp)
084b7f60 +0x9c:  call   084b8352 <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x395>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x395
084b7f65 +0xa1:  lea    -0x10(%ebp),%eax
084b7f68 +0xa4:  mov    %eax,0x4(%esp)
084b7f6c +0xa8:  lea    -0xc(%ebp),%eax
084b7f6f +0xab:  mov    %eax,(%esp)
084b7f72 +0xae:  call   084b8326 <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x369>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x369
084b7f77 +0xb3:  test   %al,%al
084b7f79 +0xb5:  jne    084b7f40 <+0x7c>
084b7f7b +0xb7:  leave
084b7f7c +0xb8:  ret
```

## 反编译 C

```c
// CGlobalEffectManager::makeGlobalEffectInfo @ 0x84b7ec4

/* CGlobalEffectManager::makeGlobalEffectInfo(PacketGuard&) const */

void __thiscall
CGlobalEffectManager::makeGlobalEffectInfo(CGlobalEffectManager *this,PacketGuard *param_1)

{
  bool bVar1;
  int iVar2;
  CGlobalEffect *this_00;
  __normal_iterator local_14 [4];
  __normal_iterator<CGlobalEffect_const*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
  local_10 [12];
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0xb5);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,1);
  iVar2 = std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::size
                    ((vector<CGlobalEffect,std::allocator<CGlobalEffect>> *)this);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar2);
  std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::begin();
  std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_10,local_14);
    if (!bVar1) break;
    this_00 = (CGlobalEffect *)
              __gnu_cxx::
              __normal_iterator<CGlobalEffect_const*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
              ::operator->(local_10);
    CGlobalEffect::makeNotifyInfo(this_00,param_1);
    __gnu_cxx::
    __normal_iterator<CGlobalEffect_const*,std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>>
    ::operator++(local_10);
  }
  return;
}
```

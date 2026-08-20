# CleanupPowerWarVillToStart

`_ZN9GameWorld26CleanupPowerWarVillToStartEv`

`GameWorld::CleanupPowerWarVillToStart()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cf138` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cf138  _ZN9GameWorld26CleanupPowerWarVillToStartEv
#           GameWorld::CleanupPowerWarVillToStart()
# range [0x086cf138, 0x086cf1fd]
086cf138 +0x00:  push   %ebp
086cf139 +0x01:  mov    %esp,%ebp
086cf13b +0x03:  sub    $0x28,%esp
086cf13e +0x06:  movl   $0x0,-0xc(%ebp)
086cf145 +0x0d:  mov    0x8(%ebp),%eax
086cf148 +0x10:  add    $0x134,%eax
086cf14d +0x15:  mov    %eax,(%esp)
086cf150 +0x18:  call   08106cfc <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x17e>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x17e
086cf155 +0x1d:  test   %eax,%eax
086cf157 +0x1f:  setne  %al
086cf15a +0x22:  test   %al,%al
086cf15c +0x24:  je     086cf1fc <+0xc4>
086cf162 +0x2a:  mov    0x8(%ebp),%eax
086cf165 +0x2d:  lea    0x134(%eax),%edx
086cf16b +0x33:  lea    -0x14(%ebp),%eax
086cf16e +0x36:  mov    %edx,0x4(%esp)
086cf172 +0x3a:  mov    %eax,(%esp)
086cf175 +0x3d:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086cf17a +0x42:  sub    $0x4,%esp
086cf17d +0x45:  jmp    086cf1cb <+0x93>
086cf17f +0x47:  lea    -0x14(%ebp),%eax
086cf182 +0x4a:  mov    %eax,(%esp)
086cf185 +0x4d:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086cf18a +0x52:  mov    0x4(%eax),%eax
086cf18d +0x55:  mov    %eax,-0xc(%ebp)
086cf190 +0x58:  mov    -0xc(%ebp),%eax
086cf193 +0x5b:  mov    %eax,(%esp)
086cf196 +0x5e:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086cf19b +0x63:  cmp    $0x7,%al
086cf19d +0x65:  sete   %al
086cf1a0 +0x68:  test   %al,%al
086cf1a2 +0x6a:  je     086cf1c0 <+0x88>
086cf1a4 +0x6c:  mov    &_ZN10GlobalData15s_power_managerE,%eax
086cf1a9 +0x71:  movl   $0x0,0x8(%esp)
086cf1b1 +0x79:  mov    -0xc(%ebp),%edx
086cf1b4 +0x7c:  mov    %edx,0x4(%esp)
086cf1b8 +0x80:  mov    %eax,(%esp)
086cf1bb +0x83:  call   0847fb02 <_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc>  ; CPowerManager::ProcessJoinPowerWar(CUser*, char)
086cf1c0 +0x88:  lea    -0x14(%ebp),%eax
086cf1c3 +0x8b:  mov    %eax,(%esp)
086cf1c6 +0x8e:  call   0811c9a4 <_GLOBAL__I_events+0x1047>  ; global constructors keyed to events+0x1047
086cf1cb +0x93:  mov    0x8(%ebp),%eax
086cf1ce +0x96:  lea    0x134(%eax),%edx
086cf1d4 +0x9c:  lea    -0x10(%ebp),%eax
086cf1d7 +0x9f:  mov    %edx,0x4(%esp)
086cf1db +0xa3:  mov    %eax,(%esp)
086cf1de +0xa6:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086cf1e3 +0xab:  sub    $0x4,%esp
086cf1e6 +0xae:  lea    -0x10(%ebp),%eax
086cf1e9 +0xb1:  mov    %eax,0x4(%esp)
086cf1ed +0xb5:  lea    -0x14(%ebp),%eax
086cf1f0 +0xb8:  mov    %eax,(%esp)
086cf1f3 +0xbb:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086cf1f8 +0xc0:  test   %al,%al
086cf1fa +0xc2:  jne    086cf17f <+0x47>
086cf1fc +0xc4:  leave
086cf1fd +0xc5:  ret
```

## 反编译 C

```c
// GameWorld::CleanupPowerWarVillToStart @ 0x86cf138

/* GameWorld::CleanupPowerWarVillToStart() */

void __thiscall GameWorld::CleanupPowerWarVillToStart(GameWorld *this)

{
  char cVar1;
  int iVar2;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_18 [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_14 [4];
  CUser *local_10;
  
  local_10 = (CUser *)0x0;
  iVar2 = std::
          map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
          ::size((map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
                  *)(this + 0x134));
  if (iVar2 != 0) {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::begin(local_18);
    while( true ) {
      std::
      map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
      ::end(local_14);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_18,
                         (_Rb_tree_iterator *)local_14);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_18);
      local_10 = *(CUser **)(iVar2 + 4);
      cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)local_10);
      if (cVar1 == '\a') {
        CPowerManager::ProcessJoinPowerWar(GlobalData::s_power_manager,local_10,'\0');
      }
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_18);
    }
  }
  return;
}
```

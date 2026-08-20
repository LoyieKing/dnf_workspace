# clear

`_ZN25stFavorableRelationShip_t5clearEv`

`stFavorableRelationShip_t::clear()`

| 类 | 地址 |
|---|---|
| `stFavorableRelationShip_t` | `0x089fb56c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089fb56c  _ZN25stFavorableRelationShip_t5clearEv
#           stFavorableRelationShip_t::clear()
# range [0x089fb56c, 0x089fb687]
089fb56c +0x000:  push   %ebp
089fb56d +0x001:  mov    %esp,%ebp
089fb56f +0x003:  sub    $0x28,%esp
089fb572 +0x006:  mov    0x8(%ebp),%eax
089fb575 +0x009:  movb   $0x0,(%eax)
089fb578 +0x00c:  mov    0x8(%ebp),%eax
089fb57b +0x00f:  movl   $0x0,0x4(%eax)
089fb582 +0x016:  mov    0x8(%ebp),%eax
089fb585 +0x019:  movw   $0x0,0x8(%eax)
089fb58b +0x01f:  mov    0x8(%ebp),%eax
089fb58e +0x022:  movw   $0x0,0xa(%eax)
089fb594 +0x028:  mov    0x8(%ebp),%eax
089fb597 +0x02b:  movw   $0x0,0xc(%eax)
089fb59d +0x031:  mov    0x8(%ebp),%eax
089fb5a0 +0x034:  add    $0x10,%eax
089fb5a3 +0x037:  mov    %eax,(%esp)
089fb5a6 +0x03a:  call   08a01422 <_GLOBAL__I_g_npcScriptBaseDirectory+0xab4>  ; global constructors keyed to g_npcScriptBaseDirectory+0xab4
089fb5ab +0x03f:  mov    0x8(%ebp),%eax
089fb5ae +0x042:  add    $0x1c,%eax
089fb5b1 +0x045:  mov    %eax,(%esp)
089fb5b4 +0x048:  call   08a0143e <_GLOBAL__I_g_npcScriptBaseDirectory+0xad0>  ; global constructors keyed to g_npcScriptBaseDirectory+0xad0
089fb5b9 +0x04d:  movl   $0x0,-0x10(%ebp)
089fb5c0 +0x054:  jmp    089fb63a <+0xce>
089fb5c2 +0x056:  mov    -0x10(%ebp),%edx
089fb5c5 +0x059:  mov    %edx,%eax
089fb5c7 +0x05b:  add    %eax,%eax
089fb5c9 +0x05d:  add    %edx,%eax
089fb5cb +0x05f:  shl    $0x3,%eax
089fb5ce +0x062:  add    $0x20,%eax
089fb5d1 +0x065:  add    0x8(%ebp),%eax
089fb5d4 +0x068:  add    $0x8,%eax
089fb5d7 +0x06b:  mov    %eax,(%esp)
089fb5da +0x06e:  call   08a0145a <_GLOBAL__I_g_npcScriptBaseDirectory+0xaec>  ; global constructors keyed to g_npcScriptBaseDirectory+0xaec
089fb5df +0x073:  mov    -0x10(%ebp),%edx
089fb5e2 +0x076:  mov    %edx,%eax
089fb5e4 +0x078:  add    %eax,%eax
089fb5e6 +0x07a:  add    %edx,%eax
089fb5e8 +0x07c:  shl    $0x3,%eax
089fb5eb +0x07f:  add    $0x110,%eax
089fb5f0 +0x084:  add    0x8(%ebp),%eax
089fb5f3 +0x087:  add    $0x8,%eax
089fb5f6 +0x08a:  mov    %eax,(%esp)
089fb5f9 +0x08d:  call   08a0145a <_GLOBAL__I_g_npcScriptBaseDirectory+0xaec>  ; global constructors keyed to g_npcScriptBaseDirectory+0xaec
089fb5fe +0x092:  mov    -0x10(%ebp),%edx
089fb601 +0x095:  mov    %edx,%eax
089fb603 +0x097:  add    %eax,%eax
089fb605 +0x099:  add    %edx,%eax
089fb607 +0x09b:  shl    $0x3,%eax
089fb60a +0x09e:  add    $0xa0,%eax
089fb60f +0x0a3:  add    0x8(%ebp),%eax
089fb612 +0x0a6:  mov    %eax,(%esp)
089fb615 +0x0a9:  call   08a0145a <_GLOBAL__I_g_npcScriptBaseDirectory+0xaec>  ; global constructors keyed to g_npcScriptBaseDirectory+0xaec
089fb61a +0x0ae:  mov    -0x10(%ebp),%edx
089fb61d +0x0b1:  mov    %edx,%eax
089fb61f +0x0b3:  add    %eax,%eax
089fb621 +0x0b5:  add    %edx,%eax
089fb623 +0x0b7:  shl    $0x3,%eax
089fb626 +0x0ba:  add    $0x190,%eax
089fb62b +0x0bf:  add    0x8(%ebp),%eax
089fb62e +0x0c2:  mov    %eax,(%esp)
089fb631 +0x0c5:  call   08a0145a <_GLOBAL__I_g_npcScriptBaseDirectory+0xaec>  ; global constructors keyed to g_npcScriptBaseDirectory+0xaec
089fb636 +0x0ca:  addl   $0x1,-0x10(%ebp)
089fb63a +0x0ce:  cmpl   $0x4,-0x10(%ebp)
089fb63e +0x0d2:  setle  %al
089fb641 +0x0d5:  test   %al,%al
089fb643 +0x0d7:  jne    089fb5c2 <+0x56>
089fb649 +0x0dd:  movl   $0x0,-0xc(%ebp)
089fb650 +0x0e4:  jmp    089fb66b <+0xff>
089fb652 +0x0e6:  mov    -0xc(%ebp),%edx
089fb655 +0x0e9:  mov    0x8(%ebp),%eax
089fb658 +0x0ec:  lea    0x134(%edx),%ecx
089fb65e +0x0f2:  mov    $0x3f800000,%edx
089fb663 +0x0f7:  mov    %edx,0x8(%eax,%ecx,4)
089fb667 +0x0fb:  addl   $0x1,-0xc(%ebp)
089fb66b +0x0ff:  cmpl   $0x2,-0xc(%ebp)
089fb66f +0x103:  setle  %al
089fb672 +0x106:  test   %al,%al
089fb674 +0x108:  jne    089fb652 <+0xe6>
089fb676 +0x10a:  mov    0x8(%ebp),%eax
089fb679 +0x10d:  add    $0x208,%eax
089fb67e +0x112:  mov    %eax,(%esp)
089fb681 +0x115:  call   089fb508 <_ZN25stFavorableRelationShip_t14stRewardItem_t5clearEv>  ; stFavorableRelationShip_t::stRewardItem_t::clear()
089fb686 +0x11a:  leave
089fb687 +0x11b:  ret
```

## 反编译 C

```c
// stFavorableRelationShip_t::clear @ 0x89fb56c

/* stFavorableRelationShip_t::clear() */

void __thiscall stFavorableRelationShip_t::clear(stFavorableRelationShip_t *this)

{
  int local_14;
  int local_10;
  
  *this = (stFavorableRelationShip_t)0x0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined2 *)(this + 8) = 0;
  *(undefined2 *)(this + 10) = 0;
  *(undefined2 *)(this + 0xc) = 0;
  std::
  vector<std::pair<ENUM_NPC_MOOD,unsigned_int>,std::allocator<std::pair<ENUM_NPC_MOOD,unsigned_int>>>
  ::clear((vector<std::pair<ENUM_NPC_MOOD,unsigned_int>,std::allocator<std::pair<ENUM_NPC_MOOD,unsigned_int>>>
           *)(this + 0x10));
  std::
  vector<std::pair<unsigned_long,unsigned_int>,std::allocator<std::pair<unsigned_long,unsigned_int>>>
  ::clear((vector<std::pair<unsigned_long,unsigned_int>,std::allocator<std::pair<unsigned_long,unsigned_int>>>
           *)(this + 0x1c));
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    std::
    map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
    ::clear((map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
             *)(this + local_14 * 0x18 + 0x28));
    std::
    map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
    ::clear((map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
             *)(this + local_14 * 0x18 + 0x118));
    std::
    map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
    ::clear((map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
             *)(this + local_14 * 0x18 + 0xa0));
    std::
    map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
    ::clear((map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
             *)(this + local_14 * 0x18 + 400));
  }
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    *(undefined4 *)(this + (local_10 + 0x134) * 4 + 8) = 0x3f800000;
  }
  stRewardItem_t::clear((stRewardItem_t *)(this + 0x208));
  return;
}
```

# Reset

`_ZN13user_creature12CCreatureMgr5ResetEv`

`user_creature::CCreatureMgr::Reset()`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833a45a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833a45a  _ZN13user_creature12CCreatureMgr5ResetEv
#           user_creature::CCreatureMgr::Reset()
# range [0x0833a45a, 0x0833a5bb]
0833a45a +0x000:  push   %ebp
0833a45b +0x001:  mov    %esp,%ebp
0833a45d +0x003:  sub    $0x48,%esp
0833a460 +0x006:  mov    0x8(%ebp),%eax
0833a463 +0x009:  movl   $0x0,0x18(%eax)
0833a46a +0x010:  mov    0x8(%ebp),%eax
0833a46d +0x013:  movl   $0x0,0x1c(%eax)
0833a474 +0x01a:  mov    0x8(%ebp),%eax
0833a477 +0x01d:  movl   $0xffffffff,0x2c(%eax)
0833a47e +0x024:  mov    0x8(%ebp),%eax
0833a481 +0x027:  add    $0x30,%eax
0833a484 +0x02a:  mov    %eax,(%esp)
0833a487 +0x02d:  call   08235840 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xaeea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xaeea
0833a48c +0x032:  test   %eax,%eax
0833a48e +0x034:  setne  %al
0833a491 +0x037:  test   %al,%al
0833a493 +0x039:  je     0833a4a3 <+0x49>
0833a495 +0x03b:  mov    0x8(%ebp),%eax
0833a498 +0x03e:  add    $0x30,%eax
0833a49b +0x041:  mov    %eax,(%esp)
0833a49e +0x044:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
0833a4a3 +0x049:  mov    0x8(%ebp),%eax
0833a4a6 +0x04c:  mov    %eax,(%esp)
0833a4a9 +0x04f:  call   083418f2 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39bf>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39bf
0833a4ae +0x054:  test   %eax,%eax
0833a4b0 +0x056:  setne  %al
0833a4b3 +0x059:  test   %al,%al
0833a4b5 +0x05b:  je     0833a587 <+0x12d>
0833a4bb +0x061:  mov    0x8(%ebp),%edx
0833a4be +0x064:  lea    -0x1c(%ebp),%eax
0833a4c1 +0x067:  mov    %edx,0x4(%esp)
0833a4c5 +0x06b:  mov    %eax,(%esp)
0833a4c8 +0x06e:  call   083429f8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4ac5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4ac5
0833a4cd +0x073:  sub    $0x4,%esp
0833a4d0 +0x076:  jmp    0833a54d <+0xf3>
0833a4d2 +0x078:  lea    -0x1c(%ebp),%eax
0833a4d5 +0x07b:  mov    %eax,(%esp)
0833a4d8 +0x07e:  call   083429ea <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4ab7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4ab7
0833a4dd +0x083:  mov    0x4(%eax),%eax
0833a4e0 +0x086:  mov    %eax,-0x10(%ebp)
0833a4e3 +0x089:  cmpl   $0x0,-0x10(%ebp)
0833a4e7 +0x08d:  je     0833a530 <+0xd6>
0833a4e9 +0x08f:  call   0833f715 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x17e2>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x17e2
0833a4ee +0x094:  mov    -0x10(%ebp),%edx
0833a4f1 +0x097:  mov    %edx,0x4(%esp)
0833a4f5 +0x09b:  mov    %eax,(%esp)
0833a4f8 +0x09e:  call   0833f618 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x16e5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x16e5
0833a4fd +0x0a3:  xor    $0x1,%eax
0833a500 +0x0a6:  test   %al,%al
0833a502 +0x0a8:  je     0833a530 <+0xd6>
0833a504 +0x0aa:  movl   $"FreeCreatureItem() error",0x10(%esp)
0833a50c +0x0b2:  movl   $0xb50,0xc(%esp)
0833a514 +0x0ba:  movl   $&_ZZN13user_creature12CCreatureMgr5ResetEvE19__PRETTY_FUNCTION__,0x8(%esp)
0833a51c +0x0c2:  movl   $"Creature.cpp",0x4(%esp)
0833a524 +0x0ca:  movl   $0x1,(%esp)
0833a52b +0x0d1:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0833a530 +0x0d6:  lea    -0x14(%ebp),%eax
0833a533 +0x0d9:  movl   $0x0,0x8(%esp)
0833a53b +0x0e1:  lea    -0x1c(%ebp),%edx
0833a53e +0x0e4:  mov    %edx,0x4(%esp)
0833a542 +0x0e8:  mov    %eax,(%esp)
0833a545 +0x0eb:  call   08342a32 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4aff>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4aff
0833a54a +0x0f0:  sub    $0x4,%esp
0833a54d +0x0f3:  mov    0x8(%ebp),%edx
0833a550 +0x0f6:  lea    -0x18(%ebp),%eax
0833a553 +0x0f9:  mov    %edx,0x4(%esp)
0833a557 +0x0fd:  mov    %eax,(%esp)
0833a55a +0x100:  call   083429b0 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4a7d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4a7d
0833a55f +0x105:  sub    $0x4,%esp
0833a562 +0x108:  lea    -0x18(%ebp),%eax
0833a565 +0x10b:  mov    %eax,0x4(%esp)
0833a569 +0x10f:  lea    -0x1c(%ebp),%eax
0833a56c +0x112:  mov    %eax,(%esp)
0833a56f +0x115:  call   08342a1e <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4aeb>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4aeb
0833a574 +0x11a:  test   %al,%al
0833a576 +0x11c:  jne    0833a4d2 <+0x78>
0833a57c +0x122:  mov    0x8(%ebp),%eax
0833a57f +0x125:  mov    %eax,(%esp)
0833a582 +0x128:  call   08342a70 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4b3d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4b3d
0833a587 +0x12d:  movl   $0x0,-0xc(%ebp)
0833a58e +0x134:  jmp    0833a5a8 <+0x14e>
0833a590 +0x136:  mov    -0xc(%ebp),%eax
0833a593 +0x139:  add    $0x8,%eax
0833a596 +0x13c:  shl    $0x2,%eax
0833a599 +0x13f:  add    0x8(%ebp),%eax
0833a59c +0x142:  mov    %eax,(%esp)
0833a59f +0x145:  call   08336f60 <_ZN13user_creature9CArtifact5ResetEv>  ; user_creature::CArtifact::Reset()
0833a5a4 +0x14a:  addl   $0x1,-0xc(%ebp)
0833a5a8 +0x14e:  cmpl   $0x2,-0xc(%ebp)
0833a5ac +0x152:  setle  %al
0833a5af +0x155:  test   %al,%al
0833a5b1 +0x157:  jne    0833a590 <+0x136>
0833a5b3 +0x159:  mov    0x8(%ebp),%eax
0833a5b6 +0x15c:  movb   $0x1,0x48(%eax)
0833a5ba +0x160:  leave
0833a5bb +0x161:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::Reset @ 0x833a45a

/* user_creature::CCreatureMgr::Reset() */

void __thiscall user_creature::CCreatureMgr::Reset(CCreatureMgr *this)

{
  char cVar1;
  int iVar2;
  CCreatureItemFactory *this_00;
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_20 [4];
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_1c [4];
  _Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>> local_18 [4];
  CCreatureItem *local_14;
  int local_10;
  
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x2c) = 0xffffffff;
  iVar2 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::size
                    ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                     (this + 0x30));
  if (iVar2 != 0) {
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x30)
              );
  }
  iVar2 = std::
          map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
          ::size((map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
                  *)this);
  if (iVar2 != 0) {
    std::
    map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
    ::begin(local_20);
    while( true ) {
      std::
      map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
      ::end(local_1c);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>> *)
                         local_20,(_Rb_tree_iterator *)local_1c);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>> *)
                         local_20);
      local_14 = *(CCreatureItem **)(iVar2 + 4);
      if (local_14 != (CCreatureItem *)0x0) {
        this_00 = (CCreatureItemFactory *)GetInstanceCreatureItemFactory();
        cVar1 = CCreatureItemFactory::FreeCreatureItem(this_00,local_14);
        if (cVar1 != '\x01') {
          LogManager::logFormat
                    (1,"Creature.cpp","void user_creature::CCreatureMgr::Reset()",0xb50,
                     "FreeCreatureItem() error");
        }
      }
      std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator++
                (local_18,(int)local_20);
    }
    std::
    map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
    ::clear((map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
             *)this);
  }
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    CArtifact::Reset((CArtifact *)(this + (local_10 + 8) * 4));
  }
  this[0x48] = (CCreatureMgr)0x1;
  return;
}
```

# _gm_init

`_ZN12CAchievement8_gm_initEv`

`CAchievement::_gm_init()`

| 类 | 地址 |
|---|---|
| `CAchievement` | `0x0828d338` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828d338  _ZN12CAchievement8_gm_initEv
#           CAchievement::_gm_init()
# range [0x0828d338, 0x0828d44f]
0828d338 +0x000:  push   %ebp
0828d339 +0x001:  mov    %esp,%ebp
0828d33b +0x003:  push   %esi
0828d33c +0x004:  push   %ebx
0828d33d +0x005:  sub    $0x20,%esp
0828d340 +0x008:  mov    0x8(%ebp),%eax
0828d343 +0x00b:  lea    0xc(%eax),%edx
0828d346 +0x00e:  lea    -0x14(%ebp),%eax
0828d349 +0x011:  mov    %edx,0x4(%esp)
0828d34d +0x015:  mov    %eax,(%esp)
0828d350 +0x018:  call   0828e298 <_GLOBAL__I__ZN12CAchievementC2Ev+0xa45>  ; global constructors keyed to CAchievement::CAchievement()+0xa45
0828d355 +0x01d:  sub    $0x4,%esp
0828d358 +0x020:  jmp    0828d403 <+0xcb>
0828d35d +0x025:  lea    -0x14(%ebp),%eax
0828d360 +0x028:  mov    %eax,(%esp)
0828d363 +0x02b:  call   0828de24 <_GLOBAL__I__ZN12CAchievementC2Ev+0x5d1>  ; global constructors keyed to CAchievement::CAchievement()+0x5d1
0828d368 +0x030:  mov    0x4(%eax),%eax
0828d36b +0x033:  mov    %eax,%ebx
0828d36d +0x035:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0828d372 +0x03a:  mov    %ebx,0x4(%esp)
0828d376 +0x03e:  mov    %eax,(%esp)
0828d379 +0x041:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
0828d37e +0x046:  mov    %eax,-0xc(%ebp)
0828d381 +0x049:  cmpl   $0x0,-0xc(%ebp)
0828d385 +0x04d:  je     0828d437 <+0xff>
0828d38b +0x053:  lea    -0x14(%ebp),%eax
0828d38e +0x056:  mov    %eax,(%esp)
0828d391 +0x059:  call   0828de24 <_GLOBAL__I__ZN12CAchievementC2Ev+0x5d1>  ; global constructors keyed to CAchievement::CAchievement()+0x5d1
0828d396 +0x05e:  lea    0xc(%eax),%esi
0828d399 +0x061:  lea    -0x14(%ebp),%eax
0828d39c +0x064:  mov    %eax,(%esp)
0828d39f +0x067:  call   0828de24 <_GLOBAL__I__ZN12CAchievementC2Ev+0x5d1>  ; global constructors keyed to CAchievement::CAchievement()+0x5d1
0828d3a4 +0x06c:  lea    0xa(%eax),%ebx
0828d3a7 +0x06f:  lea    -0x14(%ebp),%eax
0828d3aa +0x072:  mov    %eax,(%esp)
0828d3ad +0x075:  call   0828de24 <_GLOBAL__I__ZN12CAchievementC2Ev+0x5d1>  ; global constructors keyed to CAchievement::CAchievement()+0x5d1
0828d3b2 +0x07a:  add    $0x8,%eax
0828d3b5 +0x07d:  mov    %esi,0xc(%esp)
0828d3b9 +0x081:  mov    %ebx,0x8(%esp)
0828d3bd +0x085:  mov    %eax,0x4(%esp)
0828d3c1 +0x089:  mov    -0xc(%ebp),%eax
0828d3c4 +0x08c:  mov    %eax,(%esp)
0828d3c7 +0x08f:  call   08352fb4 <_ZNK5Quest28get_init_achievement_triggerERtS0_S0_>  ; Quest::get_init_achievement_trigger(unsigned short&, unsigned short&, unsigned short&) const
0828d3cc +0x094:  xor    $0x1,%eax
0828d3cf +0x097:  test   %al,%al
0828d3d1 +0x099:  jne    0828d43a <+0x102>
0828d3d3 +0x09b:  lea    -0x14(%ebp),%eax
0828d3d6 +0x09e:  mov    %eax,(%esp)
0828d3d9 +0x0a1:  call   0828de24 <_GLOBAL__I__ZN12CAchievementC2Ev+0x5d1>  ; global constructors keyed to CAchievement::CAchievement()+0x5d1
0828d3de +0x0a6:  mov    0x4(%eax),%eax
0828d3e1 +0x0a9:  movl   $0x0,0x8(%esp)
0828d3e9 +0x0b1:  mov    %eax,0x4(%esp)
0828d3ed +0x0b5:  mov    0x8(%ebp),%eax
0828d3f0 +0x0b8:  mov    %eax,(%esp)
0828d3f3 +0x0bb:  call   0828c252 <_ZN12CAchievement15_sendSetTriggerEjh>  ; CAchievement::_sendSetTrigger(unsigned int, unsigned char)
0828d3f8 +0x0c0:  lea    -0x14(%ebp),%eax
0828d3fb +0x0c3:  mov    %eax,(%esp)
0828d3fe +0x0c6:  call   0828e2be <_GLOBAL__I__ZN12CAchievementC2Ev+0xa6b>  ; global constructors keyed to CAchievement::CAchievement()+0xa6b
0828d403 +0x0cb:  mov    0x8(%ebp),%eax
0828d406 +0x0ce:  lea    0xc(%eax),%edx
0828d409 +0x0d1:  lea    -0x10(%ebp),%eax
0828d40c +0x0d4:  mov    %edx,0x4(%esp)
0828d410 +0x0d8:  mov    %eax,(%esp)
0828d413 +0x0db:  call   0828ddea <_GLOBAL__I__ZN12CAchievementC2Ev+0x597>  ; global constructors keyed to CAchievement::CAchievement()+0x597
0828d418 +0x0e0:  sub    $0x4,%esp
0828d41b +0x0e3:  lea    -0x10(%ebp),%eax
0828d41e +0x0e6:  mov    %eax,0x4(%esp)
0828d422 +0x0ea:  lea    -0x14(%ebp),%eax
0828d425 +0x0ed:  mov    %eax,(%esp)
0828d428 +0x0f0:  call   0828de10 <_GLOBAL__I__ZN12CAchievementC2Ev+0x5bd>  ; global constructors keyed to CAchievement::CAchievement()+0x5bd
0828d42d +0x0f5:  test   %al,%al
0828d42f +0x0f7:  jne    0828d35d <+0x25>
0828d435 +0x0fd:  jmp    0828d43b <+0x103>
0828d437 +0x0ff:  nop
0828d438 +0x100:  jmp    0828d43b <+0x103>
0828d43a +0x102:  nop
0828d43b +0x103:  mov    0x8(%ebp),%eax
0828d43e +0x106:  mov    %eax,(%esp)
0828d441 +0x109:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
0828d446 +0x10e:  lea    -0x8(%ebp),%esp
0828d449 +0x111:  add    $0x0,%esp
0828d44c +0x114:  pop    %ebx
0828d44d +0x115:  pop    %esi
0828d44e +0x116:  pop    %ebp
0828d44f +0x117:  ret
```

## 反编译 C

```c
// CAchievement::_gm_init @ 0x828d338

/* CAchievement::_gm_init() */

void __thiscall CAchievement::_gm_init(CAchievement *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  local_18 [4];
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  local_14 [4];
  Quest *local_10;
  
  std::
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  ::begin(local_18);
  while( true ) {
    std::
    map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
    ::end(local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>> *)local_18,
                       (_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>> *)local_18);
    iVar2 = G_CDataManager();
    local_10 = (Quest *)CDataManager::find_quest(iVar2);
    if (local_10 == (Quest *)0x0) break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>> *)local_18);
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>> *)local_18);
    iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>> *)local_18);
    cVar1 = Quest::get_init_achievement_trigger
                      (local_10,(ushort *)(iVar4 + 8),(ushort *)(iVar3 + 10),(ushort *)(iVar2 + 0xc)
                      );
    if (cVar1 != '\x01') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>> *)local_18);
    _sendSetTrigger(this,*(uint *)(iVar2 + 4),'\0');
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>> *)local_18);
  }
  charac_expand::CData::alter((CData *)this);
  return;
}
```

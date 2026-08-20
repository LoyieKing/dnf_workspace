# _setTrigger

`_ZN12CAchievement11_setTriggerEjttt`

`CAchievement::_setTrigger(unsigned int, unsigned short, unsigned short, unsigned short)`

| 类 | 地址 |
|---|---|
| `CAchievement` | `0x0828b896` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828b896  _ZN12CAchievement11_setTriggerEjttt
#           CAchievement::_setTrigger(unsigned int, unsigned short, unsigned short, unsigned short)
# range [0x0828b896, 0x0828bb13]
0828b896 +0x000:  push   %ebp
0828b897 +0x001:  mov    %esp,%ebp
0828b899 +0x003:  push   %ebx
0828b89a +0x004:  sub    $0x64,%esp
0828b89d +0x007:  mov    0x10(%ebp),%ecx
0828b8a0 +0x00a:  mov    0x14(%ebp),%edx
0828b8a3 +0x00d:  mov    0x18(%ebp),%eax
0828b8a6 +0x010:  mov    %cx,-0x4c(%ebp)
0828b8aa +0x014:  mov    %dx,-0x50(%ebp)
0828b8ae +0x018:  mov    %ax,-0x54(%ebp)
0828b8b2 +0x01c:  mov    0x8(%ebp),%eax
0828b8b5 +0x01f:  lea    0xc(%eax),%ecx
0828b8b8 +0x022:  lea    -0x3c(%ebp),%eax
0828b8bb +0x025:  lea    0xc(%ebp),%edx
0828b8be +0x028:  mov    %edx,0x8(%esp)
0828b8c2 +0x02c:  mov    %ecx,0x4(%esp)
0828b8c6 +0x030:  mov    %eax,(%esp)
0828b8c9 +0x033:  call   0828ddbe <_GLOBAL__I__ZN12CAchievementC2Ev+0x56b>  ; global constructors keyed to CAchievement::CAchievement()+0x56b
0828b8ce +0x038:  sub    $0x4,%esp
0828b8d1 +0x03b:  mov    0x8(%ebp),%eax
0828b8d4 +0x03e:  lea    0xc(%eax),%edx
0828b8d7 +0x041:  lea    -0x38(%ebp),%eax
0828b8da +0x044:  mov    %edx,0x4(%esp)
0828b8de +0x048:  mov    %eax,(%esp)
0828b8e1 +0x04b:  call   0828ddea <_GLOBAL__I__ZN12CAchievementC2Ev+0x597>  ; global constructors keyed to CAchievement::CAchievement()+0x597
0828b8e6 +0x050:  sub    $0x4,%esp
0828b8e9 +0x053:  lea    -0x38(%ebp),%eax
0828b8ec +0x056:  mov    %eax,0x4(%esp)
0828b8f0 +0x05a:  lea    -0x3c(%ebp),%eax
0828b8f3 +0x05d:  mov    %eax,(%esp)
0828b8f6 +0x060:  call   0828de10 <_GLOBAL__I__ZN12CAchievementC2Ev+0x5bd>  ; global constructors keyed to CAchievement::CAchievement()+0x5bd
0828b8fb +0x065:  test   %al,%al
0828b8fd +0x067:  je     0828b9d7 <+0x141>
0828b903 +0x06d:  lea    -0x3c(%ebp),%eax
0828b906 +0x070:  mov    %eax,(%esp)
0828b909 +0x073:  call   0828de24 <_GLOBAL__I__ZN12CAchievementC2Ev+0x5d1>  ; global constructors keyed to CAchievement::CAchievement()+0x5d1
0828b90e +0x078:  movzwl 0x8(%eax),%eax
0828b912 +0x07c:  cmp    -0x4c(%ebp),%ax
0828b916 +0x080:  setae  %al
0828b919 +0x083:  test   %al,%al
0828b91b +0x085:  je     0828b936 <+0xa0>
0828b91d +0x087:  lea    -0x3c(%ebp),%eax
0828b920 +0x08a:  mov    %eax,(%esp)
0828b923 +0x08d:  call   0828de24 <_GLOBAL__I__ZN12CAchievementC2Ev+0x5d1>  ; global constructors keyed to CAchievement::CAchievement()+0x5d1
0828b928 +0x092:  movzwl 0x8(%eax),%edx
0828b92c +0x096:  sub    -0x4c(%ebp),%dx
0828b930 +0x09a:  mov    %dx,0x8(%eax)
0828b934 +0x09e:  jmp    0828b947 <+0xb1>
0828b936 +0x0a0:  lea    -0x3c(%ebp),%eax
0828b939 +0x0a3:  mov    %eax,(%esp)
0828b93c +0x0a6:  call   0828de24 <_GLOBAL__I__ZN12CAchievementC2Ev+0x5d1>  ; global constructors keyed to CAchievement::CAchievement()+0x5d1
0828b941 +0x0ab:  movw   $0x0,0x8(%eax)
0828b947 +0x0b1:  lea    -0x3c(%ebp),%eax
0828b94a +0x0b4:  mov    %eax,(%esp)
0828b94d +0x0b7:  call   0828de24 <_GLOBAL__I__ZN12CAchievementC2Ev+0x5d1>  ; global constructors keyed to CAchievement::CAchievement()+0x5d1
0828b952 +0x0bc:  movzwl 0xa(%eax),%eax
0828b956 +0x0c0:  cmp    -0x50(%ebp),%ax
0828b95a +0x0c4:  setae  %al
0828b95d +0x0c7:  test   %al,%al
0828b95f +0x0c9:  je     0828b97a <+0xe4>
0828b961 +0x0cb:  lea    -0x3c(%ebp),%eax
0828b964 +0x0ce:  mov    %eax,(%esp)
0828b967 +0x0d1:  call   0828de24 <_GLOBAL__I__ZN12CAchievementC2Ev+0x5d1>  ; global constructors keyed to CAchievement::CAchievement()+0x5d1
0828b96c +0x0d6:  movzwl 0xa(%eax),%edx
0828b970 +0x0da:  sub    -0x50(%ebp),%dx
0828b974 +0x0de:  mov    %dx,0xa(%eax)
0828b978 +0x0e2:  jmp    0828b98b <+0xf5>
0828b97a +0x0e4:  lea    -0x3c(%ebp),%eax
0828b97d +0x0e7:  mov    %eax,(%esp)
0828b980 +0x0ea:  call   0828de24 <_GLOBAL__I__ZN12CAchievementC2Ev+0x5d1>  ; global constructors keyed to CAchievement::CAchievement()+0x5d1
0828b985 +0x0ef:  movw   $0x0,0xa(%eax)
0828b98b +0x0f5:  lea    -0x3c(%ebp),%eax
0828b98e +0x0f8:  mov    %eax,(%esp)
0828b991 +0x0fb:  call   0828de24 <_GLOBAL__I__ZN12CAchievementC2Ev+0x5d1>  ; global constructors keyed to CAchievement::CAchievement()+0x5d1
0828b996 +0x100:  movzwl 0xc(%eax),%eax
0828b99a +0x104:  cmp    -0x54(%ebp),%ax
0828b99e +0x108:  setae  %al
0828b9a1 +0x10b:  test   %al,%al
0828b9a3 +0x10d:  je     0828b9c1 <+0x12b>
0828b9a5 +0x10f:  lea    -0x3c(%ebp),%eax
0828b9a8 +0x112:  mov    %eax,(%esp)
0828b9ab +0x115:  call   0828de24 <_GLOBAL__I__ZN12CAchievementC2Ev+0x5d1>  ; global constructors keyed to CAchievement::CAchievement()+0x5d1
0828b9b0 +0x11a:  movzwl 0xc(%eax),%edx
0828b9b4 +0x11e:  sub    -0x54(%ebp),%dx
0828b9b8 +0x122:  mov    %dx,0xc(%eax)
0828b9bc +0x126:  jmp    0828bb01 <+0x26b>
0828b9c1 +0x12b:  lea    -0x3c(%ebp),%eax
0828b9c4 +0x12e:  mov    %eax,(%esp)
0828b9c7 +0x131:  call   0828de24 <_GLOBAL__I__ZN12CAchievementC2Ev+0x5d1>  ; global constructors keyed to CAchievement::CAchievement()+0x5d1
0828b9cc +0x136:  movw   $0x0,0xc(%eax)
0828b9d2 +0x13c:  jmp    0828bb01 <+0x26b>
0828b9d7 +0x141:  lea    -0x48(%ebp),%eax
0828b9da +0x144:  mov    %eax,(%esp)
0828b9dd +0x147:  call   0828d870 <_GLOBAL__I__ZN12CAchievementC2Ev+0x1d>  ; global constructors keyed to CAchievement::CAchievement()+0x1d
0828b9e2 +0x14c:  mov    0xc(%ebp),%eax
0828b9e5 +0x14f:  mov    %eax,-0x48(%ebp)
0828b9e8 +0x152:  mov    0xc(%ebp),%eax
0828b9eb +0x155:  mov    %eax,%ebx
0828b9ed +0x157:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0828b9f2 +0x15c:  mov    %ebx,0x4(%esp)
0828b9f6 +0x160:  mov    %eax,(%esp)
0828b9f9 +0x163:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
0828b9fe +0x168:  mov    %eax,-0xc(%ebp)
0828ba01 +0x16b:  cmpl   $0x0,-0xc(%ebp)
0828ba05 +0x16f:  je     0828bb0e <+0x278>
0828ba0b +0x175:  lea    -0x48(%ebp),%eax
0828ba0e +0x178:  add    $0x8,%eax
0828ba11 +0x17b:  mov    %eax,0xc(%esp)
0828ba15 +0x17f:  lea    -0x48(%ebp),%eax
0828ba18 +0x182:  add    $0x6,%eax
0828ba1b +0x185:  mov    %eax,0x8(%esp)
0828ba1f +0x189:  lea    -0x48(%ebp),%eax
0828ba22 +0x18c:  add    $0x4,%eax
0828ba25 +0x18f:  mov    %eax,0x4(%esp)
0828ba29 +0x193:  mov    -0xc(%ebp),%eax
0828ba2c +0x196:  mov    %eax,(%esp)
0828ba2f +0x199:  call   08352fb4 <_ZNK5Quest28get_init_achievement_triggerERtS0_S0_>  ; Quest::get_init_achievement_trigger(unsigned short&, unsigned short&, unsigned short&) const
0828ba34 +0x19e:  xor    $0x1,%eax
0828ba37 +0x1a1:  test   %al,%al
0828ba39 +0x1a3:  je     0828ba5a <+0x1c4>
0828ba3b +0x1a5:  mov    0xc(%ebp),%eax
0828ba3e +0x1a8:  movl   $0x1,0x8(%esp)
0828ba46 +0x1b0:  mov    %eax,0x4(%esp)
0828ba4a +0x1b4:  mov    0x8(%ebp),%eax
0828ba4d +0x1b7:  mov    %eax,(%esp)
0828ba50 +0x1ba:  call   0828c252 <_ZN12CAchievement15_sendSetTriggerEjh>  ; CAchievement::_sendSetTrigger(unsigned int, unsigned char)
0828ba55 +0x1bf:  jmp    0828bb0f <+0x279>
0828ba5a +0x1c4:  movzwl -0x44(%ebp),%eax
0828ba5e +0x1c8:  cmp    -0x4c(%ebp),%ax
0828ba62 +0x1cc:  jb     0828ba72 <+0x1dc>
0828ba64 +0x1ce:  movzwl -0x44(%ebp),%eax
0828ba68 +0x1d2:  sub    -0x4c(%ebp),%ax
0828ba6c +0x1d6:  mov    %ax,-0x44(%ebp)
0828ba70 +0x1da:  jmp    0828ba78 <+0x1e2>
0828ba72 +0x1dc:  movw   $0x0,-0x44(%ebp)
0828ba78 +0x1e2:  movzwl -0x42(%ebp),%eax
0828ba7c +0x1e6:  cmp    -0x50(%ebp),%ax
0828ba80 +0x1ea:  jb     0828ba90 <+0x1fa>
0828ba82 +0x1ec:  movzwl -0x42(%ebp),%eax
0828ba86 +0x1f0:  sub    -0x50(%ebp),%ax
0828ba8a +0x1f4:  mov    %ax,-0x42(%ebp)
0828ba8e +0x1f8:  jmp    0828ba96 <+0x200>
0828ba90 +0x1fa:  movw   $0x0,-0x42(%ebp)
0828ba96 +0x200:  movzwl -0x40(%ebp),%eax
0828ba9a +0x204:  cmp    -0x54(%ebp),%ax
0828ba9e +0x208:  jb     0828baae <+0x218>
0828baa0 +0x20a:  movzwl -0x40(%ebp),%eax
0828baa4 +0x20e:  sub    -0x54(%ebp),%ax
0828baa8 +0x212:  mov    %ax,-0x40(%ebp)
0828baac +0x216:  jmp    0828bab4 <+0x21e>
0828baae +0x218:  movw   $0x0,-0x40(%ebp)
0828bab4 +0x21e:  lea    -0x1c(%ebp),%eax
0828bab7 +0x221:  lea    -0x48(%ebp),%edx
0828baba +0x224:  mov    %edx,0x8(%esp)
0828babe +0x228:  lea    -0x48(%ebp),%edx
0828bac1 +0x22b:  mov    %edx,0x4(%esp)
0828bac5 +0x22f:  mov    %eax,(%esp)
0828bac8 +0x232:  call   0828de31 <_GLOBAL__I__ZN12CAchievementC2Ev+0x5de>  ; global constructors keyed to CAchievement::CAchievement()+0x5de
0828bacd +0x237:  sub    $0x4,%esp
0828bad0 +0x23a:  lea    -0x1c(%ebp),%eax
0828bad3 +0x23d:  mov    %eax,0x4(%esp)
0828bad7 +0x241:  lea    -0x2c(%ebp),%eax
0828bada +0x244:  mov    %eax,(%esp)
0828badd +0x247:  call   0828de70 <_GLOBAL__I__ZN12CAchievementC2Ev+0x61d>  ; global constructors keyed to CAchievement::CAchievement()+0x61d
0828bae2 +0x24c:  mov    0x8(%ebp),%eax
0828bae5 +0x24f:  lea    0xc(%eax),%ecx
0828bae8 +0x252:  lea    -0x34(%ebp),%eax
0828baeb +0x255:  lea    -0x2c(%ebp),%edx
0828baee +0x258:  mov    %edx,0x8(%esp)
0828baf2 +0x25c:  mov    %ecx,0x4(%esp)
0828baf6 +0x260:  mov    %eax,(%esp)
0828baf9 +0x263:  call   0828deac <_GLOBAL__I__ZN12CAchievementC2Ev+0x659>  ; global constructors keyed to CAchievement::CAchievement()+0x659
0828bafe +0x268:  sub    $0x4,%esp
0828bb01 +0x26b:  mov    0x8(%ebp),%eax
0828bb04 +0x26e:  mov    %eax,(%esp)
0828bb07 +0x271:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
0828bb0c +0x276:  jmp    0828bb0f <+0x279>
0828bb0e +0x278:  nop
0828bb0f +0x279:  mov    -0x4(%ebp),%ebx
0828bb12 +0x27c:  leave
0828bb13 +0x27d:  ret
```

## 反编译 C

```c
// CAchievement::_setTrigger @ 0x828b896

/* CAchievement::_setTrigger(unsigned int, unsigned short, unsigned short, unsigned short) */

void __thiscall
CAchievement::_setTrigger
          (CAchievement *this,uint param_1,ushort param_2,ushort param_3,ushort param_4)

{
  char cVar1;
  int iVar2;
  uint local_4c;
  ushort local_48;
  ushort local_46;
  ushort local_44 [2];
  _Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>> local_40 [4];
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  local_3c [4];
  pair local_38 [8];
  pair<unsigned_int_const,stAchievement> local_30 [16];
  uint local_20 [4];
  Quest *local_10;
  
  std::
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  ::find((uint *)local_40);
  std::
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  ::end(local_3c);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator!=
                    (local_40,(_Rb_tree_iterator *)local_3c);
  if (cVar1 == '\0') {
    stAchievement::stAchievement((stAchievement *)&local_4c);
    local_4c = param_1;
    iVar2 = G_CDataManager();
    local_10 = (Quest *)CDataManager::find_quest(iVar2);
    if (local_10 == (Quest *)0x0) {
      return;
    }
    cVar1 = Quest::get_init_achievement_trigger(local_10,&local_48,&local_46,local_44);
    if (cVar1 != '\x01') {
      _sendSetTrigger(this,param_1,'\x01');
      return;
    }
    if (local_48 < param_2) {
      local_48 = 0;
    }
    else {
      local_48 = local_48 - param_2;
    }
    if (local_46 < param_3) {
      local_46 = 0;
    }
    else {
      local_46 = local_46 - param_3;
    }
    if (local_44[0] < param_4) {
      local_44[0] = 0;
    }
    else {
      local_44[0] = local_44[0] - param_4;
    }
    std::make_pair<unsigned_int&,stAchievement&>(local_20,(stAchievement *)&local_4c);
    std::pair<unsigned_int_const,stAchievement>::pair<unsigned_int,stAchievement>
              (local_30,(pair *)local_20);
    std::
    map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
    ::insert(local_38);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                      (local_40);
    if (*(ushort *)(iVar2 + 8) < param_2) {
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                        (local_40);
      *(undefined2 *)(iVar2 + 8) = 0;
    }
    else {
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                        (local_40);
      *(ushort *)(iVar2 + 8) = *(short *)(iVar2 + 8) - param_2;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                      (local_40);
    if (*(ushort *)(iVar2 + 10) < param_3) {
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                        (local_40);
      *(undefined2 *)(iVar2 + 10) = 0;
    }
    else {
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                        (local_40);
      *(ushort *)(iVar2 + 10) = *(short *)(iVar2 + 10) - param_3;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                      (local_40);
    if (*(ushort *)(iVar2 + 0xc) < param_4) {
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                        (local_40);
      *(undefined2 *)(iVar2 + 0xc) = 0;
    }
    else {
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                        (local_40);
      *(ushort *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) - param_4;
    }
  }
  charac_expand::CData::alter((CData *)this);
  return;
}
```

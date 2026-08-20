# check_recv_level

`_ZN13EventClassify14CLevelUpReward16check_recv_levelEiiib`

`EventClassify::CLevelUpReward::check_recv_level(int, int, int, bool)`

| 类 | 地址 |
|---|---|
| `EventClassify::CLevelUpReward` | `0x0810e192` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810e192  _ZN13EventClassify14CLevelUpReward16check_recv_levelEiiib
#           EventClassify::CLevelUpReward::check_recv_level(int, int, int, bool)
# range [0x0810e192, 0x0810e2d5]
0810e192 +0x000:  push   %ebp
0810e193 +0x001:  mov    %esp,%ebp
0810e195 +0x003:  push   %ebx
0810e196 +0x004:  sub    $0x34,%esp
0810e199 +0x007:  mov    0x18(%ebp),%eax
0810e19c +0x00a:  mov    %al,-0x1c(%ebp)
0810e19f +0x00d:  mov    0x8(%ebp),%eax
0810e1a2 +0x010:  mov    0x1c(%eax),%eax
0810e1a5 +0x013:  lea    0x10(%eax),%ecx
0810e1a8 +0x016:  lea    -0x14(%ebp),%eax
0810e1ab +0x019:  lea    0x10(%ebp),%edx
0810e1ae +0x01c:  mov    %edx,0x8(%esp)
0810e1b2 +0x020:  mov    %ecx,0x4(%esp)
0810e1b6 +0x024:  mov    %eax,(%esp)
0810e1b9 +0x027:  call   08111c3e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1150>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1150
0810e1be +0x02c:  sub    $0x4,%esp
0810e1c1 +0x02f:  mov    0x8(%ebp),%eax
0810e1c4 +0x032:  mov    0x1c(%eax),%eax
0810e1c7 +0x035:  lea    0x10(%eax),%edx
0810e1ca +0x038:  lea    -0x10(%ebp),%eax
0810e1cd +0x03b:  mov    %edx,0x4(%esp)
0810e1d1 +0x03f:  mov    %eax,(%esp)
0810e1d4 +0x042:  call   08111c6a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x117c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x117c
0810e1d9 +0x047:  sub    $0x4,%esp
0810e1dc +0x04a:  lea    -0x10(%ebp),%eax
0810e1df +0x04d:  mov    %eax,0x4(%esp)
0810e1e3 +0x051:  lea    -0x14(%ebp),%eax
0810e1e6 +0x054:  mov    %eax,(%esp)
0810e1e9 +0x057:  call   08111c90 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11a2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11a2
0810e1ee +0x05c:  test   %al,%al
0810e1f0 +0x05e:  je     0810e2cb <+0x139>
0810e1f6 +0x064:  lea    -0x14(%ebp),%eax
0810e1f9 +0x067:  mov    %eax,(%esp)
0810e1fc +0x06a:  call   08111ca4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11b6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11b6
0810e201 +0x06f:  movzbl 0x5(%eax),%eax
0810e205 +0x073:  cmp    $0xff,%al
0810e207 +0x075:  je     0810e220 <+0x8e>
0810e209 +0x077:  lea    -0x14(%ebp),%eax
0810e20c +0x07a:  mov    %eax,(%esp)
0810e20f +0x07d:  call   08111ca4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11b6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11b6
0810e214 +0x082:  movzbl 0x5(%eax),%eax
0810e218 +0x086:  movsbl %al,%eax
0810e21b +0x089:  cmp    0x14(%ebp),%eax
0810e21e +0x08c:  jne    0810e227 <+0x95>
0810e220 +0x08e:  mov    $0x1,%eax
0810e225 +0x093:  jmp    0810e22c <+0x9a>
0810e227 +0x095:  mov    $0x0,%eax
0810e22c +0x09a:  test   %al,%al
0810e22e +0x09c:  je     0810e2cb <+0x139>
0810e234 +0x0a2:  movl   $0x0,-0xc(%ebp)
0810e23b +0x0a9:  jmp    0810e2a7 <+0x115>
0810e23d +0x0ab:  cmpb   $0x0,-0x1c(%ebp)
0810e241 +0x0af:  je     0810e273 <+0xe1>
0810e243 +0x0b1:  mov    -0xc(%ebp),%ebx
0810e246 +0x0b4:  lea    -0x14(%ebp),%eax
0810e249 +0x0b7:  mov    %eax,(%esp)
0810e24c +0x0ba:  call   08111ca4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11b6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11b6
0810e251 +0x0bf:  add    $0x8,%eax
0810e254 +0x0c2:  mov    %ebx,0x4(%esp)
0810e258 +0x0c6:  mov    %eax,(%esp)
0810e25b +0x0c9:  call   08111cd4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11e6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11e6
0810e260 +0x0ce:  mov    (%eax),%eax
0810e262 +0x0d0:  cmp    0xc(%ebp),%eax
0810e265 +0x0d3:  setle  %al
0810e268 +0x0d6:  test   %al,%al
0810e26a +0x0d8:  je     0810e2a3 <+0x111>
0810e26c +0x0da:  mov    $0x1,%eax
0810e271 +0x0df:  jmp    0810e2d0 <+0x13e>
0810e273 +0x0e1:  mov    -0xc(%ebp),%ebx
0810e276 +0x0e4:  lea    -0x14(%ebp),%eax
0810e279 +0x0e7:  mov    %eax,(%esp)
0810e27c +0x0ea:  call   08111ca4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11b6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11b6
0810e281 +0x0ef:  add    $0x8,%eax
0810e284 +0x0f2:  mov    %ebx,0x4(%esp)
0810e288 +0x0f6:  mov    %eax,(%esp)
0810e28b +0x0f9:  call   08111cd4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11e6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11e6
0810e290 +0x0fe:  mov    (%eax),%eax
0810e292 +0x100:  cmp    0xc(%ebp),%eax
0810e295 +0x103:  sete   %al
0810e298 +0x106:  test   %al,%al
0810e29a +0x108:  je     0810e2a3 <+0x111>
0810e29c +0x10a:  mov    $0x1,%eax
0810e2a1 +0x10f:  jmp    0810e2d0 <+0x13e>
0810e2a3 +0x111:  addl   $0x1,-0xc(%ebp)
0810e2a7 +0x115:  lea    -0x14(%ebp),%eax
0810e2aa +0x118:  mov    %eax,(%esp)
0810e2ad +0x11b:  call   08111ca4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11b6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11b6
0810e2b2 +0x120:  add    $0x8,%eax
0810e2b5 +0x123:  mov    %eax,(%esp)
0810e2b8 +0x126:  call   08111cb2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x11c4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x11c4
0810e2bd +0x12b:  cmp    -0xc(%ebp),%eax
0810e2c0 +0x12e:  setg   %al
0810e2c3 +0x131:  test   %al,%al
0810e2c5 +0x133:  jne    0810e23d <+0xab>
0810e2cb +0x139:  mov    $0x0,%eax
0810e2d0 +0x13e:  mov    -0x4(%ebp),%ebx
0810e2d3 +0x141:  leave
0810e2d4 +0x142:  ret
0810e2d5 +0x143:  nop
```

## 反编译 C

```c
// EventClassify::CLevelUpReward::check_recv_level @ 0x810e192

/* EventClassify::CLevelUpReward::check_recv_level(int, int, int, bool) */

undefined4 __thiscall
EventClassify::CLevelUpReward::check_recv_level
          (CLevelUpReward *this,int param_1,int param_2,int param_3,bool param_4)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  _Rb_tree_iterator<std::pair<int_const,Condition_LevelUp>> local_18 [4];
  map<int,Condition_LevelUp,std::less<int>,std::allocator<std::pair<int_const,Condition_LevelUp>>>
  local_14 [4];
  uint local_10;
  
  std::
  map<int,Condition_LevelUp,std::less<int>,std::allocator<std::pair<int_const,Condition_LevelUp>>>::
  find((int *)local_18);
  std::
  map<int,Condition_LevelUp,std::less<int>,std::allocator<std::pair<int_const,Condition_LevelUp>>>::
  end(local_14);
  cVar3 = std::_Rb_tree_iterator<std::pair<int_const,Condition_LevelUp>>::operator!=
                    (local_18,(_Rb_tree_iterator *)local_14);
  if (cVar3 != '\0') {
    iVar4 = std::_Rb_tree_iterator<std::pair<int_const,Condition_LevelUp>>::operator->(local_18);
    if ((*(char *)(iVar4 + 5) == -1) ||
       (iVar4 = std::_Rb_tree_iterator<std::pair<int_const,Condition_LevelUp>>::operator->(local_18)
       , *(char *)(iVar4 + 5) == param_3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      local_10 = 0;
      while( true ) {
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,Condition_LevelUp>>::operator->(local_18)
        ;
        iVar4 = std::
                vector<Condition_LevelUp::Reward_Item,std::allocator<Condition_LevelUp::Reward_Item>>
                ::size((vector<Condition_LevelUp::Reward_Item,std::allocator<Condition_LevelUp::Reward_Item>>
                        *)(iVar4 + 8));
        uVar2 = local_10;
        if (iVar4 <= (int)local_10) break;
        if (param_4) {
          iVar4 = std::_Rb_tree_iterator<std::pair<int_const,Condition_LevelUp>>::operator->
                            (local_18);
          piVar5 = (int *)std::
                          vector<Condition_LevelUp::Reward_Item,std::allocator<Condition_LevelUp::Reward_Item>>
                          ::operator[]((vector<Condition_LevelUp::Reward_Item,std::allocator<Condition_LevelUp::Reward_Item>>
                                        *)(iVar4 + 8),uVar2);
          if (*piVar5 <= param_1) {
            return 1;
          }
        }
        else {
          iVar4 = std::_Rb_tree_iterator<std::pair<int_const,Condition_LevelUp>>::operator->
                            (local_18);
          piVar5 = (int *)std::
                          vector<Condition_LevelUp::Reward_Item,std::allocator<Condition_LevelUp::Reward_Item>>
                          ::operator[]((vector<Condition_LevelUp::Reward_Item,std::allocator<Condition_LevelUp::Reward_Item>>
                                        *)(iVar4 + 8),uVar2);
          if (*piVar5 == param_1) {
            return 1;
          }
        }
        local_10 = local_10 + 1;
      }
    }
  }
  return 0;
}
```

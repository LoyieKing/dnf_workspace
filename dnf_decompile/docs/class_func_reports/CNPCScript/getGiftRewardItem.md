# getGiftRewardItem

`_ZNK10CNPCScript17getGiftRewardItemE13ENUM_NPC_MOOD27ENUM_NPC_FAVOR_CHANGE_CONSTj`

`CNPCScript::getGiftRewardItem(ENUM_NPC_MOOD, ENUM_NPC_FAVOR_CHANGE_CONST, unsigned int) const`

| 类 | 地址 |
|---|---|
| `CNPCScript` | `0x08580d30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08580d30  _ZNK10CNPCScript17getGiftRewardItemE13ENUM_NPC_MOOD27ENUM_NPC_FAVOR_CHANGE_CONSTj
#           CNPCScript::getGiftRewardItem(ENUM_NPC_MOOD, ENUM_NPC_FAVOR_CHANGE_CONST, unsigned int) const
# range [0x08580d30, 0x08580e69]
08580d30 +0x000:  push   %ebp
08580d31 +0x001:  mov    %esp,%ebp
08580d33 +0x003:  push   %edi
08580d34 +0x004:  push   %esi
08580d35 +0x005:  push   %ebx
08580d36 +0x006:  sub    $0x2c,%esp
08580d39 +0x009:  mov    0x8(%ebp),%ebx
08580d3c +0x00c:  mov    %ebx,(%esp)
08580d3f +0x00f:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08580d44 +0x014:  mov    0x18(%ebp),%ecx
08580d47 +0x017:  mov    0x10(%ebp),%esi
08580d4a +0x01a:  mov    0x14(%ebp),%eax
08580d4d +0x01d:  mov    %eax,%edx
08580d4f +0x01f:  add    %edx,%edx
08580d51 +0x021:  add    %eax,%edx
08580d53 +0x023:  lea    0x0(,%edx,4),%eax
08580d5a +0x02a:  mov    %eax,%edx
08580d5c +0x02c:  mov    %esi,%eax
08580d5e +0x02e:  add    %eax,%eax
08580d60 +0x030:  add    %esi,%eax
08580d62 +0x032:  shl    $0x4,%eax
08580d65 +0x035:  add    %eax,%edx
08580d67 +0x037:  mov    %ecx,%eax
08580d69 +0x039:  shl    $0x3,%eax
08580d6c +0x03c:  add    %ecx,%eax
08580d6e +0x03e:  shl    $0x4,%eax
08580d71 +0x041:  lea    (%edx,%eax,1),%eax
08580d74 +0x044:  add    $0x370,%eax
08580d79 +0x049:  add    0xc(%ebp),%eax
08580d7c +0x04c:  add    $0xc,%eax
08580d7f +0x04f:  mov    %eax,-0x28(%ebp)
08580d82 +0x052:  mov    0x18(%ebp),%ecx
08580d85 +0x055:  mov    0x10(%ebp),%eax
08580d88 +0x058:  mov    0x14(%ebp),%edi
08580d8b +0x05b:  mov    0xc(%ebp),%esi
08580d8e +0x05e:  mov    %eax,%edx
08580d90 +0x060:  add    %edx,%edx
08580d92 +0x062:  add    %eax,%edx
08580d94 +0x064:  lea    0x0(,%edx,4),%eax
08580d9b +0x06b:  mov    %eax,%edx
08580d9d +0x06d:  mov    %ecx,%eax
08580d9f +0x06f:  shl    $0x3,%eax
08580da2 +0x072:  add    %ecx,%eax
08580da4 +0x074:  shl    $0x2,%eax
08580da7 +0x077:  lea    (%edx,%eax,1),%eax
08580daa +0x07a:  add    %edi,%eax
08580dac +0x07c:  add    $0xe4,%eax
08580db1 +0x081:  mov    0x10(%esi,%eax,4),%eax
08580db5 +0x085:  mov    %eax,(%esp)
08580db8 +0x088:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08580dbd +0x08d:  mov    %eax,-0x24(%ebp)
08580dc0 +0x090:  movl   $0x0,-0x20(%ebp)
08580dc7 +0x097:  jmp    08580e41 <+0x111>
08580dc9 +0x099:  mov    -0x20(%ebp),%eax
08580dcc +0x09c:  mov    %eax,0x4(%esp)
08580dd0 +0x0a0:  mov    -0x28(%ebp),%eax
08580dd3 +0x0a3:  mov    %eax,(%esp)
08580dd6 +0x0a6:  call   08582b76 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1308>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1308
08580ddb +0x0ab:  mov    %eax,-0x1c(%ebp)
08580dde +0x0ae:  mov    -0x1c(%ebp),%eax
08580de1 +0x0b1:  mov    0x8(%eax),%eax
08580de4 +0x0b4:  cmp    -0x24(%ebp),%eax
08580de7 +0x0b7:  jbe    08580e3d <+0x10d>
08580de9 +0x0b9:  mov    -0x1c(%ebp),%eax
08580dec +0x0bc:  mov    (%eax),%eax
08580dee +0x0be:  test   %eax,%eax
08580df0 +0x0c0:  jne    08580dfc <+0xcc>
08580df2 +0x0c2:  mov    -0x1c(%ebp),%eax
08580df5 +0x0c5:  mov    0x4(%eax),%eax
08580df8 +0x0c8:  test   %eax,%eax
08580dfa +0x0ca:  je     08580e5c <+0x12c>
08580dfc +0x0cc:  mov    -0x1c(%ebp),%eax
08580dff +0x0cf:  mov    (%eax),%eax
08580e01 +0x0d1:  mov    %eax,0x2(%ebx)
08580e04 +0x0d4:  mov    -0x20(%ebp),%eax
08580e07 +0x0d7:  mov    %eax,0x4(%esp)
08580e0b +0x0db:  mov    -0x28(%ebp),%eax
08580e0e +0x0de:  mov    %eax,(%esp)
08580e11 +0x0e1:  call   08582b76 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1308>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1308
08580e16 +0x0e6:  mov    0x4(%eax),%eax
08580e19 +0x0e9:  mov    %eax,%esi
08580e1b +0x0eb:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08580e20 +0x0f0:  mov    0xc(%eax),%eax
08580e23 +0x0f3:  mov    %esi,0xc(%esp)
08580e27 +0x0f7:  mov    %ebx,0x8(%esp)
08580e2b +0x0fb:  movl   $0x0,0x4(%esp)
08580e33 +0x103:  mov    %eax,(%esp)
08580e36 +0x106:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
08580e3b +0x10b:  jmp    08580e5d <+0x12d>
08580e3d +0x10d:  addl   $0x1,-0x20(%ebp)
08580e41 +0x111:  mov    -0x28(%ebp),%eax
08580e44 +0x114:  mov    %eax,(%esp)
08580e47 +0x117:  call   08582b54 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x12e6>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x12e6
08580e4c +0x11c:  cmp    -0x20(%ebp),%eax
08580e4f +0x11f:  seta   %al
08580e52 +0x122:  test   %al,%al
08580e54 +0x124:  jne    08580dc9 <+0x99>
08580e5a +0x12a:  jmp    08580e5d <+0x12d>
08580e5c +0x12c:  nop
08580e5d +0x12d:  mov    %ebx,%eax
08580e5f +0x12f:  add    $0x2c,%esp
08580e62 +0x132:  pop    %ebx
08580e63 +0x133:  pop    %esi
08580e64 +0x134:  pop    %edi
08580e65 +0x135:  pop    %ebp
08580e66 +0x136:  ret    $0x4
08580e69 +0x139:  nop
```

## 反编译 C

```c
// CNPCScript::getGiftRewardItem @ 0x8580d30

/* CNPCScript::getGiftRewardItem(ENUM_NPC_MOOD, ENUM_NPC_FAVOR_CHANGE_CONST, unsigned int) const */

Inven_Item *
CNPCScript::getGiftRewardItem(Inven_Item *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  vector<stFavorableRelationShip_t::stRewardItemElement_t,std::allocator<stFavorableRelationShip_t::stRewardItemElement_t>>
  *this;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint local_24;
  
  Inven_Item::Inven_Item(param_1);
  this = (vector<stFavorableRelationShip_t::stRewardItemElement_t,std::allocator<stFavorableRelationShip_t::stRewardItemElement_t>>
          *)(param_4 * 0xc + param_3 * 0x30 + param_5 * 0x90 + param_2 + 0x37c);
  uVar2 = get_rand_int(*(int *)(param_2 + 0x10 +
                               (param_3 * 0xc + param_5 * 0x24 + param_4 + 0xe4) * 4));
  local_24 = 0;
  while( true ) {
    uVar5 = std::
            vector<stFavorableRelationShip_t::stRewardItemElement_t,std::allocator<stFavorableRelationShip_t::stRewardItemElement_t>>
            ::size(this);
    if (uVar5 <= local_24) {
      return param_1;
    }
    piVar3 = (int *)std::
                    vector<stFavorableRelationShip_t::stRewardItemElement_t,std::allocator<stFavorableRelationShip_t::stRewardItemElement_t>>
                    ::at(this,local_24);
    if (uVar2 < (uint)piVar3[2]) break;
    local_24 = local_24 + 1;
  }
  if ((*piVar3 == 0) && (piVar3[1] == 0)) {
    return param_1;
  }
  *(int *)(param_1 + 2) = *piVar3;
  iVar4 = std::
          vector<stFavorableRelationShip_t::stRewardItemElement_t,std::allocator<stFavorableRelationShip_t::stRewardItemElement_t>>
          ::at(this,local_24);
  uVar1 = *(undefined4 *)(iVar4 + 4);
  iVar4 = G_CDataManager();
  CItemList::create_item(*(CItemList **)(iVar4 + 0xc),0,param_1,uVar1);
  return param_1;
}
```

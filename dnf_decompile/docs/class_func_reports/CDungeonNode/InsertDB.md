# InsertDB

`_ZN12CDungeonNode8InsertDBERK10DungeonKey`

`CDungeonNode::InsertDB(DungeonKey const&)`

| 类 | 地址 |
|---|---|
| `CDungeonNode` | `0x08485ba4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08485ba4  _ZN12CDungeonNode8InsertDBERK10DungeonKey
#           CDungeonNode::InsertDB(DungeonKey const&)
# range [0x08485ba4, 0x08485dff]
08485ba4 +0x000:  push   %ebp
08485ba5 +0x001:  mov    %esp,%ebp
08485ba7 +0x003:  push   %edi
08485ba8 +0x004:  push   %esi
08485ba9 +0x005:  push   %ebx
08485baa +0x006:  sub    $0x7c,%esp
08485bad +0x009:  mov    0x8(%ebp),%edx
08485bb0 +0x00c:  lea    -0x54(%ebp),%eax
08485bb3 +0x00f:  mov    %edx,0x4(%esp)
08485bb7 +0x013:  mov    %eax,(%esp)
08485bba +0x016:  call   08487c8c <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x16c6>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x16c6
08485bbf +0x01b:  sub    $0x4,%esp
08485bc2 +0x01e:  jmp    08485cd7 <+0x133>
08485bc7 +0x023:  lea    -0x54(%ebp),%eax
08485bca +0x026:  mov    %eax,(%esp)
08485bcd +0x029:  call   08487978 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x13b2>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x13b2
08485bd2 +0x02e:  add    $0x4,%eax
08485bd5 +0x031:  mov    %eax,-0x30(%ebp)
08485bd8 +0x034:  lea    -0x54(%ebp),%eax
08485bdb +0x037:  mov    %eax,(%esp)
08485bde +0x03a:  call   08487978 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x13b2>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x13b2
08485be3 +0x03f:  mov    (%eax),%eax
08485be5 +0x041:  mov    %eax,-0x2c(%ebp)
08485be8 +0x044:  mov    -0x30(%ebp),%eax
08485beb +0x047:  mov    0x8(%eax),%eax
08485bee +0x04a:  test   %eax,%eax
08485bf0 +0x04c:  je     08485caf <+0x10b>
08485bf6 +0x052:  call   08485b79 <_Z16GetMySqLInstancev>  ; GetMySqLInstance()
08485bfb +0x057:  mov    %eax,-0x28(%ebp)
08485bfe +0x05a:  mov    -0x30(%ebp),%eax
08485c01 +0x05d:  mov    0x4(%eax),%eax
08485c04 +0x060:  mov    %eax,-0x5c(%ebp)
08485c07 +0x063:  mov    -0x30(%ebp),%eax
08485c0a +0x066:  mov    (%eax),%edi
08485c0c +0x068:  mov    0xc(%ebp),%eax
08485c0f +0x06b:  mov    0x4(%eax),%esi
08485c12 +0x06e:  mov    0xc(%ebp),%eax
08485c15 +0x071:  mov    (%eax),%ebx
08485c17 +0x073:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08485c1c +0x078:  mov    %eax,(%esp)
08485c1f +0x07b:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
08485c24 +0x080:  mov    -0x5c(%ebp),%edx
08485c27 +0x083:  mov    %edx,0x1c(%esp)
08485c2b +0x087:  mov    %edi,0x18(%esp)
08485c2f +0x08b:  mov    -0x2c(%ebp),%edx
08485c32 +0x08e:  mov    %edx,0x14(%esp)
08485c36 +0x092:  mov    %esi,0x10(%esp)
08485c3a +0x096:  mov    %ebx,0xc(%esp)
08485c3e +0x09a:  mov    %eax,0x8(%esp)
08485c42 +0x09e:  movl   $"inSert into log_dungeon_monster(channel_no,dungeon_index,dungeon_diff,monster_index,damage_total,damage_count,last_time) values(%d,%d,%d,%d,%d,%d,NOW())",0x4(%esp)
08485c4a +0x0a6:  mov    -0x28(%ebp),%eax
08485c4d +0x0a9:  mov    %eax,(%esp)
08485c50 +0x0ac:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08485c55 +0x0b1:  movl   $0x1,0x4(%esp)
08485c5d +0x0b9:  mov    -0x28(%ebp),%eax
08485c60 +0x0bc:  mov    %eax,(%esp)
08485c63 +0x0bf:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08485c68 +0x0c4:  xor    $0x1,%eax
08485c6b +0x0c7:  test   %al,%al
08485c6d +0x0c9:  je     08485caf <+0x10b>
08485c6f +0x0cb:  movl   $0x5,0xc(%esp)
08485c77 +0x0d3:  movl   $0x13d,0x8(%esp)
08485c7f +0x0db:  movl   $&_ZZN12CDungeonNode8InsertDBERK10DungeonKeyE19__PRETTY_FUNCTION__,0x4(%esp)
08485c87 +0x0e3:  lea    -0x4c(%ebp),%eax
08485c8a +0x0e6:  mov    %eax,(%esp)
08485c8d +0x0e9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08485c92 +0x0ee:  movl   $"inSert log_dungeon_monster failed ",0x4(%esp)
08485c9a +0x0f6:  lea    -0x4c(%ebp),%eax
08485c9d +0x0f9:  mov    %eax,(%esp)
08485ca0 +0x0fc:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08485ca5 +0x101:  mov    $0x0,%eax
08485caa +0x106:  jmp    08485df5 <+0x251>
08485caf +0x10b:  mov    -0x30(%ebp),%eax
08485cb2 +0x10e:  mov    %eax,(%esp)
08485cb5 +0x111:  call   08486956 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x390>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x390
08485cba +0x116:  lea    -0x3c(%ebp),%eax
08485cbd +0x119:  movl   $0x0,0x8(%esp)
08485cc5 +0x121:  lea    -0x54(%ebp),%edx
08485cc8 +0x124:  mov    %edx,0x4(%esp)
08485ccc +0x128:  mov    %eax,(%esp)
08485ccf +0x12b:  call   08487cb2 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x16ec>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x16ec
08485cd4 +0x130:  sub    $0x4,%esp
08485cd7 +0x133:  mov    0x8(%ebp),%edx
08485cda +0x136:  lea    -0x50(%ebp),%eax
08485cdd +0x139:  mov    %edx,0x4(%esp)
08485ce1 +0x13d:  mov    %eax,(%esp)
08485ce4 +0x140:  call   084876b8 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x10f2>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x10f2
08485ce9 +0x145:  sub    $0x4,%esp
08485cec +0x148:  lea    -0x50(%ebp),%eax
08485cef +0x14b:  mov    %eax,0x4(%esp)
08485cf3 +0x14f:  lea    -0x54(%ebp),%eax
08485cf6 +0x152:  mov    %eax,(%esp)
08485cf9 +0x155:  call   084876de <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x1118>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x1118
08485cfe +0x15a:  test   %al,%al
08485d00 +0x15c:  jne    08485bc7 <+0x23>
08485d06 +0x162:  mov    0x8(%ebp),%eax
08485d09 +0x165:  lea    0x18(%eax),%edx
08485d0c +0x168:  lea    -0x58(%ebp),%eax
08485d0f +0x16b:  mov    %edx,0x4(%esp)
08485d13 +0x16f:  mov    %eax,(%esp)
08485d16 +0x172:  call   08487cf0 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x172a>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x172a
08485d1b +0x177:  sub    $0x4,%esp
08485d1e +0x17a:  jmp    08485d77 <+0x1d3>
08485d20 +0x17c:  lea    -0x58(%ebp),%eax
08485d23 +0x17f:  mov    %eax,(%esp)
08485d26 +0x182:  call   08487804 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x123e>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x123e
08485d2b +0x187:  add    $0x4,%eax
08485d2e +0x18a:  mov    %eax,-0x24(%ebp)
08485d31 +0x18d:  lea    -0x58(%ebp),%eax
08485d34 +0x190:  mov    %eax,(%esp)
08485d37 +0x193:  call   08487804 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x123e>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x123e
08485d3c +0x198:  mov    (%eax),%eax
08485d3e +0x19a:  mov    %eax,-0x20(%ebp)
08485d41 +0x19d:  mov    -0x20(%ebp),%eax
08485d44 +0x1a0:  mov    %eax,0x8(%esp)
08485d48 +0x1a4:  mov    0xc(%ebp),%eax
08485d4b +0x1a7:  mov    %eax,0x4(%esp)
08485d4f +0x1ab:  mov    -0x24(%ebp),%eax
08485d52 +0x1ae:  mov    %eax,(%esp)
08485d55 +0x1b1:  call   08485e00 <_ZN15CDungeonJobNode8InsertDBERK10DungeonKeyi>  ; CDungeonJobNode::InsertDB(DungeonKey const&, int)
08485d5a +0x1b6:  lea    -0x34(%ebp),%eax
08485d5d +0x1b9:  movl   $0x0,0x8(%esp)
08485d65 +0x1c1:  lea    -0x58(%ebp),%edx
08485d68 +0x1c4:  mov    %edx,0x4(%esp)
08485d6c +0x1c8:  mov    %eax,(%esp)
08485d6f +0x1cb:  call   08487d16 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x1750>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x1750
08485d74 +0x1d0:  sub    $0x4,%esp
08485d77 +0x1d3:  mov    0x8(%ebp),%eax
08485d7a +0x1d6:  lea    0x18(%eax),%edx
08485d7d +0x1d9:  lea    -0x38(%ebp),%eax
08485d80 +0x1dc:  mov    %edx,0x4(%esp)
08485d84 +0x1e0:  mov    %eax,(%esp)
08485d87 +0x1e3:  call   084877ca <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x1204>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x1204
08485d8c +0x1e8:  sub    $0x4,%esp
08485d8f +0x1eb:  lea    -0x38(%ebp),%eax
08485d92 +0x1ee:  mov    %eax,0x4(%esp)
08485d96 +0x1f2:  lea    -0x58(%ebp),%eax
08485d99 +0x1f5:  mov    %eax,(%esp)
08485d9c +0x1f8:  call   084877f0 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x122a>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x122a
08485da1 +0x1fd:  test   %al,%al
08485da3 +0x1ff:  jne    08485d20 <+0x17c>
08485da9 +0x205:  movl   $0x0,-0x1c(%ebp)
08485db0 +0x20c:  jmp    08485de5 <+0x241>
08485db2 +0x20e:  cmpl   $0x0,-0x1c(%ebp)
08485db6 +0x212:  setne  %al
08485db9 +0x215:  movzbl %al,%ecx
08485dbc +0x218:  mov    -0x1c(%ebp),%eax
08485dbf +0x21b:  lea    0x1(%eax),%edx
08485dc2 +0x21e:  mov    %edx,%eax
08485dc4 +0x220:  add    %eax,%eax
08485dc6 +0x222:  add    %edx,%eax
08485dc8 +0x224:  shl    $0x4,%eax
08485dcb +0x227:  add    0x8(%ebp),%eax
08485dce +0x22a:  mov    %ecx,0x8(%esp)
08485dd2 +0x22e:  mov    0xc(%ebp),%edx
08485dd5 +0x231:  mov    %edx,0x4(%esp)
08485dd9 +0x235:  mov    %eax,(%esp)
08485ddc +0x238:  call   08485f8a <_ZN19CDungeonSuccessNode8InsertDBERK10DungeonKeyb>  ; CDungeonSuccessNode::InsertDB(DungeonKey const&, bool)
08485de1 +0x23d:  addl   $0x1,-0x1c(%ebp)
08485de5 +0x241:  cmpl   $0x1,-0x1c(%ebp)
08485de9 +0x245:  setle  %al
08485dec +0x248:  test   %al,%al
08485dee +0x24a:  jne    08485db2 <+0x20e>
08485df0 +0x24c:  mov    $0x1,%eax
08485df5 +0x251:  lea    -0xc(%ebp),%esp
08485df8 +0x254:  add    $0x0,%esp
08485dfb +0x257:  pop    %ebx
08485dfc +0x258:  pop    %esi
08485dfd +0x259:  pop    %edi
08485dfe +0x25a:  pop    %ebp
08485dff +0x25b:  ret
```

## 反编译 C

```c
// CDungeonNode::InsertDB @ 0x8485ba4

/* CDungeonNode::InsertDB(DungeonKey const&) */

undefined4 __thiscall CDungeonNode::InsertDB(CDungeonNode *this,DungeonKey *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 *puVar6;
  CEnvironment *this_00;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  map<int,CDungeonJobNode,std::less<int>,std::allocator<std::pair<int_const,CDungeonJobNode>>>
  local_5c [4];
  map<int,Monster,std::less<int>,std::allocator<std::pair<int_const,Monster>>> local_58 [4];
  map<int,Monster,std::less<int>,std::allocator<std::pair<int_const,Monster>>> local_54 [4];
  cMyTrace local_50 [16];
  _Rb_tree_iterator<std::pair<int_const,Monster>> local_40 [4];
  map<int,CDungeonJobNode,std::less<int>,std::allocator<std::pair<int_const,CDungeonJobNode>>>
  local_3c [4];
  _Rb_tree_iterator<std::pair<int_const,CDungeonJobNode>> local_38 [4];
  Monster *local_34;
  undefined4 local_30;
  MySQL *local_2c;
  CDungeonJobNode *local_28;
  int local_24;
  int local_20;
  
  std::map<int,Monster,std::less<int>,std::allocator<std::pair<int_const,Monster>>>::begin(local_58)
  ;
  do {
    std::map<int,Monster,std::less<int>,std::allocator<std::pair<int_const,Monster>>>::end(local_54)
    ;
    cVar5 = std::_Rb_tree_iterator<std::pair<int_const,Monster>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,Monster>> *)local_58,
                       (_Rb_tree_iterator *)local_54);
    if (cVar5 == '\0') {
      std::
      map<int,CDungeonJobNode,std::less<int>,std::allocator<std::pair<int_const,CDungeonJobNode>>>::
      begin(local_5c);
      while( true ) {
        std::
        map<int,CDungeonJobNode,std::less<int>,std::allocator<std::pair<int_const,CDungeonJobNode>>>
        ::end(local_3c);
        cVar5 = std::_Rb_tree_iterator<std::pair<int_const,CDungeonJobNode>>::operator!=
                          ((_Rb_tree_iterator<std::pair<int_const,CDungeonJobNode>> *)local_5c,
                           (_Rb_tree_iterator *)local_3c);
        if (cVar5 == '\0') break;
        iVar8 = std::_Rb_tree_iterator<std::pair<int_const,CDungeonJobNode>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,CDungeonJobNode>> *)local_5c);
        local_28 = (CDungeonJobNode *)(iVar8 + 4);
        piVar9 = (int *)std::_Rb_tree_iterator<std::pair<int_const,CDungeonJobNode>>::operator->
                                  ((_Rb_tree_iterator<std::pair<int_const,CDungeonJobNode>> *)
                                   local_5c);
        local_24 = *piVar9;
        CDungeonJobNode::InsertDB(local_28,param_1,local_24);
        std::_Rb_tree_iterator<std::pair<int_const,CDungeonJobNode>>::operator++
                  (local_38,(int)local_5c);
      }
      for (local_20 = 0; local_20 < 2; local_20 = local_20 + 1) {
        CDungeonSuccessNode::InsertDB
                  ((CDungeonSuccessNode *)(this + (local_20 + 1) * 0x30),param_1,local_20 != 0);
      }
      return 1;
    }
    iVar8 = std::_Rb_tree_iterator<std::pair<int_const,Monster>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,Monster>> *)local_58);
    local_34 = (Monster *)(iVar8 + 4);
    puVar6 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,Monster>>::operator->
                       ((_Rb_tree_iterator<std::pair<int_const,Monster>> *)local_58);
    local_30 = *puVar6;
    if (*(int *)(local_34 + 8) != 0) {
      local_2c = (MySQL *)GetMySqLInstance();
      uVar1 = *(undefined4 *)(local_34 + 4);
      uVar2 = *(undefined4 *)local_34;
      uVar3 = *(undefined4 *)(param_1 + 4);
      uVar4 = *(undefined4 *)param_1;
      this_00 = (CEnvironment *)G_CEnvironment();
      uVar7 = CEnvironment::get_channel_no(this_00);
      MySQL::set_query(local_2c,
                       "inSert into log_dungeon_monster(channel_no,dungeon_index,dungeon_diff,monster_index,damage_total,damage_count,last_time) values(%d,%d,%d,%d,%d,%d,NOW())"
                       ,uVar7,uVar4,uVar3,local_30,uVar2,uVar1);
      cVar5 = MySQL::exec(local_2c,true);
      if (cVar5 != '\x01') {
        cMyTrace::cMyTrace(local_50,"bool CDungeonNode::InsertDB(const DungeonKey&)",0x13d,5);
        cMyTrace::operator()(local_50,"inSert log_dungeon_monster failed ");
        return 0;
      }
    }
    Monster::Reset(local_34);
    std::_Rb_tree_iterator<std::pair<int_const,Monster>>::operator++(local_40,(int)local_58);
  } while( true );
}
```

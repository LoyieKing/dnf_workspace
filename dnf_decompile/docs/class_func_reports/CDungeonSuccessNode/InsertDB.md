# InsertDB

`_ZN19CDungeonSuccessNode8InsertDBERK10DungeonKeyb`

`CDungeonSuccessNode::InsertDB(DungeonKey const&, bool)`

| 类 | 地址 |
|---|---|
| `CDungeonSuccessNode` | `0x08485f8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08485f8a  _ZN19CDungeonSuccessNode8InsertDBERK10DungeonKeyb
#           CDungeonSuccessNode::InsertDB(DungeonKey const&, bool)
# range [0x08485f8a, 0x08486233]
08485f8a +0x000:  push   %ebp
08485f8b +0x001:  mov    %esp,%ebp
08485f8d +0x003:  push   %edi
08485f8e +0x004:  push   %esi
08485f8f +0x005:  push   %ebx
08485f90 +0x006:  sub    $0xcc,%esp
08485f96 +0x00c:  mov    0x10(%ebp),%eax
08485f99 +0x00f:  mov    %al,-0x5c(%ebp)
08485f9c +0x012:  mov    0x8(%ebp),%eax
08485f9f +0x015:  lea    0x18(%eax),%edx
08485fa2 +0x018:  lea    -0x50(%ebp),%eax
08485fa5 +0x01b:  mov    %edx,0x4(%esp)
08485fa9 +0x01f:  mov    %eax,(%esp)
08485fac +0x022:  call   08487db8 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x17f2>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x17f2
08485fb1 +0x027:  sub    $0x4,%esp
08485fb4 +0x02a:  jmp    08486013 <+0x89>
08485fb6 +0x02c:  lea    -0x50(%ebp),%eax
08485fb9 +0x02f:  mov    %eax,(%esp)
08485fbc +0x032:  call   0848767e <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x10b8>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x10b8
08485fc1 +0x037:  mov    %eax,-0x2c(%ebp)
08485fc4 +0x03a:  lea    -0x50(%ebp),%eax
08485fc7 +0x03d:  mov    %eax,(%esp)
08485fca +0x040:  call   0848767e <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x10b8>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x10b8
08485fcf +0x045:  add    $0x8,%eax
08485fd2 +0x048:  mov    %eax,-0x28(%ebp)
08485fd5 +0x04b:  movzbl -0x5c(%ebp),%eax
08485fd9 +0x04f:  mov    -0x2c(%ebp),%edx
08485fdc +0x052:  mov    %edx,0xc(%esp)
08485fe0 +0x056:  mov    %eax,0x8(%esp)
08485fe4 +0x05a:  mov    0xc(%ebp),%eax
08485fe7 +0x05d:  mov    %eax,0x4(%esp)
08485feb +0x061:  mov    -0x28(%ebp),%eax
08485fee +0x064:  mov    %eax,(%esp)
08485ff1 +0x067:  call   08486234 <_ZN15CSuccessJobNode8InsertDBERK10DungeonKeybRK6JobKey>  ; CSuccessJobNode::InsertDB(DungeonKey const&, bool, JobKey const&)
08485ff6 +0x06c:  lea    -0x48(%ebp),%eax
08485ff9 +0x06f:  movl   $0x0,0x8(%esp)
08486001 +0x077:  lea    -0x50(%ebp),%edx
08486004 +0x07a:  mov    %edx,0x4(%esp)
08486008 +0x07e:  mov    %eax,(%esp)
0848600b +0x081:  call   08487dde <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x1818>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x1818
08486010 +0x086:  sub    $0x4,%esp
08486013 +0x089:  mov    0x8(%ebp),%eax
08486016 +0x08c:  lea    0x18(%eax),%edx
08486019 +0x08f:  lea    -0x4c(%ebp),%eax
0848601c +0x092:  mov    %edx,0x4(%esp)
08486020 +0x096:  mov    %eax,(%esp)
08486023 +0x099:  call   08487500 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xf3a>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xf3a
08486028 +0x09e:  sub    $0x4,%esp
0848602b +0x0a1:  lea    -0x4c(%ebp),%eax
0848602e +0x0a4:  mov    %eax,0x4(%esp)
08486032 +0x0a8:  lea    -0x50(%ebp),%eax
08486035 +0x0ab:  mov    %eax,(%esp)
08486038 +0x0ae:  call   08487526 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xf60>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xf60
0848603d +0x0b3:  test   %al,%al
0848603f +0x0b5:  jne    08485fb6 <+0x2c>
08486045 +0x0bb:  mov    0x8(%ebp),%edx
08486048 +0x0be:  lea    -0x54(%ebp),%eax
0848604b +0x0c1:  mov    %edx,0x4(%esp)
0848604f +0x0c5:  mov    %eax,(%esp)
08486052 +0x0c8:  call   08487e1c <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x1856>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x1856
08486057 +0x0cd:  sub    $0x4,%esp
0848605a +0x0d0:  jmp    084861f4 <+0x26a>
0848605f +0x0d5:  lea    -0x54(%ebp),%eax
08486062 +0x0d8:  mov    %eax,(%esp)
08486065 +0x0db:  call   08487670 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x10aa>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x10aa
0848606a +0x0e0:  mov    %eax,-0x24(%ebp)
0848606d +0x0e3:  lea    -0x54(%ebp),%eax
08486070 +0x0e6:  mov    %eax,(%esp)
08486073 +0x0e9:  call   08487670 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x10aa>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x10aa
08486078 +0x0ee:  add    $0x4,%eax
0848607b +0x0f1:  mov    %eax,-0x20(%ebp)
0848607e +0x0f4:  mov    -0x20(%ebp),%eax
08486081 +0x0f7:  mov    0x3c(%eax),%eax
08486084 +0x0fa:  test   %eax,%eax
08486086 +0x0fc:  je     084861cc <+0x242>
0848608c +0x102:  call   08485b79 <_Z16GetMySqLInstancev>  ; GetMySqLInstance()
08486091 +0x107:  mov    %eax,-0x1c(%ebp)
08486094 +0x10a:  mov    -0x24(%ebp),%eax
08486097 +0x10d:  mov    (%eax),%edi
08486099 +0x10f:  mov    -0x20(%ebp),%eax
0848609c +0x112:  mov    0x24(%eax),%eax
0848609f +0x115:  mov    %eax,-0x80(%ebp)
084860a2 +0x118:  movzbl -0x5c(%ebp),%eax
084860a6 +0x11c:  mov    %eax,-0x7c(%ebp)
084860a9 +0x11f:  mov    0xc(%ebp),%eax
084860ac +0x122:  mov    0x4(%eax),%eax
084860af +0x125:  mov    %eax,-0x78(%ebp)
084860b2 +0x128:  mov    0xc(%ebp),%eax
084860b5 +0x12b:  mov    (%eax),%eax
084860b7 +0x12d:  mov    %eax,-0x74(%ebp)
084860ba +0x130:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084860bf +0x135:  mov    %eax,(%esp)
084860c2 +0x138:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
084860c7 +0x13d:  mov    %eax,-0x70(%ebp)
084860ca +0x140:  mov    -0x20(%ebp),%eax
084860cd +0x143:  mov    0x3c(%eax),%eax
084860d0 +0x146:  mov    %eax,-0x6c(%ebp)
084860d3 +0x149:  mov    -0x20(%ebp),%eax
084860d6 +0x14c:  mov    0x1c(%eax),%eax
084860d9 +0x14f:  mov    %eax,-0x68(%ebp)
084860dc +0x152:  mov    -0x20(%ebp),%eax
084860df +0x155:  mov    0x18(%eax),%eax
084860e2 +0x158:  mov    %eax,-0x64(%ebp)
084860e5 +0x15b:  mov    -0x20(%ebp),%eax
084860e8 +0x15e:  mov    0x14(%eax),%eax
084860eb +0x161:  mov    %eax,-0x60(%ebp)
084860ee +0x164:  mov    -0x20(%ebp),%eax
084860f1 +0x167:  mov    0x10(%eax),%esi
084860f4 +0x16a:  mov    -0x20(%ebp),%eax
084860f7 +0x16d:  mov    0xc(%eax),%ebx
084860fa +0x170:  mov    -0x20(%ebp),%eax
084860fd +0x173:  mov    0x8(%eax),%ecx
08486100 +0x176:  mov    -0x20(%ebp),%eax
08486103 +0x179:  mov    0x4(%eax),%edx
08486106 +0x17c:  mov    -0x20(%ebp),%eax
08486109 +0x17f:  mov    (%eax),%eax
0848610b +0x181:  mov    %edi,0x40(%esp)
0848610f +0x185:  mov    -0x80(%ebp),%edi
08486112 +0x188:  mov    %edi,0x3c(%esp)
08486116 +0x18c:  mov    -0x7c(%ebp),%edi
08486119 +0x18f:  mov    %edi,0x38(%esp)
0848611d +0x193:  mov    -0x78(%ebp),%edi
08486120 +0x196:  mov    %edi,0x34(%esp)
08486124 +0x19a:  mov    -0x74(%ebp),%edi
08486127 +0x19d:  mov    %edi,0x30(%esp)
0848612b +0x1a1:  mov    -0x70(%ebp),%edi
0848612e +0x1a4:  mov    %edi,0x2c(%esp)
08486132 +0x1a8:  mov    -0x6c(%ebp),%edi
08486135 +0x1ab:  mov    %edi,0x28(%esp)
08486139 +0x1af:  mov    -0x68(%ebp),%edi
0848613c +0x1b2:  mov    %edi,0x24(%esp)
08486140 +0x1b6:  mov    -0x64(%ebp),%edi
08486143 +0x1b9:  mov    %edi,0x20(%esp)
08486147 +0x1bd:  mov    -0x60(%ebp),%edi
0848614a +0x1c0:  mov    %edi,0x1c(%esp)
0848614e +0x1c4:  mov    %esi,0x18(%esp)
08486152 +0x1c8:  mov    %ebx,0x14(%esp)
08486156 +0x1cc:  mov    %ecx,0x10(%esp)
0848615a +0x1d0:  mov    %edx,0xc(%esp)
0848615e +0x1d4:  mov    %eax,0x8(%esp)
08486162 +0x1d8:  movl   $"inSert into log_dungeon_party(clear_time,die_count,hp_consume,mp_consume,hit_count,hit_per_avg_damage,hp_recovery,mp_recovery,update_count,channel_no,dungeon_index,dungeon_diff,success,level,party_user_count,last_time) values(%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,NOW())",0x4(%esp)
0848616a +0x1e0:  mov    -0x1c(%ebp),%eax
0848616d +0x1e3:  mov    %eax,(%esp)
08486170 +0x1e6:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08486175 +0x1eb:  movl   $0x1,0x4(%esp)
0848617d +0x1f3:  mov    -0x1c(%ebp),%eax
08486180 +0x1f6:  mov    %eax,(%esp)
08486183 +0x1f9:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08486188 +0x1fe:  xor    $0x1,%eax
0848618b +0x201:  test   %al,%al
0848618d +0x203:  je     084861cc <+0x242>
0848618f +0x205:  movl   $0x5,0xc(%esp)
08486197 +0x20d:  movl   $0x1b9,0x8(%esp)
0848619f +0x215:  movl   $&_ZZN19CDungeonSuccessNode8InsertDBERK10DungeonKeybE19__PRETTY_FUNCTION__,0x4(%esp)
084861a7 +0x21d:  lea    -0x40(%ebp),%eax
084861aa +0x220:  mov    %eax,(%esp)
084861ad +0x223:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084861b2 +0x228:  movl   $"inSert log_dungeon_party failed",0x4(%esp)
084861ba +0x230:  lea    -0x40(%ebp),%eax
084861bd +0x233:  mov    %eax,(%esp)
084861c0 +0x236:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084861c5 +0x23b:  mov    $0x0,%eax
084861ca +0x240:  jmp    08486228 <+0x29e>
084861cc +0x242:  mov    -0x20(%ebp),%eax
084861cf +0x245:  mov    %eax,(%esp)
084861d2 +0x248:  call   084869d6 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x410>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x410
084861d7 +0x24d:  lea    -0x30(%ebp),%eax
084861da +0x250:  movl   $0x0,0x8(%esp)
084861e2 +0x258:  lea    -0x54(%ebp),%edx
084861e5 +0x25b:  mov    %edx,0x4(%esp)
084861e9 +0x25f:  mov    %eax,(%esp)
084861ec +0x262:  call   08487e42 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x187c>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x187c
084861f1 +0x267:  sub    $0x4,%esp
084861f4 +0x26a:  mov    0x8(%ebp),%edx
084861f7 +0x26d:  lea    -0x44(%ebp),%eax
084861fa +0x270:  mov    %edx,0x4(%esp)
084861fe +0x274:  mov    %eax,(%esp)
08486201 +0x277:  call   084873a0 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xdda>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xdda
08486206 +0x27c:  sub    $0x4,%esp
08486209 +0x27f:  lea    -0x44(%ebp),%eax
0848620c +0x282:  mov    %eax,0x4(%esp)
08486210 +0x286:  lea    -0x54(%ebp),%eax
08486213 +0x289:  mov    %eax,(%esp)
08486216 +0x28c:  call   084873c6 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xe00>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xe00
0848621b +0x291:  test   %al,%al
0848621d +0x293:  jne    0848605f <+0xd5>
08486223 +0x299:  mov    $0x1,%eax
08486228 +0x29e:  lea    -0xc(%ebp),%esp
0848622b +0x2a1:  add    $0x0,%esp
0848622e +0x2a4:  pop    %ebx
0848622f +0x2a5:  pop    %esi
08486230 +0x2a6:  pop    %edi
08486231 +0x2a7:  pop    %ebp
08486232 +0x2a8:  ret
08486233 +0x2a9:  nop
```

## 反编译 C

```c
// CDungeonSuccessNode::InsertDB @ 0x8485f8a

/* CDungeonSuccessNode::InsertDB(DungeonKey const&, bool) */

undefined4 __thiscall
CDungeonSuccessNode::InsertDB(CDungeonSuccessNode *this,DungeonKey *param_1,bool param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  CEnvironment *this_00;
  undefined4 uVar7;
  map<int,Party,std::less<int>,std::allocator<std::pair<int_const,Party>>> local_58 [4];
  map<JobKey,CSuccessJobNode,std::less<JobKey>,std::allocator<std::pair<JobKey_const,CSuccessJobNode>>>
  local_54 [4];
  map<JobKey,CSuccessJobNode,std::less<JobKey>,std::allocator<std::pair<JobKey_const,CSuccessJobNode>>>
  local_50 [4];
  _Rb_tree_iterator<std::pair<JobKey_const,CSuccessJobNode>> local_4c [4];
  map<int,Party,std::less<int>,std::allocator<std::pair<int_const,Party>>> local_48 [4];
  cMyTrace local_44 [16];
  _Rb_tree_iterator<std::pair<int_const,Party>> local_34 [4];
  JobKey *local_30;
  CSuccessJobNode *local_2c;
  undefined4 *local_28;
  Party *local_24;
  MySQL *local_20;
  
  std::
  map<JobKey,CSuccessJobNode,std::less<JobKey>,std::allocator<std::pair<JobKey_const,CSuccessJobNode>>>
  ::begin(local_54);
  while( true ) {
    std::
    map<JobKey,CSuccessJobNode,std::less<JobKey>,std::allocator<std::pair<JobKey_const,CSuccessJobNode>>>
    ::end(local_50);
    cVar5 = std::_Rb_tree_iterator<std::pair<JobKey_const,CSuccessJobNode>>::operator!=
                      ((_Rb_tree_iterator<std::pair<JobKey_const,CSuccessJobNode>> *)local_54,
                       (_Rb_tree_iterator *)local_50);
    if (cVar5 == '\0') break;
    local_30 = (JobKey *)
               std::_Rb_tree_iterator<std::pair<JobKey_const,CSuccessJobNode>>::operator->
                         ((_Rb_tree_iterator<std::pair<JobKey_const,CSuccessJobNode>> *)local_54);
    iVar6 = std::_Rb_tree_iterator<std::pair<JobKey_const,CSuccessJobNode>>::operator->
                      ((_Rb_tree_iterator<std::pair<JobKey_const,CSuccessJobNode>> *)local_54);
    local_2c = (CSuccessJobNode *)(iVar6 + 8);
    CSuccessJobNode::InsertDB(local_2c,param_1,param_2,local_30);
    std::_Rb_tree_iterator<std::pair<JobKey_const,CSuccessJobNode>>::operator++
              (local_4c,(int)local_54);
  }
  std::map<int,Party,std::less<int>,std::allocator<std::pair<int_const,Party>>>::begin(local_58);
  do {
    std::map<int,Party,std::less<int>,std::allocator<std::pair<int_const,Party>>>::end(local_48);
    cVar5 = std::_Rb_tree_iterator<std::pair<int_const,Party>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,Party>> *)local_58,
                       (_Rb_tree_iterator *)local_48);
    if (cVar5 == '\0') {
      return 1;
    }
    local_28 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<int_const,Party>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,Party>> *)local_58);
    iVar6 = std::_Rb_tree_iterator<std::pair<int_const,Party>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,Party>> *)local_58);
    local_24 = (Party *)(iVar6 + 4);
    if (*(int *)(iVar6 + 0x40) != 0) {
      local_20 = (MySQL *)GetMySqLInstance();
      uVar1 = *local_28;
      uVar2 = *(undefined4 *)(local_24 + 0x24);
      uVar3 = *(undefined4 *)(param_1 + 4);
      uVar4 = *(undefined4 *)param_1;
      this_00 = (CEnvironment *)G_CEnvironment();
      uVar7 = CEnvironment::get_channel_no(this_00);
      MySQL::set_query(local_20,
                       "inSert into log_dungeon_party(clear_time,die_count,hp_consume,mp_consume,hit_count,hit_per_avg_damage,hp_recovery,mp_recovery,update_count,channel_no,dungeon_index,dungeon_diff,success,level,party_user_count,last_time) values(%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,NOW())"
                       ,*(undefined4 *)local_24,*(undefined4 *)(local_24 + 4),
                       *(undefined4 *)(local_24 + 8),*(undefined4 *)(local_24 + 0xc),
                       *(undefined4 *)(local_24 + 0x10),*(undefined4 *)(local_24 + 0x14),
                       *(undefined4 *)(local_24 + 0x18),*(undefined4 *)(local_24 + 0x1c),
                       *(undefined4 *)(local_24 + 0x3c),uVar7,uVar4,uVar3,(uint)param_2,uVar2,uVar1)
      ;
      cVar5 = MySQL::exec(local_20,true);
      if (cVar5 != '\x01') {
        cMyTrace::cMyTrace(local_44,"bool CDungeonSuccessNode::InsertDB(const DungeonKey&, bool)",
                           0x1b9,5);
        cMyTrace::operator()(local_44,"inSert log_dungeon_party failed");
        return 0;
      }
    }
    Party::Reset(local_24);
    std::_Rb_tree_iterator<std::pair<int_const,Party>>::operator++(local_34,(int)local_58);
  } while( true );
}
```

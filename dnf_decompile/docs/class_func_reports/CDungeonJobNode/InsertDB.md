# InsertDB

`_ZN15CDungeonJobNode8InsertDBERK10DungeonKeyi`

`CDungeonJobNode::InsertDB(DungeonKey const&, int)`

| 类 | 地址 |
|---|---|
| `CDungeonJobNode` | `0x08485e00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08485e00  _ZN15CDungeonJobNode8InsertDBERK10DungeonKeyi
#           CDungeonJobNode::InsertDB(DungeonKey const&, int)
# range [0x08485e00, 0x08485f89]
08485e00 +0x000:  push   %ebp
08485e01 +0x001:  mov    %esp,%ebp
08485e03 +0x003:  push   %edi
08485e04 +0x004:  push   %esi
08485e05 +0x005:  push   %ebx
08485e06 +0x006:  sub    $0x7c,%esp
08485e09 +0x009:  mov    0x8(%ebp),%edx
08485e0c +0x00c:  lea    -0x40(%ebp),%eax
08485e0f +0x00f:  mov    %edx,0x4(%esp)
08485e13 +0x013:  mov    %eax,(%esp)
08485e16 +0x016:  call   08487d54 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x178e>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x178e
08485e1b +0x01b:  sub    $0x4,%esp
08485e1e +0x01e:  jmp    08485f4b <+0x14b>
08485e23 +0x023:  lea    -0x40(%ebp),%eax
08485e26 +0x026:  mov    %eax,(%esp)
08485e29 +0x029:  call   084871b6 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xbf0>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xbf0
08485e2e +0x02e:  add    $0x4,%eax
08485e31 +0x031:  mov    %eax,-0x24(%ebp)
08485e34 +0x034:  lea    -0x40(%ebp),%eax
08485e37 +0x037:  mov    %eax,(%esp)
08485e3a +0x03a:  call   084871b6 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xbf0>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xbf0
08485e3f +0x03f:  mov    (%eax),%eax
08485e41 +0x041:  mov    %eax,-0x20(%ebp)
08485e44 +0x044:  mov    -0x24(%ebp),%eax
08485e47 +0x047:  mov    0xc(%eax),%eax
08485e4a +0x04a:  test   %eax,%eax
08485e4c +0x04c:  je     08485f23 <+0x123>
08485e52 +0x052:  call   08485b79 <_Z16GetMySqLInstancev>  ; GetMySqLInstance()
08485e57 +0x057:  mov    %eax,-0x1c(%ebp)
08485e5a +0x05a:  mov    0xc(%ebp),%eax
08485e5d +0x05d:  mov    0x4(%eax),%eax
08485e60 +0x060:  mov    %eax,-0x4c(%ebp)
08485e63 +0x063:  mov    0xc(%ebp),%eax
08485e66 +0x066:  mov    (%eax),%edi
08485e68 +0x068:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08485e6d +0x06d:  mov    %eax,(%esp)
08485e70 +0x070:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
08485e75 +0x075:  mov    %eax,%edx
08485e77 +0x077:  mov    -0x24(%ebp),%eax
08485e7a +0x07a:  mov    (%eax),%esi
08485e7c +0x07c:  mov    -0x24(%ebp),%eax
08485e7f +0x07f:  mov    0x8(%eax),%ebx
08485e82 +0x082:  mov    -0x24(%ebp),%eax
08485e85 +0x085:  mov    0x4(%eax),%ecx
08485e88 +0x088:  mov    -0x20(%ebp),%eax
08485e8b +0x08b:  mov    %eax,0x28(%esp)
08485e8f +0x08f:  movl   $0x0,0x24(%esp)
08485e97 +0x097:  mov    0x10(%ebp),%eax
08485e9a +0x09a:  mov    %eax,0x20(%esp)
08485e9e +0x09e:  mov    -0x4c(%ebp),%eax
08485ea1 +0x0a1:  mov    %eax,0x1c(%esp)
08485ea5 +0x0a5:  mov    %edi,0x18(%esp)
08485ea9 +0x0a9:  mov    %edx,0x14(%esp)
08485ead +0x0ad:  mov    %esi,0x10(%esp)
08485eb1 +0x0b1:  mov    %ebx,0xc(%esp)
08485eb5 +0x0b5:  mov    %ecx,0x8(%esp)
08485eb9 +0x0b9:  movl   $"inSert into log_dungeon_skill(skill_cool_time,skill_use,skill_count,channel_no,dungeon_index,dungeon_diff,charac_job,charac_grow,skill_index,last_time) values(%d,%d,%d,%d,%d,%d,%d,%d,%d,NOW())",0x4(%esp)
08485ec1 +0x0c1:  mov    -0x1c(%ebp),%eax
08485ec4 +0x0c4:  mov    %eax,(%esp)
08485ec7 +0x0c7:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08485ecc +0x0cc:  movl   $0x1,0x4(%esp)
08485ed4 +0x0d4:  mov    -0x1c(%ebp),%eax
08485ed7 +0x0d7:  mov    %eax,(%esp)
08485eda +0x0da:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08485edf +0x0df:  xor    $0x1,%eax
08485ee2 +0x0e2:  test   %al,%al
08485ee4 +0x0e4:  je     08485f23 <+0x123>
08485ee6 +0x0e6:  movl   $0x5,0xc(%esp)
08485eee +0x0ee:  movl   $0x177,0x8(%esp)
08485ef6 +0x0f6:  movl   $&_ZZN15CDungeonJobNode8InsertDBERK10DungeonKeyiE19__PRETTY_FUNCTION__,0x4(%esp)
08485efe +0x0fe:  lea    -0x38(%ebp),%eax
08485f01 +0x101:  mov    %eax,(%esp)
08485f04 +0x104:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08485f09 +0x109:  movl   $"inSert log_dungeon_skill failed",0x4(%esp)
08485f11 +0x111:  lea    -0x38(%ebp),%eax
08485f14 +0x114:  mov    %eax,(%esp)
08485f17 +0x117:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08485f1c +0x11c:  mov    $0x0,%eax
08485f21 +0x121:  jmp    08485f7f <+0x17f>
08485f23 +0x123:  mov    -0x24(%ebp),%eax
08485f26 +0x126:  mov    %eax,(%esp)
08485f29 +0x129:  call   084868b8 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x2f2>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x2f2
08485f2e +0x12e:  lea    -0x28(%ebp),%eax
08485f31 +0x131:  movl   $0x0,0x8(%esp)
08485f39 +0x139:  lea    -0x40(%ebp),%edx
08485f3c +0x13c:  mov    %edx,0x4(%esp)
08485f40 +0x140:  mov    %eax,(%esp)
08485f43 +0x143:  call   08487d7a <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x17b4>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x17b4
08485f48 +0x148:  sub    $0x4,%esp
08485f4b +0x14b:  mov    0x8(%ebp),%edx
08485f4e +0x14e:  lea    -0x3c(%ebp),%eax
08485f51 +0x151:  mov    %edx,0x4(%esp)
08485f55 +0x155:  mov    %eax,(%esp)
08485f58 +0x158:  call   084870b6 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xaf0>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xaf0
08485f5d +0x15d:  sub    $0x4,%esp
08485f60 +0x160:  lea    -0x3c(%ebp),%eax
08485f63 +0x163:  mov    %eax,0x4(%esp)
08485f67 +0x167:  lea    -0x40(%ebp),%eax
08485f6a +0x16a:  mov    %eax,(%esp)
08485f6d +0x16d:  call   084870dc <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xb16>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xb16
08485f72 +0x172:  test   %al,%al
08485f74 +0x174:  jne    08485e23 <+0x23>
08485f7a +0x17a:  mov    $0x1,%eax
08485f7f +0x17f:  lea    -0xc(%ebp),%esp
08485f82 +0x182:  add    $0x0,%esp
08485f85 +0x185:  pop    %ebx
08485f86 +0x186:  pop    %esi
08485f87 +0x187:  pop    %edi
08485f88 +0x188:  pop    %ebp
08485f89 +0x189:  ret
```

## 反编译 C

```c
// CDungeonJobNode::InsertDB @ 0x8485e00

/* CDungeonJobNode::InsertDB(DungeonKey const&, int) */

undefined4 __thiscall
CDungeonJobNode::InsertDB(CDungeonJobNode *this,DungeonKey *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  CEnvironment *this_00;
  undefined4 uVar6;
  map<int,Skill,std::less<int>,std::allocator<std::pair<int_const,Skill>>> local_44 [4];
  map<int,Skill,std::less<int>,std::allocator<std::pair<int_const,Skill>>> local_40 [4];
  cMyTrace local_3c [16];
  _Rb_tree_iterator<std::pair<int_const,Skill>> local_2c [4];
  Skill *local_28;
  undefined4 local_24;
  MySQL *local_20;
  
  std::map<int,Skill,std::less<int>,std::allocator<std::pair<int_const,Skill>>>::begin(local_44);
  do {
    std::map<int,Skill,std::less<int>,std::allocator<std::pair<int_const,Skill>>>::end(local_40);
    cVar3 = std::_Rb_tree_iterator<std::pair<int_const,Skill>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,Skill>> *)local_44,
                       (_Rb_tree_iterator *)local_40);
    if (cVar3 == '\0') {
      return 1;
    }
    iVar4 = std::_Rb_tree_iterator<std::pair<int_const,Skill>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,Skill>> *)local_44);
    local_28 = (Skill *)(iVar4 + 4);
    puVar5 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,Skill>>::operator->
                       ((_Rb_tree_iterator<std::pair<int_const,Skill>> *)local_44);
    local_24 = *puVar5;
    if (*(int *)(local_28 + 0xc) != 0) {
      local_20 = (MySQL *)GetMySqLInstance();
      uVar1 = *(undefined4 *)(param_1 + 4);
      uVar2 = *(undefined4 *)param_1;
      this_00 = (CEnvironment *)G_CEnvironment();
      uVar6 = CEnvironment::get_channel_no(this_00);
      MySQL::set_query(local_20,
                       "inSert into log_dungeon_skill(skill_cool_time,skill_use,skill_count,channel_no,dungeon_index,dungeon_diff,charac_job,charac_grow,skill_index,last_time) values(%d,%d,%d,%d,%d,%d,%d,%d,%d,NOW())"
                       ,*(undefined4 *)(local_28 + 4),*(undefined4 *)(local_28 + 8),
                       *(undefined4 *)local_28,uVar6,uVar2,uVar1,param_2,0,local_24);
      cVar3 = MySQL::exec(local_20,true);
      if (cVar3 != '\x01') {
        cMyTrace::cMyTrace(local_3c,"bool CDungeonJobNode::InsertDB(const DungeonKey&, int)",0x177,5
                          );
        cMyTrace::operator()(local_3c,"inSert log_dungeon_skill failed");
        return 0;
      }
    }
    Skill::Reset(local_28);
    std::_Rb_tree_iterator<std::pair<int_const,Skill>>::operator++(local_2c,(int)local_44);
  } while( true );
}
```

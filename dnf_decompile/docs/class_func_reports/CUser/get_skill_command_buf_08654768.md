# get_skill_command_buf

`_ZNK5CUser21get_skill_command_bufEPN18STSkillCommandData9STCommandE`

`CUser::get_skill_command_buf(STSkillCommandData::STCommand*) const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08654768` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08654768  _ZNK5CUser21get_skill_command_bufEPN18STSkillCommandData9STCommandE
#           CUser::get_skill_command_buf(STSkillCommandData::STCommand*) const
# range [0x08654768, 0x08654923]
08654768 +0x000:  push   %ebp
08654769 +0x001:  mov    %esp,%ebp
0865476b +0x003:  sub    $0x38,%esp
0865476e +0x006:  mov    0x8(%ebp),%eax
08654771 +0x009:  mov    %eax,(%esp)
08654774 +0x00c:  call   08696bee <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3443>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3443
08654779 +0x011:  mov    %eax,-0x10(%ebp)
0865477c +0x014:  cmpl   $0x0,-0x10(%ebp)
08654780 +0x018:  je     0865491e <+0x1b6>
08654786 +0x01e:  lea    -0x14(%ebp),%eax
08654789 +0x021:  mov    -0x10(%ebp),%edx
0865478c +0x024:  mov    %edx,0x4(%esp)
08654790 +0x028:  mov    %eax,(%esp)
08654793 +0x02b:  call   0869aace <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7323>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7323
08654798 +0x030:  sub    $0x4,%esp
0865479b +0x033:  lea    -0x18(%ebp),%eax
0865479e +0x036:  mov    -0x10(%ebp),%edx
086547a1 +0x039:  mov    %edx,0x4(%esp)
086547a5 +0x03d:  mov    %eax,(%esp)
086547a8 +0x040:  call   0869aaf4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7349>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7349
086547ad +0x045:  sub    $0x4,%esp
086547b0 +0x048:  movl   $0x0,-0xc(%ebp)
086547b7 +0x04f:  mov    -0x14(%ebp),%eax
086547ba +0x052:  mov    %eax,-0x1c(%ebp)
086547bd +0x055:  jmp    08654902 <+0x19a>
086547c2 +0x05a:  lea    -0x20(%ebp),%eax
086547c5 +0x05d:  mov    %eax,(%esp)
086547c8 +0x060:  call   0822da04 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x30ae>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x30ae
086547cd +0x065:  lea    -0x1c(%ebp),%eax
086547d0 +0x068:  mov    %eax,(%esp)
086547d3 +0x06b:  call   0869ab4c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73a1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73a1
086547d8 +0x070:  movzwl 0x4(%eax),%eax
086547dc +0x074:  and    $0x3fff,%ax
086547e0 +0x078:  mov    %eax,%edx
086547e2 +0x07a:  and    $0x3fff,%dx
086547e7 +0x07f:  movzwl -0x20(%ebp),%eax
086547eb +0x083:  and    $0xc000,%ax
086547ef +0x087:  or     %edx,%eax
086547f1 +0x089:  mov    %ax,-0x20(%ebp)
086547f5 +0x08d:  lea    -0x1c(%ebp),%eax
086547f8 +0x090:  mov    %eax,(%esp)
086547fb +0x093:  call   0869ab4c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73a1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73a1
08654800 +0x098:  movzbl 0x6(%eax),%eax
08654804 +0x09c:  and    $0x7,%eax
08654807 +0x09f:  mov    %eax,%edx
08654809 +0x0a1:  shl    $0x5,%edx
0865480c +0x0a4:  movzbl -0x1d(%ebp),%eax
08654810 +0x0a8:  and    $0x1f,%eax
08654813 +0x0ab:  or     %edx,%eax
08654815 +0x0ad:  mov    %al,-0x1d(%ebp)
08654818 +0x0b0:  lea    -0x1c(%ebp),%eax
0865481b +0x0b3:  mov    %eax,(%esp)
0865481e +0x0b6:  call   0869ab4c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73a1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73a1
08654823 +0x0bb:  movzbl 0x7(%eax),%eax
08654827 +0x0bf:  and    $0x7,%eax
0865482a +0x0c2:  movzbl %al,%eax
0865482d +0x0c5:  and    $0x7,%eax
08654830 +0x0c8:  mov    %eax,%edx
08654832 +0x0ca:  shl    $0xe,%edx
08654835 +0x0cd:  mov    -0x20(%ebp),%eax
08654838 +0x0d0:  and    $0xfffe3fff,%eax
0865483d +0x0d5:  or     %edx,%eax
0865483f +0x0d7:  mov    %eax,-0x20(%ebp)
08654842 +0x0da:  lea    -0x1c(%ebp),%eax
08654845 +0x0dd:  mov    %eax,(%esp)
08654848 +0x0e0:  call   0869ab4c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73a1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73a1
0865484d +0x0e5:  movzbl 0x8(%eax),%eax
08654851 +0x0e9:  and    $0x7,%eax
08654854 +0x0ec:  and    $0x7,%eax
08654857 +0x0ef:  lea    (%eax,%eax,1),%edx
0865485a +0x0f2:  movzbl -0x1e(%ebp),%eax
0865485e +0x0f6:  and    $0xfffffff1,%eax
08654861 +0x0f9:  or     %edx,%eax
08654863 +0x0fb:  mov    %al,-0x1e(%ebp)
08654866 +0x0fe:  lea    -0x1c(%ebp),%eax
08654869 +0x101:  mov    %eax,(%esp)
0865486c +0x104:  call   0869ab4c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73a1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73a1
08654871 +0x109:  movzbl 0x9(%eax),%eax
08654875 +0x10d:  and    $0x7,%eax
08654878 +0x110:  and    $0x7,%eax
0865487b +0x113:  mov    %eax,%edx
0865487d +0x115:  shl    $0x4,%edx
08654880 +0x118:  movzbl -0x1e(%ebp),%eax
08654884 +0x11c:  and    $0xffffff8f,%eax
08654887 +0x11f:  or     %edx,%eax
08654889 +0x121:  mov    %al,-0x1e(%ebp)
0865488c +0x124:  lea    -0x1c(%ebp),%eax
0865488f +0x127:  mov    %eax,(%esp)
08654892 +0x12a:  call   0869ab4c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73a1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73a1
08654897 +0x12f:  movzbl 0xa(%eax),%eax
0865489b +0x133:  and    $0x7,%eax
0865489e +0x136:  movzbl %al,%eax
086548a1 +0x139:  and    $0x7,%eax
086548a4 +0x13c:  mov    %eax,%edx
086548a6 +0x13e:  shl    $0x7,%edx
086548a9 +0x141:  movzwl -0x1e(%ebp),%eax
086548ad +0x145:  and    $0xfc7f,%ax
086548b1 +0x149:  or     %edx,%eax
086548b3 +0x14b:  mov    %ax,-0x1e(%ebp)
086548b7 +0x14f:  lea    -0x1c(%ebp),%eax
086548ba +0x152:  mov    %eax,(%esp)
086548bd +0x155:  call   0869ab4c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73a1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73a1
086548c2 +0x15a:  movzbl 0xb(%eax),%eax
086548c6 +0x15e:  and    $0x7,%eax
086548c9 +0x161:  and    $0x7,%eax
086548cc +0x164:  lea    0x0(,%eax,4),%edx
086548d3 +0x16b:  movzbl -0x1d(%ebp),%eax
086548d7 +0x16f:  and    $0xffffffe3,%eax
086548da +0x172:  or     %edx,%eax
086548dc +0x174:  mov    %al,-0x1d(%ebp)
086548df +0x177:  mov    -0xc(%ebp),%eax
086548e2 +0x17a:  shl    $0x2,%eax
086548e5 +0x17d:  add    0xc(%ebp),%eax
086548e8 +0x180:  mov    -0x20(%ebp),%edx
086548eb +0x183:  mov    %edx,(%eax)
086548ed +0x185:  addl   $0x1,-0xc(%ebp)
086548f1 +0x189:  cmpl   $0x31,-0xc(%ebp)
086548f5 +0x18d:  jg     08654921 <+0x1b9>
086548f7 +0x18f:  lea    -0x1c(%ebp),%eax
086548fa +0x192:  mov    %eax,(%esp)
086548fd +0x195:  call   0869ab2e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7383>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7383
08654902 +0x19a:  lea    -0x18(%ebp),%eax
08654905 +0x19d:  mov    %eax,0x4(%esp)
08654909 +0x1a1:  lea    -0x1c(%ebp),%eax
0865490c +0x1a4:  mov    %eax,(%esp)
0865490f +0x1a7:  call   0869ab1a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x736f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x736f
08654914 +0x1ac:  test   %al,%al
08654916 +0x1ae:  jne    086547c2 <+0x5a>
0865491c +0x1b4:  jmp    08654922 <+0x1ba>
0865491e +0x1b6:  nop
0865491f +0x1b7:  jmp    08654922 <+0x1ba>
08654921 +0x1b9:  nop
08654922 +0x1ba:  leave
08654923 +0x1bb:  ret
```

## 反编译 C

```c
// CUser::get_skill_command_buf @ 0x8654768

/* CUser::get_skill_command_buf(STSkillCommandData::STCommand*) const */

void __thiscall CUser::get_skill_command_buf(CUser *this,STCommand *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 local_24;
  undefined4 local_20;
  map<int,STSkillCommandData,std::less<int>,std::allocator<std::pair<int_const,STSkillCommandData>>>
  local_1c [4];
  undefined4 local_18;
  int local_14;
  int local_10;
  
  local_14 = CUserCharacInfo::getSkillCommand((CUserCharacInfo *)this);
  if (local_14 != 0) {
    std::
    map<int,STSkillCommandData,std::less<int>,std::allocator<std::pair<int_const,STSkillCommandData>>>
    ::begin((map<int,STSkillCommandData,std::less<int>,std::allocator<std::pair<int_const,STSkillCommandData>>>
             *)&local_18);
    std::
    map<int,STSkillCommandData,std::less<int>,std::allocator<std::pair<int_const,STSkillCommandData>>>
    ::end(local_1c);
    local_10 = 0;
    local_20 = local_18;
    while (cVar1 = std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator!=
                             ((_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>> *)
                              &local_20,(_Rb_tree_iterator *)local_1c), cVar1 != '\0') {
      STSkillCommandData::STCommand::STCommand((STCommand *)&local_24);
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>> *)&local_20);
      local_24 = CONCAT22(local_24._2_2_,(ushort)local_24 & 0xc000 | *(ushort *)(iVar2 + 4) & 0x3fff
                         );
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>> *)&local_20);
      local_24 = CONCAT13(local_24._3_1_ & 0x1f | *(char *)(iVar2 + 6) << 5,(undefined3)local_24);
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>> *)&local_20);
      local_24 = local_24 & 0xfffe3fff | (uint)(*(byte *)(iVar2 + 7) & 7) << 0xe;
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>> *)&local_20);
      local_24._0_3_ =
           CONCAT12(local_24._2_1_ & 0xf1 | (*(byte *)(iVar2 + 8) & 7) * '\x02',(ushort)local_24);
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>> *)&local_20);
      local_24._0_3_ =
           CONCAT12(local_24._2_1_ & 0x8f | (*(byte *)(iVar2 + 9) & 7) << 4,(ushort)local_24);
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>> *)&local_20);
      local_24 = CONCAT22(local_24._2_2_ & 0xfc7f | (ushort)(*(byte *)(iVar2 + 10) & 7) << 7,
                          (ushort)local_24);
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>> *)&local_20);
      local_24 = CONCAT13(local_24._3_1_ & 0xe3 | (*(byte *)(iVar2 + 0xb) & 7) * '\x04',
                          (undefined3)local_24);
      *(uint *)(param_1 + local_10 * 4) = local_24;
      local_10 = local_10 + 1;
      if (0x31 < local_10) {
        return;
      }
      std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>> *)&local_20);
    }
  }
  return;
}
```

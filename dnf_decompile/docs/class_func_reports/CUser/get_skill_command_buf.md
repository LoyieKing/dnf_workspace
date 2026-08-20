# get_skill_command_buf

`_ZN5CUser21get_skill_command_bufEv`

`CUser::get_skill_command_buf()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865459a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865459a  _ZN5CUser21get_skill_command_bufEv
#           CUser::get_skill_command_buf()
# range [0x0865459a, 0x08654767]
0865459a +0x000:  push   %ebp
0865459b +0x001:  mov    %esp,%ebp
0865459d +0x003:  sub    $0x38,%esp
086545a0 +0x006:  mov    0x8(%ebp),%eax
086545a3 +0x009:  mov    %eax,(%esp)
086545a6 +0x00c:  call   08696bee <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3443>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3443
086545ab +0x011:  mov    %eax,-0x10(%ebp)
086545ae +0x014:  cmpl   $0x0,-0x10(%ebp)
086545b2 +0x018:  jne    086545be <+0x24>
086545b4 +0x01a:  mov    $0x0,%eax
086545b9 +0x01f:  jmp    08654766 <+0x1cc>
086545be +0x024:  lea    -0x14(%ebp),%eax
086545c1 +0x027:  mov    -0x10(%ebp),%edx
086545c4 +0x02a:  mov    %edx,0x4(%esp)
086545c8 +0x02e:  mov    %eax,(%esp)
086545cb +0x031:  call   0869aace <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7323>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7323
086545d0 +0x036:  sub    $0x4,%esp
086545d3 +0x039:  lea    -0x18(%ebp),%eax
086545d6 +0x03c:  mov    -0x10(%ebp),%edx
086545d9 +0x03f:  mov    %edx,0x4(%esp)
086545dd +0x043:  mov    %eax,(%esp)
086545e0 +0x046:  call   0869aaf4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7349>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7349
086545e5 +0x04b:  sub    $0x4,%esp
086545e8 +0x04e:  movl   $0x0,-0xc(%ebp)
086545ef +0x055:  mov    -0x14(%ebp),%eax
086545f2 +0x058:  mov    %eax,-0x1c(%ebp)
086545f5 +0x05b:  jmp    08654741 <+0x1a7>
086545fa +0x060:  lea    -0x20(%ebp),%eax
086545fd +0x063:  mov    %eax,(%esp)
08654600 +0x066:  call   0822da04 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x30ae>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x30ae
08654605 +0x06b:  lea    -0x1c(%ebp),%eax
08654608 +0x06e:  mov    %eax,(%esp)
0865460b +0x071:  call   0869ab4c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73a1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73a1
08654610 +0x076:  movzwl 0x4(%eax),%eax
08654614 +0x07a:  and    $0x3fff,%ax
08654618 +0x07e:  mov    %eax,%edx
0865461a +0x080:  and    $0x3fff,%dx
0865461f +0x085:  movzwl -0x20(%ebp),%eax
08654623 +0x089:  and    $0xc000,%ax
08654627 +0x08d:  or     %edx,%eax
08654629 +0x08f:  mov    %ax,-0x20(%ebp)
0865462d +0x093:  lea    -0x1c(%ebp),%eax
08654630 +0x096:  mov    %eax,(%esp)
08654633 +0x099:  call   0869ab4c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73a1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73a1
08654638 +0x09e:  movzbl 0x6(%eax),%eax
0865463c +0x0a2:  and    $0x7,%eax
0865463f +0x0a5:  mov    %eax,%edx
08654641 +0x0a7:  shl    $0x5,%edx
08654644 +0x0aa:  movzbl -0x1d(%ebp),%eax
08654648 +0x0ae:  and    $0x1f,%eax
0865464b +0x0b1:  or     %edx,%eax
0865464d +0x0b3:  mov    %al,-0x1d(%ebp)
08654650 +0x0b6:  lea    -0x1c(%ebp),%eax
08654653 +0x0b9:  mov    %eax,(%esp)
08654656 +0x0bc:  call   0869ab4c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73a1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73a1
0865465b +0x0c1:  movzbl 0x7(%eax),%eax
0865465f +0x0c5:  and    $0x7,%eax
08654662 +0x0c8:  movzbl %al,%eax
08654665 +0x0cb:  and    $0x7,%eax
08654668 +0x0ce:  mov    %eax,%edx
0865466a +0x0d0:  shl    $0xe,%edx
0865466d +0x0d3:  mov    -0x20(%ebp),%eax
08654670 +0x0d6:  and    $0xfffe3fff,%eax
08654675 +0x0db:  or     %edx,%eax
08654677 +0x0dd:  mov    %eax,-0x20(%ebp)
0865467a +0x0e0:  lea    -0x1c(%ebp),%eax
0865467d +0x0e3:  mov    %eax,(%esp)
08654680 +0x0e6:  call   0869ab4c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73a1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73a1
08654685 +0x0eb:  movzbl 0x8(%eax),%eax
08654689 +0x0ef:  and    $0x7,%eax
0865468c +0x0f2:  and    $0x7,%eax
0865468f +0x0f5:  lea    (%eax,%eax,1),%edx
08654692 +0x0f8:  movzbl -0x1e(%ebp),%eax
08654696 +0x0fc:  and    $0xfffffff1,%eax
08654699 +0x0ff:  or     %edx,%eax
0865469b +0x101:  mov    %al,-0x1e(%ebp)
0865469e +0x104:  lea    -0x1c(%ebp),%eax
086546a1 +0x107:  mov    %eax,(%esp)
086546a4 +0x10a:  call   0869ab4c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73a1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73a1
086546a9 +0x10f:  movzbl 0x9(%eax),%eax
086546ad +0x113:  and    $0x7,%eax
086546b0 +0x116:  and    $0x7,%eax
086546b3 +0x119:  mov    %eax,%edx
086546b5 +0x11b:  shl    $0x4,%edx
086546b8 +0x11e:  movzbl -0x1e(%ebp),%eax
086546bc +0x122:  and    $0xffffff8f,%eax
086546bf +0x125:  or     %edx,%eax
086546c1 +0x127:  mov    %al,-0x1e(%ebp)
086546c4 +0x12a:  lea    -0x1c(%ebp),%eax
086546c7 +0x12d:  mov    %eax,(%esp)
086546ca +0x130:  call   0869ab4c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73a1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73a1
086546cf +0x135:  movzbl 0xa(%eax),%eax
086546d3 +0x139:  and    $0x7,%eax
086546d6 +0x13c:  movzbl %al,%eax
086546d9 +0x13f:  and    $0x7,%eax
086546dc +0x142:  mov    %eax,%edx
086546de +0x144:  shl    $0x7,%edx
086546e1 +0x147:  movzwl -0x1e(%ebp),%eax
086546e5 +0x14b:  and    $0xfc7f,%ax
086546e9 +0x14f:  or     %edx,%eax
086546eb +0x151:  mov    %ax,-0x1e(%ebp)
086546ef +0x155:  lea    -0x1c(%ebp),%eax
086546f2 +0x158:  mov    %eax,(%esp)
086546f5 +0x15b:  call   0869ab4c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73a1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73a1
086546fa +0x160:  movzbl 0xb(%eax),%eax
086546fe +0x164:  and    $0x7,%eax
08654701 +0x167:  and    $0x7,%eax
08654704 +0x16a:  lea    0x0(,%eax,4),%edx
0865470b +0x171:  movzbl -0x1d(%ebp),%eax
0865470f +0x175:  and    $0xffffffe3,%eax
08654712 +0x178:  or     %edx,%eax
08654714 +0x17a:  mov    %al,-0x1d(%ebp)
08654717 +0x17d:  mov    -0xc(%ebp),%eax
0865471a +0x180:  mov    %eax,%edx
0865471c +0x182:  mov    0x8(%ebp),%eax
0865471f +0x185:  lea    &_ZL14gUnicodeBuffer+0x11bc8(%edx),%ecx
08654725 +0x18b:  mov    -0x20(%ebp),%edx
08654728 +0x18e:  mov    %edx,0xb(%eax,%ecx,4)
0865472c +0x192:  addl   $0x1,-0xc(%ebp)
08654730 +0x196:  cmpl   $0x31,-0xc(%ebp)
08654734 +0x19a:  jg     0865475d <+0x1c3>
08654736 +0x19c:  lea    -0x1c(%ebp),%eax
08654739 +0x19f:  mov    %eax,(%esp)
0865473c +0x1a2:  call   0869ab2e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7383>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7383
08654741 +0x1a7:  lea    -0x18(%ebp),%eax
08654744 +0x1aa:  mov    %eax,0x4(%esp)
08654748 +0x1ae:  lea    -0x1c(%ebp),%eax
0865474b +0x1b1:  mov    %eax,(%esp)
0865474e +0x1b4:  call   0869ab1a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x736f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x736f
08654753 +0x1b9:  test   %al,%al
08654755 +0x1bb:  jne    086545fa <+0x60>
0865475b +0x1c1:  jmp    0865475e <+0x1c4>
0865475d +0x1c3:  nop
0865475e +0x1c4:  mov    0x8(%ebp),%eax
08654761 +0x1c7:  add    $0x703db,%eax
08654766 +0x1cc:  leave
08654767 +0x1cd:  ret
```

## 反编译 C

```c
// CUser::get_skill_command_buf @ 0x865459a

/* CUser::get_skill_command_buf() */

CUser * __thiscall CUser::get_skill_command_buf(CUser *this)

{
  char cVar1;
  CUser *pCVar2;
  int iVar3;
  undefined4 local_24;
  undefined4 local_20;
  map<int,STSkillCommandData,std::less<int>,std::allocator<std::pair<int_const,STSkillCommandData>>>
  local_1c [4];
  undefined4 local_18;
  int local_14;
  int local_10;
  
  local_14 = CUserCharacInfo::getSkillCommand((CUserCharacInfo *)this);
  if (local_14 == 0) {
    pCVar2 = (CUser *)0x0;
  }
  else {
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
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>> *)&local_20);
      local_24 = CONCAT22(local_24._2_2_,(ushort)local_24 & 0xc000 | *(ushort *)(iVar3 + 4) & 0x3fff
                         );
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>> *)&local_20);
      local_24 = CONCAT13(local_24._3_1_ & 0x1f | *(char *)(iVar3 + 6) << 5,(undefined3)local_24);
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>> *)&local_20);
      local_24 = local_24 & 0xfffe3fff | (uint)(*(byte *)(iVar3 + 7) & 7) << 0xe;
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>> *)&local_20);
      local_24._0_3_ =
           CONCAT12(local_24._2_1_ & 0xf1 | (*(byte *)(iVar3 + 8) & 7) * '\x02',(ushort)local_24);
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>> *)&local_20);
      local_24._0_3_ =
           CONCAT12(local_24._2_1_ & 0x8f | (*(byte *)(iVar3 + 9) & 7) << 4,(ushort)local_24);
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>> *)&local_20);
      local_24 = CONCAT22(local_24._2_2_ & 0xfc7f | (ushort)(*(byte *)(iVar3 + 10) & 7) << 7,
                          (ushort)local_24);
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>> *)&local_20);
      local_24 = CONCAT13(local_24._3_1_ & 0xe3 | (*(byte *)(iVar3 + 0xb) & 7) * '\x04',
                          (undefined3)local_24);
      *(uint *)(this + (local_10 + 0x1c0f4) * 4 + 0xb) = local_24;
      local_10 = local_10 + 1;
      if (0x31 < local_10) break;
      std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>> *)&local_20);
    }
    pCVar2 = this + 0x703db;
  }
  return pCVar2;
}
```

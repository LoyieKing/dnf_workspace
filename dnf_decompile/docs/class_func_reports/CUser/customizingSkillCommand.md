# customizingSkillCommand

`_ZN5CUser23customizingSkillCommandER18STSkillCommandData`

`CUser::customizingSkillCommand(STSkillCommandData&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08654f74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08654f74  _ZN5CUser23customizingSkillCommandER18STSkillCommandData
#           CUser::customizingSkillCommand(STSkillCommandData&)
# range [0x08654f74, 0x086550ed]
08654f74 +0x000:  push   %ebp
08654f75 +0x001:  mov    %esp,%ebp
08654f77 +0x003:  push   %ebx
08654f78 +0x004:  sub    $0x54,%esp
08654f7b +0x007:  mov    0x8(%ebp),%eax
08654f7e +0x00a:  mov    %eax,(%esp)
08654f81 +0x00d:  call   08696bee <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3443>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3443
08654f86 +0x012:  mov    %eax,-0x14(%ebp)
08654f89 +0x015:  cmpl   $0x0,-0x14(%ebp)
08654f8d +0x019:  jne    08654f99 <+0x25>
08654f8f +0x01b:  mov    $0x0,%eax
08654f94 +0x020:  jmp    086550e9 <+0x175>
08654f99 +0x025:  movl   $0x0,-0x10(%ebp)
08654fa0 +0x02c:  jmp    08654fc0 <+0x4c>
08654fa2 +0x02e:  mov    -0x10(%ebp),%eax
08654fa5 +0x031:  mov    0xc(%ebp),%edx
08654fa8 +0x034:  movzbl 0x3(%edx,%eax,1),%eax
08654fad +0x039:  cmp    $0x8,%al
08654faf +0x03b:  jne    08654fbc <+0x48>
08654fb1 +0x03d:  mov    -0x10(%ebp),%eax
08654fb4 +0x040:  mov    0xc(%ebp),%edx
08654fb7 +0x043:  movb   $0x7,0x3(%edx,%eax,1)
08654fbc +0x048:  addl   $0x1,-0x10(%ebp)
08654fc0 +0x04c:  mov    0xc(%ebp),%eax
08654fc3 +0x04f:  movzbl 0x2(%eax),%eax
08654fc7 +0x053:  movsbl %al,%eax
08654fca +0x056:  cmp    -0x10(%ebp),%eax
08654fcd +0x059:  setg   %al
08654fd0 +0x05c:  test   %al,%al
08654fd2 +0x05e:  jne    08654fa2 <+0x2e>
08654fd4 +0x060:  mov    0xc(%ebp),%eax
08654fd7 +0x063:  movzwl (%eax),%eax
08654fda +0x066:  cwtl
08654fdb +0x067:  mov    %eax,-0x44(%ebp)
08654fde +0x06a:  lea    -0x48(%ebp),%eax
08654fe1 +0x06d:  lea    -0x44(%ebp),%edx
08654fe4 +0x070:  mov    %edx,0x8(%esp)
08654fe8 +0x074:  mov    -0x14(%ebp),%edx
08654feb +0x077:  mov    %edx,0x4(%esp)
08654fef +0x07b:  mov    %eax,(%esp)
08654ff2 +0x07e:  call   0869ab5a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73af>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73af
08654ff7 +0x083:  sub    $0x4,%esp
08654ffa +0x086:  lea    -0x40(%ebp),%eax
08654ffd +0x089:  mov    -0x14(%ebp),%edx
08655000 +0x08c:  mov    %edx,0x4(%esp)
08655004 +0x090:  mov    %eax,(%esp)
08655007 +0x093:  call   0869aaf4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7349>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7349
0865500c +0x098:  sub    $0x4,%esp
0865500f +0x09b:  lea    -0x40(%ebp),%eax
08655012 +0x09e:  mov    %eax,0x4(%esp)
08655016 +0x0a2:  lea    -0x48(%ebp),%eax
08655019 +0x0a5:  mov    %eax,(%esp)
0865501c +0x0a8:  call   0869ab1a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x736f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x736f
08655021 +0x0ad:  test   %al,%al
08655023 +0x0af:  je     0865508f <+0x11b>
08655025 +0x0b1:  lea    -0x48(%ebp),%eax
08655028 +0x0b4:  mov    %eax,(%esp)
0865502b +0x0b7:  call   0869ab4c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73a1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73a1
08655030 +0x0bc:  mov    0xc(%ebp),%edx
08655033 +0x0bf:  movzwl (%edx),%edx
08655036 +0x0c2:  mov    %dx,0x4(%eax)
0865503a +0x0c6:  lea    -0x48(%ebp),%eax
0865503d +0x0c9:  mov    %eax,(%esp)
08655040 +0x0cc:  call   0869ab4c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73a1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73a1
08655045 +0x0d1:  mov    0xc(%ebp),%edx
08655048 +0x0d4:  movzbl 0x2(%edx),%edx
0865504c +0x0d8:  mov    %dl,0x6(%eax)
0865504f +0x0db:  movl   $0x0,-0xc(%ebp)
08655056 +0x0e2:  jmp    08655079 <+0x105>
08655058 +0x0e4:  lea    -0x48(%ebp),%eax
0865505b +0x0e7:  mov    %eax,(%esp)
0865505e +0x0ea:  call   0869ab4c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73a1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73a1
08655063 +0x0ef:  mov    -0xc(%ebp),%edx
08655066 +0x0f2:  mov    -0xc(%ebp),%ecx
08655069 +0x0f5:  mov    0xc(%ebp),%ebx
0865506c +0x0f8:  movzbl 0x3(%ebx,%ecx,1),%ecx
08655071 +0x0fd:  mov    %cl,0x7(%eax,%edx,1)
08655075 +0x101:  addl   $0x1,-0xc(%ebp)
08655079 +0x105:  mov    0xc(%ebp),%eax
0865507c +0x108:  movzbl 0x2(%eax),%eax
08655080 +0x10c:  movsbl %al,%eax
08655083 +0x10f:  cmp    -0xc(%ebp),%eax
08655086 +0x112:  setg   %al
08655089 +0x115:  test   %al,%al
0865508b +0x117:  jne    08655058 <+0xe4>
0865508d +0x119:  jmp    086550d9 <+0x165>
0865508f +0x11b:  mov    0xc(%ebp),%edx
08655092 +0x11e:  lea    -0x22(%ebp),%eax
08655095 +0x121:  mov    0xc(%ebp),%ecx
08655098 +0x124:  mov    %ecx,0x8(%esp)
0865509c +0x128:  mov    %edx,0x4(%esp)
086550a0 +0x12c:  mov    %eax,(%esp)
086550a3 +0x12f:  call   0869ab9a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73ef>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73ef
086550a8 +0x134:  sub    $0x4,%esp
086550ab +0x137:  lea    -0x22(%ebp),%eax
086550ae +0x13a:  mov    %eax,0x4(%esp)
086550b2 +0x13e:  lea    -0x34(%ebp),%eax
086550b5 +0x141:  mov    %eax,(%esp)
086550b8 +0x144:  call   0869abd8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x742d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x742d
086550bd +0x149:  lea    -0x3c(%ebp),%eax
086550c0 +0x14c:  lea    -0x34(%ebp),%edx
086550c3 +0x14f:  mov    %edx,0x8(%esp)
086550c7 +0x153:  mov    -0x14(%ebp),%edx
086550ca +0x156:  mov    %edx,0x4(%esp)
086550ce +0x15a:  mov    %eax,(%esp)
086550d1 +0x15d:  call   0869ac18 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x746d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x746d
086550d6 +0x162:  sub    $0x4,%esp
086550d9 +0x165:  mov    0x8(%ebp),%eax
086550dc +0x168:  mov    %eax,(%esp)
086550df +0x16b:  call   0822f27a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4924>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4924
086550e4 +0x170:  mov    $0x1,%eax
086550e9 +0x175:  mov    -0x4(%ebp),%ebx
086550ec +0x178:  leave
086550ed +0x179:  ret
```

## 反编译 C

```c
// CUser::customizingSkillCommand @ 0x8654f74

/* CUser::customizingSkillCommand(STSkillCommandData&) */

undefined4 __thiscall CUser::customizingSkillCommand(CUser *this,STSkillCommandData *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<int_const,STSkillCommandData>> local_4c [4];
  int local_48;
  map<int,STSkillCommandData,std::less<int>,std::allocator<std::pair<int_const,STSkillCommandData>>>
  local_44 [4];
  pair local_40 [8];
  pair<int_const,STSkillCommandData> local_38 [18];
  short local_26 [7];
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = CUserCharacInfo::getSkillCommand((CUserCharacInfo *)this);
  if (local_18 == 0) {
    uVar2 = 0;
  }
  else {
    for (local_14 = 0; local_14 < (char)param_1[2]; local_14 = local_14 + 1) {
      if (param_1[local_14 + 3] == (STSkillCommandData)0x8) {
        param_1[local_14 + 3] = (STSkillCommandData)0x7;
      }
    }
    local_48 = (int)*(short *)param_1;
    std::
    map<int,STSkillCommandData,std::less<int>,std::allocator<std::pair<int_const,STSkillCommandData>>>
    ::find((int *)local_4c);
    std::
    map<int,STSkillCommandData,std::less<int>,std::allocator<std::pair<int_const,STSkillCommandData>>>
    ::end(local_44);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator!=
                      (local_4c,(_Rb_tree_iterator *)local_44);
    if (cVar1 == '\0') {
      std::make_pair<short&,STSkillCommandData&>(local_26,param_1);
      std::pair<int_const,STSkillCommandData>::pair<short,STSkillCommandData>
                (local_38,(pair *)local_26);
      std::
      map<int,STSkillCommandData,std::less<int>,std::allocator<std::pair<int_const,STSkillCommandData>>>
      ::insert(local_40);
    }
    else {
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator->(local_4c);
      *(undefined2 *)(iVar3 + 4) = *(undefined2 *)param_1;
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator->(local_4c);
      *(STSkillCommandData *)(iVar3 + 6) = param_1[2];
      for (local_10 = 0; local_10 < (char)param_1[2]; local_10 = local_10 + 1) {
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator->
                          (local_4c);
        *(STSkillCommandData *)(iVar3 + 7 + local_10) = param_1[local_10 + 3];
      }
    }
    CUserCharacInfo::enableSaveSkill((CUserCharacInfo *)this);
    uVar2 = 1;
  }
  return uVar2;
}
```

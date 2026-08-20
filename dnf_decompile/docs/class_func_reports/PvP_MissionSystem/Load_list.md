# Load_list

`_ZN17PvP_MissionSystem9Load_listEv`

`PvP_MissionSystem::Load_list()`

| 类 | 地址 |
|---|---|
| `PvP_MissionSystem` | `0x085e1dc6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e1dc6  _ZN17PvP_MissionSystem9Load_listEv
#           PvP_MissionSystem::Load_list()
# range [0x085e1dc6, 0x085e1fed]
085e1dc6 +0x000:  push   %ebp
085e1dc7 +0x001:  mov    %esp,%ebp
085e1dc9 +0x003:  push   %esi
085e1dca +0x004:  push   %ebx
085e1dcb +0x005:  sub    $0xd0,%esp
085e1dd1 +0x00b:  movl   $0x0,-0xc(%ebp)
085e1dd8 +0x012:  lea    -0x38(%ebp),%eax
085e1ddb +0x015:  movl   $&g_PvpMissionScriptFileList,0x4(%esp)
085e1de3 +0x01d:  mov    %eax,(%esp)
085e1de6 +0x020:  call   080e60f2 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x228>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x228
085e1deb +0x025:  sub    $0x4,%esp
085e1dee +0x028:  lea    -0xc4(%ebp),%eax
085e1df4 +0x02e:  mov    %eax,(%esp)
085e1df7 +0x031:  call   08a5ba8c <_ZN13MissionScriptC1Ev>  ; MissionScript::MissionScript()
085e1dfc +0x036:  jmp    085e1f71 <+0x1ab>
085e1e01 +0x03b:  lea    -0x38(%ebp),%eax
085e1e04 +0x03e:  mov    %eax,(%esp)
085e1e07 +0x041:  call   080e61b8 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2ee>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2ee
085e1e0c +0x046:  add    $0x4,%eax
085e1e0f +0x049:  mov    %eax,(%esp)
085e1e12 +0x04c:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
085e1e17 +0x051:  mov    %eax,-0xc(%ebp)
085e1e1a +0x054:  cmpl   $0x0,-0xc(%ebp)
085e1e1e +0x058:  je     085e1fa3 <+0x1dd>
085e1e24 +0x05e:  mov    -0xc(%ebp),%eax
085e1e27 +0x061:  mov    %eax,0x4(%esp)
085e1e2b +0x065:  lea    -0xc4(%ebp),%eax
085e1e31 +0x06b:  mov    %eax,(%esp)
085e1e34 +0x06e:  call   08a5ac28 <_Z22importPvpMissionScriptP13MissionScriptPKc>  ; importPvpMissionScript(MissionScript*, char const*)
085e1e39 +0x073:  xor    $0x1,%eax
085e1e3c +0x076:  test   %al,%al
085e1e3e +0x078:  je     085e1e5d <+0x97>
085e1e40 +0x07a:  mov    -0xc(%ebp),%eax
085e1e43 +0x07d:  mov    %eax,0x4(%esp)
085e1e47 +0x081:  movl   $"Mission Script Error: %s\n",(%esp)
085e1e4e +0x088:  call   0807db60 <_init+0x458>
085e1e53 +0x08d:  mov    $0x0,%ebx
085e1e58 +0x092:  jmp    085e1fd4 <+0x20e>
085e1e5d +0x097:  lea    -0xc4(%ebp),%eax
085e1e63 +0x09d:  mov    %eax,0x4(%esp)
085e1e67 +0x0a1:  mov    0x8(%ebp),%eax
085e1e6a +0x0a4:  mov    %eax,(%esp)
085e1e6d +0x0a7:  call   085e2132 <_ZN17PvP_MissionSystem7FactoryERK13MissionScript>  ; PvP_MissionSystem::Factory(MissionScript const&)
085e1e72 +0x0ac:  mov    %eax,-0x3c(%ebp)
085e1e75 +0x0af:  mov    -0x3c(%ebp),%eax
085e1e78 +0x0b2:  test   %eax,%eax
085e1e7a +0x0b4:  jne    085e1e86 <+0xc0>
085e1e7c +0x0b6:  mov    $0x0,%ebx
085e1e81 +0x0bb:  jmp    085e1fd4 <+0x20e>
085e1e86 +0x0c0:  mov    -0x3c(%ebp),%eax
085e1e89 +0x0c3:  mov    %eax,(%esp)
085e1e8c +0x0c6:  call   085e6906 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x8e>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x8e
085e1e91 +0x0cb:  mov    %eax,-0x18(%ebp)
085e1e94 +0x0ce:  lea    -0x20(%ebp),%eax
085e1e97 +0x0d1:  lea    -0x3c(%ebp),%edx
085e1e9a +0x0d4:  mov    %edx,0x8(%esp)
085e1e9e +0x0d8:  lea    -0x18(%ebp),%edx
085e1ea1 +0x0db:  mov    %edx,0x4(%esp)
085e1ea5 +0x0df:  mov    %eax,(%esp)
085e1ea8 +0x0e2:  call   085e7567 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xcef>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xcef
085e1ead +0x0e7:  sub    $0x4,%esp
085e1eb0 +0x0ea:  lea    -0x20(%ebp),%eax
085e1eb3 +0x0ed:  mov    %eax,0x4(%esp)
085e1eb7 +0x0f1:  lea    -0x28(%ebp),%eax
085e1eba +0x0f4:  mov    %eax,(%esp)
085e1ebd +0x0f7:  call   085e75ae <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xd36>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xd36
085e1ec2 +0x0fc:  mov    0x8(%ebp),%edx
085e1ec5 +0x0ff:  lea    -0x30(%ebp),%eax
085e1ec8 +0x102:  lea    -0x28(%ebp),%ecx
085e1ecb +0x105:  mov    %ecx,0x8(%esp)
085e1ecf +0x109:  mov    %edx,0x4(%esp)
085e1ed3 +0x10d:  mov    %eax,(%esp)
085e1ed6 +0x110:  call   085e75de <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xd66>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xd66
085e1edb +0x115:  sub    $0x4,%esp
085e1ede +0x118:  mov    -0x3c(%ebp),%eax
085e1ee1 +0x11b:  mov    %eax,(%esp)
085e1ee4 +0x11e:  call   085e6912 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x9a>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x9a
085e1ee9 +0x123:  mov    0x8(%ebp),%edx
085e1eec +0x126:  add    $0x18,%edx
085e1eef +0x129:  mov    %eax,0x4(%esp)
085e1ef3 +0x12d:  mov    %edx,(%esp)
085e1ef6 +0x130:  call   085e760a <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xd92>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xd92
085e1efb +0x135:  lea    -0x3c(%ebp),%edx
085e1efe +0x138:  mov    %edx,0x4(%esp)
085e1f02 +0x13c:  mov    %eax,(%esp)
085e1f05 +0x13f:  call   085e761c <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xda4>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xda4
085e1f0a +0x144:  mov    -0x3c(%ebp),%eax
085e1f0d +0x147:  mov    %eax,(%esp)
085e1f10 +0x14a:  call   085e6944 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xcc>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xcc
085e1f15 +0x14f:  cmp    $0x2,%eax
085e1f18 +0x152:  sete   %al
085e1f1b +0x155:  test   %al,%al
085e1f1d +0x157:  je     085e1f66 <+0x1a0>
085e1f1f +0x159:  mov    -0x3c(%ebp),%eax
085e1f22 +0x15c:  mov    %eax,(%esp)
085e1f25 +0x15f:  call   085e6912 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x9a>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x9a
085e1f2a +0x164:  mov    %eax,%edx
085e1f2c +0x166:  mov    0x8(%ebp),%eax
085e1f2f +0x169:  lea    0x40(%eax),%ecx
085e1f32 +0x16c:  lea    -0x14(%ebp),%eax
085e1f35 +0x16f:  mov    %edx,0x8(%esp)
085e1f39 +0x173:  mov    %ecx,0x4(%esp)
085e1f3d +0x177:  mov    %eax,(%esp)
085e1f40 +0x17a:  call   08111846 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd58>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd58
085e1f45 +0x17f:  sub    $0x4,%esp
085e1f48 +0x182:  movl   $0x1,0x4(%esp)
085e1f50 +0x18a:  lea    -0x14(%ebp),%eax
085e1f53 +0x18d:  mov    %eax,(%esp)
085e1f56 +0x190:  call   085e7652 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xdda>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xdda
085e1f5b +0x195:  lea    -0x14(%ebp),%eax
085e1f5e +0x198:  mov    %eax,(%esp)
085e1f61 +0x19b:  call   08111874 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd86>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd86
085e1f66 +0x1a0:  lea    -0x38(%ebp),%eax
085e1f69 +0x1a3:  mov    %eax,(%esp)
085e1f6c +0x1a6:  call   080e6610 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x746>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x746
085e1f71 +0x1ab:  lea    -0x34(%ebp),%eax
085e1f74 +0x1ae:  movl   $&g_PvpMissionScriptFileList,0x4(%esp)
085e1f7c +0x1b6:  mov    %eax,(%esp)
085e1f7f +0x1b9:  call   080e6118 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x24e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x24e
085e1f84 +0x1be:  sub    $0x4,%esp
085e1f87 +0x1c1:  lea    -0x34(%ebp),%eax
085e1f8a +0x1c4:  mov    %eax,0x4(%esp)
085e1f8e +0x1c8:  lea    -0x38(%ebp),%eax
085e1f91 +0x1cb:  mov    %eax,(%esp)
085e1f94 +0x1ce:  call   080e613e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x274>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x274
085e1f99 +0x1d3:  test   %al,%al
085e1f9b +0x1d5:  jne    085e1e01 <+0x3b>
085e1fa1 +0x1db:  jmp    085e1fa4 <+0x1de>
085e1fa3 +0x1dd:  nop
085e1fa4 +0x1de:  mov    0x8(%ebp),%eax
085e1fa7 +0x1e1:  mov    %eax,(%esp)
085e1faa +0x1e4:  call   085e20d4 <_ZN17PvP_MissionSystem9sort_listEv>  ; PvP_MissionSystem::sort_list()
085e1faf +0x1e9:  mov    $0x1,%ebx
085e1fb4 +0x1ee:  jmp    085e1fd4 <+0x20e>
085e1fb6 +0x1f0:  mov    %edx,%ebx
085e1fb8 +0x1f2:  mov    %eax,%esi
085e1fba +0x1f4:  lea    -0xc4(%ebp),%eax
085e1fc0 +0x1fa:  mov    %eax,(%esp)
085e1fc3 +0x1fd:  call   085e6ed8 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x660>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x660
085e1fc8 +0x202:  mov    %esi,%eax
085e1fca +0x204:  mov    %ebx,%edx
085e1fcc +0x206:  mov    %eax,(%esp)
085e1fcf +0x209:  call   08ae3750 <_Unwind_Resume>
085e1fd4 +0x20e:  lea    -0xc4(%ebp),%eax
085e1fda +0x214:  mov    %eax,(%esp)
085e1fdd +0x217:  call   085e6ed8 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x660>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x660
085e1fe2 +0x21c:  mov    %ebx,%eax
085e1fe4 +0x21e:  lea    -0x8(%ebp),%esp
085e1fe7 +0x221:  add    $0x0,%esp
085e1fea +0x224:  pop    %ebx
085e1feb +0x225:  pop    %esi
085e1fec +0x226:  pop    %ebp
085e1fed +0x227:  ret
```

## 反编译 C

```c
// PvP_MissionSystem::Load_list @ 0x85e1dc6

/* PvP_MissionSystem::Load_list() */

undefined4 __thiscall PvP_MissionSystem::Load_list(PvP_MissionSystem *this)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  list<CMission*,std::allocator<CMission*>> *this_00;
  undefined4 uVar4;
  MissionScript local_c8 [136];
  CMission *local_40;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_3c [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_38 [4];
  pair local_34 [8];
  pair<int_const,CMission*> local_2c [8];
  int local_24 [2];
  CMission *local_1c;
  reference local_18 [8];
  char *local_10;
  
  local_10 = (char *)0x0;
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
            (local_3c);
  MissionScript::MissionScript(local_c8);
  while( true ) {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_38);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_3c,
                       (_Rb_tree_iterator *)local_38);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_3c);
                    /* try { // try from 085e1e12 to 085e1fae has its CatchHandler @ 085e1fb6 */
    local_10 = (char *)std::string::c_str((string *)(iVar2 + 4));
    if (local_10 == (char *)0x0) break;
    cVar1 = importPvpMissionScript(local_c8,local_10);
    if (cVar1 != '\x01') {
      printf("Mission Script Error: %s\n",local_10);
      uVar4 = 0;
      goto LAB_085e1fd4;
    }
    local_40 = (CMission *)Factory(this,local_c8);
    if (local_40 == (CMission *)0x0) {
      uVar4 = 0;
      goto LAB_085e1fd4;
    }
    local_1c = (CMission *)CMission::GetMissionIndex(local_40);
    std::make_pair<int,CMission*&>(local_24,&local_1c);
    std::pair<int_const,CMission*>::pair<int,CMission*>(local_2c,(pair *)local_24);
    std::map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>>::insert
              (local_34);
    uVar3 = CMission::GetMissionKind(local_40);
    this_00 = (list<CMission*,std::allocator<CMission*>> *)
              std::
              vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
              ::operator[]((vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
                            *)(this + 0x18),uVar3);
    std::list<CMission*,std::allocator<CMission*>>::push_back(this_00,&local_40);
    iVar2 = CMission::GetMissionGrade(local_40);
    if (iVar2 == 2) {
      CMission::GetMissionKind(local_40);
      std::bitset<32u>::operator[]((uint)local_18);
      std::bitset<32u>::reference::operator=(local_18,true);
      std::bitset<32u>::reference::~reference(local_18);
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_3c);
  }
  sort_list(this);
  uVar4 = 1;
LAB_085e1fd4:
  MissionScript::~MissionScript(local_c8);
  return uVar4;
}
```

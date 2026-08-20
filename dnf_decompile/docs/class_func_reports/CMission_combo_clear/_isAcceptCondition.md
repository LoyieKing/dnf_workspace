# _isAcceptCondition

`_ZNK20CMission_combo_clear18_isAcceptConditionERK5CUser`

`CMission_combo_clear::_isAcceptCondition(CUser const&) const`

| 类 | 地址 |
|---|---|
| `CMission_combo_clear` | `0x085e42f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e42f0  _ZNK20CMission_combo_clear18_isAcceptConditionERK5CUser
#           CMission_combo_clear::_isAcceptCondition(CUser const&) const
# range [0x085e42f0, 0x085e439d]
085e42f0 +0x00:  push   %ebp
085e42f1 +0x01:  mov    %esp,%ebp
085e42f3 +0x03:  sub    $0x28,%esp
085e42f6 +0x06:  mov    0x8(%ebp),%eax
085e42f9 +0x09:  mov    0xc(%ebp),%edx
085e42fc +0x0c:  mov    %edx,0x4(%esp)
085e4300 +0x10:  mov    %eax,(%esp)
085e4303 +0x13:  call   085e3490 <_ZNK8CMission25_isAcceptCondition_SeriesERK5CUser>  ; CMission::_isAcceptCondition_Series(CUser const&) const
085e4308 +0x18:  xor    $0x1,%eax
085e430b +0x1b:  test   %al,%al
085e430d +0x1d:  je     085e4319 <+0x29>
085e430f +0x1f:  mov    $0x0,%eax
085e4314 +0x24:  jmp    085e439c <+0xac>
085e4319 +0x29:  lea    -0x10(%ebp),%eax
085e431c +0x2c:  mov    %eax,(%esp)
085e431f +0x2f:  call   085e68de <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x66>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x66
085e4324 +0x34:  mov    0xc(%ebp),%eax
085e4327 +0x37:  mov    %eax,(%esp)
085e432a +0x3a:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
085e432f +0x3f:  mov    %al,-0x10(%ebp)
085e4332 +0x42:  mov    0xc(%ebp),%eax
085e4335 +0x45:  mov    %eax,(%esp)
085e4338 +0x48:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
085e433d +0x4d:  cbtw
085e433f +0x4f:  mov    %ax,-0xe(%ebp)
085e4343 +0x53:  mov    0x8(%ebp),%eax
085e4346 +0x56:  lea    0x40(%eax),%ecx
085e4349 +0x59:  lea    -0x14(%ebp),%eax
085e434c +0x5c:  lea    -0x10(%ebp),%edx
085e434f +0x5f:  mov    %edx,0x8(%esp)
085e4353 +0x63:  mov    %ecx,0x4(%esp)
085e4357 +0x67:  mov    %eax,(%esp)
085e435a +0x6a:  call   085e7fe2 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x176a>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x176a
085e435f +0x6f:  sub    $0x4,%esp
085e4362 +0x72:  mov    0x8(%ebp),%eax
085e4365 +0x75:  lea    0x40(%eax),%edx
085e4368 +0x78:  lea    -0xc(%ebp),%eax
085e436b +0x7b:  mov    %edx,0x4(%esp)
085e436f +0x7f:  mov    %eax,(%esp)
085e4372 +0x82:  call   085e800e <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1796>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1796
085e4377 +0x87:  sub    $0x4,%esp
085e437a +0x8a:  lea    -0x14(%ebp),%eax
085e437d +0x8d:  mov    %eax,0x4(%esp)
085e4381 +0x91:  lea    -0xc(%ebp),%eax
085e4384 +0x94:  mov    %eax,(%esp)
085e4387 +0x97:  call   085e8034 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x17bc>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x17bc
085e438c +0x9c:  test   %al,%al
085e438e +0x9e:  je     085e4397 <+0xa7>
085e4390 +0xa0:  mov    $0x1,%eax
085e4395 +0xa5:  jmp    085e439c <+0xac>
085e4397 +0xa7:  mov    $0x0,%eax
085e439c +0xac:  leave
085e439d +0xad:  ret
```

## 反编译 C

```c
// CMission_combo_clear::_isAcceptCondition @ 0x85e42f0

/* CMission_combo_clear::_isAcceptCondition(CUser const&) const */

undefined4 __thiscall
CMission_combo_clear::_isAcceptCondition(CMission_combo_clear *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  combo_script_key local_18 [4];
  combo_script_key local_14 [2];
  short local_12;
  map<combo_script_key,combo_script_data,std::less<combo_script_key>,std::allocator<std::pair<combo_script_key_const,combo_script_data>>>
  local_10 [12];
  
  cVar1 = CMission::_isAcceptCondition_Series((CMission *)this,param_1);
  if (cVar1 == '\x01') {
    combo_script_key::combo_script_key(local_14);
    local_14[0] = (combo_script_key)CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
    local_12 = (short)cVar1;
    std::
    map<combo_script_key,combo_script_data,std::less<combo_script_key>,std::allocator<std::pair<combo_script_key_const,combo_script_data>>>
    ::find(local_18);
    std::
    map<combo_script_key,combo_script_data,std::less<combo_script_key>,std::allocator<std::pair<combo_script_key_const,combo_script_data>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<combo_script_key_const,combo_script_data>>::
            operator!=((_Rb_tree_const_iterator<std::pair<combo_script_key_const,combo_script_data>>
                        *)local_10,(_Rb_tree_const_iterator *)local_18);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

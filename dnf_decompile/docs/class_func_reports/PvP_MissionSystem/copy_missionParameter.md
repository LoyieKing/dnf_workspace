# copy_missionParameter

`_ZN17PvP_MissionSystem21copy_missionParameterERK22MissionParameterScript`

`PvP_MissionSystem::copy_missionParameter(MissionParameterScript const&)`

| 类 | 地址 |
|---|---|
| `PvP_MissionSystem` | `0x085e206e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e206e  _ZN17PvP_MissionSystem21copy_missionParameterERK22MissionParameterScript
#           PvP_MissionSystem::copy_missionParameter(MissionParameterScript const&)
# range [0x085e206e, 0x085e20d3]
085e206e +0x00:  push   %ebp
085e206f +0x01:  mov    %esp,%ebp
085e2071 +0x03:  sub    $0x18,%esp
085e2074 +0x06:  mov    0xc(%ebp),%eax
085e2077 +0x09:  mov    0x8(%ebp),%edx
085e207a +0x0c:  add    $0x24,%edx
085e207d +0x0f:  mov    %eax,0x4(%esp)
085e2081 +0x13:  mov    %edx,(%esp)
085e2084 +0x16:  call   085e76b0 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xe38>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xe38
085e2089 +0x1b:  mov    0xc(%ebp),%eax
085e208c +0x1e:  mov    0xc(%eax),%edx
085e208f +0x21:  mov    0x8(%ebp),%eax
085e2092 +0x24:  mov    %edx,0x30(%eax)
085e2095 +0x27:  mov    0xc(%ebp),%eax
085e2098 +0x2a:  lea    0x10(%eax),%edx
085e209b +0x2d:  mov    0x8(%ebp),%eax
085e209e +0x30:  add    $0x34,%eax
085e20a1 +0x33:  mov    %edx,0x4(%esp)
085e20a5 +0x37:  mov    %eax,(%esp)
085e20a8 +0x3a:  call   085e78fe <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1086>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1086
085e20ad +0x3f:  mov    0xc(%ebp),%eax
085e20b0 +0x42:  mov    0x18(%eax),%edx
085e20b3 +0x45:  mov    0x8(%ebp),%eax
085e20b6 +0x48:  mov    %edx,0x3c(%eax)
085e20b9 +0x4b:  mov    0xc(%ebp),%eax
085e20bc +0x4e:  lea    0x1c(%eax),%edx
085e20bf +0x51:  mov    0x8(%ebp),%eax
085e20c2 +0x54:  add    $0x48,%eax
085e20c5 +0x57:  mov    %edx,0x4(%esp)
085e20c9 +0x5b:  mov    %eax,(%esp)
085e20cc +0x5e:  call   085e76b0 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xe38>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xe38
085e20d1 +0x63:  leave
085e20d2 +0x64:  ret
085e20d3 +0x65:  nop
```

## 反编译 C

```c
// PvP_MissionSystem::copy_missionParameter @ 0x85e206e

/* PvP_MissionSystem::copy_missionParameter(MissionParameterScript const&) */

void __thiscall
PvP_MissionSystem::copy_missionParameter(PvP_MissionSystem *this,MissionParameterScript *param_1)

{
  std::vector<unsigned_int,std::allocator<unsigned_int>>::operator=
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x24),(vector *)param_1);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0xc);
  std::
  list<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>::
  operator=((list<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
             *)(this + 0x34),(list *)(param_1 + 0x10));
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x18);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::operator=
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x48),
             (vector *)(param_1 + 0x1c));
  return;
}
```

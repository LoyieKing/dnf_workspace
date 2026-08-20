# get_BaseMissionExp_byRank

`_ZNK17PvP_MissionSystem25get_BaseMissionExp_byRankEt`

`PvP_MissionSystem::get_BaseMissionExp_byRank(unsigned short) const`

| 类 | 地址 |
|---|---|
| `PvP_MissionSystem` | `0x085e2e74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e2e74  _ZNK17PvP_MissionSystem25get_BaseMissionExp_byRankEt
#           PvP_MissionSystem::get_BaseMissionExp_byRank(unsigned short) const
# range [0x085e2e74, 0x085e2eff]
085e2e74 +0x00:  push   %ebp
085e2e75 +0x01:  mov    %esp,%ebp
085e2e77 +0x03:  push   %ebx
085e2e78 +0x04:  sub    $0x34,%esp
085e2e7b +0x07:  mov    0xc(%ebp),%eax
085e2e7e +0x0a:  mov    %ax,-0x1c(%ebp)
085e2e82 +0x0e:  movzwl -0x1c(%ebp),%ebx
085e2e86 +0x12:  mov    0x8(%ebp),%eax
085e2e89 +0x15:  add    $0x48,%eax
085e2e8c +0x18:  mov    %eax,(%esp)
085e2e8f +0x1b:  call   080e2462 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x208>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x208
085e2e94 +0x20:  cmp    %eax,%ebx
085e2e96 +0x22:  setae  %al
085e2e99 +0x25:  test   %al,%al
085e2e9b +0x27:  je     085e2ee2 <+0x6e>
085e2e9d +0x29:  movzwl -0x1c(%ebp),%ebx
085e2ea1 +0x2d:  movl   $0x5,0xc(%esp)
085e2ea9 +0x35:  movl   $0x162,0x8(%esp)
085e2eb1 +0x3d:  movl   $&_ZZNK17PvP_MissionSystem25get_BaseMissionExp_byRankEtE19__PRETTY_FUNCTION__,0x4(%esp)
085e2eb9 +0x45:  lea    -0x18(%ebp),%eax
085e2ebc +0x48:  mov    %eax,(%esp)
085e2ebf +0x4b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085e2ec4 +0x50:  mov    %ebx,0x8(%esp)
085e2ec8 +0x54:  movl   $"[@missionSystem] <InvalidRank : %d>",0x4(%esp)
085e2ed0 +0x5c:  lea    -0x18(%ebp),%eax
085e2ed3 +0x5f:  mov    %eax,(%esp)
085e2ed6 +0x62:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085e2edb +0x67:  mov    $0x0,%eax
085e2ee0 +0x6c:  jmp    085e2efa <+0x86>
085e2ee2 +0x6e:  movzwl -0x1c(%ebp),%eax
085e2ee6 +0x72:  mov    0x8(%ebp),%edx
085e2ee9 +0x75:  add    $0x48,%edx
085e2eec +0x78:  mov    %eax,0x4(%esp)
085e2ef0 +0x7c:  mov    %edx,(%esp)
085e2ef3 +0x7f:  call   080f5632 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x5e3>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x5e3
085e2ef8 +0x84:  mov    (%eax),%eax
085e2efa +0x86:  add    $0x34,%esp
085e2efd +0x89:  pop    %ebx
085e2efe +0x8a:  pop    %ebp
085e2eff +0x8b:  ret
```

## 反编译 C

```c
// PvP_MissionSystem::get_BaseMissionExp_byRank @ 0x85e2e74

/* PvP_MissionSystem::get_BaseMissionExp_byRank(unsigned short) const */

undefined4 __thiscall
PvP_MissionSystem::get_BaseMissionExp_byRank(PvP_MissionSystem *this,ushort param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  cMyTrace local_1c [20];
  
  uVar1 = std::vector<unsigned_int,std::allocator<unsigned_int>>::size
                    ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x48));
  if (param_1 < uVar1) {
    puVar3 = (undefined4 *)
             std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
                       ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x48),
                        (uint)param_1);
    uVar2 = *puVar3;
  }
  else {
    cMyTrace::cMyTrace(local_1c,
                       "unsigned int PvP_MissionSystem::get_BaseMissionExp_byRank(short unsigned int) const"
                       ,0x162,5);
    cMyTrace::operator()(local_1c,"[@missionSystem] <InvalidRank : %d>",(uint)param_1);
    uVar2 = 0;
  }
  return uVar2;
}
```

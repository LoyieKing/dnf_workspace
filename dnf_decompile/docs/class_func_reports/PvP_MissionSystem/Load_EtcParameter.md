# Load_EtcParameter

`_ZN17PvP_MissionSystem17Load_EtcParameterEv`

`PvP_MissionSystem::Load_EtcParameter()`

| 类 | 地址 |
|---|---|
| `PvP_MissionSystem` | `0x085e1fee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e1fee  _ZN17PvP_MissionSystem17Load_EtcParameterEv
#           PvP_MissionSystem::Load_EtcParameter()
# range [0x085e1fee, 0x085e206d]
085e1fee +0x00:  push   %ebp
085e1fef +0x01:  mov    %esp,%ebp
085e1ff1 +0x03:  push   %esi
085e1ff2 +0x04:  push   %ebx
085e1ff3 +0x05:  sub    $0x40,%esp
085e1ff6 +0x08:  lea    -0x30(%ebp),%eax
085e1ff9 +0x0b:  mov    %eax,(%esp)
085e1ffc +0x0e:  call   085e6fc4 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x74c>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x74c
085e2001 +0x13:  lea    -0x30(%ebp),%eax
085e2004 +0x16:  mov    %eax,(%esp)
085e2007 +0x19:  call   08a5b7ec <_Z31importPvpMissionParameterScriptR22MissionParameterScript>  ; importPvpMissionParameterScript(MissionParameterScript&)
085e200c +0x1e:  xor    $0x1,%eax
085e200f +0x21:  test   %al,%al
085e2011 +0x23:  je     085e2026 <+0x38>
085e2013 +0x25:  movl   $"Mission Parameter Error!",(%esp)
085e201a +0x2c:  call   0807e570 <_init+0xe68>
085e201f +0x31:  mov    $0x0,%ebx
085e2024 +0x36:  jmp    085e205a <+0x6c>
085e2026 +0x38:  lea    -0x30(%ebp),%eax
085e2029 +0x3b:  mov    %eax,0x4(%esp)
085e202d +0x3f:  mov    0x8(%ebp),%eax
085e2030 +0x42:  mov    %eax,(%esp)
085e2033 +0x45:  call   085e206e <_ZN17PvP_MissionSystem21copy_missionParameterERK22MissionParameterScript>  ; PvP_MissionSystem::copy_missionParameter(MissionParameterScript const&)
085e2038 +0x4a:  mov    $0x1,%ebx
085e203d +0x4f:  jmp    085e205a <+0x6c>
085e203f +0x51:  mov    %edx,%ebx
085e2041 +0x53:  mov    %eax,%esi
085e2043 +0x55:  lea    -0x30(%ebp),%eax
085e2046 +0x58:  mov    %eax,(%esp)
085e2049 +0x5b:  call   085e7030 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x7b8>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x7b8
085e204e +0x60:  mov    %esi,%eax
085e2050 +0x62:  mov    %ebx,%edx
085e2052 +0x64:  mov    %eax,(%esp)
085e2055 +0x67:  call   08ae3750 <_Unwind_Resume>
085e205a +0x6c:  lea    -0x30(%ebp),%eax
085e205d +0x6f:  mov    %eax,(%esp)
085e2060 +0x72:  call   085e7030 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x7b8>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x7b8
085e2065 +0x77:  mov    %ebx,%eax
085e2067 +0x79:  add    $0x40,%esp
085e206a +0x7c:  pop    %ebx
085e206b +0x7d:  pop    %esi
085e206c +0x7e:  pop    %ebp
085e206d +0x7f:  ret
```

## 反编译 C

```c
// PvP_MissionSystem::Load_EtcParameter @ 0x85e1fee

/* PvP_MissionSystem::Load_EtcParameter() */

bool __thiscall PvP_MissionSystem::Load_EtcParameter(PvP_MissionSystem *this)

{
  char cVar1;
  MissionParameterScript local_34 [40];
  
  MissionParameterScript::MissionParameterScript(local_34);
                    /* try { // try from 085e2007 to 085e2037 has its CatchHandler @ 085e203f */
  cVar1 = importPvpMissionParameterScript(local_34);
  if (cVar1 == '\x01') {
    copy_missionParameter(this,local_34);
  }
  else {
    puts("Mission Parameter Error!");
  }
  MissionParameterScript::~MissionParameterScript(local_34);
  return cVar1 == '\x01';
}
```

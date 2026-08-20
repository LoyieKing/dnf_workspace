# acceptable_within_mission

`_ZNK5CUser25acceptable_within_missionEv`

`CUser::acceptable_within_mission() const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08662774` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08662774  _ZNK5CUser25acceptable_within_missionEv
#           CUser::acceptable_within_mission() const
# range [0x08662774, 0x086627df]
08662774 +0x00:  push   %ebp
08662775 +0x01:  mov    %esp,%ebp
08662777 +0x03:  push   %ebx
08662778 +0x04:  sub    $0x24,%esp
0866277b +0x07:  movl   $0x8,0x4(%esp)
08662783 +0x0f:  mov    0x8(%ebp),%eax
08662786 +0x12:  mov    %eax,(%esp)
08662789 +0x15:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0866278e +0x1a:  mov    %eax,-0x10(%ebp)
08662791 +0x1d:  mov    0x8(%ebp),%eax
08662794 +0x20:  mov    %eax,(%esp)
08662797 +0x23:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
0866279c +0x28:  mov    %eax,%ebx
0866279e +0x2a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086627a3 +0x2f:  mov    %ebx,0x4(%esp)
086627a7 +0x33:  mov    %eax,(%esp)
086627aa +0x36:  call   0835fb3a <_ZNK12CDataManager22get_WithinMissionIndexEi>  ; CDataManager::get_WithinMissionIndex(int) const
086627af +0x3b:  mov    %eax,-0xc(%ebp)
086627b2 +0x3e:  cmpl   $0x0,-0xc(%ebp)
086627b6 +0x42:  jne    086627bf <+0x4b>
086627b8 +0x44:  mov    $0x0,%eax
086627bd +0x49:  jmp    086627d9 <+0x65>
086627bf +0x4b:  movl   $0x1b,0x8(%esp)
086627c7 +0x53:  mov    0x8(%ebp),%eax
086627ca +0x56:  mov    %eax,0x4(%esp)
086627ce +0x5a:  mov    -0x10(%ebp),%eax
086627d1 +0x5d:  mov    %eax,(%esp)
086627d4 +0x60:  call   085e4fba <_ZN19CMissionList_Charac24MakeMissionList_JustKindERK5CUserj>  ; CMissionList_Charac::MakeMissionList_JustKind(CUser const&, unsigned int)
086627d9 +0x65:  add    $0x24,%esp
086627dc +0x68:  pop    %ebx
086627dd +0x69:  pop    %ebp
086627de +0x6a:  ret
086627df +0x6b:  nop
```

## 反编译 C

```c
// CUser::acceptable_within_mission @ 0x8662774

/* CUser::acceptable_within_mission() const */

undefined4 __thiscall CUser::acceptable_within_mission(CUser *this)

{
  CMissionList_Charac *this_00;
  int iVar1;
  CDataManager *this_01;
  undefined4 uVar2;
  
  this_00 = (CMissionList_Charac *)GetCharacExpandData(this,8);
  iVar1 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)this);
  this_01 = (CDataManager *)G_CDataManager();
  iVar1 = CDataManager::get_WithinMissionIndex(this_01,iVar1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CMissionList_Charac::MakeMissionList_JustKind(this_00,this,0x1b);
  }
  return uVar2;
}
```

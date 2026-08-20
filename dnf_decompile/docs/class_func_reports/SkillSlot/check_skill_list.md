# check_skill_list

`_ZNK9SkillSlot16check_skill_listEiSt6vectorISt4pairIiiESaIS2_EEi`

`SkillSlot::check_skill_list(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >, int) const`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08604c02` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08604c02  _ZNK9SkillSlot16check_skill_listEiSt6vectorISt4pairIiiESaIS2_EEi
#           SkillSlot::check_skill_list(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >, int) const
# range [0x08604c02, 0x08604d8f]
08604c02 +0x000:  push   %ebp
08604c03 +0x001:  mov    %esp,%ebp
08604c05 +0x003:  sub    $0x58,%esp
08604c08 +0x006:  mov    0x10(%ebp),%eax
08604c0b +0x009:  mov    %eax,(%esp)
08604c0e +0x00c:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08604c13 +0x011:  test   %eax,%eax
08604c15 +0x013:  sete   %al
08604c18 +0x016:  test   %al,%al
08604c1a +0x018:  je     08604c26 <+0x24>
08604c1c +0x01a:  mov    $0x1,%eax
08604c21 +0x01f:  jmp    08604d8e <+0x18c>
08604c26 +0x024:  movl   $0x0,-0x18(%ebp)
08604c2d +0x02b:  lea    -0x2c(%ebp),%eax
08604c30 +0x02e:  mov    0x10(%ebp),%edx
08604c33 +0x031:  mov    %edx,0x4(%esp)
08604c37 +0x035:  mov    %eax,(%esp)
08604c3a +0x038:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
08604c3f +0x03d:  sub    $0x4,%esp
08604c42 +0x040:  lea    -0x34(%ebp),%eax
08604c45 +0x043:  mov    %eax,(%esp)
08604c48 +0x046:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
08604c4d +0x04b:  jmp    08604d5a <+0x158>
08604c52 +0x050:  lea    -0x2c(%ebp),%eax
08604c55 +0x053:  mov    %eax,(%esp)
08604c58 +0x056:  call   080dd5fc <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x145>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x145
08604c5d +0x05b:  mov    0x4(%eax),%edx
08604c60 +0x05e:  mov    (%eax),%eax
08604c62 +0x060:  mov    %eax,-0x24(%ebp)
08604c65 +0x063:  mov    %edx,-0x20(%ebp)
08604c68 +0x066:  lea    -0x24(%ebp),%eax
08604c6b +0x069:  mov    %eax,0x4(%esp)
08604c6f +0x06d:  lea    -0x34(%ebp),%eax
08604c72 +0x070:  mov    %eax,(%esp)
08604c75 +0x073:  call   080ddf1c <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xa65>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xa65
08604c7a +0x078:  mov    -0x34(%ebp),%eax
08604c7d +0x07b:  mov    %eax,-0x14(%ebp)
08604c80 +0x07e:  mov    -0x30(%ebp),%eax
08604c83 +0x081:  mov    %eax,-0x10(%ebp)
08604c86 +0x084:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08604c8b +0x089:  mov    -0x14(%ebp),%edx
08604c8e +0x08c:  mov    %edx,0x8(%esp)
08604c92 +0x090:  mov    0xc(%ebp),%edx
08604c95 +0x093:  mov    %edx,0x4(%esp)
08604c99 +0x097:  mov    %eax,(%esp)
08604c9c +0x09a:  call   0835fda2 <_ZNK12CDataManager10find_skillEii>  ; CDataManager::find_skill(int, int) const
08604ca1 +0x09f:  mov    %eax,-0x18(%ebp)
08604ca4 +0x0a2:  cmpl   $0x0,-0x18(%ebp)
08604ca8 +0x0a6:  jne    08604cee <+0xec>
08604caa +0x0a8:  mov    -0x14(%ebp),%eax
08604cad +0x0ab:  mov    %eax,0x18(%esp)
08604cb1 +0x0af:  mov    0xc(%ebp),%eax
08604cb4 +0x0b2:  mov    %eax,0x14(%esp)
08604cb8 +0x0b6:  movl   $"G_CDataManager()->find_skill( %d, %d )",0x10(%esp)
08604cc0 +0x0be:  movl   $0x42b,0xc(%esp)
08604cc8 +0x0c6:  movl   $&_ZZNK9SkillSlot16check_skill_listEiSt6vectorISt4pairIiiESaIS2_EEiE19__PRETTY_FUNCTION__,0x8(%esp)
08604cd0 +0x0ce:  movl   $"skill_slot.cpp",0x4(%esp)
08604cd8 +0x0d6:  movl   $0x1,(%esp)
08604cdf +0x0dd:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08604ce4 +0x0e2:  mov    $0x0,%eax
08604ce9 +0x0e7:  jmp    08604d8e <+0x18c>
08604cee +0x0ec:  mov    -0x18(%ebp),%eax
08604cf1 +0x0ef:  mov    %eax,(%esp)
08604cf4 +0x0f2:  call   08374b96 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeb62>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeb62
08604cf9 +0x0f7:  mov    %eax,-0xc(%ebp)
08604cfc +0x0fa:  mov    0x14(%ebp),%eax
08604cff +0x0fd:  sub    %eax,-0x10(%ebp)
08604d02 +0x100:  cmpl   $0x0,-0x10(%ebp)
08604d06 +0x104:  jg     08604d0f <+0x10d>
08604d08 +0x106:  movl   $0x1,-0x10(%ebp)
08604d0f +0x10d:  mov    -0xc(%ebp),%eax
08604d12 +0x110:  mov    %eax,0xc(%esp)
08604d16 +0x114:  mov    -0x10(%ebp),%eax
08604d19 +0x117:  mov    %eax,0x8(%esp)
08604d1d +0x11b:  mov    -0x14(%ebp),%eax
08604d20 +0x11e:  mov    %eax,0x4(%esp)
08604d24 +0x122:  mov    0x8(%ebp),%eax
08604d27 +0x125:  mov    %eax,(%esp)
08604d2a +0x128:  call   08604898 <_ZNK9SkillSlot20check_skill_masteredEiii>  ; SkillSlot::check_skill_mastered(int, int, int) const
08604d2f +0x12d:  xor    $0x1,%eax
08604d32 +0x130:  test   %al,%al
08604d34 +0x132:  je     08604d3d <+0x13b>
08604d36 +0x134:  mov    $0x0,%eax
08604d3b +0x139:  jmp    08604d8e <+0x18c>
08604d3d +0x13b:  lea    -0x1c(%ebp),%eax
08604d40 +0x13e:  movl   $0x0,0x8(%esp)
08604d48 +0x146:  lea    -0x2c(%ebp),%edx
08604d4b +0x149:  mov    %edx,0x4(%esp)
08604d4f +0x14d:  mov    %eax,(%esp)
08604d52 +0x150:  call   08388d9c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1883c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1883c
08604d57 +0x155:  sub    $0x4,%esp
08604d5a +0x158:  lea    -0x28(%ebp),%eax
08604d5d +0x15b:  mov    0x10(%ebp),%edx
08604d60 +0x15e:  mov    %edx,0x4(%esp)
08604d64 +0x162:  mov    %eax,(%esp)
08604d67 +0x165:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
08604d6c +0x16a:  sub    $0x4,%esp
08604d6f +0x16d:  lea    -0x28(%ebp),%eax
08604d72 +0x170:  mov    %eax,0x4(%esp)
08604d76 +0x174:  lea    -0x2c(%ebp),%eax
08604d79 +0x177:  mov    %eax,(%esp)
08604d7c +0x17a:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
08604d81 +0x17f:  test   %al,%al
08604d83 +0x181:  jne    08604c52 <+0x50>
08604d89 +0x187:  mov    $0x1,%eax
08604d8e +0x18c:  leave
08604d8f +0x18d:  ret
```

## 反编译 C

```c
// SkillSlot::check_skill_list @ 0x8604c02

/* SkillSlot::check_skill_list(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int,
   int> > >, int) const */

undefined4 __thiscall
SkillSlot::check_skill_list
          (SkillSlot *this,int param_1,
          vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_38;
  int local_34;
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_30 [4];
  __normal_iterator local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_20 [4];
  CSkill *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  iVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(param_3);
  if (iVar3 != 0) {
    local_1c = (CSkill *)0x0;
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    std::pair<int,int>::pair((pair<int,int> *)&local_38);
    while( true ) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      bVar2 = __gnu_cxx::operator!=(local_30,local_2c);
      if (!bVar2) break;
      puVar4 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
               ::operator*(local_30);
      local_24 = puVar4[1];
      local_28 = *puVar4;
      std::pair<int,int>::operator=((pair<int,int> *)&local_38,(pair *)&local_28);
      local_18 = local_38;
      local_14 = local_34;
      iVar3 = G_CDataManager();
      local_1c = (CSkill *)CDataManager::find_skill(iVar3,param_1);
      if (local_1c == (CSkill *)0x0) {
        LogManager::logFormat
                  (1,"skill_slot.cpp",
                   "bool SkillSlot::check_skill_list(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >, int) const"
                   ,0x42b,"G_CDataManager()->find_skill( %d, %d )",param_1,local_18);
        return 0;
      }
      local_10 = CSkill::get_group(local_1c);
      local_14 = local_14 - param_4;
      if (local_14 < 1) {
        local_14 = 1;
      }
      cVar1 = check_skill_mastered(this,local_18,local_14,local_10);
      if (cVar1 != '\x01') {
        return 0;
      }
      __gnu_cxx::
      __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
      ::operator++(local_20,(int)local_30);
    }
  }
  return 1;
}
```

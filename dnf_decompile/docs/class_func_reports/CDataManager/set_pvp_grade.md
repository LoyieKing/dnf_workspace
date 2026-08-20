# set_pvp_grade

`_ZN12CDataManager13set_pvp_gradeEv`

`CDataManager::set_pvp_grade()`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08360aa2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08360aa2  _ZN12CDataManager13set_pvp_gradeEv
#           CDataManager::set_pvp_grade()
# range [0x08360aa2, 0x08360bdd]
08360aa2 +0x000:  push   %ebp
08360aa3 +0x001:  mov    %esp,%ebp
08360aa5 +0x003:  push   %esi
08360aa6 +0x004:  push   %ebx
08360aa7 +0x005:  sub    $0x60,%esp
08360aaa +0x008:  mov    &_ZN10GlobalData15s_ref_pvp_gradeE,%eax
08360aaf +0x00d:  mov    %eax,(%esp)
08360ab2 +0x010:  call   085d4722 <_ZN11RefPvpGrade5ClearEv>  ; RefPvpGrade::Clear()
08360ab7 +0x015:  movl   $0x0,-0x14(%ebp)
08360abe +0x01c:  movl   $0x0,-0x10(%ebp)
08360ac5 +0x023:  lea    -0x50(%ebp),%eax
08360ac8 +0x026:  mov    %eax,(%esp)
08360acb +0x029:  call   0837f45e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xeefe>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xeefe
08360ad0 +0x02e:  lea    -0x50(%ebp),%eax
08360ad3 +0x031:  mov    %eax,0x4(%esp)
08360ad7 +0x035:  movl   $"Etc/pvp_ref.etc",(%esp)
08360ade +0x03c:  call   0890857b <_Z23importPvPReferenceTablePKcR15stPvpRefTable_t>  ; importPvPReferenceTable(char const*, stPvpRefTable_t&)
08360ae3 +0x041:  test   %eax,%eax
08360ae5 +0x043:  setne  %al
08360ae8 +0x046:  test   %al,%al
08360aea +0x048:  je     08360af6 <+0x54>
08360aec +0x04a:  mov    $0x0,%ebx
08360af1 +0x04f:  jmp    08360bc9 <+0x127>
08360af6 +0x054:  movl   $0x1,-0xc(%ebp)
08360afd +0x05b:  jmp    08360b72 <+0xd0>
08360aff +0x05d:  addl   $0x1,-0x10(%ebp)
08360b03 +0x061:  mov    -0x14(%ebp),%eax
08360b06 +0x064:  mov    %eax,-0x1c(%ebp)
08360b09 +0x067:  mov    -0xc(%ebp),%eax
08360b0c +0x06a:  mov    %eax,0x4(%esp)
08360b10 +0x06e:  lea    -0x50(%ebp),%eax
08360b13 +0x071:  add    $0x4,%eax
08360b16 +0x074:  mov    %eax,(%esp)
08360b19 +0x077:  call   083944bc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x23f5c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x23f5c
08360b1e +0x07c:  mov    0x4(%eax),%eax
08360b21 +0x07f:  mov    %eax,-0x18(%ebp)
08360b24 +0x082:  mov    -0xc(%ebp),%eax
08360b27 +0x085:  mov    %eax,0x4(%esp)
08360b2b +0x089:  lea    -0x50(%ebp),%eax
08360b2e +0x08c:  add    $0x4,%eax
08360b31 +0x08f:  mov    %eax,(%esp)
08360b34 +0x092:  call   083944bc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x23f5c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x23f5c
08360b39 +0x097:  mov    0x4(%eax),%eax
08360b3c +0x09a:  mov    %eax,-0x14(%ebp)
08360b3f +0x09d:  mov    -0xc(%ebp),%eax
08360b42 +0x0a0:  mov    %eax,0x4(%esp)
08360b46 +0x0a4:  lea    -0x50(%ebp),%eax
08360b49 +0x0a7:  add    $0x4,%eax
08360b4c +0x0aa:  mov    %eax,(%esp)
08360b4f +0x0ad:  call   083944bc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x23f5c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x23f5c
08360b54 +0x0b2:  mov    (%eax),%edx
08360b56 +0x0b4:  mov    &_ZN10GlobalData15s_ref_pvp_gradeE,%eax
08360b5b +0x0b9:  lea    -0x1c(%ebp),%ecx
08360b5e +0x0bc:  mov    %ecx,0x8(%esp)
08360b62 +0x0c0:  mov    %edx,0x4(%esp)
08360b66 +0x0c4:  mov    %eax,(%esp)
08360b69 +0x0c7:  call   085d4798 <_ZN11RefPvpGrade11SetPvpGradeEiRKNS_15RefPvpGradeDataE>  ; RefPvpGrade::SetPvpGrade(int, RefPvpGrade::RefPvpGradeData const&)
08360b6e +0x0cc:  addl   $0x1,-0xc(%ebp)
08360b72 +0x0d0:  mov    -0x50(%ebp),%eax
08360b75 +0x0d3:  cmp    -0xc(%ebp),%eax
08360b78 +0x0d6:  seta   %al
08360b7b +0x0d9:  test   %al,%al
08360b7d +0x0db:  jne    08360aff <+0x5d>
08360b7f +0x0dd:  mov    &_ZN10GlobalData15s_ref_pvp_gradeE,%eax
08360b84 +0x0e2:  lea    -0x50(%ebp),%edx
08360b87 +0x0e5:  mov    %edx,0x4(%esp)
08360b8b +0x0e9:  mov    %eax,(%esp)
08360b8e +0x0ec:  call   085d48a0 <_ZN11RefPvpGrade3setERK15stPvpRefTable_t>  ; RefPvpGrade::set(stPvpRefTable_t const&)
08360b93 +0x0f1:  mov    &_ZN10GlobalData15s_ref_pvp_gradeE,%eax
08360b98 +0x0f6:  mov    -0x10(%ebp),%edx
08360b9b +0x0f9:  mov    %edx,0x4(%esp)
08360b9f +0x0fd:  mov    %eax,(%esp)
08360ba2 +0x100:  call   085d4768 <_ZN11RefPvpGrade12SetLastGradeEi>  ; RefPvpGrade::SetLastGrade(int)
08360ba7 +0x105:  mov    $0x1,%ebx
08360bac +0x10a:  jmp    08360bc9 <+0x127>
08360bae +0x10c:  mov    %edx,%ebx
08360bb0 +0x10e:  mov    %eax,%esi
08360bb2 +0x110:  lea    -0x50(%ebp),%eax
08360bb5 +0x113:  mov    %eax,(%esp)
08360bb8 +0x116:  call   0837f4d0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xef70>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xef70
08360bbd +0x11b:  mov    %esi,%eax
08360bbf +0x11d:  mov    %ebx,%edx
08360bc1 +0x11f:  mov    %eax,(%esp)
08360bc4 +0x122:  call   08ae3750 <_Unwind_Resume>
08360bc9 +0x127:  lea    -0x50(%ebp),%eax
08360bcc +0x12a:  mov    %eax,(%esp)
08360bcf +0x12d:  call   0837f4d0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xef70>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xef70
08360bd4 +0x132:  mov    %ebx,%eax
08360bd6 +0x134:  add    $0x60,%esp
08360bd9 +0x137:  pop    %ebx
08360bda +0x138:  pop    %esi
08360bdb +0x139:  pop    %ebp
08360bdc +0x13a:  ret
08360bdd +0x13b:  nop
```

## 反编译 C

```c
// CDataManager::set_pvp_grade @ 0x8360aa2

/* CDataManager::set_pvp_grade() */

undefined4 CDataManager::set_pvp_grade(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint local_54;
  vector<stPvpRefTable_t::stPvPGradeExp_t,std::allocator<stPvpRefTable_t::stPvPGradeExp_t>>
  avStack_50 [48];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  uint local_10;
  
  RefPvpGrade::Clear(GlobalData::s_ref_pvp_grade);
  local_18 = 0;
  local_14 = 0;
  stPvpRefTable_t::stPvpRefTable_t((stPvpRefTable_t *)&local_54);
                    /* try { // try from 08360ade to 08360ba6 has its CatchHandler @ 08360bae */
  iVar1 = importPvPReferenceTable("Etc/pvp_ref.etc",(stPvpRefTable_t *)&local_54);
  if (iVar1 == 0) {
    for (local_10 = 1; local_10 < local_54; local_10 = local_10 + 1) {
      local_14 = local_14 + 1;
      local_20 = local_18;
      iVar1 = std::
              vector<stPvpRefTable_t::stPvPGradeExp_t,std::allocator<stPvpRefTable_t::stPvPGradeExp_t>>
              ::operator[](avStack_50,local_10);
      local_1c = *(undefined4 *)(iVar1 + 4);
      iVar1 = std::
              vector<stPvpRefTable_t::stPvPGradeExp_t,std::allocator<stPvpRefTable_t::stPvPGradeExp_t>>
              ::operator[](avStack_50,local_10);
      local_18 = *(undefined4 *)(iVar1 + 4);
      piVar2 = (int *)std::
                      vector<stPvpRefTable_t::stPvPGradeExp_t,std::allocator<stPvpRefTable_t::stPvPGradeExp_t>>
                      ::operator[](avStack_50,local_10);
      RefPvpGrade::SetPvpGrade(GlobalData::s_ref_pvp_grade,*piVar2,(RefPvpGradeData *)&local_20);
    }
    RefPvpGrade::set(GlobalData::s_ref_pvp_grade,(stPvpRefTable_t *)&local_54);
    RefPvpGrade::SetLastGrade(GlobalData::s_ref_pvp_grade,local_14);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  stPvpRefTable_t::~stPvpRefTable_t((stPvpRefTable_t *)&local_54);
  return uVar3;
}
```

# getApplyLevel

`_ZN19TrainingQuestScript13getApplyLevelEPSt8multisetIiSt4lessIiESaIiEE`

`TrainingQuestScript::getApplyLevel(std::multiset<int, std::less<int>, std::allocator<int> >*)`

| 类 | 地址 |
|---|---|
| `TrainingQuestScript` | `0x08aaf8b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08aaf8b6  _ZN19TrainingQuestScript13getApplyLevelEPSt8multisetIiSt4lessIiESaIiEE
#           TrainingQuestScript::getApplyLevel(std::multiset<int, std::less<int>, std::allocator<int> >*)
# range [0x08aaf8b6, 0x08aafb43]
08aaf8b6 +0x000:  push   %ebp
08aaf8b7 +0x001:  mov    %esp,%ebp
08aaf8b9 +0x003:  push   %esi
08aaf8ba +0x004:  push   %ebx
08aaf8bb +0x005:  sub    $0x50,%esp
08aaf8be +0x008:  mov    0x8(%ebp),%eax
08aaf8c1 +0x00b:  mov    (%eax),%eax
08aaf8c3 +0x00d:  test   %eax,%eax
08aaf8c5 +0x00f:  jle    08aaf8d9 <+0x23>
08aaf8c7 +0x011:  mov    0x8(%ebp),%eax
08aaf8ca +0x014:  add    $0x4,%eax
08aaf8cd +0x017:  mov    %eax,(%esp)
08aaf8d0 +0x01a:  call   0811119a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6ac>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6ac
08aaf8d5 +0x01f:  test   %al,%al
08aaf8d7 +0x021:  je     08aaf8e0 <+0x2a>
08aaf8d9 +0x023:  mov    $0x1,%eax
08aaf8de +0x028:  jmp    08aaf8e5 <+0x2f>
08aaf8e0 +0x02a:  mov    $0x0,%eax
08aaf8e5 +0x02f:  test   %al,%al
08aaf8e7 +0x031:  je     08aaf8f3 <+0x3d>
08aaf8e9 +0x033:  mov    $0x0,%ebx
08aaf8ee +0x038:  jmp    08aafb37 <+0x281>
08aaf8f3 +0x03d:  lea    -0x38(%ebp),%eax
08aaf8f6 +0x040:  mov    %eax,(%esp)
08aaf8f9 +0x043:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08aaf8fe +0x048:  mov    0x8(%ebp),%eax
08aaf901 +0x04b:  mov    %eax,(%esp)
08aaf904 +0x04e:  call   08aafc64 <_ZN19TrainingQuestScript15computeDayIndexEv>  ; TrainingQuestScript::computeDayIndex()
08aaf909 +0x053:  mov    %eax,-0x1c(%ebp)
08aaf90c +0x056:  movl   $0x0,-0x18(%ebp)
08aaf913 +0x05d:  jmp    08aaf9c7 <+0x111>
08aaf918 +0x062:  mov    -0x1c(%ebp),%eax
08aaf91b +0x065:  mov    %eax,0x8(%esp)
08aaf91f +0x069:  mov    -0x18(%ebp),%eax
08aaf922 +0x06c:  mov    %eax,0x4(%esp)
08aaf926 +0x070:  mov    0x8(%ebp),%eax
08aaf929 +0x073:  mov    %eax,(%esp)
08aaf92c +0x076:  call   08aafc90 <_ZN19TrainingQuestScript21get_random_fake_valueEii>  ; TrainingQuestScript::get_random_fake_value(int, int)
08aaf931 +0x07b:  mov    %eax,-0x14(%ebp)
08aaf934 +0x07e:  movl   $0x0,-0x10(%ebp)
08aaf93b +0x085:  mov    0x8(%ebp),%eax
08aaf93e +0x088:  lea    0x4(%eax),%edx
08aaf941 +0x08b:  lea    -0x3c(%ebp),%eax
08aaf944 +0x08e:  mov    %edx,0x4(%esp)
08aaf948 +0x092:  mov    %eax,(%esp)
08aaf94b +0x095:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
08aaf950 +0x09a:  sub    $0x4,%esp
08aaf953 +0x09d:  jmp    08aaf995 <+0xdf>
08aaf955 +0x09f:  lea    -0x3c(%ebp),%eax
08aaf958 +0x0a2:  mov    %eax,(%esp)
08aaf95b +0x0a5:  call   080dd5fc <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x145>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x145
08aaf960 +0x0aa:  mov    0x4(%eax),%eax
08aaf963 +0x0ad:  add    %eax,-0x10(%ebp)
08aaf966 +0x0b0:  mov    -0x14(%ebp),%eax
08aaf969 +0x0b3:  cmp    -0x10(%ebp),%eax
08aaf96c +0x0b6:  jge    08aaf98a <+0xd4>
08aaf96e +0x0b8:  lea    -0x3c(%ebp),%eax
08aaf971 +0x0bb:  mov    %eax,(%esp)
08aaf974 +0x0be:  call   080dd5fc <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x145>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x145
08aaf979 +0x0c3:  mov    %eax,0x4(%esp)
08aaf97d +0x0c7:  lea    -0x38(%ebp),%eax
08aaf980 +0x0ca:  mov    %eax,(%esp)
08aaf983 +0x0cd:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
08aaf988 +0x0d2:  jmp    08aaf9c3 <+0x10d>
08aaf98a +0x0d4:  lea    -0x3c(%ebp),%eax
08aaf98d +0x0d7:  mov    %eax,(%esp)
08aaf990 +0x0da:  call   0811120a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x71c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x71c
08aaf995 +0x0df:  mov    0x8(%ebp),%eax
08aaf998 +0x0e2:  lea    0x4(%eax),%edx
08aaf99b +0x0e5:  lea    -0x2c(%ebp),%eax
08aaf99e +0x0e8:  mov    %edx,0x4(%esp)
08aaf9a2 +0x0ec:  mov    %eax,(%esp)
08aaf9a5 +0x0ef:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
08aaf9aa +0x0f4:  sub    $0x4,%esp
08aaf9ad +0x0f7:  lea    -0x2c(%ebp),%eax
08aaf9b0 +0x0fa:  mov    %eax,0x4(%esp)
08aaf9b4 +0x0fe:  lea    -0x3c(%ebp),%eax
08aaf9b7 +0x101:  mov    %eax,(%esp)
08aaf9ba +0x104:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
08aaf9bf +0x109:  test   %al,%al
08aaf9c1 +0x10b:  jne    08aaf955 <+0x9f>
08aaf9c3 +0x10d:  addl   $0x1,-0x18(%ebp)
08aaf9c7 +0x111:  mov    0x8(%ebp),%eax
08aaf9ca +0x114:  mov    (%eax),%eax
08aaf9cc +0x116:  cmp    -0x18(%ebp),%eax
08aaf9cf +0x119:  setg   %al
08aaf9d2 +0x11c:  test   %al,%al
08aaf9d4 +0x11e:  jne    08aaf918 <+0x62>
08aaf9da +0x124:  movl   $0x1,-0xc(%ebp)
08aaf9e1 +0x12b:  jmp    08aafafb <+0x245>
08aaf9e6 +0x130:  lea    -0x40(%ebp),%eax
08aaf9e9 +0x133:  lea    -0x38(%ebp),%edx
08aaf9ec +0x136:  mov    %edx,0x4(%esp)
08aaf9f0 +0x13a:  mov    %eax,(%esp)
08aaf9f3 +0x13d:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08aaf9f8 +0x142:  sub    $0x4,%esp
08aaf9fb +0x145:  jmp    08aafac8 <+0x212>
08aafa00 +0x14a:  lea    -0x40(%ebp),%eax
08aafa03 +0x14d:  mov    %eax,(%esp)
08aafa06 +0x150:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
08aafa0b +0x155:  mov    (%eax),%eax
08aafa0d +0x157:  cmp    $0xffffff9c,%eax
08aafa10 +0x15a:  sete   %al
08aafa13 +0x15d:  test   %al,%al
08aafa15 +0x15f:  je     08aafa50 <+0x19a>
08aafa17 +0x161:  lea    -0x40(%ebp),%eax
08aafa1a +0x164:  mov    %eax,(%esp)
08aafa1d +0x167:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
08aafa22 +0x16c:  mov    %eax,%edx
08aafa24 +0x16e:  mov    -0xc(%ebp),%eax
08aafa27 +0x171:  lea    -0x1(%eax),%ecx
08aafa2a +0x174:  mov    %ecx,%eax
08aafa2c +0x176:  add    %eax,%eax
08aafa2e +0x178:  add    %ecx,%eax
08aafa30 +0x17a:  shl    $0x3,%eax
08aafa33 +0x17d:  mov    %eax,%ecx
08aafa35 +0x17f:  add    0xc(%ebp),%ecx
08aafa38 +0x182:  lea    -0x24(%ebp),%eax
08aafa3b +0x185:  mov    %edx,0x8(%esp)
08aafa3f +0x189:  mov    %ecx,0x4(%esp)
08aafa43 +0x18d:  mov    %eax,(%esp)
08aafa46 +0x190:  call   08aafe3a <_GLOBAL__I__Z25importTrainingQuestScriptP19TrainingQuestScriptPKc+0x3f>  ; global constructors keyed to importTrainingQuestScript(TrainingQuestScript*, char const*)+0x3f
08aafa4b +0x195:  sub    $0x4,%esp
08aafa4e +0x198:  jmp    08aafabd <+0x207>
08aafa50 +0x19a:  lea    -0x40(%ebp),%eax
08aafa53 +0x19d:  mov    %eax,(%esp)
08aafa56 +0x1a0:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
08aafa5b +0x1a5:  mov    (%eax),%eax
08aafa5d +0x1a7:  cmp    $0xffffff9c,%eax
08aafa60 +0x1aa:  je     08aafa7d <+0x1c7>
08aafa62 +0x1ac:  lea    -0x40(%ebp),%eax
08aafa65 +0x1af:  mov    %eax,(%esp)
08aafa68 +0x1b2:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
08aafa6d +0x1b7:  mov    (%eax),%eax
08aafa6f +0x1b9:  add    -0xc(%ebp),%eax
08aafa72 +0x1bc:  test   %eax,%eax
08aafa74 +0x1be:  jle    08aafa7d <+0x1c7>
08aafa76 +0x1c0:  mov    $0x1,%eax
08aafa7b +0x1c5:  jmp    08aafa82 <+0x1cc>
08aafa7d +0x1c7:  mov    $0x0,%eax
08aafa82 +0x1cc:  test   %al,%al
08aafa84 +0x1ce:  je     08aafabd <+0x207>
08aafa86 +0x1d0:  lea    -0x40(%ebp),%eax
08aafa89 +0x1d3:  mov    %eax,(%esp)
08aafa8c +0x1d6:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
08aafa91 +0x1db:  mov    %eax,%edx
08aafa93 +0x1dd:  mov    -0xc(%ebp),%eax
08aafa96 +0x1e0:  lea    -0x1(%eax),%ecx
08aafa99 +0x1e3:  mov    %ecx,%eax
08aafa9b +0x1e5:  add    %eax,%eax
08aafa9d +0x1e7:  add    %ecx,%eax
08aafa9f +0x1e9:  shl    $0x3,%eax
08aafaa2 +0x1ec:  mov    %eax,%ecx
08aafaa4 +0x1ee:  add    0xc(%ebp),%ecx
08aafaa7 +0x1f1:  lea    -0x20(%ebp),%eax
08aafaaa +0x1f4:  mov    %edx,0x8(%esp)
08aafaae +0x1f8:  mov    %ecx,0x4(%esp)
08aafab2 +0x1fc:  mov    %eax,(%esp)
08aafab5 +0x1ff:  call   08aafe3a <_GLOBAL__I__Z25importTrainingQuestScriptP19TrainingQuestScriptPKc+0x3f>  ; global constructors keyed to importTrainingQuestScript(TrainingQuestScript*, char const*)+0x3f
08aafaba +0x204:  sub    $0x4,%esp
08aafabd +0x207:  lea    -0x40(%ebp),%eax
08aafac0 +0x20a:  mov    %eax,(%esp)
08aafac3 +0x20d:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
08aafac8 +0x212:  lea    -0x28(%ebp),%eax
08aafacb +0x215:  lea    -0x38(%ebp),%edx
08aaface +0x218:  mov    %edx,0x4(%esp)
08aafad2 +0x21c:  mov    %eax,(%esp)
08aafad5 +0x21f:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08aafada +0x224:  sub    $0x4,%esp
08aafadd +0x227:  lea    -0x28(%ebp),%eax
08aafae0 +0x22a:  mov    %eax,0x4(%esp)
08aafae4 +0x22e:  lea    -0x40(%ebp),%eax
08aafae7 +0x231:  mov    %eax,(%esp)
08aafaea +0x234:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
08aafaef +0x239:  test   %al,%al
08aafaf1 +0x23b:  jne    08aafa00 <+0x14a>
08aafaf7 +0x241:  addl   $0x1,-0xc(%ebp)
08aafafb +0x245:  cmpl   $0x46,-0xc(%ebp)
08aafaff +0x249:  setle  %al
08aafb02 +0x24c:  test   %al,%al
08aafb04 +0x24e:  jne    08aaf9e6 <+0x130>
08aafb0a +0x254:  mov    $0x1,%ebx
08aafb0f +0x259:  lea    -0x38(%ebp),%eax
08aafb12 +0x25c:  mov    %eax,(%esp)
08aafb15 +0x25f:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08aafb1a +0x264:  jmp    08aafb37 <+0x281>
08aafb1c +0x266:  mov    %edx,%ebx
08aafb1e +0x268:  mov    %eax,%esi
08aafb20 +0x26a:  lea    -0x38(%ebp),%eax
08aafb23 +0x26d:  mov    %eax,(%esp)
08aafb26 +0x270:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08aafb2b +0x275:  mov    %esi,%eax
08aafb2d +0x277:  mov    %ebx,%edx
08aafb2f +0x279:  mov    %eax,(%esp)
08aafb32 +0x27c:  call   08ae3750 <_Unwind_Resume>
08aafb37 +0x281:  mov    %ebx,%eax
08aafb39 +0x283:  lea    -0x8(%ebp),%esp
08aafb3c +0x286:  add    $0x0,%esp
08aafb3f +0x289:  pop    %ebx
08aafb40 +0x28a:  pop    %esi
08aafb41 +0x28b:  pop    %ebp
08aafb42 +0x28c:  ret
08aafb43 +0x28d:  nop
```

## 反编译 C

```c
// TrainingQuestScript::getApplyLevel @ 0x8aaf8b6

/* TrainingQuestScript::getApplyLevel(std::multiset<int, std::less<int>, std::allocator<int> >*) */

undefined4 TrainingQuestScript::getApplyLevel(multiset *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_44 [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_40 [4];
  vector<int,std::allocator<int>> local_3c [12];
  __normal_iterator local_30 [4];
  __normal_iterator local_2c [4];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (0 < *(int *)param_1) {
    cVar1 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
    if (cVar1 == '\0') {
      bVar2 = false;
      goto LAB_08aaf8e5;
    }
  }
  bVar2 = true;
LAB_08aaf8e5:
  if (bVar2) {
    uVar5 = 0;
  }
  else {
    std::vector<int,std::allocator<int>>::vector(local_3c);
    local_20 = computeDayIndex();
    for (local_1c = 0; local_1c < *(int *)param_1; local_1c = local_1c + 1) {
                    /* try { // try from 08aaf92c to 08aafaee has its CatchHandler @ 08aafb1c */
      local_18 = get_random_fake_value((TrainingQuestScript *)param_1,local_1c,local_20);
      local_14 = 0;
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
      while( true ) {
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
        bVar2 = __gnu_cxx::operator!=(local_40,local_30);
        if (!bVar2) break;
        iVar3 = __gnu_cxx::
                __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                ::operator*(local_40);
        local_14 = local_14 + *(int *)(iVar3 + 4);
        if (local_18 < local_14) {
          piVar4 = (int *)__gnu_cxx::
                          __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                          ::operator*(local_40);
          std::vector<int,std::allocator<int>>::push_back(local_3c,piVar4);
          break;
        }
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++(local_40);
      }
    }
    for (local_10 = 1; local_10 < 0x47; local_10 = local_10 + 1) {
      std::vector<int,std::allocator<int>>::begin();
      while( true ) {
        std::vector<int,std::allocator<int>>::end();
        bVar2 = __gnu_cxx::operator!=(local_44,local_2c);
        if (!bVar2) break;
        piVar4 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_44);
        if (*piVar4 == -100) {
          __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                    (local_44);
          std::multiset<int,std::less<int>,std::allocator<int>>::insert(&local_28);
        }
        else {
          piVar4 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                          operator*(local_44);
          if (*piVar4 == -100) {
LAB_08aafa7d:
            bVar2 = false;
          }
          else {
            piVar4 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>
                            ::operator*(local_44);
            if (*piVar4 + local_10 < 1) goto LAB_08aafa7d;
            bVar2 = true;
          }
          if (bVar2) {
            __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                      (local_44);
            std::multiset<int,std::less<int>,std::allocator<int>>::insert(&local_24);
          }
        }
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_44);
      }
    }
    uVar5 = 1;
    std::vector<int,std::allocator<int>>::~vector(local_3c);
  }
  return uVar5;
}
```

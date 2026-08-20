# isThereDailyTrainingQuestList

`_ZN12CDataManager29isThereDailyTrainingQuestListEii`

`CDataManager::isThereDailyTrainingQuestList(int, int)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0836411e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0836411e  _ZN12CDataManager29isThereDailyTrainingQuestListEii
#           CDataManager::isThereDailyTrainingQuestList(int, int)
# range [0x0836411e, 0x083641c1]
0836411e +0x00:  push   %ebp
0836411f +0x01:  mov    %esp,%ebp
08364121 +0x03:  sub    $0x28,%esp
08364124 +0x06:  cmpl   $0x0,0xc(%ebp)
08364128 +0x0a:  jle    08364130 <+0x12>
0836412a +0x0c:  cmpl   $0x46,0xc(%ebp)
0836412e +0x10:  jle    0836413a <+0x1c>
08364130 +0x12:  mov    $0x0,%eax
08364135 +0x17:  jmp    083641bf <+0xa1>
0836413a +0x1c:  mov    0xc(%ebp),%eax
0836413d +0x1f:  mov    %eax,0x4(%esp)
08364141 +0x23:  mov    0x8(%ebp),%eax
08364144 +0x26:  mov    %eax,(%esp)
08364147 +0x29:  call   083640fe <_ZN12CDataManager21getDailyTrainingQuestEi>  ; CDataManager::getDailyTrainingQuest(int)
0836414c +0x2e:  mov    %eax,-0xc(%ebp)
0836414f +0x31:  lea    -0x14(%ebp),%eax
08364152 +0x34:  mov    -0xc(%ebp),%edx
08364155 +0x37:  mov    %edx,0x4(%esp)
08364159 +0x3b:  mov    %eax,(%esp)
0836415c +0x3e:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08364161 +0x43:  sub    $0x4,%esp
08364164 +0x46:  jmp    0836418f <+0x71>
08364166 +0x48:  lea    -0x14(%ebp),%eax
08364169 +0x4b:  mov    %eax,(%esp)
0836416c +0x4e:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
08364171 +0x53:  mov    (%eax),%eax
08364173 +0x55:  cmp    0x10(%ebp),%eax
08364176 +0x58:  sete   %al
08364179 +0x5b:  test   %al,%al
0836417b +0x5d:  je     08364184 <+0x66>
0836417d +0x5f:  mov    $0x1,%eax
08364182 +0x64:  jmp    083641bf <+0xa1>
08364184 +0x66:  lea    -0x14(%ebp),%eax
08364187 +0x69:  mov    %eax,(%esp)
0836418a +0x6c:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
0836418f +0x71:  lea    -0x10(%ebp),%eax
08364192 +0x74:  mov    -0xc(%ebp),%edx
08364195 +0x77:  mov    %edx,0x4(%esp)
08364199 +0x7b:  mov    %eax,(%esp)
0836419c +0x7e:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
083641a1 +0x83:  sub    $0x4,%esp
083641a4 +0x86:  lea    -0x10(%ebp),%eax
083641a7 +0x89:  mov    %eax,0x4(%esp)
083641ab +0x8d:  lea    -0x14(%ebp),%eax
083641ae +0x90:  mov    %eax,(%esp)
083641b1 +0x93:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
083641b6 +0x98:  test   %al,%al
083641b8 +0x9a:  jne    08364166 <+0x48>
083641ba +0x9c:  mov    $0x0,%eax
083641bf +0xa1:  leave
083641c0 +0xa2:  ret
083641c1 +0xa3:  nop
```

## 反编译 C

```c
// CDataManager::isThereDailyTrainingQuestList @ 0x836411e

/* CDataManager::isThereDailyTrainingQuestList(int, int) */

undefined4 __thiscall
CDataManager::isThereDailyTrainingQuestList(CDataManager *this,int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_18 [4];
  __normal_iterator local_14 [4];
  undefined4 local_10;
  
  if ((0 < param_1) && (param_1 < 0x47)) {
    local_10 = getDailyTrainingQuest(this,param_1);
    std::vector<int,std::allocator<int>>::begin();
    while( true ) {
      std::vector<int,std::allocator<int>>::end();
      bVar1 = __gnu_cxx::operator!=(local_18,local_14);
      if (!bVar1) break;
      piVar2 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                      operator*(local_18);
      if (*piVar2 == param_2) {
        return 1;
      }
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++(local_18);
    }
  }
  return 0;
}
```

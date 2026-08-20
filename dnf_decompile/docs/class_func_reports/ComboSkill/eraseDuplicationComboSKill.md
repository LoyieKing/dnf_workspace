# eraseDuplicationComboSKill

`_ZN10ComboSkill26eraseDuplicationComboSKillE20ENUM_SKILL_TREE_KINDi`

`ComboSkill::eraseDuplicationComboSKill(ENUM_SKILL_TREE_KIND, int)`

| 类 | 地址 |
|---|---|
| `ComboSkill` | `0x080ea206` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ea206  _ZN10ComboSkill26eraseDuplicationComboSKillE20ENUM_SKILL_TREE_KINDi
#           ComboSkill::eraseDuplicationComboSKill(ENUM_SKILL_TREE_KIND, int)
# range [0x080ea206, 0x080ea386]
080ea206 +0x000:  push   %ebp
080ea207 +0x001:  mov    %esp,%ebp
080ea209 +0x003:  sub    $0x48,%esp
080ea20c +0x006:  mov    0xc(%ebp),%eax
080ea20f +0x009:  test   %eax,%eax
080ea211 +0x00b:  je     080ea253 <+0x4d>
080ea213 +0x00d:  mov    0xc(%ebp),%eax
080ea216 +0x010:  cmp    $0x1,%eax
080ea219 +0x013:  je     080ea253 <+0x4d>
080ea21b +0x015:  mov    0xc(%ebp),%eax
080ea21e +0x018:  mov    %eax,0x14(%esp)
080ea222 +0x01c:  movl   $"ComboSkill::eraseDuplicationComboSKill kind(%d) error",0x10(%esp)
080ea22a +0x024:  movl   $0xd4,0xc(%esp)
080ea232 +0x02c:  movl   $&_ZZN10ComboSkill26eraseDuplicationComboSKillE20ENUM_SKILL_TREE_KINDiE19__PRETTY_FUNCTION__,0x8(%esp)
080ea23a +0x034:  movl   $"ComboSkill.cpp",0x4(%esp)
080ea242 +0x03c:  movl   $0x1,(%esp)
080ea249 +0x043:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
080ea24e +0x048:  jmp    080ea385 <+0x17f>
080ea253 +0x04d:  mov    0xc(%ebp),%eax
080ea256 +0x050:  mov    %eax,0x4(%esp)
080ea25a +0x054:  mov    0x8(%ebp),%eax
080ea25d +0x057:  mov    %eax,(%esp)
080ea260 +0x05a:  call   080ea41c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x55>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x55
080ea265 +0x05f:  mov    %eax,-0xc(%ebp)
080ea268 +0x062:  lea    -0x20(%ebp),%eax
080ea26b +0x065:  mov    -0xc(%ebp),%edx
080ea26e +0x068:  mov    %edx,0x4(%esp)
080ea272 +0x06c:  mov    %eax,(%esp)
080ea275 +0x06f:  call   080ea600 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x239>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x239
080ea27a +0x074:  sub    $0x4,%esp
080ea27d +0x077:  jmp    080ea356 <+0x150>
080ea282 +0x07c:  lea    -0x20(%ebp),%eax
080ea285 +0x07f:  mov    %eax,(%esp)
080ea288 +0x082:  call   080ea660 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x299>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x299
080ea28d +0x087:  lea    0x4(%eax),%edx
080ea290 +0x08a:  lea    -0x24(%ebp),%eax
080ea293 +0x08d:  mov    %edx,0x4(%esp)
080ea297 +0x091:  mov    %eax,(%esp)
080ea29a +0x094:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
080ea29f +0x099:  sub    $0x4,%esp
080ea2a2 +0x09c:  jmp    080ea311 <+0x10b>
080ea2a4 +0x09e:  lea    -0x24(%ebp),%eax
080ea2a7 +0x0a1:  mov    %eax,(%esp)
080ea2aa +0x0a4:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
080ea2af +0x0a9:  mov    (%eax),%eax
080ea2b1 +0x0ab:  cmp    0x10(%ebp),%eax
080ea2b4 +0x0ae:  sete   %al
080ea2b7 +0x0b1:  test   %al,%al
080ea2b9 +0x0b3:  je     080ea306 <+0x100>
080ea2bb +0x0b5:  lea    -0x20(%ebp),%eax
080ea2be +0x0b8:  mov    %eax,(%esp)
080ea2c1 +0x0bb:  call   080ea660 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x299>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x299
080ea2c6 +0x0c0:  lea    0x4(%eax),%ecx
080ea2c9 +0x0c3:  lea    -0x14(%ebp),%eax
080ea2cc +0x0c6:  mov    -0x24(%ebp),%edx
080ea2cf +0x0c9:  mov    %edx,0x8(%esp)
080ea2d3 +0x0cd:  mov    %ecx,0x4(%esp)
080ea2d7 +0x0d1:  mov    %eax,(%esp)
080ea2da +0x0d4:  call   080ea48e <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0xc7>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0xc7
080ea2df +0x0d9:  sub    $0x4,%esp
080ea2e2 +0x0dc:  movl   $0x0,-0x10(%ebp)
080ea2e9 +0x0e3:  lea    -0x20(%ebp),%eax
080ea2ec +0x0e6:  mov    %eax,(%esp)
080ea2ef +0x0e9:  call   080ea660 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x299>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x299
080ea2f4 +0x0ee:  lea    0x4(%eax),%edx
080ea2f7 +0x0f1:  lea    -0x10(%ebp),%eax
080ea2fa +0x0f4:  mov    %eax,0x4(%esp)
080ea2fe +0x0f8:  mov    %edx,(%esp)
080ea301 +0x0fb:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080ea306 +0x100:  lea    -0x24(%ebp),%eax
080ea309 +0x103:  mov    %eax,(%esp)
080ea30c +0x106:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
080ea311 +0x10b:  lea    -0x20(%ebp),%eax
080ea314 +0x10e:  mov    %eax,(%esp)
080ea317 +0x111:  call   080ea660 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x299>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x299
080ea31c +0x116:  lea    0x4(%eax),%edx
080ea31f +0x119:  lea    -0x18(%ebp),%eax
080ea322 +0x11c:  mov    %edx,0x4(%esp)
080ea326 +0x120:  mov    %eax,(%esp)
080ea329 +0x123:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
080ea32e +0x128:  sub    $0x4,%esp
080ea331 +0x12b:  lea    -0x18(%ebp),%eax
080ea334 +0x12e:  mov    %eax,0x4(%esp)
080ea338 +0x132:  lea    -0x24(%ebp),%eax
080ea33b +0x135:  mov    %eax,(%esp)
080ea33e +0x138:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
080ea343 +0x13d:  test   %al,%al
080ea345 +0x13f:  jne    080ea2a4 <+0x9e>
080ea34b +0x145:  lea    -0x20(%ebp),%eax
080ea34e +0x148:  mov    %eax,(%esp)
080ea351 +0x14b:  call   080ea66e <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x2a7>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x2a7
080ea356 +0x150:  lea    -0x1c(%ebp),%eax
080ea359 +0x153:  mov    -0xc(%ebp),%edx
080ea35c +0x156:  mov    %edx,0x4(%esp)
080ea360 +0x15a:  mov    %eax,(%esp)
080ea363 +0x15d:  call   080ea626 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x25f>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x25f
080ea368 +0x162:  sub    $0x4,%esp
080ea36b +0x165:  lea    -0x1c(%ebp),%eax
080ea36e +0x168:  mov    %eax,0x4(%esp)
080ea372 +0x16c:  lea    -0x20(%ebp),%eax
080ea375 +0x16f:  mov    %eax,(%esp)
080ea378 +0x172:  call   080ea64c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x285>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x285
080ea37d +0x177:  test   %al,%al
080ea37f +0x179:  jne    080ea282 <+0x7c>
080ea385 +0x17f:  leave
080ea386 +0x180:  ret
```

## 反编译 C

```c
// ComboSkill::eraseDuplicationComboSKill @ 0x80ea206

/* ComboSkill::eraseDuplicationComboSKill(ENUM_SKILL_TREE_KIND, int) */

void __thiscall ComboSkill::eraseDuplicationComboSKill(ComboSkill *this,int param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_28;
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  local_24 [4];
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  local_20 [4];
  __normal_iterator local_1c [4];
  undefined1 local_18 [4];
  int local_14;
  undefined4 local_10;
  
  if ((param_2 == 0) || (param_2 == 1)) {
    local_10 = getComboSkillMap(this,param_2);
    std::
    map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
    ::begin(local_24);
    while( true ) {
      std::
      map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
      ::end(local_20);
      cVar2 = std::_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
              operator!=((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                          *)local_24,(_Rb_tree_iterator *)local_20);
      if (cVar2 == '\0') break;
      std::_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
      operator->((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>> *)
                 local_24);
      std::vector<int,std::allocator<int>>::begin();
      while( true ) {
        std::_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
        operator->((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>> *
                   )local_24);
        std::vector<int,std::allocator<int>>::end();
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,local_1c);
        if (!bVar1) break;
        piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                                  &local_28);
        if (*piVar3 == param_3) {
          iVar4 = std::
                  _Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
                  operator->((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                              *)local_24);
          std::vector<int,std::allocator<int>>::erase(local_18,iVar4 + 4,local_28);
          local_14 = 0;
          iVar4 = std::
                  _Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
                  operator->((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                              *)local_24);
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)(iVar4 + 4),&local_14);
        }
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_28);
      }
      std::_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
      operator++((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>> *)
                 local_24);
    }
  }
  else {
    LogManager::logFormat
              (1,"ComboSkill.cpp",
               "void ComboSkill::eraseDuplicationComboSKill(ENUM_SKILL_TREE_KIND, int)",0xd4,
               "ComboSkill::eraseDuplicationComboSKill kind(%d) error",param_2);
  }
  return;
}
```

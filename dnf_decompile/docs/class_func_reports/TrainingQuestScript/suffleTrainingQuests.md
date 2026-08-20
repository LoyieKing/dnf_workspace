# suffleTrainingQuests

`_ZN19TrainingQuestScript20suffleTrainingQuestsEv`

`TrainingQuestScript::suffleTrainingQuests()`

| 类 | 地址 |
|---|---|
| `TrainingQuestScript` | `0x08aafcbc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08aafcbc  _ZN19TrainingQuestScript20suffleTrainingQuestsEv
#           TrainingQuestScript::suffleTrainingQuests()
# range [0x08aafcbc, 0x08aafdba]
08aafcbc +0x00:  push   %ebp
08aafcbd +0x01:  mov    %esp,%ebp
08aafcbf +0x03:  sub    $0x38,%esp
08aafcc2 +0x06:  mov    0x8(%ebp),%eax
08aafcc5 +0x09:  mov    %eax,(%esp)
08aafcc8 +0x0c:  call   08aafc64 <_ZN19TrainingQuestScript15computeDayIndexEv>  ; TrainingQuestScript::computeDayIndex()
08aafccd +0x11:  mov    %eax,-0x14(%ebp)
08aafcd0 +0x14:  mov    -0x14(%ebp),%edx
08aafcd3 +0x17:  mov    %edx,%eax
08aafcd5 +0x19:  add    %eax,%eax
08aafcd7 +0x1b:  add    %edx,%eax
08aafcd9 +0x1d:  shl    $0x2,%eax
08aafcdc +0x20:  add    $0x10,%eax
08aafcdf +0x23:  add    0x8(%ebp),%eax
08aafce2 +0x26:  movl   $0x0,0x4(%esp)
08aafcea +0x2e:  mov    %eax,(%esp)
08aafced +0x31:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
08aafcf2 +0x36:  mov    (%eax),%eax
08aafcf4 +0x38:  mov    %eax,-0x10(%ebp)
08aafcf7 +0x3b:  mov    -0x10(%ebp),%eax
08aafcfa +0x3e:  mov    %eax,0x4(%esp)
08aafcfe +0x42:  lea    -0x20(%ebp),%eax
08aafd01 +0x45:  mov    %eax,(%esp)
08aafd04 +0x48:  call   08aafe18 <_GLOBAL__I__Z25importTrainingQuestScriptP19TrainingQuestScriptPKc+0x1d>  ; global constructors keyed to importTrainingQuestScript(TrainingQuestScript*, char const*)+0x1d
08aafd09 +0x4d:  movl   $0x0,-0xc(%ebp)
08aafd10 +0x54:  jmp    08aafdaa <+0xee>
08aafd15 +0x59:  mov    -0xc(%ebp),%edx
08aafd18 +0x5c:  mov    %edx,%eax
08aafd1a +0x5e:  add    %eax,%eax
08aafd1c +0x60:  add    %edx,%eax
08aafd1e +0x62:  shl    $0x2,%eax
08aafd21 +0x65:  add    $0x1130,%eax
08aafd26 +0x6a:  add    0x8(%ebp),%eax
08aafd29 +0x6d:  add    $0x8,%eax
08aafd2c +0x70:  mov    %eax,(%esp)
08aafd2f +0x73:  call   0811c960 <_GLOBAL__I_events+0x1003>  ; global constructors keyed to events+0x1003
08aafd34 +0x78:  test   %al,%al
08aafd36 +0x7a:  jne    08aafda5 <+0xe9>
08aafd38 +0x7c:  mov    -0xc(%ebp),%edx
08aafd3b +0x7f:  mov    %edx,%eax
08aafd3d +0x81:  add    %eax,%eax
08aafd3f +0x83:  add    %edx,%eax
08aafd41 +0x85:  shl    $0x2,%eax
08aafd44 +0x88:  add    $0x1130,%eax
08aafd49 +0x8d:  add    0x8(%ebp),%eax
08aafd4c +0x90:  lea    0x8(%eax),%edx
08aafd4f +0x93:  lea    -0x1c(%ebp),%eax
08aafd52 +0x96:  mov    %edx,0x4(%esp)
08aafd56 +0x9a:  mov    %eax,(%esp)
08aafd59 +0x9d:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08aafd5e +0xa2:  sub    $0x4,%esp
08aafd61 +0xa5:  mov    -0xc(%ebp),%edx
08aafd64 +0xa8:  mov    %edx,%eax
08aafd66 +0xaa:  add    %eax,%eax
08aafd68 +0xac:  add    %edx,%eax
08aafd6a +0xae:  shl    $0x2,%eax
08aafd6d +0xb1:  add    $0x1130,%eax
08aafd72 +0xb6:  add    0x8(%ebp),%eax
08aafd75 +0xb9:  lea    0x8(%eax),%edx
08aafd78 +0xbc:  lea    -0x18(%ebp),%eax
08aafd7b +0xbf:  mov    %edx,0x4(%esp)
08aafd7f +0xc3:  mov    %eax,(%esp)
08aafd82 +0xc6:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08aafd87 +0xcb:  sub    $0x4,%esp
08aafd8a +0xce:  lea    -0x20(%ebp),%eax
08aafd8d +0xd1:  mov    %eax,0x8(%esp)
08aafd91 +0xd5:  mov    -0x1c(%ebp),%eax
08aafd94 +0xd8:  mov    %eax,0x4(%esp)
08aafd98 +0xdc:  mov    -0x18(%ebp),%eax
08aafd9b +0xdf:  mov    %eax,(%esp)
08aafd9e +0xe2:  call   08aafe78 <_GLOBAL__I__Z25importTrainingQuestScriptP19TrainingQuestScriptPKc+0x7d>  ; global constructors keyed to importTrainingQuestScript(TrainingQuestScript*, char const*)+0x7d
08aafda3 +0xe7:  jmp    08aafda6 <+0xea>
08aafda5 +0xe9:  nop
08aafda6 +0xea:  addl   $0x1,-0xc(%ebp)
08aafdaa +0xee:  cmpl   $0x45,-0xc(%ebp)
08aafdae +0xf2:  setle  %al
08aafdb1 +0xf5:  test   %al,%al
08aafdb3 +0xf7:  jne    08aafd15 <+0x59>
08aafdb9 +0xfd:  leave
08aafdba +0xfe:  ret
```

## 反编译 C

```c
// TrainingQuestScript::suffleTrainingQuests @ 0x8aafcbc

/* TrainingQuestScript::suffleTrainingQuests() */

void __thiscall TrainingQuestScript::suffleTrainingQuests(TrainingQuestScript *this)

{
  char cVar1;
  int *piVar2;
  MyRandom local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = computeDayIndex();
  piVar2 = (int *)std::vector<int,std::allocator<int>>::at
                            ((vector<int,std::allocator<int>> *)(this + local_18 * 0xc + 0x10),0);
  local_14 = *piVar2;
  MyRandom::MyRandom(local_24,local_14);
  for (local_10 = 0; local_10 < 0x46; local_10 = local_10 + 1) {
    cVar1 = std::vector<int,std::allocator<int>>::empty();
    if (cVar1 == '\0') {
      std::vector<int,std::allocator<int>>::end();
      std::vector<int,std::allocator<int>>::begin();
      std::
      random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,MyRandom>
                (local_1c,local_20,local_24);
    }
  }
  return;
}
```

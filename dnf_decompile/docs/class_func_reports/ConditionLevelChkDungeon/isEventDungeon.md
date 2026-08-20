# isEventDungeon

`_ZN24ConditionLevelChkDungeon14isEventDungeonEi`

`ConditionLevelChkDungeon::isEventDungeon(int)`

| 类 | 地址 |
|---|---|
| `ConditionLevelChkDungeon` | `0x089139d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089139d4  _ZN24ConditionLevelChkDungeon14isEventDungeonEi
#           ConditionLevelChkDungeon::isEventDungeon(int)
# range [0x089139d4, 0x08913a61]
089139d4 +0x00:  push   %ebp
089139d5 +0x01:  mov    %esp,%ebp
089139d7 +0x03:  sub    $0x28,%esp
089139da +0x06:  mov    0x8(%ebp),%eax
089139dd +0x09:  mov    %eax,(%esp)
089139e0 +0x0c:  call   0811c960 <_GLOBAL__I_events+0x1003>  ; global constructors keyed to events+0x1003
089139e5 +0x11:  test   %al,%al
089139e7 +0x13:  je     089139f0 <+0x1c>
089139e9 +0x15:  mov    $0x1,%eax
089139ee +0x1a:  jmp    08913a60 <+0x8c>
089139f0 +0x1c:  mov    0x8(%ebp),%edx
089139f3 +0x1f:  lea    -0xc(%ebp),%eax
089139f6 +0x22:  mov    %edx,0x4(%esp)
089139fa +0x26:  mov    %eax,(%esp)
089139fd +0x29:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08913a02 +0x2e:  sub    $0x4,%esp
08913a05 +0x31:  mov    0x8(%ebp),%edx
08913a08 +0x34:  lea    -0x10(%ebp),%eax
08913a0b +0x37:  mov    %edx,0x4(%esp)
08913a0f +0x3b:  mov    %eax,(%esp)
08913a12 +0x3e:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08913a17 +0x43:  sub    $0x4,%esp
08913a1a +0x46:  jmp    08913a45 <+0x71>
08913a1c +0x48:  lea    -0xc(%ebp),%eax
08913a1f +0x4b:  mov    %eax,(%esp)
08913a22 +0x4e:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
08913a27 +0x53:  mov    (%eax),%eax
08913a29 +0x55:  cmp    0xc(%ebp),%eax
08913a2c +0x58:  sete   %al
08913a2f +0x5b:  test   %al,%al
08913a31 +0x5d:  je     08913a3a <+0x66>
08913a33 +0x5f:  mov    $0x0,%eax
08913a38 +0x64:  jmp    08913a60 <+0x8c>
08913a3a +0x66:  lea    -0xc(%ebp),%eax
08913a3d +0x69:  mov    %eax,(%esp)
08913a40 +0x6c:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
08913a45 +0x71:  lea    -0x10(%ebp),%eax
08913a48 +0x74:  mov    %eax,0x4(%esp)
08913a4c +0x78:  lea    -0xc(%ebp),%eax
08913a4f +0x7b:  mov    %eax,(%esp)
08913a52 +0x7e:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
08913a57 +0x83:  test   %al,%al
08913a59 +0x85:  jne    08913a1c <+0x48>
08913a5b +0x87:  mov    $0x1,%eax
08913a60 +0x8c:  leave
08913a61 +0x8d:  ret
```

## 反编译 C

```c
// ConditionLevelChkDungeon::isEventDungeon @ 0x89139d4

/* ConditionLevelChkDungeon::isEventDungeon(int) */

undefined4 __thiscall
ConditionLevelChkDungeon::isEventDungeon(ConditionLevelChkDungeon *this,int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  __normal_iterator local_14 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_10 [12];
  
  cVar1 = std::vector<int,std::allocator<int>>::empty();
  if (cVar1 == '\0') {
    std::vector<int,std::allocator<int>>::begin();
    std::vector<int,std::allocator<int>>::end();
    while (bVar2 = __gnu_cxx::operator!=(local_10,local_14), bVar2) {
      piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                      operator*(local_10);
      if (*piVar3 == param_1) {
        return 0;
      }
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++(local_10);
    }
  }
  return 1;
}
```

# _reset

`_ZN18online_preliminary33COnlinePreliminaryMemberMatchList6_resetEv`

`online_preliminary::COnlinePreliminaryMemberMatchList::_reset()`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryMemberMatchList` | `0x08586848` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08586848  _ZN18online_preliminary33COnlinePreliminaryMemberMatchList6_resetEv
#           online_preliminary::COnlinePreliminaryMemberMatchList::_reset()
# range [0x08586848, 0x0858685d]
08586848 +0x00:  push   %ebp
08586849 +0x01:  mov    %esp,%ebp
0858684b +0x03:  sub    $0x18,%esp
0858684e +0x06:  mov    0x8(%ebp),%eax
08586851 +0x09:  add    $0x8,%eax
08586854 +0x0c:  mov    %eax,(%esp)
08586857 +0x0f:  call   08586d0e <_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev+0x456>  ; global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()+0x456
0858685c +0x14:  leave
0858685d +0x15:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryMemberMatchList::_reset @ 0x8586848

/* online_preliminary::COnlinePreliminaryMemberMatchList::_reset() */

void __thiscall
online_preliminary::COnlinePreliminaryMemberMatchList::_reset
          (COnlinePreliminaryMemberMatchList *this)

{
  std::
  map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
  ::clear((map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
           *)(this + 8));
  return;
}
```

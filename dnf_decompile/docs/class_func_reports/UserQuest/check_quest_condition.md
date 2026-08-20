# check_quest_condition

`_ZN9UserQuest21check_quest_conditionEi`

`UserQuest::check_quest_condition(int)`

| 类 | 地址 |
|---|---|
| `UserQuest` | `0x086acf8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086acf8a  _ZN9UserQuest21check_quest_conditionEi
#           UserQuest::check_quest_condition(int)
# range [0x086acf8a, 0x086acffd]
086acf8a +0x00:  push   %ebp
086acf8b +0x01:  mov    %esp,%ebp
086acf8d +0x03:  sub    $0x38,%esp
086acf90 +0x06:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086acf95 +0x0b:  mov    0x18(%eax),%eax
086acf98 +0x0e:  mov    0xc(%ebp),%edx
086acf9b +0x11:  mov    %edx,0x4(%esp)
086acf9f +0x15:  mov    %eax,(%esp)
086acfa2 +0x18:  call   08355a5c <_ZN9QuestList10find_questEi>  ; QuestList::find_quest(int)
086acfa7 +0x1d:  mov    %eax,-0xc(%ebp)
086acfaa +0x20:  cmpl   $0x0,-0xc(%ebp)
086acfae +0x24:  jne    086acfea <+0x60>
086acfb0 +0x26:  mov    0xc(%ebp),%eax
086acfb3 +0x29:  mov    %eax,0x14(%esp)
086acfb7 +0x2d:  movl   $"G_CDataManager()->m_pQuestList->find_quest(%d) fail",0x10(%esp)
086acfbf +0x35:  movl   $0x403,0xc(%esp)
086acfc7 +0x3d:  movl   $&_ZZN9UserQuest21check_quest_conditionEiE19__PRETTY_FUNCTION__,0x8(%esp)
086acfcf +0x45:  movl   $"user_quest.cpp",0x4(%esp)
086acfd7 +0x4d:  movl   $0x1,(%esp)
086acfde +0x54:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086acfe3 +0x59:  mov    $0x0,%eax
086acfe8 +0x5e:  jmp    086acffc <+0x72>
086acfea +0x60:  mov    -0xc(%ebp),%eax
086acfed +0x63:  mov    %eax,0x4(%esp)
086acff1 +0x67:  mov    0x8(%ebp),%eax
086acff4 +0x6a:  mov    %eax,(%esp)
086acff7 +0x6d:  call   086ace46 <_ZN9UserQuest26check_quest_type_conditionEP5Quest>  ; UserQuest::check_quest_type_condition(Quest*)
086acffc +0x72:  leave
086acffd +0x73:  ret
```

## 反编译 C

```c
// UserQuest::check_quest_condition @ 0x86acf8a

/* UserQuest::check_quest_condition(int) */

undefined4 __thiscall UserQuest::check_quest_condition(UserQuest *this,int param_1)

{
  int iVar1;
  Quest *pQVar2;
  undefined4 uVar3;
  
  iVar1 = G_CDataManager();
  pQVar2 = (Quest *)QuestList::find_quest(*(int *)(iVar1 + 0x18));
  if (pQVar2 == (Quest *)0x0) {
    LogManager::logFormat
              (1,"user_quest.cpp","bool UserQuest::check_quest_condition(int)",0x403,
               "G_CDataManager()->m_pQuestList->find_quest(%d) fail",param_1);
    uVar3 = 0;
  }
  else {
    uVar3 = check_quest_type_condition(this,pQVar2);
  }
  return uVar3;
}
```

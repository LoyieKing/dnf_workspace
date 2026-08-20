# get_mail_quest_info

`_ZNK9UserQuest19get_mail_quest_infoERSt4listIiSaIiEERK18stSelectQuestParam`

`UserQuest::get_mail_quest_info(std::list<int, std::allocator<int> >&, stSelectQuestParam const&) const`

| 类 | 地址 |
|---|---|
| `UserQuest` | `0x086abd7a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086abd7a  _ZNK9UserQuest19get_mail_quest_infoERSt4listIiSaIiEERK18stSelectQuestParam
#           UserQuest::get_mail_quest_info(std::list<int, std::allocator<int> >&, stSelectQuestParam const&) const
# range [0x086abd7a, 0x086abdaf]
086abd7a +0x00:  push   %ebp
086abd7b +0x01:  mov    %esp,%ebp
086abd7d +0x03:  push   %ebx
086abd7e +0x04:  sub    $0x14,%esp
086abd81 +0x07:  mov    0x8(%ebp),%eax
086abd84 +0x0a:  lea    0x4(%eax),%ebx
086abd87 +0x0d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086abd8c +0x12:  mov    0x18(%eax),%eax
086abd8f +0x15:  mov    0x10(%ebp),%edx
086abd92 +0x18:  mov    %edx,0xc(%esp)
086abd96 +0x1c:  mov    %ebx,0x8(%esp)
086abd9a +0x20:  mov    0xc(%ebp),%edx
086abd9d +0x23:  mov    %edx,0x4(%esp)
086abda1 +0x27:  mov    %eax,(%esp)
086abda4 +0x2a:  call   08355304 <_ZN9QuestList17select_mail_questERSt4listIiSaIiEERKN8WongWork11CQuestClearERK18stSelectQuestParam>  ; QuestList::select_mail_quest(std::list<int, std::allocator<int> >&, WongWork::CQuestClear const&, stSelectQuestParam const&)
086abda9 +0x2f:  add    $0x14,%esp
086abdac +0x32:  pop    %ebx
086abdad +0x33:  pop    %ebp
086abdae +0x34:  ret
086abdaf +0x35:  nop
```

## 反编译 C

```c
// UserQuest::get_mail_quest_info @ 0x86abd7a

/* UserQuest::get_mail_quest_info(std::list<int, std::allocator<int> >&, stSelectQuestParam const&)
   const */

void __thiscall
UserQuest::get_mail_quest_info(UserQuest *this,list *param_1,stSelectQuestParam *param_2)

{
  int iVar1;
  
  iVar1 = G_CDataManager();
  QuestList::select_mail_quest
            (*(QuestList **)(iVar1 + 0x18),param_1,(CQuestClear *)(this + 4),param_2);
  return;
}
```

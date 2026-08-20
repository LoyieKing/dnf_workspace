# GetTrainingQuestList

`_ZN9QuestList20GetTrainingQuestListERSt6vectorIiSaIiEEs`

`QuestList::GetTrainingQuestList(std::vector<int, std::allocator<int> >&, short)`

| 类 | 地址 |
|---|---|
| `QuestList` | `0x08355a10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08355a10  _ZN9QuestList20GetTrainingQuestListERSt6vectorIiSaIiEEs
#           QuestList::GetTrainingQuestList(std::vector<int, std::allocator<int> >&, short)
# range [0x08355a10, 0x08355a5b]
08355a10 +0x00:  push   %ebp
08355a11 +0x01:  mov    %esp,%ebp
08355a13 +0x03:  push   %ebx
08355a14 +0x04:  sub    $0x24,%esp
08355a17 +0x07:  mov    0x10(%ebp),%eax
08355a1a +0x0a:  mov    %ax,-0xc(%ebp)
08355a1e +0x0e:  cmpw   $0x46,-0xc(%ebp)
08355a23 +0x13:  jg     08355a52 <+0x42>
08355a25 +0x15:  cmpw   $0x0,-0xc(%ebp)
08355a2a +0x1a:  jle    08355a55 <+0x45>
08355a2c +0x1c:  movswl -0xc(%ebp),%ebx
08355a30 +0x20:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08355a35 +0x25:  mov    %ebx,0x4(%esp)
08355a39 +0x29:  mov    %eax,(%esp)
08355a3c +0x2c:  call   083640fe <_ZN12CDataManager21getDailyTrainingQuestEi>  ; CDataManager::getDailyTrainingQuest(int)
08355a41 +0x31:  mov    %eax,0x4(%esp)
08355a45 +0x35:  mov    0xc(%ebp),%eax
08355a48 +0x38:  mov    %eax,(%esp)
08355a4b +0x3b:  call   080ccfd2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1e1f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1e1f
08355a50 +0x40:  jmp    08355a56 <+0x46>
08355a52 +0x42:  nop
08355a53 +0x43:  jmp    08355a56 <+0x46>
08355a55 +0x45:  nop
08355a56 +0x46:  add    $0x24,%esp
08355a59 +0x49:  pop    %ebx
08355a5a +0x4a:  pop    %ebp
08355a5b +0x4b:  ret
```

## 反编译 C

```c
// QuestList::GetTrainingQuestList @ 0x8355a10

/* QuestList::GetTrainingQuestList(std::vector<int, std::allocator<int> >&, short) */

void __thiscall QuestList::GetTrainingQuestList(QuestList *this,vector *param_1,short param_2)

{
  CDataManager *this_00;
  vector *pvVar1;
  
  if ((param_2 < 0x47) && (0 < param_2)) {
    this_00 = (CDataManager *)G_CDataManager();
    pvVar1 = (vector *)CDataManager::getDailyTrainingQuest(this_00,(int)param_2);
    std::vector<int,std::allocator<int>>::operator=
              ((vector<int,std::allocator<int>> *)param_1,pvVar1);
  }
  return;
}
```

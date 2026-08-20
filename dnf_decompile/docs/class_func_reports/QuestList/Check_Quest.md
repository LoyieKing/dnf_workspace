# Check_Quest

`_ZN9QuestList11Check_QuestEP5QuestR18stSelectQuestParamRKN8WongWork11CQuestClearE`

`QuestList::Check_Quest(Quest*, stSelectQuestParam&, WongWork::CQuestClear const&)`

| 类 | 地址 |
|---|---|
| `QuestList` | `0x08355474` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08355474  _ZN9QuestList11Check_QuestEP5QuestR18stSelectQuestParamRKN8WongWork11CQuestClearE
#           QuestList::Check_Quest(Quest*, stSelectQuestParam&, WongWork::CQuestClear const&)
# range [0x08355474, 0x0835556b]
08355474 +0x00:  push   %ebp
08355475 +0x01:  mov    %esp,%ebp
08355477 +0x03:  sub    $0x38,%esp
0835547a +0x06:  mov    0x10(%ebp),%eax
0835547d +0x09:  mov    (%eax),%eax
0835547f +0x0b:  mov    %eax,-0x24(%ebp)
08355482 +0x0e:  mov    0x10(%ebp),%eax
08355485 +0x11:  mov    0x4(%eax),%eax
08355488 +0x14:  mov    %eax,-0x20(%ebp)
0835548b +0x17:  mov    0x10(%ebp),%eax
0835548e +0x1a:  mov    0x8(%eax),%eax
08355491 +0x1d:  mov    %eax,-0x1c(%ebp)
08355494 +0x20:  mov    0x10(%ebp),%eax
08355497 +0x23:  mov    0xc(%eax),%eax
0835549a +0x26:  mov    %eax,-0x18(%ebp)
0835549d +0x29:  mov    0x10(%ebp),%eax
083554a0 +0x2c:  mov    0x10(%eax),%eax
083554a3 +0x2f:  mov    %eax,-0x14(%ebp)
083554a6 +0x32:  mov    0x10(%ebp),%eax
083554a9 +0x35:  movzbl 0x14(%eax),%eax
083554ad +0x39:  mov    %al,-0xd(%ebp)
083554b0 +0x3c:  mov    0x10(%ebp),%eax
083554b3 +0x3f:  mov    0x18(%eax),%eax
083554b6 +0x42:  mov    %eax,-0xc(%ebp)
083554b9 +0x45:  mov    0xc(%ebp),%eax
083554bc +0x48:  mov    %eax,(%esp)
083554bf +0x4b:  call   0822b5e2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc8c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc8c
083554c4 +0x50:  xor    $0x1,%eax
083554c7 +0x53:  test   %al,%al
083554c9 +0x55:  je     083554d5 <+0x61>
083554cb +0x57:  mov    $0x0,%eax
083554d0 +0x5c:  jmp    08355569 <+0xf5>
083554d5 +0x61:  mov    0x10(%ebp),%eax
083554d8 +0x64:  mov    %eax,0x4(%esp)
083554dc +0x68:  mov    0xc(%ebp),%eax
083554df +0x6b:  mov    %eax,(%esp)
083554e2 +0x6e:  call   08352d86 <_ZNK5Quest14check_possibleERK18stSelectQuestParam>  ; Quest::check_possible(stSelectQuestParam const&) const
083554e7 +0x73:  xor    $0x1,%eax
083554ea +0x76:  test   %al,%al
083554ec +0x78:  je     083554f5 <+0x81>
083554ee +0x7a:  mov    $0x0,%eax
083554f3 +0x7f:  jmp    08355569 <+0xf5>
083554f5 +0x81:  mov    0x14(%ebp),%eax
083554f8 +0x84:  mov    %eax,0x8(%esp)
083554fc +0x88:  mov    -0xc(%ebp),%eax
083554ff +0x8b:  mov    %eax,0x4(%esp)
08355503 +0x8f:  mov    0x8(%ebp),%eax
08355506 +0x92:  mov    %eax,(%esp)
08355509 +0x95:  call   08354fc8 <_ZN9QuestList17check_ahead_questEiRKN8WongWork11CQuestClearE>  ; QuestList::check_ahead_quest(int, WongWork::CQuestClear const&)
0835550e +0x9a:  xor    $0x1,%eax
08355511 +0x9d:  test   %al,%al
08355513 +0x9f:  je     0835551c <+0xa8>
08355515 +0xa1:  mov    $0x0,%eax
0835551a +0xa6:  jmp    08355569 <+0xf5>
0835551c +0xa8:  mov    0x14(%ebp),%eax
0835551f +0xab:  mov    %eax,0x8(%esp)
08355523 +0xaf:  mov    -0xc(%ebp),%eax
08355526 +0xb2:  mov    %eax,0x4(%esp)
0835552a +0xb6:  mov    0x8(%ebp),%eax
0835552d +0xb9:  mov    %eax,(%esp)
08355530 +0xbc:  call   0835511e <_ZN9QuestList16check_anti_questEiRKN8WongWork11CQuestClearE>  ; QuestList::check_anti_quest(int, WongWork::CQuestClear const&)
08355535 +0xc1:  xor    $0x1,%eax
08355538 +0xc4:  test   %al,%al
0835553a +0xc6:  je     08355543 <+0xcf>
0835553c +0xc8:  mov    $0x0,%eax
08355541 +0xcd:  jmp    08355569 <+0xf5>
08355543 +0xcf:  movsbl -0xd(%ebp),%eax
08355547 +0xd3:  mov    %eax,0x4(%esp)
0835554b +0xd7:  mov    0xc(%ebp),%eax
0835554e +0xda:  mov    %eax,(%esp)
08355551 +0xdd:  call   08352cc2 <_ZN5Quest16check_power_sideEc>  ; Quest::check_power_side(char)
08355556 +0xe2:  xor    $0x1,%eax
08355559 +0xe5:  test   %al,%al
0835555b +0xe7:  je     08355564 <+0xf0>
0835555d +0xe9:  mov    $0x0,%eax
08355562 +0xee:  jmp    08355569 <+0xf5>
08355564 +0xf0:  mov    $0x1,%eax
08355569 +0xf5:  leave
0835556a +0xf6:  ret
0835556b +0xf7:  nop
```

## 反编译 C

```c
// QuestList::Check_Quest @ 0x8355474

/* QuestList::Check_Quest(Quest*, stSelectQuestParam&, WongWork::CQuestClear const&) */

undefined4 __thiscall
QuestList::Check_Quest
          (QuestList *this,Quest *param_1,stSelectQuestParam *param_2,CQuestClear *param_3)

{
  stSelectQuestParam sVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  
  sVar1 = param_2[0x14];
  iVar2 = *(int *)(param_2 + 0x18);
  cVar3 = Quest::exposeQuest(param_1);
  if (cVar3 == '\x01') {
    cVar3 = Quest::check_possible(param_1,param_2);
    if (cVar3 == '\x01') {
      cVar3 = check_ahead_quest(this,iVar2,param_3);
      if (cVar3 == '\x01') {
        cVar3 = check_anti_quest(this,iVar2,param_3);
        if (cVar3 == '\x01') {
          cVar3 = Quest::check_power_side(param_1,(char)sVar1);
          if (cVar3 == '\x01') {
            uVar4 = 1;
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```

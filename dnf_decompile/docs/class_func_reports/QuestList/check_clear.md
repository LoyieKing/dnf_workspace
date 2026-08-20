# check_clear

`_ZN9QuestList11check_clearEiRKN8WongWork11CQuestClearE`

`QuestList::check_clear(int, WongWork::CQuestClear const&)`

| 类 | 地址 |
|---|---|
| `QuestList` | `0x08355284` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08355284  _ZN9QuestList11check_clearEiRKN8WongWork11CQuestClearE
#           QuestList::check_clear(int, WongWork::CQuestClear const&)
# range [0x08355284, 0x08355303]
08355284 +0x00:  push   %ebp
08355285 +0x01:  mov    %esp,%ebp
08355287 +0x03:  sub    $0x28,%esp
0835528a +0x06:  cmpl   $0x752f,0xc(%ebp)
08355291 +0x0d:  jle    083552e0 <+0x5c>
08355293 +0x0f:  movl   $0x5,0xc(%esp)
0835529b +0x17:  movl   $0x152f,0x8(%esp)
083552a3 +0x1f:  movl   $&_ZZN9QuestList11check_clearEiRKN8WongWork11CQuestClearEE19__PRETTY_FUNCTION__,0x4(%esp)
083552ab +0x27:  lea    -0x18(%ebp),%eax
083552ae +0x2a:  mov    %eax,(%esp)
083552b1 +0x2d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083552b6 +0x32:  movl   $0x152f,0xc(%esp)
083552be +0x3a:  movl   $&_ZZN9QuestList11check_clearEiRKN8WongWork11CQuestClearEE19__PRETTY_FUNCTION__,0x8(%esp)
083552c6 +0x42:  movl   $"[%s][%d]",0x4(%esp)
083552ce +0x4a:  lea    -0x18(%ebp),%eax
083552d1 +0x4d:  mov    %eax,(%esp)
083552d4 +0x50:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083552d9 +0x55:  mov    $0x0,%eax
083552de +0x5a:  jmp    08355302 <+0x7e>
083552e0 +0x5c:  mov    0xc(%ebp),%eax
083552e3 +0x5f:  mov    %eax,0x4(%esp)
083552e7 +0x63:  mov    0x10(%ebp),%eax
083552ea +0x66:  mov    %eax,(%esp)
083552ed +0x69:  call   0808bae0 <_ZNK8WongWork11CQuestClear14isClearedQuestEj>  ; WongWork::CQuestClear::isClearedQuest(unsigned int) const
083552f2 +0x6e:  test   %al,%al
083552f4 +0x70:  je     083552fd <+0x79>
083552f6 +0x72:  mov    $0x0,%eax
083552fb +0x77:  jmp    08355302 <+0x7e>
083552fd +0x79:  mov    $0x1,%eax
08355302 +0x7e:  leave
08355303 +0x7f:  ret
```

## 反编译 C

```c
// QuestList::check_clear @ 0x8355284

/* QuestList::check_clear(int, WongWork::CQuestClear const&) */

undefined4 __thiscall QuestList::check_clear(QuestList *this,int param_1,CQuestClear *param_2)

{
  char cVar1;
  undefined4 uVar2;
  cMyTrace local_1c [24];
  
  if (param_1 < 30000) {
    cVar1 = WongWork::CQuestClear::isClearedQuest(param_2,param_1);
    if (cVar1 == '\0') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    cMyTrace::cMyTrace(local_1c,"bool QuestList::check_clear(int, const WongWork::CQuestClear&)",
                       0x152f,5);
    cMyTrace::operator()
              (local_1c,"[%s][%d]","bool QuestList::check_clear(int, const WongWork::CQuestClear&)",
               0x152f);
    uVar2 = 0;
  }
  return uVar2;
}
```

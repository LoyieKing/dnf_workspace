# ReselectDailyQuest

`_ZN9GameWorld18ReselectDailyQuestEv`

`GameWorld::ReselectDailyQuest()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cd010` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cd010  _ZN9GameWorld18ReselectDailyQuestEv
#           GameWorld::ReselectDailyQuest()
# range [0x086cd010, 0x086cd037]
086cd010 +0x00:  push   %ebp
086cd011 +0x01:  mov    %esp,%ebp
086cd013 +0x03:  sub    $0x18,%esp
086cd016 +0x06:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086cd01b +0x0b:  mov    %eax,(%esp)
086cd01e +0x0e:  call   08363ce0 <_ZN12CDataManager26reselectDailyTrainingQuestEv>  ; CDataManager::reselectDailyTrainingQuest()
086cd023 +0x13:  xor    $0x1,%eax
086cd026 +0x16:  test   %al,%al
086cd028 +0x18:  je     086cd031 <+0x21>
086cd02a +0x1a:  mov    $0x0,%eax
086cd02f +0x1f:  jmp    086cd036 <+0x26>
086cd031 +0x21:  mov    $0x1,%eax
086cd036 +0x26:  leave
086cd037 +0x27:  ret
```

## 反编译 C

```c
// GameWorld::ReselectDailyQuest @ 0x86cd010

/* GameWorld::ReselectDailyQuest() */

bool GameWorld::ReselectDailyQuest(void)

{
  char cVar1;
  CDataManager *this;
  
  this = (CDataManager *)G_CDataManager();
  cVar1 = CDataManager::reselectDailyTrainingQuest(this);
  return cVar1 == '\x01';
}
```

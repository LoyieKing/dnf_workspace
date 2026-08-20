# execute

`_ZN11game_master22CReselectDailyQuestCmd7executeEv`

`game_master::CReselectDailyQuestCmd::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CReselectDailyQuestCmd` | `0x084ab4f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ab4f2  _ZN11game_master22CReselectDailyQuestCmd7executeEv
#           game_master::CReselectDailyQuestCmd::execute()
# range [0x084ab4f2, 0x084ab507]
084ab4f2 +0x00:  push   %ebp
084ab4f3 +0x01:  mov    %esp,%ebp
084ab4f5 +0x03:  sub    $0x18,%esp
084ab4f8 +0x06:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084ab4fd +0x0b:  mov    %eax,(%esp)
084ab500 +0x0e:  call   086cd010 <_ZN9GameWorld18ReselectDailyQuestEv>  ; GameWorld::ReselectDailyQuest()
084ab505 +0x13:  leave
084ab506 +0x14:  ret
084ab507 +0x15:  nop
```

## 反编译 C

```c
// game_master::CReselectDailyQuestCmd::execute @ 0x84ab4f2

/* game_master::CReselectDailyQuestCmd::execute() */

void game_master::CReselectDailyQuestCmd::execute(void)

{
  G_GameWorld();
  GameWorld::ReselectDailyQuest();
  return;
}
```

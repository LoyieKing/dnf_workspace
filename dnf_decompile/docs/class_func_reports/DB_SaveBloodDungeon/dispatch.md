# dispatch

`_ZN19DB_SaveBloodDungeon8dispatchEiiP6Stream`

`DB_SaveBloodDungeon::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveBloodDungeon` | `0x08437728` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08437728  _ZN19DB_SaveBloodDungeon8dispatchEiiP6Stream
#           DB_SaveBloodDungeon::dispatch(int, int, Stream*)
# range [0x08437728, 0x08437755]
08437728 +0x00:  push   %ebp
08437729 +0x01:  mov    %esp,%ebp
0843772b +0x03:  sub    $0x28,%esp
0843772e +0x06:  mov    0x14(%ebp),%eax
08437731 +0x09:  mov    %eax,(%esp)
08437734 +0x0c:  call   0845352a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6140>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6140
08437739 +0x11:  mov    %eax,-0xc(%ebp)
0843773c +0x14:  mov    -0xc(%ebp),%eax
0843773f +0x17:  mov    %eax,0x4(%esp)
08437743 +0x1b:  mov    0x8(%ebp),%eax
08437746 +0x1e:  mov    %eax,(%esp)
08437749 +0x21:  call   084374f8 <_ZN19DB_SaveBloodDungeon22SaveBloodDungeonRewardEP17SIG_BLOOD_DUNGEON>  ; DB_SaveBloodDungeon::SaveBloodDungeonReward(SIG_BLOOD_DUNGEON*)
0843774e +0x26:  mov    $0x1,%eax
08437753 +0x2b:  leave
08437754 +0x2c:  ret
08437755 +0x2d:  nop
```

## 反编译 C

```c
// DB_SaveBloodDungeon::dispatch @ 0x8437728

/* DB_SaveBloodDungeon::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_SaveBloodDungeon::dispatch(DB_SaveBloodDungeon *this,int param_1,int param_2,Stream *param_3)

{
  SIG_BLOOD_DUNGEON *pSVar1;
  
  pSVar1 = Stream::GetOutBuffer<SIG_BLOOD_DUNGEON>(param_3);
  SaveBloodDungeonReward(this,pSVar1);
  return 1;
}
```

# execute

`_ZN11game_master18CCraneNeedMaterial7executeEv`

`game_master::CCraneNeedMaterial::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CCraneNeedMaterial` | `0x084b0626` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b0626  _ZN11game_master18CCraneNeedMaterial7executeEv
#           game_master::CCraneNeedMaterial::execute()
# range [0x084b0626, 0x084b063b]
084b0626 +0x00:  push   %ebp
084b0627 +0x01:  mov    %esp,%ebp
084b0629 +0x03:  sub    $0x18,%esp
084b062c +0x06:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084b0631 +0x0b:  mov    %eax,(%esp)
084b0634 +0x0e:  call   086d1480 <_ZN9GameWorld19UpdateMiniCraneSeedEv>  ; GameWorld::UpdateMiniCraneSeed()
084b0639 +0x13:  leave
084b063a +0x14:  ret
084b063b +0x15:  nop
```

## 反编译 C

```c
// game_master::CCraneNeedMaterial::execute @ 0x84b0626

/* game_master::CCraneNeedMaterial::execute() */

void game_master::CCraneNeedMaterial::execute(void)

{
  G_GameWorld();
  GameWorld::UpdateMiniCraneSeed();
  return;
}
```

# UpdateCharacter

`_ZN12CDungeonNode15UpdateCharacterEP26SIG_DUNGEON_DATA_STATISTIC`

`CDungeonNode::UpdateCharacter(SIG_DUNGEON_DATA_STATISTIC*)`

| 类 | 地址 |
|---|---|
| `CDungeonNode` | `0x08485564` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08485564  _ZN12CDungeonNode15UpdateCharacterEP26SIG_DUNGEON_DATA_STATISTIC
#           CDungeonNode::UpdateCharacter(SIG_DUNGEON_DATA_STATISTIC*)
# range [0x08485564, 0x08485599]
08485564 +0x00:  push   %ebp
08485565 +0x01:  mov    %esp,%ebp
08485567 +0x03:  sub    $0x18,%esp
0848556a +0x06:  mov    0xc(%ebp),%eax
0848556d +0x09:  movzbl 0x20(%eax),%eax
08485571 +0x0d:  movzbl %al,%eax
08485574 +0x10:  lea    0x1(%eax),%edx
08485577 +0x13:  mov    %edx,%eax
08485579 +0x15:  add    %eax,%eax
0848557b +0x17:  add    %edx,%eax
0848557d +0x19:  shl    $0x4,%eax
08485580 +0x1c:  add    0x8(%ebp),%eax
08485583 +0x1f:  mov    0xc(%ebp),%edx
08485586 +0x22:  mov    %edx,0x4(%esp)
0848558a +0x26:  mov    %eax,(%esp)
0848558d +0x29:  call   084851de <_ZN19CDungeonSuccessNode15UpdateCharacterEP26SIG_DUNGEON_DATA_STATISTIC>  ; CDungeonSuccessNode::UpdateCharacter(SIG_DUNGEON_DATA_STATISTIC*)
08485592 +0x2e:  mov    $0x1,%eax
08485597 +0x33:  leave
08485598 +0x34:  ret
08485599 +0x35:  nop
```

## 反编译 C

```c
// CDungeonNode::UpdateCharacter @ 0x8485564

/* CDungeonNode::UpdateCharacter(SIG_DUNGEON_DATA_STATISTIC*) */

undefined4 __thiscall
CDungeonNode::UpdateCharacter(CDungeonNode *this,SIG_DUNGEON_DATA_STATISTIC *param_1)

{
  CDungeonSuccessNode::UpdateCharacter
            ((CDungeonSuccessNode *)(this + ((byte)param_1[0x20] + 1) * 0x30),param_1);
  return 1;
}
```

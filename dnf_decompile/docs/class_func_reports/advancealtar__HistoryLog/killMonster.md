# killMonster

`_ZN12advancealtar10HistoryLog11killMonsterER5CUseriRK15MSG_MONSTER_DIE`

`advancealtar::HistoryLog::killMonster(CUser&, int, MSG_MONSTER_DIE const&)`

| 类 | 地址 |
|---|---|
| `advancealtar::HistoryLog` | `0x08133b40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08133b40  _ZN12advancealtar10HistoryLog11killMonsterER5CUseriRK15MSG_MONSTER_DIE
#           advancealtar::HistoryLog::killMonster(CUser&, int, MSG_MONSTER_DIE const&)
# range [0x08133b40, 0x08133bd3]
08133b40 +0x00:  push   %ebp
08133b41 +0x01:  mov    %esp,%ebp
08133b43 +0x03:  push   %edi
08133b44 +0x04:  push   %esi
08133b45 +0x05:  push   %ebx
08133b46 +0x06:  sub    $0x3c,%esp
08133b49 +0x09:  mov    0x10(%ebp),%eax
08133b4c +0x0c:  movzwl 0xa26(%eax),%eax
08133b53 +0x13:  movzwl %ax,%ebx
08133b56 +0x16:  mov    0x10(%ebp),%eax
08133b59 +0x19:  movzwl 0xa24(%eax),%eax
08133b60 +0x20:  movzwl %ax,%ecx
08133b63 +0x23:  mov    0x10(%ebp),%eax
08133b66 +0x26:  mov    0xa1a(%eax),%edx
08133b6c +0x2c:  mov    0x10(%ebp),%eax
08133b6f +0x2f:  mov    0xa1e(%eax),%eax
08133b75 +0x35:  mov    0x8(%ebp),%esi
08133b78 +0x38:  lea    0x79700(%esi),%edi
08133b7e +0x3e:  movl   $0x1,0x2c(%esp)
08133b86 +0x46:  movl   $0x0,0x28(%esp)
08133b8e +0x4e:  movl   $0x0,0x24(%esp)
08133b96 +0x56:  movl   $0x0,0x20(%esp)
08133b9e +0x5e:  movl   $0x0,0x1c(%esp)
08133ba6 +0x66:  mov    0x10(%ebp),%esi
08133ba9 +0x69:  mov    %esi,0x18(%esp)
08133bad +0x6d:  mov    %ebx,0x14(%esp)
08133bb1 +0x71:  mov    %ecx,0x10(%esp)
08133bb5 +0x75:  mov    %edx,0xc(%esp)
08133bb9 +0x79:  mov    %eax,0x8(%esp)
08133bbd +0x7d:  mov    0xc(%ebp),%eax
08133bc0 +0x80:  mov    %eax,0x4(%esp)
08133bc4 +0x84:  mov    %edi,(%esp)
08133bc7 +0x87:  call   086851ac <_ZN15cUserHistoryLog11KillMonsterEijjttRK15MSG_MONSTER_DIEcbii13eExpAddReason>  ; cUserHistoryLog::KillMonster(int, unsigned int, unsigned int, unsigned short, unsigned short, MSG_MONSTER_DIE const&, char, bool, int, int, eExpAddReason)
08133bcc +0x8c:  add    $0x3c,%esp
08133bcf +0x8f:  pop    %ebx
08133bd0 +0x90:  pop    %esi
08133bd1 +0x91:  pop    %edi
08133bd2 +0x92:  pop    %ebp
08133bd3 +0x93:  ret
```

## 反编译 C

```c
// advancealtar::HistoryLog::killMonster @ 0x8133b40

/* advancealtar::HistoryLog::killMonster(CUser&, int, MSG_MONSTER_DIE const&) */

void advancealtar::HistoryLog::killMonster(CUser *param_1,int param_2,MSG_MONSTER_DIE *param_3)

{
  cUserHistoryLog::KillMonster
            ((cUserHistoryLog *)(param_1 + 0x79700),param_2,*(undefined4 *)(param_3 + 0xa1e),
             *(undefined4 *)(param_3 + 0xa1a),*(undefined2 *)(param_3 + 0xa24),
             *(undefined2 *)(param_3 + 0xa26),param_3,0,0,0,0,1);
  return;
}
```

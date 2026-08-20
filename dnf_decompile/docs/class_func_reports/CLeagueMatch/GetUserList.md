# GetUserList

`_ZN12CLeagueMatch11GetUserListEPv`

`CLeagueMatch::GetUserList(void*)`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855e642` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855e642  _ZN12CLeagueMatch11GetUserListEPv
#           CLeagueMatch::GetUserList(void*)
# range [0x0855e642, 0x0855e663]
0855e642 +0x00:  push   %ebp
0855e643 +0x01:  mov    %esp,%ebp
0855e645 +0x03:  push   %edi
0855e646 +0x04:  push   %esi
0855e647 +0x05:  push   %ebx
0855e648 +0x06:  mov    0xc(%ebp),%edx
0855e64b +0x09:  mov    0x8(%ebp),%eax
0855e64e +0x0c:  lea    0x1c(%eax),%ebx
0855e651 +0x0f:  mov    $0x1c,%eax
0855e656 +0x14:  mov    %edx,%edi
0855e658 +0x16:  mov    %ebx,%esi
0855e65a +0x18:  mov    %eax,%ecx
0855e65c +0x1a:  rep movsl %ds:(%esi),%es:(%edi)
0855e65e +0x1c:  pop    %ebx
0855e65f +0x1d:  pop    %esi
0855e660 +0x1e:  pop    %edi
0855e661 +0x1f:  pop    %ebp
0855e662 +0x20:  ret
0855e663 +0x21:  nop
```

## 反编译 C

```c
// CLeagueMatch::GetUserList @ 0x855e642

/* CLeagueMatch::GetUserList(void*) */

void __thiscall CLeagueMatch::GetUserList(CLeagueMatch *this,void *param_1)

{
  int iVar1;
  CLeagueMatch *pCVar2;
  
  pCVar2 = this + 0x1c;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)param_1 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    param_1 = (undefined4 *)((int)param_1 + 4);
  }
  return;
}
```

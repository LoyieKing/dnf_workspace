# OnDestroyRoom

`_ZN12CLeagueMatch13OnDestroyRoomEP5CUser`

`CLeagueMatch::OnDestroyRoom(CUser*)`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855d168` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855d168  _ZN12CLeagueMatch13OnDestroyRoomEP5CUser
#           CLeagueMatch::OnDestroyRoom(CUser*)
# range [0x0855d168, 0x0855d197]
0855d168 +0x00:  push   %ebp
0855d169 +0x01:  mov    %esp,%ebp
0855d16b +0x03:  sub    $0x18,%esp
0855d16e +0x06:  mov    0x8(%ebp),%eax
0855d171 +0x09:  movl   $0x0,0x4(%eax)
0855d178 +0x10:  mov    &_ZN12CLeagueMatch17pWaitingRoomList_E,%eax
0855d17d +0x15:  mov    (%eax),%eax
0855d17f +0x17:  add    $0x4,%eax
0855d182 +0x1a:  mov    (%eax),%ecx
0855d184 +0x1c:  mov    0x8(%ebp),%edx
0855d187 +0x1f:  mov    &_ZN12CLeagueMatch17pWaitingRoomList_E,%eax
0855d18c +0x24:  mov    %edx,0x4(%esp)
0855d190 +0x28:  mov    %eax,(%esp)
0855d193 +0x2b:  call   *%ecx
0855d195 +0x2d:  leave
0855d196 +0x2e:  ret
0855d197 +0x2f:  nop
```

## 反编译 C

```c
// CLeagueMatch::OnDestroyRoom @ 0x855d168

/* CLeagueMatch::OnDestroyRoom(CUser*) */

void CLeagueMatch::OnDestroyRoom(CUser *param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  (**(code **)(*pWaitingRoomList_ + 4))(pWaitingRoomList_,param_1);
  return;
}
```

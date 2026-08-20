# OnJoinRoom

`_ZN12CLeagueMatch10OnJoinRoomEP5CUser`

`CLeagueMatch::OnJoinRoom(CUser*)`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855d198` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855d198  _ZN12CLeagueMatch10OnJoinRoomEP5CUser
#           CLeagueMatch::OnJoinRoom(CUser*)
# range [0x0855d198, 0x0855d1bf]
0855d198 +0x00:  push   %ebp
0855d199 +0x01:  mov    %esp,%ebp
0855d19b +0x03:  sub    $0x18,%esp
0855d19e +0x06:  mov    0x8(%ebp),%eax
0855d1a1 +0x09:  mov    0x4(%eax),%eax
0855d1a4 +0x0c:  cmp    $0x3,%eax
0855d1a7 +0x0f:  je     0855d1be <+0x26>
0855d1a9 +0x11:  mov    0x8(%ebp),%eax
0855d1ac +0x14:  lea    0x1c(%eax),%edx
0855d1af +0x17:  mov    0xc(%ebp),%eax
0855d1b2 +0x1a:  mov    %eax,0x4(%esp)
0855d1b6 +0x1e:  mov    %edx,(%esp)
0855d1b9 +0x21:  call   0855cb54 <_ZN8TeamInfo3addEP5CUser>  ; TeamInfo::add(CUser*)
0855d1be +0x26:  leave
0855d1bf +0x27:  ret
```

## 反编译 C

```c
// CLeagueMatch::OnJoinRoom @ 0x855d198

/* CLeagueMatch::OnJoinRoom(CUser*) */

void __thiscall CLeagueMatch::OnJoinRoom(CLeagueMatch *this,CUser *param_1)

{
  if (*(int *)(this + 4) != 3) {
    TeamInfo::add((TeamInfo *)(this + 0x1c),param_1);
  }
  return;
}
```

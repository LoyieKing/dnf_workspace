# OnCreateRoom

`_ZN12CLeagueMatch12OnCreateRoomEP5CUser`

`CLeagueMatch::OnCreateRoom(CUser*)`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855d104` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855d104  _ZN12CLeagueMatch12OnCreateRoomEP5CUser
#           CLeagueMatch::OnCreateRoom(CUser*)
# range [0x0855d104, 0x0855d167]
0855d104 +0x00:  push   %ebp
0855d105 +0x01:  mov    %esp,%ebp
0855d107 +0x03:  sub    $0x18,%esp
0855d10a +0x06:  mov    &_ZN12CLeagueMatch14nextAuthValue_E,%eax
0855d10f +0x0b:  add    $0x1,%eax
0855d112 +0x0e:  mov    %eax,&_ZN12CLeagueMatch14nextAuthValue_E
0855d117 +0x13:  mov    &_ZN12CLeagueMatch14nextAuthValue_E,%edx
0855d11d +0x19:  mov    0x8(%ebp),%eax
0855d120 +0x1c:  mov    %edx,0x18(%eax)
0855d123 +0x1f:  mov    0x8(%ebp),%eax
0855d126 +0x22:  movl   $0x0,0x4(%eax)
0855d12d +0x29:  mov    0x8(%ebp),%eax
0855d130 +0x2c:  add    $0x8c,%eax
0855d135 +0x31:  mov    %eax,(%esp)
0855d138 +0x34:  call   0855cb16 <_ZN8TeamInfo5resetEv>  ; TeamInfo::reset()
0855d13d +0x39:  mov    0x8(%ebp),%eax
0855d140 +0x3c:  add    $0x1c,%eax
0855d143 +0x3f:  mov    %eax,(%esp)
0855d146 +0x42:  call   0855cb16 <_ZN8TeamInfo5resetEv>  ; TeamInfo::reset()
0855d14b +0x47:  mov    0x8(%ebp),%eax
0855d14e +0x4a:  lea    0x1c(%eax),%edx
0855d151 +0x4d:  mov    0xc(%ebp),%eax
0855d154 +0x50:  mov    %eax,0x4(%esp)
0855d158 +0x54:  mov    %edx,(%esp)
0855d15b +0x57:  call   0855cb54 <_ZN8TeamInfo3addEP5CUser>  ; TeamInfo::add(CUser*)
0855d160 +0x5c:  mov    $0x0,%eax
0855d165 +0x61:  leave
0855d166 +0x62:  ret
0855d167 +0x63:  nop
```

## 反编译 C

```c
// CLeagueMatch::OnCreateRoom @ 0x855d104

/* CLeagueMatch::OnCreateRoom(CUser*) */

undefined4 __thiscall CLeagueMatch::OnCreateRoom(CLeagueMatch *this,CUser *param_1)

{
  nextAuthValue_ = nextAuthValue_ + 1;
  *(int *)(this + 0x18) = nextAuthValue_;
  *(undefined4 *)(this + 4) = 0;
  TeamInfo::reset((TeamInfo *)(this + 0x8c));
  TeamInfo::reset((TeamInfo *)(this + 0x1c));
  TeamInfo::add((TeamInfo *)(this + 0x1c),param_1);
  return 0;
}
```

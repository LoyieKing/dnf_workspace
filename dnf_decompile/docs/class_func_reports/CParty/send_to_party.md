# send_to_party

`_ZN6CParty13send_to_partyER11PacketGuard`

`CParty::send_to_party(PacketGuard&)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859d14e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859d14e  _ZN6CParty13send_to_partyER11PacketGuard
#           CParty::send_to_party(PacketGuard&)
# range [0x0859d14e, 0x0859d1a9]
0859d14e +0x00:  push   %ebp
0859d14f +0x01:  mov    %esp,%ebp
0859d151 +0x03:  sub    $0x28,%esp
0859d154 +0x06:  movl   $0x0,-0xc(%ebp)
0859d15b +0x0d:  jmp    0859d19d <+0x4f>
0859d15d +0x0f:  mov    -0xc(%ebp),%eax
0859d160 +0x12:  mov    %eax,0x4(%esp)
0859d164 +0x16:  mov    0x8(%ebp),%eax
0859d167 +0x19:  mov    %eax,(%esp)
0859d16a +0x1c:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859d16f +0x21:  test   %al,%al
0859d171 +0x23:  je     0859d199 <+0x4b>
0859d173 +0x25:  mov    -0xc(%ebp),%edx
0859d176 +0x28:  mov    0x8(%ebp),%ecx
0859d179 +0x2b:  mov    %edx,%eax
0859d17b +0x2d:  add    %eax,%eax
0859d17d +0x2f:  add    %edx,%eax
0859d17f +0x31:  shl    $0x3,%eax
0859d182 +0x34:  lea    (%ecx,%eax,1),%eax
0859d185 +0x37:  add    $0x78,%eax
0859d188 +0x3a:  mov    (%eax),%eax
0859d18a +0x3c:  mov    0xc(%ebp),%edx
0859d18d +0x3f:  mov    %edx,0x4(%esp)
0859d191 +0x43:  mov    %eax,(%esp)
0859d194 +0x46:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0859d199 +0x4b:  addl   $0x1,-0xc(%ebp)
0859d19d +0x4f:  cmpl   $0x3,-0xc(%ebp)
0859d1a1 +0x53:  setle  %al
0859d1a4 +0x56:  test   %al,%al
0859d1a6 +0x58:  jne    0859d15d <+0xf>
0859d1a8 +0x5a:  leave
0859d1a9 +0x5b:  ret
```

## 反编译 C

```c
// CParty::send_to_party @ 0x859d14e

/* CParty::send_to_party(PacketGuard&) */

void __thiscall CParty::send_to_party(CParty *this,PacketGuard *param_1)

{
  char cVar1;
  int local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar1 = _checkValidUser(this,local_10);
    if (cVar1 != '\0') {
      CUser::Send(*(CUser **)(this + local_10 * 0x18 + 0x78),param_1);
    }
  }
  return;
}
```

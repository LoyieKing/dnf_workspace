# ClearBadP2PUser

`_ZN6CParty15ClearBadP2PUserEv`

`CParty::ClearBadP2PUser()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859a830` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859a830  _ZN6CParty15ClearBadP2PUserEv
#           CParty::ClearBadP2PUser()
# range [0x0859a830, 0x0859a8bb]
0859a830 +0x00:  push   %ebp
0859a831 +0x01:  mov    %esp,%ebp
0859a833 +0x03:  sub    $0x28,%esp
0859a836 +0x06:  movl   $0x0,0x4(%esp)
0859a83e +0x0e:  mov    0x8(%ebp),%eax
0859a841 +0x11:  mov    %eax,(%esp)
0859a844 +0x14:  call   0859a664 <_ZN6CParty24_ClearConnectP2PAbsoluteEi>  ; CParty::_ClearConnectP2PAbsolute(int)
0859a849 +0x19:  movl   $0x1,0x4(%esp)
0859a851 +0x21:  mov    0x8(%ebp),%eax
0859a854 +0x24:  mov    %eax,(%esp)
0859a857 +0x27:  call   0859a664 <_ZN6CParty24_ClearConnectP2PAbsoluteEi>  ; CParty::_ClearConnectP2PAbsolute(int)
0859a85c +0x2c:  movl   $0x0,-0x10(%ebp)
0859a863 +0x33:  movl   $0x0,-0x14(%ebp)
0859a86a +0x3a:  movl   $0x2,-0xc(%ebp)
0859a871 +0x41:  jmp    0859a8ac <+0x7c>
0859a873 +0x43:  lea    -0x14(%ebp),%eax
0859a876 +0x46:  mov    %eax,0x8(%esp)
0859a87a +0x4a:  lea    -0x10(%ebp),%eax
0859a87d +0x4d:  mov    %eax,0x4(%esp)
0859a881 +0x51:  mov    0x8(%ebp),%eax
0859a884 +0x54:  mov    %eax,(%esp)
0859a887 +0x57:  call   0859a7a2 <_ZN6CParty25_GetConnectP2PMaxMinPointERiS0_>  ; CParty::_GetConnectP2PMaxMinPoint(int&, int&)
0859a88c +0x5c:  mov    -0x10(%ebp),%edx
0859a88f +0x5f:  mov    -0x14(%ebp),%eax
0859a892 +0x62:  cmp    %eax,%edx
0859a894 +0x64:  je     0859a8b9 <+0x89>
0859a896 +0x66:  mov    -0x14(%ebp),%eax
0859a899 +0x69:  mov    %eax,0x4(%esp)
0859a89d +0x6d:  mov    0x8(%ebp),%eax
0859a8a0 +0x70:  mov    %eax,(%esp)
0859a8a3 +0x73:  call   0859a6dc <_ZN6CParty24_ClearConnectP2PRelativeEi>  ; CParty::_ClearConnectP2PRelative(int)
0859a8a8 +0x78:  addl   $0x1,-0xc(%ebp)
0859a8ac +0x7c:  cmpl   $0x3,-0xc(%ebp)
0859a8b0 +0x80:  setle  %al
0859a8b3 +0x83:  test   %al,%al
0859a8b5 +0x85:  jne    0859a873 <+0x43>
0859a8b7 +0x87:  jmp    0859a8ba <+0x8a>
0859a8b9 +0x89:  nop
0859a8ba +0x8a:  leave
0859a8bb +0x8b:  ret
```

## 反编译 C

```c
// CParty::ClearBadP2PUser @ 0x859a830

/* CParty::ClearBadP2PUser() */

void __thiscall CParty::ClearBadP2PUser(CParty *this)

{
  int local_18;
  int local_14;
  int local_10;
  
  _ClearConnectP2PAbsolute(this,0);
  _ClearConnectP2PAbsolute(this,1);
  local_14 = 0;
  local_18 = 0;
  local_10 = 2;
  while ((local_10 < 4 &&
         (_GetConnectP2PMaxMinPoint(this,&local_14,&local_18), local_14 != local_18))) {
    _ClearConnectP2PRelative(this,local_18);
    local_10 = local_10 + 1;
  }
  return;
}
```

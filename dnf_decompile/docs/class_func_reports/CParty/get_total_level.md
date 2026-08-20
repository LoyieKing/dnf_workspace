# get_total_level

`_ZN6CParty15get_total_levelEv`

`CParty::get_total_level()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859a1ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859a1ae  _ZN6CParty15get_total_levelEv
#           CParty::get_total_level()
# range [0x0859a1ae, 0x0859a20f]
0859a1ae +0x00:  push   %ebp
0859a1af +0x01:  mov    %esp,%ebp
0859a1b1 +0x03:  sub    $0x28,%esp
0859a1b4 +0x06:  movl   $0x0,-0x10(%ebp)
0859a1bb +0x0d:  movl   $0x0,-0xc(%ebp)
0859a1c2 +0x14:  jmp    0859a200 <+0x52>
0859a1c4 +0x16:  mov    -0xc(%ebp),%eax
0859a1c7 +0x19:  mov    %eax,0x4(%esp)
0859a1cb +0x1d:  mov    0x8(%ebp),%eax
0859a1ce +0x20:  mov    %eax,(%esp)
0859a1d1 +0x23:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859a1d6 +0x28:  test   %al,%al
0859a1d8 +0x2a:  je     0859a1fc <+0x4e>
0859a1da +0x2c:  mov    -0xc(%ebp),%edx
0859a1dd +0x2f:  mov    0x8(%ebp),%ecx
0859a1e0 +0x32:  mov    %edx,%eax
0859a1e2 +0x34:  add    %eax,%eax
0859a1e4 +0x36:  add    %edx,%eax
0859a1e6 +0x38:  shl    $0x3,%eax
0859a1e9 +0x3b:  lea    (%ecx,%eax,1),%eax
0859a1ec +0x3e:  add    $0x78,%eax
0859a1ef +0x41:  mov    (%eax),%eax
0859a1f1 +0x43:  mov    %eax,(%esp)
0859a1f4 +0x46:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0859a1f9 +0x4b:  add    %eax,-0x10(%ebp)
0859a1fc +0x4e:  addl   $0x1,-0xc(%ebp)
0859a200 +0x52:  cmpl   $0x3,-0xc(%ebp)
0859a204 +0x56:  setle  %al
0859a207 +0x59:  test   %al,%al
0859a209 +0x5b:  jne    0859a1c4 <+0x16>
0859a20b +0x5d:  mov    -0x10(%ebp),%eax
0859a20e +0x60:  leave
0859a20f +0x61:  ret
```

## 反编译 C

```c
// CParty::get_total_level @ 0x859a1ae

/* CParty::get_total_level() */

int __thiscall CParty::get_total_level(CParty *this)

{
  char cVar1;
  int iVar2;
  int local_14;
  int local_10;
  
  local_14 = 0;
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar1 = _checkValidUser(this,local_10);
    if (cVar1 != '\0') {
      iVar2 = CUserCharacInfo::get_charac_level
                        (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78));
      local_14 = local_14 + iVar2;
    }
  }
  return local_14;
}
```

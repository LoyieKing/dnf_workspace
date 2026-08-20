# getMemberMaxLevel

`_ZN6CParty17getMemberMaxLevelEv`

`CParty::getMemberMaxLevel()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b60be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b60be  _ZN6CParty17getMemberMaxLevelEv
#           CParty::getMemberMaxLevel()
# range [0x085b60be, 0x085b613d]
085b60be +0x00:  push   %ebp
085b60bf +0x01:  mov    %esp,%ebp
085b60c1 +0x03:  sub    $0x28,%esp
085b60c4 +0x06:  movl   $0x0,-0x14(%ebp)
085b60cb +0x0d:  movl   $0x0,-0xc(%ebp)
085b60d2 +0x14:  jmp    085b612d <+0x6f>
085b60d4 +0x16:  mov    -0xc(%ebp),%eax
085b60d7 +0x19:  mov    %eax,0x4(%esp)
085b60db +0x1d:  mov    0x8(%ebp),%eax
085b60de +0x20:  mov    %eax,(%esp)
085b60e1 +0x23:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b60e6 +0x28:  xor    $0x1,%eax
085b60e9 +0x2b:  test   %al,%al
085b60eb +0x2d:  jne    085b6128 <+0x6a>
085b60ed +0x2f:  mov    -0xc(%ebp),%edx
085b60f0 +0x32:  mov    0x8(%ebp),%ecx
085b60f3 +0x35:  mov    %edx,%eax
085b60f5 +0x37:  add    %eax,%eax
085b60f7 +0x39:  add    %edx,%eax
085b60f9 +0x3b:  shl    $0x3,%eax
085b60fc +0x3e:  lea    (%ecx,%eax,1),%eax
085b60ff +0x41:  add    $0x78,%eax
085b6102 +0x44:  mov    (%eax),%eax
085b6104 +0x46:  mov    %eax,(%esp)
085b6107 +0x49:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085b610c +0x4e:  mov    %eax,-0x10(%ebp)
085b610f +0x51:  lea    -0x10(%ebp),%eax
085b6112 +0x54:  mov    %eax,0x4(%esp)
085b6116 +0x58:  lea    -0x14(%ebp),%eax
085b6119 +0x5b:  mov    %eax,(%esp)
085b611c +0x5e:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
085b6121 +0x63:  mov    (%eax),%eax
085b6123 +0x65:  mov    %eax,-0x14(%ebp)
085b6126 +0x68:  jmp    085b6129 <+0x6b>
085b6128 +0x6a:  nop
085b6129 +0x6b:  addl   $0x1,-0xc(%ebp)
085b612d +0x6f:  cmpl   $0x3,-0xc(%ebp)
085b6131 +0x73:  setle  %al
085b6134 +0x76:  test   %al,%al
085b6136 +0x78:  jne    085b60d4 <+0x16>
085b6138 +0x7a:  mov    -0x14(%ebp),%eax
085b613b +0x7d:  leave
085b613c +0x7e:  ret
085b613d +0x7f:  nop
```

## 反编译 C

```c
// CParty::getMemberMaxLevel @ 0x85b60be

/* CParty::getMemberMaxLevel() */

int __thiscall CParty::getMemberMaxLevel(CParty *this)

{
  char cVar1;
  int *piVar2;
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = 0;
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar1 = _checkValidUser(this,local_10);
    if (cVar1 == '\x01') {
      local_14 = CUserCharacInfo::get_charac_level
                           (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78));
      piVar2 = std::max<int>(&local_18,&local_14);
      local_18 = *piVar2;
    }
  }
  return local_18;
}
```

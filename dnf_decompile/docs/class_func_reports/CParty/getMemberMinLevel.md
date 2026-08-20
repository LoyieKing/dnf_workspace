# getMemberMinLevel

`_ZN6CParty17getMemberMinLevelEv`

`CParty::getMemberMinLevel()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b603e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b603e  _ZN6CParty17getMemberMinLevelEv
#           CParty::getMemberMinLevel()
# range [0x085b603e, 0x085b60bd]
085b603e +0x00:  push   %ebp
085b603f +0x01:  mov    %esp,%ebp
085b6041 +0x03:  sub    $0x28,%esp
085b6044 +0x06:  movl   $0x7fffffff,-0x14(%ebp)
085b604b +0x0d:  movl   $0x0,-0xc(%ebp)
085b6052 +0x14:  jmp    085b60ad <+0x6f>
085b6054 +0x16:  mov    -0xc(%ebp),%eax
085b6057 +0x19:  mov    %eax,0x4(%esp)
085b605b +0x1d:  mov    0x8(%ebp),%eax
085b605e +0x20:  mov    %eax,(%esp)
085b6061 +0x23:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b6066 +0x28:  xor    $0x1,%eax
085b6069 +0x2b:  test   %al,%al
085b606b +0x2d:  jne    085b60a8 <+0x6a>
085b606d +0x2f:  mov    -0xc(%ebp),%edx
085b6070 +0x32:  mov    0x8(%ebp),%ecx
085b6073 +0x35:  mov    %edx,%eax
085b6075 +0x37:  add    %eax,%eax
085b6077 +0x39:  add    %edx,%eax
085b6079 +0x3b:  shl    $0x3,%eax
085b607c +0x3e:  lea    (%ecx,%eax,1),%eax
085b607f +0x41:  add    $0x78,%eax
085b6082 +0x44:  mov    (%eax),%eax
085b6084 +0x46:  mov    %eax,(%esp)
085b6087 +0x49:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085b608c +0x4e:  mov    %eax,-0x10(%ebp)
085b608f +0x51:  lea    -0x10(%ebp),%eax
085b6092 +0x54:  mov    %eax,0x4(%esp)
085b6096 +0x58:  lea    -0x14(%ebp),%eax
085b6099 +0x5b:  mov    %eax,(%esp)
085b609c +0x5e:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
085b60a1 +0x63:  mov    (%eax),%eax
085b60a3 +0x65:  mov    %eax,-0x14(%ebp)
085b60a6 +0x68:  jmp    085b60a9 <+0x6b>
085b60a8 +0x6a:  nop
085b60a9 +0x6b:  addl   $0x1,-0xc(%ebp)
085b60ad +0x6f:  cmpl   $0x3,-0xc(%ebp)
085b60b1 +0x73:  setle  %al
085b60b4 +0x76:  test   %al,%al
085b60b6 +0x78:  jne    085b6054 <+0x16>
085b60b8 +0x7a:  mov    -0x14(%ebp),%eax
085b60bb +0x7d:  leave
085b60bc +0x7e:  ret
085b60bd +0x7f:  nop
```

## 反编译 C

```c
// CParty::getMemberMinLevel @ 0x85b603e

/* CParty::getMemberMinLevel() */

int __thiscall CParty::getMemberMinLevel(CParty *this)

{
  char cVar1;
  int *piVar2;
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = 0x7fffffff;
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar1 = _checkValidUser(this,local_10);
    if (cVar1 == '\x01') {
      local_14 = CUserCharacInfo::get_charac_level
                           (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78));
      piVar2 = std::min<int>(&local_18,&local_14);
      local_18 = *piVar2;
    }
  }
  return local_18;
}
```

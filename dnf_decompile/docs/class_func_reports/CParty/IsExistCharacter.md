# IsExistCharacter

`_ZN6CParty16IsExistCharacterEi`

`CParty::IsExistCharacter(int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b624e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b624e  _ZN6CParty16IsExistCharacterEi
#           CParty::IsExistCharacter(int)
# range [0x085b624e, 0x085b62bf]
085b624e +0x00:  push   %ebp
085b624f +0x01:  mov    %esp,%ebp
085b6251 +0x03:  sub    $0x28,%esp
085b6254 +0x06:  movl   $0x0,-0xc(%ebp)
085b625b +0x0d:  jmp    085b62ad <+0x5f>
085b625d +0x0f:  mov    -0xc(%ebp),%eax
085b6260 +0x12:  mov    %eax,0x4(%esp)
085b6264 +0x16:  mov    0x8(%ebp),%eax
085b6267 +0x19:  mov    %eax,(%esp)
085b626a +0x1c:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b626f +0x21:  xor    $0x1,%eax
085b6272 +0x24:  test   %al,%al
085b6274 +0x26:  jne    085b62a8 <+0x5a>
085b6276 +0x28:  mov    -0xc(%ebp),%edx
085b6279 +0x2b:  mov    0x8(%ebp),%ecx
085b627c +0x2e:  mov    %edx,%eax
085b627e +0x30:  add    %eax,%eax
085b6280 +0x32:  add    %edx,%eax
085b6282 +0x34:  shl    $0x3,%eax
085b6285 +0x37:  lea    (%ecx,%eax,1),%eax
085b6288 +0x3a:  add    $0x78,%eax
085b628b +0x3d:  mov    (%eax),%eax
085b628d +0x3f:  mov    %eax,(%esp)
085b6290 +0x42:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085b6295 +0x47:  mov    0xc(%ebp),%edx
085b6298 +0x4a:  cmp    %edx,%eax
085b629a +0x4c:  sete   %al
085b629d +0x4f:  test   %al,%al
085b629f +0x51:  je     085b62a9 <+0x5b>
085b62a1 +0x53:  mov    $0x1,%eax
085b62a6 +0x58:  jmp    085b62bd <+0x6f>
085b62a8 +0x5a:  nop
085b62a9 +0x5b:  addl   $0x1,-0xc(%ebp)
085b62ad +0x5f:  cmpl   $0x3,-0xc(%ebp)
085b62b1 +0x63:  setle  %al
085b62b4 +0x66:  test   %al,%al
085b62b6 +0x68:  jne    085b625d <+0xf>
085b62b8 +0x6a:  mov    $0x0,%eax
085b62bd +0x6f:  leave
085b62be +0x70:  ret
085b62bf +0x71:  nop
```

## 反编译 C

```c
// CParty::IsExistCharacter @ 0x85b624e

/* CParty::IsExistCharacter(int) */

undefined4 __thiscall CParty::IsExistCharacter(CParty *this,int param_1)

{
  char cVar1;
  int iVar2;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (3 < local_10) {
      return 0;
    }
    cVar1 = _checkValidUser(this,local_10);
    if ((cVar1 == '\x01') &&
       (iVar2 = CUserCharacInfo::getCurCharacNo
                          (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78)), iVar2 == param_1))
    break;
    local_10 = local_10 + 1;
  }
  return 1;
}
```

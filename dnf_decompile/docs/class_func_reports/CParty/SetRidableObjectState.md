# SetRidableObjectState

`_ZN6CParty21SetRidableObjectStateEi19eRidableObjectState`

`CParty::SetRidableObjectState(int, eRidableObjectState)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b9f28` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b9f28  _ZN6CParty21SetRidableObjectStateEi19eRidableObjectState
#           CParty::SetRidableObjectState(int, eRidableObjectState)
# range [0x085b9f28, 0x085b9f4f]
085b9f28 +0x00:  push   %ebp
085b9f29 +0x01:  mov    %esp,%ebp
085b9f2b +0x03:  sub    $0x18,%esp
085b9f2e +0x06:  mov    0x8(%ebp),%eax
085b9f31 +0x09:  lea    0xb24(%eax),%edx
085b9f37 +0x0f:  mov    0x10(%ebp),%eax
085b9f3a +0x12:  mov    %eax,0x8(%esp)
085b9f3e +0x16:  mov    0xc(%ebp),%eax
085b9f41 +0x19:  mov    %eax,0x4(%esp)
085b9f45 +0x1d:  mov    %edx,(%esp)
085b9f48 +0x20:  call   085bf228 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x786>  ; global constructors keyed to CParty::cMember::cMember()+0x786
085b9f4d +0x25:  leave
085b9f4e +0x26:  ret
085b9f4f +0x27:  nop
```

## 反编译 C

```c
// CParty::SetRidableObjectState @ 0x85b9f28

/* CParty::SetRidableObjectState(int, eRidableObjectState) */

void __thiscall CParty::SetRidableObjectState(CParty *this,undefined4 param_1,undefined4 param_3)

{
  CBattle_Field::SetRidableObjectState((CBattle_Field *)(this + 0xb24),param_1,param_3);
  return;
}
```

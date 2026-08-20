# IncreaseSetPlayResultCount

`_ZN6CParty26IncreaseSetPlayResultCountEP5CUser`

`CParty::IncreaseSetPlayResultCount(CUser*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b22e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b22e2  _ZN6CParty26IncreaseSetPlayResultCountEP5CUser
#           CParty::IncreaseSetPlayResultCount(CUser*)
# range [0x085b22e2, 0x085b231d]
085b22e2 +0x00:  push   %ebp
085b22e3 +0x01:  mov    %esp,%ebp
085b22e5 +0x03:  sub    $0x18,%esp
085b22e8 +0x06:  mov    0xc(%ebp),%eax
085b22eb +0x09:  mov    %eax,0x4(%esp)
085b22ef +0x0d:  mov    0x8(%ebp),%eax
085b22f2 +0x10:  mov    %eax,(%esp)
085b22f5 +0x13:  call   0859ac7c <_ZNK6CParty15GetMemberSlotNoEPK5CUser>  ; CParty::GetMemberSlotNo(CUser const*) const
085b22fa +0x18:  mov    %eax,-0x4(%ebp)
085b22fd +0x1b:  cmpl   $0x0,-0x4(%ebp)
085b2301 +0x1f:  js     085b231c <+0x3a>
085b2303 +0x21:  mov    -0x4(%ebp),%edx
085b2306 +0x24:  mov    0x8(%ebp),%ecx
085b2309 +0x27:  mov    %edx,%eax
085b230b +0x29:  add    %eax,%eax
085b230d +0x2b:  add    %edx,%eax
085b230f +0x2d:  shl    $0x3,%eax
085b2312 +0x30:  lea    (%ecx,%eax,1),%eax
085b2315 +0x33:  add    $0x70,%eax
085b2318 +0x36:  movb   $0x1,0xc(%eax)
085b231c +0x3a:  leave
085b231d +0x3b:  ret
```

## 反编译 C

```c
// CParty::IncreaseSetPlayResultCount @ 0x85b22e2

/* CParty::IncreaseSetPlayResultCount(CUser*) */

void __thiscall CParty::IncreaseSetPlayResultCount(CParty *this,CUser *param_1)

{
  int iVar1;
  
  iVar1 = GetMemberSlotNo(this,param_1);
  if (-1 < iVar1) {
    this[iVar1 * 0x18 + 0x7c] = (CParty)0x1;
  }
  return;
}
```

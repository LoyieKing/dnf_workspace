# GetExperienceAmount

`_ZN13user_creature9CArtifact19GetExperienceAmountEv`

`user_creature::CArtifact::GetExperienceAmount()`

| 类 | 地址 |
|---|---|
| `user_creature::CArtifact` | `0x08336fc8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08336fc8  _ZN13user_creature9CArtifact19GetExperienceAmountEv
#           user_creature::CArtifact::GetExperienceAmount()
# range [0x08336fc8, 0x08337011]
08336fc8 +0x00:  push   %ebp
08336fc9 +0x01:  mov    %esp,%ebp
08336fcb +0x03:  sub    $0x38,%esp
08336fce +0x06:  mov    0x8(%ebp),%eax
08336fd1 +0x09:  mov    (%eax),%eax
08336fd3 +0x0b:  test   %eax,%eax
08336fd5 +0x0d:  jne    08336fde <+0x16>
08336fd7 +0x0f:  mov    $0x0,%eax
08336fdc +0x14:  jmp    08337009 <+0x41>
08336fde +0x16:  mov    0x8(%ebp),%eax
08336fe1 +0x19:  mov    (%eax),%eax
08336fe3 +0x1b:  mov    %eax,(%esp)
08336fe6 +0x1e:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08336feb +0x23:  test   %al,%al
08336fed +0x25:  je     08336ff6 <+0x2e>
08336fef +0x27:  mov    $0x0,%eax
08336ff4 +0x2c:  jmp    08337009 <+0x41>
08336ff6 +0x2e:  mov    0x8(%ebp),%eax
08336ff9 +0x31:  mov    (%eax),%eax
08336ffb +0x33:  mov    %eax,(%esp)
08336ffe +0x36:  call   0833eea6 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0xf73>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0xf73
08337003 +0x3b:  fstps  -0xc(%ebp)
08337006 +0x3e:  mov    -0xc(%ebp),%eax
08337009 +0x41:  mov    %eax,-0x1c(%ebp)
0833700c +0x44:  flds   -0x1c(%ebp)
0833700f +0x47:  leave
08337010 +0x48:  ret
08337011 +0x49:  nop
```

## 反编译 C

```c
// user_creature::CArtifact::GetExperienceAmount @ 0x8336fc8

/* user_creature::CArtifact::GetExperienceAmount() */

longdouble __thiscall user_creature::CArtifact::GetExperienceAmount(CArtifact *this)

{
  char cVar1;
  float fVar2;
  longdouble lVar3;
  
  if (*(int *)this == 0) {
    fVar2 = 0.0;
  }
  else {
    cVar1 = CItem::is_stackable(*(CItem **)this);
    if (cVar1 == '\0') {
      lVar3 = (longdouble)CEquipItem::get_experience_amount(*(CEquipItem **)this);
      fVar2 = (float)lVar3;
    }
    else {
      fVar2 = 0.0;
    }
  }
  return (longdouble)fVar2;
}
```

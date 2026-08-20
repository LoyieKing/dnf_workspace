# GetCreatureMinimumLevel

`_ZN13user_creature9CArtifact23GetCreatureMinimumLevelEv`

`user_creature::CArtifact::GetCreatureMinimumLevel()`

| 类 | 地址 |
|---|---|
| `user_creature::CArtifact` | `0x08337012` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08337012  _ZN13user_creature9CArtifact23GetCreatureMinimumLevelEv
#           user_creature::CArtifact::GetCreatureMinimumLevel()
# range [0x08337012, 0x0833704f]
08337012 +0x00:  push   %ebp
08337013 +0x01:  mov    %esp,%ebp
08337015 +0x03:  sub    $0x18,%esp
08337018 +0x06:  mov    0x8(%ebp),%eax
0833701b +0x09:  mov    (%eax),%eax
0833701d +0x0b:  test   %eax,%eax
0833701f +0x0d:  jne    08337028 <+0x16>
08337021 +0x0f:  mov    $0x0,%eax
08337026 +0x14:  jmp    0833704d <+0x3b>
08337028 +0x16:  mov    0x8(%ebp),%eax
0833702b +0x19:  mov    (%eax),%eax
0833702d +0x1b:  mov    %eax,(%esp)
08337030 +0x1e:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08337035 +0x23:  test   %al,%al
08337037 +0x25:  je     08337040 <+0x2e>
08337039 +0x27:  mov    $0x0,%eax
0833703e +0x2c:  jmp    0833704d <+0x3b>
08337040 +0x2e:  mov    0x8(%ebp),%eax
08337043 +0x31:  mov    (%eax),%eax
08337045 +0x33:  mov    %eax,(%esp)
08337048 +0x36:  call   0833eee8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0xfb5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0xfb5
0833704d +0x3b:  leave
0833704e +0x3c:  ret
0833704f +0x3d:  nop
```

## 反编译 C

```c
// user_creature::CArtifact::GetCreatureMinimumLevel @ 0x8337012

/* user_creature::CArtifact::GetCreatureMinimumLevel() */

undefined4 __thiscall user_creature::CArtifact::GetCreatureMinimumLevel(CArtifact *this)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)this == 0) {
    uVar2 = 0;
  }
  else {
    cVar1 = CItem::is_stackable(*(CItem **)this);
    if (cVar1 == '\0') {
      uVar2 = CEquipItem::get_creature_minimum_level(*(CEquipItem **)this);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```

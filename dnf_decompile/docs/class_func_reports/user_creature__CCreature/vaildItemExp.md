# vaildItemExp

`_ZN13user_creature9CCreature12vaildItemExpEi`

`user_creature::CCreature::vaildItemExp(int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x083378aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083378aa  _ZN13user_creature9CCreature12vaildItemExpEi
#           user_creature::CCreature::vaildItemExp(int)
# range [0x083378aa, 0x083378fb]
083378aa +0x00:  push   %ebp
083378ab +0x01:  mov    %esp,%ebp
083378ad +0x03:  sub    $0x18,%esp
083378b0 +0x06:  mov    0x8(%ebp),%eax
083378b3 +0x09:  mov    0x3c(%eax),%eax
083378b6 +0x0c:  cmp    $0x2,%eax
083378b9 +0x0f:  jne    083378c2 <+0x18>
083378bb +0x11:  mov    $0x0,%eax
083378c0 +0x16:  jmp    083378f9 <+0x4f>
083378c2 +0x18:  mov    0x8(%ebp),%eax
083378c5 +0x1b:  movzbl 0x4c(%eax),%eax
083378c9 +0x1f:  test   %al,%al
083378cb +0x21:  je     083378d4 <+0x2a>
083378cd +0x23:  mov    $0x0,%eax
083378d2 +0x28:  jmp    083378f9 <+0x4f>
083378d4 +0x2a:  mov    0x8(%ebp),%eax
083378d7 +0x2d:  mov    0x44(%eax),%eax
083378da +0x30:  mov    0xc(%ebp),%edx
083378dd +0x33:  mov    %edx,0x4(%esp)
083378e1 +0x37:  mov    %eax,(%esp)
083378e4 +0x3a:  call   0833f280 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x134d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x134d
083378e9 +0x3f:  test   %al,%al
083378eb +0x41:  je     083378f4 <+0x4a>
083378ed +0x43:  mov    $0x1,%eax
083378f2 +0x48:  jmp    083378f9 <+0x4f>
083378f4 +0x4a:  mov    $0x0,%eax
083378f9 +0x4f:  leave
083378fa +0x50:  ret
083378fb +0x51:  nop
```

## 反编译 C

```c
// user_creature::CCreature::vaildItemExp @ 0x83378aa

/* user_creature::CCreature::vaildItemExp(int) */

undefined4 __thiscall user_creature::CCreature::vaildItemExp(CCreature *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)(this + 0x3c) == 2) {
    uVar2 = 0;
  }
  else if (this[0x4c] == (CCreature)0x0) {
    cVar1 = CCreatureScript::validItemExp(*(CCreatureScript **)(this + 0x44),param_1);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

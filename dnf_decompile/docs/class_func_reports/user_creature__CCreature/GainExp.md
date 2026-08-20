# GainExp

`_ZN13user_creature9CCreature7GainExpEiP5CUser`

`user_creature::CCreature::GainExp(int, CUser*)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x083378fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083378fc  _ZN13user_creature9CCreature7GainExpEiP5CUser
#           user_creature::CCreature::GainExp(int, CUser*)
# range [0x083378fc, 0x083379bf]
083378fc +0x00:  push   %ebp
083378fd +0x01:  mov    %esp,%ebp
083378ff +0x03:  push   %ebx
08337900 +0x04:  sub    $0x14,%esp
08337903 +0x07:  mov    0x8(%ebp),%eax
08337906 +0x0a:  mov    0x44(%eax),%eax
08337909 +0x0d:  test   %eax,%eax
0833790b +0x0f:  jne    08337917 <+0x1b>
0833790d +0x11:  mov    $0x0,%eax
08337912 +0x16:  jmp    083379b9 <+0xbd>
08337917 +0x1b:  mov    0x8(%ebp),%eax
0833791a +0x1e:  mov    0x44(%eax),%eax
0833791d +0x21:  mov    %eax,(%esp)
08337920 +0x24:  call   0833f34a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1417>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1417
08337925 +0x29:  cmp    $0xffffffff,%eax
08337928 +0x2c:  setne  %al
0833792b +0x2f:  test   %al,%al
0833792d +0x31:  je     08337953 <+0x57>
0833792f +0x33:  mov    0x8(%ebp),%eax
08337932 +0x36:  mov    0x2c(%eax),%ebx
08337935 +0x39:  mov    0x8(%ebp),%eax
08337938 +0x3c:  mov    0x44(%eax),%eax
0833793b +0x3f:  mov    %eax,(%esp)
0833793e +0x42:  call   0833f34a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1417>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1417
08337943 +0x47:  cmp    %eax,%ebx
08337945 +0x49:  setge  %al
08337948 +0x4c:  test   %al,%al
0833794a +0x4e:  je     08337953 <+0x57>
0833794c +0x50:  mov    $0x0,%eax
08337951 +0x55:  jmp    083379b9 <+0xbd>
08337953 +0x57:  mov    0x8(%ebp),%eax
08337956 +0x5a:  mov    0x2c(%eax),%ebx
08337959 +0x5d:  mov    0x8(%ebp),%eax
0833795c +0x60:  mov    0x44(%eax),%eax
0833795f +0x63:  mov    %eax,(%esp)
08337962 +0x66:  call   0833f24c <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1319>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1319
08337967 +0x6b:  cmp    %eax,%ebx
08337969 +0x6d:  setge  %al
0833796c +0x70:  test   %al,%al
0833796e +0x72:  je     08337977 <+0x7b>
08337970 +0x74:  mov    $0x0,%eax
08337975 +0x79:  jmp    083379b9 <+0xbd>
08337977 +0x7b:  mov    0x8(%ebp),%eax
0833797a +0x7e:  movzbl 0x4c(%eax),%eax
0833797e +0x82:  xor    $0x1,%eax
08337981 +0x85:  test   %al,%al
08337983 +0x87:  je     083379a0 <+0xa4>
08337985 +0x89:  mov    0x10(%ebp),%eax
08337988 +0x8c:  mov    %eax,0x8(%esp)
0833798c +0x90:  mov    0xc(%ebp),%eax
0833798f +0x93:  mov    %eax,0x4(%esp)
08337993 +0x97:  mov    0x8(%ebp),%eax
08337996 +0x9a:  mov    %eax,(%esp)
08337999 +0x9d:  call   083379c0 <_ZN13user_creature9CCreature19GainItemExpCreatureEiP5CUser>  ; user_creature::CCreature::GainItemExpCreature(int, CUser*)
0833799e +0xa2:  jmp    083379b9 <+0xbd>
083379a0 +0xa4:  mov    0x10(%ebp),%eax
083379a3 +0xa7:  mov    %eax,0x8(%esp)
083379a7 +0xab:  mov    0xc(%ebp),%eax
083379aa +0xae:  mov    %eax,0x4(%esp)
083379ae +0xb2:  mov    0x8(%ebp),%eax
083379b1 +0xb5:  mov    %eax,(%esp)
083379b4 +0xb8:  call   08337bbc <_ZN13user_creature9CCreature15GainExpCreatureEiP5CUser>  ; user_creature::CCreature::GainExpCreature(int, CUser*)
083379b9 +0xbd:  add    $0x14,%esp
083379bc +0xc0:  pop    %ebx
083379bd +0xc1:  pop    %ebp
083379be +0xc2:  ret
083379bf +0xc3:  nop
```

## 反编译 C

```c
// user_creature::CCreature::GainExp @ 0x83378fc

/* user_creature::CCreature::GainExp(int, CUser*) */

undefined4 __thiscall user_creature::CCreature::GainExp(CCreature *this,int param_1,CUser *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(this + 0x44) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = CCreatureScript::GetTypeSelectEvolutionLevel(*(CCreatureScript **)(this + 0x44));
    if ((iVar2 != -1) &&
       (iVar2 = *(int *)(this + 0x2c),
       iVar3 = CCreatureScript::GetTypeSelectEvolutionLevel(*(CCreatureScript **)(this + 0x44)),
       iVar3 <= iVar2)) {
      return 0;
    }
    iVar2 = *(int *)(this + 0x2c);
    iVar3 = CCreatureScript::GetMaxLevel(*(CCreatureScript **)(this + 0x44));
    if (iVar2 < iVar3) {
      if (this[0x4c] == (CCreature)0x1) {
        uVar1 = GainExpCreature(this,param_1,param_2);
      }
      else {
        uVar1 = GainItemExpCreature(this,param_1,param_2);
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
```

# Reset

`_ZN13user_creature9CCreature5ResetEv`

`user_creature::CCreature::Reset()`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x083370b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083370b0  _ZN13user_creature9CCreature5ResetEv
#           user_creature::CCreature::Reset()
# range [0x083370b0, 0x08337159]
083370b0 +0x00:  push   %ebp
083370b1 +0x01:  mov    %esp,%ebp
083370b3 +0x03:  sub    $0x18,%esp
083370b6 +0x06:  mov    0x8(%ebp),%eax
083370b9 +0x09:  movl   $0x1,0x8(%eax)
083370c0 +0x10:  mov    0x8(%ebp),%eax
083370c3 +0x13:  movl   $0x0,0xc(%eax)
083370ca +0x1a:  mov    0x8(%ebp),%eax
083370cd +0x1d:  movl   $0x0,0x10(%eax)
083370d4 +0x24:  mov    0x8(%ebp),%eax
083370d7 +0x27:  movl   $0x2,0x3c(%eax)
083370de +0x2e:  mov    0x8(%ebp),%eax
083370e1 +0x31:  movb   $0x0,0x40(%eax)
083370e5 +0x35:  mov    0x8(%ebp),%eax
083370e8 +0x38:  movl   $0x0,0x44(%eax)
083370ef +0x3f:  mov    0x8(%ebp),%eax
083370f2 +0x42:  movl   $0x0,0x48(%eax)
083370f9 +0x49:  mov    0x8(%ebp),%eax
083370fc +0x4c:  movl   $0x1,0x2c(%eax)
08337103 +0x53:  mov    0x8(%ebp),%eax
08337106 +0x56:  movl   $0x0,0x30(%eax)
0833710d +0x5d:  mov    0x8(%ebp),%eax
08337110 +0x60:  movb   $0x0,0x14(%eax)
08337114 +0x64:  mov    0x8(%ebp),%eax
08337117 +0x67:  movb   $0x1,0x4c(%eax)
0833711b +0x6b:  mov    0x8(%ebp),%eax
0833711e +0x6e:  movb   $0x5,0x4d(%eax)
08337122 +0x72:  mov    0x8(%ebp),%eax
08337125 +0x75:  add    $0x1c,%eax
08337128 +0x78:  movl   $0xd,0x8(%esp)
08337130 +0x80:  movl   $0x0,0x4(%esp)
08337138 +0x88:  mov    %eax,(%esp)
0833713b +0x8b:  call   0807dcc0 <_init+0x5b8>
08337140 +0x90:  mov    0x8(%ebp),%eax
08337143 +0x93:  lea    0x34(%eax),%edx
08337146 +0x96:  mov    $0x0,%eax
0833714b +0x9b:  mov    %eax,0x4(%esp)
0833714f +0x9f:  mov    %edx,(%esp)
08337152 +0xa2:  call   0833eef6 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0xfc3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0xfc3
08337157 +0xa7:  leave
08337158 +0xa8:  ret
08337159 +0xa9:  nop
```

## 反编译 C

```c
// user_creature::CCreature::Reset @ 0x83370b0

/* user_creature::CCreature::Reset() */

void __thiscall user_creature::CCreature::Reset(CCreature *this)

{
  *(undefined4 *)(this + 8) = 1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x3c) = 2;
  this[0x40] = (CCreature)0x0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x2c) = 1;
  *(undefined4 *)(this + 0x30) = 0;
  this[0x14] = (CCreature)0x0;
  this[0x4c] = (CCreature)0x1;
  this[0x4d] = (CCreature)0x5;
  memset(this + 0x1c,0,0xd);
  CStomach::SetStomachValue((CStomach *)(this + 0x34),0.0);
  return;
}
```

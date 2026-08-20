# GetExpLevel

`_ZN13user_creature9CCreature11GetExpLevelEi`

`user_creature::CCreature::GetExpLevel(int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x083374d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083374d2  _ZN13user_creature9CCreature11GetExpLevelEi
#           user_creature::CCreature::GetExpLevel(int)
# range [0x083374d2, 0x0833756d]
083374d2 +0x00:  push   %ebp
083374d3 +0x01:  mov    %esp,%ebp
083374d5 +0x03:  sub    $0x28,%esp
083374d8 +0x06:  movl   $0x0,-0x10(%ebp)
083374df +0x0d:  mov    0x8(%ebp),%eax
083374e2 +0x10:  movzbl 0x4c(%eax),%eax
083374e6 +0x14:  xor    $0x1,%eax
083374e9 +0x17:  test   %al,%al
083374eb +0x19:  je     0833751e <+0x4c>
083374ed +0x1b:  mov    0x8(%ebp),%eax
083374f0 +0x1e:  mov    0x44(%eax),%eax
083374f3 +0x21:  mov    %eax,(%esp)
083374f6 +0x24:  call   0833f356 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1423>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1423
083374fb +0x29:  mov    %eax,-0xc(%ebp)
083374fe +0x2c:  cmpl   $0x0,-0xc(%ebp)
08337502 +0x30:  jne    0833750b <+0x39>
08337504 +0x32:  movl   $0x19,-0xc(%ebp)
0833750b +0x39:  mov    0xc(%ebp),%eax
0833750e +0x3c:  mov    %eax,%edx
08337510 +0x3e:  sar    $0x1f,%edx
08337513 +0x41:  idivl  -0xc(%ebp)
08337516 +0x44:  add    $0x1,%eax
08337519 +0x47:  mov    %eax,-0x10(%ebp)
0833751c +0x4a:  jmp    08337535 <+0x63>
0833751e +0x4c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08337523 +0x51:  mov    0xc(%ebp),%edx
08337526 +0x54:  mov    %edx,0x4(%esp)
0833752a +0x58:  mov    %eax,(%esp)
0833752d +0x5b:  call   08360562 <_ZNK12CDataManager22get_creature_exp_levelEi>  ; CDataManager::get_creature_exp_level(int) const
08337532 +0x60:  mov    %eax,-0x10(%ebp)
08337535 +0x63:  mov    0x8(%ebp),%eax
08337538 +0x66:  mov    0x44(%eax),%eax
0833753b +0x69:  test   %eax,%eax
0833753d +0x6b:  je     08337568 <+0x96>
0833753f +0x6d:  mov    0x8(%ebp),%eax
08337542 +0x70:  mov    0x44(%eax),%eax
08337545 +0x73:  mov    %eax,(%esp)
08337548 +0x76:  call   0833f24c <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1319>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1319
0833754d +0x7b:  cmp    -0x10(%ebp),%eax
08337550 +0x7e:  setl   %al
08337553 +0x81:  test   %al,%al
08337555 +0x83:  je     08337568 <+0x96>
08337557 +0x85:  mov    0x8(%ebp),%eax
0833755a +0x88:  mov    0x44(%eax),%eax
0833755d +0x8b:  mov    %eax,(%esp)
08337560 +0x8e:  call   0833f24c <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1319>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1319
08337565 +0x93:  mov    %eax,-0x10(%ebp)
08337568 +0x96:  mov    -0x10(%ebp),%eax
0833756b +0x99:  leave
0833756c +0x9a:  ret
0833756d +0x9b:  nop
```

## 反编译 C

```c
// user_creature::CCreature::GetExpLevel @ 0x83374d2

/* user_creature::CCreature::GetExpLevel(int) */

int __thiscall user_creature::CCreature::GetExpLevel(CCreature *this,int param_1)

{
  CDataManager *this_00;
  int iVar1;
  int local_14;
  int local_10;
  
  if (this[0x4c] == (CCreature)0x1) {
    this_00 = (CDataManager *)G_CDataManager();
    local_14 = CDataManager::get_creature_exp_level(this_00,param_1);
  }
  else {
    local_10 = CCreatureScript::GetGrowItemCountforLevelUp(*(CCreatureScript **)(this + 0x44));
    if (local_10 == 0) {
      local_10 = 0x19;
    }
    local_14 = param_1 / local_10 + 1;
  }
  if (*(int *)(this + 0x44) != 0) {
    iVar1 = CCreatureScript::GetMaxLevel(*(CCreatureScript **)(this + 0x44));
    if (iVar1 < local_14) {
      local_14 = CCreatureScript::GetMaxLevel(*(CCreatureScript **)(this + 0x44));
    }
  }
  return local_14;
}
```

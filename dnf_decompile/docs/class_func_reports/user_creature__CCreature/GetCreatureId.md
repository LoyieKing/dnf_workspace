# GetCreatureId

`_ZN13user_creature9CCreature13GetCreatureIdEi`

`user_creature::CCreature::GetCreatureId(int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x0833769c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833769c  _ZN13user_creature9CCreature13GetCreatureIdEi
#           user_creature::CCreature::GetCreatureId(int)
# range [0x0833769c, 0x083376f5]
0833769c +0x00:  push   %ebp
0833769d +0x01:  mov    %esp,%ebp
0833769f +0x03:  sub    $0x28,%esp
083376a2 +0x06:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
083376a7 +0x0b:  mov    0xc(%ebp),%edx
083376aa +0x0e:  mov    %edx,0x4(%esp)
083376ae +0x12:  mov    %eax,(%esp)
083376b1 +0x15:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
083376b6 +0x1a:  mov    %eax,-0xc(%ebp)
083376b9 +0x1d:  cmpl   $0x0,-0xc(%ebp)
083376bd +0x21:  jne    083376c6 <+0x2a>
083376bf +0x23:  mov    $0xffffffff,%eax
083376c4 +0x28:  jmp    083376f3 <+0x57>
083376c6 +0x2a:  mov    -0xc(%ebp),%eax
083376c9 +0x2d:  mov    %eax,(%esp)
083376cc +0x30:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
083376d1 +0x35:  test   %al,%al
083376d3 +0x37:  je     083376dc <+0x40>
083376d5 +0x39:  mov    $0xffffffff,%eax
083376da +0x3e:  jmp    083376f3 <+0x57>
083376dc +0x40:  mov    -0xc(%ebp),%eax
083376df +0x43:  mov    %eax,(%esp)
083376e2 +0x46:  call   0833eebe <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0xf8b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0xf8b
083376e7 +0x4b:  mov    0x8(%ebp),%edx
083376ea +0x4e:  mov    %eax,0x48(%edx)
083376ed +0x51:  mov    0x8(%ebp),%eax
083376f0 +0x54:  mov    0x48(%eax),%eax
083376f3 +0x57:  leave
083376f4 +0x58:  ret
083376f5 +0x59:  nop
```

## 反编译 C

```c
// user_creature::CCreature::GetCreatureId @ 0x833769c

/* user_creature::CCreature::GetCreatureId(int) */

undefined4 __thiscall user_creature::CCreature::GetCreatureId(CCreature *this,int param_1)

{
  char cVar1;
  CDataManager *this_00;
  CItem *this_01;
  undefined4 uVar2;
  
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,param_1);
  if (this_01 == (CItem *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = CItem::is_stackable(this_01);
    if (cVar1 == '\0') {
      uVar2 = CEquipItem::get_creature_species((CEquipItem *)this_01);
      *(undefined4 *)(this + 0x48) = uVar2;
      uVar2 = *(undefined4 *)(this + 0x48);
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}
```

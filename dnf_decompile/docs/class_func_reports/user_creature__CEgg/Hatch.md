# Hatch

`_ZN13user_creature4CEgg5HatchEPi`

`user_creature::CEgg::Hatch(int*)`

| 类 | 地址 |
|---|---|
| `user_creature::CEgg` | `0x0833912a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833912a  _ZN13user_creature4CEgg5HatchEPi
#           user_creature::CEgg::Hatch(int*)
# range [0x0833912a, 0x08339195]
0833912a +0x00:  push   %ebp
0833912b +0x01:  mov    %esp,%ebp
0833912d +0x03:  push   %ebx
0833912e +0x04:  sub    $0x24,%esp
08339131 +0x07:  mov    0x8(%ebp),%eax
08339134 +0x0a:  mov    %eax,(%esp)
08339137 +0x0d:  call   0833efa4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1071>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1071
0833913c +0x12:  mov    %eax,%ebx
0833913e +0x14:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08339143 +0x19:  mov    %ebx,0x4(%esp)
08339147 +0x1d:  mov    %eax,(%esp)
0833914a +0x20:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0833914f +0x25:  mov    %eax,-0x10(%ebp)
08339152 +0x28:  cmpl   $0x0,-0x10(%ebp)
08339156 +0x2c:  jne    0833915f <+0x35>
08339158 +0x2e:  mov    $0x0,%eax
0833915d +0x33:  jmp    08339190 <+0x66>
0833915f +0x35:  mov    -0x10(%ebp),%eax
08339162 +0x38:  mov    %eax,(%esp)
08339165 +0x3b:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
0833916a +0x40:  test   %al,%al
0833916c +0x42:  je     08339175 <+0x4b>
0833916e +0x44:  mov    $0x0,%eax
08339173 +0x49:  jmp    08339190 <+0x66>
08339175 +0x4b:  mov    -0x10(%ebp),%eax
08339178 +0x4e:  mov    %eax,-0xc(%ebp)
0833917b +0x51:  mov    -0xc(%ebp),%eax
0833917e +0x54:  mov    %eax,(%esp)
08339181 +0x57:  call   0833eeda <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0xfa7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0xfa7
08339186 +0x5c:  mov    0xc(%ebp),%edx
08339189 +0x5f:  mov    %eax,(%edx)
0833918b +0x61:  mov    $0x1,%eax
08339190 +0x66:  add    $0x24,%esp
08339193 +0x69:  pop    %ebx
08339194 +0x6a:  pop    %ebp
08339195 +0x6b:  ret
```

## 反编译 C

```c
// user_creature::CEgg::Hatch @ 0x833912a

/* user_creature::CEgg::Hatch(int*) */

undefined4 __thiscall user_creature::CEgg::Hatch(CEgg *this,int *param_1)

{
  char cVar1;
  int iVar2;
  CDataManager *this_00;
  CItem *this_01;
  undefined4 uVar3;
  
  iVar2 = CCreatureItem::GetItemId((CCreatureItem *)this);
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,iVar2);
  if (this_01 == (CItem *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = CItem::is_stackable(this_01);
    if (cVar1 == '\0') {
      iVar2 = CEquipItem::get_hatch_item_id((CEquipItem *)this_01);
      *param_1 = iVar2;
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```

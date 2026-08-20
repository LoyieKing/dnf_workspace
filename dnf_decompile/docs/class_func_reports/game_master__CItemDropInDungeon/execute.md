# execute

`_ZN11game_master18CItemDropInDungeon7executeEv`

`game_master::CItemDropInDungeon::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CItemDropInDungeon` | `0x084abce8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084abce8  _ZN11game_master18CItemDropInDungeon7executeEv
#           game_master::CItemDropInDungeon::execute()
# range [0x084abce8, 0x084abdb3]
084abce8 +0x00:  push   %ebp
084abce9 +0x01:  mov    %esp,%ebp
084abceb +0x03:  push   %ebx
084abcec +0x04:  sub    $0x24,%esp
084abcef +0x07:  mov    0x8(%ebp),%eax
084abcf2 +0x0a:  mov    0x8(%eax),%ebx
084abcf5 +0x0d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084abcfa +0x12:  mov    %ebx,0x4(%esp)
084abcfe +0x16:  mov    %eax,(%esp)
084abd01 +0x19:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084abd06 +0x1e:  mov    %eax,-0x14(%ebp)
084abd09 +0x21:  cmpl   $0x0,-0x14(%ebp)
084abd0d +0x25:  je     084abda6 <+0xbe>
084abd13 +0x2b:  mov    -0x14(%ebp),%eax
084abd16 +0x2e:  mov    %eax,(%esp)
084abd19 +0x31:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
084abd1e +0x36:  test   %al,%al
084abd20 +0x38:  jne    084abd50 <+0x68>
084abd22 +0x3a:  mov    -0x14(%ebp),%eax
084abd25 +0x3d:  mov    (%eax),%eax
084abd27 +0x3f:  add    $0xc,%eax
084abd2a +0x42:  mov    (%eax),%edx
084abd2c +0x44:  mov    -0x14(%ebp),%eax
084abd2f +0x47:  mov    %eax,(%esp)
084abd32 +0x4a:  call   *%edx
084abd34 +0x4c:  cmp    $0x16,%eax
084abd37 +0x4f:  je     084abd50 <+0x68>
084abd39 +0x51:  mov    -0x14(%ebp),%eax
084abd3c +0x54:  mov    (%eax),%eax
084abd3e +0x56:  add    $0xc,%eax
084abd41 +0x59:  mov    (%eax),%edx
084abd43 +0x5b:  mov    -0x14(%ebp),%eax
084abd46 +0x5e:  mov    %eax,(%esp)
084abd49 +0x61:  call   *%edx
084abd4b +0x63:  cmp    $0x17,%eax
084abd4e +0x66:  jne    084abd57 <+0x6f>
084abd50 +0x68:  mov    $0x1,%eax
084abd55 +0x6d:  jmp    084abd5c <+0x74>
084abd57 +0x6f:  mov    $0x0,%eax
084abd5c +0x74:  test   %al,%al
084abd5e +0x76:  jne    084abda9 <+0xc1>
084abd60 +0x78:  mov    0x8(%ebp),%eax
084abd63 +0x7b:  mov    %eax,(%esp)
084abd66 +0x7e:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084abd6b +0x83:  mov    %eax,-0x10(%ebp)
084abd6e +0x86:  cmpl   $0x0,-0x10(%ebp)
084abd72 +0x8a:  je     084abdac <+0xc4>
084abd74 +0x8c:  mov    -0x10(%ebp),%eax
084abd77 +0x8f:  mov    %eax,(%esp)
084abd7a +0x92:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
084abd7f +0x97:  mov    %eax,-0xc(%ebp)
084abd82 +0x9a:  cmpl   $0x0,-0xc(%ebp)
084abd86 +0x9e:  je     084abdad <+0xc5>
084abd88 +0xa0:  mov    0x8(%ebp),%eax
084abd8b +0xa3:  mov    0x8(%eax),%eax
084abd8e +0xa6:  mov    %eax,0x8(%esp)
084abd92 +0xaa:  mov    -0x10(%ebp),%eax
084abd95 +0xad:  mov    %eax,0x4(%esp)
084abd99 +0xb1:  mov    -0xc(%ebp),%eax
084abd9c +0xb4:  mov    %eax,(%esp)
084abd9f +0xb7:  call   085a73a6 <_ZN6CParty12drop_item_gmEP5CUserj>  ; CParty::drop_item_gm(CUser*, unsigned int)
084abda4 +0xbc:  jmp    084abdad <+0xc5>
084abda6 +0xbe:  nop
084abda7 +0xbf:  jmp    084abdad <+0xc5>
084abda9 +0xc1:  nop
084abdaa +0xc2:  jmp    084abdad <+0xc5>
084abdac +0xc4:  nop
084abdad +0xc5:  add    $0x24,%esp
084abdb0 +0xc8:  pop    %ebx
084abdb1 +0xc9:  pop    %ebp
084abdb2 +0xca:  ret
084abdb3 +0xcb:  nop
```

## 反编译 C

```c
// game_master::CItemDropInDungeon::execute @ 0x84abce8

/* game_master::CItemDropInDungeon::execute() */

void __thiscall game_master::CItemDropInDungeon::execute(CItemDropInDungeon *this)

{
  bool bVar1;
  char cVar2;
  CDataManager *this_00;
  CItem *this_01;
  int iVar3;
  CUser *this_02;
  CParty *this_03;
  
  iVar3 = *(int *)(this + 8);
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,iVar3);
  if (this_01 != (CItem *)0x0) {
    cVar2 = CItem::is_stackable(this_01);
    if (((cVar2 == '\0') && (iVar3 = (**(code **)(*(int *)this_01 + 0xc))(this_01), iVar3 != 0x16))
       && (iVar3 = (**(code **)(*(int *)this_01 + 0xc))(this_01), iVar3 != 0x17)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((!bVar1) &&
        (this_02 = (CUser *)CCommand::GetUser((CCommand *)this), this_02 != (CUser *)0x0)) &&
       (this_03 = (CParty *)CUser::GetParty(this_02), this_03 != (CParty *)0x0)) {
      CParty::drop_item_gm(this_03,this_02,*(uint *)(this + 8));
    }
  }
  return;
}
```

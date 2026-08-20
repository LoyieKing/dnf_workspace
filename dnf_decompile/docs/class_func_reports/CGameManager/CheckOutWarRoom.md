# CheckOutWarRoom

`_ZN12CGameManager15CheckOutWarRoomEP5CUser`

`CGameManager::CheckOutWarRoom(CUser*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08297df8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08297df8  _ZN12CGameManager15CheckOutWarRoomEP5CUser
#           CGameManager::CheckOutWarRoom(CUser*)
# range [0x08297df8, 0x08297ea9]
08297df8 +0x00:  push   %ebp
08297df9 +0x01:  mov    %esp,%ebp
08297dfb +0x03:  sub    $0x38,%esp
08297dfe +0x06:  mov    0xc(%ebp),%eax
08297e01 +0x09:  mov    %eax,(%esp)
08297e04 +0x0c:  call   082a67a6 <_GLOBAL__I__ZN4CLog5this_E+0x2bcd>  ; global constructors keyed to CLog::this_+0x2bcd
08297e09 +0x11:  xor    $0x1,%eax
08297e0c +0x14:  test   %al,%al
08297e0e +0x16:  jne    08297ea4 <+0xac>
08297e14 +0x1c:  mov    0xc(%ebp),%eax
08297e17 +0x1f:  mov    %eax,(%esp)
08297e1a +0x22:  call   0822fe84 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x552e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x552e
08297e1f +0x27:  cwtl
08297e20 +0x28:  mov    %eax,0x4(%esp)
08297e24 +0x2c:  mov    0x8(%ebp),%eax
08297e27 +0x2f:  mov    %eax,(%esp)
08297e2a +0x32:  call   082a25d0 <_ZN12CGameManager10GetWarRoomEi>  ; CGameManager::GetWarRoom(int)
08297e2f +0x37:  mov    %eax,-0xc(%ebp)
08297e32 +0x3a:  cmpl   $0x0,-0xc(%ebp)
08297e36 +0x3e:  je     08297ea7 <+0xaf>
08297e38 +0x40:  mov    0xc(%ebp),%eax
08297e3b +0x43:  mov    %eax,0x4(%esp)
08297e3f +0x47:  mov    -0xc(%ebp),%eax
08297e42 +0x4a:  mov    %eax,(%esp)
08297e45 +0x4d:  call   086bd460 <_ZN7WarRoom11WalkOutUserEP5CUser>  ; WarRoom::WalkOutUser(CUser*)
08297e4a +0x52:  cmp    $0x4,%eax
08297e4d +0x55:  sete   %al
08297e50 +0x58:  test   %al,%al
08297e52 +0x5a:  je     08297e97 <+0x9f>
08297e54 +0x5c:  movl   $0xffffffff,0x4(%esp)
08297e5c +0x64:  mov    0xc(%ebp),%eax
08297e5f +0x67:  mov    %eax,(%esp)
08297e62 +0x6a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08297e67 +0x6f:  mov    %eax,0x14(%esp)
08297e6b +0x73:  movl   $"CGameManager::CheckOutWarRoom Can't find user charno(%d)",0x10(%esp)
08297e73 +0x7b:  movl   $0x117b,0xc(%esp)
08297e7b +0x83:  movl   $&_ZZN12CGameManager15CheckOutWarRoomEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
08297e83 +0x8b:  movl   $"App.cpp",0x4(%esp)
08297e8b +0x93:  movl   $0x1,(%esp)
08297e92 +0x9a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08297e97 +0x9f:  mov    -0xc(%ebp),%eax
08297e9a +0xa2:  mov    %eax,(%esp)
08297e9d +0xa5:  call   086bd3ec <_ZN7WarRoom10CheckStateEv>  ; WarRoom::CheckState()
08297ea2 +0xaa:  jmp    08297ea8 <+0xb0>
08297ea4 +0xac:  nop
08297ea5 +0xad:  jmp    08297ea8 <+0xb0>
08297ea7 +0xaf:  nop
08297ea8 +0xb0:  leave
08297ea9 +0xb1:  ret
```

## 反编译 C

```c
// CGameManager::CheckOutWarRoom @ 0x8297df8

/* CGameManager::CheckOutWarRoom(CUser*) */

void __thiscall CGameManager::CheckOutWarRoom(CGameManager *this,CUser *param_1)

{
  char cVar1;
  WarRoom *this_00;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = CUser::CheckInWarRoom(param_1);
  if (cVar1 == '\x01') {
    CUser::GetWarRoomIndex(param_1);
    this_00 = (WarRoom *)GetWarRoom((int)this);
    if (this_00 != (WarRoom *)0x0) {
      iVar2 = WarRoom::WalkOutUser(this_00,param_1);
      if (iVar2 == 4) {
        uVar3 = CUser::get_charac_no(param_1,-1);
        LogManager::logFormat
                  (1,"App.cpp","void CGameManager::CheckOutWarRoom(CUser*)",0x117b,
                   "CGameManager::CheckOutWarRoom Can\'t find user charno(%d)",uVar3);
      }
      WarRoom::CheckState(this_00);
    }
  }
  return;
}
```

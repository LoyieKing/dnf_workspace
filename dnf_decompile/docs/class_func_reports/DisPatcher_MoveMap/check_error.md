# check_error

`_ZN18DisPatcher_MoveMap11check_errorEP5CUserR8MSG_BASE`

`DisPatcher_MoveMap::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_MoveMap` | `0x081c4a90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c4a90  _ZN18DisPatcher_MoveMap11check_errorEP5CUserR8MSG_BASE
#           DisPatcher_MoveMap::check_error(CUser*, MSG_BASE&)
# range [0x081c4a90, 0x081c4b79]
081c4a90 +0x00:  push   %ebp
081c4a91 +0x01:  mov    %esp,%ebp
081c4a93 +0x03:  push   %ebx
081c4a94 +0x04:  sub    $0x24,%esp
081c4a97 +0x07:  cmpl   $0x0,0xc(%ebp)
081c4a9b +0x0b:  jne    081c4aa7 <+0x17>
081c4a9d +0x0d:  mov    $0xfffffffd,%eax
081c4aa2 +0x12:  jmp    081c4b73 <+0xe3>
081c4aa7 +0x17:  mov    0xc(%ebp),%eax
081c4aaa +0x1a:  mov    %eax,(%esp)
081c4aad +0x1d:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081c4ab2 +0x22:  mov    %eax,-0x10(%ebp)
081c4ab5 +0x25:  cmpl   $0x0,-0x10(%ebp)
081c4ab9 +0x29:  jne    081c4ac5 <+0x35>
081c4abb +0x2b:  mov    $0xfffffffc,%eax
081c4ac0 +0x30:  jmp    081c4b73 <+0xe3>
081c4ac5 +0x35:  mov    0x10(%ebp),%eax
081c4ac8 +0x38:  mov    %eax,-0xc(%ebp)
081c4acb +0x3b:  mov    -0xc(%ebp),%eax
081c4ace +0x3e:  movzbl 0xe(%eax),%eax
081c4ad2 +0x42:  movsbl %al,%ebx
081c4ad5 +0x45:  mov    -0x10(%ebp),%eax
081c4ad8 +0x48:  add    $0xb24,%eax
081c4add +0x4d:  mov    %eax,(%esp)
081c4ae0 +0x50:  call   0822cf0a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x25b4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x25b4
081c4ae5 +0x55:  cmp    %eax,%ebx
081c4ae7 +0x57:  jge    081c4b07 <+0x77>
081c4ae9 +0x59:  mov    -0xc(%ebp),%eax
081c4aec +0x5c:  movzbl 0xd(%eax),%eax
081c4af0 +0x60:  movsbl %al,%ebx
081c4af3 +0x63:  mov    -0x10(%ebp),%eax
081c4af6 +0x66:  add    $0xb24,%eax
081c4afb +0x6b:  mov    %eax,(%esp)
081c4afe +0x6e:  call   0822cefc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x25a6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x25a6
081c4b03 +0x73:  cmp    %eax,%ebx
081c4b05 +0x75:  jl     081c4b0e <+0x7e>
081c4b07 +0x77:  mov    $0x1,%eax
081c4b0c +0x7c:  jmp    081c4b13 <+0x83>
081c4b0e +0x7e:  mov    $0x0,%eax
081c4b13 +0x83:  test   %al,%al
081c4b15 +0x85:  je     081c4b1e <+0x8e>
081c4b17 +0x87:  mov    $0xfffffffb,%eax
081c4b1c +0x8c:  jmp    081c4b73 <+0xe3>
081c4b1e +0x8e:  mov    0xc(%ebp),%eax
081c4b21 +0x91:  mov    %eax,(%esp)
081c4b24 +0x94:  call   0822fdb6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5460>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5460
081c4b29 +0x99:  cmpl   $0x0,0xc(%ebp)
081c4b2d +0x9d:  je     081c4b42 <+0xb2>
081c4b2f +0x9f:  mov    0xc(%ebp),%eax
081c4b32 +0xa2:  mov    %eax,(%esp)
081c4b35 +0xa5:  call   0823081c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5ec6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5ec6
081c4b3a +0xaa:  mov    %eax,(%esp)
081c4b3d +0xad:  call   08236cf8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc3a2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc3a2
081c4b42 +0xb2:  mov    0xc(%ebp),%eax
081c4b45 +0xb5:  mov    %eax,(%esp)
081c4b48 +0xb8:  call   0822fdce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5478>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5478
081c4b4d +0xbd:  mov    0xc(%ebp),%eax
081c4b50 +0xc0:  mov    %eax,(%esp)
081c4b53 +0xc3:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c4b58 +0xc8:  mov    %eax,(%esp)
081c4b5b +0xcb:  call   081466f0 <_ZN6Global11CGlobalFunc15Get_State_CheckE8ch_state>  ; Global::CGlobalFunc::Get_State_Check(ch_state)
081c4b60 +0xd0:  xor    $0x1,%eax
081c4b63 +0xd3:  test   %al,%al
081c4b65 +0xd5:  je     081c4b6e <+0xde>
081c4b67 +0xd7:  mov    $0xffffffff,%eax
081c4b6c +0xdc:  jmp    081c4b73 <+0xe3>
081c4b6e +0xde:  mov    $0x0,%eax
081c4b73 +0xe3:  add    $0x24,%esp
081c4b76 +0xe6:  pop    %ebx
081c4b77 +0xe7:  pop    %ebp
081c4b78 +0xe8:  ret
081c4b79 +0xe9:  nop
```

## 反编译 C

```c
// DisPatcher_MoveMap::check_error @ 0x81c4a90

/* DisPatcher_MoveMap::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_MoveMap::check_error(DisPatcher_MoveMap *this,CUser *param_1,MSG_BASE *param_2)

{
  MSG_BASE MVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  set<std::pair<unsigned_char,unsigned_short>,std::less<std::pair<unsigned_char,unsigned_short>>,std::allocator<std::pair<unsigned_char,unsigned_short>>>
  *this_00;
  
  if (param_1 == (CUser *)0x0) {
    return 0xfffffffd;
  }
  iVar4 = CUser::GetParty(param_1);
  if (iVar4 != 0) {
    MVar1 = param_2[0xe];
    iVar5 = CBattle_Field::getMapHeight((CBattle_Field *)(iVar4 + 0xb24));
    if (((char)MVar1 < iVar5) &&
       (MVar1 = param_2[0xd], iVar4 = CBattle_Field::getMapWidth((CBattle_Field *)(iVar4 + 0xb24)),
       (char)MVar1 < iVar4)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar6 = 0xfffffffb;
    }
    else {
      CUser::lock(param_1);
      if (param_1 != (CUser *)0x0) {
        this_00 = (set<std::pair<unsigned_char,unsigned_short>,std::less<std::pair<unsigned_char,unsigned_short>>,std::allocator<std::pair<unsigned_char,unsigned_short>>>
                   *)CUser::GetCSHashSet(param_1);
        std::
        set<std::pair<unsigned_char,unsigned_short>,std::less<std::pair<unsigned_char,unsigned_short>>,std::allocator<std::pair<unsigned_char,unsigned_short>>>
        ::clear(this_00);
      }
      CUser::unlock(param_1);
      uVar6 = CUser::get_state(param_1);
      cVar3 = Global::CGlobalFunc::Get_State_Check(uVar6);
      if (cVar3 == '\x01') {
        uVar6 = 0;
      }
      else {
        uVar6 = 0xffffffff;
      }
    }
    return uVar6;
  }
  return 0xfffffffc;
}
```

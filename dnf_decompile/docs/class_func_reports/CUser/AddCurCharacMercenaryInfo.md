# AddCurCharacMercenaryInfo

`_ZN5CUser25AddCurCharacMercenaryInfoEv`

`CUser::AddCurCharacMercenaryInfo()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868e596` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868e596  _ZN5CUser25AddCurCharacMercenaryInfoEv
#           CUser::AddCurCharacMercenaryInfo()
# range [0x0868e596, 0x0868e671]
0868e596 +0x00:  push   %ebp
0868e597 +0x01:  mov    %esp,%ebp
0868e599 +0x03:  push   %ebx
0868e59a +0x04:  sub    $0x74,%esp
0868e59d +0x07:  mov    0x8(%ebp),%eax
0868e5a0 +0x0a:  mov    %eax,(%esp)
0868e5a3 +0x0d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0868e5a8 +0x12:  test   %eax,%eax
0868e5aa +0x14:  sete   %al
0868e5ad +0x17:  test   %al,%al
0868e5af +0x19:  jne    0868e667 <+0xd1>
0868e5b5 +0x1f:  mov    0x8(%ebp),%eax
0868e5b8 +0x22:  mov    %eax,(%esp)
0868e5bb +0x25:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0868e5c0 +0x2a:  movzwl 0x27(%eax),%ebx
0868e5c4 +0x2e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868e5c9 +0x33:  movzwl 0xa8e0(%eax),%eax
0868e5d0 +0x3a:  cmp    %ax,%bx
0868e5d3 +0x3d:  setl   %al
0868e5d6 +0x40:  test   %al,%al
0868e5d8 +0x42:  jne    0868e66a <+0xd4>
0868e5de +0x48:  lea    -0x5c(%ebp),%eax
0868e5e1 +0x4b:  mov    %eax,(%esp)
0868e5e4 +0x4e:  call   08694c08 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x145d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x145d
0868e5e9 +0x53:  lea    -0x5c(%ebp),%eax
0868e5ec +0x56:  mov    %eax,(%esp)
0868e5ef +0x59:  call   081b410a <_ZN21CHARAC_LOAD_MERCENARY5ResetEv>  ; CHARAC_LOAD_MERCENARY::Reset()
0868e5f4 +0x5e:  mov    0x8(%ebp),%eax
0868e5f7 +0x61:  mov    %eax,(%esp)
0868e5fa +0x64:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0868e5ff +0x69:  movzwl 0x27(%eax),%eax
0868e603 +0x6d:  mov    %ax,-0x58(%ebp)
0868e607 +0x71:  mov    0x8(%ebp),%eax
0868e60a +0x74:  mov    %eax,(%esp)
0868e60d +0x77:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0868e612 +0x7c:  mov    (%eax),%eax
0868e614 +0x7e:  mov    %eax,-0x5c(%ebp)
0868e617 +0x81:  mov    0x8(%ebp),%eax
0868e61a +0x84:  mov    %eax,(%esp)
0868e61d +0x87:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0868e622 +0x8c:  add    $0x4,%eax
0868e625 +0x8f:  movl   $0x1d,0x8(%esp)
0868e62d +0x97:  mov    %eax,0x4(%esp)
0868e631 +0x9b:  lea    -0x5c(%ebp),%eax
0868e634 +0x9e:  add    $0x6,%eax
0868e637 +0xa1:  mov    %eax,(%esp)
0868e63a +0xa4:  call   0807d8d0 <_init+0x1c8>
0868e63f +0xa9:  mov    0x8(%ebp),%eax
0868e642 +0xac:  mov    %eax,(%esp)
0868e645 +0xaf:  call   0868ea68 <_ZNK5CUser24CalcMercenaryAvatarBonusEv>  ; CUser::CalcMercenaryAvatarBonus() const
0868e64a +0xb4:  mov    %al,-0x2a(%ebp)
0868e64d +0xb7:  mov    0x8(%ebp),%eax
0868e650 +0xba:  lea    0x6ef6c(%eax),%edx
0868e656 +0xc0:  lea    -0x5c(%ebp),%eax
0868e659 +0xc3:  mov    %eax,0x4(%esp)
0868e65d +0xc7:  mov    %edx,(%esp)
0868e660 +0xca:  call   081b4300 <_ZN20UserMercenaryInfoMgr9AddCharacER21CHARAC_LOAD_MERCENARY>  ; UserMercenaryInfoMgr::AddCharac(CHARAC_LOAD_MERCENARY&)
0868e665 +0xcf:  jmp    0868e66b <+0xd5>
0868e667 +0xd1:  nop
0868e668 +0xd2:  jmp    0868e66b <+0xd5>
0868e66a +0xd4:  nop
0868e66b +0xd5:  add    $0x74,%esp
0868e66e +0xd8:  pop    %ebx
0868e66f +0xd9:  pop    %ebp
0868e670 +0xda:  ret
0868e671 +0xdb:  nop
```

## 反编译 C

```c
// CUser::AddCurCharacMercenaryInfo @ 0x868e596

/* CUser::AddCurCharacMercenaryInfo() */

void __thiscall CUser::AddCurCharacMercenaryInfo(CUser *this)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_60;
  undefined2 local_5c;
  char acStack_5a [44];
  undefined1 local_2e;
  
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar2 != 0) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
    sVar1 = *(short *)(iVar2 + 0x27);
    iVar2 = G_CDataManager();
    if (*(short *)(iVar2 + 0xa8e0) <= sVar1) {
      CHARAC_LOAD_MERCENARY::CHARAC_LOAD_MERCENARY((CHARAC_LOAD_MERCENARY *)&local_60);
      CHARAC_LOAD_MERCENARY::Reset((CHARAC_LOAD_MERCENARY *)&local_60);
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
      local_5c = *(undefined2 *)(iVar2 + 0x27);
      puVar3 = (undefined4 *)CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
      local_60 = *puVar3;
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
      strncpy(acStack_5a,(char *)(iVar2 + 4),0x1d);
      local_2e = CalcMercenaryAvatarBonus(this);
      UserMercenaryInfoMgr::AddCharac
                ((UserMercenaryInfoMgr *)(this + 0x6ef6c),(CHARAC_LOAD_MERCENARY *)&local_60);
    }
  }
  return;
}
```

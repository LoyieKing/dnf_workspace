# isCompetitionMercenary

`_ZNK5CUser22isCompetitionMercenaryEv`

`CUser::isCompetitionMercenary() const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868e9c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868e9c0  _ZNK5CUser22isCompetitionMercenaryEv
#           CUser::isCompetitionMercenary() const
# range [0x0868e9c0, 0x0868ea67]
0868e9c0 +0x00:  push   %ebp
0868e9c1 +0x01:  mov    %esp,%ebp
0868e9c3 +0x03:  sub    $0x28,%esp
0868e9c6 +0x06:  mov    0x8(%ebp),%eax
0868e9c9 +0x09:  mov    %eax,(%esp)
0868e9cc +0x0c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0868e9d1 +0x11:  test   %eax,%eax
0868e9d3 +0x13:  sete   %al
0868e9d6 +0x16:  test   %al,%al
0868e9d8 +0x18:  je     0868e9e4 <+0x24>
0868e9da +0x1a:  mov    $0x0,%eax
0868e9df +0x1f:  jmp    0868ea65 <+0xa5>
0868e9e4 +0x24:  mov    0x8(%ebp),%eax
0868e9e7 +0x27:  mov    %eax,(%esp)
0868e9ea +0x2a:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0868e9ef +0x2f:  mov    (%eax),%eax
0868e9f1 +0x31:  mov    0x8(%ebp),%edx
0868e9f4 +0x34:  add    $0x6ef6c,%edx
0868e9fa +0x3a:  mov    %eax,0x4(%esp)
0868e9fe +0x3e:  mov    %edx,(%esp)
0868ea01 +0x41:  call   081b42ae <_ZNK20UserMercenaryInfoMgr19FindIndexByCharacNoEj>  ; UserMercenaryInfoMgr::FindIndexByCharacNo(unsigned int) const
0868ea06 +0x46:  mov    %eax,-0xc(%ebp)
0868ea09 +0x49:  cmpl   $0xffffffff,-0xc(%ebp)
0868ea0d +0x4d:  jne    0868ea16 <+0x56>
0868ea0f +0x4f:  mov    $0x0,%eax
0868ea14 +0x54:  jmp    0868ea65 <+0xa5>
0868ea16 +0x56:  mov    -0xc(%ebp),%eax
0868ea19 +0x59:  movzbl %al,%eax
0868ea1c +0x5c:  mov    0x8(%ebp),%edx
0868ea1f +0x5f:  add    $0x6ef6c,%edx
0868ea25 +0x65:  mov    %eax,0x4(%esp)
0868ea29 +0x69:  mov    %edx,(%esp)
0868ea2c +0x6c:  call   081b4262 <_ZNK20UserMercenaryInfoMgr16CheckCharacIndexEh>  ; UserMercenaryInfoMgr::CheckCharacIndex(unsigned char) const
0868ea31 +0x71:  xor    $0x1,%eax
0868ea34 +0x74:  test   %al,%al
0868ea36 +0x76:  je     0868ea3f <+0x7f>
0868ea38 +0x78:  mov    $0x0,%eax
0868ea3d +0x7d:  jmp    0868ea65 <+0xa5>
0868ea3f +0x7f:  mov    -0xc(%ebp),%eax
0868ea42 +0x82:  mov    0x8(%ebp),%edx
0868ea45 +0x85:  add    $0x6ef6c,%edx
0868ea4b +0x8b:  mov    %eax,0x4(%esp)
0868ea4f +0x8f:  mov    %edx,(%esp)
0868ea52 +0x92:  call   081b4b9e <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x412>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x412
0868ea57 +0x97:  mov    %eax,(%esp)
0868ea5a +0x9a:  call   081b2e86 <_ZNK21CHARAC_LOAD_MERCENARY19GetCompetitionStateEv>  ; CHARAC_LOAD_MERCENARY::GetCompetitionState() const
0868ea5f +0x9f:  cmp    $0x1,%eax
0868ea62 +0xa2:  sete   %al
0868ea65 +0xa5:  leave
0868ea66 +0xa6:  ret
0868ea67 +0xa7:  nop
```

## 反编译 C

```c
// CUser::isCompetitionMercenary @ 0x868e9c0

/* CUser::isCompetitionMercenary() const */

bool __thiscall CUser::isCompetitionMercenary(CUser *this)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  CHARAC_LOAD_MERCENARY *this_00;
  bool bVar5;
  
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar2 == 0) {
    bVar5 = false;
  }
  else {
    puVar3 = (uint *)CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
    uVar4 = UserMercenaryInfoMgr::FindIndexByCharacNo
                      ((UserMercenaryInfoMgr *)(this + 0x6ef6c),*puVar3);
    if (uVar4 == 0xffffffff) {
      bVar5 = false;
    }
    else {
      cVar1 = UserMercenaryInfoMgr::CheckCharacIndex
                        ((UserMercenaryInfoMgr *)(this + 0x6ef6c),(uchar)uVar4);
      if (cVar1 == '\x01') {
        this_00 = (CHARAC_LOAD_MERCENARY *)
                  std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::
                  operator[]((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)
                             (this + 0x6ef6c),uVar4);
        iVar2 = CHARAC_LOAD_MERCENARY::GetCompetitionState(this_00);
        bVar5 = iVar2 == 1;
      }
      else {
        bVar5 = false;
      }
    }
  }
  return bVar5;
}
```

# setAvatarTypeBonus

`_ZN5CUser18setAvatarTypeBonusEc`

`CUser::setAvatarTypeBonus(char)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868ebaa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868ebaa  _ZN5CUser18setAvatarTypeBonusEc
#           CUser::setAvatarTypeBonus(char)
# range [0x0868ebaa, 0x0868ec5b]
0868ebaa +0x00:  push   %ebp
0868ebab +0x01:  mov    %esp,%ebp
0868ebad +0x03:  sub    $0x38,%esp
0868ebb0 +0x06:  mov    0xc(%ebp),%eax
0868ebb3 +0x09:  mov    %al,-0x1c(%ebp)
0868ebb6 +0x0c:  cmpb   $0x0,-0x1c(%ebp)
0868ebba +0x10:  js     0868ec4c <+0xa2>
0868ebc0 +0x16:  cmpb   $0x3,-0x1c(%ebp)
0868ebc4 +0x1a:  jg     0868ec4f <+0xa5>
0868ebca +0x20:  mov    0x8(%ebp),%eax
0868ebcd +0x23:  mov    %eax,(%esp)
0868ebd0 +0x26:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0868ebd5 +0x2b:  test   %eax,%eax
0868ebd7 +0x2d:  sete   %al
0868ebda +0x30:  test   %al,%al
0868ebdc +0x32:  jne    0868ec52 <+0xa8>
0868ebde +0x34:  mov    0x8(%ebp),%eax
0868ebe1 +0x37:  mov    %eax,(%esp)
0868ebe4 +0x3a:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0868ebe9 +0x3f:  mov    (%eax),%eax
0868ebeb +0x41:  mov    0x8(%ebp),%edx
0868ebee +0x44:  add    $0x6ef6c,%edx
0868ebf4 +0x4a:  mov    %eax,0x4(%esp)
0868ebf8 +0x4e:  mov    %edx,(%esp)
0868ebfb +0x51:  call   081b42ae <_ZNK20UserMercenaryInfoMgr19FindIndexByCharacNoEj>  ; UserMercenaryInfoMgr::FindIndexByCharacNo(unsigned int) const
0868ec00 +0x56:  mov    %eax,-0xc(%ebp)
0868ec03 +0x59:  cmpl   $0xffffffff,-0xc(%ebp)
0868ec07 +0x5d:  je     0868ec55 <+0xab>
0868ec09 +0x5f:  mov    -0xc(%ebp),%eax
0868ec0c +0x62:  movzbl %al,%eax
0868ec0f +0x65:  mov    0x8(%ebp),%edx
0868ec12 +0x68:  add    $0x6ef6c,%edx
0868ec18 +0x6e:  mov    %eax,0x4(%esp)
0868ec1c +0x72:  mov    %edx,(%esp)
0868ec1f +0x75:  call   081b4262 <_ZNK20UserMercenaryInfoMgr16CheckCharacIndexEh>  ; UserMercenaryInfoMgr::CheckCharacIndex(unsigned char) const
0868ec24 +0x7a:  xor    $0x1,%eax
0868ec27 +0x7d:  test   %al,%al
0868ec29 +0x7f:  jne    0868ec58 <+0xae>
0868ec2b +0x81:  mov    -0xc(%ebp),%eax
0868ec2e +0x84:  mov    0x8(%ebp),%edx
0868ec31 +0x87:  add    $0x6ef6c,%edx
0868ec37 +0x8d:  mov    %eax,0x4(%esp)
0868ec3b +0x91:  mov    %edx,(%esp)
0868ec3e +0x94:  call   081b4b46 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x3ba>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x3ba
0868ec43 +0x99:  movzbl -0x1c(%ebp),%edx
0868ec47 +0x9d:  mov    %dl,0x32(%eax)
0868ec4a +0xa0:  jmp    0868ec59 <+0xaf>
0868ec4c +0xa2:  nop
0868ec4d +0xa3:  jmp    0868ec59 <+0xaf>
0868ec4f +0xa5:  nop
0868ec50 +0xa6:  jmp    0868ec59 <+0xaf>
0868ec52 +0xa8:  nop
0868ec53 +0xa9:  jmp    0868ec59 <+0xaf>
0868ec55 +0xab:  nop
0868ec56 +0xac:  jmp    0868ec59 <+0xaf>
0868ec58 +0xae:  nop
0868ec59 +0xaf:  leave
0868ec5a +0xb0:  ret
0868ec5b +0xb1:  nop
```

## 反编译 C

```c
// CUser::setAvatarTypeBonus @ 0x868ebaa

/* CUser::setAvatarTypeBonus(char) */

void __thiscall CUser::setAvatarTypeBonus(CUser *this,char param_1)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  
  if (((-1 < param_1) && (param_1 < '\x04')) &&
     (iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this), iVar2 != 0)) {
    puVar3 = (uint *)CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
    uVar4 = UserMercenaryInfoMgr::FindIndexByCharacNo
                      ((UserMercenaryInfoMgr *)(this + 0x6ef6c),*puVar3);
    if ((uVar4 != 0xffffffff) &&
       (cVar1 = UserMercenaryInfoMgr::CheckCharacIndex
                          ((UserMercenaryInfoMgr *)(this + 0x6ef6c),(uchar)uVar4), cVar1 == '\x01'))
    {
      iVar2 = std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::operator[]
                        ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)
                         (this + 0x6ef6c),uVar4);
      *(char *)(iVar2 + 0x32) = param_1;
    }
  }
  return;
}
```

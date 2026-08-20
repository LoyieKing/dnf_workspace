# calc_lev_stat

`_ZN5CUser13calc_lev_statER15_Additioal_info`

`CUser::calc_lev_stat(_Additioal_info&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08664ae8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08664ae8  _ZN5CUser13calc_lev_statER15_Additioal_info
#           CUser::calc_lev_stat(_Additioal_info&)
# range [0x08664ae8, 0x08664c4f]
08664ae8 +0x000:  push   %ebp
08664ae9 +0x001:  mov    %esp,%ebp
08664aeb +0x003:  push   %edi
08664aec +0x004:  push   %esi
08664aed +0x005:  push   %ebx
08664aee +0x006:  sub    $0x2c,%esp
08664af1 +0x009:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08664af6 +0x00e:  mov    0x14(%eax),%ebx
08664af9 +0x011:  mov    0x8(%ebp),%eax
08664afc +0x014:  mov    %eax,(%esp)
08664aff +0x017:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08664b04 +0x01c:  imul   $0x7dc,%eax,%eax
08664b0a +0x022:  lea    (%ebx,%eax,1),%eax
08664b0d +0x025:  mov    %eax,0x4(%esp)
08664b11 +0x029:  mov    0xc(%ebp),%eax
08664b14 +0x02c:  mov    %eax,(%esp)
08664b17 +0x02f:  call   08146300 <_GLOBAL__I__ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x1d>  ; global constructors keyed to global::tools::InitializeCharacStat::initCharacStat(_Additioal_info&, unsigned int, int, int, int, int)+0x1d
08664b1c +0x034:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08664b21 +0x039:  mov    0x14(%eax),%ebx
08664b24 +0x03c:  mov    0x8(%ebp),%eax
08664b27 +0x03f:  mov    %eax,(%esp)
08664b2a +0x042:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08664b2f +0x047:  imul   $0x7dc,%eax,%eax
08664b35 +0x04d:  lea    (%ebx,%eax,1),%eax
08664b38 +0x050:  movl   $0x0,0x8(%esp)
08664b40 +0x058:  movl   $0x0,0x4(%esp)
08664b48 +0x060:  mov    %eax,(%esp)
08664b4b +0x063:  call   0834883e <_ZNK10CCharacter17get_growtype_statEii>  ; CCharacter::get_growtype_stat(int, int) const
08664b50 +0x068:  mov    %eax,-0x28(%ebp)
08664b53 +0x06b:  mov    0x8(%ebp),%eax
08664b56 +0x06e:  mov    %eax,(%esp)
08664b59 +0x071:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
08664b5e +0x076:  movsbl %al,%ebx
08664b61 +0x079:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08664b66 +0x07e:  mov    0x14(%eax),%esi
08664b69 +0x081:  mov    0x8(%ebp),%eax
08664b6c +0x084:  mov    %eax,(%esp)
08664b6f +0x087:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08664b74 +0x08c:  imul   $0x7dc,%eax,%eax
08664b7a +0x092:  lea    (%esi,%eax,1),%eax
08664b7d +0x095:  movl   $0x0,0x8(%esp)
08664b85 +0x09d:  mov    %ebx,0x4(%esp)
08664b89 +0x0a1:  mov    %eax,(%esp)
08664b8c +0x0a4:  call   0834883e <_ZNK10CCharacter17get_growtype_statEii>  ; CCharacter::get_growtype_stat(int, int) const
08664b91 +0x0a9:  mov    %eax,-0x24(%ebp)
08664b94 +0x0ac:  mov    0x8(%ebp),%eax
08664b97 +0x0af:  mov    %eax,(%esp)
08664b9a +0x0b2:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
08664b9f +0x0b7:  movsbl %al,%esi
08664ba2 +0x0ba:  mov    0x8(%ebp),%eax
08664ba5 +0x0bd:  mov    %eax,(%esp)
08664ba8 +0x0c0:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
08664bad +0x0c5:  movsbl %al,%ebx
08664bb0 +0x0c8:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08664bb5 +0x0cd:  mov    0x14(%eax),%edi
08664bb8 +0x0d0:  mov    0x8(%ebp),%eax
08664bbb +0x0d3:  mov    %eax,(%esp)
08664bbe +0x0d6:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08664bc3 +0x0db:  imul   $0x7dc,%eax,%eax
08664bc9 +0x0e1:  lea    (%edi,%eax,1),%eax
08664bcc +0x0e4:  mov    %esi,0x8(%esp)
08664bd0 +0x0e8:  mov    %ebx,0x4(%esp)
08664bd4 +0x0ec:  mov    %eax,(%esp)
08664bd7 +0x0ef:  call   0834883e <_ZNK10CCharacter17get_growtype_statEii>  ; CCharacter::get_growtype_stat(int, int) const
08664bdc +0x0f4:  mov    %eax,-0x20(%ebp)
08664bdf +0x0f7:  movl   $0x1,-0x1c(%ebp)
08664be6 +0x0fe:  jmp    08664c32 <+0x14a>
08664be8 +0x100:  cmpl   $0xe,-0x1c(%ebp)
08664bec +0x104:  jg     08664c02 <+0x11a>
08664bee +0x106:  mov    -0x28(%ebp),%eax
08664bf1 +0x109:  mov    %eax,0x4(%esp)
08664bf5 +0x10d:  mov    0xc(%ebp),%eax
08664bf8 +0x110:  mov    %eax,(%esp)
08664bfb +0x113:  call   08146300 <_GLOBAL__I__ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x1d>  ; global constructors keyed to global::tools::InitializeCharacStat::initCharacStat(_Additioal_info&, unsigned int, int, int, int, int)+0x1d
08664c00 +0x118:  jmp    08664c2e <+0x146>
08664c02 +0x11a:  cmpl   $0x31,-0x1c(%ebp)
08664c06 +0x11e:  jg     08664c1c <+0x134>
08664c08 +0x120:  mov    -0x24(%ebp),%eax
08664c0b +0x123:  mov    %eax,0x4(%esp)
08664c0f +0x127:  mov    0xc(%ebp),%eax
08664c12 +0x12a:  mov    %eax,(%esp)
08664c15 +0x12d:  call   08146300 <_GLOBAL__I__ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x1d>  ; global constructors keyed to global::tools::InitializeCharacStat::initCharacStat(_Additioal_info&, unsigned int, int, int, int, int)+0x1d
08664c1a +0x132:  jmp    08664c2e <+0x146>
08664c1c +0x134:  mov    -0x20(%ebp),%eax
08664c1f +0x137:  mov    %eax,0x4(%esp)
08664c23 +0x13b:  mov    0xc(%ebp),%eax
08664c26 +0x13e:  mov    %eax,(%esp)
08664c29 +0x141:  call   08146300 <_GLOBAL__I__ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x1d>  ; global constructors keyed to global::tools::InitializeCharacStat::initCharacStat(_Additioal_info&, unsigned int, int, int, int, int)+0x1d
08664c2e +0x146:  addl   $0x1,-0x1c(%ebp)
08664c32 +0x14a:  mov    0x8(%ebp),%eax
08664c35 +0x14d:  mov    %eax,(%esp)
08664c38 +0x150:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08664c3d +0x155:  cmp    -0x1c(%ebp),%eax
08664c40 +0x158:  setg   %al
08664c43 +0x15b:  test   %al,%al
08664c45 +0x15d:  jne    08664be8 <+0x100>
08664c47 +0x15f:  add    $0x2c,%esp
08664c4a +0x162:  pop    %ebx
08664c4b +0x163:  pop    %esi
08664c4c +0x164:  pop    %edi
08664c4d +0x165:  pop    %ebp
08664c4e +0x166:  ret
08664c4f +0x167:  nop
```

## 反编译 C

```c
// CUser::calc_lev_stat @ 0x8664ae8

/* CUser::calc_lev_stat(_Additioal_info&) */

void __thiscall CUser::calc_lev_stat(CUser *this,_Additioal_info *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  _Additioal_info *p_Var5;
  _Additioal_info *p_Var6;
  _Additioal_info *p_Var7;
  undefined4 local_20;
  
  iVar3 = G_CDataManager();
  iVar3 = *(int *)(iVar3 + 0x14);
  iVar4 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
  _Additioal_info::add(param_1,(_Additioal_info *)(iVar3 + iVar4 * 0x7dc));
  iVar3 = G_CDataManager();
  iVar3 = *(int *)(iVar3 + 0x14);
  iVar4 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
  p_Var5 = (_Additioal_info *)
           CCharacter::get_growtype_stat((CCharacter *)(iVar3 + iVar4 * 0x7dc),0,0);
  cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)this);
  iVar3 = G_CDataManager();
  iVar3 = *(int *)(iVar3 + 0x14);
  iVar4 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
  p_Var6 = (_Additioal_info *)
           CCharacter::get_growtype_stat((CCharacter *)(iVar3 + iVar4 * 0x7dc),(int)cVar1,0);
  cVar1 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)this);
  cVar2 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)this);
  iVar3 = G_CDataManager();
  iVar3 = *(int *)(iVar3 + 0x14);
  iVar4 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
  p_Var7 = (_Additioal_info *)
           CCharacter::get_growtype_stat
                     ((CCharacter *)(iVar3 + iVar4 * 0x7dc),(int)cVar2,(int)cVar1);
  local_20 = 1;
  while( true ) {
    iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
    if (iVar3 <= local_20) break;
    if (local_20 < 0xf) {
      _Additioal_info::add(param_1,p_Var5);
    }
    else if (local_20 < 0x32) {
      _Additioal_info::add(param_1,p_Var6);
    }
    else {
      _Additioal_info::add(param_1,p_Var7);
    }
    local_20 = local_20 + 1;
  }
  return;
}
```

# _update_charac_stat

`_ZN5CUser19_update_charac_statEb`

`CUser::_update_charac_stat(bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086646c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086646c8  _ZN5CUser19_update_charac_statEb
#           CUser::_update_charac_stat(bool)
# range [0x086646c8, 0x08664765]
086646c8 +0x00:  push   %ebp
086646c9 +0x01:  mov    %esp,%ebp
086646cb +0x03:  push   %edi
086646cc +0x04:  push   %esi
086646cd +0x05:  push   %ebx
086646ce +0x06:  sub    $0x3c,%esp
086646d1 +0x09:  mov    0xc(%ebp),%eax
086646d4 +0x0c:  mov    %al,-0x2c(%ebp)
086646d7 +0x0f:  mov    0x8(%ebp),%eax
086646da +0x12:  mov    %eax,(%esp)
086646dd +0x15:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
086646e2 +0x1a:  movsbl %al,%esi
086646e5 +0x1d:  mov    0x8(%ebp),%eax
086646e8 +0x20:  mov    %eax,(%esp)
086646eb +0x23:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
086646f0 +0x28:  movsbl %al,%ebx
086646f3 +0x2b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086646f8 +0x30:  mov    0x14(%eax),%edi
086646fb +0x33:  mov    0x8(%ebp),%eax
086646fe +0x36:  mov    %eax,(%esp)
08664701 +0x39:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08664706 +0x3e:  imul   $0x7dc,%eax,%eax
0866470c +0x44:  lea    (%edi,%eax,1),%eax
0866470f +0x47:  mov    %esi,0x8(%esp)
08664713 +0x4b:  mov    %ebx,0x4(%esp)
08664717 +0x4f:  mov    %eax,(%esp)
0866471a +0x52:  call   0834883e <_ZNK10CCharacter17get_growtype_statEii>  ; CCharacter::get_growtype_stat(int, int) const
0866471f +0x57:  mov    %eax,-0x1c(%ebp)
08664722 +0x5a:  cmpb   $0x0,-0x2c(%ebp)
08664726 +0x5e:  je     08664744 <+0x7c>
08664728 +0x60:  mov    0x8(%ebp),%eax
0866472b +0x63:  mov    %eax,(%esp)
0866472e +0x66:  call   086960ba <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x290f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x290f
08664733 +0x6b:  mov    -0x1c(%ebp),%edx
08664736 +0x6e:  mov    %edx,0x4(%esp)
0866473a +0x72:  mov    %eax,(%esp)
0866473d +0x75:  call   08146300 <_GLOBAL__I__ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x1d>  ; global constructors keyed to global::tools::InitializeCharacStat::initCharacStat(_Additioal_info&, unsigned int, int, int, int, int)+0x1d
08664742 +0x7a:  jmp    0866475e <+0x96>
08664744 +0x7c:  mov    0x8(%ebp),%eax
08664747 +0x7f:  mov    %eax,(%esp)
0866474a +0x82:  call   086960ba <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x290f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x290f
0866474f +0x87:  mov    -0x1c(%ebp),%edx
08664752 +0x8a:  mov    %edx,0x4(%esp)
08664756 +0x8e:  mov    %eax,(%esp)
08664759 +0x91:  call   08693d04 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x559>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x559
0866475e +0x96:  add    $0x3c,%esp
08664761 +0x99:  pop    %ebx
08664762 +0x9a:  pop    %esi
08664763 +0x9b:  pop    %edi
08664764 +0x9c:  pop    %ebp
08664765 +0x9d:  ret
```

## 反编译 C

```c
// CUser::_update_charac_stat @ 0x86646c8

/* CUser::_update_charac_stat(bool) */

void __thiscall CUser::_update_charac_stat(CUser *this,bool param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  _Additioal_info *p_Var5;
  _Additioal_info *p_Var6;
  
  cVar1 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)this);
  cVar2 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)this);
  iVar3 = G_CDataManager();
  iVar3 = *(int *)(iVar3 + 0x14);
  iVar4 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
  p_Var5 = (_Additioal_info *)
           CCharacter::get_growtype_stat
                     ((CCharacter *)(iVar3 + iVar4 * 0x7dc),(int)cVar2,(int)cVar1);
  if (param_1) {
    p_Var6 = (_Additioal_info *)CUserCharacInfo::getCurCharacAddInfoW((CUserCharacInfo *)this);
    _Additioal_info::add(p_Var6,p_Var5);
  }
  else {
    p_Var6 = (_Additioal_info *)CUserCharacInfo::getCurCharacAddInfoW((CUserCharacInfo *)this);
    _Additioal_info::subtract(p_Var6,p_Var5);
  }
  return;
}
```

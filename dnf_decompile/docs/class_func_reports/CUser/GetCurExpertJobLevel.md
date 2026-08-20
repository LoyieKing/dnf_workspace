# GetCurExpertJobLevel

`_ZN5CUser20GetCurExpertJobLevelEi`

`CUser::GetCurExpertJobLevel(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868bc7c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868bc7c  _ZN5CUser20GetCurExpertJobLevelEi
#           CUser::GetCurExpertJobLevel(int)
# range [0x0868bc7c, 0x0868bdab]
0868bc7c +0x000:  push   %ebp
0868bc7d +0x001:  mov    %esp,%ebp
0868bc7f +0x003:  push   %ebx
0868bc80 +0x004:  sub    $0x34,%esp
0868bc83 +0x007:  mov    0x8(%ebp),%eax
0868bc86 +0x00a:  mov    %eax,(%esp)
0868bc89 +0x00d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0868bc8e +0x012:  test   %eax,%eax
0868bc90 +0x014:  sete   %al
0868bc93 +0x017:  test   %al,%al
0868bc95 +0x019:  je     0868bca1 <+0x25>
0868bc97 +0x01b:  mov    $0xffffffff,%eax
0868bc9c +0x020:  jmp    0868bda7 <+0x12b>
0868bca1 +0x025:  mov    0x8(%ebp),%eax
0868bca4 +0x028:  mov    %eax,(%esp)
0868bca7 +0x02b:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
0868bcac +0x030:  test   %eax,%eax
0868bcae +0x032:  sete   %al
0868bcb1 +0x035:  test   %al,%al
0868bcb3 +0x037:  je     0868bcbf <+0x43>
0868bcb5 +0x039:  mov    $0x0,%eax
0868bcba +0x03e:  jmp    0868bda7 <+0x12b>
0868bcbf +0x043:  mov    0x8(%ebp),%eax
0868bcc2 +0x046:  mov    %eax,(%esp)
0868bcc5 +0x049:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
0868bcca +0x04e:  mov    %eax,%ebx
0868bccc +0x050:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868bcd1 +0x055:  mov    %ebx,0x4(%esp)
0868bcd5 +0x059:  mov    %eax,(%esp)
0868bcd8 +0x05c:  call   0822b5f2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9c
0868bcdd +0x061:  mov    %eax,-0x18(%ebp)
0868bce0 +0x064:  mov    0xc(%ebp),%eax
0868bce3 +0x067:  mov    %eax,0x4(%esp)
0868bce7 +0x06b:  mov    -0x18(%ebp),%eax
0868bcea +0x06e:  mov    %eax,(%esp)
0868bced +0x071:  call   0849f420 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x251>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x251
0868bcf2 +0x076:  mov    %al,-0x11(%ebp)
0868bcf5 +0x079:  mov    0xc(%ebp),%eax
0868bcf8 +0x07c:  mov    %eax,0x4(%esp)
0868bcfc +0x080:  mov    -0x18(%ebp),%eax
0868bcff +0x083:  mov    %eax,(%esp)
0868bd02 +0x086:  call   08693ba0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3f5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3f5
0868bd07 +0x08b:  mov    %eax,-0x10(%ebp)
0868bd0a +0x08e:  cmpb   $0x0,-0x11(%ebp)
0868bd0e +0x092:  je     0868bda4 <+0x128>
0868bd14 +0x098:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868bd19 +0x09d:  mov    %eax,(%esp)
0868bd1c +0x0a0:  call   0849f516 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x347>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x347
0868bd21 +0x0a5:  mov    %eax,-0xc(%ebp)
0868bd24 +0x0a8:  mov    -0x10(%ebp),%eax
0868bd27 +0x0ab:  mov    %al,-0x1d(%ebp)
0868bd2a +0x0ae:  mov    -0xc(%ebp),%edx
0868bd2d +0x0b1:  lea    -0x24(%ebp),%eax
0868bd30 +0x0b4:  lea    -0x1d(%ebp),%ecx
0868bd33 +0x0b7:  mov    %ecx,0x8(%esp)
0868bd37 +0x0bb:  mov    %edx,0x4(%esp)
0868bd3b +0x0bf:  mov    %eax,(%esp)
0868bd3e +0x0c2:  call   0849fd46 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0xb77>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0xb77
0868bd43 +0x0c7:  sub    $0x4,%esp
0868bd46 +0x0ca:  mov    -0xc(%ebp),%edx
0868bd49 +0x0cd:  lea    -0x1c(%ebp),%eax
0868bd4c +0x0d0:  mov    %edx,0x4(%esp)
0868bd50 +0x0d4:  mov    %eax,(%esp)
0868bd53 +0x0d7:  call   08450180 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2d96>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2d96
0868bd58 +0x0dc:  sub    $0x4,%esp
0868bd5b +0x0df:  lea    -0x1c(%ebp),%eax
0868bd5e +0x0e2:  mov    %eax,0x4(%esp)
0868bd62 +0x0e6:  lea    -0x24(%ebp),%eax
0868bd65 +0x0e9:  mov    %eax,(%esp)
0868bd68 +0x0ec:  call   084501a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dbc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dbc
0868bd6d +0x0f1:  test   %al,%al
0868bd6f +0x0f3:  je     0868bd9c <+0x120>
0868bd71 +0x0f5:  lea    -0x24(%ebp),%eax
0868bd74 +0x0f8:  mov    %eax,(%esp)
0868bd77 +0x0fb:  call   084501ba <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dd0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dd0
0868bd7c +0x100:  movzwl 0x2(%eax),%eax
0868bd80 +0x104:  movswl %ax,%ebx
0868bd83 +0x107:  mov    0x8(%ebp),%eax
0868bd86 +0x10a:  mov    %eax,(%esp)
0868bd89 +0x10d:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0868bd8e +0x112:  cmp    %eax,%ebx
0868bd90 +0x114:  setle  %al
0868bd93 +0x117:  test   %al,%al
0868bd95 +0x119:  je     0868bd9c <+0x120>
0868bd97 +0x11b:  mov    -0x10(%ebp),%eax
0868bd9a +0x11e:  jmp    0868bda7 <+0x12b>
0868bd9c +0x120:  mov    -0x10(%ebp),%eax
0868bd9f +0x123:  sub    $0x1,%eax
0868bda2 +0x126:  jmp    0868bda7 <+0x12b>
0868bda4 +0x128:  mov    -0x10(%ebp),%eax
0868bda7 +0x12b:  mov    -0x4(%ebp),%ebx
0868bdaa +0x12e:  leave
0868bdab +0x12f:  ret
```

## 反编译 C

```c
// CUser::GetCurExpertJobLevel @ 0x868bc7c

/* CUser::GetCurExpertJobLevel(int) */

int __thiscall CUser::GetCurExpertJobLevel(CUser *this,int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  CDataManager *this_00;
  _Rb_tree_iterator<std::pair<unsigned_char_const,short>> local_28 [7];
  undefined1 local_21;
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_20 [4];
  STExpertJobScript *local_1c;
  char local_15;
  int local_14;
  undefined4 local_10;
  
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar3 == 0) {
    local_14 = -1;
  }
  else {
    iVar3 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)this);
    if (iVar3 == 0) {
      local_14 = 0;
    }
    else {
      CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)this);
      iVar3 = G_CDataManager();
      local_1c = (STExpertJobScript *)CDataManager::GetExpertJobScript(iVar3);
      local_15 = STExpertJobScript::isBoundaryExpValue(local_1c,param_1);
      local_14 = STExpertJobScript::GetLevel(local_1c,param_1);
      if (local_15 != '\0') {
        this_00 = (CDataManager *)G_CDataManager();
        local_10 = CDataManager::GetExpertJobEtcScript(this_00);
        local_21 = (undefined1)local_14;
        std::
        map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
        ::find((uchar *)local_28);
        std::
        map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
        ::end(local_20);
        cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator!=
                          (local_28,(_Rb_tree_iterator *)local_20);
        if (cVar2 != '\0') {
          iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->(local_28)
          ;
          sVar1 = *(short *)(iVar3 + 2);
          iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
          if (sVar1 <= iVar3) {
            return local_14;
          }
        }
        local_14 = local_14 + -1;
      }
    }
  }
  return local_14;
}
```

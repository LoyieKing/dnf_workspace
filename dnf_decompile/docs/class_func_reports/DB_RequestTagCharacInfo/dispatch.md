# dispatch

`_ZN23DB_RequestTagCharacInfo8dispatchEiiP6Stream`

`DB_RequestTagCharacInfo::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_RequestTagCharacInfo` | `0x0844768c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844768c  _ZN23DB_RequestTagCharacInfo8dispatchEiiP6Stream
#           DB_RequestTagCharacInfo::dispatch(int, int, Stream*)
# range [0x0844768c, 0x084478a5]
0844768c +0x000:  push   %ebp
0844768d +0x001:  mov    %esp,%ebp
0844768f +0x003:  push   %esi
08447690 +0x004:  push   %ebx
08447691 +0x005:  sub    $0x70,%esp
08447694 +0x008:  mov    0x14(%ebp),%eax
08447697 +0x00b:  mov    %eax,(%esp)
0844769a +0x00e:  call   08454514 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x712a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x712a
0844769f +0x013:  mov    %eax,-0x10(%ebp)
084476a2 +0x016:  mov    -0x10(%ebp),%eax
084476a5 +0x019:  lea    0x5(%eax),%edx
084476a8 +0x01c:  mov    -0x10(%ebp),%eax
084476ab +0x01f:  mov    (%eax),%eax
084476ad +0x021:  mov    %edx,0x4(%esp)
084476b1 +0x025:  mov    %eax,(%esp)
084476b4 +0x028:  call   08409fa6 <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA>  ; DB_LoadCharac::_GetTagCharacInfo(unsigned int, TAG_CHARAC_DATA*)
084476b9 +0x02d:  mov    %al,-0x9(%ebp)
084476bc +0x030:  movzbl -0x9(%ebp),%eax
084476c0 +0x034:  xor    $0x1,%eax
084476c3 +0x037:  test   %al,%al
084476c5 +0x039:  je     08447710 <+0x84>
084476c7 +0x03b:  mov    -0x10(%ebp),%eax
084476ca +0x03e:  mov    (%eax),%ebx
084476cc +0x040:  movl   $0x5,0xc(%esp)
084476d4 +0x048:  movl   $0xb21b,0x8(%esp)
084476dc +0x050:  movl   $&_ZZN23DB_RequestTagCharacInfo8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
084476e4 +0x058:  lea    -0x50(%ebp),%eax
084476e7 +0x05b:  mov    %eax,(%esp)
084476ea +0x05e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084476ef +0x063:  mov    %ebx,0x8(%esp)
084476f3 +0x067:  movl   $"DB_RequestTagChracInfo::_GetTagCharacInfo fail, characNo(%d)",0x4(%esp)
084476fb +0x06f:  lea    -0x50(%ebp),%eax
084476fe +0x072:  mov    %eax,(%esp)
08447701 +0x075:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08447706 +0x07a:  mov    $0x0,%eax
0844770b +0x07f:  jmp    0844789f <+0x213>
08447710 +0x084:  mov    -0x10(%ebp),%eax
08447713 +0x087:  lea    0x7d(%eax),%edx
08447716 +0x08a:  mov    -0x10(%ebp),%eax
08447719 +0x08d:  mov    (%eax),%eax
0844771b +0x08f:  mov    %edx,0x4(%esp)
0844771f +0x093:  mov    %eax,(%esp)
08447722 +0x096:  call   0840aba2 <_ZN16DB_LoadInventory18_GetTagCharacInvenEjP21TAG_CHARAC_INVEN_DATA>  ; DB_LoadInventory::_GetTagCharacInven(unsigned int, TAG_CHARAC_INVEN_DATA*)
08447727 +0x09b:  mov    %al,-0x9(%ebp)
0844772a +0x09e:  movzbl -0x9(%ebp),%eax
0844772e +0x0a2:  xor    $0x1,%eax
08447731 +0x0a5:  test   %al,%al
08447733 +0x0a7:  je     0844777e <+0xf2>
08447735 +0x0a9:  mov    -0x10(%ebp),%eax
08447738 +0x0ac:  mov    (%eax),%ebx
0844773a +0x0ae:  movl   $0x5,0xc(%esp)
08447742 +0x0b6:  movl   $0xb223,0x8(%esp)
0844774a +0x0be:  movl   $&_ZZN23DB_RequestTagCharacInfo8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08447752 +0x0c6:  lea    -0x40(%ebp),%eax
08447755 +0x0c9:  mov    %eax,(%esp)
08447758 +0x0cc:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0844775d +0x0d1:  mov    %ebx,0x8(%esp)
08447761 +0x0d5:  movl   $"DB_RequestTagChracInfo::_GetTagCharacInven fail, characNo(%d)",0x4(%esp)
08447769 +0x0dd:  lea    -0x40(%ebp),%eax
0844776c +0x0e0:  mov    %eax,(%esp)
0844776f +0x0e3:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08447774 +0x0e8:  mov    $0x0,%eax
08447779 +0x0ed:  jmp    0844789f <+0x213>
0844777e +0x0f2:  mov    -0x10(%ebp),%eax
08447781 +0x0f5:  lea    0x1ec0(%eax),%esi
08447787 +0x0fb:  mov    -0x10(%ebp),%eax
0844778a +0x0fe:  lea    0x7d(%eax),%ebx
0844778d +0x101:  mov    -0x10(%ebp),%eax
08447790 +0x104:  lea    0x5bb(%eax),%ecx
08447796 +0x10a:  mov    -0x10(%ebp),%eax
08447799 +0x10d:  lea    0x1ec4(%eax),%edx
0844779f +0x113:  mov    -0x10(%ebp),%eax
084477a2 +0x116:  mov    (%eax),%eax
084477a4 +0x118:  mov    %esi,0x10(%esp)
084477a8 +0x11c:  mov    %ebx,0xc(%esp)
084477ac +0x120:  mov    %ecx,0x8(%esp)
084477b0 +0x124:  mov    %edx,0x4(%esp)
084477b4 +0x128:  mov    %eax,(%esp)
084477b7 +0x12b:  call   0840be8a <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri>  ; DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)
084477bc +0x130:  mov    %al,-0x9(%ebp)
084477bf +0x133:  movzbl -0x9(%ebp),%eax
084477c3 +0x137:  xor    $0x1,%eax
084477c6 +0x13a:  test   %al,%al
084477c8 +0x13c:  je     08447813 <+0x187>
084477ca +0x13e:  mov    -0x10(%ebp),%eax
084477cd +0x141:  mov    (%eax),%ebx
084477cf +0x143:  movl   $0x5,0xc(%esp)
084477d7 +0x14b:  movl   $0xb22c,0x8(%esp)
084477df +0x153:  movl   $&_ZZN23DB_RequestTagCharacInfo8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
084477e7 +0x15b:  lea    -0x30(%ebp),%eax
084477ea +0x15e:  mov    %eax,(%esp)
084477ed +0x161:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084477f2 +0x166:  mov    %ebx,0x8(%esp)
084477f6 +0x16a:  movl   $"DB_RequestTagCharacInfo::_GetUserAvatar fail, characNo(%d)",0x4(%esp)
084477fe +0x172:  lea    -0x30(%ebp),%eax
08447801 +0x175:  mov    %eax,(%esp)
08447804 +0x178:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08447809 +0x17d:  mov    $0x0,%eax
0844780e +0x182:  jmp    0844789f <+0x213>
08447813 +0x187:  mov    -0x10(%ebp),%eax
08447816 +0x18a:  lea    0x40a1(%eax),%edx
0844781c +0x190:  mov    -0x10(%ebp),%eax
0844781f +0x193:  mov    (%eax),%eax
08447821 +0x195:  mov    %edx,0x4(%esp)
08447825 +0x199:  mov    %eax,(%esp)
08447828 +0x19c:  call   08404b72 <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA>  ; DB_LoadEtc::_LoadQuestShop(unsigned int, CHARAC_QUEST_SHOP_DATA*)
0844782d +0x1a1:  mov    %al,-0x9(%ebp)
08447830 +0x1a4:  movzbl -0x9(%ebp),%eax
08447834 +0x1a8:  xor    $0x1,%eax
08447837 +0x1ab:  test   %al,%al
08447839 +0x1ad:  je     08447881 <+0x1f5>
0844783b +0x1af:  mov    -0x10(%ebp),%eax
0844783e +0x1b2:  mov    (%eax),%ebx
08447840 +0x1b4:  movl   $0x5,0xc(%esp)
08447848 +0x1bc:  movl   $0xb234,0x8(%esp)
08447850 +0x1c4:  movl   $&_ZZN23DB_RequestTagCharacInfo8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08447858 +0x1cc:  lea    -0x20(%ebp),%eax
0844785b +0x1cf:  mov    %eax,(%esp)
0844785e +0x1d2:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08447863 +0x1d7:  mov    %ebx,0x8(%esp)
08447867 +0x1db:  movl   $"DB_RequestTagCharacInfo::_LoadQuestShop fail, characNo(%d)",0x4(%esp)
0844786f +0x1e3:  lea    -0x20(%ebp),%eax
08447872 +0x1e6:  mov    %eax,(%esp)
08447875 +0x1e9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0844787a +0x1ee:  mov    $0x0,%eax
0844787f +0x1f3:  jmp    0844789f <+0x213>
08447881 +0x1f5:  mov    -0x10(%ebp),%eax
08447884 +0x1f8:  mov    %eax,0x8(%esp)
08447888 +0x1fc:  mov    0x10(%ebp),%eax
0844788b +0x1ff:  mov    %eax,0x4(%esp)
0844788f +0x203:  mov    0x8(%ebp),%eax
08447892 +0x206:  mov    %eax,(%esp)
08447895 +0x209:  call   084478a6 <_ZN23DB_RequestTagCharacInfo10sendResultEiP27SIG_REQUEST_TAG_CHARAC_INFO>  ; DB_RequestTagCharacInfo::sendResult(int, SIG_REQUEST_TAG_CHARAC_INFO*)
0844789a +0x20e:  mov    $0x1,%eax
0844789f +0x213:  add    $0x70,%esp
084478a2 +0x216:  pop    %ebx
084478a3 +0x217:  pop    %esi
084478a4 +0x218:  pop    %ebp
084478a5 +0x219:  ret
```

## 反编译 C

```c
// DB_RequestTagCharacInfo::dispatch @ 0x844768c

/* DB_RequestTagCharacInfo::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_RequestTagCharacInfo::dispatch
          (DB_RequestTagCharacInfo *this,int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  SIG_REQUEST_TAG_CHARAC_INFO *local_14;
  char local_d;
  
  local_14 = Stream::GetOutBuffer<SIG_REQUEST_TAG_CHARAC_INFO>(param_3);
  local_d = DB_LoadCharac::_GetTagCharacInfo(*(uint *)local_14,(TAG_CHARAC_DATA *)(local_14 + 5));
  if (local_d == '\x01') {
    local_d = DB_LoadInventory::_GetTagCharacInven
                        (*(uint *)local_14,(TAG_CHARAC_INVEN_DATA *)(local_14 + 0x7d));
    if (local_d == '\x01') {
      local_d = DB_LoadInventory::_GetUserAvatar
                          (*(uint *)local_14,(AvatarDetailInfo *)(local_14 + 0x1ec4),
                           (Inven_Item *)(local_14 + 0x5bb),(Inven_Item *)(local_14 + 0x7d),
                           (int *)(local_14 + 0x1ec0));
      if (local_d == '\x01') {
        local_d = DB_LoadEtc::_LoadQuestShop
                            (*(uint *)local_14,(CHARAC_QUEST_SHOP_DATA *)(local_14 + 0x40a1));
        if (local_d == '\x01') {
          sendResult(this,param_2,local_14);
          uVar2 = 1;
        }
        else {
          uVar2 = *(undefined4 *)local_14;
          cMyTrace::cMyTrace(local_24,
                             "virtual bool DB_RequestTagCharacInfo::dispatch(int, int, Stream*)",
                             0xb234,5);
          cMyTrace::operator()
                    (local_24,"DB_RequestTagCharacInfo::_LoadQuestShop fail, characNo(%d)",uVar2);
          uVar2 = 0;
        }
      }
      else {
        uVar1 = *(uint *)local_14;
        cMyTrace::cMyTrace(local_34,
                           "virtual bool DB_RequestTagCharacInfo::dispatch(int, int, Stream*)",
                           0xb22c,5);
        cMyTrace::operator()
                  (local_34,"DB_RequestTagCharacInfo::_GetUserAvatar fail, characNo(%d)",uVar1);
        uVar2 = 0;
      }
    }
    else {
      uVar1 = *(uint *)local_14;
      cMyTrace::cMyTrace(local_44,
                         "virtual bool DB_RequestTagCharacInfo::dispatch(int, int, Stream*)",0xb223,
                         5);
      cMyTrace::operator()
                (local_44,"DB_RequestTagChracInfo::_GetTagCharacInven fail, characNo(%d)",uVar1);
      uVar2 = 0;
    }
  }
  else {
    uVar1 = *(uint *)local_14;
    cMyTrace::cMyTrace(local_54,"virtual bool DB_RequestTagCharacInfo::dispatch(int, int, Stream*)",
                       0xb21b,5);
    cMyTrace::operator()
              (local_54,"DB_RequestTagChracInfo::_GetTagCharacInfo fail, characNo(%d)",uVar1);
    uVar2 = 0;
  }
  return uVar2;
}
```

# log_booster_gage_bonus_reward

`_ZN12CBoosterGage29log_booster_gage_bonus_rewardEP5CUserRKSt6vectorISt4pairI10Inven_ItembESaIS5_EE`

`CBoosterGage::log_booster_gage_bonus_reward(CUser*, std::vector<std::pair<Inven_Item, bool>, std::allocator<std::pair<Inven_Item, bool> > > const&)`

| 类 | 地址 |
|---|---|
| `CBoosterGage` | `0x080dc9ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080dc9ca  _ZN12CBoosterGage29log_booster_gage_bonus_rewardEP5CUserRKSt6vectorISt4pairI10Inven_ItembESaIS5_EE
#           CBoosterGage::log_booster_gage_bonus_reward(CUser*, std::vector<std::pair<Inven_Item, bool>, std::allocator<std::pair<Inven_Item, bool> > > const&)
# range [0x080dc9ca, 0x080dcbd5]
080dc9ca +0x000:  push   %ebp
080dc9cb +0x001:  mov    %esp,%ebp
080dc9cd +0x003:  push   %edi
080dc9ce +0x004:  push   %esi
080dc9cf +0x005:  push   %ebx
080dc9d0 +0x006:  sub    $0x17c,%esp
080dc9d6 +0x00c:  lea    -0x34(%ebp),%eax
080dc9d9 +0x00f:  mov    %eax,(%esp)
080dc9dc +0x012:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
080dc9e1 +0x017:  lea    -0x34(%ebp),%eax
080dc9e4 +0x01a:  mov    %eax,(%esp)
080dc9e7 +0x01d:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
080dc9ec +0x022:  lea    -0x38(%ebp),%eax
080dc9ef +0x025:  mov    0x10(%ebp),%edx
080dc9f2 +0x028:  mov    %edx,0x4(%esp)
080dc9f6 +0x02c:  mov    %eax,(%esp)
080dc9f9 +0x02f:  call   080dd6d8 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x221>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x221
080dc9fe +0x034:  sub    $0x4,%esp
080dca01 +0x037:  jmp    080dcb1c <+0x152>
080dca06 +0x03c:  lea    -0x38(%ebp),%eax
080dca09 +0x03f:  mov    %eax,(%esp)
080dca0c +0x042:  call   080dd75c <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x2a5>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x2a5
080dca11 +0x047:  mov    (%eax),%edx
080dca13 +0x049:  mov    %edx,-0x76(%ebp)
080dca16 +0x04c:  mov    0x4(%eax),%edx
080dca19 +0x04f:  mov    %edx,-0x72(%ebp)
080dca1c +0x052:  mov    0x8(%eax),%edx
080dca1f +0x055:  mov    %edx,-0x6e(%ebp)
080dca22 +0x058:  mov    0xc(%eax),%edx
080dca25 +0x05b:  mov    %edx,-0x6a(%ebp)
080dca28 +0x05e:  mov    0x10(%eax),%edx
080dca2b +0x061:  mov    %edx,-0x66(%ebp)
080dca2e +0x064:  mov    0x14(%eax),%edx
080dca31 +0x067:  mov    %edx,-0x62(%ebp)
080dca34 +0x06a:  mov    0x18(%eax),%edx
080dca37 +0x06d:  mov    %edx,-0x5e(%ebp)
080dca3a +0x070:  mov    0x1c(%eax),%edx
080dca3d +0x073:  mov    %edx,-0x5a(%ebp)
080dca40 +0x076:  mov    0x20(%eax),%edx
080dca43 +0x079:  mov    %edx,-0x56(%ebp)
080dca46 +0x07c:  mov    0x24(%eax),%edx
080dca49 +0x07f:  mov    %edx,-0x52(%ebp)
080dca4c +0x082:  mov    0x28(%eax),%edx
080dca4f +0x085:  mov    %edx,-0x4e(%ebp)
080dca52 +0x088:  mov    0x2c(%eax),%edx
080dca55 +0x08b:  mov    %edx,-0x4a(%ebp)
080dca58 +0x08e:  mov    0x30(%eax),%edx
080dca5b +0x091:  mov    %edx,-0x46(%ebp)
080dca5e +0x094:  mov    0x34(%eax),%edx
080dca61 +0x097:  mov    %edx,-0x42(%ebp)
080dca64 +0x09a:  mov    0x38(%eax),%edx
080dca67 +0x09d:  mov    %edx,-0x3e(%ebp)
080dca6a +0x0a0:  movzwl 0x3c(%eax),%eax
080dca6e +0x0a4:  mov    %ax,-0x3a(%ebp)
080dca72 +0x0a8:  lea    -0x175(%ebp),%edx
080dca78 +0x0ae:  mov    $0xff,%ebx
080dca7d +0x0b3:  mov    $0x0,%eax
080dca82 +0x0b8:  mov    %edx,%ecx
080dca84 +0x0ba:  and    $0x1,%ecx
080dca87 +0x0bd:  test   %ecx,%ecx
080dca89 +0x0bf:  je     080dca93 <+0xc9>
080dca8b +0x0c1:  mov    %al,(%edx)
080dca8d +0x0c3:  add    $0x1,%edx
080dca90 +0x0c6:  sub    $0x1,%ebx
080dca93 +0x0c9:  mov    %edx,%ecx
080dca95 +0x0cb:  and    $0x2,%ecx
080dca98 +0x0ce:  test   %ecx,%ecx
080dca9a +0x0d0:  je     080dcaa5 <+0xdb>
080dca9c +0x0d2:  mov    %ax,(%edx)
080dca9f +0x0d5:  add    $0x2,%edx
080dcaa2 +0x0d8:  sub    $0x2,%ebx
080dcaa5 +0x0db:  mov    %ebx,%ecx
080dcaa7 +0x0dd:  shr    $0x2,%ecx
080dcaaa +0x0e0:  mov    %edx,%edi
080dcaac +0x0e2:  rep stos %eax,%es:(%edi)
080dcaae +0x0e4:  mov    %edi,%edx
080dcab0 +0x0e6:  mov    %ebx,%ecx
080dcab2 +0x0e8:  and    $0x2,%ecx
080dcab5 +0x0eb:  test   %ecx,%ecx
080dcab7 +0x0ed:  je     080dcabf <+0xf5>
080dcab9 +0x0ef:  mov    %ax,(%edx)
080dcabc +0x0f2:  add    $0x2,%edx
080dcabf +0x0f5:  mov    %ebx,%ecx
080dcac1 +0x0f7:  and    $0x1,%ecx
080dcac4 +0x0fa:  test   %ecx,%ecx
080dcac6 +0x0fc:  je     080dcacd <+0x103>
080dcac8 +0x0fe:  mov    %al,(%edx)
080dcaca +0x100:  add    $0x1,%edx
080dcacd +0x103:  mov    -0x74(%ebp),%eax
080dcad0 +0x106:  mov    %eax,0x8(%esp)
080dcad4 +0x10a:  movl   $"%d ",0x4(%esp)
080dcadc +0x112:  lea    -0x175(%ebp),%eax
080dcae2 +0x118:  mov    %eax,(%esp)
080dcae5 +0x11b:  call   0807e440 <_init+0xd38>
080dcaea +0x120:  lea    -0x175(%ebp),%eax
080dcaf0 +0x126:  mov    %eax,0x4(%esp)
080dcaf4 +0x12a:  lea    -0x34(%ebp),%eax
080dcaf7 +0x12d:  mov    %eax,(%esp)
080dcafa +0x130:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
080dcaff +0x135:  lea    -0x2c(%ebp),%eax
080dcb02 +0x138:  movl   $0x0,0x8(%esp)
080dcb0a +0x140:  lea    -0x38(%ebp),%edx
080dcb0d +0x143:  mov    %edx,0x4(%esp)
080dcb11 +0x147:  mov    %eax,(%esp)
080dcb14 +0x14a:  call   080dd766 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x2af>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x2af
080dcb19 +0x14f:  sub    $0x4,%esp
080dcb1c +0x152:  lea    -0x30(%ebp),%eax
080dcb1f +0x155:  mov    0x10(%ebp),%edx
080dcb22 +0x158:  mov    %edx,0x4(%esp)
080dcb26 +0x15c:  mov    %eax,(%esp)
080dcb29 +0x15f:  call   080dd704 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x24d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x24d
080dcb2e +0x164:  sub    $0x4,%esp
080dcb31 +0x167:  lea    -0x30(%ebp),%eax
080dcb34 +0x16a:  mov    %eax,0x4(%esp)
080dcb38 +0x16e:  lea    -0x38(%ebp),%eax
080dcb3b +0x171:  mov    %eax,(%esp)
080dcb3e +0x174:  call   080dd730 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x279>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x279
080dcb43 +0x179:  test   %al,%al
080dcb45 +0x17b:  jne    080dca06 <+0x3c>
080dcb4b +0x181:  mov    0xc(%ebp),%eax
080dcb4e +0x184:  mov    %eax,(%esp)
080dcb51 +0x187:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
080dcb56 +0x18c:  mov    %eax,%esi
080dcb58 +0x18e:  lea    -0x34(%ebp),%eax
080dcb5b +0x191:  mov    %eax,(%esp)
080dcb5e +0x194:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
080dcb63 +0x199:  mov    %eax,%ebx
080dcb65 +0x19b:  movl   $0x0,0xc(%esp)
080dcb6d +0x1a3:  movl   $0x7c,0x8(%esp)
080dcb75 +0x1ab:  movl   $&_ZZN12CBoosterGage29log_booster_gage_bonus_rewardEP5CUserRKSt6vectorISt4pairI10Inven_ItembESaIS5_EEE19__PRETTY_FUNCTION__,0x4(%esp)
080dcb7d +0x1b3:  lea    -0x28(%ebp),%eax
080dcb80 +0x1b6:  mov    %eax,(%esp)
080dcb83 +0x1b9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
080dcb88 +0x1be:  mov    %esi,0xc(%esp)
080dcb8c +0x1c2:  mov    %ebx,0x8(%esp)
080dcb90 +0x1c6:  movl   $"BOOSTER_GAGE : REWARD ITEM (%s) x 2 : CHARAC_NO (%u)",0x4(%esp)
080dcb98 +0x1ce:  lea    -0x28(%ebp),%eax
080dcb9b +0x1d1:  mov    %eax,(%esp)
080dcb9e +0x1d4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
080dcba3 +0x1d9:  jmp    080dcbc0 <+0x1f6>
080dcba5 +0x1db:  mov    %edx,%ebx
080dcba7 +0x1dd:  mov    %eax,%esi
080dcba9 +0x1df:  lea    -0x34(%ebp),%eax
080dcbac +0x1e2:  mov    %eax,(%esp)
080dcbaf +0x1e5:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
080dcbb4 +0x1ea:  mov    %esi,%eax
080dcbb6 +0x1ec:  mov    %ebx,%edx
080dcbb8 +0x1ee:  mov    %eax,(%esp)
080dcbbb +0x1f1:  call   08ae3750 <_Unwind_Resume>
080dcbc0 +0x1f6:  lea    -0x34(%ebp),%eax
080dcbc3 +0x1f9:  mov    %eax,(%esp)
080dcbc6 +0x1fc:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
080dcbcb +0x201:  lea    -0xc(%ebp),%esp
080dcbce +0x204:  add    $0x0,%esp
080dcbd1 +0x207:  pop    %ebx
080dcbd2 +0x208:  pop    %esi
080dcbd3 +0x209:  pop    %edi
080dcbd4 +0x20a:  pop    %ebp
080dcbd5 +0x20b:  ret
```

## 反编译 C

```c
// CBoosterGage::log_booster_gage_bonus_reward @ 0x80dc9ca

/* CBoosterGage::log_booster_gage_bonus_reward(CUser*, std::vector<std::pair<Inven_Item, bool>,
   std::allocator<std::pair<Inven_Item, bool> > > const&) */

void CBoosterGage::log_booster_gage_bonus_reward(CUser *param_1,vector *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  byte bVar8;
  char local_179;
  char local_178 [254];
  undefined2 local_7a;
  undefined2 uStack_78;
  undefined2 local_76;
  undefined2 uStack_74;
  undefined4 local_72;
  undefined4 local_6e;
  undefined4 local_6a;
  undefined4 local_66;
  undefined4 local_62;
  undefined4 local_5e;
  undefined4 local_5a;
  undefined4 local_56;
  undefined4 local_52;
  undefined4 local_4e;
  undefined4 local_4a;
  undefined4 local_46;
  undefined4 local_42;
  undefined2 local_3e;
  __normal_iterator<std::pair<Inven_Item,bool>const*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
  local_3c [4];
  string local_38 [4];
  __normal_iterator local_34 [4];
  __normal_iterator<std::pair<Inven_Item,bool>const*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
  local_30 [4];
  cMyTrace local_2c [28];
  
  bVar8 = 0;
  std::string::string(local_38);
                    /* try { // try from 080dc9e7 to 080dcba2 has its CatchHandler @ 080dcba5 */
  std::string::clear(local_38);
  std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::begin();
  while( true ) {
    std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::end();
    bVar1 = __gnu_cxx::operator!=(local_3c,local_34);
    if (!bVar1) break;
    puVar2 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<std::pair<Inven_Item,bool>const*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
             ::operator*(local_3c);
    local_7a = (undefined2)*puVar2;
    uStack_78 = (undefined2)((uint)*puVar2 >> 0x10);
    local_76 = (undefined2)puVar2[1];
    uStack_74 = (undefined2)((uint)puVar2[1] >> 0x10);
    local_72 = puVar2[2];
    local_6e = puVar2[3];
    local_6a = puVar2[4];
    local_66 = puVar2[5];
    local_62 = puVar2[6];
    local_5e = puVar2[7];
    local_5a = puVar2[8];
    local_56 = puVar2[9];
    local_52 = puVar2[10];
    local_4e = puVar2[0xb];
    local_4a = puVar2[0xc];
    local_46 = puVar2[0xd];
    local_42 = puVar2[0xe];
    local_3e = *(undefined2 *)(puVar2 + 0xf);
    pcVar6 = &local_179;
    uVar7 = 0xff;
    bVar1 = ((uint)pcVar6 & 1) != 0;
    if (bVar1) {
      local_179 = '\0';
      pcVar6 = local_178;
      uVar7 = 0xfe;
    }
    if (((uint)pcVar6 & 2) != 0) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6 = pcVar6 + 2;
      uVar7 = uVar7 - 2;
    }
    for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6 = pcVar6 + ((uint)bVar8 * -2 + 1) * 4;
    }
    if ((uVar7 & 2) != 0) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6 = pcVar6 + 2;
    }
    if (!bVar1) {
      *pcVar6 = '\0';
    }
    sprintf(&local_179,"%d ",CONCAT22(local_76,uStack_78));
    std::string::operator+=(local_38,&local_179);
    __gnu_cxx::
    __normal_iterator<std::pair<Inven_Item,bool>const*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
    ::operator++(local_30,(int)local_3c);
  }
  uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
  uVar4 = std::string::c_str(local_38);
  cMyTrace::cMyTrace(local_2c,
                     "void CBoosterGage::log_booster_gage_bonus_reward(CUser*, const MULTIBOX_REWARD_LIST&)"
                     ,0x7c,0);
  cMyTrace::operator()(local_2c,"BOOSTER_GAGE : REWARD ITEM (%s) x 2 : CHARAC_NO (%u)",uVar4,uVar3);
  std::string::~string(local_38);
  return;
}
```

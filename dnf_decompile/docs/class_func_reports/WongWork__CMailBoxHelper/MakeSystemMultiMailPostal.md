# MakeSystemMultiMailPostal

`_ZN8WongWork14CMailBoxHelper25MakeSystemMultiMailPostalERSt6vectorISt4pairIiiESaIS3_EEP10Inven_Itemj`

`WongWork::CMailBoxHelper::MakeSystemMultiMailPostal(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, Inven_Item*, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBoxHelper` | `0x08556a14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08556a14  _ZN8WongWork14CMailBoxHelper25MakeSystemMultiMailPostalERSt6vectorISt4pairIiiESaIS3_EEP10Inven_Itemj
#           WongWork::CMailBoxHelper::MakeSystemMultiMailPostal(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, Inven_Item*, unsigned int)
# range [0x08556a14, 0x08556b67]
08556a14 +0x000:  push   %ebp
08556a15 +0x001:  mov    %esp,%ebp
08556a17 +0x003:  push   %ebx
08556a18 +0x004:  sub    $0x74,%esp
08556a1b +0x007:  mov    0x8(%ebp),%eax
08556a1e +0x00a:  mov    %eax,(%esp)
08556a21 +0x00d:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08556a26 +0x012:  cmp    $0xa,%eax
08556a29 +0x015:  ja     08556a3a <+0x26>
08556a2b +0x017:  mov    0x8(%ebp),%eax
08556a2e +0x01a:  mov    %eax,(%esp)
08556a31 +0x01d:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08556a36 +0x022:  test   %eax,%eax
08556a38 +0x024:  jne    08556a41 <+0x2d>
08556a3a +0x026:  mov    $0x1,%eax
08556a3f +0x02b:  jmp    08556a46 <+0x32>
08556a41 +0x02d:  mov    $0x0,%eax
08556a46 +0x032:  test   %al,%al
08556a48 +0x034:  je     08556a54 <+0x40>
08556a4a +0x036:  mov    $0x0,%eax
08556a4f +0x03b:  jmp    08556b63 <+0x14f>
08556a54 +0x040:  movl   $0x0,-0xc(%ebp)
08556a5b +0x047:  lea    -0x18(%ebp),%eax
08556a5e +0x04a:  mov    0x8(%ebp),%edx
08556a61 +0x04d:  mov    %edx,0x4(%esp)
08556a65 +0x051:  mov    %eax,(%esp)
08556a68 +0x054:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
08556a6d +0x059:  sub    $0x4,%esp
08556a70 +0x05c:  lea    -0x18(%ebp),%eax
08556a73 +0x05f:  mov    %eax,0x4(%esp)
08556a77 +0x063:  lea    -0x1c(%ebp),%eax
08556a7a +0x066:  mov    %eax,(%esp)
08556a7d +0x069:  call   08387922 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x173c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x173c2
08556a82 +0x06e:  jmp    08556b17 <+0x103>
08556a87 +0x073:  lea    -0x59(%ebp),%eax
08556a8a +0x076:  mov    %eax,(%esp)
08556a8d +0x079:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08556a92 +0x07e:  lea    -0x59(%ebp),%eax
08556a95 +0x081:  mov    %eax,(%esp)
08556a98 +0x084:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
08556a9d +0x089:  lea    -0x1c(%ebp),%eax
08556aa0 +0x08c:  mov    %eax,(%esp)
08556aa3 +0x08f:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
08556aa8 +0x094:  mov    (%eax),%eax
08556aaa +0x096:  mov    %eax,-0x57(%ebp)
08556aad +0x099:  lea    -0x1c(%ebp),%eax
08556ab0 +0x09c:  mov    %eax,(%esp)
08556ab3 +0x09f:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
08556ab8 +0x0a4:  mov    0x4(%eax),%ebx
08556abb +0x0a7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08556ac0 +0x0ac:  mov    0xc(%eax),%eax
08556ac3 +0x0af:  mov    %ebx,0xc(%esp)
08556ac7 +0x0b3:  lea    -0x59(%ebp),%edx
08556aca +0x0b6:  mov    %edx,0x8(%esp)
08556ace +0x0ba:  movl   $0x0,0x4(%esp)
08556ad6 +0x0c2:  mov    %eax,(%esp)
08556ad9 +0x0c5:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
08556ade +0x0ca:  mov    -0xc(%ebp),%eax
08556ae1 +0x0cd:  imul   $0x3d,%eax,%eax
08556ae4 +0x0d0:  add    0xc(%ebp),%eax
08556ae7 +0x0d3:  lea    -0x59(%ebp),%edx
08556aea +0x0d6:  mov    %edx,0x4(%esp)
08556aee +0x0da:  mov    %eax,(%esp)
08556af1 +0x0dd:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
08556af6 +0x0e2:  addl   $0x1,-0xc(%ebp)
08556afa +0x0e6:  lea    -0x10(%ebp),%eax
08556afd +0x0e9:  movl   $0x0,0x8(%esp)
08556b05 +0x0f1:  lea    -0x1c(%ebp),%edx
08556b08 +0x0f4:  mov    %edx,0x4(%esp)
08556b0c +0x0f8:  mov    %eax,(%esp)
08556b0f +0x0fb:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
08556b14 +0x100:  sub    $0x4,%esp
08556b17 +0x103:  lea    -0x14(%ebp),%eax
08556b1a +0x106:  mov    0x8(%ebp),%edx
08556b1d +0x109:  mov    %edx,0x4(%esp)
08556b21 +0x10d:  mov    %eax,(%esp)
08556b24 +0x110:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
08556b29 +0x115:  sub    $0x4,%esp
08556b2c +0x118:  lea    -0x14(%ebp),%eax
08556b2f +0x11b:  mov    %eax,0x4(%esp)
08556b33 +0x11f:  lea    -0x1c(%ebp),%eax
08556b36 +0x122:  mov    %eax,(%esp)
08556b39 +0x125:  call   0838793c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x173dc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x173dc
08556b3e +0x12a:  test   %al,%al
08556b40 +0x12c:  je     08556b51 <+0x13d>
08556b42 +0x12e:  mov    -0xc(%ebp),%eax
08556b45 +0x131:  cmp    0x10(%ebp),%eax
08556b48 +0x134:  jae    08556b51 <+0x13d>
08556b4a +0x136:  mov    $0x1,%eax
08556b4f +0x13b:  jmp    08556b56 <+0x142>
08556b51 +0x13d:  mov    $0x0,%eax
08556b56 +0x142:  test   %al,%al
08556b58 +0x144:  jne    08556a87 <+0x73>
08556b5e +0x14a:  mov    $0x1,%eax
08556b63 +0x14f:  mov    -0x4(%ebp),%ebx
08556b66 +0x152:  leave
08556b67 +0x153:  ret
```

## 反编译 C

```c
// WongWork::CMailBoxHelper::MakeSystemMultiMailPostal @ 0x8556a14

/* WongWork::CMailBoxHelper::MakeSystemMultiMailPostal(std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > >&, Inven_Item*, unsigned int) */

undefined4
WongWork::CMailBoxHelper::MakeSystemMultiMailPostal
          (vector *param_1,Inven_Item *param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  Inven_Item local_5d [2];
  undefined4 local_5b;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_20 [4];
  __normal_iterator local_1c [4];
  __normal_iterator local_18 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_14 [4];
  uint local_10;
  
  uVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1);
  if (uVar2 < 0xb) {
    iVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_08556a46;
    }
  }
  bVar1 = true;
LAB_08556a46:
  if (bVar1) {
    uVar4 = 0;
  }
  else {
    local_10 = 0;
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::__normal_iterator<std::pair<int,int>*>(local_20,local_1c);
    while( true ) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      bVar1 = __gnu_cxx::operator!=(local_20,local_18);
      if ((bVar1) && (local_10 < param_3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) break;
      Inven_Item::Inven_Item(local_5d);
      Inven_Item::reset(local_5d);
      puVar5 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
               ::operator->(local_20);
      local_5b = *puVar5;
      iVar3 = __gnu_cxx::
              __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
              ::operator->(local_20);
      uVar4 = *(undefined4 *)(iVar3 + 4);
      iVar3 = G_CDataManager();
      CItemList::create_item(*(CItemList **)(iVar3 + 0xc),0,local_5d,uVar4);
      Inven_Item::setCopy(param_2 + local_10 * 0x3d,local_5d);
      local_10 = local_10 + 1;
      __gnu_cxx::
      __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
      ::operator++(local_14,(int)local_20);
    }
    uVar4 = 1;
  }
  return uVar4;
}
```

# getFieldData

`_ZN12advancealtar14BuyUpgradeData12getFieldDataEiNS_9FieldType1TE`

`advancealtar::BuyUpgradeData::getFieldData(int, advancealtar::FieldType::T)`

| 类 | 地址 |
|---|---|
| `advancealtar::BuyUpgradeData` | `0x088a2c62` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088a2c62  _ZN12advancealtar14BuyUpgradeData12getFieldDataEiNS_9FieldType1TE
#           advancealtar::BuyUpgradeData::getFieldData(int, advancealtar::FieldType::T)
# range [0x088a2c62, 0x088a2e4b]
088a2c62 +0x000:  push   %ebp
088a2c63 +0x001:  mov    %esp,%ebp
088a2c65 +0x003:  push   %esi
088a2c66 +0x004:  push   %ebx
088a2c67 +0x005:  sub    $0x50,%esp
088a2c6a +0x008:  mov    0xc(%ebp),%eax
088a2c6d +0x00b:  mov    %eax,0x14(%esp)
088a2c71 +0x00f:  movl   $"BuyUpgradeData::GetFieldData level = %d",0x10(%esp)
088a2c79 +0x017:  movl   $0x26e,0xc(%esp)
088a2c81 +0x01f:  movl   $&_ZZN12advancealtar14BuyUpgradeData12getFieldDataEiNS_9FieldType1TEE12__FUNCTION__,0x8(%esp)
088a2c89 +0x027:  movl   $"../localglobal/global_RDARScriptAdvanceAltar_Shop.cpp",0x4(%esp)
088a2c91 +0x02f:  movl   $0x0,(%esp)
088a2c98 +0x036:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
088a2c9d +0x03b:  mov    0x8(%ebp),%eax
088a2ca0 +0x03e:  lea    0x1c(%eax),%ecx
088a2ca3 +0x041:  lea    -0x1c(%ebp),%eax
088a2ca6 +0x044:  lea    0xc(%ebp),%edx
088a2ca9 +0x047:  mov    %edx,0x8(%esp)
088a2cad +0x04b:  mov    %ecx,0x4(%esp)
088a2cb1 +0x04f:  mov    %eax,(%esp)
088a2cb4 +0x052:  call   088a43be <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xedc>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xedc
088a2cb9 +0x057:  sub    $0x4,%esp
088a2cbc +0x05a:  mov    0x8(%ebp),%eax
088a2cbf +0x05d:  lea    0x1c(%eax),%edx
088a2cc2 +0x060:  lea    -0x18(%ebp),%eax
088a2cc5 +0x063:  mov    %edx,0x4(%esp)
088a2cc9 +0x067:  mov    %eax,(%esp)
088a2ccc +0x06a:  call   088a43ea <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xf08>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xf08
088a2cd1 +0x06f:  sub    $0x4,%esp
088a2cd4 +0x072:  lea    -0x18(%ebp),%eax
088a2cd7 +0x075:  mov    %eax,0x4(%esp)
088a2cdb +0x079:  lea    -0x1c(%ebp),%eax
088a2cde +0x07c:  mov    %eax,(%esp)
088a2ce1 +0x07f:  call   088a4410 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xf2e>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xf2e
088a2ce6 +0x084:  test   %al,%al
088a2ce8 +0x086:  je     088a2d5a <+0xf8>
088a2cea +0x088:  lea    -0x1c(%ebp),%eax
088a2ced +0x08b:  mov    %eax,(%esp)
088a2cf0 +0x08e:  call   088a4424 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xf42>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xf42
088a2cf5 +0x093:  lea    0x4(%eax),%ecx
088a2cf8 +0x096:  lea    -0x24(%ebp),%eax
088a2cfb +0x099:  lea    0x10(%ebp),%edx
088a2cfe +0x09c:  mov    %edx,0x8(%esp)
088a2d02 +0x0a0:  mov    %ecx,0x4(%esp)
088a2d06 +0x0a4:  mov    %eax,(%esp)
088a2d09 +0x0a7:  call   088a4432 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xf50>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xf50
088a2d0e +0x0ac:  sub    $0x4,%esp
088a2d11 +0x0af:  lea    -0x1c(%ebp),%eax
088a2d14 +0x0b2:  mov    %eax,(%esp)
088a2d17 +0x0b5:  call   088a4424 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xf42>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xf42
088a2d1c +0x0ba:  lea    0x4(%eax),%edx
088a2d1f +0x0bd:  lea    -0x14(%ebp),%eax
088a2d22 +0x0c0:  mov    %edx,0x4(%esp)
088a2d26 +0x0c4:  mov    %eax,(%esp)
088a2d29 +0x0c7:  call   088a445e <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xf7c>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xf7c
088a2d2e +0x0cc:  sub    $0x4,%esp
088a2d31 +0x0cf:  lea    -0x14(%ebp),%eax
088a2d34 +0x0d2:  mov    %eax,0x4(%esp)
088a2d38 +0x0d6:  lea    -0x24(%ebp),%eax
088a2d3b +0x0d9:  mov    %eax,(%esp)
088a2d3e +0x0dc:  call   088a4484 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xfa2>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xfa2
088a2d43 +0x0e1:  test   %al,%al
088a2d45 +0x0e3:  je     088a2d5a <+0xf8>
088a2d47 +0x0e5:  lea    -0x24(%ebp),%eax
088a2d4a +0x0e8:  mov    %eax,(%esp)
088a2d4d +0x0eb:  call   088a4498 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xfb6>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xfb6
088a2d52 +0x0f0:  add    $0x4,%eax
088a2d55 +0x0f3:  jmp    088a2e41 <+0x1df>
088a2d5a +0x0f8:  mov    0x10(%ebp),%edx
088a2d5d +0x0fb:  lea    -0x10(%ebp),%eax
088a2d60 +0x0fe:  mov    %edx,0x8(%esp)
088a2d64 +0x102:  mov    0x8(%ebp),%edx
088a2d67 +0x105:  mov    %edx,0x4(%esp)
088a2d6b +0x109:  mov    %eax,(%esp)
088a2d6e +0x10c:  call   088a3106 <_ZNK12advancealtar14BuyUpgradeData18getStatStringIndexENS_9FieldType1TE>  ; advancealtar::BuyUpgradeData::getStatStringIndex(advancealtar::FieldType::T) const
088a2d73 +0x111:  sub    $0x4,%esp
088a2d76 +0x114:  lea    -0x10(%ebp),%eax
088a2d79 +0x117:  mov    %eax,(%esp)
088a2d7c +0x11a:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
088a2d81 +0x11f:  mov    0xc(%ebp),%edx
088a2d84 +0x122:  mov    %eax,0x18(%esp)
088a2d88 +0x126:  mov    %edx,0x14(%esp)
088a2d8c +0x12a:  movl   $"AdvanceAltar BuyUpgradeData::GetFieldData Error level = %d, type = %s",0x10(%esp)
088a2d94 +0x132:  movl   $0x27b,0xc(%esp)
088a2d9c +0x13a:  movl   $&_ZZN12advancealtar14BuyUpgradeData12getFieldDataEiNS_9FieldType1TEE12__FUNCTION__,0x8(%esp)
088a2da4 +0x142:  movl   $"../localglobal/global_RDARScriptAdvanceAltar_Shop.cpp",0x4(%esp)
088a2dac +0x14a:  movl   $0x0,(%esp)
088a2db3 +0x151:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
088a2db8 +0x156:  jmp    088a2dd5 <+0x173>
088a2dba +0x158:  mov    %edx,%ebx
088a2dbc +0x15a:  mov    %eax,%esi
088a2dbe +0x15c:  lea    -0x10(%ebp),%eax
088a2dc1 +0x15f:  mov    %eax,(%esp)
088a2dc4 +0x162:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088a2dc9 +0x167:  mov    %esi,%eax
088a2dcb +0x169:  mov    %ebx,%edx
088a2dcd +0x16b:  mov    %eax,(%esp)
088a2dd0 +0x16e:  call   08ae3750 <_Unwind_Resume>
088a2dd5 +0x173:  lea    -0x10(%ebp),%eax
088a2dd8 +0x176:  mov    %eax,(%esp)
088a2ddb +0x179:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088a2de0 +0x17e:  movl   $0x1,-0xc(%ebp)
088a2de7 +0x185:  mov    0x8(%ebp),%eax
088a2dea +0x188:  lea    0x1c(%eax),%ecx
088a2ded +0x18b:  lea    -0x2c(%ebp),%eax
088a2df0 +0x18e:  lea    -0xc(%ebp),%edx
088a2df3 +0x191:  mov    %edx,0x8(%esp)
088a2df7 +0x195:  mov    %ecx,0x4(%esp)
088a2dfb +0x199:  mov    %eax,(%esp)
088a2dfe +0x19c:  call   088a43be <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xedc>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xedc
088a2e03 +0x1a1:  sub    $0x4,%esp
088a2e06 +0x1a4:  mov    -0x2c(%ebp),%eax
088a2e09 +0x1a7:  mov    %eax,-0x1c(%ebp)
088a2e0c +0x1aa:  lea    -0x1c(%ebp),%eax
088a2e0f +0x1ad:  mov    %eax,(%esp)
088a2e12 +0x1b0:  call   088a4424 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xf42>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xf42
088a2e17 +0x1b5:  lea    0x4(%eax),%ecx
088a2e1a +0x1b8:  lea    -0x20(%ebp),%eax
088a2e1d +0x1bb:  lea    0x10(%ebp),%edx
088a2e20 +0x1be:  mov    %edx,0x8(%esp)
088a2e24 +0x1c2:  mov    %ecx,0x4(%esp)
088a2e28 +0x1c6:  mov    %eax,(%esp)
088a2e2b +0x1c9:  call   088a4432 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xf50>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xf50
088a2e30 +0x1ce:  sub    $0x4,%esp
088a2e33 +0x1d1:  lea    -0x20(%ebp),%eax
088a2e36 +0x1d4:  mov    %eax,(%esp)
088a2e39 +0x1d7:  call   088a4498 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xfb6>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xfb6
088a2e3e +0x1dc:  add    $0x4,%eax
088a2e41 +0x1df:  lea    -0x8(%ebp),%esp
088a2e44 +0x1e2:  add    $0x0,%esp
088a2e47 +0x1e5:  pop    %ebx
088a2e48 +0x1e6:  pop    %esi
088a2e49 +0x1e7:  pop    %ebp
088a2e4a +0x1e8:  ret
088a2e4b +0x1e9:  nop
```

## 反编译 C

```c
// advancealtar::BuyUpgradeData::getFieldData @ 0x88a2c62

/* advancealtar::BuyUpgradeData::getFieldData(int, advancealtar::FieldType::T) */

int __thiscall
advancealtar::BuyUpgradeData::getFieldData
          (BuyUpgradeData *this,undefined4 param_1,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_30 [2];
  _Rb_tree_iterator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>
  local_28 [4];
  _Rb_tree_iterator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>
  local_24 [4];
  int local_20;
  map<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>>
  local_1c [4];
  map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>
  local_18 [4];
  string local_14 [4];
  undefined4 local_10;
  
  LogManager::logFormat
            (0,"../localglobal/global_RDARScriptAdvanceAltar_Shop.cpp","getFieldData",0x26e,
             "BuyUpgradeData::GetFieldData level = %d",param_1);
  std::
  map<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>>
  ::find(&local_20);
  std::
  map<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>>
  ::end(local_1c);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
          ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
                        *)&local_20,(_Rb_tree_iterator *)local_1c);
  if (cVar1 != '\0') {
    std::
    _Rb_tree_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
    ::operator->((_Rb_tree_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
                  *)&local_20);
    std::
    map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>
    ::find(local_28);
    std::
    _Rb_tree_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
    ::operator->((_Rb_tree_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
                  *)&local_20);
    std::
    map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>
    ::end(local_18);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>::
            operator!=(local_28,(_Rb_tree_iterator *)local_18);
    if (cVar1 != '\0') {
      iVar2 = std::
              _Rb_tree_iterator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>
              ::operator->(local_28);
      goto LAB_088a2e41;
    }
  }
  getStatStringIndex(local_14,this,param_3);
                    /* try { // try from 088a2d7c to 088a2db7 has its CatchHandler @ 088a2dba */
  uVar3 = std::string::c_str(local_14);
  LogManager::logFormat
            (0,"../localglobal/global_RDARScriptAdvanceAltar_Shop.cpp","getFieldData",0x27b,
             "AdvanceAltar BuyUpgradeData::GetFieldData Error level = %d, type = %s",param_1,uVar3);
  std::string::~string(local_14);
  local_10 = 1;
  std::
  map<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>>
  ::find(local_30);
  local_20 = local_30[0];
  std::
  _Rb_tree_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
  ::operator->((_Rb_tree_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
                *)&local_20);
  std::
  map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>
  ::find(local_24);
  iVar2 = std::
          _Rb_tree_iterator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>::
          operator->(local_24);
LAB_088a2e41:
  return iVar2 + 4;
}
```

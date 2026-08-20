# level_check

`_ZN17Arad_GiftItem_Set11level_checkEP5CUserPK14CStackableItem`

`Arad_GiftItem_Set::level_check(CUser*, CStackableItem const*)`

| 类 | 地址 |
|---|---|
| `Arad_GiftItem_Set` | `0x081a31c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a31c4  _ZN17Arad_GiftItem_Set11level_checkEP5CUserPK14CStackableItem
#           Arad_GiftItem_Set::level_check(CUser*, CStackableItem const*)
# range [0x081a31c4, 0x081a329d]
081a31c4 +0x00:  push   %ebp
081a31c5 +0x01:  mov    %esp,%ebp
081a31c7 +0x03:  push   %ebx
081a31c8 +0x04:  sub    $0x34,%esp
081a31cb +0x07:  mov    0x10(%ebp),%eax
081a31ce +0x0a:  add    $0x150,%eax
081a31d3 +0x0f:  mov    %eax,(%esp)
081a31d6 +0x12:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
081a31db +0x17:  mov    %eax,0x4(%esp)
081a31df +0x1b:  mov    0x8(%ebp),%eax
081a31e2 +0x1e:  mov    %eax,(%esp)
081a31e5 +0x21:  call   081a2e3e <_ZN17Arad_GiftItem_Set11str_to_enumEPKc>  ; Arad_GiftItem_Set::str_to_enum(char const*)
081a31ea +0x26:  mov    %eax,-0x10(%ebp)
081a31ed +0x29:  mov    0x10(%ebp),%eax
081a31f0 +0x2c:  mov    %eax,(%esp)
081a31f3 +0x2f:  call   080f12ee <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x370>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x370
081a31f8 +0x34:  mov    %eax,%ebx
081a31fa +0x36:  mov    0xc(%ebp),%eax
081a31fd +0x39:  mov    %eax,(%esp)
081a3200 +0x3c:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081a3205 +0x41:  mov    %ebx,0xc(%esp)
081a3209 +0x45:  mov    %eax,0x8(%esp)
081a320d +0x49:  mov    -0x10(%ebp),%eax
081a3210 +0x4c:  mov    %eax,0x4(%esp)
081a3214 +0x50:  mov    0x8(%ebp),%eax
081a3217 +0x53:  mov    %eax,(%esp)
081a321a +0x56:  call   081a311e <_ZN17Arad_GiftItem_Set4findEiii>  ; Arad_GiftItem_Set::find(int, int, int)
081a321f +0x5b:  mov    %eax,-0xc(%ebp)
081a3222 +0x5e:  cmpl   $0x0,-0xc(%ebp)
081a3226 +0x62:  jne    081a322f <+0x6b>
081a3228 +0x64:  mov    $0x1,%eax
081a322d +0x69:  jmp    081a3297 <+0xd3>
081a322f +0x6b:  mov    0xc(%ebp),%eax
081a3232 +0x6e:  mov    %eax,(%esp)
081a3235 +0x71:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081a323a +0x76:  mov    %eax,%ebx
081a323c +0x78:  mov    0x10(%ebp),%eax
081a323f +0x7b:  mov    %eax,(%esp)
081a3242 +0x7e:  call   080f12ee <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x370>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x370
081a3247 +0x83:  cmp    %eax,%ebx
081a3249 +0x85:  setl   %al
081a324c +0x88:  test   %al,%al
081a324e +0x8a:  je     081a3292 <+0xce>
081a3250 +0x8c:  mov    0xc(%ebp),%eax
081a3253 +0x8f:  mov    %eax,(%esp)
081a3256 +0x92:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081a325b +0x97:  mov    %eax,0x14(%esp)
081a325f +0x9b:  movl   $"[ERROR] user level limit charac_no(%d)",0x10(%esp)
081a3267 +0xa3:  movl   $0x14b,0xc(%esp)
081a326f +0xab:  movl   $&_ZZN17Arad_GiftItem_Set11level_checkEP5CUserPK14CStackableItemE19__PRETTY_FUNCTION__,0x8(%esp)
081a3277 +0xb3:  movl   $"localjapan/Arad_Script_Loader.cpp",0x4(%esp)
081a327f +0xbb:  movl   $0x1,(%esp)
081a3286 +0xc2:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081a328b +0xc7:  mov    $0x0,%eax
081a3290 +0xcc:  jmp    081a3297 <+0xd3>
081a3292 +0xce:  mov    $0x1,%eax
081a3297 +0xd3:  add    $0x34,%esp
081a329a +0xd6:  pop    %ebx
081a329b +0xd7:  pop    %ebp
081a329c +0xd8:  ret
081a329d +0xd9:  nop
```

## 反编译 C

```c
// Arad_GiftItem_Set::level_check @ 0x81a31c4

/* Arad_GiftItem_Set::level_check(CUser*, CStackableItem const*) */

undefined4 __thiscall
Arad_GiftItem_Set::level_check(Arad_GiftItem_Set *this,CUser *param_1,CStackableItem *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  pcVar1 = (char *)std::string::c_str((string *)(param_2 + 0x150));
  iVar2 = str_to_enum(this,pcVar1);
  iVar3 = CItem::getUsableLevel((CItem *)param_2);
  iVar4 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  iVar2 = find(this,iVar2,iVar4,iVar3);
  if (iVar2 == 0) {
    uVar5 = 1;
  }
  else {
    iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    iVar3 = CItem::getUsableLevel((CItem *)param_2);
    if (iVar2 < iVar3) {
      uVar5 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      LogManager::logFormat
                (1,"localjapan/Arad_Script_Loader.cpp",
                 "bool Arad_GiftItem_Set::level_check(CUser*, const CStackableItem*)",0x14b,
                 "[ERROR] user level limit charac_no(%d)",uVar5);
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  return uVar5;
}
```

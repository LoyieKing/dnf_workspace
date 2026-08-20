# send_mail

`_ZN17Arad_GiftItem_Set9send_mailEP5CUseriiii`

`Arad_GiftItem_Set::send_mail(CUser*, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `Arad_GiftItem_Set` | `0x081a329e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a329e  _ZN17Arad_GiftItem_Set9send_mailEP5CUseriiii
#           Arad_GiftItem_Set::send_mail(CUser*, int, int, int, int)
# range [0x081a329e, 0x081a3415]
081a329e +0x000:  push   %ebp
081a329f +0x001:  mov    %esp,%ebp
081a32a1 +0x003:  push   %ebx
081a32a2 +0x004:  sub    $0xa4,%esp
081a32a8 +0x00a:  mov    0x14(%ebp),%eax
081a32ab +0x00d:  mov    %eax,0xc(%esp)
081a32af +0x011:  mov    0x18(%ebp),%eax
081a32b2 +0x014:  mov    %eax,0x8(%esp)
081a32b6 +0x018:  mov    0x1c(%ebp),%eax
081a32b9 +0x01b:  mov    %eax,0x4(%esp)
081a32bd +0x01f:  mov    0x8(%ebp),%eax
081a32c0 +0x022:  mov    %eax,(%esp)
081a32c3 +0x025:  call   081a311e <_ZN17Arad_GiftItem_Set4findEiii>  ; Arad_GiftItem_Set::find(int, int, int)
081a32c8 +0x02a:  mov    %eax,-0x10(%ebp)
081a32cb +0x02d:  cmpl   $0x0,-0x10(%ebp)
081a32cf +0x031:  jne    081a3307 <+0x69>
081a32d1 +0x033:  movl   $"[ERROR] send mail - Data None ",0x10(%esp)
081a32d9 +0x03b:  movl   $0x15d,0xc(%esp)
081a32e1 +0x043:  movl   $&_ZZN17Arad_GiftItem_Set9send_mailEP5CUseriiiiE19__PRETTY_FUNCTION__,0x8(%esp)
081a32e9 +0x04b:  movl   $"localjapan/Arad_Script_Loader.cpp",0x4(%esp)
081a32f1 +0x053:  movl   $0x1,(%esp)
081a32f8 +0x05a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081a32fd +0x05f:  mov    $0x0,%eax
081a3302 +0x064:  jmp    081a340c <+0x16e>
081a3307 +0x069:  lea    -0x48(%ebp),%eax
081a330a +0x06c:  mov    %eax,(%esp)
081a330d +0x06f:  call   081a3ff2 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x4d>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x4d
081a3312 +0x074:  mov    0x10(%ebp),%eax
081a3315 +0x077:  mov    %eax,-0x3c(%ebp)
081a3318 +0x07a:  mov    0xc(%ebp),%eax
081a331b +0x07d:  mov    %eax,(%esp)
081a331e +0x080:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081a3323 +0x085:  mov    %al,-0x48(%ebp)
081a3326 +0x088:  mov    -0x10(%ebp),%eax
081a3329 +0x08b:  add    $0x4,%eax
081a332c +0x08e:  mov    %eax,(%esp)
081a332f +0x091:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
081a3334 +0x096:  mov    %eax,-0x2c(%ebp)
081a3337 +0x099:  mov    -0x10(%ebp),%eax
081a333a +0x09c:  add    $0x8,%eax
081a333d +0x09f:  mov    %eax,(%esp)
081a3340 +0x0a2:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
081a3345 +0x0a7:  mov    %eax,-0x30(%ebp)
081a3348 +0x0aa:  mov    -0x10(%ebp),%eax
081a334b +0x0ad:  add    $0x8,%eax
081a334e +0x0b0:  mov    %eax,(%esp)
081a3351 +0x0b3:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
081a3356 +0x0b8:  mov    %eax,-0x34(%ebp)
081a3359 +0x0bb:  mov    -0x10(%ebp),%eax
081a335c +0x0be:  mov    (%eax),%eax
081a335e +0x0c0:  mov    %eax,-0x1c(%ebp)
081a3361 +0x0c3:  movb   $0x2,-0x20(%ebp)
081a3365 +0x0c7:  movl   $0x1,-0x24(%ebp)
081a336c +0x0ce:  movw   $0x0,-0x1e(%ebp)
081a3372 +0x0d4:  movb   $0x0,-0x14(%ebp)
081a3376 +0x0d8:  lea    -0x85(%ebp),%eax
081a337c +0x0de:  mov    %eax,(%esp)
081a337f +0x0e1:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
081a3384 +0x0e6:  mov    -0x1c(%ebp),%eax
081a3387 +0x0e9:  mov    %eax,%ebx
081a3389 +0x0eb:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081a338e +0x0f0:  mov    %ebx,0x4(%esp)
081a3392 +0x0f4:  mov    %eax,(%esp)
081a3395 +0x0f7:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081a339a +0x0fc:  mov    %eax,-0xc(%ebp)
081a339d +0x0ff:  cmpl   $0x0,-0xc(%ebp)
081a33a1 +0x103:  jne    081a33dd <+0x13f>
081a33a3 +0x105:  mov    -0x1c(%ebp),%eax
081a33a6 +0x108:  mov    %eax,0x14(%esp)
081a33aa +0x10c:  movl   $"[ARAD_RYOSIKA] Item Null. (index:%d)",0x10(%esp)
081a33b2 +0x114:  movl   $0x175,0xc(%esp)
081a33ba +0x11c:  movl   $&_ZZN17Arad_GiftItem_Set9send_mailEP5CUseriiiiE19__PRETTY_FUNCTION__,0x8(%esp)
081a33c2 +0x124:  movl   $"localjapan/Arad_Script_Loader.cpp",0x4(%esp)
081a33ca +0x12c:  movl   $0x1,(%esp)
081a33d1 +0x133:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081a33d6 +0x138:  mov    $0x0,%eax
081a33db +0x13d:  jmp    081a340c <+0x16e>
081a33dd +0x13f:  mov    -0xc(%ebp),%eax
081a33e0 +0x142:  mov    (%eax),%eax
081a33e2 +0x144:  add    $0x8,%eax
081a33e5 +0x147:  mov    (%eax),%edx
081a33e7 +0x149:  lea    -0x85(%ebp),%eax
081a33ed +0x14f:  mov    %eax,0x4(%esp)
081a33f1 +0x153:  mov    -0xc(%ebp),%eax
081a33f4 +0x156:  mov    %eax,(%esp)
081a33f7 +0x159:  call   *%edx
081a33f9 +0x15b:  movzwl -0x7a(%ebp),%eax
081a33fd +0x15f:  mov    %ax,-0x1e(%ebp)
081a3401 +0x163:  lea    -0x48(%ebp),%eax
081a3404 +0x166:  mov    %eax,(%esp)
081a3407 +0x169:  call   08196b03 <_ZN4ARAD9send_mailERN10ARAD_DATAS12AradMailInfoE>  ; ARAD::send_mail(ARAD_DATAS::AradMailInfo&)
081a340c +0x16e:  add    $0xa4,%esp
081a3412 +0x174:  pop    %ebx
081a3413 +0x175:  pop    %ebp
081a3414 +0x176:  ret
081a3415 +0x177:  nop
```

## 反编译 C

```c
// Arad_GiftItem_Set::send_mail @ 0x81a329e

/* Arad_GiftItem_Set::send_mail(CUser*, int, int, int, int) */

undefined4 __thiscall
Arad_GiftItem_Set::send_mail
          (Arad_GiftItem_Set *this,CUser *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  CDataManager *this_00;
  Inven_Item local_89 [11];
  undefined2 local_7e;
  AradMailInfo local_4c [12];
  int local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined2 local_22;
  int local_20;
  undefined1 local_18;
  int *local_14;
  int *local_10;
  
  local_14 = (int *)find(this,param_5,param_4,param_3);
  if (local_14 == (int *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_Script_Loader.cpp",
               "bool Arad_GiftItem_Set::send_mail(CUser*, int, int, int, int)",0x15d,
               "[ERROR] send mail - Data None ");
    uVar2 = 0;
  }
  else {
    ARAD_DATAS::AradMailInfo::AradMailInfo(local_4c);
    local_40 = param_2;
    local_4c[0] = (AradMailInfo)CUser::GetServerGroup(param_1);
    local_30 = std::string::c_str((string *)(local_14 + 1));
    local_34 = std::string::c_str((string *)(local_14 + 2));
    local_38 = std::string::length((string *)(local_14 + 2));
    local_20 = *local_14;
    local_24 = 2;
    local_28 = 1;
    local_22 = 0;
    local_18 = 0;
    Inven_Item::Inven_Item(local_89);
    iVar1 = local_20;
    this_00 = (CDataManager *)G_CDataManager();
    local_10 = (int *)CDataManager::find_item(this_00,iVar1);
    if (local_10 == (int *)0x0) {
      LogManager::logFormat
                (1,"localjapan/Arad_Script_Loader.cpp",
                 "bool Arad_GiftItem_Set::send_mail(CUser*, int, int, int, int)",0x175,
                 "[ARAD_RYOSIKA] Item Null. (index:%d)",local_20);
      uVar2 = 0;
    }
    else {
      (**(code **)(*local_10 + 8))(local_10,local_89);
      local_22 = local_7e;
      uVar2 = ARAD::send_mail(local_4c);
    }
  }
  return uVar2;
}
```

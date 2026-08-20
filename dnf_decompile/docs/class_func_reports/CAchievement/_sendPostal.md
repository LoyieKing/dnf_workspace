# _sendPostal

`_ZN12CAchievement11_sendPostalEiiSsSs`

`CAchievement::_sendPostal(int, int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::basic_string<char, std::char_traits<char>, std::allocator<char> >)`

| 类 | 地址 |
|---|---|
| `CAchievement` | `0x0828c152` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828c152  _ZN12CAchievement11_sendPostalEiiSsSs
#           CAchievement::_sendPostal(int, int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
# range [0x0828c152, 0x0828c251]
0828c152 +0x00:  push   %ebp
0828c153 +0x01:  mov    %esp,%ebp
0828c155 +0x03:  push   %edi
0828c156 +0x04:  push   %esi
0828c157 +0x05:  push   %ebx
0828c158 +0x06:  sub    $0x9c,%esp
0828c15e +0x0c:  lea    -0x59(%ebp),%eax
0828c161 +0x0f:  mov    %eax,(%esp)
0828c164 +0x12:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0828c169 +0x17:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0828c16e +0x1c:  mov    0xc(%ebp),%edx
0828c171 +0x1f:  mov    %edx,0x4(%esp)
0828c175 +0x23:  mov    %eax,(%esp)
0828c178 +0x26:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0828c17d +0x2b:  mov    %eax,-0x1c(%ebp)
0828c180 +0x2e:  cmpl   $0x0,-0x1c(%ebp)
0828c184 +0x32:  je     0828c245 <+0xf3>
0828c18a +0x38:  mov    0xc(%ebp),%eax
0828c18d +0x3b:  mov    %eax,-0x57(%ebp)
0828c190 +0x3e:  mov    -0x1c(%ebp),%eax
0828c193 +0x41:  mov    (%eax),%eax
0828c195 +0x43:  add    $0x8,%eax
0828c198 +0x46:  mov    (%eax),%edx
0828c19a +0x48:  lea    -0x59(%ebp),%eax
0828c19d +0x4b:  mov    %eax,0x4(%esp)
0828c1a1 +0x4f:  mov    -0x1c(%ebp),%eax
0828c1a4 +0x52:  mov    %eax,(%esp)
0828c1a7 +0x55:  call   *%edx
0828c1a9 +0x57:  mov    0x10(%ebp),%eax
0828c1ac +0x5a:  mov    %eax,0x4(%esp)
0828c1b0 +0x5e:  lea    -0x59(%ebp),%eax
0828c1b3 +0x61:  mov    %eax,(%esp)
0828c1b6 +0x64:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
0828c1bb +0x69:  mov    0x8(%ebp),%eax
0828c1be +0x6c:  mov    0x8(%eax),%eax
0828c1c1 +0x6f:  mov    %eax,(%esp)
0828c1c4 +0x72:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0828c1c9 +0x77:  mov    %eax,%edi
0828c1cb +0x79:  mov    0x18(%ebp),%eax
0828c1ce +0x7c:  mov    %eax,(%esp)
0828c1d1 +0x7f:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
0828c1d6 +0x84:  mov    %eax,-0x6c(%ebp)
0828c1d9 +0x87:  mov    0x18(%ebp),%eax
0828c1dc +0x8a:  mov    %eax,(%esp)
0828c1df +0x8d:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0828c1e4 +0x92:  mov    %eax,%esi
0828c1e6 +0x94:  mov    0x8(%ebp),%eax
0828c1e9 +0x97:  mov    0x8(%eax),%eax
0828c1ec +0x9a:  mov    %eax,(%esp)
0828c1ef +0x9d:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0828c1f4 +0xa2:  mov    %eax,%ebx
0828c1f6 +0xa4:  mov    0x14(%ebp),%eax
0828c1f9 +0xa7:  mov    %eax,(%esp)
0828c1fc +0xaa:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0828c201 +0xaf:  movl   $0x0,0x24(%esp)
0828c209 +0xb7:  movl   $0x0,0x20(%esp)
0828c211 +0xbf:  mov    %edi,0x1c(%esp)
0828c215 +0xc3:  movl   $0x0,0x18(%esp)
0828c21d +0xcb:  mov    -0x6c(%ebp),%edx
0828c220 +0xce:  mov    %edx,0x14(%esp)
0828c224 +0xd2:  mov    %esi,0x10(%esp)
0828c228 +0xd6:  mov    %ebx,0xc(%esp)
0828c22c +0xda:  movl   $0x0,0x8(%esp)
0828c234 +0xe2:  lea    -0x59(%ebp),%edx
0828c237 +0xe5:  mov    %edx,0x4(%esp)
0828c23b +0xe9:  mov    %eax,(%esp)
0828c23e +0xec:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
0828c243 +0xf1:  jmp    0828c246 <+0xf4>
0828c245 +0xf3:  nop
0828c246 +0xf4:  add    $0x9c,%esp
0828c24c +0xfa:  pop    %ebx
0828c24d +0xfb:  pop    %esi
0828c24e +0xfc:  pop    %edi
0828c24f +0xfd:  pop    %ebp
0828c250 +0xfe:  ret
0828c251 +0xff:  nop
```

## 反编译 C

```c
// CAchievement::_sendPostal @ 0x828c152

/* CAchievement::_sendPostal(int, int, std::string, std::string) */

void __thiscall
CAchievement::_sendPostal(CAchievement *this,int param_1,int param_2,string param_3,string param_4)

{
  CDataManager *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Inven_Item local_5d [2];
  int local_5b;
  int *local_20;
  
  Inven_Item::Inven_Item(local_5d);
  this_00 = (CDataManager *)G_CDataManager();
  local_20 = (int *)CDataManager::find_item(this_00,param_1);
  if (local_20 != (int *)0x0) {
    local_5b = param_1;
    (**(code **)(*local_20 + 8))(local_20,local_5d);
    Inven_Item::set_add_info(local_5d,param_2);
    uVar1 = CUser::GetServerGroup(*(CUser **)(this + 8));
    uVar2 = std::string::size((string *)param_4._M_dataplus._M_p);
    uVar3 = std::string::c_str((string *)param_4._M_dataplus._M_p);
    uVar4 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 8));
    uVar5 = std::string::c_str((string *)param_3._M_dataplus._M_p);
    WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(uVar5,local_5d,0,uVar4,uVar3,uVar2,0,uVar1,0,0)
    ;
  }
  return;
}
```

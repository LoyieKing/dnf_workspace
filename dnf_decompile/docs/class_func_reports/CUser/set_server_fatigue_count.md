# set_server_fatigue_count

`_ZN5CUser24set_server_fatigue_countEs`

`CUser::set_server_fatigue_count(short)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868d32a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868d32a  _ZN5CUser24set_server_fatigue_countEs
#           CUser::set_server_fatigue_count(short)
# range [0x0868d32a, 0x0868d3fd]
0868d32a +0x00:  push   %ebp
0868d32b +0x01:  mov    %esp,%ebp
0868d32d +0x03:  sub    $0x48,%esp
0868d330 +0x06:  mov    0xc(%ebp),%eax
0868d333 +0x09:  mov    %ax,-0x2c(%ebp)
0868d337 +0x0d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868d33c +0x12:  mov    %eax,(%esp)
0868d33f +0x15:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
0868d344 +0x1a:  mov    %eax,(%esp)
0868d347 +0x1d:  call   0810c6ca <_ZN13EventClassify15CEventScriptMng18get_today_time_dayEv>  ; EventClassify::CEventScriptMng::get_today_time_day()
0868d34c +0x22:  mov    %al,-0x19(%ebp)
0868d34f +0x25:  mov    0x8(%ebp),%eax
0868d352 +0x28:  lea    0x8eb50(%eax),%ecx
0868d358 +0x2e:  lea    -0x20(%ebp),%eax
0868d35b +0x31:  lea    -0x19(%ebp),%edx
0868d35e +0x34:  mov    %edx,0x8(%esp)
0868d362 +0x38:  mov    %ecx,0x4(%esp)
0868d366 +0x3c:  mov    %eax,(%esp)
0868d369 +0x3f:  call   0849fd46 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0xb77>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0xb77
0868d36e +0x44:  sub    $0x4,%esp
0868d371 +0x47:  mov    0x8(%ebp),%eax
0868d374 +0x4a:  lea    0x8eb50(%eax),%edx
0868d37a +0x50:  lea    -0x18(%ebp),%eax
0868d37d +0x53:  mov    %edx,0x4(%esp)
0868d381 +0x57:  mov    %eax,(%esp)
0868d384 +0x5a:  call   08450180 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2d96>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2d96
0868d389 +0x5f:  sub    $0x4,%esp
0868d38c +0x62:  lea    -0x18(%ebp),%eax
0868d38f +0x65:  mov    %eax,0x4(%esp)
0868d393 +0x69:  lea    -0x20(%ebp),%eax
0868d396 +0x6c:  mov    %eax,(%esp)
0868d399 +0x6f:  call   084501a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dbc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dbc
0868d39e +0x74:  test   %al,%al
0868d3a0 +0x76:  je     0868d3c0 <+0x96>
0868d3a2 +0x78:  lea    -0x20(%ebp),%eax
0868d3a5 +0x7b:  mov    %eax,(%esp)
0868d3a8 +0x7e:  call   084501ba <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dd0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dd0
0868d3ad +0x83:  movzwl 0x2(%eax),%edx
0868d3b1 +0x87:  mov    %edx,%ecx
0868d3b3 +0x89:  movzwl -0x2c(%ebp),%edx
0868d3b7 +0x8d:  lea    (%ecx,%edx,1),%edx
0868d3ba +0x90:  mov    %dx,0x2(%eax)
0868d3be +0x94:  jmp    0868d3fb <+0xd1>
0868d3c0 +0x96:  lea    -0x2c(%ebp),%eax
0868d3c3 +0x99:  mov    %eax,0x8(%esp)
0868d3c7 +0x9d:  lea    -0x19(%ebp),%eax
0868d3ca +0xa0:  mov    %eax,0x4(%esp)
0868d3ce +0xa4:  lea    -0xc(%ebp),%eax
0868d3d1 +0xa7:  mov    %eax,(%esp)
0868d3d4 +0xaa:  call   0869c9d8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x922d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x922d
0868d3d9 +0xaf:  mov    0x8(%ebp),%eax
0868d3dc +0xb2:  lea    0x8eb50(%eax),%ecx
0868d3e2 +0xb8:  lea    -0x14(%ebp),%eax
0868d3e5 +0xbb:  lea    -0xc(%ebp),%edx
0868d3e8 +0xbe:  mov    %edx,0x8(%esp)
0868d3ec +0xc2:  mov    %ecx,0x4(%esp)
0868d3f0 +0xc6:  mov    %eax,(%esp)
0868d3f3 +0xc9:  call   084540b4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6cca>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6cca
0868d3f8 +0xce:  sub    $0x4,%esp
0868d3fb +0xd1:  leave
0868d3fc +0xd2:  ret
0868d3fd +0xd3:  nop
```

## 反编译 C

```c
// CUser::set_server_fatigue_count @ 0x868d32a

/* CUser::set_server_fatigue_count(short) */

void __thiscall CUser::set_server_fatigue_count(CUser *this,short param_1)

{
  char cVar1;
  CDataManager *this_00;
  CEventScriptMng *this_01;
  int iVar2;
  short local_30 [6];
  _Rb_tree_iterator<std::pair<unsigned_char_const,short>> local_24 [7];
  uchar local_1d;
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_1c [4];
  pair local_18 [8];
  pair<unsigned_char_const,short> local_10 [12];
  
  local_30[0] = param_1;
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CEventScriptMng *)CDataManager::get_event_script_mng(this_00);
  local_1d = EventClassify::CEventScriptMng::get_today_time_day(this_01);
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::find((uchar *)local_24);
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::end(local_1c);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator!=
                    (local_24,(_Rb_tree_iterator *)local_1c);
  if (cVar1 == '\0') {
    std::pair<unsigned_char_const,short>::pair<unsigned_char&,short_const&>
              (local_10,&local_1d,local_30);
    std::
    map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
    ::insert(local_18);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->(local_24);
    *(short *)(iVar2 + 2) = *(short *)(iVar2 + 2) + local_30[0];
  }
  return;
}
```

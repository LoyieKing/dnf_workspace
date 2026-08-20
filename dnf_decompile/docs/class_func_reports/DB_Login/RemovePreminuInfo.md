# RemovePreminuInfo

`_ZN8DB_Login17RemovePreminuInfoEP14SIG_LOGIN_DATARSt6vectorIiSaIiEE`

`DB_Login::RemovePreminuInfo(SIG_LOGIN_DATA*, std::vector<int, std::allocator<int> >&)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x084128c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084128c4  _ZN8DB_Login17RemovePreminuInfoEP14SIG_LOGIN_DATARSt6vectorIiSaIiEE
#           DB_Login::RemovePreminuInfo(SIG_LOGIN_DATA*, std::vector<int, std::allocator<int> >&)
# range [0x084128c4, 0x084129d5]
084128c4 +0x000:  push   %ebp
084128c5 +0x001:  mov    %esp,%ebp
084128c7 +0x003:  push   %ebx
084128c8 +0x004:  sub    $0x34,%esp
084128cb +0x007:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084128d0 +0x00c:  movl   $0x0,0x8(%esp)
084128d8 +0x014:  movl   $0x6,0x4(%esp)
084128e0 +0x01c:  mov    %eax,(%esp)
084128e3 +0x01f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084128e8 +0x024:  mov    %eax,-0x10(%ebp)
084128eb +0x027:  movl   $0x0,-0xc(%ebp)
084128f2 +0x02e:  lea    -0x18(%ebp),%eax
084128f5 +0x031:  mov    0x10(%ebp),%edx
084128f8 +0x034:  mov    %edx,0x4(%esp)
084128fc +0x038:  mov    %eax,(%esp)
084128ff +0x03b:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08412904 +0x040:  sub    $0x4,%esp
08412907 +0x043:  lea    -0x18(%ebp),%eax
0841290a +0x046:  mov    %eax,0x4(%esp)
0841290e +0x04a:  lea    -0x1c(%ebp),%eax
08412911 +0x04d:  mov    %eax,(%esp)
08412914 +0x050:  call   080f99ec <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1f8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1f8
08412919 +0x055:  lea    -0x14(%ebp),%eax
0841291c +0x058:  mov    0x10(%ebp),%edx
0841291f +0x05b:  mov    %edx,0x4(%esp)
08412923 +0x05f:  mov    %eax,(%esp)
08412926 +0x062:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
0841292b +0x067:  sub    $0x4,%esp
0841292e +0x06a:  lea    -0x14(%ebp),%eax
08412931 +0x06d:  mov    %eax,0x4(%esp)
08412935 +0x071:  lea    -0x20(%ebp),%eax
08412938 +0x074:  mov    %eax,(%esp)
0841293b +0x077:  call   080f99ec <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1f8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1f8
08412940 +0x07c:  jmp    084129b7 <+0xf3>
08412942 +0x07e:  lea    -0x1c(%ebp),%eax
08412945 +0x081:  mov    %eax,(%esp)
08412948 +0x084:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
0841294d +0x089:  mov    (%eax),%ebx
0841294f +0x08b:  mov    0xc(%ebp),%eax
08412952 +0x08e:  mov    0xc0(%eax),%eax
08412958 +0x094:  movl   $0x0,0x4(%esp)
08412960 +0x09c:  mov    %eax,(%esp)
08412963 +0x09f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08412968 +0x0a4:  mov    %ebx,0xc(%esp)
0841296c +0x0a8:  mov    %eax,0x8(%esp)
08412970 +0x0ac:  movl   $"deLete from dnf_event_entry where m_id=%s and event_id=%d",0x4(%esp)
08412978 +0x0b4:  mov    -0x10(%ebp),%eax
0841297b +0x0b7:  mov    %eax,(%esp)
0841297e +0x0ba:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08412983 +0x0bf:  movl   $0x1,0x4(%esp)
0841298b +0x0c7:  mov    -0x10(%ebp),%eax
0841298e +0x0ca:  mov    %eax,(%esp)
08412991 +0x0cd:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08412996 +0x0d2:  xor    $0x1,%eax
08412999 +0x0d5:  test   %al,%al
0841299b +0x0d7:  jne    084129ab <+0xe7>
0841299d +0x0d9:  mov    0xc(%ebp),%eax
084129a0 +0x0dc:  movzbl 0x2938(%eax),%eax
084129a7 +0x0e3:  test   %al,%al
084129a9 +0x0e5:  jmp    084129ac <+0xe8>
084129ab +0x0e7:  nop
084129ac +0x0e8:  lea    -0x1c(%ebp),%eax
084129af +0x0eb:  mov    %eax,(%esp)
084129b2 +0x0ee:  call   080f9a06 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x212>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x212
084129b7 +0x0f3:  lea    -0x20(%ebp),%eax
084129ba +0x0f6:  mov    %eax,0x4(%esp)
084129be +0x0fa:  lea    -0x1c(%ebp),%eax
084129c1 +0x0fd:  mov    %eax,(%esp)
084129c4 +0x100:  call   080f9a26 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x232>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x232
084129c9 +0x105:  test   %al,%al
084129cb +0x107:  jne    08412942 <+0x7e>
084129d1 +0x10d:  mov    -0x4(%ebp),%ebx
084129d4 +0x110:  leave
084129d5 +0x111:  ret
```

## 反编译 C

```c
// DB_Login::RemovePreminuInfo @ 0x84128c4

/* DB_Login::RemovePreminuInfo(SIG_LOGIN_DATA*, std::vector<int, std::allocator<int> >&) */

void DB_Login::RemovePreminuInfo(SIG_LOGIN_DATA *param_1,vector *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_24 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_20 [4];
  __normal_iterator local_1c [4];
  __normal_iterator local_18 [4];
  MySQL *local_14;
  undefined4 local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_10 = 0;
  std::vector<int,std::allocator<int>>::begin();
  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
  __normal_iterator<int*>(local_20,local_1c);
  std::vector<int,std::allocator<int>>::end();
  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
  __normal_iterator<int*>(local_24,local_18);
  while (bVar2 = __gnu_cxx::operator!=(local_20,local_24), bVar2) {
    puVar3 = (undefined4 *)
             __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
             operator*(local_20);
    uVar1 = *puVar3;
    uVar4 = NumberToString(*(uint *)(param_2 + 0xc0),0);
    MySQL::set_query(local_14,"deLete from dnf_event_entry where m_id=%s and event_id=%d",uVar4,
                     uVar1);
    MySQL::exec(local_14,true);
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
              (local_20);
  }
  return;
}
```

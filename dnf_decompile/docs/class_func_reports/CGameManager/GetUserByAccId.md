# GetUserByAccId

`_ZN12CGameManager14GetUserByAccIdEj`

`CGameManager::GetUserByAccId(unsigned int)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082948c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082948c6  _ZN12CGameManager14GetUserByAccIdEj
#           CGameManager::GetUserByAccId(unsigned int)
# range [0x082948c6, 0x082949fb]
082948c6 +0x000:  push   %ebp
082948c7 +0x001:  mov    %esp,%ebp
082948c9 +0x003:  push   %esi
082948ca +0x004:  push   %ebx
082948cb +0x005:  sub    $0x50,%esp
082948ce +0x008:  lea    -0x24(%ebp),%eax
082948d1 +0x00b:  mov    %eax,(%esp)
082948d4 +0x00e:  call   082b075e <_GLOBAL__I__ZN4CLog5this_E+0xcb85>  ; global constructors keyed to CLog::this_+0xcb85
082948d9 +0x013:  mov    0x8(%ebp),%eax
082948dc +0x016:  lea    0x22c(%eax),%ecx
082948e2 +0x01c:  lea    -0x2c(%ebp),%eax
082948e5 +0x01f:  lea    0xc(%ebp),%edx
082948e8 +0x022:  mov    %edx,0x8(%esp)
082948ec +0x026:  mov    %ecx,0x4(%esp)
082948f0 +0x02a:  mov    %eax,(%esp)
082948f3 +0x02d:  call   082b076c <_GLOBAL__I__ZN4CLog5this_E+0xcb93>  ; global constructors keyed to CLog::this_+0xcb93
082948f8 +0x032:  sub    $0x4,%esp
082948fb +0x035:  mov    -0x2c(%ebp),%eax
082948fe +0x038:  mov    %eax,-0x24(%ebp)
08294901 +0x03b:  mov    0x8(%ebp),%eax
08294904 +0x03e:  lea    0x22c(%eax),%edx
0829490a +0x044:  lea    -0x20(%ebp),%eax
0829490d +0x047:  mov    %edx,0x4(%esp)
08294911 +0x04b:  mov    %eax,(%esp)
08294914 +0x04e:  call   080d3ada <_GLOBAL__I__ZN10BingoEventC2Ev+0x8927>  ; global constructors keyed to BingoEvent::BingoEvent()+0x8927
08294919 +0x053:  sub    $0x4,%esp
0829491c +0x056:  lea    -0x20(%ebp),%eax
0829491f +0x059:  mov    %eax,0x4(%esp)
08294923 +0x05d:  lea    -0x24(%ebp),%eax
08294926 +0x060:  mov    %eax,(%esp)
08294929 +0x063:  call   080d0d3e <_GLOBAL__I__ZN10BingoEventC2Ev+0x5b8b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x5b8b
0829492e +0x068:  test   %al,%al
08294930 +0x06a:  je     0829493c <+0x76>
08294932 +0x06c:  mov    $0x0,%eax
08294937 +0x071:  jmp    082949f1 <+0x12b>
0829493c +0x076:  lea    -0x24(%ebp),%eax
0829493f +0x079:  mov    %eax,(%esp)
08294942 +0x07c:  call   082b0798 <_GLOBAL__I__ZN4CLog5this_E+0xcbbf>  ; global constructors keyed to CLog::this_+0xcbbf
08294947 +0x081:  mov    0x4(%eax),%eax
0829494a +0x084:  mov    %eax,-0xc(%ebp)
0829494d +0x087:  mov    -0xc(%ebp),%eax
08294950 +0x08a:  mov    %eax,(%esp)
08294953 +0x08d:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08294958 +0x092:  mov    0xc(%ebp),%edx
0829495b +0x095:  cmp    %edx,%eax
0829495d +0x097:  sete   %al
08294960 +0x09a:  test   %al,%al
08294962 +0x09c:  je     0829496c <+0xa6>
08294964 +0x09e:  mov    -0xc(%ebp),%eax
08294967 +0x0a1:  jmp    082949f1 <+0x12b>
0829496c +0x0a6:  mov    -0xc(%ebp),%eax
0829496f +0x0a9:  mov    %eax,(%esp)
08294972 +0x0ac:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08294977 +0x0b1:  movl   $0x1,0x4(%esp)
0829497f +0x0b9:  mov    %eax,(%esp)
08294982 +0x0bc:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08294987 +0x0c1:  mov    %eax,%esi
08294989 +0x0c3:  mov    0xc(%ebp),%eax
0829498c +0x0c6:  movl   $0x0,0x4(%esp)
08294994 +0x0ce:  mov    %eax,(%esp)
08294997 +0x0d1:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0829499c +0x0d6:  mov    %eax,%ebx
0829499e +0x0d8:  movl   $0x5,0xc(%esp)
082949a6 +0x0e0:  movl   $0x9ab,0x8(%esp)
082949ae +0x0e8:  movl   $&_ZZN12CGameManager14GetUserByAccIdEjE19__PRETTY_FUNCTION__,0x4(%esp)
082949b6 +0x0f0:  lea    -0x1c(%ebp),%eax
082949b9 +0x0f3:  mov    %eax,(%esp)
082949bc +0x0f6:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082949c1 +0x0fb:  mov    %esi,0x14(%esp)
082949c5 +0x0ff:  mov    %ebx,0x10(%esp)
082949c9 +0x103:  movl   $0x9ab,0xc(%esp)
082949d1 +0x10b:  movl   $&_ZZN12CGameManager14GetUserByAccIdEjE19__PRETTY_FUNCTION__,0x8(%esp)
082949d9 +0x113:  movl   $"[%s][%d][IN m_id: %s][Map m_id: %s]",0x4(%esp)
082949e1 +0x11b:  lea    -0x1c(%ebp),%eax
082949e4 +0x11e:  mov    %eax,(%esp)
082949e7 +0x121:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082949ec +0x126:  mov    $0x0,%eax
082949f1 +0x12b:  lea    -0x8(%ebp),%esp
082949f4 +0x12e:  add    $0x0,%esp
082949f7 +0x131:  pop    %ebx
082949f8 +0x132:  pop    %esi
082949f9 +0x133:  pop    %ebp
082949fa +0x134:  ret
082949fb +0x135:  nop
```

## 反编译 C

```c
// CGameManager::GetUserByAccId @ 0x82948c6

/* CGameManager::GetUserByAccId(unsigned int) */

CUser * __thiscall CGameManager::GetUserByAccId(CGameManager *this,uint param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint local_30 [2];
  uint local_28;
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_24 [4];
  cMyTrace local_20 [16];
  CUser *local_10;
  
  std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_28);
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::find(local_30);
  local_28 = local_30[0];
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::end(local_24);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator==
                    ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_28,
                     (_Rb_tree_iterator *)local_24);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_28);
    local_10 = *(CUser **)(iVar2 + 4);
    uVar3 = CUser::get_acc_id(local_10);
    if (uVar3 != param_1) {
      uVar3 = CUser::get_acc_id(local_10);
      uVar4 = NumberToString(uVar3,1);
      uVar5 = NumberToString(param_1,0);
      cMyTrace::cMyTrace(local_20,
                         "CUser* CGameManager::GetUserByAccId(memberIdentificationNumber_t)",0x9ab,5
                        );
      cMyTrace::operator()
                (local_20,"[%s][%d][IN m_id: %s][Map m_id: %s]",
                 "CUser* CGameManager::GetUserByAccId(memberIdentificationNumber_t)",0x9ab,uVar5,
                 uVar4);
      local_10 = (CUser *)0x0;
    }
  }
  else {
    local_10 = (CUser *)0x0;
  }
  return local_10;
}
```

# getData

`_ZNK9item_lock9CItemLock7getDataEPc`

`item_lock::CItemLock::getData(char*) const`

| 类 | 地址 |
|---|---|
| `item_lock::CItemLock` | `0x08541958` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08541958  _ZNK9item_lock9CItemLock7getDataEPc
#           item_lock::CItemLock::getData(char*) const
# range [0x08541958, 0x08541a3d]
08541958 +0x00:  push   %ebp
08541959 +0x01:  mov    %esp,%ebp
0854195b +0x03:  push   %ebx
0854195c +0x04:  sub    $0x34,%esp
0854195f +0x07:  mov    0xc(%ebp),%eax
08541962 +0x0a:  mov    %eax,-0x10(%ebp)
08541965 +0x0d:  mov    0x8(%ebp),%eax
08541968 +0x10:  lea    0x8(%eax),%edx
0854196b +0x13:  lea    -0x18(%ebp),%eax
0854196e +0x16:  mov    %edx,0x4(%esp)
08541972 +0x1a:  mov    %eax,(%esp)
08541975 +0x1d:  call   085432da <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x2bc>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x2bc
0854197a +0x22:  sub    $0x4,%esp
0854197d +0x25:  jmp    08541a06 <+0xae>
08541982 +0x2a:  lea    -0x18(%ebp),%eax
08541985 +0x2d:  mov    %eax,(%esp)
08541988 +0x30:  call   08543358 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x33a>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x33a
0854198d +0x35:  movzbl (%eax),%eax
08541990 +0x38:  movzbl %al,%eax
08541993 +0x3b:  sub    $0x1,%eax
08541996 +0x3e:  mov    %eax,-0xc(%ebp)
08541999 +0x41:  cmpl   $0x63,-0xc(%ebp)
0854199d +0x45:  jg     085419a5 <+0x4d>
0854199f +0x47:  cmpl   $0x0,-0xc(%ebp)
085419a3 +0x4b:  jns    085419da <+0x82>
085419a5 +0x4d:  mov    -0xc(%ebp),%eax
085419a8 +0x50:  mov    %eax,0x14(%esp)
085419ac +0x54:  movl   $"itemlock error index %d",0x10(%esp)
085419b4 +0x5c:  movl   $0x6c,0xc(%esp)
085419bc +0x64:  movl   $&_ZZNK9item_lock9CItemLock7getDataEPcE19__PRETTY_FUNCTION__,0x8(%esp)
085419c4 +0x6c:  movl   $"ItemLock.cpp",0x4(%esp)
085419cc +0x74:  movl   $0x1,(%esp)
085419d3 +0x7b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085419d8 +0x80:  jmp    085419fb <+0xa3>
085419da +0x82:  mov    -0xc(%ebp),%eax
085419dd +0x85:  shl    $0x3,%eax
085419e0 +0x88:  mov    %eax,%ebx
085419e2 +0x8a:  add    -0x10(%ebp),%ebx
085419e5 +0x8d:  lea    -0x18(%ebp),%eax
085419e8 +0x90:  mov    %eax,(%esp)
085419eb +0x93:  call   08543358 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x33a>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x33a
085419f0 +0x98:  mov    0x8(%eax),%edx
085419f3 +0x9b:  mov    0x4(%eax),%eax
085419f6 +0x9e:  mov    %eax,(%ebx)
085419f8 +0xa0:  mov    %edx,0x4(%ebx)
085419fb +0xa3:  lea    -0x18(%ebp),%eax
085419fe +0xa6:  mov    %eax,(%esp)
08541a01 +0xa9:  call   0854333a <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x31c>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x31c
08541a06 +0xae:  mov    0x8(%ebp),%eax
08541a09 +0xb1:  lea    0x8(%eax),%edx
08541a0c +0xb4:  lea    -0x14(%ebp),%eax
08541a0f +0xb7:  mov    %edx,0x4(%esp)
08541a13 +0xbb:  mov    %eax,(%esp)
08541a16 +0xbe:  call   08543300 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x2e2>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x2e2
08541a1b +0xc3:  sub    $0x4,%esp
08541a1e +0xc6:  lea    -0x14(%ebp),%eax
08541a21 +0xc9:  mov    %eax,0x4(%esp)
08541a25 +0xcd:  lea    -0x18(%ebp),%eax
08541a28 +0xd0:  mov    %eax,(%esp)
08541a2b +0xd3:  call   08543326 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x308>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x308
08541a30 +0xd8:  test   %al,%al
08541a32 +0xda:  jne    08541982 <+0x2a>
08541a38 +0xe0:  mov    -0x4(%ebp),%ebx
08541a3b +0xe3:  leave
08541a3c +0xe4:  ret
08541a3d +0xe5:  nop
```

## 反编译 C

```c
// item_lock::CItemLock::getData @ 0x8541958

/* item_lock::CItemLock::getData(char*) const */

void __thiscall item_lock::CItemLock::getData(CItemLock *this,char *param_1)

{
  undefined4 uVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  local_1c [4];
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  local_18 [4];
  char *local_14;
  int local_10;
  
  local_14 = param_1;
  std::
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
    ::end(local_18);
    cVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)
                       local_1c,(_Rb_tree_const_iterator *)local_18);
    if (cVar2 == '\0') break;
    pbVar3 = (byte *)std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::
                     operator->((_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>>
                                 *)local_1c);
    local_10 = *pbVar3 - 1;
    if ((local_10 < 100) && (-1 < local_10)) {
      pcVar5 = local_14 + local_10 * 8;
      iVar4 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::
              operator->((_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)
                         local_1c);
      uVar1 = *(undefined4 *)(iVar4 + 8);
      *(undefined4 *)pcVar5 = *(undefined4 *)(iVar4 + 4);
      *(undefined4 *)(pcVar5 + 4) = uVar1;
    }
    else {
      LogManager::logFormat
                (1,"ItemLock.cpp","virtual void item_lock::CItemLock::getData(char*) const",0x6c,
                 "itemlock error index %d",local_10);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator++
              ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)local_1c);
  }
  return;
}
```

# UpdateBanList

`_ZN7WarRoom13UpdateBanListEv`

`WarRoom::UpdateBanList()`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086ba850` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ba850  _ZN7WarRoom13UpdateBanListEv
#           WarRoom::UpdateBanList()
# range [0x086ba850, 0x086ba947]
086ba850 +0x00:  push   %ebp
086ba851 +0x01:  mov    %esp,%ebp
086ba853 +0x03:  push   %ebx
086ba854 +0x04:  sub    $0x34,%esp
086ba857 +0x07:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086ba85e +0x0e:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086ba863 +0x13:  mov    %eax,-0x10(%ebp)
086ba866 +0x16:  mov    0x8(%ebp),%eax
086ba869 +0x19:  lea    0x1d8(%eax),%edx
086ba86f +0x1f:  lea    -0x18(%ebp),%eax
086ba872 +0x22:  mov    %edx,0x4(%esp)
086ba876 +0x26:  mov    %eax,(%esp)
086ba879 +0x29:  call   08451966 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x457c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x457c
086ba87e +0x2e:  sub    $0x4,%esp
086ba881 +0x31:  mov    0x8(%ebp),%eax
086ba884 +0x34:  lea    0x1d8(%eax),%edx
086ba88a +0x3a:  lea    -0x1c(%ebp),%eax
086ba88d +0x3d:  mov    %edx,0x4(%esp)
086ba891 +0x41:  mov    %eax,(%esp)
086ba894 +0x44:  call   08450298 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2eae>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2eae
086ba899 +0x49:  sub    $0x4,%esp
086ba89c +0x4c:  jmp    086ba929 <+0xd9>
086ba8a1 +0x51:  lea    -0x18(%ebp),%eax
086ba8a4 +0x54:  mov    %eax,(%esp)
086ba8a7 +0x57:  call   086c0bba <_GLOBAL__I__ZN7WarRoomC2Ev+0xb3>  ; global constructors keyed to WarRoom::WarRoom()+0xb3
086ba8ac +0x5c:  mov    0x4(%eax),%eax
086ba8af +0x5f:  mov    %eax,-0xc(%ebp)
086ba8b2 +0x62:  mov    -0xc(%ebp),%eax
086ba8b5 +0x65:  mov    -0x10(%ebp),%edx
086ba8b8 +0x68:  mov    %edx,%ebx
086ba8ba +0x6a:  sub    %eax,%ebx
086ba8bc +0x6c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086ba8c1 +0x71:  mov    0x88a0(%eax),%ecx
086ba8c7 +0x77:  mov    $0x10624dd3,%edx
086ba8cc +0x7c:  mov    %ecx,%eax
086ba8ce +0x7e:  imul   %edx
086ba8d0 +0x80:  sar    $0x6,%edx
086ba8d3 +0x83:  mov    %ecx,%eax
086ba8d5 +0x85:  sar    $0x1f,%eax
086ba8d8 +0x88:  mov    %edx,%ecx
086ba8da +0x8a:  sub    %eax,%ecx
086ba8dc +0x8c:  mov    %ecx,%eax
086ba8de +0x8e:  cmp    %eax,%ebx
086ba8e0 +0x90:  setge  %al
086ba8e3 +0x93:  test   %al,%al
086ba8e5 +0x95:  je     086ba91e <+0xce>
086ba8e7 +0x97:  lea    -0x14(%ebp),%eax
086ba8ea +0x9a:  movl   $0x0,0x8(%esp)
086ba8f2 +0xa2:  lea    -0x18(%ebp),%edx
086ba8f5 +0xa5:  mov    %edx,0x4(%esp)
086ba8f9 +0xa9:  mov    %eax,(%esp)
086ba8fc +0xac:  call   086c0bc8 <_GLOBAL__I__ZN7WarRoomC2Ev+0xc1>  ; global constructors keyed to WarRoom::WarRoom()+0xc1
086ba901 +0xb1:  sub    $0x4,%esp
086ba904 +0xb4:  mov    0x8(%ebp),%eax
086ba907 +0xb7:  lea    0x1d8(%eax),%edx
086ba90d +0xbd:  mov    -0x14(%ebp),%eax
086ba910 +0xc0:  mov    %eax,0x4(%esp)
086ba914 +0xc4:  mov    %edx,(%esp)
086ba917 +0xc7:  call   08569214 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0xbde>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0xbde
086ba91c +0xcc:  jmp    086ba929 <+0xd9>
086ba91e +0xce:  lea    -0x18(%ebp),%eax
086ba921 +0xd1:  mov    %eax,(%esp)
086ba924 +0xd4:  call   0845198c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x45a2>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x45a2
086ba929 +0xd9:  lea    -0x1c(%ebp),%eax
086ba92c +0xdc:  mov    %eax,0x4(%esp)
086ba930 +0xe0:  lea    -0x18(%ebp),%eax
086ba933 +0xe3:  mov    %eax,(%esp)
086ba936 +0xe6:  call   084502be <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2ed4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2ed4
086ba93b +0xeb:  test   %al,%al
086ba93d +0xed:  jne    086ba8a1 <+0x51>
086ba943 +0xf3:  mov    -0x4(%ebp),%ebx
086ba946 +0xf6:  leave
086ba947 +0xf7:  ret
```

## 反编译 C

```c
// WarRoom::UpdateBanList @ 0x86ba850

/* WarRoom::UpdateBanList() */

void __thiscall WarRoom::UpdateBanList(WarRoom *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
  local_20 [4];
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
  local_1c [4];
  undefined4 local_18;
  int local_14;
  int local_10;
  
  local_14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  std::
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>::
  begin(local_1c);
  std::
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>::
  end(local_20);
  while( true ) {
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)local_1c,
                       (_Rb_tree_iterator *)local_20);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator*
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)local_1c);
    local_10 = *(int *)(iVar2 + 4);
    iVar3 = local_14 - local_10;
    iVar2 = G_CDataManager();
    if (iVar3 < *(int *)(iVar2 + 0x88a0) / 1000) {
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)local_1c);
    }
    else {
      uVar4 = 0;
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)&local_18,(int)local_1c);
      std::
      map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
      ::erase((map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
               *)(this + 0x1d8),local_18,uVar4);
    }
  }
  return;
}
```

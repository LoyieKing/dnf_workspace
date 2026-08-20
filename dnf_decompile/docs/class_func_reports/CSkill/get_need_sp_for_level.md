# get_need_sp_for_level

`_ZNK6CSkill21get_need_sp_for_levelEii`

`CSkill::get_need_sp_for_level(int, int) const`

| 类 | 地址 |
|---|---|
| `CSkill` | `0x083502c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083502c8  _ZNK6CSkill21get_need_sp_for_levelEii
#           CSkill::get_need_sp_for_level(int, int) const
# range [0x083502c8, 0x0835039d]
083502c8 +0x00:  push   %ebp
083502c9 +0x01:  mov    %esp,%ebp
083502cb +0x03:  sub    $0x48,%esp
083502ce +0x06:  lea    -0x1c(%ebp),%eax
083502d1 +0x09:  mov    %eax,(%esp)
083502d4 +0x0c:  call   0838f544 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1efe4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1efe4
083502d9 +0x11:  mov    0x8(%ebp),%eax
083502dc +0x14:  add    $0x8,%eax
083502df +0x17:  mov    %eax,(%esp)
083502e2 +0x1a:  call   08235b76 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb220>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb220
083502e7 +0x1f:  mov    %eax,-0x14(%ebp)
083502ea +0x22:  mov    -0x14(%ebp),%eax
083502ed +0x25:  cmp    0x10(%ebp),%eax
083502f0 +0x28:  jge    083502fc <+0x34>
083502f2 +0x2a:  mov    $0xffffffff,%eax
083502f7 +0x2f:  jmp    0835039b <+0xd3>
083502fc +0x34:  cmpl   $0x0,0xc(%ebp)
08350300 +0x38:  jns    0835030c <+0x44>
08350302 +0x3a:  mov    $0xffffffff,%eax
08350307 +0x3f:  jmp    0835039b <+0xd3>
0835030c +0x44:  movl   $0x0,-0x10(%ebp)
08350313 +0x4b:  mov    0x8(%ebp),%eax
08350316 +0x4e:  lea    0x8(%eax),%edx
08350319 +0x51:  lea    -0x2c(%ebp),%eax
0835031c +0x54:  mov    %edx,0x4(%esp)
08350320 +0x58:  mov    %eax,(%esp)
08350323 +0x5b:  call   08238974 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe01e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe01e
08350328 +0x60:  sub    $0x4,%esp
0835032b +0x63:  mov    -0x2c(%ebp),%eax
0835032e +0x66:  mov    %eax,-0x1c(%ebp)
08350331 +0x69:  movl   $0x1,-0xc(%ebp)
08350338 +0x70:  jmp    0835037b <+0xb3>
0835033a +0x72:  mov    -0xc(%ebp),%eax
0835033d +0x75:  cmp    0xc(%ebp),%eax
08350340 +0x78:  jle    0835035a <+0x92>
08350342 +0x7a:  mov    -0xc(%ebp),%eax
08350345 +0x7d:  cmp    0x10(%ebp),%eax
08350348 +0x80:  jge    0835035a <+0x92>
0835034a +0x82:  lea    -0x1c(%ebp),%eax
0835034d +0x85:  mov    %eax,(%esp)
08350350 +0x88:  call   0826cba0 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x146e>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x146e
08350355 +0x8d:  mov    (%eax),%eax
08350357 +0x8f:  add    %eax,-0x10(%ebp)
0835035a +0x92:  lea    -0x18(%ebp),%eax
0835035d +0x95:  movl   $0x0,0x8(%esp)
08350365 +0x9d:  lea    -0x1c(%ebp),%edx
08350368 +0xa0:  mov    %edx,0x4(%esp)
0835036c +0xa4:  mov    %eax,(%esp)
0835036f +0xa7:  call   0838f552 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1eff2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1eff2
08350374 +0xac:  sub    $0x4,%esp
08350377 +0xaf:  addl   $0x1,-0xc(%ebp)
0835037b +0xb3:  mov    -0xc(%ebp),%eax
0835037e +0xb6:  cmp    0x10(%ebp),%eax
08350381 +0xb9:  setl   %al
08350384 +0xbc:  test   %al,%al
08350386 +0xbe:  jne    0835033a <+0x72>
08350388 +0xc0:  lea    -0x1c(%ebp),%eax
0835038b +0xc3:  mov    %eax,(%esp)
0835038e +0xc6:  call   0826cba0 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x146e>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x146e
08350393 +0xcb:  mov    (%eax),%eax
08350395 +0xcd:  add    %eax,-0x10(%ebp)
08350398 +0xd0:  mov    -0x10(%ebp),%eax
0835039b +0xd3:  leave
0835039c +0xd4:  ret
0835039d +0xd5:  nop
```

## 反编译 C

```c
// CSkill::get_need_sp_for_level @ 0x83502c8

/* CSkill::get_need_sp_for_level(int, int) const */

int __thiscall CSkill::get_need_sp_for_level(CSkill *this,int param_1,int param_2)

{
  int *piVar1;
  _List_const_iterator<int> local_20 [4];
  _List_const_iterator<int> local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  
  std::_List_const_iterator<int>::_List_const_iterator(local_20);
  local_18 = std::list<int,std::allocator<int>>::size();
  if (local_18 < param_2) {
    local_14 = -1;
  }
  else if (param_1 < 0) {
    local_14 = -1;
  }
  else {
    local_14 = 0;
    std::list<int,std::allocator<int>>::begin();
    for (local_10 = 1; local_10 < param_2; local_10 = local_10 + 1) {
      if ((param_1 < local_10) && (local_10 < param_2)) {
        piVar1 = (int *)std::_List_const_iterator<int>::operator*(local_20);
        local_14 = local_14 + *piVar1;
      }
      std::_List_const_iterator<int>::operator++(local_1c,(int)local_20);
    }
    piVar1 = (int *)std::_List_const_iterator<int>::operator*(local_20);
    local_14 = local_14 + *piVar1;
  }
  return local_14;
}
```

# get_need_sfp_for_level

`_ZNK6CSkill22get_need_sfp_for_levelEii`

`CSkill::get_need_sfp_for_level(int, int) const`

| 类 | 地址 |
|---|---|
| `CSkill` | `0x083501a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083501a6  _ZNK6CSkill22get_need_sfp_for_levelEii
#           CSkill::get_need_sfp_for_level(int, int) const
# range [0x083501a6, 0x0835027b]
083501a6 +0x00:  push   %ebp
083501a7 +0x01:  mov    %esp,%ebp
083501a9 +0x03:  sub    $0x48,%esp
083501ac +0x06:  lea    -0x1c(%ebp),%eax
083501af +0x09:  mov    %eax,(%esp)
083501b2 +0x0c:  call   0838f544 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1efe4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1efe4
083501b7 +0x11:  mov    0x8(%ebp),%eax
083501ba +0x14:  add    $0x10,%eax
083501bd +0x17:  mov    %eax,(%esp)
083501c0 +0x1a:  call   08235b76 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb220>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb220
083501c5 +0x1f:  mov    %eax,-0x14(%ebp)
083501c8 +0x22:  mov    -0x14(%ebp),%eax
083501cb +0x25:  cmp    0x10(%ebp),%eax
083501ce +0x28:  jge    083501da <+0x34>
083501d0 +0x2a:  mov    $0xffffffff,%eax
083501d5 +0x2f:  jmp    08350279 <+0xd3>
083501da +0x34:  cmpl   $0x0,0xc(%ebp)
083501de +0x38:  jns    083501ea <+0x44>
083501e0 +0x3a:  mov    $0xffffffff,%eax
083501e5 +0x3f:  jmp    08350279 <+0xd3>
083501ea +0x44:  movl   $0x0,-0x10(%ebp)
083501f1 +0x4b:  mov    0x8(%ebp),%eax
083501f4 +0x4e:  lea    0x10(%eax),%edx
083501f7 +0x51:  lea    -0x2c(%ebp),%eax
083501fa +0x54:  mov    %edx,0x4(%esp)
083501fe +0x58:  mov    %eax,(%esp)
08350201 +0x5b:  call   08238974 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe01e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe01e
08350206 +0x60:  sub    $0x4,%esp
08350209 +0x63:  mov    -0x2c(%ebp),%eax
0835020c +0x66:  mov    %eax,-0x1c(%ebp)
0835020f +0x69:  movl   $0x1,-0xc(%ebp)
08350216 +0x70:  jmp    08350259 <+0xb3>
08350218 +0x72:  mov    -0xc(%ebp),%eax
0835021b +0x75:  cmp    0xc(%ebp),%eax
0835021e +0x78:  jle    08350238 <+0x92>
08350220 +0x7a:  mov    -0xc(%ebp),%eax
08350223 +0x7d:  cmp    0x10(%ebp),%eax
08350226 +0x80:  jge    08350238 <+0x92>
08350228 +0x82:  lea    -0x1c(%ebp),%eax
0835022b +0x85:  mov    %eax,(%esp)
0835022e +0x88:  call   0826cba0 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x146e>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x146e
08350233 +0x8d:  mov    (%eax),%eax
08350235 +0x8f:  add    %eax,-0x10(%ebp)
08350238 +0x92:  lea    -0x18(%ebp),%eax
0835023b +0x95:  movl   $0x0,0x8(%esp)
08350243 +0x9d:  lea    -0x1c(%ebp),%edx
08350246 +0xa0:  mov    %edx,0x4(%esp)
0835024a +0xa4:  mov    %eax,(%esp)
0835024d +0xa7:  call   0838f552 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1eff2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1eff2
08350252 +0xac:  sub    $0x4,%esp
08350255 +0xaf:  addl   $0x1,-0xc(%ebp)
08350259 +0xb3:  mov    -0xc(%ebp),%eax
0835025c +0xb6:  cmp    0x10(%ebp),%eax
0835025f +0xb9:  setl   %al
08350262 +0xbc:  test   %al,%al
08350264 +0xbe:  jne    08350218 <+0x72>
08350266 +0xc0:  lea    -0x1c(%ebp),%eax
08350269 +0xc3:  mov    %eax,(%esp)
0835026c +0xc6:  call   0826cba0 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x146e>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x146e
08350271 +0xcb:  mov    (%eax),%eax
08350273 +0xcd:  add    %eax,-0x10(%ebp)
08350276 +0xd0:  mov    -0x10(%ebp),%eax
08350279 +0xd3:  leave
0835027a +0xd4:  ret
0835027b +0xd5:  nop
```

## 反编译 C

```c
// CSkill::get_need_sfp_for_level @ 0x83501a6

/* CSkill::get_need_sfp_for_level(int, int) const */

int __thiscall CSkill::get_need_sfp_for_level(CSkill *this,int param_1,int param_2)

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

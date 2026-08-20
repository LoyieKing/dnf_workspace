# _findFullIPCount

`_ZN8WongWork26CAutoPunishRuleHackTypeMgr16_findFullIPCountEjjPKc`

`WongWork::CAutoPunishRuleHackTypeMgr::_findFullIPCount(unsigned int, unsigned int, char const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CAutoPunishRuleHackTypeMgr` | `0x080f9574` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f9574  _ZN8WongWork26CAutoPunishRuleHackTypeMgr16_findFullIPCountEjjPKc
#           WongWork::CAutoPunishRuleHackTypeMgr::_findFullIPCount(unsigned int, unsigned int, char const*)
# range [0x080f9574, 0x080f9679]
080f9574 +0x000:  push   %ebp
080f9575 +0x001:  mov    %esp,%ebp
080f9577 +0x003:  sub    $0x48,%esp
080f957a +0x006:  mov    0xc(%ebp),%eax
080f957d +0x009:  mov    %ax,-0x12(%ebp)
080f9581 +0x00d:  mov    0x8(%ebp),%eax
080f9584 +0x010:  lea    0x40(%eax),%ecx
080f9587 +0x013:  lea    -0x18(%ebp),%eax
080f958a +0x016:  lea    -0x12(%ebp),%edx
080f958d +0x019:  mov    %edx,0x8(%esp)
080f9591 +0x01d:  mov    %ecx,0x4(%esp)
080f9595 +0x021:  mov    %eax,(%esp)
080f9598 +0x024:  call   080fa07a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x886>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x886
080f959d +0x029:  sub    $0x4,%esp
080f95a0 +0x02c:  lea    -0x18(%ebp),%eax
080f95a3 +0x02f:  mov    %eax,0x4(%esp)
080f95a7 +0x033:  lea    -0x1c(%ebp),%eax
080f95aa +0x036:  mov    %eax,(%esp)
080f95ad +0x039:  call   080fa0a6 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x8b2>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x8b2
080f95b2 +0x03e:  mov    0xc(%ebp),%eax
080f95b5 +0x041:  mov    %ax,-0xa(%ebp)
080f95b9 +0x045:  mov    0x8(%ebp),%eax
080f95bc +0x048:  lea    0x40(%eax),%ecx
080f95bf +0x04b:  lea    -0x10(%ebp),%eax
080f95c2 +0x04e:  lea    -0xa(%ebp),%edx
080f95c5 +0x051:  mov    %edx,0x8(%esp)
080f95c9 +0x055:  mov    %ecx,0x4(%esp)
080f95cd +0x059:  mov    %eax,(%esp)
080f95d0 +0x05c:  call   080fa0b6 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x8c2>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x8c2
080f95d5 +0x061:  sub    $0x4,%esp
080f95d8 +0x064:  lea    -0x10(%ebp),%eax
080f95db +0x067:  mov    %eax,0x4(%esp)
080f95df +0x06b:  lea    -0x20(%ebp),%eax
080f95e2 +0x06e:  mov    %eax,(%esp)
080f95e5 +0x071:  call   080fa0a6 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x8b2>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x8b2
080f95ea +0x076:  jmp    080f9658 <+0xe4>
080f95ec +0x078:  lea    -0x1c(%ebp),%eax
080f95ef +0x07b:  mov    %eax,(%esp)
080f95f2 +0x07e:  call   080fa114 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x920>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x920
080f95f7 +0x083:  mov    0x4(%eax),%edx
080f95fa +0x086:  mov    %edx,-0x38(%ebp)
080f95fd +0x089:  mov    0x8(%eax),%edx
080f9600 +0x08c:  mov    %edx,-0x34(%ebp)
080f9603 +0x08f:  mov    0xc(%eax),%edx
080f9606 +0x092:  mov    %edx,-0x30(%ebp)
080f9609 +0x095:  mov    0x10(%eax),%edx
080f960c +0x098:  mov    %edx,-0x2c(%ebp)
080f960f +0x09b:  mov    0x14(%eax),%edx
080f9612 +0x09e:  mov    %edx,-0x28(%ebp)
080f9615 +0x0a1:  mov    0x18(%eax),%eax
080f9618 +0x0a4:  mov    %eax,-0x24(%ebp)
080f961b +0x0a7:  movzwl -0x36(%ebp),%eax
080f961f +0x0ab:  movzwl %ax,%eax
080f9622 +0x0ae:  cmp    0x10(%ebp),%eax
080f9625 +0x0b1:  jne    080f964d <+0xd9>
080f9627 +0x0b3:  movl   $0x10,0x8(%esp)
080f962f +0x0bb:  lea    -0x38(%ebp),%eax
080f9632 +0x0be:  add    $0x4,%eax
080f9635 +0x0c1:  mov    %eax,0x4(%esp)
080f9639 +0x0c5:  mov    0x14(%ebp),%eax
080f963c +0x0c8:  mov    %eax,(%esp)
080f963f +0x0cb:  call   0807e8c0 <_init+0x11b8>
080f9644 +0x0d0:  test   %eax,%eax
080f9646 +0x0d2:  jne    080f964d <+0xd9>
080f9648 +0x0d4:  mov    -0x24(%ebp),%eax
080f964b +0x0d7:  jmp    080f9677 <+0x103>
080f964d +0x0d9:  lea    -0x1c(%ebp),%eax
080f9650 +0x0dc:  mov    %eax,(%esp)
080f9653 +0x0df:  call   080fa0f6 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x902>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x902
080f9658 +0x0e4:  lea    -0x20(%ebp),%eax
080f965b +0x0e7:  mov    %eax,0x4(%esp)
080f965f +0x0eb:  lea    -0x1c(%ebp),%eax
080f9662 +0x0ee:  mov    %eax,(%esp)
080f9665 +0x0f1:  call   080fa0e2 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x8ee>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x8ee
080f966a +0x0f6:  test   %al,%al
080f966c +0x0f8:  jne    080f95ec <+0x78>
080f9672 +0x0fe:  mov    $0x0,%eax
080f9677 +0x103:  leave
080f9678 +0x104:  ret
080f9679 +0x105:  nop
```

## 反编译 C

```c
// WongWork::CAutoPunishRuleHackTypeMgr::_findFullIPCount @ 0x80f9574

/* WongWork::CAutoPunishRuleHackTypeMgr::_findFullIPCount(unsigned int, unsigned int, char const*)
    */

undefined4 __thiscall
WongWork::CAutoPunishRuleHackTypeMgr::_findFullIPCount
          (CAutoPunishRuleHackTypeMgr *this,uint param_1,uint param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  _Rb_tree_const_iterator<std::pair<unsigned_short_const,WongWork::HackFullIPCounter_t>>
  local_24 [4];
  _Rb_tree_const_iterator<std::pair<unsigned_short_const,WongWork::HackFullIPCounter_t>>
  local_20 [4];
  multimap<unsigned_short,WongWork::HackFullIPCounter_t,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,WongWork::HackFullIPCounter_t>>>
  local_1c [6];
  undefined2 local_16;
  multimap<unsigned_short,WongWork::HackFullIPCounter_t,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,WongWork::HackFullIPCounter_t>>>
  local_14 [6];
  undefined2 local_e;
  
  local_16 = (short)param_1;
  std::
  multimap<unsigned_short,WongWork::HackFullIPCounter_t,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,WongWork::HackFullIPCounter_t>>>
  ::lower_bound(local_1c,(ushort *)(this + 0x40));
  std::_Rb_tree_const_iterator<std::pair<unsigned_short_const,WongWork::HackFullIPCounter_t>>::
  _Rb_tree_const_iterator(local_20,(_Rb_tree_iterator *)local_1c);
  local_e = (short)param_1;
  std::
  multimap<unsigned_short,WongWork::HackFullIPCounter_t,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,WongWork::HackFullIPCounter_t>>>
  ::upper_bound(local_14,(ushort *)(this + 0x40));
  std::_Rb_tree_const_iterator<std::pair<unsigned_short_const,WongWork::HackFullIPCounter_t>>::
  _Rb_tree_const_iterator(local_24,(_Rb_tree_iterator *)local_14);
  while( true ) {
    cVar1 = std::
            _Rb_tree_const_iterator<std::pair<unsigned_short_const,WongWork::HackFullIPCounter_t>>::
            operator!=(local_20,(_Rb_tree_const_iterator *)local_24);
    if (cVar1 == '\0') {
      return 0;
    }
    iVar2 = std::
            _Rb_tree_const_iterator<std::pair<unsigned_short_const,WongWork::HackFullIPCounter_t>>::
            operator->(local_20);
    local_38 = *(undefined4 *)(iVar2 + 8);
    local_34 = *(undefined4 *)(iVar2 + 0xc);
    local_30 = *(undefined4 *)(iVar2 + 0x10);
    local_2c = *(undefined4 *)(iVar2 + 0x14);
    local_28 = *(undefined4 *)(iVar2 + 0x18);
    if ((*(uint *)(iVar2 + 4) >> 0x10 == param_2) &&
       (iVar2 = strncmp(param_3,(char *)&local_38,0x10), iVar2 == 0)) break;
    std::_Rb_tree_const_iterator<std::pair<unsigned_short_const,WongWork::HackFullIPCounter_t>>::
    operator++(local_20);
  }
  return local_28;
}
```

# _Rb_tree_insert_and_rebalance

`_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_`

`std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)`

| 类 | 地址 |
|---|---|
| `std` | `0x086df9d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086df9d0  _ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_
#           std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
# range [0x086df9d0, 0x086dfc6f]
086df9d0 +0x000:  push   %ebp
086df9d1 +0x001:  mov    %esp,%ebp
086df9d3 +0x003:  push   %edi
086df9d4 +0x004:  push   %esi
086df9d5 +0x005:  push   %ebx
086df9d6 +0x006:  sub    $0x4,%esp
086df9d9 +0x009:  mov    0xc(%ebp),%ecx
086df9dc +0x00c:  mov    0x10(%ebp),%eax
086df9df +0x00f:  cmpb   $0x0,0x8(%ebp)
086df9e3 +0x013:  movl   $0x0,0x8(%ecx)
086df9ea +0x01a:  mov    %eax,0x4(%ecx)
086df9ed +0x01d:  movl   $0x0,0xc(%ecx)
086df9f4 +0x024:  movl   $0x0,(%ecx)
086df9fa +0x02a:  je     086dfa20 <+0x50>
086df9fc +0x02c:  cmp    0x14(%ebp),%eax
086df9ff +0x02f:  mov    %ecx,0x8(%eax)
086dfa02 +0x032:  je     086dfbd0 <+0x200>
086dfa08 +0x038:  mov    0x14(%ebp),%edx
086dfa0b +0x03b:  cmp    %eax,0x8(%edx)
086dfa0e +0x03e:  je     086dfc50 <+0x280>
086dfa14 +0x044:  mov    0x4(%edx),%ebx
086dfa17 +0x047:  mov    %ebx,-0x10(%ebp)
086dfa1a +0x04a:  jmp    086dfa38 <+0x68>
086dfa1c +0x04c:  lea    0x0(%esi,%eiz,1),%esi
086dfa20 +0x050:  mov    0x14(%ebp),%ebx
086dfa23 +0x053:  mov    %ecx,0xc(%eax)
086dfa26 +0x056:  cmp    %eax,0xc(%ebx)
086dfa29 +0x059:  je     086dfbe1 <+0x211>
086dfa2f +0x05f:  mov    0x4(%ebx),%eax
086dfa32 +0x062:  mov    %eax,-0x10(%ebp)
086dfa35 +0x065:  lea    0x0(%esi),%esi
086dfa38 +0x068:  cmp    %ecx,-0x10(%ebp)
086dfa3b +0x06b:  je     086dfa46 <+0x76>
086dfa3d +0x06d:  mov    0x4(%ecx),%eax
086dfa40 +0x070:  mov    (%eax),%ebx
086dfa42 +0x072:  test   %ebx,%ebx
086dfa44 +0x074:  je     086dfa58 <+0x88>
086dfa46 +0x076:  mov    -0x10(%ebp),%ecx
086dfa49 +0x079:  movl   $0x1,(%ecx)
086dfa4f +0x07f:  add    $0x4,%esp
086dfa52 +0x082:  pop    %ebx
086dfa53 +0x083:  pop    %esi
086dfa54 +0x084:  pop    %edi
086dfa55 +0x085:  pop    %ebp
086dfa56 +0x086:  ret
086dfa57 +0x087:  nop
086dfa58 +0x088:  mov    0x4(%eax),%esi
086dfa5b +0x08b:  mov    0x8(%esi),%ebx
086dfa5e +0x08e:  mov    %esi,%edx
086dfa60 +0x090:  cmp    %ebx,%eax
086dfa62 +0x092:  je     086dfaf8 <+0x128>
086dfa68 +0x098:  test   %ebx,%ebx
086dfa6a +0x09a:  je     086dfa90 <+0xc0>
086dfa6c +0x09c:  mov    (%ebx),%edi
086dfa6e +0x09e:  test   %edi,%edi
086dfa70 +0x0a0:  jne    086dfa90 <+0xc0>
086dfa72 +0x0a2:  movl   $0x1,(%eax)
086dfa78 +0x0a8:  mov    %esi,%eax
086dfa7a +0x0aa:  movl   $0x1,(%ebx)
086dfa80 +0x0b0:  mov    %eax,%ecx
086dfa82 +0x0b2:  movl   $0x0,(%esi)
086dfa88 +0x0b8:  jmp    086dfa38 <+0x68>
086dfa8a +0x0ba:  lea    0x0(%esi),%esi
086dfa90 +0x0c0:  mov    0x8(%eax),%ebx
086dfa93 +0x0c3:  cmp    %ecx,%ebx
086dfa95 +0x0c5:  je     086dfb80 <+0x1b0>
086dfa9b +0x0cb:  mov    %eax,%ebx
086dfa9d +0x0cd:  mov    %ecx,%eax
086dfa9f +0x0cf:  mov    0xc(%edx),%ecx
086dfaa2 +0x0d2:  movl   $0x1,(%ebx)
086dfaa8 +0x0d8:  movl   $0x0,(%edx)
086dfaae +0x0de:  mov    0x8(%ecx),%ebx
086dfab1 +0x0e1:  test   %ebx,%ebx
086dfab3 +0x0e3:  mov    %ebx,0xc(%edx)
086dfab6 +0x0e6:  je     086dfabb <+0xeb>
086dfab8 +0x0e8:  mov    %edx,0x4(%ebx)
086dfabb +0x0eb:  mov    0x4(%edx),%ebx
086dfabe +0x0ee:  mov    %ebx,0x4(%ecx)
086dfac1 +0x0f1:  mov    0x14(%ebp),%ebx
086dfac4 +0x0f4:  cmp    0x4(%ebx),%edx
086dfac7 +0x0f7:  je     086dfbc0 <+0x1f0>
086dfacd +0x0fd:  mov    0x4(%edx),%ebx
086dfad0 +0x100:  cmp    0x8(%ebx),%edx
086dfad3 +0x103:  je     086dfbc8 <+0x1f8>
086dfad9 +0x109:  mov    %ecx,0xc(%ebx)
086dfadc +0x10c:  mov    %ecx,0x4(%edx)
086dfadf +0x10f:  mov    %edx,0x8(%ecx)
086dfae2 +0x112:  mov    0x14(%ebp),%edx
086dfae5 +0x115:  mov    %eax,%ecx
086dfae7 +0x117:  mov    0x4(%edx),%edx
086dfaea +0x11a:  mov    %edx,-0x10(%ebp)
086dfaed +0x11d:  jmp    086dfa38 <+0x68>
086dfaf2 +0x122:  lea    0x0(%esi),%esi
086dfaf8 +0x128:  mov    0xc(%esi),%edi
086dfafb +0x12b:  test   %edi,%edi
086dfafd +0x12d:  je     086dfb20 <+0x150>
086dfaff +0x12f:  cmpl   $0x0,(%edi)
086dfb02 +0x132:  jne    086dfb20 <+0x150>
086dfb04 +0x134:  movl   $0x1,(%eax)
086dfb0a +0x13a:  mov    %esi,%eax
086dfb0c +0x13c:  movl   $0x1,(%edi)
086dfb12 +0x142:  mov    %eax,%ecx
086dfb14 +0x144:  movl   $0x0,(%esi)
086dfb1a +0x14a:  jmp    086dfa38 <+0x68>
086dfb1f +0x14f:  nop
086dfb20 +0x150:  mov    0xc(%eax),%edi
086dfb23 +0x153:  cmp    %ecx,%edi
086dfb25 +0x155:  je     086dfbf8 <+0x228>
086dfb2b +0x15b:  mov    %eax,%edi
086dfb2d +0x15d:  mov    %ecx,%eax
086dfb2f +0x15f:  mov    0xc(%ebx),%ecx
086dfb32 +0x162:  movl   $0x1,(%edi)
086dfb38 +0x168:  movl   $0x0,(%edx)
086dfb3e +0x16e:  test   %ecx,%ecx
086dfb40 +0x170:  mov    %ecx,0x8(%edx)
086dfb43 +0x173:  je     086dfb48 <+0x178>
086dfb45 +0x175:  mov    %edx,0x4(%ecx)
086dfb48 +0x178:  mov    0x4(%edx),%ecx
086dfb4b +0x17b:  mov    %ecx,0x4(%ebx)
086dfb4e +0x17e:  mov    0x14(%ebp),%ecx
086dfb51 +0x181:  cmp    0x4(%ecx),%edx
086dfb54 +0x184:  je     086dfc30 <+0x260>
086dfb5a +0x18a:  mov    0x4(%edx),%ecx
086dfb5d +0x18d:  cmp    0xc(%ecx),%edx
086dfb60 +0x190:  je     086dfc38 <+0x268>
086dfb66 +0x196:  mov    %ebx,0x8(%ecx)
086dfb69 +0x199:  mov    %ebx,0x4(%edx)
086dfb6c +0x19c:  mov    %eax,%ecx
086dfb6e +0x19e:  mov    %edx,0xc(%ebx)
086dfb71 +0x1a1:  mov    0x14(%ebp),%ebx
086dfb74 +0x1a4:  mov    0x4(%ebx),%ebx
086dfb77 +0x1a7:  mov    %ebx,-0x10(%ebp)
086dfb7a +0x1aa:  jmp    086dfa38 <+0x68>
086dfb7f +0x1af:  nop
086dfb80 +0x1b0:  mov    0xc(%ecx),%ecx
086dfb83 +0x1b3:  test   %ecx,%ecx
086dfb85 +0x1b5:  mov    %ecx,0x8(%eax)
086dfb88 +0x1b8:  je     086dfb90 <+0x1c0>
086dfb8a +0x1ba:  mov    %eax,0x4(%ecx)
086dfb8d +0x1bd:  mov    0x4(%eax),%esi
086dfb90 +0x1c0:  mov    0x14(%ebp),%ecx
086dfb93 +0x1c3:  mov    %esi,0x4(%ebx)
086dfb96 +0x1c6:  cmp    0x4(%ecx),%eax
086dfb99 +0x1c9:  je     086dfc40 <+0x270>
086dfb9f +0x1cf:  mov    0x4(%eax),%ecx
086dfba2 +0x1d2:  cmp    0xc(%ecx),%eax
086dfba5 +0x1d5:  je     086dfc48 <+0x278>
086dfbab +0x1db:  mov    %ebx,0x8(%ecx)
086dfbae +0x1de:  mov    %eax,0xc(%ebx)
086dfbb1 +0x1e1:  mov    %ebx,0x4(%eax)
086dfbb4 +0x1e4:  jmp    086dfa9f <+0xcf>
086dfbb9 +0x1e9:  lea    0x0(%esi,%eiz,1),%esi
086dfbc0 +0x1f0:  mov    %ecx,0x4(%ebx)
086dfbc3 +0x1f3:  jmp    086dfadc <+0x10c>
086dfbc8 +0x1f8:  mov    %ecx,0x8(%ebx)
086dfbcb +0x1fb:  jmp    086dfadc <+0x10c>
086dfbd0 +0x200:  mov    0x14(%ebp),%eax
086dfbd3 +0x203:  mov    %ecx,-0x10(%ebp)
086dfbd6 +0x206:  mov    %ecx,0x4(%eax)
086dfbd9 +0x209:  mov    %ecx,0xc(%eax)
086dfbdc +0x20c:  jmp    086dfa38 <+0x68>
086dfbe1 +0x211:  mov    0x14(%ebp),%edx
086dfbe4 +0x214:  mov    0x4(%edx),%ebx
086dfbe7 +0x217:  mov    %ecx,0xc(%edx)
086dfbea +0x21a:  mov    %ebx,-0x10(%ebp)
086dfbed +0x21d:  jmp    086dfa38 <+0x68>
086dfbf2 +0x222:  lea    0x0(%esi),%esi
086dfbf8 +0x228:  mov    0x8(%ecx),%ecx
086dfbfb +0x22b:  test   %ecx,%ecx
086dfbfd +0x22d:  mov    %ecx,0xc(%eax)
086dfc00 +0x230:  je     086dfc08 <+0x238>
086dfc02 +0x232:  mov    %eax,0x4(%ecx)
086dfc05 +0x235:  mov    0x4(%eax),%esi
086dfc08 +0x238:  mov    0x14(%ebp),%ecx
086dfc0b +0x23b:  mov    %esi,0x4(%edi)
086dfc0e +0x23e:  cmp    0x4(%ecx),%eax
086dfc11 +0x241:  je     086dfc61 <+0x291>
086dfc13 +0x243:  mov    0x4(%eax),%ecx
086dfc16 +0x246:  cmp    0x8(%ecx),%eax
086dfc19 +0x249:  je     086dfc66 <+0x296>
086dfc1b +0x24b:  mov    %edi,0xc(%ecx)
086dfc1e +0x24e:  mov    %eax,0x8(%edi)
086dfc21 +0x251:  mov    0x8(%edx),%ebx
086dfc24 +0x254:  mov    %edi,0x4(%eax)
086dfc27 +0x257:  jmp    086dfb2f <+0x15f>
086dfc2c +0x25c:  lea    0x0(%esi,%eiz,1),%esi
086dfc30 +0x260:  mov    %ebx,0x4(%ecx)
086dfc33 +0x263:  jmp    086dfb69 <+0x199>
086dfc38 +0x268:  mov    %ebx,0xc(%ecx)
086dfc3b +0x26b:  jmp    086dfb69 <+0x199>
086dfc40 +0x270:  mov    %ebx,0x4(%ecx)
086dfc43 +0x273:  jmp    086dfbae <+0x1de>
086dfc48 +0x278:  mov    %ebx,0xc(%ecx)
086dfc4b +0x27b:  jmp    086dfbae <+0x1de>
086dfc50 +0x280:  mov    0x14(%ebp),%eax
086dfc53 +0x283:  mov    0x4(%eax),%edx
086dfc56 +0x286:  mov    %ecx,0x8(%eax)
086dfc59 +0x289:  mov    %edx,-0x10(%ebp)
086dfc5c +0x28c:  jmp    086dfa38 <+0x68>
086dfc61 +0x291:  mov    %edi,0x4(%ecx)
086dfc64 +0x294:  jmp    086dfc1e <+0x24e>
086dfc66 +0x296:  mov    %edi,0x8(%ecx)
086dfc69 +0x299:  jmp    086dfc1e <+0x24e>
086dfc6b +0x29b:  nop
086dfc6c +0x29c:  nop
086dfc6d +0x29d:  nop
086dfc6e +0x29e:  nop
086dfc6f +0x29f:  nop
```

## 反编译 C

```c
// std::_Rb_tree_insert_and_rebalance @ 0x86df9d0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*,
   std::_Rb_tree_node_base&) */

void std::_Rb_tree_insert_and_rebalance
               (bool param_1,_Rb_tree_node_base *param_2,_Rb_tree_node_base *param_3,
               _Rb_tree_node_base *param_4)

{
  _Base_ptr p_Var1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  _Base_ptr p_Var4;
  _Base_ptr p_Var5;
  _Rb_tree_node_base *local_14;
  
  param_2->_M_left = (_Base_ptr)0x0;
  param_2->_M_parent = param_3;
  param_2->_M_right = (_Base_ptr)0x0;
  param_2->_M_color = _S_red;
  if (param_1) {
    param_3->_M_left = param_2;
    if (param_3 == param_4) {
      local_14 = param_2;
      param_4->_M_parent = param_2;
      param_4->_M_right = param_2;
    }
    else if (param_4->_M_left == param_3) {
      local_14 = param_4->_M_parent;
      param_4->_M_left = param_2;
    }
    else {
      local_14 = param_4->_M_parent;
    }
  }
  else {
    param_3->_M_right = param_2;
    if (param_4->_M_right == param_3) {
      local_14 = param_4->_M_parent;
      param_4->_M_right = param_2;
    }
    else {
      local_14 = param_4->_M_parent;
    }
  }
  while ((local_14 != param_2 && (p_Var3 = param_2->_M_parent, p_Var3->_M_color == _S_red))) {
    p_Var1 = p_Var3->_M_parent;
    p_Var4 = p_Var1->_M_left;
    if (p_Var3 == p_Var4) {
      p_Var5 = p_Var1->_M_right;
      if ((p_Var5 == (_Base_ptr)0x0) || (p_Var5->_M_color != _S_red)) {
        p_Var2 = p_Var3->_M_right;
        if (p_Var2 == param_2) {
          p_Var4 = param_2->_M_left;
          p_Var3->_M_right = p_Var4;
          p_Var5 = p_Var1;
          if (p_Var4 != (_Base_ptr)0x0) {
            p_Var4->_M_parent = p_Var3;
            p_Var5 = p_Var3->_M_parent;
          }
          p_Var2->_M_parent = p_Var5;
          if (p_Var3 == param_4->_M_parent) {
            param_4->_M_parent = p_Var2;
          }
          else {
            p_Var4 = p_Var3->_M_parent;
            if (p_Var3 == p_Var4->_M_left) {
              p_Var4->_M_left = p_Var2;
            }
            else {
              p_Var4->_M_right = p_Var2;
            }
          }
          p_Var2->_M_left = p_Var3;
          p_Var4 = p_Var1->_M_left;
          p_Var3->_M_parent = p_Var2;
          param_2 = p_Var3;
          p_Var3 = p_Var2;
        }
        p_Var5 = p_Var4->_M_right;
        p_Var3->_M_color = _S_black;
        p_Var1->_M_color = _S_red;
        p_Var1->_M_left = p_Var5;
        if (p_Var5 != (_Base_ptr)0x0) {
          p_Var5->_M_parent = p_Var1;
        }
        p_Var4->_M_parent = p_Var1->_M_parent;
        if (p_Var1 == param_4->_M_parent) {
          param_4->_M_parent = p_Var4;
        }
        else {
          p_Var5 = p_Var1->_M_parent;
          if (p_Var1 == p_Var5->_M_right) {
            p_Var5->_M_right = p_Var4;
          }
          else {
            p_Var5->_M_left = p_Var4;
          }
        }
        p_Var1->_M_parent = p_Var4;
        p_Var4->_M_right = p_Var1;
        local_14 = param_4->_M_parent;
      }
      else {
        p_Var3->_M_color = _S_black;
        p_Var5->_M_color = _S_black;
        p_Var1->_M_color = _S_red;
        param_2 = p_Var1;
      }
    }
    else if ((p_Var4 == (_Rb_tree_node_base *)0x0) || (p_Var4->_M_color != _S_red)) {
      p_Var2 = p_Var3->_M_left;
      if (p_Var2 == param_2) {
        p_Var4 = param_2->_M_right;
        p_Var3->_M_left = p_Var4;
        p_Var5 = p_Var1;
        if (p_Var4 != (_Base_ptr)0x0) {
          p_Var4->_M_parent = p_Var3;
          p_Var5 = p_Var3->_M_parent;
        }
        p_Var2->_M_parent = p_Var5;
        if (p_Var3 == param_4->_M_parent) {
          param_4->_M_parent = p_Var2;
        }
        else {
          p_Var4 = p_Var3->_M_parent;
          if (p_Var3 == p_Var4->_M_right) {
            p_Var4->_M_right = p_Var2;
          }
          else {
            p_Var4->_M_left = p_Var2;
          }
        }
        p_Var2->_M_right = p_Var3;
        p_Var3->_M_parent = p_Var2;
        param_2 = p_Var3;
        p_Var3 = p_Var2;
      }
      p_Var4 = p_Var1->_M_right;
      p_Var3->_M_color = _S_black;
      p_Var1->_M_color = _S_red;
      p_Var5 = p_Var4->_M_left;
      p_Var1->_M_right = p_Var5;
      if (p_Var5 != (_Base_ptr)0x0) {
        p_Var5->_M_parent = p_Var1;
      }
      p_Var4->_M_parent = p_Var1->_M_parent;
      if (p_Var1 == param_4->_M_parent) {
        param_4->_M_parent = p_Var4;
      }
      else {
        p_Var5 = p_Var1->_M_parent;
        if (p_Var1 == p_Var5->_M_left) {
          p_Var5->_M_left = p_Var4;
        }
        else {
          p_Var5->_M_right = p_Var4;
        }
      }
      p_Var1->_M_parent = p_Var4;
      p_Var4->_M_left = p_Var1;
      local_14 = param_4->_M_parent;
    }
    else {
      p_Var3->_M_color = _S_black;
      p_Var4->_M_color = _S_black;
      p_Var1->_M_color = _S_red;
      param_2 = p_Var1;
    }
  }
  local_14->_M_color = _S_black;
  return;
}
```

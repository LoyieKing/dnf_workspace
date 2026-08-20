# calUsedQp

`_ZN10CQuestShop9calUsedQpEv`

`CQuestShop::calUsedQp()`

| 类 | 地址 |
|---|---|
| `CQuestShop` | `0x085ef214` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ef214  _ZN10CQuestShop9calUsedQpEv
#           CQuestShop::calUsedQp()
# range [0x085ef214, 0x085ef305]
085ef214 +0x00:  push   %ebp
085ef215 +0x01:  mov    %esp,%ebp
085ef217 +0x03:  sub    $0x38,%esp
085ef21a +0x06:  movb   $0x0,-0x19(%ebp)
085ef21e +0x0a:  movl   $0x0,-0x18(%ebp)
085ef225 +0x11:  mov    0x8(%ebp),%eax
085ef228 +0x14:  lea    0x8(%eax),%edx
085ef22b +0x17:  lea    -0x20(%ebp),%eax
085ef22e +0x1a:  mov    %edx,0x4(%esp)
085ef232 +0x1e:  mov    %eax,(%esp)
085ef235 +0x21:  call   08450180 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2d96>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2d96
085ef23a +0x26:  sub    $0x4,%esp
085ef23d +0x29:  mov    0x8(%ebp),%eax
085ef240 +0x2c:  lea    0x8(%eax),%edx
085ef243 +0x2f:  lea    -0x24(%ebp),%eax
085ef246 +0x32:  mov    %edx,0x4(%esp)
085ef24a +0x36:  mov    %eax,(%esp)
085ef24d +0x39:  call   0845015a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2d70>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2d70
085ef252 +0x3e:  sub    $0x4,%esp
085ef255 +0x41:  jmp    085ef2e6 <+0xd2>
085ef25a +0x46:  movl   $0xffffffff,-0x14(%ebp)
085ef261 +0x4d:  lea    -0x24(%ebp),%eax
085ef264 +0x50:  mov    %eax,(%esp)
085ef267 +0x53:  call   084501ba <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dd0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dd0
085ef26c +0x58:  movzbl (%eax),%eax
085ef26f +0x5b:  movzbl %al,%eax
085ef272 +0x5e:  mov    %eax,-0x10(%ebp)
085ef275 +0x61:  lea    -0x24(%ebp),%eax
085ef278 +0x64:  mov    %eax,(%esp)
085ef27b +0x67:  call   084501ba <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dd0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dd0
085ef280 +0x6c:  movzwl 0x2(%eax),%eax
085ef284 +0x70:  cwtl
085ef285 +0x71:  mov    %eax,-0xc(%ebp)
085ef288 +0x74:  cmpl   $0x4c,-0x10(%ebp)
085ef28c +0x78:  jle    085ef295 <+0x81>
085ef28e +0x7a:  mov    $0xffffffff,%eax
085ef293 +0x7f:  jmp    085ef303 <+0xef>
085ef295 +0x81:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085ef29a +0x86:  mov    -0x10(%ebp),%edx
085ef29d +0x89:  movzbl 0x63c0(%eax,%edx,1),%eax
085ef2a5 +0x91:  movsbl %al,%eax
085ef2a8 +0x94:  mov    %eax,-0x14(%ebp)
085ef2ab +0x97:  mov    -0x14(%ebp),%eax
085ef2ae +0x9a:  movzbl %al,%eax
085ef2b1 +0x9d:  mov    %eax,0x4(%esp)
085ef2b5 +0xa1:  mov    0x8(%ebp),%eax
085ef2b8 +0xa4:  mov    %eax,(%esp)
085ef2bb +0xa7:  call   085eeda8 <_ZN10CQuestShop12findStatusQpEh>  ; CQuestShop::findStatusQp(unsigned char)
085ef2c0 +0xac:  mov    %al,-0x19(%ebp)
085ef2c3 +0xaf:  cmpb   $0x0,-0x19(%ebp)
085ef2c7 +0xb3:  jne    085ef2d0 <+0xbc>
085ef2c9 +0xb5:  mov    $0xffffffff,%eax
085ef2ce +0xba:  jmp    085ef303 <+0xef>
085ef2d0 +0xbc:  movzbl -0x19(%ebp),%eax
085ef2d4 +0xc0:  imul   -0xc(%ebp),%eax
085ef2d8 +0xc4:  add    %eax,-0x18(%ebp)
085ef2db +0xc7:  lea    -0x24(%ebp),%eax
085ef2de +0xca:  mov    %eax,(%esp)
085ef2e1 +0xcd:  call   084540e0 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6cf6>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6cf6
085ef2e6 +0xd2:  lea    -0x20(%ebp),%eax
085ef2e9 +0xd5:  mov    %eax,0x4(%esp)
085ef2ed +0xd9:  lea    -0x24(%ebp),%eax
085ef2f0 +0xdc:  mov    %eax,(%esp)
085ef2f3 +0xdf:  call   084501a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dbc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dbc
085ef2f8 +0xe4:  test   %al,%al
085ef2fa +0xe6:  jne    085ef25a <+0x46>
085ef300 +0xec:  mov    -0x18(%ebp),%eax
085ef303 +0xef:  leave
085ef304 +0xf0:  ret
085ef305 +0xf1:  nop
```

## 反编译 C

```c
// CQuestShop::calUsedQp @ 0x85ef214

/* CQuestShop::calUsedQp() */

int __thiscall CQuestShop::calUsedQp(CQuestShop *this)

{
  uchar uVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_28 [4];
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_24 [7];
  byte local_1d;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  
  local_1d = 0;
  local_1c = 0;
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::end(local_24);
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::begin(local_28);
  while( true ) {
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)local_28,
                       (_Rb_tree_iterator *)local_24);
    if (cVar2 == '\0') {
      return local_1c;
    }
    local_18 = 0xffffffff;
    pbVar3 = (byte *)std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->
                               ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)local_28)
    ;
    local_14 = (uint)*pbVar3;
    iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)local_28);
    local_10 = (int)*(short *)(iVar4 + 2);
    if (0x4c < (int)local_14) break;
    iVar4 = G_CDataManager();
    uVar1 = *(uchar *)(iVar4 + 0x63c0 + local_14);
    local_18 = (int)(char)uVar1;
    local_1d = findStatusQp(this,uVar1);
    if (local_1d == 0) {
      return -1;
    }
    local_1c = local_1c + (uint)local_1d * local_10;
    std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)local_28);
  }
  return -1;
}
```

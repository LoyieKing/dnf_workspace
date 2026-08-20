# getData

`_ZNK10CQuestShop7getDataEPc`

`CQuestShop::getData(char*) const`

| 类 | 地址 |
|---|---|
| `CQuestShop` | `0x085ef868` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ef868  _ZNK10CQuestShop7getDataEPc
#           CQuestShop::getData(char*) const
# range [0x085ef868, 0x085efa2b]
085ef868 +0x000:  push   %ebp
085ef869 +0x001:  mov    %esp,%ebp
085ef86b +0x003:  sub    $0x48,%esp
085ef86e +0x006:  mov    0xc(%ebp),%eax
085ef871 +0x009:  mov    %eax,-0x18(%ebp)
085ef874 +0x00c:  movl   $0x155,0x8(%esp)
085ef87c +0x014:  movl   $0x0,0x4(%esp)
085ef884 +0x01c:  mov    -0x18(%ebp),%eax
085ef887 +0x01f:  mov    %eax,(%esp)
085ef88a +0x022:  call   0807dcc0 <_init+0x5b8>
085ef88f +0x027:  mov    -0x18(%ebp),%eax
085ef892 +0x02a:  mov    %eax,-0x14(%ebp)
085ef895 +0x02d:  mov    0x8(%ebp),%eax
085ef898 +0x030:  mov    %eax,(%esp)
085ef89b +0x033:  call   085efeb0 <_GLOBAL__I__ZN10CQuestShopC2Ev+0x1c>  ; global constructors keyed to CQuestShop::CQuestShop()+0x1c
085ef8a0 +0x038:  mov    %eax,%edx
085ef8a2 +0x03a:  mov    -0x14(%ebp),%eax
085ef8a5 +0x03d:  mov    %edx,0x4(%eax)
085ef8a8 +0x040:  mov    0x8(%ebp),%eax
085ef8ab +0x043:  mov    %eax,(%esp)
085ef8ae +0x046:  call   085eff0a <_GLOBAL__I__ZN10CQuestShopC2Ev+0x76>  ; global constructors keyed to CQuestShop::CQuestShop()+0x76
085ef8b3 +0x04b:  mov    %eax,%edx
085ef8b5 +0x04d:  mov    -0x14(%ebp),%eax
085ef8b8 +0x050:  mov    %edx,0x8(%eax)
085ef8bb +0x053:  mov    0x8(%ebp),%eax
085ef8be +0x056:  mov    %eax,(%esp)
085ef8c1 +0x059:  call   085eff44 <_GLOBAL__I__ZN10CQuestShopC2Ev+0xb0>  ; global constructors keyed to CQuestShop::CQuestShop()+0xb0
085ef8c6 +0x05e:  mov    %eax,%edx
085ef8c8 +0x060:  mov    -0x14(%ebp),%eax
085ef8cb +0x063:  mov    %edx,0xa6(%eax)
085ef8d1 +0x069:  mov    0x8(%ebp),%eax
085ef8d4 +0x06c:  lea    0x8(%eax),%edx
085ef8d7 +0x06f:  lea    -0x1c(%ebp),%eax
085ef8da +0x072:  mov    %edx,0x4(%esp)
085ef8de +0x076:  mov    %eax,(%esp)
085ef8e1 +0x079:  call   08454124 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6d3a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6d3a
085ef8e6 +0x07e:  sub    $0x4,%esp
085ef8e9 +0x081:  mov    0x8(%ebp),%eax
085ef8ec +0x084:  lea    0x8(%eax),%edx
085ef8ef +0x087:  lea    -0x20(%ebp),%eax
085ef8f2 +0x08a:  mov    %edx,0x4(%esp)
085ef8f6 +0x08e:  mov    %eax,(%esp)
085ef8f9 +0x091:  call   084540fe <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6d14>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6d14
085ef8fe +0x096:  sub    $0x4,%esp
085ef901 +0x099:  jmp    085ef95c <+0xf4>
085ef903 +0x09b:  lea    -0x20(%ebp),%eax
085ef906 +0x09e:  mov    %eax,(%esp)
085ef909 +0x0a1:  call   0845415e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6d74>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6d74
085ef90e +0x0a6:  movzbl (%eax),%eax
085ef911 +0x0a9:  mov    %al,-0xf(%ebp)
085ef914 +0x0ac:  lea    -0x20(%ebp),%eax
085ef917 +0x0af:  mov    %eax,(%esp)
085ef91a +0x0b2:  call   0845415e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6d74>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6d74
085ef91f +0x0b7:  movzwl 0x2(%eax),%eax
085ef923 +0x0bb:  mov    %ax,-0xe(%ebp)
085ef927 +0x0bf:  lea    -0x20(%ebp),%eax
085ef92a +0x0c2:  mov    %eax,(%esp)
085ef92d +0x0c5:  call   0845415e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6d74>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6d74
085ef932 +0x0ca:  movzbl (%eax),%eax
085ef935 +0x0cd:  cmp    $0x4c,%al
085ef937 +0x0cf:  seta   %al
085ef93a +0x0d2:  test   %al,%al
085ef93c +0x0d4:  jne    085ef950 <+0xe8>
085ef93e +0x0d6:  movzbl -0xf(%ebp),%edx
085ef942 +0x0da:  movzwl -0xe(%ebp),%ecx
085ef946 +0x0de:  mov    -0x14(%ebp),%eax
085ef949 +0x0e1:  mov    %cx,0xc(%eax,%edx,2)
085ef94e +0x0e6:  jmp    085ef951 <+0xe9>
085ef950 +0x0e8:  nop
085ef951 +0x0e9:  lea    -0x20(%ebp),%eax
085ef954 +0x0ec:  mov    %eax,(%esp)
085ef957 +0x0ef:  call   0845416c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6d82>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6d82
085ef95c +0x0f4:  lea    -0x1c(%ebp),%eax
085ef95f +0x0f7:  mov    %eax,0x4(%esp)
085ef963 +0x0fb:  lea    -0x20(%ebp),%eax
085ef966 +0x0fe:  mov    %eax,(%esp)
085ef969 +0x101:  call   0845414a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6d60>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6d60
085ef96e +0x106:  test   %al,%al
085ef970 +0x108:  jne    085ef903 <+0x9b>
085ef972 +0x10a:  mov    -0x18(%ebp),%eax
085ef975 +0x10d:  add    $0xaa,%eax
085ef97a +0x112:  mov    %eax,-0x14(%ebp)
085ef97d +0x115:  mov    0x8(%ebp),%eax
085ef980 +0x118:  lea    0x20(%eax),%edx
085ef983 +0x11b:  lea    -0x2c(%ebp),%eax
085ef986 +0x11e:  mov    %edx,0x4(%esp)
085ef98a +0x122:  mov    %eax,(%esp)
085ef98d +0x125:  call   084540fe <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6d14>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6d14
085ef992 +0x12a:  sub    $0x4,%esp
085ef995 +0x12d:  mov    -0x2c(%ebp),%eax
085ef998 +0x130:  mov    %eax,-0x20(%ebp)
085ef99b +0x133:  mov    0x8(%ebp),%eax
085ef99e +0x136:  lea    0x20(%eax),%edx
085ef9a1 +0x139:  lea    -0x2c(%ebp),%eax
085ef9a4 +0x13c:  mov    %edx,0x4(%esp)
085ef9a8 +0x140:  mov    %eax,(%esp)
085ef9ab +0x143:  call   08454124 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6d3a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6d3a
085ef9b0 +0x148:  sub    $0x4,%esp
085ef9b3 +0x14b:  mov    -0x2c(%ebp),%eax
085ef9b6 +0x14e:  mov    %eax,-0x1c(%ebp)
085ef9b9 +0x151:  jmp    085efa14 <+0x1ac>
085ef9bb +0x153:  lea    -0x20(%ebp),%eax
085ef9be +0x156:  mov    %eax,(%esp)
085ef9c1 +0x159:  call   0845415e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6d74>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6d74
085ef9c6 +0x15e:  movzbl (%eax),%eax
085ef9c9 +0x161:  mov    %al,-0xb(%ebp)
085ef9cc +0x164:  lea    -0x20(%ebp),%eax
085ef9cf +0x167:  mov    %eax,(%esp)
085ef9d2 +0x16a:  call   0845415e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6d74>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6d74
085ef9d7 +0x16f:  movzwl 0x2(%eax),%eax
085ef9db +0x173:  mov    %ax,-0xa(%ebp)
085ef9df +0x177:  lea    -0x20(%ebp),%eax
085ef9e2 +0x17a:  mov    %eax,(%esp)
085ef9e5 +0x17d:  call   0845415e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6d74>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6d74
085ef9ea +0x182:  movzbl (%eax),%eax
085ef9ed +0x185:  cmp    $0x4c,%al
085ef9ef +0x187:  seta   %al
085ef9f2 +0x18a:  test   %al,%al
085ef9f4 +0x18c:  jne    085efa08 <+0x1a0>
085ef9f6 +0x18e:  movzbl -0xb(%ebp),%edx
085ef9fa +0x192:  movzwl -0xa(%ebp),%ecx
085ef9fe +0x196:  mov    -0x14(%ebp),%eax
085efa01 +0x199:  mov    %cx,0xc(%eax,%edx,2)
085efa06 +0x19e:  jmp    085efa09 <+0x1a1>
085efa08 +0x1a0:  nop
085efa09 +0x1a1:  lea    -0x20(%ebp),%eax
085efa0c +0x1a4:  mov    %eax,(%esp)
085efa0f +0x1a7:  call   0845416c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6d82>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6d82
085efa14 +0x1ac:  lea    -0x1c(%ebp),%eax
085efa17 +0x1af:  mov    %eax,0x4(%esp)
085efa1b +0x1b3:  lea    -0x20(%ebp),%eax
085efa1e +0x1b6:  mov    %eax,(%esp)
085efa21 +0x1b9:  call   0845414a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6d60>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6d60
085efa26 +0x1be:  test   %al,%al
085efa28 +0x1c0:  jne    085ef9bb <+0x153>
085efa2a +0x1c2:  leave
085efa2b +0x1c3:  ret
```

## 反编译 C

```c
// CQuestShop::getData @ 0x85ef868

/* CQuestShop::getData(char*) const */

void __thiscall CQuestShop::getData(CQuestShop *this,char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 local_30 [3];
  undefined4 local_24;
  undefined4 local_20;
  char *local_1c;
  char *local_18;
  byte local_13;
  undefined2 local_12;
  byte local_f;
  undefined2 local_e;
  
  local_1c = param_1;
  memset(param_1,0,0x155);
  local_18 = local_1c;
  uVar2 = getQp(this);
  *(undefined4 *)(local_18 + 4) = uVar2;
  uVar2 = getInitCount(this);
  *(undefined4 *)(local_18 + 8) = uVar2;
  uVar2 = getPiece(this);
  *(undefined4 *)(local_18 + 0xa6) = uVar2;
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::end((map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
         *)&local_20);
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::begin((map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
           *)&local_24);
  while( true ) {
    cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>> *)&local_24,
                       (_Rb_tree_const_iterator *)&local_20);
    if (cVar1 == '\0') break;
    pbVar3 = (byte *)std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>>::operator->
                               ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>> *)
                                &local_24);
    local_13 = *pbVar3;
    iVar4 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>> *)&local_24);
    local_12 = *(undefined2 *)(iVar4 + 2);
    pbVar3 = (byte *)std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>>::operator->
                               ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>> *)
                                &local_24);
    if (*pbVar3 < 0x4d) {
      *(undefined2 *)(local_18 + (uint)local_13 * 2 + 0xc) = local_12;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>>::operator++
              ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>> *)&local_24);
  }
  local_18 = local_1c + 0xaa;
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::begin((map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
           *)local_30);
  local_24 = local_30[0];
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::end((map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
         *)local_30);
  local_20 = local_30[0];
  while( true ) {
    cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>> *)&local_24,
                       (_Rb_tree_const_iterator *)&local_20);
    if (cVar1 == '\0') break;
    pbVar3 = (byte *)std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>>::operator->
                               ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>> *)
                                &local_24);
    local_f = *pbVar3;
    iVar4 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>> *)&local_24);
    local_e = *(undefined2 *)(iVar4 + 2);
    pbVar3 = (byte *)std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>>::operator->
                               ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>> *)
                                &local_24);
    if (*pbVar3 < 0x4d) {
      *(undefined2 *)(local_18 + (uint)local_f * 2 + 0xc) = local_e;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>>::operator++
              ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>> *)&local_24);
  }
  return;
}
```

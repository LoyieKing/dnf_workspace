# getStatusBuyingCount

`_ZN10CQuestShop20getStatusBuyingCountEh`

`CQuestShop::getStatusBuyingCount(unsigned char)`

| 类 | 地址 |
|---|---|
| `CQuestShop` | `0x085ef02e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ef02e  _ZN10CQuestShop20getStatusBuyingCountEh
#           CQuestShop::getStatusBuyingCount(unsigned char)
# range [0x085ef02e, 0x085ef0cd]
085ef02e +0x00:  push   %ebp
085ef02f +0x01:  mov    %esp,%ebp
085ef031 +0x03:  sub    $0x38,%esp
085ef034 +0x06:  mov    0xc(%ebp),%eax
085ef037 +0x09:  mov    %al,-0x1c(%ebp)
085ef03a +0x0c:  movzbl -0x1c(%ebp),%eax
085ef03e +0x10:  mov    %eax,0x4(%esp)
085ef042 +0x14:  mov    0x8(%ebp),%eax
085ef045 +0x17:  mov    %eax,(%esp)
085ef048 +0x1a:  call   085eee6a <_ZN10CQuestShop14findStatusTypeEh>  ; CQuestShop::findStatusType(unsigned char)
085ef04d +0x1f:  mov    %eax,-0xc(%ebp)
085ef050 +0x22:  cmpl   $0x4d,-0xc(%ebp)
085ef054 +0x26:  je     085ef05c <+0x2e>
085ef056 +0x28:  cmpl   $0xffffffff,-0xc(%ebp)
085ef05a +0x2c:  jne    085ef063 <+0x35>
085ef05c +0x2e:  mov    $0xffffffff,%eax
085ef061 +0x33:  jmp    085ef0cc <+0x9e>
085ef063 +0x35:  mov    -0xc(%ebp),%eax
085ef066 +0x38:  mov    %al,-0x11(%ebp)
085ef069 +0x3b:  mov    0x8(%ebp),%eax
085ef06c +0x3e:  lea    0x8(%eax),%ecx
085ef06f +0x41:  lea    -0x18(%ebp),%eax
085ef072 +0x44:  lea    -0x11(%ebp),%edx
085ef075 +0x47:  mov    %edx,0x8(%esp)
085ef079 +0x4b:  mov    %ecx,0x4(%esp)
085ef07d +0x4f:  mov    %eax,(%esp)
085ef080 +0x52:  call   0849fd46 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0xb77>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0xb77
085ef085 +0x57:  sub    $0x4,%esp
085ef088 +0x5a:  mov    0x8(%ebp),%eax
085ef08b +0x5d:  lea    0x8(%eax),%edx
085ef08e +0x60:  lea    -0x10(%ebp),%eax
085ef091 +0x63:  mov    %edx,0x4(%esp)
085ef095 +0x67:  mov    %eax,(%esp)
085ef098 +0x6a:  call   08450180 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2d96>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2d96
085ef09d +0x6f:  sub    $0x4,%esp
085ef0a0 +0x72:  lea    -0x10(%ebp),%eax
085ef0a3 +0x75:  mov    %eax,0x4(%esp)
085ef0a7 +0x79:  lea    -0x18(%ebp),%eax
085ef0aa +0x7c:  mov    %eax,(%esp)
085ef0ad +0x7f:  call   084501a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dbc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dbc
085ef0b2 +0x84:  test   %al,%al
085ef0b4 +0x86:  je     085ef0c7 <+0x99>
085ef0b6 +0x88:  lea    -0x18(%ebp),%eax
085ef0b9 +0x8b:  mov    %eax,(%esp)
085ef0bc +0x8e:  call   084501ba <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dd0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dd0
085ef0c1 +0x93:  movzwl 0x2(%eax),%eax
085ef0c5 +0x97:  jmp    085ef0cc <+0x9e>
085ef0c7 +0x99:  mov    $0x0,%eax
085ef0cc +0x9e:  leave
085ef0cd +0x9f:  ret
```

## 反编译 C

```c
// CQuestShop::getStatusBuyingCount @ 0x85ef02e

/* CQuestShop::getStatusBuyingCount(unsigned char) */

uint __thiscall CQuestShop::getStatusBuyingCount(CQuestShop *this,uchar param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<unsigned_char_const,short>> local_1c [7];
  undefined1 local_15;
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_14 [4];
  int local_10;
  
  local_10 = findStatusType(this,param_1);
  if ((local_10 == 0x4d) || (local_10 == -1)) {
    uVar2 = 0xffffffff;
  }
  else {
    local_15 = (undefined1)local_10;
    std::
    map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
    ::find((uchar *)local_1c);
    std::
    map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
    ::end(local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator!=
                      (local_1c,(_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->(local_1c);
      uVar2 = (uint)*(ushort *)(iVar3 + 2);
    }
  }
  return uVar2;
}
```

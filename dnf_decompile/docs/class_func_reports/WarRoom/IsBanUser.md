# IsBanUser

`_ZN7WarRoom9IsBanUserEP5CUser`

`WarRoom::IsBanUser(CUser*)`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086ba99e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ba99e  _ZN7WarRoom9IsBanUserEP5CUser
#           WarRoom::IsBanUser(CUser*)
# range [0x086ba99e, 0x086baa13]
086ba99e +0x00:  push   %ebp
086ba99f +0x01:  mov    %esp,%ebp
086ba9a1 +0x03:  sub    $0x28,%esp
086ba9a4 +0x06:  mov    0xc(%ebp),%eax
086ba9a7 +0x09:  mov    %eax,(%esp)
086ba9aa +0x0c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086ba9af +0x11:  mov    %eax,-0x10(%ebp)
086ba9b2 +0x14:  mov    0x8(%ebp),%eax
086ba9b5 +0x17:  lea    0x1d8(%eax),%ecx
086ba9bb +0x1d:  lea    -0x14(%ebp),%eax
086ba9be +0x20:  lea    -0x10(%ebp),%edx
086ba9c1 +0x23:  mov    %edx,0x8(%esp)
086ba9c5 +0x27:  mov    %ecx,0x4(%esp)
086ba9c9 +0x2b:  mov    %eax,(%esp)
086ba9cc +0x2e:  call   0845026c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2e82>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2e82
086ba9d1 +0x33:  sub    $0x4,%esp
086ba9d4 +0x36:  mov    0x8(%ebp),%eax
086ba9d7 +0x39:  lea    0x1d8(%eax),%edx
086ba9dd +0x3f:  lea    -0xc(%ebp),%eax
086ba9e0 +0x42:  mov    %edx,0x4(%esp)
086ba9e4 +0x46:  mov    %eax,(%esp)
086ba9e7 +0x49:  call   08450298 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2eae>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2eae
086ba9ec +0x4e:  sub    $0x4,%esp
086ba9ef +0x51:  lea    -0xc(%ebp),%eax
086ba9f2 +0x54:  mov    %eax,0x4(%esp)
086ba9f6 +0x58:  lea    -0x14(%ebp),%eax
086ba9f9 +0x5b:  mov    %eax,(%esp)
086ba9fc +0x5e:  call   084502be <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2ed4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2ed4
086baa01 +0x63:  test   %al,%al
086baa03 +0x65:  je     086baa0c <+0x6e>
086baa05 +0x67:  mov    $0x1,%eax
086baa0a +0x6c:  jmp    086baa11 <+0x73>
086baa0c +0x6e:  mov    $0x0,%eax
086baa11 +0x73:  leave
086baa12 +0x74:  ret
086baa13 +0x75:  nop
```

## 反编译 C

```c
// WarRoom::IsBanUser @ 0x86ba99e

/* WarRoom::IsBanUser(CUser*) */

bool __thiscall WarRoom::IsBanUser(WarRoom *this,CUser *param_1)

{
  char cVar1;
  _Rb_tree_iterator<std::pair<unsigned_int_const,int>> local_18 [4];
  undefined4 local_14;
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
  local_10 [12];
  
  local_14 = CUser::get_acc_id(param_1);
  std::
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>::
  find((uint *)local_18);
  std::
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>::
  end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator!=
                    (local_18,(_Rb_tree_iterator *)local_10);
  return cVar1 != '\0';
}
```

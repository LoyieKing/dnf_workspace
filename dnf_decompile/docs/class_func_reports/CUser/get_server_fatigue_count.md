# get_server_fatigue_count

`_ZN5CUser24get_server_fatigue_countEh`

`CUser::get_server_fatigue_count(unsigned char)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868d3fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868d3fe  _ZN5CUser24get_server_fatigue_countEh
#           CUser::get_server_fatigue_count(unsigned char)
# range [0x0868d3fe, 0x0868d475]
0868d3fe +0x00:  push   %ebp
0868d3ff +0x01:  mov    %esp,%ebp
0868d401 +0x03:  sub    $0x38,%esp
0868d404 +0x06:  mov    0xc(%ebp),%eax
0868d407 +0x09:  mov    %al,-0x1c(%ebp)
0868d40a +0x0c:  mov    0x8(%ebp),%eax
0868d40d +0x0f:  lea    0x8eb50(%eax),%ecx
0868d413 +0x15:  lea    -0x10(%ebp),%eax
0868d416 +0x18:  lea    -0x1c(%ebp),%edx
0868d419 +0x1b:  mov    %edx,0x8(%esp)
0868d41d +0x1f:  mov    %ecx,0x4(%esp)
0868d421 +0x23:  mov    %eax,(%esp)
0868d424 +0x26:  call   0849fd46 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0xb77>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0xb77
0868d429 +0x2b:  sub    $0x4,%esp
0868d42c +0x2e:  mov    0x8(%ebp),%eax
0868d42f +0x31:  lea    0x8eb50(%eax),%edx
0868d435 +0x37:  lea    -0xc(%ebp),%eax
0868d438 +0x3a:  mov    %edx,0x4(%esp)
0868d43c +0x3e:  mov    %eax,(%esp)
0868d43f +0x41:  call   08450180 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2d96>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2d96
0868d444 +0x46:  sub    $0x4,%esp
0868d447 +0x49:  lea    -0xc(%ebp),%eax
0868d44a +0x4c:  mov    %eax,0x4(%esp)
0868d44e +0x50:  lea    -0x10(%ebp),%eax
0868d451 +0x53:  mov    %eax,(%esp)
0868d454 +0x56:  call   084501a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dbc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dbc
0868d459 +0x5b:  test   %al,%al
0868d45b +0x5d:  je     0868d46e <+0x70>
0868d45d +0x5f:  lea    -0x10(%ebp),%eax
0868d460 +0x62:  mov    %eax,(%esp)
0868d463 +0x65:  call   084501ba <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dd0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dd0
0868d468 +0x6a:  movzwl 0x2(%eax),%eax
0868d46c +0x6e:  jmp    0868d473 <+0x75>
0868d46e +0x70:  mov    $0x0,%eax
0868d473 +0x75:  leave
0868d474 +0x76:  ret
0868d475 +0x77:  nop
```

## 反编译 C

```c
// CUser::get_server_fatigue_count @ 0x868d3fe

/* CUser::get_server_fatigue_count(unsigned char) */

undefined2 CUser::get_server_fatigue_count(uchar param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<unsigned_char_const,short>> local_14 [4];
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_10 [12];
  
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::find((uchar *)local_14);
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->(local_14);
    uVar2 = *(undefined2 *)(iVar3 + 2);
  }
  return uVar2;
}
```

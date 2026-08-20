# clearScript

`_ZN4ARAD6SCRIPT13AvatarConvert11clearScriptEv`

`ARAD::SCRIPT::AvatarConvert::clearScript()`

| 类 | 地址 |
|---|---|
| `ARAD::SCRIPT::AvatarConvert` | `0x088b1dc2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088b1dc2  _ZN4ARAD6SCRIPT13AvatarConvert11clearScriptEv
#           ARAD::SCRIPT::AvatarConvert::clearScript()
# range [0x088b1dc2, 0x088b1e47]
088b1dc2 +0x00:  push   %ebp
088b1dc3 +0x01:  mov    %esp,%ebp
088b1dc5 +0x03:  push   %ebx
088b1dc6 +0x04:  sub    $0x24,%esp
088b1dc9 +0x07:  mov    0x8(%ebp),%edx
088b1dcc +0x0a:  lea    -0xc(%ebp),%eax
088b1dcf +0x0d:  mov    %edx,0x4(%esp)
088b1dd3 +0x11:  mov    %eax,(%esp)
088b1dd6 +0x14:  call   088b2382 <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x485>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x485
088b1ddb +0x19:  sub    $0x4,%esp
088b1dde +0x1c:  mov    0x8(%ebp),%edx
088b1de1 +0x1f:  lea    -0x10(%ebp),%eax
088b1de4 +0x22:  mov    %edx,0x4(%esp)
088b1de8 +0x26:  mov    %eax,(%esp)
088b1deb +0x29:  call   088b22ee <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x3f1>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x3f1
088b1df0 +0x2e:  sub    $0x4,%esp
088b1df3 +0x31:  jmp    088b1e22 <+0x60>
088b1df5 +0x33:  lea    -0xc(%ebp),%eax
088b1df8 +0x36:  mov    %eax,(%esp)
088b1dfb +0x39:  call   088b23bc <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x4bf>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x4bf
088b1e00 +0x3e:  mov    0x4(%eax),%ebx
088b1e03 +0x41:  test   %ebx,%ebx
088b1e05 +0x43:  je     088b1e17 <+0x55>
088b1e07 +0x45:  mov    %ebx,(%esp)
088b1e0a +0x48:  call   088b1f8e <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x91>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x91
088b1e0f +0x4d:  mov    %ebx,(%esp)
088b1e12 +0x50:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
088b1e17 +0x55:  lea    -0xc(%ebp),%eax
088b1e1a +0x58:  mov    %eax,(%esp)
088b1e1d +0x5b:  call   088b23ca <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x4cd>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x4cd
088b1e22 +0x60:  lea    -0x10(%ebp),%eax
088b1e25 +0x63:  mov    %eax,0x4(%esp)
088b1e29 +0x67:  lea    -0xc(%ebp),%eax
088b1e2c +0x6a:  mov    %eax,(%esp)
088b1e2f +0x6d:  call   088b23a8 <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x4ab>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x4ab
088b1e34 +0x72:  test   %al,%al
088b1e36 +0x74:  jne    088b1df5 <+0x33>
088b1e38 +0x76:  mov    0x8(%ebp),%eax
088b1e3b +0x79:  mov    %eax,(%esp)
088b1e3e +0x7c:  call   088b23e8 <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x4eb>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x4eb
088b1e43 +0x81:  mov    -0x4(%ebp),%ebx
088b1e46 +0x84:  leave
088b1e47 +0x85:  ret
```

## 反编译 C

```c
// ARAD::SCRIPT::AvatarConvert::clearScript @ 0x88b1dc2

/* ARAD::SCRIPT::AvatarConvert::clearScript() */

void __thiscall ARAD::SCRIPT::AvatarConvert::clearScript(AvatarConvert *this)

{
  ConvertResult *this_00;
  char cVar1;
  int iVar2;
  map<int,ARAD::SCRIPT::AvatarConvert::ConvertResult*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>>
  local_14 [4];
  map<int,ARAD::SCRIPT::AvatarConvert::ConvertResult*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>>
  local_10 [8];
  
  std::
  map<int,ARAD::SCRIPT::AvatarConvert::ConvertResult*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>>
  ::begin(local_10);
  std::
  map<int,ARAD::SCRIPT::AvatarConvert::ConvertResult*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>>
  ::end(local_14);
  while( true ) {
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>
            ::operator!=((_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>
                          *)local_10,(_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>
            ::operator->((_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>
                          *)local_10);
    this_00 = *(ConvertResult **)(iVar2 + 4);
    if (this_00 != (ConvertResult *)0x0) {
      ConvertResult::~ConvertResult(this_00);
      operator_delete(this_00);
    }
    std::_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>::
    operator++((_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>
                *)local_10);
  }
  std::
  map<int,ARAD::SCRIPT::AvatarConvert::ConvertResult*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>>
  ::clear((map<int,ARAD::SCRIPT::AvatarConvert::ConvertResult*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>>
           *)this);
  return;
}
```

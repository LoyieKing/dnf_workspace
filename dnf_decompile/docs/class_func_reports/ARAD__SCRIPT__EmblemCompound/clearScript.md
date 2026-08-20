# clearScript

`_ZN4ARAD6SCRIPT14EmblemCompound11clearScriptEv`

`ARAD::SCRIPT::EmblemCompound::clearScript()`

| 类 | 地址 |
|---|---|
| `ARAD::SCRIPT::EmblemCompound` | `0x088b1926` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088b1926  _ZN4ARAD6SCRIPT14EmblemCompound11clearScriptEv
#           ARAD::SCRIPT::EmblemCompound::clearScript()
# range [0x088b1926, 0x088b19af]
088b1926 +0x00:  push   %ebp
088b1927 +0x01:  mov    %esp,%ebp
088b1929 +0x03:  sub    $0x28,%esp
088b192c +0x06:  mov    0x8(%ebp),%eax
088b192f +0x09:  mov    %eax,(%esp)
088b1932 +0x0c:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
088b1937 +0x11:  mov    0x8(%ebp),%eax
088b193a +0x14:  lea    0x18(%eax),%edx
088b193d +0x17:  lea    -0xc(%ebp),%eax
088b1940 +0x1a:  mov    %edx,0x4(%esp)
088b1944 +0x1e:  mov    %eax,(%esp)
088b1947 +0x21:  call   088b20da <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x1dd>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x1dd
088b194c +0x26:  sub    $0x4,%esp
088b194f +0x29:  mov    0x8(%ebp),%eax
088b1952 +0x2c:  lea    0x18(%eax),%edx
088b1955 +0x2f:  lea    -0x10(%ebp),%eax
088b1958 +0x32:  mov    %edx,0x4(%esp)
088b195c +0x36:  mov    %eax,(%esp)
088b195f +0x39:  call   08193a2e <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x696>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x696
088b1964 +0x3e:  sub    $0x4,%esp
088b1967 +0x41:  jmp    088b198a <+0x64>
088b1969 +0x43:  lea    -0xc(%ebp),%eax
088b196c +0x46:  mov    %eax,(%esp)
088b196f +0x49:  call   088b2114 <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x217>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x217
088b1974 +0x4e:  mov    0x4(%eax),%eax
088b1977 +0x51:  mov    %eax,(%esp)
088b197a +0x54:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
088b197f +0x59:  lea    -0xc(%ebp),%eax
088b1982 +0x5c:  mov    %eax,(%esp)
088b1985 +0x5f:  call   088b2122 <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x225>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x225
088b198a +0x64:  lea    -0x10(%ebp),%eax
088b198d +0x67:  mov    %eax,0x4(%esp)
088b1991 +0x6b:  lea    -0xc(%ebp),%eax
088b1994 +0x6e:  mov    %eax,(%esp)
088b1997 +0x71:  call   088b2100 <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x203>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x203
088b199c +0x76:  test   %al,%al
088b199e +0x78:  jne    088b1969 <+0x43>
088b19a0 +0x7a:  mov    0x8(%ebp),%eax
088b19a3 +0x7d:  add    $0x18,%eax
088b19a6 +0x80:  mov    %eax,(%esp)
088b19a9 +0x83:  call   088b2140 <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x243>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x243
088b19ae +0x88:  leave
088b19af +0x89:  ret
```

## 反编译 C

```c
// ARAD::SCRIPT::EmblemCompound::clearScript @ 0x88b1926

/* ARAD::SCRIPT::EmblemCompound::clearScript() */

void __thiscall ARAD::SCRIPT::EmblemCompound::clearScript(EmblemCompound *this)

{
  char cVar1;
  int iVar2;
  map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
  local_14 [4];
  map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
  local_10 [12];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)this);
  std::
  map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
  ::begin(local_10);
  std::
  map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
  ::end(local_14);
  while( true ) {
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>::
            operator!=((_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>
                        *)local_10,(_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>::
            operator->((_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>
                        *)local_10);
    operator_delete(*(void **)(iVar2 + 4));
    std::_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>> *)
               local_10);
  }
  std::
  map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
  ::clear((map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
           *)(this + 0x18));
  return;
}
```

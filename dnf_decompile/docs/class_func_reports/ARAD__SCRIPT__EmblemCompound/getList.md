# getList

`_ZN4ARAD6SCRIPT14EmblemCompound7getListEi`

`ARAD::SCRIPT::EmblemCompound::getList(int)`

| 类 | 地址 |
|---|---|
| `ARAD::SCRIPT::EmblemCompound` | `0x088b1a7e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088b1a7e  _ZN4ARAD6SCRIPT14EmblemCompound7getListEi
#           ARAD::SCRIPT::EmblemCompound::getList(int)
# range [0x088b1a7e, 0x088b1b0d]
088b1a7e +0x00:  push   %ebp
088b1a7f +0x01:  mov    %esp,%ebp
088b1a81 +0x03:  sub    $0x38,%esp
088b1a84 +0x06:  lea    -0x10(%ebp),%eax
088b1a87 +0x09:  mov    %eax,(%esp)
088b1a8a +0x0c:  call   088b2154 <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x257>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x257
088b1a8f +0x11:  mov    0x8(%ebp),%eax
088b1a92 +0x14:  lea    0x18(%eax),%ecx
088b1a95 +0x17:  lea    -0x1c(%ebp),%eax
088b1a98 +0x1a:  lea    0xc(%ebp),%edx
088b1a9b +0x1d:  mov    %edx,0x8(%esp)
088b1a9f +0x21:  mov    %ecx,0x4(%esp)
088b1aa3 +0x25:  mov    %eax,(%esp)
088b1aa6 +0x28:  call   088b2054 <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x157>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x157
088b1aab +0x2d:  sub    $0x4,%esp
088b1aae +0x30:  mov    -0x1c(%ebp),%eax
088b1ab1 +0x33:  mov    %eax,-0x10(%ebp)
088b1ab4 +0x36:  mov    0x8(%ebp),%eax
088b1ab7 +0x39:  lea    0x18(%eax),%edx
088b1aba +0x3c:  lea    -0xc(%ebp),%eax
088b1abd +0x3f:  mov    %edx,0x4(%esp)
088b1ac1 +0x43:  mov    %eax,(%esp)
088b1ac4 +0x46:  call   08193a2e <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x696>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x696
088b1ac9 +0x4b:  sub    $0x4,%esp
088b1acc +0x4e:  lea    -0xc(%ebp),%eax
088b1acf +0x51:  mov    %eax,0x4(%esp)
088b1ad3 +0x55:  lea    -0x10(%ebp),%eax
088b1ad6 +0x58:  mov    %eax,(%esp)
088b1ad9 +0x5b:  call   088b2100 <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x203>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x203
088b1ade +0x60:  test   %al,%al
088b1ae0 +0x62:  je     088b1b07 <+0x89>
088b1ae2 +0x64:  lea    -0x10(%ebp),%eax
088b1ae5 +0x67:  mov    %eax,(%esp)
088b1ae8 +0x6a:  call   088b2114 <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x217>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x217
088b1aed +0x6f:  mov    0x4(%eax),%eax
088b1af0 +0x72:  movzwl (%eax),%eax
088b1af3 +0x75:  movswl %ax,%edx
088b1af6 +0x78:  mov    %edx,%eax
088b1af8 +0x7a:  add    %eax,%eax
088b1afa +0x7c:  add    %edx,%eax
088b1afc +0x7e:  shl    $0x2,%eax
088b1aff +0x81:  add    $0x30,%eax
088b1b02 +0x84:  add    0x8(%ebp),%eax
088b1b05 +0x87:  jmp    088b1b0c <+0x8e>
088b1b07 +0x89:  mov    $0x0,%eax
088b1b0c +0x8e:  leave
088b1b0d +0x8f:  ret
```

## 反编译 C

```c
// ARAD::SCRIPT::EmblemCompound::getList @ 0x88b1a7e

/* ARAD::SCRIPT::EmblemCompound::getList(int) */

int ARAD::SCRIPT::EmblemCompound::getList(int param_1)

{
  char cVar1;
  int iVar2;
  int local_20 [3];
  int local_14;
  map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
  local_10 [12];
  
  std::_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>::
  _Rb_tree_iterator((_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>> *
                    )&local_14);
  std::
  map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
  ::find(local_20);
  local_14 = local_20[0];
  std::
  map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>::
          operator!=((_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>
                      *)&local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>::
            operator->((_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>
                        *)&local_14);
    iVar2 = **(short **)(iVar2 + 4) * 0xc + 0x30 + param_1;
  }
  return iVar2;
}
```

# getResult

`_ZN4ARAD6SCRIPT14EmblemCompound9getResultEi`

`ARAD::SCRIPT::EmblemCompound::getResult(int)`

| 类 | 地址 |
|---|---|
| `ARAD::SCRIPT::EmblemCompound` | `0x088b1a14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088b1a14  _ZN4ARAD6SCRIPT14EmblemCompound9getResultEi
#           ARAD::SCRIPT::EmblemCompound::getResult(int)
# range [0x088b1a14, 0x088b1a7d]
088b1a14 +0x00:  push   %ebp
088b1a15 +0x01:  mov    %esp,%ebp
088b1a17 +0x03:  sub    $0x28,%esp
088b1a1a +0x06:  mov    0x8(%ebp),%eax
088b1a1d +0x09:  lea    0x18(%eax),%ecx
088b1a20 +0x0c:  lea    -0x10(%ebp),%eax
088b1a23 +0x0f:  lea    0xc(%ebp),%edx
088b1a26 +0x12:  mov    %edx,0x8(%esp)
088b1a2a +0x16:  mov    %ecx,0x4(%esp)
088b1a2e +0x1a:  mov    %eax,(%esp)
088b1a31 +0x1d:  call   088b2054 <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x157>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x157
088b1a36 +0x22:  sub    $0x4,%esp
088b1a39 +0x25:  mov    0x8(%ebp),%eax
088b1a3c +0x28:  lea    0x18(%eax),%edx
088b1a3f +0x2b:  lea    -0xc(%ebp),%eax
088b1a42 +0x2e:  mov    %edx,0x4(%esp)
088b1a46 +0x32:  mov    %eax,(%esp)
088b1a49 +0x35:  call   08193a2e <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x696>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x696
088b1a4e +0x3a:  sub    $0x4,%esp
088b1a51 +0x3d:  lea    -0xc(%ebp),%eax
088b1a54 +0x40:  mov    %eax,0x4(%esp)
088b1a58 +0x44:  lea    -0x10(%ebp),%eax
088b1a5b +0x47:  mov    %eax,(%esp)
088b1a5e +0x4a:  call   088b2100 <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x203>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x203
088b1a63 +0x4f:  test   %al,%al
088b1a65 +0x51:  je     088b1a77 <+0x63>
088b1a67 +0x53:  lea    -0x10(%ebp),%eax
088b1a6a +0x56:  mov    %eax,(%esp)
088b1a6d +0x59:  call   088b2114 <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x217>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x217
088b1a72 +0x5e:  mov    0x4(%eax),%eax
088b1a75 +0x61:  jmp    088b1a7c <+0x68>
088b1a77 +0x63:  mov    $0x0,%eax
088b1a7c +0x68:  leave
088b1a7d +0x69:  ret
```

## 反编译 C

```c
// ARAD::SCRIPT::EmblemCompound::getResult @ 0x88b1a14

/* ARAD::SCRIPT::EmblemCompound::getResult(int) */

undefined4 ARAD::SCRIPT::EmblemCompound::getResult(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>> local_14 [4];
  map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
  local_10 [12];
  
  std::
  map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
  ::find((int *)local_14);
  std::
  map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>::
          operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>::
            operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```

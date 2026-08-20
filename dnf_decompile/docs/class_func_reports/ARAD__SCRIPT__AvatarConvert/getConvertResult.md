# getConvertResult

`_ZN4ARAD6SCRIPT13AvatarConvert16getConvertResultEi`

`ARAD::SCRIPT::AvatarConvert::getConvertResult(int)`

| 类 | 地址 |
|---|---|
| `ARAD::SCRIPT::AvatarConvert` | `0x088b1e48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088b1e48  _ZN4ARAD6SCRIPT13AvatarConvert16getConvertResultEi
#           ARAD::SCRIPT::AvatarConvert::getConvertResult(int)
# range [0x088b1e48, 0x088b1ebc]
088b1e48 +0x00:  push   %ebp
088b1e49 +0x01:  mov    %esp,%ebp
088b1e4b +0x03:  sub    $0x38,%esp
088b1e4e +0x06:  lea    -0x10(%ebp),%eax
088b1e51 +0x09:  mov    %eax,(%esp)
088b1e54 +0x0c:  call   088b23fc <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x4ff>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x4ff
088b1e59 +0x11:  mov    0x8(%ebp),%edx
088b1e5c +0x14:  lea    -0x1c(%ebp),%eax
088b1e5f +0x17:  lea    0xc(%ebp),%ecx
088b1e62 +0x1a:  mov    %ecx,0x8(%esp)
088b1e66 +0x1e:  mov    %edx,0x4(%esp)
088b1e6a +0x22:  mov    %eax,(%esp)
088b1e6d +0x25:  call   088b22c2 <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x3c5>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x3c5
088b1e72 +0x2a:  sub    $0x4,%esp
088b1e75 +0x2d:  mov    -0x1c(%ebp),%eax
088b1e78 +0x30:  mov    %eax,-0x10(%ebp)
088b1e7b +0x33:  mov    0x8(%ebp),%edx
088b1e7e +0x36:  lea    -0xc(%ebp),%eax
088b1e81 +0x39:  mov    %edx,0x4(%esp)
088b1e85 +0x3d:  mov    %eax,(%esp)
088b1e88 +0x40:  call   088b22ee <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x3f1>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x3f1
088b1e8d +0x45:  sub    $0x4,%esp
088b1e90 +0x48:  lea    -0xc(%ebp),%eax
088b1e93 +0x4b:  mov    %eax,0x4(%esp)
088b1e97 +0x4f:  lea    -0x10(%ebp),%eax
088b1e9a +0x52:  mov    %eax,(%esp)
088b1e9d +0x55:  call   088b23a8 <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x4ab>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x4ab
088b1ea2 +0x5a:  test   %al,%al
088b1ea4 +0x5c:  je     088b1eb6 <+0x6e>
088b1ea6 +0x5e:  lea    -0x10(%ebp),%eax
088b1ea9 +0x61:  mov    %eax,(%esp)
088b1eac +0x64:  call   088b23bc <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x4bf>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x4bf
088b1eb1 +0x69:  mov    0x4(%eax),%eax
088b1eb4 +0x6c:  jmp    088b1ebb <+0x73>
088b1eb6 +0x6e:  mov    $0x0,%eax
088b1ebb +0x73:  leave
088b1ebc +0x74:  ret
```

## 反编译 C

```c
// ARAD::SCRIPT::AvatarConvert::getConvertResult @ 0x88b1e48

/* ARAD::SCRIPT::AvatarConvert::getConvertResult(int) */

undefined4 ARAD::SCRIPT::AvatarConvert::getConvertResult(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_20 [3];
  int local_14;
  map<int,ARAD::SCRIPT::AvatarConvert::ConvertResult*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>>
  local_10 [12];
  
  std::_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>::
  _Rb_tree_iterator((_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>
                     *)&local_14);
  std::
  map<int,ARAD::SCRIPT::AvatarConvert::ConvertResult*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>>
  ::find(local_20);
  local_14 = local_20[0];
  std::
  map<int,ARAD::SCRIPT::AvatarConvert::ConvertResult*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>::
          operator!=((_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>
                      *)&local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>
            ::operator->((_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>
                          *)&local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
